/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Environment
import Lean.Data.NameTrie

namespace Lean

namespace ScopedEnvExtension

inductive Entry (α : Type) where
  | global   : α → Entry α
  | «scoped» : Name → α → Entry α

structure State (σ : Type) where
  state        : σ
  activeScopes : NameSet := {}

structure ScopedEntries (β : Type) where
  map : SMap Name (Std.PArray β) := {}

structure StateStack (α : Type) (β : Type) (σ : Type) where
  stateStack    : List (State σ) := {}
  scopedEntries : ScopedEntries β := {}
  newEntries    : List (Entry α) := []

instance : Inhabited (StateStack α β σ) where
  default := {}

structure Descr (α : Type) (β : Type) (σ : Type) where
  name           : Name
  mkInitial      : IO σ
  ofOLeanEntry   : σ → α → ImportM β
  toOLeanEntry   : β → α
  addEntry       : σ → β → σ
  eraseEntry     : σ → β → σ

instance [Inhabited α] : Inhabited (Descr α β σ) where
  default := {
    name         := arbitrary
    mkInitial    := arbitrary
    ofOLeanEntry := arbitrary
    toOLeanEntry := arbitrary
    addEntry     := fun s _ => s
    eraseEntry   := fun s _ => s
  }

def mkInitial (descr : Descr α β σ) : IO (StateStack α β σ) :=
  return { stateStack := [ { state := (← descr.mkInitial ) } ] }

def ScopedEntries.insert (scopedEntries : ScopedEntries β) (ns : Name) (b : β) : ScopedEntries β :=
  match scopedEntries.map.find? ns with
  | none    => { map := scopedEntries.map.insert ns <| ({} : Std.PArray β).push b }
  | some bs => { map := scopedEntries.map.insert ns <| bs.push b }

def addImportedFn (descr : Descr α β σ) (as : Array (Array (Entry α))) : ImportM (StateStack α β σ) := do
  let mut s ← descr.mkInitial
  let mut scopedEntries : ScopedEntries β := {}
  for a in as do
    for e in a do
      match e with
      | Entry.global a =>
        let b ← descr.ofOLeanEntry s a
        s := descr.addEntry s b
      | Entry.scoped ns a =>
        let b ← descr.ofOLeanEntry s a
        scopedEntries := scopedEntries.insert ns b
  return { stateStack := [ { state := s } ], scopedEntries := scopedEntries }

def addEntryFn (descr : Descr α β σ) (s : StateStack α β σ) (e : Entry β) : StateStack α β σ :=
  match s with
  | { stateStack := stateStack, scopedEntries := scopedEntries, newEntries := newEntries } =>
    match e with
    | Entry.global b => {
        scopedEntries := scopedEntries
        newEntries    := (Entry.global (descr.toOLeanEntry b)) :: newEntries
        stateStack    := stateStack.map fun s => { s with state := descr.addEntry s.state b }
      }
    | Entry.«scoped» ns b => {
        scopedEntries := scopedEntries.insert ns b
        newEntries    := (Entry.«scoped» ns (descr.toOLeanEntry b)) :: newEntries
        stateStack    := stateStack.map fun s =>
          if s.activeScopes.contains ns then
            { s with state := descr.addEntry s.state b }
          else
            s
      }

def exportEntriesFn (s : StateStack α β σ) : Array (Entry α) :=
  s.newEntries.toArray.reverse

end ScopedEnvExtension

open ScopedEnvExtension

structure ScopedEnvExtension (α : Type) (β : Type) (σ : Type) where
  descr : Descr α β σ
  ext   : PersistentEnvExtension (Entry α) (Entry β) (StateStack α β σ)

instance [Inhabited α] : Inhabited (ScopedEnvExtension α β σ) where
  default := {
    descr := arbitrary
    ext   := arbitrary
  }

def registerScopedEnvExtension (descr : Descr α β σ) : IO (ScopedEnvExtension α β σ) := do
  let ext ← registerPersistentEnvExtension {
    name            := descr.name
    mkInitial       := mkInitial descr
    addImportedFn   := addImportedFn descr
    addEntryFn      := addEntryFn descr
    exportEntriesFn := exportEntriesFn
    statsFn         := fun s => format "number of local entries: " ++ format s.newEntries.length
  }
  return { descr := descr, ext := ext }

def ScopedEnvExtension.pushScope (ext : ScopedEnvExtension α β σ) (env : Environment) : Environment :=
  let s := ext.ext.getState env
  match s.stateStack with
  | [] => env
  | state :: stack => ext.ext.setState env { s with stateStack := state :: state :: stack }

def ScopedEnvExtension.popScope (ext : ScopedEnvExtension α β σ) (env : Environment) : Environment :=
  let s := ext.ext.getState env
  match s.stateStack with
  | state₁ :: state₂ :: stack => ext.ext.setState env { s with stateStack := state₂ :: stack }
  | _ => env

def ScopedEnvExtension.addEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  ext.ext.addEntry env (Entry.global b)

def ScopedEnvExtension.addScopedEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (namespaceName : Name) (b : β) : Environment :=
  ext.ext.addEntry env (Entry.«scoped» namespaceName b)

def ScopedEnvExtension.getState [Inhabited σ] (ext : ScopedEnvExtension α β σ) (env : Environment) : σ :=
  match ext.ext.getState env |>.stateStack with
  | top :: _ => top.state
  | _        => unreachable!

def ScopedEnvExtension.eraseEntry (ext : ScopedEnvExtension α β σ) (env : Environment) (b : β) : Environment :=
  let s := ext.ext.getState env
  match s.stateStack with
  | top :: stack =>
    let top := { top with state := ext.descr.eraseEntry top.state b }
    ext.ext.setState env { s with stateStack := top :: stack }
  | _ => env

def ScopedEnvExtension.activateScoped (ext : ScopedEnvExtension α β σ) (env : Environment) (namespaceName : Name) : Environment :=
  let s := ext.ext.getState env
  match s.stateStack with
  | top :: stack =>
    if top.activeScopes.contains namespaceName then
      env
    else
      let activeScopes := top.activeScopes.insert namespaceName
      let top :=
        match s.scopedEntries.map.find? namespaceName with
        | none =>
          { top with activeScopes := activeScopes }
        | some bs => do
          let mut state := top.state
          for b in bs do
            state := ext.descr.addEntry state b
          { state := state, activeScopes := activeScopes }
      ext.ext.setState env { s with stateStack := top :: stack }
  | _ => env

end Lean