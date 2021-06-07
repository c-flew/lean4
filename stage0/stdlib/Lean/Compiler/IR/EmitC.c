// Lean compiler output
// Module: Lean.Compiler.IR.EmitC
// Imports: Init Lean.Runtime Lean.Compiler.NameMangling Lean.Compiler.ExportAttr Lean.Compiler.InitAttr Lean.Compiler.IR.CompilerM Lean.Compiler.IR.EmitUtil Lean.Compiler.IR.NormIds Lean.Compiler.IR.SimpCase Lean.Compiler.IR.Boxing
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnBody___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Std_RBNode_revFold___at_Lean_IR_EmitC_emitFnDecls___spec__4(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFileHeader___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMarkPersistent___closed__1;
lean_object* l_Lean_IR_EmitC_emitCase___closed__1;
lean_object* l_Lean_IR_EmitC_emitBlock___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_argToCString___closed__1;
lean_object* l_Lean_IR_EmitC_emitReuse___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
lean_object* l_Lean_IR_EmitC_toStringArgs(lean_object*);
lean_object* l_Lean_IR_EmitC_emitSProj___closed__4;
lean_object* l_Lean_IR_EmitC_toCType___closed__7;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__1;
lean_object* l_Lean_IR_EmitC_emitCInitName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInc___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2;
lean_object* l_Lean_IR_EmitC_emitMarkPersistent___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitUnbox___closed__4;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__4;
lean_object* l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
lean_object* l_Lean_IR_EmitC_quoteString___lambda__1(lean_object*, uint32_t);
lean_object* l_Lean_IR_EmitC_emitSetTag(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3;
lean_object* l_Lean_IR_EmitC_emitDel___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_getJPParams_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedString;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1;
lean_object* l_Lean_IR_EmitC_emitMainFn___closed__1;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__8;
lean_object* l_Lean_IR_EmitC_emitFileHeader___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1;
lean_object* l_Lean_IR_EmitC_emitDel___closed__1;
lean_object* l_Lean_IR_EmitC_emit(lean_object*);
lean_object* l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__17;
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitIsShared(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1;
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2;
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__10;
lean_object* l_Lean_IR_EmitC_declareVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCase___closed__2;
lean_object* l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__11;
lean_object* l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitAllocCtor___closed__1;
lean_object* l_Lean_IR_EmitC_emitCName___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Char_quote___closed__1;
lean_object* l_Lean_IR_EmitC_emitFnDeclAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___closed__2;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitAllocCtor___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___closed__3;
lean_object* l_Lean_IR_EmitC_emitInc___closed__3;
extern lean_object* l_Lean_IR_instToStringJoinPointId___closed__1;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__9;
lean_object* l_Lean_IR_EmitC_getDecl___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toHexDigit(lean_object*);
lean_object* l_Lean_IR_EmitC_emitJmp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_imports(lean_object*);
lean_object* l_Lean_IR_EmitC_getDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSProj___closed__2;
lean_object* l_Lean_IR_EmitC_throwUnknownVar___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclInit_match__1(lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_collectUsedDecls(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet___closed__6;
lean_object* l_Lean_IR_EmitC_emitInc___closed__5;
lean_object* l_Lean_IR_EmitC_isTailCall_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitSProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20;
lean_object* l_Lean_IR_EmitC_emitBlock_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_isIf_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___closed__3;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSProj___closed__1;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4;
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Lean_IR_EmitC_emitBoxFn_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitSProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet_match__1(lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitJmp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_getEnv___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___closed__5;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7;
lean_object* l_Lean_IR_EmitC_emitLn___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_getJPParams_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitUnbox___closed__2;
lean_object* l_Lean_IR_EmitC_emitVDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1;
lean_object* l_Lean_IR_EmitC_emitBoxFn_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_expandExternPattern(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDel(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFullApp_match__1(lean_object*);
extern lean_object* l_Lean_instInhabitedParserDescr___closed__1;
extern lean_object* l_Lean_closureMaxArgs;
uint8_t l_Lean_IR_IRType_isIrrelevant(lean_object*);
lean_object* l_Lean_IR_EmitC_emitBlock___closed__4;
lean_object* l_Lean_IR_EmitC_emitMarkPersistent(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitApp___closed__3;
lean_object* lean_ir_emit_c(lean_object*, lean_object*);
uint8_t l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitApp___closed__5;
lean_object* l_Lean_IR_EmitC_emitLhs___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_quote___closed__2;
lean_object* l_Lean_IR_EmitC_emitBlock___closed__2;
lean_object* l_Lean_IR_EmitC_Context_mainFn___default;
lean_object* l_Lean_IR_EmitC_emitUnbox___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitReset___closed__4;
lean_object* l_Lean_IR_EmitC_emitJP___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__19;
lean_object* l_Lean_IR_EmitC_emitSProj___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLn___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_IR_EmitC_emitReuse___closed__2;
extern lean_object* l_termDepIfThenElse___closed__24;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBlock___closed__1;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16;
lean_object* l_Lean_IR_EmitC_emitFnDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCase_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitExternCall_match__1(lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLit_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternNameFor(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_quoteString___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFnDeclAux___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_EmitC_toCName_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_quoteString___boxed(lean_object*);
lean_object* l_Lean_IR_EmitC_emitSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitCtorSetArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1;
lean_object* l_Lean_IR_EmitC_emitCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_hasMainFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitUnbox___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtorScalarSize(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_isTailCallTo(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_throwUnknownVar___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_declareVars(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtorSetArgs(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitUnbox___closed__1;
uint8_t l_Lean_IR_IRType_isObj(lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDecls(lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBlock___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitApp___closed__4;
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitJmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBlock___closed__3;
lean_object* l_Lean_IR_EmitC_toCType___closed__6;
lean_object* l_Lean_IR_Decl_resultType(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1;
extern lean_object* l_Char_quoteCore___closed__1;
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_IR_EmitC_emitUnbox___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnBody___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInc___closed__2;
lean_object* l_Lean_IR_EmitC_emitArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCInitName___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLns___at_Lean_IR_EmitC_emitMainFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__25;
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitJmp___closed__1;
lean_object* l_Lean_IR_EmitC_getDecl_match__1(lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l_Lean_IR_EmitC_toCInitName___closed__1;
lean_object* l_Lean_IR_EmitC_leanMainFn___closed__1;
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_main(lean_object*, lean_object*);
extern lean_object* l_Char_quoteCore___closed__2;
lean_object* l_Lean_IR_EmitC_emit___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instToStringVarId___closed__1;
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitReset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26;
lean_object* l_Lean_IR_AltCore_body(lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitCtorSetArgs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_argToCString(lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__6;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitReset___closed__3;
uint8_t l_Lean_isExternC(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInc___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_isIf___boxed(lean_object*);
lean_object* lean_get_init_fn_name_for(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitJP___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtorScalarSize___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtorScalarSize___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitApp___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCInitName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_overwriteParam___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___closed__4;
lean_object* l_Lean_IR_EmitC_emitTag___closed__1;
lean_object* l_Lean_IR_EmitC_emitTailCall(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitUProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitApp___closed__1;
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__5;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_object* l_Lean_IR_EmitC_toCType___closed__2;
lean_object* l_Lean_IR_EmitC_emitMainFn_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitJP___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__4;
extern lean_object* l_Lean_isExport___closed__2;
lean_object* l_Lean_IR_EmitC_emitExternCall___closed__1;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toHexDigit___boxed(lean_object*);
lean_object* l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitNumLit___closed__3;
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_Context_mainParams___default;
lean_object* l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtor___closed__1;
lean_object* l_Lean_IR_EmitC_emitExternCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_IR_EmitC_emitLns___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLhs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSimpleExternalCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBoxFn___closed__4;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2;
lean_object* l_Lean_IR_EmitC_emitJmp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_IR_EmitC_toStringArgs___spec__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6;
lean_object* l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFnIfNeeded(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__13;
lean_object* l_Lean_IR_EmitC_hasMainFn(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitJmp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1;
lean_object* l_Lean_IR_EmitC_emitUnbox___closed__5;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__23;
lean_object* l_Lean_IR_EmitC_emitArgs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_declareVars_match__1(lean_object*);
extern lean_object* l_Lean_IR_formatDecl___closed__3;
lean_object* l_Lean_IR_EmitC_argToCString_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitPartialApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBox___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_IR_EmitC_emitLns___spec__1(lean_object*);
lean_object* l_Lean_IR_EmitC_toCName___closed__1;
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___closed__8;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1;
lean_object* l_Lean_IR_EmitC_emitDeclInit___closed__2;
lean_object* l_Lean_IR_EmitC_emitDeclInit___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSet___closed__1;
lean_object* l_Lean_IR_EmitC_emitBox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2;
lean_object* l_Lean_IR_EmitC_emitSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitReset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitOffset___closed__1;
lean_object* l_Lean_IR_EmitC_emitLn___rarg___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclInit___closed__1;
lean_object* l_Lean_IR_EmitC_emitArgs___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___boxed(lean_object*);
lean_object* l_Lean_IR_EmitC_emitReset___closed__1;
lean_object* l_Lean_IR_EmitC_emitSProj___closed__3;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__21;
lean_object* l_Lean_IR_EmitC_toCName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__7;
lean_object* l_Lean_IR_EmitC_emitFullApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclInit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12;
lean_object* l_Lean_IR_EmitC_emitIf___closed__1;
lean_object* l_Lean_IR_EmitC_toCName___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__2;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLit_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitBlock___closed__5;
lean_object* l_Lean_IR_EmitC_emitVDecl_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___closed__1;
lean_object* l_Lean_IR_EmitC_emitInc(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_leanMainFn;
lean_object* l_Lean_IR_EmitC_emitLn___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_IR_EmitC_emitNumLit___closed__4;
lean_object* l_Lean_IR_EmitC_emitDecl___closed__1;
lean_object* l_Lean_IR_EmitC_emitSSet_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_emitC_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn___boxed(lean_object*, lean_object*);
uint32_t l_Nat_digitChar(lean_object*);
lean_object* l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux_match__1___rarg(lean_object*, lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Lean_IR_EmitC_throwInvalidExportName(lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__16;
lean_object* l_Lean_IR_EmitC_emitCase_match__2(lean_object*);
lean_object* l_Lean_IR_EmitC_declareVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___closed__9;
uint8_t l_Array_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_IR_instInhabitedParam;
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__2(lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitIsShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__1;
lean_object* l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1;
lean_object* l_Lean_IR_EmitC_emitLn_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParam___at_Lean_getInitFnNameForCore_x3f___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBoxFn___closed__2;
lean_object* l_Lean_IR_EmitC_toCType___closed__4;
lean_object* l_Std_RBTree_toList___at_Lean_IR_EmitC_emitFnDecls___spec__3(lean_object*);
lean_object* l_Lean_IR_EmitC_emitProj___closed__1;
lean_object* l_Lean_IR_EmitC_emitIsShared___closed__1;
lean_object* l_Lean_IR_EmitC_emitCase_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___closed__2;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;
lean_object* l_Lean_IR_EmitC_emitMainFn(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitVDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFileHeader___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_isTailCall_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__14;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__7;
lean_object* l_Lean_IR_EmitC_emitUProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCInitName___boxed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_IR_EmitC_emitReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_IR_EmitC_emitFnBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1(uint8_t, lean_object*);
lean_object* l_Lean_IR_ensureHasDefault(lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitUProj___closed__1;
lean_object* l_Lean_IR_EmitC_emitUnbox___closed__3;
lean_object* l_Lean_IR_EmitC_emitBoxFn___closed__3;
lean_object* l_Lean_IR_EmitC_emitLn_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitNumLit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitExternCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_decl_to_string(lean_object*);
uint8_t l_Lean_hasInitAttr(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitExternCall_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_Context_jpMap___default;
extern lean_object* l_Lean_exportAttr;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21;
lean_object* l_Lean_IR_EmitC_emitSimpleExternalCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Char_quoteCore___closed__3;
lean_object* l_Lean_IR_EmitC_emitUSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__14;
lean_object* l_Lean_IR_EmitC_declareParams(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLn___rarg___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitReset___closed__2;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3;
lean_object* l_Lean_IR_EmitC_emitAllocCtor(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCName_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_quoteString___lambda__1___boxed(lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_Context_initMacro_x3f___default;
extern lean_object* l_term_x5b___x5d___closed__5;
lean_object* l_Lean_IR_EmitC_emitLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instToStringImport___closed__1;
lean_object* l_Lean_IR_EmitC_emitJmp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitJPs_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitExternDeclAux(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_case___closed__3;
lean_object* l_List_forM___at_Lean_IR_EmitC_emitLns___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_declareParams___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__15;
lean_object* l_Lean_IR_EmitC_emitBlock_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDec___closed__2;
lean_object* l_Lean_IR_EmitC_emitSetTag___closed__1;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7;
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitJPs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSetTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFnIfNeeded___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSProj___closed__5;
lean_object* l_Std_RBTree_toList___at_Lean_IR_EmitC_emitFnDecls___spec__3___boxed(lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1;
lean_object* lean_mk_module_initialization_function_name(lean_object*);
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___closed__11;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__3;
lean_object* l_Lean_IR_EmitC_emitReuse(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLns(lean_object*);
lean_object* l_Lean_IR_EmitC_paramEqArg___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19;
lean_object* l_Lean_IR_EmitC_emitFileHeader(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitNumLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitUSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__3;
lean_object* l_Lean_IR_EmitC_emitBoxFn___closed__1;
lean_object* l_Lean_IR_EmitC_emitInc___closed__4;
lean_object* l_Lean_IR_EmitC_emitFnDecls_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__5;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1;
lean_object* l_Lean_IR_EmitC_emitUSet___closed__1;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitNumLit___closed__2;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9;
lean_object* l_Lean_IR_EmitC_isTailCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBoxFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__22;
lean_object* l_Lean_IR_EmitC_emitFileFooter___closed__1;
lean_object* l_Lean_IR_EmitC_toCType_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_foldlAux_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__18;
lean_object* l_Lean_IR_EmitC_emitMainFn_match__1(lean_object*);
uint8_t l_Lean_IR_ExplicitBoxing_isBoxedName(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4;
lean_object* l_Lean_IR_EmitC_emitIsTaggedPtr(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__6;
lean_object* l_Lean_IR_EmitC_emitProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_EmitC_overwriteParam(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFns___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_emitC_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isIOUnitInitFn(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27;
lean_object* l_Lean_getExternEntryFor(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitNumLit___closed__1;
lean_object* l_Lean_IR_EmitC_emitSSet___closed__5;
lean_object* l_Lean_IR_EmitC_emitTailCall_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitTag(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_term___x3d_x3d_____closed__3;
lean_object* l_Lean_IR_EmitC_emitDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_throwUnknownVar(lean_object*);
lean_object* l_Lean_IR_EmitC_isIf(lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall___closed__2;
lean_object* l_Lean_IR_EmitC_emitBlock(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet___closed__3;
lean_object* l_Lean_IR_EmitC_emitBoxFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_isTailCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_throwInvalidExportName___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileFooter___boxed(lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1;
lean_object* l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_getModName___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2;
lean_object* l_Lean_IR_EmitC_toCType___closed__12;
lean_object* l_Lean_IR_EmitC_emitInc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1;
lean_object* l_Lean_IR_EmitC_emitTailCall___closed__1;
lean_object* l_Lean_IR_EmitC_emitInc___closed__1;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emit___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLit___closed__1;
lean_object* l_Lean_IR_EmitC_emitFileFooter___closed__2;
lean_object* l_Lean_IR_EmitC_emitDec(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitTailCall___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFullApp_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_instInhabitedAlt;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__12;
extern lean_object* l_UInt32_size;
lean_object* l_Lean_IR_EmitC_getJPParams___closed__1;
lean_object* lean_ir_find_env_decl(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFnDeclAux___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_HashMap_instInhabitedHashMap___closed__1;
lean_object* lean_name_mangle(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitDec___closed__1;
extern lean_object* l_Lean_IR_instInhabitedArg;
lean_object* l_Lean_IR_mkVarJPMaps(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5;
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l_Lean_IR_EmitC_emitPartialApp___closed__2;
lean_object* l_Lean_IR_EmitC_emitFns(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_declareVars_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24;
lean_object* l_Lean_IR_Decl_normalizeIds(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15;
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18;
extern lean_object* l_prec_x28___x29___closed__3;
lean_object* l_Lean_IR_EmitC_emitReuse___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFullApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___boxed(lean_object*, lean_object*);
uint8_t l_Lean_IR_usesModuleFrom(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitPartialApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_declareVar___closed__1;
lean_object* l_Lean_IR_EmitC_isIf_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclInit_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_declareVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileFooter(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_declareVars_match__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType___closed__10;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22;
lean_object* l_Lean_IR_EmitC_emitJP(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_getJPParams___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Char_quoteCore___closed__5;
lean_object* l_Lean_IR_EmitC_emitUnbox(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitJPs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1;
lean_object* l_Std_RBNode_revFold___at_Lean_IR_EmitC_emitFnDecls___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitOffset(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitExternDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFnDecls_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet___closed__4;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__2;
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__11;
lean_object* l_Lean_IR_EmitC_emitLn(lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_declMapExt;
extern lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_declareParams___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_Lean_IR_EmitC_emitReuse___closed__1;
extern lean_object* l_Lean_addClass___closed__1;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitLns___at_Lean_IR_EmitC_emitMainFn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23;
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__24;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
lean_object* l_Lean_IR_EmitC_emitSSet___closed__1;
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__8;
lean_object* l_Lean_IR_Decl_params(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25;
extern lean_object* l_term___x3d_____closed__3;
lean_object* l_Lean_IR_EmitC_emitCase_match__1(lean_object*);
lean_object* l_Lean_IR_EmitC_argToCString_match__1(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_IR_EmitC_throwInvalidExportName___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__4;
uint8_t l_Lean_IR_EmitC_paramEqArg(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__10;
lean_object* l_Lean_IR_EmitC_getModName(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSSet___closed__2;
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28;
lean_object* l_Lean_IR_EmitC_quoteString(lean_object*);
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14;
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2;
lean_object* l_Lean_IR_EmitC_emitVDecl_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_toCType(lean_object*);
lean_object* l_Lean_IR_EmitC_emitDeclAux___closed__1;
lean_object* l_Lean_IR_EmitC_emitInitFn___closed__9;
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitFileHeader___closed__20;
extern lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
lean_object* l_Lean_IR_EmitC_getEnv(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1;
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_getJPParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitBoxFn___closed__5;
lean_object* l_Lean_IR_EmitC_emitPartialApp___closed__1;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitSProj___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1;
lean_object* l_Lean_IR_EmitC_emitIsTaggedPtr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_emitCtorSetArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_EmitC_getDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_declareParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
#define _init_l_Lean_IR_EmitC_leanMainFn___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("_lean_main");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_leanMainFn___closed__1_end;\
}\
l_Lean_IR_EmitC_leanMainFn___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_leanMainFn(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = l_Lean_IR_EmitC_leanMainFn___closed__1;\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_leanMainFn_end;\
}\
l_Lean_IR_EmitC_leanMainFn_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_Context_jpMap___default(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = l_Std_HashMap_instInhabitedHashMap___closed__1;\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_Context_jpMap___default_end;\
}\
l_Lean_IR_EmitC_Context_jpMap___default_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_Context_mainFn___default(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_box(0);\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_Context_mainFn___default_end;\
}\
l_Lean_IR_EmitC_Context_mainFn___default_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_Context_mainParams___default(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = l_Array_empty___closed__1;\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_Context_mainParams___default_end;\
}\
l_Lean_IR_EmitC_Context_mainParams___default_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_Context_initMacro_x3f___default(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_box(0);\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_Context_initMacro_x3f___default_end;\
}\
l_Lean_IR_EmitC_Context_initMacro_x3f___default_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_getEnv(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_getEnv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_getEnv(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_EmitC_getModName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_getModName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_getModName(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_EmitC_getDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_EmitC_getDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_getDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_getDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_EmitC_getEnv(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_1);
x_7 = lean_ir_find_env_decl(x_6, x_1);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = 1;
x_9 = l_Lean_Name_toString(x_1, x_8);
x_10 = l_Lean_addClass___closed__1;
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = l_Char_quote___closed__1;
x_13 = lean_string_append(x_11, x_12);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
lean_ctor_set(x_4, 0, x_14);
return x_4;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
lean_inc(x_1);
x_17 = lean_ir_find_env_decl(x_15, x_1);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = 1;
x_19 = l_Lean_Name_toString(x_1, x_18);
x_20 = l_Lean_addClass___closed__1;
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = l_Char_quote___closed__1;
x_23 = lean_string_append(x_21, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_16);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
lean_dec(x_17);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_16);
return x_26;
}
}
}
}
lean_object* l_Lean_IR_EmitC_getDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_getDecl(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emit___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_apply_1(x_1, x_2);
x_6 = lean_string_append(x_4, x_5);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_IR_EmitC_emit(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emit___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emit___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emit___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitLn_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_IR_EmitC_emitLn_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitLn_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_string_append(x_3, x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitLn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline___closed__1;
x_5 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_4, x_2, x_3);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitLn___rarg___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitLn___rarg___lambda__1___boxed), 3, 0);\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitLn___rarg___closed__1_end;\
}\
l_Lean_IR_EmitC_emitLn___rarg___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitLn___rarg___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("\\");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitLn___rarg___closed__2_end;\
}\
l_Lean_IR_EmitC_emitLn___rarg___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitLn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_IR_EmitC_emit___rarg(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_IR_EmitC_emitLn___rarg___closed__1;
x_8 = lean_ctor_get(x_3, 5);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_apply_3(x_7, x_9, x_3, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
x_11 = l_Lean_IR_EmitC_emitLn___rarg___closed__2;
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_11, x_3, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_apply_3(x_7, x_13, x_3, x_14);
return x_15;
}
}
}
lean_object* l_Lean_IR_EmitC_emitLn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitLn___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitLn___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitLn___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitJP___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Nat_repr(x_1);
x_5 = l_Lean_IR_instToStringJoinPointId___closed__1;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = lean_string_append(x_3, x_6);
lean_dec(x_6);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_IR_EmitC_emitJP(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 5);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitJP___spec__1(x_1, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_2, x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_myMacro____x40_Init_Notation___hyg_13362____closed__14;
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_2, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitJP___spec__1(x_1, x_2, x_11);
return x_12;
}
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitJP___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitJP___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitJP___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitJP(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitLns___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_9 = l_Lean_IR_EmitC_emitLn___rarg(x_1, x_7, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_2 = x_8;
x_4 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_9);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitLns___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_forM___at_Lean_IR_EmitC_emitLns___spec__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emitLns___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_forM___at_Lean_IR_EmitC_emitLns___spec__1___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitLns(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitLns___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_argToCString_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_IR_EmitC_argToCString_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_argToCString_match__1___rarg), 3, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_argToCString___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box(0)");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_argToCString___closed__1_end;\
}\
l_Lean_IR_EmitC_argToCString___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_argToCString(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Nat_repr(x_2);
x_4 = l_Lean_IR_instToStringVarId___closed__1;
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_argToCString___closed__1;
return x_6;
}
}
}
lean_object* l_Lean_IR_EmitC_emitArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_EmitC_argToCString(x_1);
x_5 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_4, x_2, x_3);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_toCType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_2, x_13);
return x_14;
}
case 1:
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_3, x_15);
return x_16;
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_box(0);
x_18 = lean_apply_1(x_4, x_17);
return x_18;
}
case 3:
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = lean_apply_1(x_5, x_19);
return x_20;
}
case 4:
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_apply_1(x_6, x_21);
return x_22;
}
case 5:
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
x_24 = lean_apply_1(x_7, x_23);
return x_24;
}
case 6:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_box(0);
x_26 = lean_apply_1(x_10, x_25);
return x_26;
}
case 7:
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_box(0);
x_28 = lean_apply_1(x_8, x_27);
return x_28;
}
case 8:
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_box(0);
x_30 = lean_apply_1(x_9, x_29);
return x_30;
}
case 9:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
lean_dec(x_1);
x_33 = lean_apply_2(x_11, x_31, x_32);
return x_33;
}
default: 
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
lean_dec(x_1);
x_36 = lean_apply_2(x_12, x_34, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_IR_EmitC_toCType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_toCType_match__1___rarg), 12, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_toCType___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("double");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__1_end;\
}\
l_Lean_IR_EmitC_toCType___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("uint8_t");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__2_end;\
}\
l_Lean_IR_EmitC_toCType___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("uint16_t");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__3_end;\
}\
l_Lean_IR_EmitC_toCType___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("uint32_t");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__4_end;\
}\
l_Lean_IR_EmitC_toCType___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("uint64_t");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__5_end;\
}\
l_Lean_IR_EmitC_toCType___closed__5_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__6(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("size_t");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__6_end;\
}\
l_Lean_IR_EmitC_toCType___closed__6_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__7(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_object*");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__7_end;\
}\
l_Lean_IR_EmitC_toCType___closed__7_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__8(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("Lean.Compiler.IR.EmitC");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__8_end;\
}\
l_Lean_IR_EmitC_toCType___closed__8_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__9(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("Lean.IR.EmitC.toCType");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__9_end;\
}\
l_Lean_IR_EmitC_toCType___closed__9_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__10(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("not implemented yet");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCType___closed__10_end;\
}\
l_Lean_IR_EmitC_toCType___closed__10_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__11(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; \
x_1 = l_Lean_IR_EmitC_toCType___closed__8;\
x_2 = l_Lean_IR_EmitC_toCType___closed__9;\
x_3 = lean_unsigned_to_nat(74u);\
x_4 = lean_unsigned_to_nat(25u);\
x_5 = l_Lean_IR_EmitC_toCType___closed__10;\
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);\
__INIT_VAR__ = x_6; goto l_Lean_IR_EmitC_toCType___closed__11_end;\
}\
l_Lean_IR_EmitC_toCType___closed__11_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_toCType___closed__12(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; \
x_1 = l_Lean_IR_EmitC_toCType___closed__8;\
x_2 = l_Lean_IR_EmitC_toCType___closed__9;\
x_3 = lean_unsigned_to_nat(75u);\
x_4 = lean_unsigned_to_nat(25u);\
x_5 = l_Lean_IR_EmitC_toCType___closed__10;\
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);\
__INIT_VAR__ = x_6; goto l_Lean_IR_EmitC_toCType___closed__12_end;\
}\
l_Lean_IR_EmitC_toCType___closed__12_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_toCType(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = l_Lean_IR_EmitC_toCType___closed__1;
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_toCType___closed__2;
return x_3;
}
case 2:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_toCType___closed__3;
return x_4;
}
case 3:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_toCType___closed__4;
return x_5;
}
case 4:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_toCType___closed__5;
return x_6;
}
case 5:
{
lean_object* x_7; 
x_7 = l_Lean_IR_EmitC_toCType___closed__6;
return x_7;
}
case 9:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_String_instInhabitedString;
x_9 = l_Lean_IR_EmitC_toCType___closed__11;
x_10 = lean_panic_fn(x_8, x_9);
return x_10;
}
case 10:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_String_instInhabitedString;
x_12 = l_Lean_IR_EmitC_toCType___closed__12;
x_13 = lean_panic_fn(x_11, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
x_14 = l_Lean_IR_EmitC_toCType___closed__7;
return x_14;
}
}
}
}
lean_object* l_Lean_IR_EmitC_toCType___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_EmitC_toCType(x_1);
lean_dec(x_1);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("invalid export name '");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1_end;\
}\
l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_throwInvalidExportName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = 1;
x_5 = l_Lean_Name_toString(x_1, x_4);
x_6 = l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_Char_quote___closed__1;
x_9 = lean_string_append(x_7, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
}
lean_object* l_Lean_IR_EmitC_throwInvalidExportName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_throwInvalidExportName___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_throwInvalidExportName___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_toCName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint64_t x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
lean_dec(x_7);
x_11 = lean_box_uint64(x_10);
x_12 = lean_apply_2(x_2, x_9, x_11);
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_2);
x_13 = lean_apply_1(x_3, x_7);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_7);
return x_14;
}
}
}
}
lean_object* l_Lean_IR_EmitC_toCName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_toCName_match__1___rarg), 4, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_toCName___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("l_");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCName___closed__1_end;\
}\
l_Lean_IR_EmitC_toCName___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_toCName(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_EmitC_getEnv(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Lean_exportAttr;
lean_inc(x_1);
x_9 = l_Lean_ParametricAttribute_getParam___at_Lean_getInitFnNameForCore_x3f___spec__1(x_8, x_6, x_1);
lean_dec(x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_isExport___closed__2;
x_11 = lean_name_eq(x_1, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_IR_EmitC_toCName___closed__1;
x_13 = lean_name_mangle(x_1, x_12);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = l_Lean_IR_EmitC_leanMainFn;
lean_ctor_set(x_4, 0, x_14);
return x_4;
}
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
if (lean_obj_tag(x_15) == 1)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_ctor_set(x_4, 0, x_17);
return x_4;
}
else
{
lean_object* x_18; 
lean_dec(x_16);
lean_dec(x_15);
lean_free_object(x_4);
x_18 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_7);
return x_18;
}
}
else
{
lean_object* x_19; 
lean_dec(x_15);
lean_free_object(x_4);
x_19 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_7);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_4);
x_22 = l_Lean_exportAttr;
lean_inc(x_1);
x_23 = l_Lean_ParametricAttribute_getParam___at_Lean_getInitFnNameForCore_x3f___spec__1(x_22, x_20, x_1);
lean_dec(x_20);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_Lean_isExport___closed__2;
x_25 = lean_name_eq(x_1, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = l_Lean_IR_EmitC_toCName___closed__1;
x_27 = lean_name_mangle(x_1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_1);
x_29 = l_Lean_IR_EmitC_leanMainFn;
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_21);
return x_30;
}
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_23, 0);
lean_inc(x_31);
lean_dec(x_23);
if (lean_obj_tag(x_31) == 1)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_1);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_21);
return x_34;
}
else
{
lean_object* x_35; 
lean_dec(x_32);
lean_dec(x_31);
x_35 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_21);
return x_35;
}
}
else
{
lean_object* x_36; 
lean_dec(x_31);
x_36 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_21);
return x_36;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_toCName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_toCName(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitCName(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_toCName(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_5, x_2, x_6);
lean_dec(x_5);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitCName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitCName(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
#define _init_l_Lean_IR_EmitC_toCInitName___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("_init_");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_toCInitName___closed__1_end;\
}\
l_Lean_IR_EmitC_toCInitName___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_toCInitName(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_EmitC_getEnv(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Lean_exportAttr;
lean_inc(x_1);
x_9 = l_Lean_ParametricAttribute_getParam___at_Lean_getInitFnNameForCore_x3f___spec__1(x_8, x_6, x_1);
lean_dec(x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_IR_EmitC_toCName___closed__1;
x_11 = lean_name_mangle(x_1, x_10);
x_12 = l_Lean_IR_EmitC_toCInitName___closed__1;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
lean_ctor_set(x_4, 0, x_13);
return x_4;
}
else
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_IR_EmitC_toCInitName___closed__1;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
lean_ctor_set(x_4, 0, x_18);
return x_4;
}
else
{
lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_14);
lean_free_object(x_4);
x_19 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_7);
return x_19;
}
}
else
{
lean_object* x_20; 
lean_dec(x_14);
lean_free_object(x_4);
x_20 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_7);
return x_20;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_4, 0);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_4);
x_23 = l_Lean_exportAttr;
lean_inc(x_1);
x_24 = l_Lean_ParametricAttribute_getParam___at_Lean_getInitFnNameForCore_x3f___spec__1(x_23, x_21, x_1);
lean_dec(x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = l_Lean_IR_EmitC_toCName___closed__1;
x_26 = lean_name_mangle(x_1, x_25);
x_27 = l_Lean_IR_EmitC_toCInitName___closed__1;
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_22);
return x_29;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_24, 0);
lean_inc(x_30);
lean_dec(x_24);
if (lean_obj_tag(x_30) == 1)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_1);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_IR_EmitC_toCInitName___closed__1;
x_34 = lean_string_append(x_33, x_32);
lean_dec(x_32);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_22);
return x_35;
}
else
{
lean_object* x_36; 
lean_dec(x_31);
lean_dec(x_30);
x_36 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_22);
return x_36;
}
}
else
{
lean_object* x_37; 
lean_dec(x_30);
x_37 = l_Lean_IR_EmitC_throwInvalidExportName___rarg(x_1, x_2, x_22);
return x_37;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_toCInitName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_toCInitName(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitCInitName(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_toCInitName(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_5, x_2, x_6);
lean_dec(x_5);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitCInitName___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitCInitName(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_2, 5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline___closed__1;
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_7, x_2, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = l_Lean_IR_EmitC_emitLn___rarg___closed__2;
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_2, x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline___closed__1;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_2, x_12);
return x_14;
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Lean_IR_instInhabitedParam;
x_7 = lean_array_get(x_6, x_1, x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_EmitC_toCType(x_8);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_4, x_5);
lean_dec(x_9);
return x_10;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_nat_sub(x_2, x_9);
x_11 = lean_nat_sub(x_10, x_8);
lean_dec(x_10);
x_12 = lean_nat_dec_lt(x_6, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_box(0);
x_14 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1(x_1, x_11, x_13, x_4, x_5);
lean_dec(x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_3 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = l_term_x5b___x5d___closed__5;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_4, x_5);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1(x_1, x_11, x_19, x_4, x_20);
lean_dec(x_19);
lean_dec(x_11);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_3 = x_9;
x_5 = x_22;
goto _start;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_5);
return x_25;
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_nat_sub(x_2, x_9);
x_11 = lean_nat_sub(x_10, x_8);
lean_dec(x_10);
x_12 = lean_nat_dec_lt(x_6, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_box(0);
x_14 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1(x_1, x_11, x_13, x_4, x_5);
lean_dec(x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_3 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = l_term_x5b___x5d___closed__5;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_4, x_5);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1(x_1, x_11, x_19, x_4, x_20);
lean_dec(x_19);
lean_dec(x_11);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_3 = x_9;
x_5 = x_22;
goto _start;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_5);
return x_25;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFnDeclAux___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; size_t x_9; size_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = l_Lean_IR_IRType_isIrrelevant(x_7);
lean_dec(x_7);
x_9 = 1;
x_10 = x_2 + x_9;
if (x_8 == 0)
{
lean_object* x_11; 
x_11 = lean_array_push(x_4, x_6);
x_2 = x_10;
x_4 = x_11;
goto _start;
}
else
{
lean_dec(x_6);
x_2 = x_10;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_5 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = l_prec_x28___x29___closed__7;
x_6 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_5, x_3, x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_3(x_1, x_7, x_3, x_8);
return x_9;
}
}
#define _init_l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitFnDeclAux___lambda__1___boxed), 3, 0);\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1_end;\
}\
l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_object**");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2_end;\
}\
l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = l_Lean_IR_Decl_resultType(x_1);
x_9 = l_Lean_IR_EmitC_toCType(x_8);
lean_dec(x_8);
x_10 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_11 = lean_string_append(x_9, x_10);
x_12 = lean_string_append(x_11, x_2);
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_12, x_6, x_7);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1;
x_16 = l_Array_isEmpty___rarg(x_3);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_17 = l_prec_x28___x29___closed__3;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_6, x_14);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_Decl_name(x_1);
lean_inc(x_20);
x_21 = l_Lean_isExternC(x_4, x_20);
if (x_21 == 0)
{
x_22 = x_3;
goto block_40;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_41 = lean_array_get_size(x_3);
x_42 = lean_unsigned_to_nat(0u);
x_43 = lean_nat_dec_lt(x_42, x_41);
if (x_43 == 0)
{
lean_object* x_44; 
lean_dec(x_41);
lean_dec(x_3);
x_44 = l_Array_empty___closed__1;
x_22 = x_44;
goto block_40;
}
else
{
uint8_t x_45; 
x_45 = lean_nat_dec_le(x_41, x_41);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_41);
lean_dec(x_3);
x_46 = l_Array_empty___closed__1;
x_22 = x_46;
goto block_40;
}
else
{
size_t x_47; size_t x_48; lean_object* x_49; lean_object* x_50; 
x_47 = 0;
x_48 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_49 = l_Array_empty___closed__1;
x_50 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFnDeclAux___spec__4(x_3, x_47, x_48, x_49);
lean_dec(x_3);
x_22 = x_50;
goto block_40;
}
}
}
block_40:
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_array_get_size(x_22);
x_24 = l_Lean_closureMaxArgs;
x_25 = lean_nat_dec_lt(x_24, x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_20);
lean_inc(x_23);
x_26 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2(x_22, x_23, x_23, x_6, x_19);
lean_dec(x_23);
lean_dec(x_22);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__2(x_15, x_27, x_6, x_28);
lean_dec(x_27);
return x_29;
}
else
{
uint8_t x_30; 
x_30 = l_Lean_IR_ExplicitBoxing_isBoxedName(x_20);
lean_dec(x_20);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_inc(x_23);
x_31 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__3(x_22, x_23, x_23, x_6, x_19);
lean_dec(x_23);
lean_dec(x_22);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__2(x_15, x_32, x_6, x_33);
lean_dec(x_32);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_23);
lean_dec(x_22);
x_35 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2;
x_36 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_35, x_6, x_19);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__2(x_15, x_37, x_6, x_38);
lean_dec(x_37);
return x_39;
}
}
}
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_3);
x_51 = lean_box(0);
x_52 = lean_apply_3(x_15, x_51, x_6, x_14);
return x_52;
}
}
}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_IR_Decl_params(x_1);
x_7 = l_Lean_IR_EmitC_getEnv(x_4, x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Array_isEmpty___rarg(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__3(x_1, x_2, x_6, x_8, x_11, x_4, x_9);
lean_dec(x_8);
return x_12;
}
else
{
if (x_3 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__3(x_1, x_2, x_6, x_8, x_13, x_4, x_9);
lean_dec(x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = l_Lean_IR_formatDecl___closed__3;
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_15, x_4, x_9);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__3(x_1, x_2, x_6, x_8, x_17, x_4, x_18);
lean_dec(x_17);
lean_dec(x_8);
return x_19;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitFnDeclAux___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFnDeclAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFnDeclAux___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_IR_EmitC_emitFnDeclAux___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_IR_EmitC_emitFnDeclAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_IR_EmitC_emitFnDeclAux(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitFnDecl(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_IR_Decl_name(x_1);
x_6 = l_Lean_IR_EmitC_toCName(x_5, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_IR_EmitC_emitFnDeclAux(x_1, x_7, x_2, x_3, x_8);
lean_dec(x_7);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_3);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitFnDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_IR_EmitC_emitFnDecl(x_1, x_5, x_3, x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitExternDeclAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Lean_IR_EmitC_getEnv(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_IR_Decl_name(x_1);
x_9 = l_Lean_isExternC(x_6, x_8);
lean_dec(x_6);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 1;
x_11 = l_Lean_IR_EmitC_emitFnDeclAux(x_1, x_2, x_10, x_3, x_7);
return x_11;
}
else
{
uint8_t x_12; lean_object* x_13; 
x_12 = 0;
x_13 = l_Lean_IR_EmitC_emitFnDeclAux(x_1, x_2, x_12, x_3, x_7);
return x_13;
}
}
}
lean_object* l_Lean_IR_EmitC_emitExternDeclAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitExternDeclAux(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitFnDecls_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_EmitC_emitFnDecls_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitFnDecls_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_IR_Decl_name(x_3);
x_6 = lean_box(0);
x_7 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_1, x_5, x_6);
x_1 = x_7;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_IR_Decl_name(x_4);
x_7 = lean_box(0);
x_8 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_2, x_6, x_7);
lean_inc(x_1);
x_9 = l_Lean_IR_collectUsedDecls(x_1, x_4, x_8);
x_2 = x_9;
x_3 = x_5;
goto _start;
}
}
}
lean_object* l_Std_RBNode_revFold___at_Lean_IR_EmitC_emitFnDecls___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 3);
x_6 = l_Std_RBNode_revFold___at_Lean_IR_EmitC_emitFnDecls___spec__4(x_1, x_5);
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_1 = x_7;
x_2 = x_3;
goto _start;
}
}
}
lean_object* l_Std_RBTree_toList___at_Lean_IR_EmitC_emitFnDecls___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Std_RBNode_revFold___at_Lean_IR_EmitC_emitFnDecls___spec__4(x_2, x_1);
return x_3;
}
}
#define _init_l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("c");\
__INIT_VAR__ = x_1; goto l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1_end;\
}\
l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1_end: ((void) 0);}
#define _init_l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = lean_box(0);\
x_2 = l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1;\
x_3 = lean_name_mk_string(x_1, x_2);\
__INIT_VAR__ = x_3; goto l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2_end;\
}\
l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2_end: ((void) 0);}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
lean_inc(x_8);
x_10 = l_Lean_IR_EmitC_getDecl(x_8, x_4, x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_IR_Decl_name(x_11);
x_14 = l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2;
x_15 = l_Lean_getExternNameFor(x_1, x_14, x_13);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = l_Lean_NameSet_contains(x_2, x_8);
lean_dec(x_8);
if (x_16 == 0)
{
uint8_t x_17; lean_object* x_18; 
x_17 = 1;
lean_inc(x_4);
x_18 = l_Lean_IR_EmitC_emitFnDecl(x_11, x_17, x_4, x_12);
lean_dec(x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_3 = x_9;
x_5 = x_19;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_9);
lean_dec(x_4);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
uint8_t x_25; lean_object* x_26; 
x_25 = 0;
lean_inc(x_4);
x_26 = l_Lean_IR_EmitC_emitFnDecl(x_11, x_25, x_4, x_12);
lean_dec(x_11);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_3 = x_9;
x_5 = x_27;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_9);
lean_dec(x_4);
x_29 = !lean_is_exclusive(x_26);
if (x_29 == 0)
{
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 0);
x_31 = lean_ctor_get(x_26, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_26);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_8);
x_33 = lean_ctor_get(x_15, 0);
lean_inc(x_33);
lean_dec(x_15);
lean_inc(x_4);
x_34 = l_Lean_IR_EmitC_emitExternDeclAux(x_11, x_33, x_4, x_12);
lean_dec(x_33);
lean_dec(x_11);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_3 = x_9;
x_5 = x_35;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_9);
lean_dec(x_4);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_34, 0);
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_34);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
x_41 = !lean_is_exclusive(x_10);
if (x_41 == 0)
{
return x_10;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_10, 0);
x_43 = lean_ctor_get(x_10, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_10);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitFnDecls(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = l_Lean_IR_EmitC_getEnv(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_IR_declMapExt;
x_7 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_6, x_4);
x_8 = l_Lean_NameSet_empty;
x_9 = l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__1(x_8, x_7);
lean_inc(x_4);
x_10 = l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__2(x_4, x_8, x_7);
x_11 = l_Std_RBTree_toList___at_Lean_IR_EmitC_emitFnDecls___spec__3(x_10);
lean_dec(x_10);
x_12 = l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5(x_4, x_9, x_11, x_1, x_5);
lean_dec(x_9);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Lean_IR_EmitC_emitFnDecls___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_RBNode_revFold___at_Lean_IR_EmitC_emitFnDecls___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_revFold___at_Lean_IR_EmitC_emitFnDecls___spec__4(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_RBTree_toList___at_Lean_IR_EmitC_emitFnDecls___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_RBTree_toList___at_Lean_IR_EmitC_emitFnDecls___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitMainFn_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_IR_EmitC_emitMainFn_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitMainFn_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_6, x_2, x_3);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_1 = x_7;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Lean_IR_EmitC_emitLns___at_Lean_IR_EmitC_emitMainFn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_1, x_2, x_3);
return x_4;
}
}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("  return 1;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("  lean_dec_ref(res);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("  lean_io_result_show_error(res);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("} else {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("  return ret;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("  int ret = lean_unbox(lean_io_result_get_value(res));");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("if (lean_io_result_is_ok(res)) {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_5 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_6 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_5, x_3, x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_1);
x_9 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1;
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2;
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3;
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_23, x_3, x_7);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_5, x_3, x_25);
return x_26;
}
}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("res = ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("(lean_io_mk_world());");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_init_task_manager();");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = lean_box(0);\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_2);\
lean_ctor_set(x_3, 1, x_1);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_dec_ref(res);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_io_mark_end_initialization();");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;\
x_2 = l_Lean_IR_EmitC_leanMainFn;\
x_3 = lean_string_append(x_1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;\
x_3 = lean_string_append(x_1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = lean_box(0);\
x_2 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_2);\
lean_ctor_set(x_3, 1, x_1);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" in = n;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" i--;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" lean_object* n;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("while (i > 1) {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("int i = argc;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("in = lean_box(0);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("(in, lean_io_mk_world());");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27;\
x_3 = lean_string_append(x_1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_5 = l_Lean_IR_EmitC_getModName(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_mk_module_initialization_function_name(x_6);
x_9 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;
x_12 = lean_string_append(x_10, x_11);
x_13 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_12, x_3, x_7);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_box(0);
x_16 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9;
x_17 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_16, x_3, x_14);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_array_get_size(x_1);
x_20 = lean_unsigned_to_nat(2u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11;
x_23 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_22, x_3, x_18);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_IR_EmitC_emitMainFn___lambda__1(x_15, x_24, x_3, x_25);
lean_dec(x_24);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26;
x_28 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_27, x_3, x_18);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28;
x_31 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_30, x_3, x_29);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_IR_EmitC_emitMainFn___lambda__1(x_15, x_32, x_3, x_33);
lean_dec(x_32);
return x_34;
}
}
}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("\n  #if defined(WIN32) || defined(_WIN32)\n  #include <windows.h>\n  #endif\n\n  int main(int argc, char ** argv) {\n  #if defined(WIN32) || defined(_WIN32)\n  SetErrorMode(SEM_FAILCRITICALERRORS);\n  #endif\n  lean_object* in; lean_object* res;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_initialize_runtime_module();");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_initialize();");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1;
x_7 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_6, x_4, x_5);
if (x_2 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2;
x_10 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_9, x_4, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_IR_EmitC_emitMainFn___lambda__2(x_1, x_11, x_4, x_12);
lean_dec(x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3;
x_16 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_15, x_4, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_IR_EmitC_emitMainFn___lambda__2(x_1, x_17, x_4, x_18);
lean_dec(x_17);
return x_19;
}
}
}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("void lean_initialize_runtime_module();");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("void lean_initialize();");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2_end;\
}\
l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Lean_IR_EmitC_getEnv(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_Parser_Syntax_addPrec___closed__2;
x_9 = l_Lean_IR_usesModuleFrom(x_6, x_8);
lean_dec(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1;
x_11 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_10, x_3, x_7);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_IR_EmitC_emitMainFn___lambda__3(x_1, x_9, x_12, x_3, x_13);
lean_dec(x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2;
x_16 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_15, x_3, x_7);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_IR_EmitC_emitMainFn___lambda__3(x_1, x_9, x_17, x_3, x_18);
lean_dec(x_17);
return x_19;
}
}
}
#define _init_l_Lean_IR_EmitC_emitMainFn___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("invalid main function, incorrect arity when generating code");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___closed__1_end;\
}\
l_Lean_IR_EmitC_emitMainFn___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitMainFn___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("function declaration expected");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMainFn___closed__2_end;\
}\
l_Lean_IR_EmitC_emitMainFn___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitMainFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_isExport___closed__2;
x_4 = l_Lean_IR_EmitC_getDecl(x_3, x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_ctor_get(x_4, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_array_get_size(x_9);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_dec_eq(x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_10, x_13);
lean_dec(x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_9);
x_15 = l_Lean_IR_EmitC_emitMainFn___closed__1;
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_15);
return x_4;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_free_object(x_4);
x_16 = lean_box(0);
x_17 = l_Lean_IR_EmitC_emitMainFn___lambda__4(x_9, x_16, x_1, x_7);
lean_dec(x_9);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_10);
lean_free_object(x_4);
x_18 = lean_box(0);
x_19 = l_Lean_IR_EmitC_emitMainFn___lambda__4(x_9, x_18, x_1, x_7);
lean_dec(x_9);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_dec(x_4);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_dec(x_5);
x_22 = lean_array_get_size(x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_nat_dec_eq(x_22, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_dec_eq(x_22, x_25);
lean_dec(x_22);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_21);
x_27 = l_Lean_IR_EmitC_emitMainFn___closed__1;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_20);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_box(0);
x_30 = l_Lean_IR_EmitC_emitMainFn___lambda__4(x_21, x_29, x_1, x_20);
lean_dec(x_21);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_22);
x_31 = lean_box(0);
x_32 = l_Lean_IR_EmitC_emitMainFn___lambda__4(x_21, x_31, x_1, x_20);
lean_dec(x_21);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_5);
x_33 = !lean_is_exclusive(x_4);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_4, 0);
lean_dec(x_34);
x_35 = l_Lean_IR_EmitC_emitMainFn___closed__2;
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_35);
return x_4;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_4, 1);
lean_inc(x_36);
lean_dec(x_4);
x_37 = l_Lean_IR_EmitC_emitMainFn___closed__2;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_4);
if (x_39 == 0)
{
return x_4;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_4, 0);
x_41 = lean_ctor_get(x_4, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_4);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitLns___at_Lean_IR_EmitC_emitMainFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitLns___at_Lean_IR_EmitC_emitMainFn___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitMainFn___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitMainFn___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_IR_EmitC_emitMainFn___lambda__3(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitMainFn___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitMainFn___lambda__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitMainFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_emitMainFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1(x_1, x_4);
x_6 = l_Lean_IR_Decl_name(x_3);
x_7 = l_Lean_isExport___closed__2;
x_8 = lean_name_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
return x_5;
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
}
}
lean_object* l_Lean_IR_EmitC_hasMainFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_IR_EmitC_getEnv(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Lean_IR_declMapExt;
x_7 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_6, x_5);
lean_dec(x_5);
x_8 = 0;
x_9 = l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1(x_8, x_7);
lean_dec(x_7);
x_10 = lean_box(x_9);
lean_ctor_set(x_3, 0, x_10);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = l_Lean_IR_declMapExt;
x_14 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_13, x_11);
lean_dec(x_11);
x_15 = 0;
x_16 = l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1(x_15, x_14);
lean_dec(x_14);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
}
}
lean_object* l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at_Lean_IR_EmitC_hasMainFn___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_hasMainFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_hasMainFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_EmitC_emitMainFnIfNeeded(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_IR_EmitC_hasMainFn(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_3, 0);
lean_dec(x_7);
x_8 = lean_box(0);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_Lean_IR_EmitC_emitMainFn(x_1, x_12);
return x_13;
}
}
}
lean_object* l_Lean_IR_EmitC_emitMainFnIfNeeded___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_emitMainFnIfNeeded(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFileHeader___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = 1;
x_11 = l_Lean_Name_toString(x_9, x_10);
x_12 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
lean_dec(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; 
x_13 = l_Lean_instInhabitedParserDescr___closed__1;
x_14 = lean_string_append(x_11, x_13);
x_15 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_16 = lean_string_append(x_15, x_14);
lean_dec(x_14);
x_17 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_5, x_6);
lean_dec(x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_2 + x_20;
x_2 = x_21;
x_4 = x_18;
x_6 = x_19;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; 
x_23 = l_Lean_instToStringImport___closed__1;
x_24 = lean_string_append(x_11, x_23);
x_25 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_26 = lean_string_append(x_25, x_24);
lean_dec(x_24);
x_27 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_26, x_5, x_6);
lean_dec(x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = 1;
x_31 = x_2 + x_30;
x_2 = x_31;
x_4 = x_28;
x_6 = x_29;
goto _start;
}
}
else
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_6);
return x_33;
}
}
}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#include <lean/lean.h>");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__1_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#endif");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__2_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = lean_box(0);\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__2;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_2);\
lean_ctor_set(x_3, 1, x_1);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__3_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("extern \"C\" {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__4_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__4;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__3;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__5_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__5_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__6(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#ifdef __cplusplus");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__6_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__6_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__7(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__6;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__5;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__7_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__7_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__8(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__2;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__7;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__8_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__8_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__9(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#pragma GCC diagnostic ignored \"-Wunused-but-set-variable\"");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__9_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__9_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__10(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__9;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__8;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__10_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__10_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__11(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#pragma GCC diagnostic ignored \"-Wunused-label\"");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__11_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__11_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__12(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__11;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__10;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__12_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__12_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__13(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#pragma GCC diagnostic ignored \"-Wunused-parameter\"");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__13_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__13_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__14(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__13;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__12;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__14_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__14_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__15(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#elif defined(__GNUC__) && !defined(__CLANG__)");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__15_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__15_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__16(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__15;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__14;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__16_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__16_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__17(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#pragma clang diagnostic ignored \"-Wunused-label\"");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__17_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__17_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__18(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__17;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__16;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__18_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__18_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__19(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#pragma clang diagnostic ignored \"-Wunused-parameter\"");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__19_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__19_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__20(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__19;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__18;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__20_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__20_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__21(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#if defined(__clang__)");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__21_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__21_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__22(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__21;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__20;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileHeader___closed__22_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__22_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__23(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("// Lean compiler output");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__23_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__23_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__24(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("// Module: ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__24_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__24_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileHeader___closed__25(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("// Imports:");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitFileHeader___closed__25_end;\
}\
l_Lean_IR_EmitC_emitFileHeader___closed__25_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitFileHeader(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_13 = l_Lean_IR_EmitC_getEnv(x_1, x_2);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_IR_EmitC_getModName(x_1, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_IR_EmitC_emitFileHeader___closed__23;
x_20 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_19, x_1, x_18);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = 1;
x_23 = l_Lean_Name_toString(x_17, x_22);
x_24 = l_Lean_IR_EmitC_emitFileHeader___closed__24;
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_25, x_1, x_21);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_IR_EmitC_emitFileHeader___closed__25;
x_29 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_28, x_1, x_27);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_Environment_imports(x_14);
lean_dec(x_14);
x_32 = lean_array_get_size(x_31);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_nat_dec_lt(x_33, x_32);
if (x_34 == 0)
{
lean_dec(x_32);
lean_dec(x_31);
x_3 = x_30;
goto block_12;
}
else
{
uint8_t x_35; 
x_35 = lean_nat_dec_le(x_32, x_32);
if (x_35 == 0)
{
lean_dec(x_32);
lean_dec(x_31);
x_3 = x_30;
goto block_12;
}
else
{
size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = 0;
x_37 = lean_usize_of_nat(x_32);
lean_dec(x_32);
x_38 = lean_box(0);
x_39 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFileHeader___spec__1(x_31, x_36, x_37, x_38, x_1, x_30);
lean_dec(x_31);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_3 = x_40;
goto block_12;
}
}
block_12:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_Lean_instInhabitedParserDescr___closed__1;
x_5 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_4, x_1, x_3);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_IR_EmitC_emitFileHeader___closed__1;
x_8 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_7, x_1, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emitFileHeader___closed__22;
x_11 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_10, x_1, x_9);
return x_11;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFileHeader___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitFileHeader___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_EmitC_emitFileHeader___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_emitFileHeader(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
#define _init_l_Lean_IR_EmitC_emitFileFooter___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;\
x_2 = l_Lean_IR_EmitC_emitFileHeader___closed__3;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileFooter___closed__1_end;\
}\
l_Lean_IR_EmitC_emitFileFooter___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitFileFooter___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitFileHeader___closed__6;\
x_2 = l_Lean_IR_EmitC_emitFileFooter___closed__1;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitFileFooter___closed__2_end;\
}\
l_Lean_IR_EmitC_emitFileFooter___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitFileFooter(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_IR_EmitC_emitFileFooter___closed__2;
x_4 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitFileFooter___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_emitFileFooter(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
#define _init_l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("unknown variable '");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1_end;\
}\
l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_throwUnknownVar___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_Nat_repr(x_1);
x_5 = l_Lean_IR_instToStringVarId___closed__1;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1;
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = l_Char_quote___closed__1;
x_10 = lean_string_append(x_8, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
lean_object* l_Lean_IR_EmitC_throwUnknownVar(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_throwUnknownVar___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_throwUnknownVar___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_throwUnknownVar___rarg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_getJPParams_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_EmitC_getJPParams_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_getJPParams_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_uint64_of_nat(x_2);
x_6 = (size_t)x_5;
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Std_AssocList_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
#define _init_l_Lean_IR_EmitC_getJPParams___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("unknown join point");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_getJPParams___closed__1_end;\
}\
l_Lean_IR_EmitC_getJPParams___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_getJPParams(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = l_Std_HashMapImp_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__1(x_4, x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_IR_EmitC_getJPParams___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_IR_EmitC_getJPParams___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_EmitC_getJPParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_getJPParams(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = l_Nat_repr(x_1);
x_5 = l_Lean_IR_instToStringVarId___closed__1;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = lean_string_append(x_3, x_6);
lean_dec(x_6);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
#define _init_l_Lean_IR_EmitC_declareVar___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("; ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_declareVar___closed__1_end;\
}\
l_Lean_IR_EmitC_declareVar___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_declareVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = l_Lean_IR_EmitC_toCType(x_2);
x_6 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_5, x_3, x_4);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_3, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_3, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_declareVar___closed__1;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_3, x_12);
return x_14;
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_declareVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_declareVar(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_declareParams___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_IR_EmitC_declareVar(x_9, x_10, x_5, x_6);
lean_dec(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 1;
x_15 = x_2 + x_14;
x_2 = x_15;
x_4 = x_12;
x_6 = x_13;
goto _start;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_4);
lean_ctor_set(x_17, 1, x_6);
return x_17;
}
}
}
lean_object* l_Lean_IR_EmitC_declareParams(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_4, x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = 0;
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_declareParams___spec__1(x_1, x_12, x_13, x_14, x_2, x_3);
return x_15;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_declareParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_declareParams___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_EmitC_declareParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_declareParams(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_declareVars_match__1___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
x_10 = lean_box(x_2);
x_11 = lean_apply_6(x_3, x_1, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
case 1:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 3);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_box(x_2);
x_17 = lean_apply_5(x_4, x_12, x_13, x_14, x_15, x_16);
return x_17;
}
default: 
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_4);
lean_dec(x_3);
x_18 = lean_box(x_2);
x_19 = lean_apply_2(x_5, x_1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_IR_EmitC_declareVars_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_declareVars_match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_declareVars_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_IR_EmitC_declareVars_match__1___rarg(x_1, x_6, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_declareVars(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 3);
x_9 = l_Lean_IR_isTailCallTo(x_8, x_1);
lean_dec(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = l_Lean_IR_EmitC_declareVar(x_5, x_6, x_3, x_4);
lean_dec(x_6);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = 1;
x_1 = x_7;
x_2 = x_12;
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_14 = lean_box(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 3);
lean_inc(x_17);
lean_dec(x_1);
x_18 = l_Lean_IR_EmitC_declareParams(x_16, x_3, x_4);
if (x_2 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_array_get_size(x_16);
lean_dec(x_16);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
lean_dec(x_20);
x_1 = x_17;
x_2 = x_22;
x_4 = x_19;
goto _start;
}
else
{
lean_object* x_24; uint8_t x_25; 
lean_dec(x_16);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = 1;
x_1 = x_17;
x_2 = x_25;
x_4 = x_24;
goto _start;
}
}
default: 
{
uint8_t x_27; 
x_27 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_28;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_1);
x_30 = lean_box(x_2);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_4);
return x_31;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_declareVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_Lean_IR_EmitC_declareVars(x_1, x_5, x_3, x_4);
lean_dec(x_3);
return x_6;
}
}
#define _init_l_Lean_IR_EmitC_emitTag___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_obj_tag(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitTag___closed__1_end;\
}\
l_Lean_IR_EmitC_emitTag___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitTag(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_IR_IRType_isObj(x_2);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_3, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = l_Lean_IR_EmitC_emitTag___closed__1;
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_7, x_3, x_4);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_3, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_prec_x28___x29___closed__7;
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_12, x_3, x_11);
return x_13;
}
}
}
lean_object* l_Lean_IR_EmitC_emitTag___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitTag(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_isIf_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_Lean_IR_EmitC_isIf_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_isIf_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_isIf(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(2u);
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_IR_instInhabitedAlt;
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_get(x_6, x_1, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_array_get(x_6, x_1, x_12);
x_14 = l_Lean_IR_AltCore_body(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_8);
x_18 = lean_box(0);
return x_18;
}
}
}
}
lean_object* l_Lean_IR_EmitC_isIf___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_EmitC_isIf(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Nat_repr(x_1);
x_5 = lean_string_append(x_3, x_4);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
#define _init_l_Lean_IR_EmitC_emitInc___lambda__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(");");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInc___lambda__1___closed__1_end;\
}\
l_Lean_IR_EmitC_emitInc___lambda__1___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitInc___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_5 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_4, x_2, x_3);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitInc___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitInc___lambda__1___boxed), 3, 0);\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInc___closed__1_end;\
}\
l_Lean_IR_EmitC_emitInc___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInc___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_inc_ref_n");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInc___closed__2_end;\
}\
l_Lean_IR_EmitC_emitInc___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInc___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_inc_ref");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInc___closed__3_end;\
}\
l_Lean_IR_EmitC_emitInc___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInc___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_inc_n");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInc___closed__4_end;\
}\
l_Lean_IR_EmitC_emitInc___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInc___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_inc");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInc___closed__5_end;\
}\
l_Lean_IR_EmitC_emitInc___closed__5_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitInc(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
if (x_3 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_dec_eq(x_2, x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = l_Lean_IR_EmitC_emitInc___closed__2;
x_6 = x_29;
goto block_26;
}
else
{
lean_object* x_30; 
x_30 = l_Lean_IR_EmitC_emitInc___closed__3;
x_6 = x_30;
goto block_26;
}
}
else
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_dec_eq(x_2, x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = l_Lean_IR_EmitC_emitInc___closed__4;
x_6 = x_33;
goto block_26;
}
else
{
lean_object* x_34; 
x_34 = l_Lean_IR_EmitC_emitInc___closed__5;
x_6 = x_34;
goto block_26;
}
}
block_26:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_4, x_5);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_prec_x28___x29___closed__3;
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_4, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_4, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_IR_EmitC_emitInc___closed__1;
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_dec_eq(x_2, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = l_term_x5b___x5d___closed__5;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_4, x_13);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_4, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_apply_3(x_14, x_21, x_4, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_2);
x_24 = lean_box(0);
x_25 = lean_apply_3(x_14, x_24, x_4, x_13);
return x_25;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitInc___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitInc___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitInc___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_IR_EmitC_emitInc(x_1, x_2, x_6, x_4, x_5);
return x_7;
}
}
#define _init_l_Lean_IR_EmitC_emitDec___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_dec_ref");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDec___closed__1_end;\
}\
l_Lean_IR_EmitC_emitDec___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitDec___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_dec");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDec___closed__2_end;\
}\
l_Lean_IR_EmitC_emitDec___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitDec(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
if (x_3 == 0)
{
lean_object* x_26; 
x_26 = l_Lean_IR_EmitC_emitDec___closed__1;
x_6 = x_26;
goto block_25;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_IR_EmitC_emitDec___closed__2;
x_6 = x_27;
goto block_25;
}
block_25:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_4, x_5);
lean_dec(x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_prec_x28___x29___closed__3;
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_4, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_4, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_dec_eq(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = l_term_x5b___x5d___closed__5;
x_17 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_4, x_13);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_4, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_22 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_21, x_4, x_20);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_2);
x_23 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_24 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_23, x_4, x_13);
return x_24;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitDec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_Lean_IR_EmitC_emitDec(x_1, x_2, x_6, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
#define _init_l_Lean_IR_EmitC_emitDel___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_free_object(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDel___closed__1_end;\
}\
l_Lean_IR_EmitC_emitDel___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitDel(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = l_Lean_IR_EmitC_emitDel___closed__1;
x_5 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_2, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_10 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_9, x_2, x_8);
return x_10;
}
}
lean_object* l_Lean_IR_EmitC_emitDel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitDel(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
#define _init_l_Lean_IR_EmitC_emitSetTag___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set_tag(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSetTag___closed__1_end;\
}\
l_Lean_IR_EmitC_emitSetTag___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitSetTag(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_5 = l_Lean_IR_EmitC_emitSetTag___closed__1;
x_6 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_5, x_3, x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_3, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_term_x5b___x5d___closed__5;
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_3, x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_16 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_15, x_3, x_14);
return x_16;
}
}
lean_object* l_Lean_IR_EmitC_emitSetTag___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitSetTag(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitSet___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSet___closed__1_end;\
}\
l_Lean_IR_EmitC_emitSet___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = l_Lean_IR_EmitC_emitSet___closed__1;
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_4, x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_4, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_term_x5b___x5d___closed__5;
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_11, x_4, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_4, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_11, x_4, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_emitArg(x_3, x_4, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_21 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_20, x_4, x_19);
return x_21;
}
}
lean_object* l_Lean_IR_EmitC_emitSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitSet(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
#define _init_l_Lean_IR_EmitC_emitOffset___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("sizeof(void*)*");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitOffset___closed__1_end;\
}\
l_Lean_IR_EmitC_emitOffset___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_1);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = l_Lean_IR_EmitC_emitOffset___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_3, x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_1, x_3, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_11, 1);
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = lean_nat_dec_lt(x_5, x_2);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_2);
x_16 = lean_box(0);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_free_object(x_11);
x_17 = l_Lean_Parser_Syntax_addPrec___closed__11;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_3, x_13);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_19);
return x_20;
}
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_nat_dec_lt(x_5, x_2);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_2);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = l_Lean_Parser_Syntax_addPrec___closed__11;
x_26 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_25, x_3, x_21);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitOffset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitOffset(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitUSet___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set_usize(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitUSet___closed__1_end;\
}\
l_Lean_IR_EmitC_emitUSet___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitUSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = l_Lean_IR_EmitC_emitUSet___closed__1;
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_4, x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_4, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_term_x5b___x5d___closed__5;
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_11, x_4, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_4, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_11, x_4, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_3, x_4, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_21 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_20, x_4, x_19);
return x_21;
}
}
lean_object* l_Lean_IR_EmitC_emitUSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitUSet(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitSSet_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
case 2:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_4, x_12);
return x_13;
}
case 3:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_5, x_14);
return x_15;
}
case 4:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_6, x_16);
return x_17;
}
default: 
{
lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_apply_1(x_7, x_1);
return x_18;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitSSet_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitSSet_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emitSSet___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_8 = l_prec_x28___x29___closed__3;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_6, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_6, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_term_x5b___x5d___closed__5;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_6, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emitOffset(x_2, x_3, x_6, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_6, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_4, x_6, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_23 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_22, x_6, x_21);
return x_23;
}
}
#define _init_l_Lean_IR_EmitC_emitSSet___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set_float");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSSet___closed__1_end;\
}\
l_Lean_IR_EmitC_emitSSet___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSSet___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set_uint8");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSSet___closed__2_end;\
}\
l_Lean_IR_EmitC_emitSSet___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSSet___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set_uint16");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSSet___closed__3_end;\
}\
l_Lean_IR_EmitC_emitSSet___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSSet___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set_uint32");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSSet___closed__4_end;\
}\
l_Lean_IR_EmitC_emitSSet___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSSet___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_set_uint64");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSSet___closed__5_end;\
}\
l_Lean_IR_EmitC_emitSSet___closed__5_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSSet___closed__6(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("invalid instruction");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSSet___closed__6_end;\
}\
l_Lean_IR_EmitC_emitSSet___closed__6_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitSSet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_Lean_IR_EmitC_emitSSet___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_IR_EmitC_emitSSet___lambda__1(x_1, x_2, x_3, x_4, x_10, x_6, x_11);
lean_dec(x_10);
return x_12;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = l_Lean_IR_EmitC_emitSSet___closed__2;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_6, x_7);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_IR_EmitC_emitSSet___lambda__1(x_1, x_2, x_3, x_4, x_15, x_6, x_16);
lean_dec(x_15);
return x_17;
}
case 2:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = l_Lean_IR_EmitC_emitSSet___closed__3;
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_6, x_7);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_IR_EmitC_emitSSet___lambda__1(x_1, x_2, x_3, x_4, x_20, x_6, x_21);
lean_dec(x_20);
return x_22;
}
case 3:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = l_Lean_IR_EmitC_emitSSet___closed__4;
x_24 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_23, x_6, x_7);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_IR_EmitC_emitSSet___lambda__1(x_1, x_2, x_3, x_4, x_25, x_6, x_26);
lean_dec(x_25);
return x_27;
}
case 4:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = l_Lean_IR_EmitC_emitSSet___closed__5;
x_29 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_28, x_6, x_7);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_IR_EmitC_emitSSet___lambda__1(x_1, x_2, x_3, x_4, x_30, x_6, x_31);
lean_dec(x_30);
return x_32;
}
default: 
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = l_Lean_IR_EmitC_emitSSet___closed__6;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_7);
return x_34;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitSSet___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_IR_EmitC_emitSSet___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
lean_object* l_Lean_IR_EmitC_emitSSet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_IR_EmitC_emitSSet(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_8;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitJmp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_IR_instInhabitedParam;
x_14 = lean_array_get(x_13, x_2, x_12);
x_15 = l_Lean_IR_instInhabitedArg;
x_16 = lean_array_get(x_15, x_1, x_12);
lean_dec(x_12);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_17, x_5, x_6);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_term___x3d_____closed__3;
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_20, x_5, x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_IR_EmitC_emitArg(x_16, x_5, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_26 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_25, x_5, x_24);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_4 = x_10;
x_6 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_4);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_6);
return x_30;
}
}
}
#define _init_l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("goto ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1_end;\
}\
l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitJmp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_array_get_size(x_1);
lean_inc(x_7);
x_8 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitJmp___spec__1(x_1, x_2, x_7, x_7, x_5, x_6);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1;
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_5, x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emitJP(x_3, x_5, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_16 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_15, x_5, x_14);
return x_16;
}
}
#define _init_l_Lean_IR_EmitC_emitJmp___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("invalid goto");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitJmp___closed__1_end;\
}\
l_Lean_IR_EmitC_emitJmp___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitJmp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_getJPParams(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_array_get_size(x_2);
x_10 = lean_array_get_size(x_7);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_1);
x_12 = l_Lean_IR_EmitC_emitJmp___closed__1;
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_12);
return x_5;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_free_object(x_5);
x_13 = lean_box(0);
x_14 = l_Lean_IR_EmitC_emitJmp___lambda__1(x_2, x_7, x_1, x_13, x_3, x_8);
lean_dec(x_7);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = lean_array_get_size(x_2);
x_18 = lean_array_get_size(x_15);
x_19 = lean_nat_dec_eq(x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_15);
lean_dec(x_1);
x_20 = l_Lean_IR_EmitC_emitJmp___closed__1;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_16);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_IR_EmitC_emitJmp___lambda__1(x_2, x_15, x_1, x_22, x_3, x_16);
lean_dec(x_15);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
return x_5;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitJmp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitJmp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitJmp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_EmitC_emitJmp___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitJmp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitJmp(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitLhs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_term___x3d_____closed__3;
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_2, x_5);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitLhs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitLhs(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_IR_instInhabitedArg;
x_7 = lean_array_get(x_6, x_1, x_2);
x_8 = l_Lean_IR_EmitC_emitArg(x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_nat_sub(x_2, x_9);
x_11 = lean_nat_sub(x_10, x_8);
lean_dec(x_10);
x_12 = lean_nat_dec_lt(x_6, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_box(0);
x_14 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___lambda__1(x_1, x_11, x_13, x_4, x_5);
lean_dec(x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_3 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = l_term_x5b___x5d___closed__5;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_4, x_5);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___lambda__1(x_1, x_11, x_19, x_4, x_20);
lean_dec(x_19);
lean_dec(x_11);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_3 = x_9;
x_5 = x_22;
goto _start;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_5);
return x_25;
}
}
}
lean_object* l_Lean_IR_EmitC_emitArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_array_get_size(x_1);
lean_inc(x_4);
x_5 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1(x_1, x_4, x_4, x_2, x_3);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitArgs___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitArgs(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
#define _init_l_Lean_IR_EmitC_emitCtorScalarSize___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("sizeof(size_t)*");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitCtorScalarSize___closed__1_end;\
}\
l_Lean_IR_EmitC_emitCtorScalarSize___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitCtorScalarSize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = lean_nat_dec_eq(x_2, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = l_Lean_IR_EmitC_emitCtorScalarSize___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_3, x_4);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_1, x_3, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Parser_Syntax_addPrec___closed__11;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_3, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_2);
x_17 = l_Lean_IR_EmitC_emitCtorScalarSize___closed__1;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_3, x_4);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_1, x_3, x_19);
return x_20;
}
}
else
{
lean_object* x_21; 
lean_dec(x_1);
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_4);
return x_21;
}
}
}
lean_object* l_Lean_IR_EmitC_emitCtorScalarSize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitCtorScalarSize(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitAllocCtor___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_alloc_ctor(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitAllocCtor___closed__1_end;\
}\
l_Lean_IR_EmitC_emitAllocCtor___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitAllocCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_4 = l_Lean_IR_EmitC_emitAllocCtor___closed__1;
x_5 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_7, x_2, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_term_x5b___x5d___closed__5;
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_2, x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_13, x_2, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_2, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 4);
lean_inc(x_19);
lean_dec(x_1);
x_20 = l_Lean_IR_EmitC_emitCtorScalarSize(x_18, x_19, x_2, x_17);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_23 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_22, x_2, x_21);
return x_23;
}
}
lean_object* l_Lean_IR_EmitC_emitAllocCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitAllocCtor(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitCtorSetArgs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emitSet___closed__1;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_5, x_6);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_1);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_5, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_term_x5b___x5d___closed__5;
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_5, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_12);
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_12, x_5, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_5, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_IR_instInhabitedArg;
x_26 = lean_array_get(x_25, x_2, x_12);
lean_dec(x_12);
x_27 = l_Lean_IR_EmitC_emitArg(x_26, x_5, x_24);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_30 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_29, x_5, x_28);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_4 = x_10;
x_6 = x_31;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_4);
lean_dec(x_1);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_6);
return x_34;
}
}
}
lean_object* l_Lean_IR_EmitC_emitCtorSetArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_array_get_size(x_2);
lean_inc(x_5);
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitCtorSetArgs___spec__1(x_1, x_2, x_5, x_5, x_3, x_4);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitCtorSetArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitCtorSetArgs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitCtorSetArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitCtorSetArgs(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitCtor___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitCtor___closed__1_end;\
}\
l_Lean_IR_EmitC_emitCtor___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_1);
x_6 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_IR_EmitC_emitAllocCtor(x_2, x_4, x_7);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emitCtorSetArgs(x_1, x_3, x_4, x_12);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_2, 3);
lean_inc(x_14);
x_15 = lean_nat_dec_eq(x_14, x_9);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_Lean_IR_EmitC_emitAllocCtor(x_2, x_4, x_7);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_emitCtorSetArgs(x_1, x_3, x_4, x_17);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_2, 4);
lean_inc(x_19);
x_20 = lean_nat_dec_eq(x_19, x_9);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = l_Lean_IR_EmitC_emitAllocCtor(x_2, x_4, x_7);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_IR_EmitC_emitCtorSetArgs(x_1, x_3, x_4, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_1);
x_24 = l_Lean_IR_EmitC_emitCtor___closed__1;
x_25 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_24, x_4, x_7);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_27, x_4, x_26);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_31 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_30, x_4, x_29);
return x_31;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitCtor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitCtor(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
#define _init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" lean_ctor_release(");\
__INIT_VAR__ = x_1; goto l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1_end;\
}\
l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1_end: ((void) 0);}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_nat_sub(x_2, x_9);
x_11 = lean_nat_sub(x_10, x_8);
lean_dec(x_10);
x_12 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1;
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_12, x_4, x_5);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
lean_inc(x_1);
x_15 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_4, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_term_x5b___x5d___closed__5;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_4, x_16);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_11, x_4, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_23 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_22, x_4, x_21);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_3 = x_9;
x_5 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_3);
lean_dec(x_1);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_5);
return x_27;
}
}
}
#define _init_l_Lean_IR_EmitC_emitReset___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("if (lean_is_exclusive(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitReset___closed__1_end;\
}\
l_Lean_IR_EmitC_emitReset___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitReset___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(")) {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitReset___closed__2_end;\
}\
l_Lean_IR_EmitC_emitReset___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitReset___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" lean_dec_ref(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitReset___closed__3_end;\
}\
l_Lean_IR_EmitC_emitReset___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitReset___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box(0);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitReset___closed__4_end;\
}\
l_Lean_IR_EmitC_emitReset___closed__4_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitReset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_6 = l_Lean_IR_EmitC_emitReset___closed__1;
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_4, x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_3);
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_3, x_4, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emitReset___closed__2;
x_12 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_11, x_4, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_2);
lean_inc(x_3);
x_14 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1(x_3, x_2, x_2, x_4, x_13);
lean_dec(x_2);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_17 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_4, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_1);
x_19 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_3);
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_3, x_4, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_24 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_23, x_4, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4;
x_27 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_26, x_4, x_25);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_IR_EmitC_emitReset___closed__3;
x_30 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_29, x_4, x_28);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_3, x_4, x_31);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_35 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_34, x_4, x_33);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_4, x_36);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_38);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_Lean_IR_EmitC_emitReset___closed__4;
x_42 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_41, x_4, x_40);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_45 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_44, x_4, x_43);
return x_45;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitReset___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitReset(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitReuse___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_7 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_6, x_4, x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_EmitC_emitCtorSetArgs(x_1, x_2, x_4, x_8);
return x_9;
}
}
#define _init_l_Lean_IR_EmitC_emitReuse___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("if (lean_is_scalar(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitReuse___closed__1_end;\
}\
l_Lean_IR_EmitC_emitReuse___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitReuse___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" lean_ctor_set_tag(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitReuse___closed__2_end;\
}\
l_Lean_IR_EmitC_emitReuse___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitReuse(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_8 = l_Lean_IR_EmitC_emitReuse___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_6, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_2);
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_2, x_6, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emitReset___closed__2;
x_14 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_13, x_6, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_17 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_6, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_1);
x_19 = l_Lean_IR_EmitC_emitLhs(x_1, x_6, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_3);
x_21 = l_Lean_IR_EmitC_emitAllocCtor(x_3, x_6, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4;
x_24 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_23, x_6, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_6, x_25);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
lean_inc(x_1);
x_28 = l_Lean_IR_EmitC_emitLhs(x_1, x_6, x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_2, x_6, x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_33 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_32, x_6, x_31);
if (x_4 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_3);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_box(0);
x_36 = l_Lean_IR_EmitC_emitReuse___lambda__1(x_1, x_5, x_35, x_6, x_34);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = l_Lean_IR_EmitC_emitReuse___closed__2;
x_39 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_38, x_6, x_37);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
lean_inc(x_1);
x_41 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_6, x_40);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_term_x5b___x5d___closed__5;
x_44 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_43, x_6, x_42);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_ctor_get(x_3, 1);
lean_inc(x_46);
lean_dec(x_3);
x_47 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_46, x_6, x_45);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_50 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_49, x_6, x_48);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_IR_EmitC_emitReuse___lambda__1(x_1, x_5, x_51, x_6, x_52);
lean_dec(x_51);
return x_53;
}
}
}
lean_object* l_Lean_IR_EmitC_emitReuse___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitReuse___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitReuse___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_4);
lean_dec(x_4);
x_9 = l_Lean_IR_EmitC_emitReuse(x_1, x_2, x_3, x_8, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
#define _init_l_Lean_IR_EmitC_emitProj___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_get(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitProj___closed__1_end;\
}\
l_Lean_IR_EmitC_emitProj___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_6 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_IR_EmitC_emitProj___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_4, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_3, x_4, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_term_x5b___x5d___closed__5;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_4, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_4, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_19 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_18, x_4, x_17);
return x_19;
}
}
lean_object* l_Lean_IR_EmitC_emitProj___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitProj(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
#define _init_l_Lean_IR_EmitC_emitUProj___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_get_usize(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitUProj___closed__1_end;\
}\
l_Lean_IR_EmitC_emitUProj___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitUProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_6 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_IR_EmitC_emitUProj___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_4, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_3, x_4, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_term_x5b___x5d___closed__5;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_4, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_4, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_19 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_18, x_4, x_17);
return x_19;
}
}
lean_object* l_Lean_IR_EmitC_emitUProj___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitUProj(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitSProj___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_7 = l_prec_x28___x29___closed__3;
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_7, x_5, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_5, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_term_x5b___x5d___closed__5;
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_12, x_5, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_IR_EmitC_emitOffset(x_2, x_3, x_5, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_18 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_17, x_5, x_16);
return x_18;
}
}
#define _init_l_Lean_IR_EmitC_emitSProj___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_get_float");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSProj___closed__1_end;\
}\
l_Lean_IR_EmitC_emitSProj___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSProj___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_get_uint8");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSProj___closed__2_end;\
}\
l_Lean_IR_EmitC_emitSProj___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSProj___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_get_uint16");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSProj___closed__3_end;\
}\
l_Lean_IR_EmitC_emitSProj___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSProj___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_get_uint32");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSProj___closed__4_end;\
}\
l_Lean_IR_EmitC_emitSProj___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitSProj___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_ctor_get_uint64");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitSProj___closed__5_end;\
}\
l_Lean_IR_EmitC_emitSProj___closed__5_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitSProj(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_IR_EmitC_emitLhs(x_1, x_6, x_7);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emitSProj___closed__1;
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_6, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_IR_EmitC_emitSProj___lambda__1(x_5, x_3, x_4, x_12, x_6, x_13);
lean_dec(x_12);
return x_14;
}
case 1:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = l_Lean_IR_EmitC_emitSProj___closed__2;
x_17 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_6, x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_IR_EmitC_emitSProj___lambda__1(x_5, x_3, x_4, x_18, x_6, x_19);
lean_dec(x_18);
return x_20;
}
case 2:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_8, 1);
lean_inc(x_21);
lean_dec(x_8);
x_22 = l_Lean_IR_EmitC_emitSProj___closed__3;
x_23 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_22, x_6, x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_IR_EmitC_emitSProj___lambda__1(x_5, x_3, x_4, x_24, x_6, x_25);
lean_dec(x_24);
return x_26;
}
case 3:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_8, 1);
lean_inc(x_27);
lean_dec(x_8);
x_28 = l_Lean_IR_EmitC_emitSProj___closed__4;
x_29 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_28, x_6, x_27);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_IR_EmitC_emitSProj___lambda__1(x_5, x_3, x_4, x_30, x_6, x_31);
lean_dec(x_30);
return x_32;
}
case 4:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_8, 1);
lean_inc(x_33);
lean_dec(x_8);
x_34 = l_Lean_IR_EmitC_emitSProj___closed__5;
x_35 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_34, x_6, x_33);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_IR_EmitC_emitSProj___lambda__1(x_5, x_3, x_4, x_36, x_6, x_37);
lean_dec(x_36);
return x_38;
}
default: 
{
uint8_t x_39; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_8);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_8, 0);
lean_dec(x_40);
x_41 = l_Lean_IR_EmitC_emitSSet___closed__6;
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_41);
return x_8;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_8, 1);
lean_inc(x_42);
lean_dec(x_8);
x_43 = l_Lean_IR_EmitC_emitSSet___closed__6;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitSProj___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_EmitC_emitSProj___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitSProj___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_IR_EmitC_emitSProj(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_List_map___at_Lean_IR_EmitC_toStringArgs___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_IR_EmitC_argToCString(x_4);
x_7 = l_List_map___at_Lean_IR_EmitC_toStringArgs___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_Lean_IR_EmitC_argToCString(x_8);
x_11 = l_List_map___at_Lean_IR_EmitC_toStringArgs___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_IR_EmitC_toStringArgs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_array_to_list(lean_box(0), x_1);
x_3 = l_List_map___at_Lean_IR_EmitC_toStringArgs___spec__1(x_2);
return x_3;
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_Lean_IR_instInhabitedArg;
x_7 = lean_array_get(x_6, x_1, x_2);
x_8 = l_Lean_IR_EmitC_emitArg(x_7, x_4, x_5);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
lean_dec(x_10);
x_11 = 0;
x_12 = lean_box(x_11);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_4, x_10);
lean_dec(x_4);
x_12 = lean_nat_sub(x_3, x_11);
x_13 = lean_nat_sub(x_12, x_10);
lean_dec(x_12);
x_14 = l_Lean_IR_instInhabitedParam;
x_15 = lean_array_get(x_14, x_1, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_IR_IRType_isIrrelevant(x_16);
lean_dec(x_16);
if (x_17 == 0)
{
if (x_5 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = l_term_x5b___x5d___closed__5;
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_6, x_7);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___lambda__1(x_2, x_13, x_20, x_6, x_21);
lean_dec(x_20);
lean_dec(x_13);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unbox(x_23);
lean_dec(x_23);
x_4 = x_11;
x_5 = x_25;
x_7 = x_24;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_box(0);
x_28 = l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___lambda__1(x_2, x_13, x_27, x_6, x_7);
lean_dec(x_13);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_unbox(x_29);
lean_dec(x_29);
x_4 = x_11;
x_5 = x_31;
x_7 = x_30;
goto _start;
}
}
else
{
lean_dec(x_13);
x_4 = x_11;
goto _start;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_4);
x_34 = lean_box(x_5);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_7);
return x_35;
}
}
}
lean_object* l_Lean_IR_EmitC_emitSimpleExternalCall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_6 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_prec_x28___x29___closed__3;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_4, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_array_get_size(x_3);
x_12 = 1;
lean_inc(x_11);
x_13 = l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1(x_2, x_3, x_11, x_11, x_12, x_4, x_10);
lean_dec(x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_16 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_15, x_4, x_14);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_5);
lean_dec(x_5);
x_9 = l_Nat_foldM_loop___at_Lean_IR_EmitC_emitSimpleExternalCall___spec__1(x_1, x_2, x_3, x_4, x_8, x_6, x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_EmitC_emitSimpleExternalCall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitSimpleExternalCall(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitExternCall_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_1);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_8; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_apply_1(x_5, x_1);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_2(x_3, x_9, x_10);
return x_11;
}
case 2:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_apply_2(x_2, x_12, x_13);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = lean_apply_2(x_4, x_15, x_16);
return x_17;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitExternCall_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitExternCall_match__1___rarg), 5, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_emitExternCall___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("failed to emit extern application '");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitExternCall___closed__1_end;\
}\
l_Lean_IR_EmitC_emitExternCall___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitExternCall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2;
x_8 = l_Lean_getExternEntryFor(x_3, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_9 = 1;
x_10 = l_Lean_Name_toString(x_1, x_9);
x_11 = l_Lean_IR_EmitC_emitExternCall___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Char_quote___closed__1;
x_14 = lean_string_append(x_12, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_6);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_8, 0);
lean_inc(x_16);
lean_dec(x_8);
switch (lean_obj_tag(x_16)) {
case 0:
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_16);
lean_dec(x_4);
x_17 = 1;
x_18 = l_Lean_Name_toString(x_1, x_17);
x_19 = l_Lean_IR_EmitC_emitExternCall___closed__1;
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = l_Char_quote___closed__1;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_6);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_1);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_dec(x_16);
x_25 = l_Lean_IR_EmitC_toStringArgs(x_4);
x_26 = l_Lean_expandExternPattern(x_24, x_25);
lean_dec(x_25);
x_27 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_26, x_5, x_6);
lean_dec(x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_30 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_29, x_5, x_28);
return x_30;
}
default: 
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_31 = lean_ctor_get(x_16, 1);
lean_inc(x_31);
lean_dec(x_16);
x_32 = l_Lean_IR_EmitC_emitSimpleExternalCall(x_31, x_2, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_31);
return x_32;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitExternCall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_EmitC_emitExternCall(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitFullApp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_4(x_2, x_5, x_6, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_IR_EmitC_emitFullApp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitFullApp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emitFullApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
lean_inc(x_2);
x_8 = l_Lean_IR_EmitC_getDecl(x_2, x_4, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_IR_EmitC_emitCName(x_2, x_4, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_array_get_size(x_3);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_16 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_17 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_16, x_4, x_12);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = l_prec_x28___x29___closed__3;
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_4, x_12);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_IR_EmitC_emitArgs(x_3, x_4, x_20);
lean_dec(x_3);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_prec_x28___x29___closed__7;
x_24 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_23, x_4, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_27 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_26, x_4, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_3);
x_28 = !lean_is_exclusive(x_11);
if (x_28 == 0)
{
return x_11;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_11, 0);
x_30 = lean_ctor_get(x_11, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_11);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_8, 1);
lean_inc(x_32);
lean_dec(x_8);
x_33 = lean_ctor_get(x_9, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_9, 3);
lean_inc(x_34);
lean_dec(x_9);
x_35 = l_Lean_IR_EmitC_emitExternCall(x_2, x_33, x_34, x_3, x_4, x_32);
lean_dec(x_34);
lean_dec(x_33);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_8);
if (x_36 == 0)
{
return x_8;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_8, 0);
x_38 = lean_ctor_get(x_8, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_8);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitFullApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitFullApp(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
#define _init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_closure_set(");\
__INIT_VAR__ = x_1; goto l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1_end;\
}\
l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1_end: ((void) 0);}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_IR_instInhabitedArg;
x_14 = lean_array_get(x_13, x_2, x_12);
x_15 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1;
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_15, x_5, x_6);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_1);
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_5, x_17);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_term_x5b___x5d___closed__5;
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_20, x_5, x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_12, x_5, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_20, x_5, x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_IR_EmitC_emitArg(x_14, x_5, x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_30 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_29, x_5, x_28);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_4 = x_10;
x_6 = x_31;
goto _start;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_4);
lean_dec(x_1);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_6);
return x_34;
}
}
}
#define _init_l_Lean_IR_EmitC_emitPartialApp___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_alloc_closure((void*)(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitPartialApp___closed__1_end;\
}\
l_Lean_IR_EmitC_emitPartialApp___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitPartialApp___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("), ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitPartialApp___closed__2_end;\
}\
l_Lean_IR_EmitC_emitPartialApp___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitPartialApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_2);
x_6 = l_Lean_IR_EmitC_getDecl(x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_IR_Decl_params(x_7);
lean_dec(x_7);
x_10 = lean_array_get_size(x_9);
lean_dec(x_9);
lean_inc(x_1);
x_11 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_8);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emitPartialApp___closed__1;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_4, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emitCName(x_2, x_4, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_emitPartialApp___closed__2;
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_4, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_10, x_4, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_term_x5b___x5d___closed__5;
x_24 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_23, x_4, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_array_get_size(x_3);
lean_inc(x_26);
x_27 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_26, x_4, x_25);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_30 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_29, x_4, x_28);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
lean_inc(x_26);
x_32 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1(x_1, x_3, x_26, x_26, x_4, x_31);
lean_dec(x_26);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_10);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_16);
if (x_33 == 0)
{
return x_16;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_6);
if (x_37 == 0)
{
return x_6;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_6, 0);
x_39 = lean_ctor_get(x_6, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_6);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitPartialApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitPartialApp(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
#define _init_l_Lean_IR_EmitC_emitApp___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_apply_");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitApp___closed__1_end;\
}\
l_Lean_IR_EmitC_emitApp___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitApp___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("{ lean_object* _aargs[] = {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitApp___closed__2_end;\
}\
l_Lean_IR_EmitC_emitApp___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitApp___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("};");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitApp___closed__3_end;\
}\
l_Lean_IR_EmitC_emitApp___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitApp___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_apply_m(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitApp___closed__4_end;\
}\
l_Lean_IR_EmitC_emitApp___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitApp___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(", _aargs); }");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitApp___closed__5_end;\
}\
l_Lean_IR_EmitC_emitApp___closed__5_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_array_get_size(x_3);
x_7 = l_Lean_closureMaxArgs;
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_9 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emitApp___closed__1;
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_11, x_4, x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_6, x_4, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_prec_x28___x29___closed__3;
x_17 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_4, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_2, x_4, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_term_x5b___x5d___closed__5;
x_22 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_21, x_4, x_20);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_IR_EmitC_emitArgs(x_3, x_4, x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_27 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_26, x_4, x_25);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_28 = l_Lean_IR_EmitC_emitApp___closed__2;
x_29 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_28, x_4, x_5);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_IR_EmitC_emitArgs(x_3, x_4, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_IR_EmitC_emitApp___closed__3;
x_34 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_33, x_4, x_32);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_Lean_IR_EmitC_emitApp___closed__4;
x_39 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_38, x_4, x_37);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_2, x_4, x_40);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_term_x5b___x5d___closed__5;
x_44 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_43, x_4, x_42);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_6, x_4, x_45);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = l_Lean_IR_EmitC_emitApp___closed__5;
x_49 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_48, x_4, x_47);
return x_49;
}
}
}
lean_object* l_Lean_IR_EmitC_emitApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitApp(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitBoxFn_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_5, x_7);
return x_8;
}
case 3:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
case 4:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_apply_1(x_4, x_11);
return x_12;
}
case 5:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_2, x_13);
return x_14;
}
default: 
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_apply_1(x_6, x_1);
return x_15;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitBoxFn_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitBoxFn_match__1___rarg), 6, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_emitBoxFn___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box_float");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBoxFn___closed__1_end;\
}\
l_Lean_IR_EmitC_emitBoxFn___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBoxFn___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBoxFn___closed__2_end;\
}\
l_Lean_IR_EmitC_emitBoxFn___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBoxFn___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box_uint32");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBoxFn___closed__3_end;\
}\
l_Lean_IR_EmitC_emitBoxFn___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBoxFn___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box_uint64");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBoxFn___closed__4_end;\
}\
l_Lean_IR_EmitC_emitBoxFn___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBoxFn___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_box_usize");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBoxFn___closed__5_end;\
}\
l_Lean_IR_EmitC_emitBoxFn___closed__5_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitBoxFn(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_EmitC_emitBoxFn___closed__1;
x_5 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_4, x_2, x_3);
return x_5;
}
case 3:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_IR_EmitC_emitBoxFn___closed__3;
x_7 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_6, x_2, x_3);
return x_7;
}
case 4:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_IR_EmitC_emitBoxFn___closed__4;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_2, x_3);
return x_9;
}
case 5:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_IR_EmitC_emitBoxFn___closed__5;
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_2, x_3);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Lean_IR_EmitC_emitBoxFn___closed__2;
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_12, x_2, x_3);
return x_13;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitBoxFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitBoxFn(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitBox(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_IR_EmitC_emitBoxFn(x_3, x_4, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_prec_x28___x29___closed__3;
x_11 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_10, x_4, x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_2, x_4, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_16 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_15, x_4, x_14);
return x_16;
}
}
lean_object* l_Lean_IR_EmitC_emitBox___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitBox(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitUnbox___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = l_prec_x28___x29___closed__3;
x_6 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_5, x_3, x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_1, x_3, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_11 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_10, x_3, x_9);
return x_11;
}
}
#define _init_l_Lean_IR_EmitC_emitUnbox___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_unbox_float");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitUnbox___closed__1_end;\
}\
l_Lean_IR_EmitC_emitUnbox___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitUnbox___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_unbox");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitUnbox___closed__2_end;\
}\
l_Lean_IR_EmitC_emitUnbox___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitUnbox___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_unbox_uint32");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitUnbox___closed__3_end;\
}\
l_Lean_IR_EmitC_emitUnbox___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitUnbox___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_unbox_uint64");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitUnbox___closed__4_end;\
}\
l_Lean_IR_EmitC_emitUnbox___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitUnbox___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_unbox_usize");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitUnbox___closed__5_end;\
}\
l_Lean_IR_EmitC_emitUnbox___closed__5_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitUnbox(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_IR_EmitC_emitUnbox___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_4, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_IR_EmitC_emitUnbox___lambda__1(x_3, x_10, x_4, x_11);
lean_dec(x_10);
return x_12;
}
case 3:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = l_Lean_IR_EmitC_emitUnbox___closed__3;
x_15 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_14, x_4, x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_IR_EmitC_emitUnbox___lambda__1(x_3, x_16, x_4, x_17);
lean_dec(x_16);
return x_18;
}
case 4:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_19 = lean_ctor_get(x_6, 1);
lean_inc(x_19);
lean_dec(x_6);
x_20 = l_Lean_IR_EmitC_emitUnbox___closed__4;
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_20, x_4, x_19);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_IR_EmitC_emitUnbox___lambda__1(x_3, x_22, x_4, x_23);
lean_dec(x_22);
return x_24;
}
case 5:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
lean_dec(x_6);
x_26 = l_Lean_IR_EmitC_emitUnbox___closed__5;
x_27 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_26, x_4, x_25);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_IR_EmitC_emitUnbox___lambda__1(x_3, x_28, x_4, x_29);
lean_dec(x_28);
return x_30;
}
default: 
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_6, 1);
lean_inc(x_31);
lean_dec(x_6);
x_32 = l_Lean_IR_EmitC_emitUnbox___closed__2;
x_33 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_32, x_4, x_31);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_IR_EmitC_emitUnbox___lambda__1(x_3, x_34, x_4, x_35);
lean_dec(x_34);
return x_36;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitUnbox___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitUnbox___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitUnbox___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitUnbox(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
#define _init_l_Lean_IR_EmitC_emitIsShared___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("!lean_is_exclusive(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitIsShared___closed__1_end;\
}\
l_Lean_IR_EmitC_emitIsShared___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitIsShared(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = l_Lean_IR_EmitC_emitLhs(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_IR_EmitC_emitIsShared___closed__1;
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_7, x_3, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_2, x_3, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_13 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_12, x_3, x_11);
return x_13;
}
}
lean_object* l_Lean_IR_EmitC_emitIsShared___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitIsShared(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("!lean_is_scalar(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1_end;\
}\
l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitIsTaggedPtr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = l_Lean_IR_EmitC_emitLhs(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1;
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_7, x_3, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_2, x_3, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_13 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_12, x_3, x_11);
return x_13;
}
}
lean_object* l_Lean_IR_EmitC_emitIsTaggedPtr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitIsTaggedPtr(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_toHexDigit(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Nat_digitChar(x_1);
x_3 = l_Lean_instInhabitedParserDescr___closed__1;
x_4 = lean_string_push(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_toHexDigit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_EmitC_toHexDigit(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_quoteString___lambda__1(lean_object* x_1, uint32_t x_2) {
_start:
{
uint32_t x_3; uint8_t x_4; 
x_3 = 10;
x_4 = x_2 == x_3;
if (x_4 == 0)
{
uint32_t x_5; uint8_t x_6; 
x_5 = 92;
x_6 = x_2 == x_5;
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = 34;
x_8 = x_2 == x_7;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_uint32_to_nat(x_2);
x_10 = lean_unsigned_to_nat(31u);
x_11 = lean_nat_dec_le(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
x_12 = l_Lean_instInhabitedParserDescr___closed__1;
x_13 = lean_string_push(x_12, x_2);
x_14 = lean_string_append(x_1, x_13);
lean_dec(x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_unsigned_to_nat(16u);
x_16 = lean_nat_div(x_9, x_15);
x_17 = l_Lean_IR_EmitC_toHexDigit(x_16);
lean_dec(x_16);
x_18 = l_Char_quoteCore___closed__1;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_nat_mod(x_9, x_15);
lean_dec(x_9);
x_21 = l_Lean_IR_EmitC_toHexDigit(x_20);
lean_dec(x_20);
x_22 = lean_string_append(x_19, x_21);
lean_dec(x_21);
x_23 = lean_string_append(x_1, x_22);
lean_dec(x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = l_Char_quoteCore___closed__2;
x_25 = lean_string_append(x_1, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_Char_quoteCore___closed__3;
x_27 = lean_string_append(x_1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = l_Char_quoteCore___closed__5;
x_29 = lean_string_append(x_1, x_28);
return x_29;
}
}
}
#define _init_l_Lean_IR_EmitC_quoteString___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_quoteString___lambda__1___boxed), 2, 0);\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_quoteString___closed__1_end;\
}\
l_Lean_IR_EmitC_quoteString___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_quoteString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = l_Lean_IR_EmitC_quoteString___closed__1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_String_quote___closed__2;
x_6 = l_String_foldlAux_loop___rarg(x_3, x_1, x_2, x_4, x_5);
lean_dec(x_2);
x_7 = lean_string_append(x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_quoteString___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l_Lean_IR_EmitC_quoteString___lambda__1(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_quoteString___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_EmitC_quoteString(x_1);
lean_dec(x_1);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_emitNumLit___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_cstr_to_nat(\"");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitNumLit___closed__1_end;\
}\
l_Lean_IR_EmitC_emitNumLit___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitNumLit___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("\")");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitNumLit___closed__2_end;\
}\
l_Lean_IR_EmitC_emitNumLit___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitNumLit___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_unsigned_to_nat(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitNumLit___closed__3_end;\
}\
l_Lean_IR_EmitC_emitNumLit___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitNumLit___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("u)");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitNumLit___closed__4_end;\
}\
l_Lean_IR_EmitC_emitNumLit___closed__4_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitNumLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_IR_IRType_isObj(x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_4);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_UInt32_size;
x_8 = lean_nat_dec_lt(x_2, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = l_Lean_IR_EmitC_emitNumLit___closed__1;
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_3, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_IR_EmitC_emitNumLit___closed__2;
x_15 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_14, x_3, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_16 = l_Lean_IR_EmitC_emitNumLit___closed__3;
x_17 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_16, x_3, x_4);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_2, x_3, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_IR_EmitC_emitNumLit___closed__4;
x_22 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_21, x_3, x_20);
return x_22;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitNumLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitNumLit(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitLit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_IR_EmitC_emitLit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitLit_match__1___rarg), 3, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_emitLit___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_mk_string(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitLit___closed__1_end;\
}\
l_Lean_IR_EmitC_emitLit___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitLhs(x_1, x_4, x_5);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_Lean_IR_EmitC_emitNumLit(x_2, x_8, x_4, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_12 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_11, x_4, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
lean_dec(x_3);
x_15 = l_Lean_IR_EmitC_emitLit___closed__1;
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_15, x_4, x_13);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_IR_EmitC_quoteString(x_14);
lean_dec(x_14);
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_4, x_17);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_22 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_21, x_4, x_20);
return x_22;
}
}
}
lean_object* l_Lean_IR_EmitC_emitLit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitLit(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitVDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_2(x_2, x_16, x_17);
return x_18;
}
case 1:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_apply_2(x_3, x_19, x_20);
return x_21;
}
case 2:
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_box(x_24);
x_27 = lean_apply_4(x_4, x_22, x_23, x_26, x_25);
return x_27;
}
case 3:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_apply_2(x_5, x_28, x_29);
return x_30;
}
case 4:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
lean_dec(x_1);
x_33 = lean_apply_2(x_6, x_31, x_32);
return x_33;
}
case 5:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 2);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_apply_3(x_7, x_34, x_35, x_36);
return x_37;
}
case 6:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_apply_2(x_8, x_38, x_39);
return x_40;
}
case 7:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 1);
lean_inc(x_42);
lean_dec(x_1);
x_43 = lean_apply_2(x_9, x_41, x_42);
return x_43;
}
case 8:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_2(x_10, x_44, x_45);
return x_46;
}
case 9:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_49 = lean_apply_2(x_11, x_47, x_48);
return x_49;
}
case 10:
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
lean_dec(x_1);
x_51 = lean_apply_1(x_12, x_50);
return x_51;
}
case 11:
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
lean_dec(x_1);
x_53 = lean_apply_1(x_15, x_52);
return x_53;
}
case 12:
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
lean_dec(x_1);
x_55 = lean_apply_1(x_13, x_54);
return x_55;
}
default: 
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_ctor_get(x_1, 0);
lean_inc(x_56);
lean_dec(x_1);
x_57 = lean_apply_1(x_14, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitVDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitVDecl_match__1___rarg), 15, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emitVDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Lean_IR_EmitC_emitCtor(x_1, x_6, x_7, x_4, x_5);
lean_dec(x_7);
return x_8;
}
case 1:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
x_11 = l_Lean_IR_EmitC_emitReset(x_1, x_9, x_10, x_4, x_5);
return x_11;
}
case 2:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_15 = lean_ctor_get(x_3, 2);
lean_inc(x_15);
lean_dec(x_3);
x_16 = l_Lean_IR_EmitC_emitReuse(x_1, x_12, x_13, x_14, x_15, x_4, x_5);
lean_dec(x_15);
return x_16;
}
case 3:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_3, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_3, 1);
lean_inc(x_18);
lean_dec(x_3);
x_19 = l_Lean_IR_EmitC_emitProj(x_1, x_17, x_18, x_4, x_5);
return x_19;
}
case 4:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_3, 1);
lean_inc(x_21);
lean_dec(x_3);
x_22 = l_Lean_IR_EmitC_emitUProj(x_1, x_20, x_21, x_4, x_5);
return x_22;
}
case 5:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_3, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_3, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_3, 2);
lean_inc(x_25);
lean_dec(x_3);
x_26 = l_Lean_IR_EmitC_emitSProj(x_1, x_2, x_23, x_24, x_25, x_4, x_5);
return x_26;
}
case 6:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_3, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_3, 1);
lean_inc(x_28);
lean_dec(x_3);
x_29 = l_Lean_IR_EmitC_emitFullApp(x_1, x_27, x_28, x_4, x_5);
return x_29;
}
case 7:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_3, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_3, 1);
lean_inc(x_31);
lean_dec(x_3);
x_32 = l_Lean_IR_EmitC_emitPartialApp(x_1, x_30, x_31, x_4, x_5);
lean_dec(x_31);
return x_32;
}
case 8:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_3, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_3, 1);
lean_inc(x_34);
lean_dec(x_3);
x_35 = l_Lean_IR_EmitC_emitApp(x_1, x_33, x_34, x_4, x_5);
lean_dec(x_34);
return x_35;
}
case 9:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_3, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_3, 1);
lean_inc(x_37);
lean_dec(x_3);
x_38 = l_Lean_IR_EmitC_emitBox(x_1, x_37, x_36, x_4, x_5);
lean_dec(x_36);
return x_38;
}
case 10:
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_3, 0);
lean_inc(x_39);
lean_dec(x_3);
x_40 = l_Lean_IR_EmitC_emitUnbox(x_1, x_2, x_39, x_4, x_5);
return x_40;
}
case 11:
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_3, 0);
lean_inc(x_41);
lean_dec(x_3);
x_42 = l_Lean_IR_EmitC_emitLit(x_1, x_2, x_41, x_4, x_5);
return x_42;
}
case 12:
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_3, 0);
lean_inc(x_43);
lean_dec(x_3);
x_44 = l_Lean_IR_EmitC_emitIsShared(x_1, x_43, x_4, x_5);
return x_44;
}
default: 
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_3, 0);
lean_inc(x_45);
lean_dec(x_3);
x_46 = l_Lean_IR_EmitC_emitIsTaggedPtr(x_1, x_45, x_4, x_5);
return x_46;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitVDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitVDecl(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_isTailCall_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
if (lean_obj_tag(x_2) == 11)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_3(x_3, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_2(x_4, x_1, x_2);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_apply_2(x_4, x_1, x_2);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = lean_apply_2(x_4, x_1, x_2);
return x_12;
}
}
}
lean_object* l_Lean_IR_EmitC_isTailCall_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_isTailCall_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_isTailCall(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 6)
{
if (lean_obj_tag(x_3) == 11)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_4, 3);
x_10 = lean_name_eq(x_7, x_9);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
else
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_nat_dec_eq(x_1, x_8);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_5);
return x_16;
}
}
else
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_17 = 0;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_5);
return x_19;
}
}
else
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_5);
return x_22;
}
}
else
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_23 = 0;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_5);
return x_25;
}
}
}
lean_object* l_Lean_IR_EmitC_isTailCall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_isTailCall(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
uint8_t l_Lean_IR_EmitC_paramEqArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_nat_dec_eq(x_4, x_3);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
lean_object* l_Lean_IR_EmitC_paramEqArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_EmitC_paramEqArg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_4, x_7);
lean_dec(x_4);
x_9 = lean_nat_add(x_8, x_7);
x_10 = lean_nat_sub(x_3, x_9);
lean_dec(x_9);
x_11 = l_Lean_IR_instInhabitedArg;
x_12 = lean_array_get(x_11, x_1, x_10);
lean_dec(x_10);
x_13 = l_Lean_IR_EmitC_paramEqArg(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
x_4 = x_8;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
x_15 = 1;
return x_15;
}
}
else
{
uint8_t x_16; 
lean_dec(x_4);
x_16 = 0;
return x_16;
}
}
}
uint8_t l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_5, x_8);
lean_dec(x_5);
x_10 = lean_nat_add(x_9, x_8);
x_11 = lean_nat_sub(x_4, x_10);
lean_dec(x_10);
x_12 = l_Lean_IR_instInhabitedParam;
x_13 = lean_array_get(x_12, x_1, x_11);
x_14 = lean_nat_add(x_11, x_8);
lean_dec(x_11);
x_15 = lean_nat_sub(x_3, x_14);
lean_dec(x_14);
x_16 = l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__1(x_2, x_13, x_3, x_15);
lean_dec(x_13);
if (x_16 == 0)
{
x_5 = x_9;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_9);
x_18 = 1;
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_5);
x_19 = 0;
return x_19;
}
}
}
uint8_t l_Lean_IR_EmitC_overwriteParam(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_1);
lean_inc(x_3);
x_4 = l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__2(x_1, x_2, x_3, x_3, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Nat_anyAux___at_Lean_IR_EmitC_overwriteParam___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_overwriteParam___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_IR_EmitC_overwriteParam(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitTailCall_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_Lean_IR_EmitC_emitTailCall_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitTailCall_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_IR_instInhabitedParam;
x_14 = lean_array_get(x_13, x_2, x_12);
x_15 = l_Lean_IR_instInhabitedArg;
x_16 = lean_array_get(x_15, x_1, x_12);
lean_dec(x_12);
x_17 = l_Lean_IR_EmitC_paramEqArg(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_18, x_5, x_6);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_term___x3d_____closed__3;
x_22 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_21, x_5, x_20);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_IR_EmitC_emitArg(x_16, x_5, x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_27 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_26, x_5, x_25);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_4 = x_10;
x_6 = x_28;
goto _start;
}
else
{
lean_dec(x_16);
lean_dec(x_14);
x_4 = x_10;
goto _start;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_4);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_6);
return x_32;
}
}
}
#define _init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" _tmp_");\
__INIT_VAR__ = x_1; goto l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1_end;\
}\
l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1_end: ((void) 0);}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_IR_instInhabitedParam;
x_14 = lean_array_get(x_13, x_2, x_12);
x_15 = l_Lean_IR_instInhabitedArg;
x_16 = lean_array_get(x_15, x_1, x_12);
x_17 = l_Lean_IR_EmitC_paramEqArg(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_Lean_IR_EmitC_toCType(x_18);
lean_dec(x_18);
x_20 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_19, x_5, x_6);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1;
x_23 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_22, x_5, x_21);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_12, x_5, x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_term___x3d_____closed__3;
x_28 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_27, x_5, x_26);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_IR_EmitC_emitArg(x_16, x_5, x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_33 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_32, x_5, x_31);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_4 = x_10;
x_6 = x_34;
goto _start;
}
else
{
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_12);
x_4 = x_10;
goto _start;
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_4);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_6);
return x_38;
}
}
}
#define _init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" = _tmp_");\
__INIT_VAR__ = x_1; goto l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1_end;\
}\
l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1_end: ((void) 0);}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
x_13 = l_Lean_IR_instInhabitedParam;
x_14 = lean_array_get(x_13, x_2, x_12);
x_15 = l_Lean_IR_instInhabitedArg;
x_16 = lean_array_get(x_15, x_1, x_12);
x_17 = l_Lean_IR_EmitC_paramEqArg(x_14, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_18, x_5, x_6);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1;
x_22 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_21, x_5, x_20);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_12, x_5, x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_27 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_26, x_5, x_25);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_4 = x_10;
x_6 = x_28;
goto _start;
}
else
{
lean_dec(x_14);
lean_dec(x_12);
x_4 = x_10;
goto _start;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_4);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_6);
return x_32;
}
}
}
#define _init_l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("goto _start;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1_end;\
}\
l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1;
x_5 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_4, x_2, x_3);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitTailCall___lambda__1___boxed), 3, 0);\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1_end;\
}\
l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1;
x_7 = l_Lean_IR_EmitC_overwriteParam(x_1, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_array_get_size(x_2);
lean_inc(x_8);
x_9 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__1(x_2, x_1, x_8, x_8, x_4, x_5);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_apply_3(x_6, x_10, x_4, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_13 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__4;
x_14 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_13, x_4, x_5);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_array_get_size(x_1);
lean_inc(x_16);
x_17 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2(x_2, x_1, x_16, x_16, x_4, x_15);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
lean_inc(x_16);
x_19 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3(x_2, x_1, x_16, x_16, x_4, x_18);
lean_dec(x_16);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_22 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_21, x_4, x_20);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_apply_3(x_6, x_23, x_4, x_24);
return x_25;
}
}
}
#define _init_l_Lean_IR_EmitC_emitTailCall___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("bug at emitTailCall");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitTailCall___closed__1_end;\
}\
l_Lean_IR_EmitC_emitTailCall___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitTailCall___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("invalid tail call");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitTailCall___closed__2_end;\
}\
l_Lean_IR_EmitC_emitTailCall___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitTailCall(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 6)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 4);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_2);
x_9 = l_Lean_IR_EmitC_emitTailCall___closed__2;
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Lean_IR_EmitC_emitTailCall___lambda__2(x_5, x_4, x_11, x_2, x_3);
lean_dec(x_5);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_13 = l_Lean_IR_EmitC_emitTailCall___closed__1;
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitTailCall___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitTailCall___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitTailCall___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitTailCall___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitTailCall(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_EmitC_emitCase_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_IR_EmitC_emitCase_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitCase_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emitCase_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_3(x_2, x_7, x_8, x_9);
return x_10;
}
}
}
lean_object* l_Lean_IR_EmitC_emitCase_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitCase_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emitBlock_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
x_20 = lean_apply_5(x_3, x_1, x_16, x_17, x_18, x_19);
return x_20;
}
case 1:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 3);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_apply_4(x_2, x_21, x_22, x_23, x_24);
return x_25;
}
case 2:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_apply_4(x_8, x_26, x_27, x_28, x_29);
return x_30;
}
case 3:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_apply_3(x_7, x_31, x_32, x_33);
return x_34;
}
case 4:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 3);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_apply_4(x_9, x_35, x_36, x_37, x_38);
return x_39;
}
case 5:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 5);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_6(x_10, x_40, x_41, x_42, x_43, x_44, x_45);
return x_46;
}
case 6:
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
x_49 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_50 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_51 = lean_ctor_get(x_1, 2);
lean_inc(x_51);
lean_dec(x_1);
x_52 = lean_box(x_49);
x_53 = lean_box(x_50);
x_54 = lean_apply_5(x_4, x_47, x_48, x_52, x_53, x_51);
return x_54;
}
case 7:
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_1, 1);
lean_inc(x_56);
x_57 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_58 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_59 = lean_ctor_get(x_1, 2);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_box(x_57);
x_61 = lean_box(x_58);
x_62 = lean_apply_5(x_5, x_55, x_56, x_60, x_61, x_59);
return x_62;
}
case 8:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
lean_dec(x_1);
x_65 = lean_apply_2(x_6, x_63, x_64);
return x_65;
}
case 9:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = lean_ctor_get(x_1, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_1, 1);
lean_inc(x_67);
lean_dec(x_1);
x_68 = lean_apply_2(x_11, x_66, x_67);
return x_68;
}
case 10:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_1, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_1, 3);
lean_inc(x_72);
lean_dec(x_1);
x_73 = lean_apply_4(x_12, x_69, x_70, x_71, x_72);
return x_73;
}
case 11:
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_apply_1(x_15, x_74);
return x_75;
}
case 12:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = lean_ctor_get(x_1, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_1, 1);
lean_inc(x_77);
lean_dec(x_1);
x_78 = lean_apply_2(x_13, x_76, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_79 = lean_box(0);
x_80 = lean_apply_1(x_14, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitBlock_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitBlock_match__1___rarg), 15, 0);
return x_2;
}
}
lean_object* l_Lean_IR_EmitC_emitJPs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_4(x_2, x_4, x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l_Lean_IR_EmitC_emitJPs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitJPs_match__1___rarg), 3, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_emitIf___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("if (");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitIf___closed__1_end;\
}\
l_Lean_IR_EmitC_emitIf___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitIf(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_8 = l_Lean_IR_EmitC_emitIf___closed__1;
x_9 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_8, x_6, x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emitTag(x_1, x_2, x_6, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_term___x3d_x3d_____closed__3;
x_14 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_13, x_6, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_3, x_6, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_prec_x28___x29___closed__7;
x_19 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_18, x_6, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_6);
x_21 = l_Lean_IR_EmitC_emitFnBody(x_4, x_6, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_termDepIfThenElse___closed__24;
x_24 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_23, x_6, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_IR_EmitC_emitFnBody(x_5, x_6, x_25);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_6);
lean_dec(x_5);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitFnBody___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_5 = l_Lean_IR_EmitC_emitBlock(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_3);
x_7 = l_Lean_IR_EmitC_emitJPs(x_1, x_3, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_10 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_9, x_3, x_8);
lean_dec(x_3);
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
else
{
uint8_t x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_5);
if (x_15 == 0)
{
return x_5;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_ctor_get(x_5, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_5);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__4;
x_5 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_4, x_2, x_3);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = 0;
lean_inc(x_1);
x_8 = l_Lean_IR_EmitC_declareVars(x_1, x_7, x_2, x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_box(0);
x_13 = l_Lean_IR_EmitC_emitFnBody___lambda__1(x_1, x_12, x_2, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = l_Lean_instInhabitedParserDescr___closed__1;
x_16 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_15, x_2, x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_IR_EmitC_emitFnBody___lambda__1(x_1, x_17, x_2, x_18);
lean_dec(x_17);
return x_19;
}
}
}
lean_object* l_Lean_IR_EmitC_emitJPs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_IR_EmitC_emitJP(x_4, x_2, x_3);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
x_10 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_9, x_2, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_inc(x_2);
x_12 = l_Lean_IR_EmitC_emitFnBody(x_5, x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_1 = x_6;
x_3 = x_13;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
uint8_t x_19; 
x_19 = l_Lean_IR_FnBody_isTerminal(x_1);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_Lean_IR_FnBody_body(x_1);
lean_dec(x_1);
x_1 = x_20;
goto _start;
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
return x_23;
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitBlock___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitBlock(x_1, x_3, x_4);
return x_5;
}
}
#define _init_l_Lean_IR_EmitC_emitBlock___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("return ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBlock___closed__1_end;\
}\
l_Lean_IR_EmitC_emitBlock___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBlock___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("__INIT_VAR__ = ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBlock___closed__2_end;\
}\
l_Lean_IR_EmitC_emitBlock___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBlock___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("; goto ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBlock___closed__3_end;\
}\
l_Lean_IR_EmitC_emitBlock___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBlock___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("_end;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBlock___closed__4_end;\
}\
l_Lean_IR_EmitC_emitBlock___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitBlock___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_internal_panic_unreachable();");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitBlock___closed__5_end;\
}\
l_Lean_IR_EmitC_emitBlock___closed__5_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitBlock(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
x_9 = l_Lean_IR_isTailCallTo(x_8, x_1);
lean_dec(x_1);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Lean_IR_EmitC_emitVDecl(x_4, x_5, x_6, x_2, x_3);
lean_dec(x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_1 = x_7;
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
lean_dec(x_7);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
else
{
lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_17 = l_Lean_IR_EmitC_emitTailCall(x_6, x_2, x_3);
lean_dec(x_6);
return x_17;
}
}
case 1:
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_1, 3);
lean_inc(x_18);
lean_dec(x_1);
x_1 = x_18;
goto _start;
}
case 2:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
lean_dec(x_1);
x_24 = l_Lean_IR_EmitC_emitSet(x_20, x_21, x_22, x_2, x_3);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_1 = x_23;
x_3 = x_25;
goto _start;
}
case 3:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 2);
lean_inc(x_29);
lean_dec(x_1);
x_30 = l_Lean_IR_EmitC_emitSetTag(x_27, x_28, x_2, x_3);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_1 = x_29;
x_3 = x_31;
goto _start;
}
case 4:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 3);
lean_inc(x_36);
lean_dec(x_1);
x_37 = l_Lean_IR_EmitC_emitUSet(x_33, x_34, x_35, x_2, x_3);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_1 = x_36;
x_3 = x_38;
goto _start;
}
case 5:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 5);
lean_inc(x_45);
lean_dec(x_1);
x_46 = l_Lean_IR_EmitC_emitSSet(x_40, x_41, x_42, x_43, x_44, x_2, x_3);
lean_dec(x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_1 = x_45;
x_3 = x_47;
goto _start;
}
else
{
uint8_t x_49; 
lean_dec(x_45);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_46);
if (x_49 == 0)
{
return x_46;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_46, 0);
x_51 = lean_ctor_get(x_46, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_46);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
case 6:
{
uint8_t x_53; 
x_53 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
x_56 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_57 = lean_ctor_get(x_1, 2);
lean_inc(x_57);
lean_dec(x_1);
lean_inc(x_2);
x_58 = l_Lean_IR_EmitC_emitInc(x_54, x_55, x_56, x_2, x_3);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_1 = x_57;
x_3 = x_59;
goto _start;
}
else
{
uint8_t x_61; 
lean_dec(x_57);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_58);
if (x_61 == 0)
{
return x_58;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_58, 0);
x_63 = lean_ctor_get(x_58, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_58);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_1, 2);
lean_inc(x_65);
lean_dec(x_1);
x_1 = x_65;
goto _start;
}
}
case 7:
{
uint8_t x_67; 
x_67 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
x_70 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_71 = lean_ctor_get(x_1, 2);
lean_inc(x_71);
lean_dec(x_1);
x_72 = l_Lean_IR_EmitC_emitDec(x_68, x_69, x_70, x_2, x_3);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_1 = x_71;
x_3 = x_73;
goto _start;
}
else
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_1, 2);
lean_inc(x_75);
lean_dec(x_1);
x_1 = x_75;
goto _start;
}
}
case 8:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_77 = lean_ctor_get(x_1, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_1, 1);
lean_inc(x_78);
lean_dec(x_1);
x_79 = l_Lean_IR_EmitC_emitDel(x_77, x_2, x_3);
x_80 = lean_ctor_get(x_79, 1);
lean_inc(x_80);
lean_dec(x_79);
x_1 = x_78;
x_3 = x_80;
goto _start;
}
case 9:
{
lean_object* x_82; 
x_82 = lean_ctor_get(x_1, 1);
lean_inc(x_82);
lean_dec(x_1);
x_1 = x_82;
goto _start;
}
case 10:
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_1, 1);
lean_inc(x_84);
x_85 = lean_ctor_get(x_1, 2);
lean_inc(x_85);
x_86 = lean_ctor_get(x_1, 3);
lean_inc(x_86);
lean_dec(x_1);
x_87 = l_Lean_IR_EmitC_emitCase(x_84, x_85, x_86, x_2, x_3);
lean_dec(x_85);
return x_87;
}
case 11:
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_2, 5);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_89 = lean_ctor_get(x_1, 0);
lean_inc(x_89);
lean_dec(x_1);
x_90 = l_Lean_IR_EmitC_emitBlock___closed__1;
x_91 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_90, x_2, x_3);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = l_Lean_IR_EmitC_emitArg(x_89, x_2, x_92);
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = l_myMacro____x40_Init_Notation___hyg_14569____closed__13;
x_96 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_95, x_2, x_94);
lean_dec(x_2);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_97 = lean_ctor_get(x_1, 0);
lean_inc(x_97);
lean_dec(x_1);
x_98 = lean_ctor_get(x_88, 0);
lean_inc(x_98);
lean_dec(x_88);
x_99 = l_Lean_IR_EmitC_emitBlock___closed__2;
x_100 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_99, x_2, x_3);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = l_Lean_IR_EmitC_emitArg(x_97, x_2, x_101);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
lean_dec(x_102);
x_104 = l_Lean_IR_EmitC_emitBlock___closed__3;
x_105 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_104, x_2, x_103);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_107 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_98, x_2, x_106);
lean_dec(x_98);
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
x_109 = l_Lean_IR_EmitC_emitBlock___closed__4;
x_110 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_109, x_2, x_108);
lean_dec(x_2);
return x_110;
}
}
case 12:
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_1, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_1, 1);
lean_inc(x_112);
lean_dec(x_1);
x_113 = l_Lean_IR_EmitC_emitJmp(x_111, x_112, x_2, x_3);
lean_dec(x_2);
lean_dec(x_112);
return x_113;
}
default: 
{
lean_object* x_114; lean_object* x_115; 
x_114 = l_Lean_IR_EmitC_emitBlock___closed__5;
x_115 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_114, x_2, x_3);
lean_dec(x_2);
return x_115;
}
}
}
}
#define _init_l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("default: ");\
__INIT_VAR__ = x_1; goto l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1_end;\
}\
l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1_end: ((void) 0);}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Parser_Tactic_case___closed__3;
x_12 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_11, x_5, x_6);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_14, x_5, x_13);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
x_18 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_17, x_5, x_16);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_5);
x_20 = l_Lean_IR_EmitC_emitFnBody(x_10, x_5, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_2 + x_23;
x_2 = x_24;
x_4 = x_21;
x_6 = x_22;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
return x_20;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_20, 0);
x_28 = lean_ctor_get(x_20, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_20);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_8, 0);
lean_inc(x_30);
lean_dec(x_8);
x_31 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1;
x_32 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_31, x_5, x_6);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
lean_inc(x_5);
x_34 = l_Lean_IR_EmitC_emitFnBody(x_30, x_5, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; size_t x_37; size_t x_38; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = 1;
x_38 = x_2 + x_37;
x_2 = x_38;
x_4 = x_35;
x_6 = x_36;
goto _start;
}
else
{
uint8_t x_40; 
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_34);
if (x_40 == 0)
{
return x_34;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_34, 0);
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_34);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_5);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_4);
lean_ctor_set(x_44, 1, x_6);
return x_44;
}
}
}
#define _init_l_Lean_IR_EmitC_emitCase___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("switch (");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitCase___closed__1_end;\
}\
l_Lean_IR_EmitC_emitCase___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitCase___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(") {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitCase___closed__2_end;\
}\
l_Lean_IR_EmitC_emitCase___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitCase(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_isIf(x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_7 = l_Lean_IR_EmitC_emitCase___closed__1;
x_8 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_7, x_4, x_5);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emitTag(x_1, x_2, x_4, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emitCase___closed__2;
x_13 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_12, x_4, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_IR_ensureHasDefault(x_3);
x_16 = lean_array_get_size(x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_lt(x_17, x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_15);
x_19 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_20 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_19, x_4, x_14);
lean_dec(x_4);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = lean_nat_dec_le(x_16, x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_16);
lean_dec(x_15);
x_22 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_23 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_22, x_4, x_14);
lean_dec(x_4);
return x_23;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 0;
x_25 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_26 = lean_box(0);
lean_inc(x_4);
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1(x_15, x_24, x_25, x_26, x_4, x_14);
lean_dec(x_15);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_30 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_29, x_4, x_28);
lean_dec(x_4);
return x_30;
}
else
{
uint8_t x_31; 
lean_dec(x_4);
x_31 = !lean_is_exclusive(x_27);
if (x_31 == 0)
{
return x_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_27);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_3);
x_35 = lean_ctor_get(x_6, 0);
lean_inc(x_35);
lean_dec(x_6);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = l_Lean_IR_EmitC_emitIf(x_1, x_2, x_37, x_38, x_39, x_4, x_5);
return x_40;
}
}
}
lean_object* l_Lean_IR_EmitC_emitIf___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_IR_EmitC_emitIf(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_IR_EmitC_emitFnBody___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitFnBody___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitBlock___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitBlock___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_EmitC_emitCase___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_IR_EmitC_emitCase(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitDeclAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitDeclAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitDeclAux_match__1___rarg), 2, 0);
return x_2;
}
}
#define _init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_object* ");\
__INIT_VAR__ = x_1; goto l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1_end;\
}\
l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1_end: ((void) 0);}
#define _init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" = _args[");\
__INIT_VAR__ = x_1; goto l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2_end;\
}\
l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2_end: ((void) 0);}
#define _init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("];");\
__INIT_VAR__ = x_1; goto l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3_end;\
}\
l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3_end: ((void) 0);}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_nat_sub(x_2, x_9);
x_11 = lean_nat_sub(x_10, x_8);
lean_dec(x_10);
x_12 = l_Lean_IR_instInhabitedParam;
x_13 = lean_array_get(x_12, x_1, x_11);
x_14 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1;
x_15 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_14, x_4, x_5);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_17, x_4, x_16);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2;
x_21 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_20, x_4, x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitInc___spec__1(x_11, x_4, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3;
x_26 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_25, x_4, x_24);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_3 = x_9;
x_5 = x_27;
goto _start;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_3);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_5);
return x_30;
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = l_Lean_IR_instInhabitedParam;
x_7 = lean_array_get(x_6, x_1, x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = l_Lean_IR_EmitC_toCType(x_8);
lean_dec(x_8);
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_4, x_5);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_13 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_12, x_4, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
lean_dec(x_7);
x_16 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_declareVar___spec__1(x_15, x_4, x_14);
return x_16;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_3, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_3, x_8);
lean_dec(x_3);
x_10 = lean_nat_sub(x_2, x_9);
x_11 = lean_nat_sub(x_10, x_8);
lean_dec(x_10);
x_12 = lean_nat_dec_lt(x_6, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_box(0);
x_14 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___lambda__1(x_1, x_11, x_13, x_4, x_5);
lean_dec(x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_3 = x_9;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = l_term_x5b___x5d___closed__5;
x_18 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_17, x_4, x_5);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___lambda__1(x_1, x_11, x_19, x_4, x_20);
lean_dec(x_19);
lean_dec(x_11);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_3 = x_9;
x_5 = x_22;
goto _start;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_5);
return x_25;
}
}
}
#define _init_l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("_start:");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1_end;\
}\
l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1;
x_8 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_7, x_5, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get(x_5, 2);
x_13 = lean_ctor_get(x_5, 5);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_12);
lean_ctor_set(x_14, 3, x_1);
lean_ctor_set(x_14, 4, x_2);
lean_ctor_set(x_14, 5, x_13);
x_15 = l_Lean_IR_EmitC_emitFnBody(x_3, x_14, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_18 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_17, x_5, x_16);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
#define _init_l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1_end;\
}\
l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = l_prec_x28___x29___closed__7;
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_7, x_8);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1;
x_13 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_12, x_7, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_closureMaxArgs;
x_16 = lean_nat_dec_lt(x_15, x_4);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
x_17 = lean_box(0);
x_18 = l_Lean_IR_EmitC_emitDeclAux___lambda__1(x_1, x_2, x_3, x_17, x_7, x_14);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = l_Lean_IR_ExplicitBoxing_isBoxedName(x_5);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
x_20 = lean_box(0);
x_21 = l_Lean_IR_EmitC_emitDeclAux___lambda__1(x_1, x_2, x_3, x_20, x_7, x_14);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_inc(x_4);
x_22 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1(x_2, x_4, x_4, x_7, x_14);
lean_dec(x_4);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_IR_EmitC_emitDeclAux___lambda__1(x_1, x_2, x_3, x_23, x_7, x_24);
lean_dec(x_23);
return x_25;
}
}
}
}
#define _init_l_Lean_IR_EmitC_emitDeclAux___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("#define ");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclAux___closed__1_end;\
}\
l_Lean_IR_EmitC_emitDeclAux___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitDeclAux___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("(__INIT_VAR__) { \\");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclAux___closed__2_end;\
}\
l_Lean_IR_EmitC_emitDeclAux___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitDeclAux___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("_end: ((void) 0);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclAux___closed__3_end;\
}\
l_Lean_IR_EmitC_emitDeclAux___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitDeclAux___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_object** _args");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclAux___closed__4_end;\
}\
l_Lean_IR_EmitC_emitDeclAux___closed__4_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitDeclAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; 
x_4 = l_Lean_IR_EmitC_getEnv(x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_7 = x_4;
} else {
 lean_dec_ref(x_4);
 x_7 = lean_box(0);
}
lean_inc(x_1);
x_8 = l_Lean_IR_mkVarJPMaps(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_IR_Decl_name(x_1);
lean_inc(x_10);
x_11 = l_Lean_hasInitAttr(x_5, x_10);
if (x_11 == 0)
{
uint8_t x_156; 
x_156 = 0;
x_12 = x_156;
goto block_155;
}
else
{
uint8_t x_157; 
x_157 = 1;
x_12 = x_157;
goto block_155;
}
block_155:
{
if (x_12 == 0)
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_7);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 3);
x_21 = lean_ctor_get(x_2, 4);
x_22 = lean_ctor_get(x_2, 2);
lean_dec(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_9);
lean_inc(x_19);
lean_inc(x_18);
lean_ctor_set(x_2, 2, x_9);
lean_inc(x_13);
x_23 = l_Lean_IR_EmitC_toCName(x_13, x_2, x_6);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_array_get_size(x_14);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_nat_dec_lt(x_27, x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_26);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
x_29 = l_Lean_IR_EmitC_emitDeclAux___closed__1;
x_30 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_29, x_2, x_25);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_IR_EmitC_toCInitName___closed__1;
x_33 = lean_string_append(x_32, x_24);
x_34 = l_Lean_IR_EmitC_emitDeclAux___closed__2;
x_35 = lean_string_append(x_33, x_34);
x_36 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_35, x_2, x_31);
lean_dec(x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
lean_inc(x_24);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_24);
x_39 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_39, 0, x_18);
lean_ctor_set(x_39, 1, x_19);
lean_ctor_set(x_39, 2, x_9);
lean_ctor_set(x_39, 3, x_20);
lean_ctor_set(x_39, 4, x_21);
lean_ctor_set(x_39, 5, x_38);
x_40 = l_Lean_IR_EmitC_emitFnBody(x_16, x_39, x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_24, x_2, x_41);
lean_dec(x_24);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_IR_EmitC_emitDeclAux___closed__3;
x_45 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_44, x_2, x_43);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_48 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_47, x_2, x_46);
lean_dec(x_2);
return x_48;
}
else
{
uint8_t x_49; 
lean_dec(x_24);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_40);
if (x_49 == 0)
{
return x_40;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_40, 0);
x_51 = lean_ctor_get(x_40, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_40);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_70; uint8_t x_71; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_9);
x_53 = l_Lean_IR_EmitC_toCType(x_15);
lean_dec(x_15);
x_54 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_53, x_2, x_25);
lean_dec(x_53);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_57 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_56, x_2, x_55);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_24, x_2, x_58);
lean_dec(x_24);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = l_prec_x28___x29___closed__3;
x_62 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_61, x_2, x_60);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_70 = l_Lean_closureMaxArgs;
x_71 = lean_nat_dec_lt(x_70, x_26);
if (x_71 == 0)
{
lean_object* x_72; 
x_72 = lean_box(0);
x_64 = x_72;
goto block_69;
}
else
{
uint8_t x_73; 
x_73 = l_Lean_IR_ExplicitBoxing_isBoxedName(x_10);
if (x_73 == 0)
{
lean_object* x_74; 
x_74 = lean_box(0);
x_64 = x_74;
goto block_69;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_75 = l_Lean_IR_EmitC_emitDeclAux___closed__4;
x_76 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_75, x_2, x_63);
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = l_Lean_IR_EmitC_emitDeclAux___lambda__2(x_13, x_14, x_16, x_26, x_10, x_77, x_2, x_78);
lean_dec(x_2);
lean_dec(x_77);
lean_dec(x_10);
return x_79;
}
}
block_69:
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_64);
lean_inc(x_26);
x_65 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2(x_14, x_26, x_26, x_2, x_63);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = l_Lean_IR_EmitC_emitDeclAux___lambda__2(x_13, x_14, x_16, x_26, x_10, x_66, x_2, x_67);
lean_dec(x_2);
lean_dec(x_66);
lean_dec(x_10);
return x_68;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_2);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
x_80 = !lean_is_exclusive(x_23);
if (x_80 == 0)
{
return x_23;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_23, 0);
x_82 = lean_ctor_get(x_23, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_23);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_84 = lean_ctor_get(x_2, 0);
x_85 = lean_ctor_get(x_2, 1);
x_86 = lean_ctor_get(x_2, 3);
x_87 = lean_ctor_get(x_2, 4);
x_88 = lean_ctor_get(x_2, 5);
lean_inc(x_88);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_2);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_9);
lean_inc(x_85);
lean_inc(x_84);
x_89 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_89, 0, x_84);
lean_ctor_set(x_89, 1, x_85);
lean_ctor_set(x_89, 2, x_9);
lean_ctor_set(x_89, 3, x_86);
lean_ctor_set(x_89, 4, x_87);
lean_ctor_set(x_89, 5, x_88);
lean_inc(x_13);
x_90 = l_Lean_IR_EmitC_toCName(x_13, x_89, x_6);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_array_get_size(x_14);
x_94 = lean_unsigned_to_nat(0u);
x_95 = lean_nat_dec_lt(x_94, x_93);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_93);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
x_96 = l_Lean_IR_EmitC_emitDeclAux___closed__1;
x_97 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_96, x_89, x_92);
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
x_99 = l_Lean_IR_EmitC_toCInitName___closed__1;
x_100 = lean_string_append(x_99, x_91);
x_101 = l_Lean_IR_EmitC_emitDeclAux___closed__2;
x_102 = lean_string_append(x_100, x_101);
x_103 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_102, x_89, x_98);
lean_dec(x_102);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
lean_inc(x_91);
x_105 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_105, 0, x_91);
x_106 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_106, 0, x_84);
lean_ctor_set(x_106, 1, x_85);
lean_ctor_set(x_106, 2, x_9);
lean_ctor_set(x_106, 3, x_86);
lean_ctor_set(x_106, 4, x_87);
lean_ctor_set(x_106, 5, x_105);
x_107 = l_Lean_IR_EmitC_emitFnBody(x_16, x_106, x_104);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_108 = lean_ctor_get(x_107, 1);
lean_inc(x_108);
lean_dec(x_107);
x_109 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_91, x_89, x_108);
lean_dec(x_91);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
lean_dec(x_109);
x_111 = l_Lean_IR_EmitC_emitDeclAux___closed__3;
x_112 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_111, x_89, x_110);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
lean_dec(x_112);
x_114 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_15852____closed__3;
x_115 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_114, x_89, x_113);
lean_dec(x_89);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_91);
lean_dec(x_89);
x_116 = lean_ctor_get(x_107, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_107, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_118 = x_107;
} else {
 lean_dec_ref(x_107);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_137; uint8_t x_138; 
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_9);
x_120 = l_Lean_IR_EmitC_toCType(x_15);
lean_dec(x_15);
x_121 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_120, x_89, x_92);
lean_dec(x_120);
x_122 = lean_ctor_get(x_121, 1);
lean_inc(x_122);
lean_dec(x_121);
x_123 = l___private_Init_Data_Format_Basic_0__Std_Format_be___closed__1;
x_124 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_123, x_89, x_122);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_126 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_91, x_89, x_125);
lean_dec(x_91);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = l_prec_x28___x29___closed__3;
x_129 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_128, x_89, x_127);
x_130 = lean_ctor_get(x_129, 1);
lean_inc(x_130);
lean_dec(x_129);
x_137 = l_Lean_closureMaxArgs;
x_138 = lean_nat_dec_lt(x_137, x_93);
if (x_138 == 0)
{
lean_object* x_139; 
x_139 = lean_box(0);
x_131 = x_139;
goto block_136;
}
else
{
uint8_t x_140; 
x_140 = l_Lean_IR_ExplicitBoxing_isBoxedName(x_10);
if (x_140 == 0)
{
lean_object* x_141; 
x_141 = lean_box(0);
x_131 = x_141;
goto block_136;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_142 = l_Lean_IR_EmitC_emitDeclAux___closed__4;
x_143 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_142, x_89, x_130);
x_144 = lean_ctor_get(x_143, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_143, 1);
lean_inc(x_145);
lean_dec(x_143);
x_146 = l_Lean_IR_EmitC_emitDeclAux___lambda__2(x_13, x_14, x_16, x_93, x_10, x_144, x_89, x_145);
lean_dec(x_89);
lean_dec(x_144);
lean_dec(x_10);
return x_146;
}
}
block_136:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_131);
lean_inc(x_93);
x_132 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2(x_14, x_93, x_93, x_89, x_130);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
lean_dec(x_132);
x_135 = l_Lean_IR_EmitC_emitDeclAux___lambda__2(x_13, x_14, x_16, x_93, x_10, x_133, x_89, x_134);
lean_dec(x_89);
lean_dec(x_133);
lean_dec(x_10);
return x_135;
}
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_89);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_84);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
x_147 = lean_ctor_get(x_90, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_90, 1);
lean_inc(x_148);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_149 = x_90;
} else {
 lean_dec_ref(x_90);
 x_149 = lean_box(0);
}
if (lean_is_scalar(x_149)) {
 x_150 = lean_alloc_ctor(1, 2, 0);
} else {
 x_150 = x_149;
}
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_148);
return x_150;
}
}
}
else
{
lean_object* x_151; lean_object* x_152; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_151 = lean_box(0);
if (lean_is_scalar(x_7)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_7;
}
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_6);
return x_152;
}
}
else
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_153 = lean_box(0);
if (lean_is_scalar(x_7)) {
 x_154 = lean_alloc_ctor(0, 2, 0);
} else {
 x_154 = x_7;
}
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_6);
return x_154;
}
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_EmitC_emitDeclAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Lean_IR_EmitC_emitDeclAux___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_IR_EmitC_emitDeclAux___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
#define _init_l_Lean_IR_EmitC_emitDecl___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("\ncompiling:\n");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDecl___closed__1_end;\
}\
l_Lean_IR_EmitC_emitDecl___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_Decl_normalizeIds(x_1);
lean_inc(x_4);
x_5 = l_Lean_IR_EmitC_emitDeclAux(x_4, x_2, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = l_Lean_IR_EmitC_emitDecl___closed__1;
x_11 = lean_string_append(x_9, x_10);
x_12 = lean_ir_decl_to_string(x_4);
x_13 = lean_string_append(x_11, x_12);
lean_dec(x_12);
x_14 = lean_string_append(x_13, x_8);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_5);
x_17 = l_Lean_instInhabitedParserDescr___closed__1;
x_18 = lean_string_append(x_17, x_15);
lean_dec(x_15);
x_19 = l_Lean_IR_EmitC_emitDecl___closed__1;
x_20 = lean_string_append(x_18, x_19);
x_21 = lean_ir_decl_to_string(x_4);
x_22 = lean_string_append(x_20, x_21);
lean_dec(x_21);
x_23 = lean_string_append(x_22, x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_16);
return x_24;
}
}
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitFns___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_2);
x_8 = l_Lean_IR_EmitC_emitDecl(x_6, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_1 = x_7;
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
lean_dec(x_7);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitFns(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Lean_IR_EmitC_getEnv(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_IR_declMapExt;
x_7 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_6, x_4);
lean_dec(x_4);
x_8 = l_List_reverse___rarg(x_7);
x_9 = l_List_forM___at_Lean_IR_EmitC_emitFns___spec__1(x_8, x_1, x_5);
return x_9;
}
}
#define _init_l_Lean_IR_EmitC_emitMarkPersistent___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_mark_persistent(");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitMarkPersistent___closed__1_end;\
}\
l_Lean_IR_EmitC_emitMarkPersistent___closed__1_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitMarkPersistent(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_IR_Decl_resultType(x_1);
x_6 = l_Lean_IR_IRType_isObj(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = l_Lean_IR_EmitC_emitMarkPersistent___closed__1;
x_10 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_9, x_3, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_IR_EmitC_emitCName(x_2, x_3, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_15 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_14, x_3, x_13);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitMarkPersistent___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_EmitC_emitMarkPersistent(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_EmitC_emitDeclInit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_IR_EmitC_emitDeclInit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_EmitC_emitDeclInit_match__1___rarg), 3, 0);
return x_2;
}
}
#define _init_l_Lean_IR_EmitC_emitDeclInit___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("if (lean_io_result_is_error(res)) return res;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclInit___closed__1_end;\
}\
l_Lean_IR_EmitC_emitDeclInit___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitDeclInit___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string(" = lean_io_result_get_value(res);");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitDeclInit___closed__2_end;\
}\
l_Lean_IR_EmitC_emitDeclInit___closed__2_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitDeclInit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_EmitC_getEnv(x_2, x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Lean_IR_Decl_name(x_1);
lean_inc(x_8);
x_9 = l_Lean_isIOUnitInitFn(x_6, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_IR_Decl_params(x_1);
x_11 = lean_array_get_size(x_10);
lean_dec(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_8);
lean_dec(x_6);
x_14 = lean_box(0);
lean_ctor_set(x_4, 0, x_14);
return x_4;
}
else
{
lean_object* x_15; 
lean_free_object(x_4);
lean_inc(x_8);
x_15 = lean_get_init_fn_name_for(x_6, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_inc(x_8);
x_16 = l_Lean_IR_EmitC_emitCInitName(x_8, x_2, x_7);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_prec_x28___x29___closed__3;
x_19 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_18, x_2, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_8);
x_21 = l_Lean_IR_EmitC_emitCName(x_8, x_2, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_24 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_23, x_2, x_22);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_IR_EmitC_emitMarkPersistent(x_1, x_8, x_2, x_25);
return x_26;
}
else
{
uint8_t x_27; 
lean_dec(x_8);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_8);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_15, 0);
lean_inc(x_35);
lean_dec(x_15);
x_36 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;
x_37 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_36, x_2, x_7);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = l_Lean_IR_EmitC_emitCName(x_35, x_2, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;
x_42 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_41, x_2, x_40);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_IR_EmitC_emitDeclInit___closed__1;
x_45 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_44, x_2, x_43);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
lean_inc(x_8);
x_47 = l_Lean_IR_EmitC_emitCName(x_8, x_2, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Lean_IR_EmitC_emitDeclInit___closed__2;
x_50 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_49, x_2, x_48);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = l_Lean_IR_EmitC_emitMarkPersistent(x_1, x_8, x_2, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5;
x_55 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_54, x_2, x_53);
return x_55;
}
else
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_52);
if (x_56 == 0)
{
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_52, 0);
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_52);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_8);
x_60 = !lean_is_exclusive(x_47);
if (x_60 == 0)
{
return x_47;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_47, 0);
x_62 = lean_ctor_get(x_47, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_47);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_8);
x_64 = !lean_is_exclusive(x_39);
if (x_64 == 0)
{
return x_39;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_39, 0);
x_66 = lean_ctor_get(x_39, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_39);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_free_object(x_4);
lean_dec(x_6);
x_68 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;
x_69 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_68, x_2, x_7);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = l_Lean_IR_EmitC_emitCName(x_8, x_2, x_70);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;
x_74 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_73, x_2, x_72);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = l_Lean_IR_EmitC_emitDeclInit___closed__1;
x_77 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_76, x_2, x_75);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5;
x_80 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_79, x_2, x_78);
return x_80;
}
else
{
uint8_t x_81; 
x_81 = !lean_is_exclusive(x_71);
if (x_81 == 0)
{
return x_71;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_71, 0);
x_83 = lean_ctor_get(x_71, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_71);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_85 = lean_ctor_get(x_4, 0);
x_86 = lean_ctor_get(x_4, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_4);
x_87 = l_Lean_IR_Decl_name(x_1);
lean_inc(x_87);
x_88 = l_Lean_isIOUnitInitFn(x_85, x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_89 = l_Lean_IR_Decl_params(x_1);
x_90 = lean_array_get_size(x_89);
lean_dec(x_89);
x_91 = lean_unsigned_to_nat(0u);
x_92 = lean_nat_dec_eq(x_90, x_91);
lean_dec(x_90);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
lean_dec(x_87);
lean_dec(x_85);
x_93 = lean_box(0);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_86);
return x_94;
}
else
{
lean_object* x_95; 
lean_inc(x_87);
x_95 = lean_get_init_fn_name_for(x_85, x_87);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; 
lean_inc(x_87);
x_96 = l_Lean_IR_EmitC_emitCInitName(x_87, x_2, x_86);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
x_98 = l_prec_x28___x29___closed__3;
x_99 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_98, x_2, x_97);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
lean_inc(x_87);
x_101 = l_Lean_IR_EmitC_emitCName(x_87, x_2, x_100);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_103 = l_Lean_IR_EmitC_emitInc___lambda__1___closed__1;
x_104 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_103, x_2, x_102);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
lean_dec(x_104);
x_106 = l_Lean_IR_EmitC_emitMarkPersistent(x_1, x_87, x_2, x_105);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_87);
x_107 = lean_ctor_get(x_101, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_101, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_109 = x_101;
} else {
 lean_dec_ref(x_101);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_87);
x_111 = lean_ctor_get(x_96, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_96, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_96)) {
 lean_ctor_release(x_96, 0);
 lean_ctor_release(x_96, 1);
 x_113 = x_96;
} else {
 lean_dec_ref(x_96);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_115 = lean_ctor_get(x_95, 0);
lean_inc(x_115);
lean_dec(x_95);
x_116 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;
x_117 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_116, x_2, x_86);
x_118 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
lean_dec(x_117);
x_119 = l_Lean_IR_EmitC_emitCName(x_115, x_2, x_118);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_121 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;
x_122 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_121, x_2, x_120);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = l_Lean_IR_EmitC_emitDeclInit___closed__1;
x_125 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_124, x_2, x_123);
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
lean_dec(x_125);
lean_inc(x_87);
x_127 = l_Lean_IR_EmitC_emitCName(x_87, x_2, x_126);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_128 = lean_ctor_get(x_127, 1);
lean_inc(x_128);
lean_dec(x_127);
x_129 = l_Lean_IR_EmitC_emitDeclInit___closed__2;
x_130 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_129, x_2, x_128);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
x_132 = l_Lean_IR_EmitC_emitMarkPersistent(x_1, x_87, x_2, x_131);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5;
x_135 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_134, x_2, x_133);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_136 = lean_ctor_get(x_132, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_132, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_138 = x_132;
} else {
 lean_dec_ref(x_132);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_87);
x_140 = lean_ctor_get(x_127, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_127, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_142 = x_127;
} else {
 lean_dec_ref(x_127);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec(x_87);
x_144 = lean_ctor_get(x_119, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_119, 1);
lean_inc(x_145);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_146 = x_119;
} else {
 lean_dec_ref(x_119);
 x_146 = lean_box(0);
}
if (lean_is_scalar(x_146)) {
 x_147 = lean_alloc_ctor(1, 2, 0);
} else {
 x_147 = x_146;
}
lean_ctor_set(x_147, 0, x_144);
lean_ctor_set(x_147, 1, x_145);
return x_147;
}
}
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_85);
x_148 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;
x_149 = l_Lean_IR_EmitC_emit___at_Lean_IR_EmitC_emitLn___spec__1(x_148, x_2, x_86);
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
lean_dec(x_149);
x_151 = l_Lean_IR_EmitC_emitCName(x_87, x_2, x_150);
if (lean_obj_tag(x_151) == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
lean_dec(x_151);
x_153 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;
x_154 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_153, x_2, x_152);
x_155 = lean_ctor_get(x_154, 1);
lean_inc(x_155);
lean_dec(x_154);
x_156 = l_Lean_IR_EmitC_emitDeclInit___closed__1;
x_157 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_156, x_2, x_155);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
x_159 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5;
x_160 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_159, x_2, x_158);
return x_160;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_161 = lean_ctor_get(x_151, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_151, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_151)) {
 lean_ctor_release(x_151, 0);
 lean_ctor_release(x_151, 1);
 x_163 = x_151;
} else {
 lean_dec_ref(x_151);
 x_163 = lean_box(0);
}
if (lean_is_scalar(x_163)) {
 x_164 = lean_alloc_ctor(1, 2, 0);
} else {
 x_164 = x_163;
}
lean_ctor_set(x_164, 0, x_161);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
}
}
}
}
lean_object* l_Lean_IR_EmitC_emitDeclInit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_EmitC_emitDeclInit(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = l_Lean_IR_EmitC_emitDeclInit(x_6, x_2, x_3);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_1 = x_7;
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 == x_4;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_3);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_mk_module_initialization_function_name(x_10);
x_12 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2;
x_15 = lean_string_append(x_13, x_14);
x_16 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5;
lean_inc(x_1);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_1);
x_18 = l_Lean_IR_EmitC_emitDeclInit___closed__1;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_20, x_6, x_7);
lean_dec(x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = 1;
x_25 = x_3 + x_24;
x_3 = x_25;
x_5 = x_22;
x_7 = x_23;
goto _start;
}
else
{
lean_object* x_27; 
lean_dec(x_1);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_5);
lean_ctor_set(x_27, 1, x_7);
return x_27;
}
}
}
#define _init_l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("(lean_object*);");\
__INIT_VAR__ = x_1; goto l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1_end;\
}\
l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1_end: ((void) 0);}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_mk_module_initialization_function_name(x_9);
x_11 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1;
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1;
x_14 = lean_string_append(x_12, x_13);
x_15 = l_Lean_IR_EmitC_emitLn___at_Lean_IR_EmitC_emitFnDeclAux___spec__1(x_14, x_5, x_6);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_2 + x_18;
x_2 = x_19;
x_4 = x_16;
x_6 = x_17;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_4);
lean_ctor_set(x_21, 1, x_6);
return x_21;
}
}
}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("(lean_object* w) {");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInitFn___closed__1_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__1_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__2(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("_G_initialized = true;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInitFn___closed__2_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__2_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__3(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = lean_box(0);\
x_2 = l_Lean_IR_EmitC_emitInitFn___closed__2;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_2);\
lean_ctor_set(x_3, 1, x_1);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitInitFn___closed__3_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__3_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__4(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInitFn___closed__4_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__4_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__5(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitInitFn___closed__4;\
x_2 = l_Lean_IR_EmitC_emitInitFn___closed__3;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitInitFn___closed__5_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__5_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__6(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("lean_object * res;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInitFn___closed__6_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__6_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__7(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitInitFn___closed__6;\
x_2 = l_Lean_IR_EmitC_emitInitFn___closed__5;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitInitFn___closed__7_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__7_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__8(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("static bool _G_initialized = false;");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInitFn___closed__8_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__8_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__9(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_mk_string("return lean_io_result_mk_ok(lean_box(0));");\
__INIT_VAR__ = x_1; goto l_Lean_IR_EmitC_emitInitFn___closed__9_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__9_end: ((void) 0);}
#define _init_l_Lean_IR_EmitC_emitInitFn___closed__10(__INIT_VAR__) { \
{\
lean_object* x_1; lean_object* x_2; lean_object* x_3; \
x_1 = l_Lean_IR_EmitC_emitInitFn___closed__9;\
x_2 = l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12;\
x_3 = lean_alloc_ctor(1, 2, 0);\
lean_ctor_set(x_3, 0, x_1);\
lean_ctor_set(x_3, 1, x_2);\
__INIT_VAR__ = x_3; goto l_Lean_IR_EmitC_emitInitFn___closed__10_end;\
}\
l_Lean_IR_EmitC_emitInitFn___closed__10_end: ((void) 0);}
lean_object* l_Lean_IR_EmitC_emitInitFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_66; uint8_t x_67; 
x_3 = l_Lean_IR_EmitC_getEnv(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_IR_EmitC_getModName(x_1, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Environment_imports(x_4);
x_10 = lean_array_get_size(x_9);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_nat_dec_lt(x_66, x_10);
if (x_67 == 0)
{
x_11 = x_8;
goto block_65;
}
else
{
uint8_t x_68; 
x_68 = lean_nat_dec_le(x_10, x_10);
if (x_68 == 0)
{
x_11 = x_8;
goto block_65;
}
else
{
size_t x_69; size_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = 0;
x_70 = lean_usize_of_nat(x_10);
x_71 = lean_box(0);
x_72 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3(x_9, x_69, x_70, x_71, x_1, x_8);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_11 = x_73;
goto block_65;
}
}
block_65:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_12 = lean_mk_module_initialization_function_name(x_7);
x_13 = l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1;
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = l_Lean_IR_EmitC_emitInitFn___closed__1;
x_16 = lean_string_append(x_14, x_15);
x_17 = lean_box(0);
x_18 = l_Lean_IR_EmitC_emitInitFn___closed__7;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_IR_EmitC_emitInitFn___closed__8;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_21, x_1, x_11);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_lt(x_24, x_10);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_10);
lean_dec(x_9);
x_26 = l_Lean_IR_declMapExt;
x_27 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_26, x_4);
lean_dec(x_4);
x_28 = l_List_reverse___rarg(x_27);
x_29 = l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1(x_28, x_1, x_23);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_IR_EmitC_emitInitFn___closed__10;
x_32 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_31, x_1, x_30);
return x_32;
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_29);
if (x_33 == 0)
{
return x_29;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_29, 0);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_29);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_le(x_10, x_10);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_10);
lean_dec(x_9);
x_38 = l_Lean_IR_declMapExt;
x_39 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_38, x_4);
lean_dec(x_4);
x_40 = l_List_reverse___rarg(x_39);
x_41 = l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1(x_40, x_1, x_23);
lean_dec(x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_IR_EmitC_emitInitFn___closed__10;
x_44 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_43, x_1, x_42);
return x_44;
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_41);
if (x_45 == 0)
{
return x_41;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_41, 0);
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_41);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
size_t x_49; size_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_49 = 0;
x_50 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_51 = lean_box(0);
x_52 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__2(x_17, x_9, x_49, x_50, x_51, x_1, x_23);
lean_dec(x_9);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = l_Lean_IR_declMapExt;
x_55 = l_Lean_SimplePersistentEnvExtension_getEntries___rarg(x_54, x_4);
lean_dec(x_4);
x_56 = l_List_reverse___rarg(x_55);
x_57 = l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1(x_56, x_1, x_53);
lean_dec(x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = l_Lean_IR_EmitC_emitInitFn___closed__10;
x_60 = l_List_forM___at_Lean_IR_EmitC_emitMainFn___spec__2(x_59, x_1, x_58);
return x_60;
}
else
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_57);
if (x_61 == 0)
{
return x_57;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_57, 0);
x_63 = lean_ctor_get(x_57, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_57);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
}
}
lean_object* l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_forM___at_Lean_IR_EmitC_emitInitFn___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__2(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_EmitC_emitInitFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_EmitC_emitInitFn(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_EmitC_main(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_IR_EmitC_emitFileHeader(x_1, x_2);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
lean_inc(x_1);
x_5 = l_Lean_IR_EmitC_emitFnDecls(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_1);
x_7 = l_Lean_IR_EmitC_emitFns(x_1, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_IR_EmitC_emitInitFn(x_1, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_IR_EmitC_emitMainFnIfNeeded(x_1, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_EmitC_emitFileFooter(x_1, x_12);
lean_dec(x_1);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_9);
if (x_18 == 0)
{
return x_9;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_7);
if (x_22 == 0)
{
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_7, 0);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_7);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_5);
if (x_26 == 0)
{
return x_5;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_5, 0);
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_5);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_IR_emitC_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_IR_emitC_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_emitC_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* lean_ir_emit_c(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_box(0);
x_4 = l_Std_HashMap_instInhabitedHashMap___closed__1;
x_5 = lean_box(0);
x_6 = l_Array_empty___closed__1;
x_7 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_5);
lean_ctor_set(x_7, 4, x_6);
lean_ctor_set(x_7, 5, x_3);
x_8 = l_Lean_instInhabitedParserDescr___closed__1;
x_9 = l_Lean_IR_EmitC_main(x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Runtime(lean_object*);
lean_object* initialize_Lean_Compiler_NameMangling(lean_object*);
lean_object* initialize_Lean_Compiler_ExportAttr(lean_object*);
lean_object* initialize_Lean_Compiler_InitAttr(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CompilerM(lean_object*);
lean_object* initialize_Lean_Compiler_IR_EmitUtil(lean_object*);
lean_object* initialize_Lean_Compiler_IR_NormIds(lean_object*);
lean_object* initialize_Lean_Compiler_IR_SimpCase(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Boxing(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_EmitC(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Runtime(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NameMangling(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExportAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_EmitUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_NormIds(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_SimpCase(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Boxing(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
_init_l_Lean_IR_EmitC_leanMainFn___closed__1(l_Lean_IR_EmitC_leanMainFn___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_leanMainFn___closed__1);
_init_l_Lean_IR_EmitC_leanMainFn(l_Lean_IR_EmitC_leanMainFn);
lean_mark_persistent(l_Lean_IR_EmitC_leanMainFn);
_init_l_Lean_IR_EmitC_Context_jpMap___default(l_Lean_IR_EmitC_Context_jpMap___default);
lean_mark_persistent(l_Lean_IR_EmitC_Context_jpMap___default);
_init_l_Lean_IR_EmitC_Context_mainFn___default(l_Lean_IR_EmitC_Context_mainFn___default);
lean_mark_persistent(l_Lean_IR_EmitC_Context_mainFn___default);
_init_l_Lean_IR_EmitC_Context_mainParams___default(l_Lean_IR_EmitC_Context_mainParams___default);
lean_mark_persistent(l_Lean_IR_EmitC_Context_mainParams___default);
_init_l_Lean_IR_EmitC_Context_initMacro_x3f___default(l_Lean_IR_EmitC_Context_initMacro_x3f___default);
lean_mark_persistent(l_Lean_IR_EmitC_Context_initMacro_x3f___default);
_init_l_Lean_IR_EmitC_emitLn___rarg___closed__1(l_Lean_IR_EmitC_emitLn___rarg___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitLn___rarg___closed__1);
_init_l_Lean_IR_EmitC_emitLn___rarg___closed__2(l_Lean_IR_EmitC_emitLn___rarg___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitLn___rarg___closed__2);
_init_l_Lean_IR_EmitC_argToCString___closed__1(l_Lean_IR_EmitC_argToCString___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_argToCString___closed__1);
_init_l_Lean_IR_EmitC_toCType___closed__1(l_Lean_IR_EmitC_toCType___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__1);
_init_l_Lean_IR_EmitC_toCType___closed__2(l_Lean_IR_EmitC_toCType___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__2);
_init_l_Lean_IR_EmitC_toCType___closed__3(l_Lean_IR_EmitC_toCType___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__3);
_init_l_Lean_IR_EmitC_toCType___closed__4(l_Lean_IR_EmitC_toCType___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__4);
_init_l_Lean_IR_EmitC_toCType___closed__5(l_Lean_IR_EmitC_toCType___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__5);
_init_l_Lean_IR_EmitC_toCType___closed__6(l_Lean_IR_EmitC_toCType___closed__6);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__6);
_init_l_Lean_IR_EmitC_toCType___closed__7(l_Lean_IR_EmitC_toCType___closed__7);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__7);
_init_l_Lean_IR_EmitC_toCType___closed__8(l_Lean_IR_EmitC_toCType___closed__8);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__8);
_init_l_Lean_IR_EmitC_toCType___closed__9(l_Lean_IR_EmitC_toCType___closed__9);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__9);
_init_l_Lean_IR_EmitC_toCType___closed__10(l_Lean_IR_EmitC_toCType___closed__10);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__10);
_init_l_Lean_IR_EmitC_toCType___closed__11(l_Lean_IR_EmitC_toCType___closed__11);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__11);
_init_l_Lean_IR_EmitC_toCType___closed__12(l_Lean_IR_EmitC_toCType___closed__12);
lean_mark_persistent(l_Lean_IR_EmitC_toCType___closed__12);
_init_l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1(l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_throwInvalidExportName___rarg___closed__1);
_init_l_Lean_IR_EmitC_toCName___closed__1(l_Lean_IR_EmitC_toCName___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_toCName___closed__1);
_init_l_Lean_IR_EmitC_toCInitName___closed__1(l_Lean_IR_EmitC_toCInitName___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_toCInitName___closed__1);
_init_l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1(l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__1);
_init_l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2(l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitFnDeclAux___lambda__3___closed__2);
_init_l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1(l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1);
lean_mark_persistent(l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__1);
_init_l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2(l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2);
lean_mark_persistent(l_List_forM___at_Lean_IR_EmitC_emitFnDecls___spec__5___closed__2);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__1);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__2);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__3);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__4);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__5);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__6);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__1___closed__7);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__1);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__2);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__3);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__4);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__5);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__6);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__7);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__8);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__9);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__10);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__11);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__12);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__13);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__14);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__15);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__16);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__17);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__18);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__19);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__20);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__21);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__22);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__23);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__24);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__25);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__26);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__27);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__2___closed__28);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1(l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__1);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2(l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__2);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3(l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__3___closed__3);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1(l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__1);
_init_l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2(l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___lambda__4___closed__2);
_init_l_Lean_IR_EmitC_emitMainFn___closed__1(l_Lean_IR_EmitC_emitMainFn___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___closed__1);
_init_l_Lean_IR_EmitC_emitMainFn___closed__2(l_Lean_IR_EmitC_emitMainFn___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitMainFn___closed__2);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__1(l_Lean_IR_EmitC_emitFileHeader___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__1);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__2(l_Lean_IR_EmitC_emitFileHeader___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__2);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__3(l_Lean_IR_EmitC_emitFileHeader___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__3);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__4(l_Lean_IR_EmitC_emitFileHeader___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__4);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__5(l_Lean_IR_EmitC_emitFileHeader___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__5);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__6(l_Lean_IR_EmitC_emitFileHeader___closed__6);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__6);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__7(l_Lean_IR_EmitC_emitFileHeader___closed__7);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__7);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__8(l_Lean_IR_EmitC_emitFileHeader___closed__8);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__8);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__9(l_Lean_IR_EmitC_emitFileHeader___closed__9);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__9);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__10(l_Lean_IR_EmitC_emitFileHeader___closed__10);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__10);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__11(l_Lean_IR_EmitC_emitFileHeader___closed__11);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__11);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__12(l_Lean_IR_EmitC_emitFileHeader___closed__12);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__12);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__13(l_Lean_IR_EmitC_emitFileHeader___closed__13);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__13);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__14(l_Lean_IR_EmitC_emitFileHeader___closed__14);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__14);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__15(l_Lean_IR_EmitC_emitFileHeader___closed__15);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__15);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__16(l_Lean_IR_EmitC_emitFileHeader___closed__16);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__16);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__17(l_Lean_IR_EmitC_emitFileHeader___closed__17);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__17);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__18(l_Lean_IR_EmitC_emitFileHeader___closed__18);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__18);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__19(l_Lean_IR_EmitC_emitFileHeader___closed__19);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__19);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__20(l_Lean_IR_EmitC_emitFileHeader___closed__20);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__20);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__21(l_Lean_IR_EmitC_emitFileHeader___closed__21);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__21);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__22(l_Lean_IR_EmitC_emitFileHeader___closed__22);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__22);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__23(l_Lean_IR_EmitC_emitFileHeader___closed__23);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__23);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__24(l_Lean_IR_EmitC_emitFileHeader___closed__24);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__24);
_init_l_Lean_IR_EmitC_emitFileHeader___closed__25(l_Lean_IR_EmitC_emitFileHeader___closed__25);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileHeader___closed__25);
_init_l_Lean_IR_EmitC_emitFileFooter___closed__1(l_Lean_IR_EmitC_emitFileFooter___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileFooter___closed__1);
_init_l_Lean_IR_EmitC_emitFileFooter___closed__2(l_Lean_IR_EmitC_emitFileFooter___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitFileFooter___closed__2);
_init_l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1(l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_throwUnknownVar___rarg___closed__1);
_init_l_Lean_IR_EmitC_getJPParams___closed__1(l_Lean_IR_EmitC_getJPParams___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_getJPParams___closed__1);
_init_l_Lean_IR_EmitC_declareVar___closed__1(l_Lean_IR_EmitC_declareVar___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_declareVar___closed__1);
_init_l_Lean_IR_EmitC_emitTag___closed__1(l_Lean_IR_EmitC_emitTag___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitTag___closed__1);
_init_l_Lean_IR_EmitC_emitInc___lambda__1___closed__1(l_Lean_IR_EmitC_emitInc___lambda__1___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitInc___lambda__1___closed__1);
_init_l_Lean_IR_EmitC_emitInc___closed__1(l_Lean_IR_EmitC_emitInc___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitInc___closed__1);
_init_l_Lean_IR_EmitC_emitInc___closed__2(l_Lean_IR_EmitC_emitInc___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitInc___closed__2);
_init_l_Lean_IR_EmitC_emitInc___closed__3(l_Lean_IR_EmitC_emitInc___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitInc___closed__3);
_init_l_Lean_IR_EmitC_emitInc___closed__4(l_Lean_IR_EmitC_emitInc___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitInc___closed__4);
_init_l_Lean_IR_EmitC_emitInc___closed__5(l_Lean_IR_EmitC_emitInc___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitInc___closed__5);
_init_l_Lean_IR_EmitC_emitDec___closed__1(l_Lean_IR_EmitC_emitDec___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitDec___closed__1);
_init_l_Lean_IR_EmitC_emitDec___closed__2(l_Lean_IR_EmitC_emitDec___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitDec___closed__2);
_init_l_Lean_IR_EmitC_emitDel___closed__1(l_Lean_IR_EmitC_emitDel___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitDel___closed__1);
_init_l_Lean_IR_EmitC_emitSetTag___closed__1(l_Lean_IR_EmitC_emitSetTag___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitSetTag___closed__1);
_init_l_Lean_IR_EmitC_emitSet___closed__1(l_Lean_IR_EmitC_emitSet___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitSet___closed__1);
_init_l_Lean_IR_EmitC_emitOffset___closed__1(l_Lean_IR_EmitC_emitOffset___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitOffset___closed__1);
_init_l_Lean_IR_EmitC_emitUSet___closed__1(l_Lean_IR_EmitC_emitUSet___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitUSet___closed__1);
_init_l_Lean_IR_EmitC_emitSSet___closed__1(l_Lean_IR_EmitC_emitSSet___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitSSet___closed__1);
_init_l_Lean_IR_EmitC_emitSSet___closed__2(l_Lean_IR_EmitC_emitSSet___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitSSet___closed__2);
_init_l_Lean_IR_EmitC_emitSSet___closed__3(l_Lean_IR_EmitC_emitSSet___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitSSet___closed__3);
_init_l_Lean_IR_EmitC_emitSSet___closed__4(l_Lean_IR_EmitC_emitSSet___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitSSet___closed__4);
_init_l_Lean_IR_EmitC_emitSSet___closed__5(l_Lean_IR_EmitC_emitSSet___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitSSet___closed__5);
_init_l_Lean_IR_EmitC_emitSSet___closed__6(l_Lean_IR_EmitC_emitSSet___closed__6);
lean_mark_persistent(l_Lean_IR_EmitC_emitSSet___closed__6);
_init_l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1(l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitJmp___lambda__1___closed__1);
_init_l_Lean_IR_EmitC_emitJmp___closed__1(l_Lean_IR_EmitC_emitJmp___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitJmp___closed__1);
_init_l_Lean_IR_EmitC_emitCtorScalarSize___closed__1(l_Lean_IR_EmitC_emitCtorScalarSize___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitCtorScalarSize___closed__1);
_init_l_Lean_IR_EmitC_emitAllocCtor___closed__1(l_Lean_IR_EmitC_emitAllocCtor___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitAllocCtor___closed__1);
_init_l_Lean_IR_EmitC_emitCtor___closed__1(l_Lean_IR_EmitC_emitCtor___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitCtor___closed__1);
_init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1(l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1);
lean_mark_persistent(l_Nat_forM_loop___at_Lean_IR_EmitC_emitReset___spec__1___closed__1);
_init_l_Lean_IR_EmitC_emitReset___closed__1(l_Lean_IR_EmitC_emitReset___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitReset___closed__1);
_init_l_Lean_IR_EmitC_emitReset___closed__2(l_Lean_IR_EmitC_emitReset___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitReset___closed__2);
_init_l_Lean_IR_EmitC_emitReset___closed__3(l_Lean_IR_EmitC_emitReset___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitReset___closed__3);
_init_l_Lean_IR_EmitC_emitReset___closed__4(l_Lean_IR_EmitC_emitReset___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitReset___closed__4);
_init_l_Lean_IR_EmitC_emitReuse___closed__1(l_Lean_IR_EmitC_emitReuse___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitReuse___closed__1);
_init_l_Lean_IR_EmitC_emitReuse___closed__2(l_Lean_IR_EmitC_emitReuse___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitReuse___closed__2);
_init_l_Lean_IR_EmitC_emitProj___closed__1(l_Lean_IR_EmitC_emitProj___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitProj___closed__1);
_init_l_Lean_IR_EmitC_emitUProj___closed__1(l_Lean_IR_EmitC_emitUProj___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitUProj___closed__1);
_init_l_Lean_IR_EmitC_emitSProj___closed__1(l_Lean_IR_EmitC_emitSProj___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitSProj___closed__1);
_init_l_Lean_IR_EmitC_emitSProj___closed__2(l_Lean_IR_EmitC_emitSProj___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitSProj___closed__2);
_init_l_Lean_IR_EmitC_emitSProj___closed__3(l_Lean_IR_EmitC_emitSProj___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitSProj___closed__3);
_init_l_Lean_IR_EmitC_emitSProj___closed__4(l_Lean_IR_EmitC_emitSProj___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitSProj___closed__4);
_init_l_Lean_IR_EmitC_emitSProj___closed__5(l_Lean_IR_EmitC_emitSProj___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitSProj___closed__5);
_init_l_Lean_IR_EmitC_emitExternCall___closed__1(l_Lean_IR_EmitC_emitExternCall___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitExternCall___closed__1);
_init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1(l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1);
lean_mark_persistent(l_Nat_forM_loop___at_Lean_IR_EmitC_emitPartialApp___spec__1___closed__1);
_init_l_Lean_IR_EmitC_emitPartialApp___closed__1(l_Lean_IR_EmitC_emitPartialApp___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitPartialApp___closed__1);
_init_l_Lean_IR_EmitC_emitPartialApp___closed__2(l_Lean_IR_EmitC_emitPartialApp___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitPartialApp___closed__2);
_init_l_Lean_IR_EmitC_emitApp___closed__1(l_Lean_IR_EmitC_emitApp___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitApp___closed__1);
_init_l_Lean_IR_EmitC_emitApp___closed__2(l_Lean_IR_EmitC_emitApp___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitApp___closed__2);
_init_l_Lean_IR_EmitC_emitApp___closed__3(l_Lean_IR_EmitC_emitApp___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitApp___closed__3);
_init_l_Lean_IR_EmitC_emitApp___closed__4(l_Lean_IR_EmitC_emitApp___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitApp___closed__4);
_init_l_Lean_IR_EmitC_emitApp___closed__5(l_Lean_IR_EmitC_emitApp___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitApp___closed__5);
_init_l_Lean_IR_EmitC_emitBoxFn___closed__1(l_Lean_IR_EmitC_emitBoxFn___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitBoxFn___closed__1);
_init_l_Lean_IR_EmitC_emitBoxFn___closed__2(l_Lean_IR_EmitC_emitBoxFn___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitBoxFn___closed__2);
_init_l_Lean_IR_EmitC_emitBoxFn___closed__3(l_Lean_IR_EmitC_emitBoxFn___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitBoxFn___closed__3);
_init_l_Lean_IR_EmitC_emitBoxFn___closed__4(l_Lean_IR_EmitC_emitBoxFn___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitBoxFn___closed__4);
_init_l_Lean_IR_EmitC_emitBoxFn___closed__5(l_Lean_IR_EmitC_emitBoxFn___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitBoxFn___closed__5);
_init_l_Lean_IR_EmitC_emitUnbox___closed__1(l_Lean_IR_EmitC_emitUnbox___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitUnbox___closed__1);
_init_l_Lean_IR_EmitC_emitUnbox___closed__2(l_Lean_IR_EmitC_emitUnbox___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitUnbox___closed__2);
_init_l_Lean_IR_EmitC_emitUnbox___closed__3(l_Lean_IR_EmitC_emitUnbox___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitUnbox___closed__3);
_init_l_Lean_IR_EmitC_emitUnbox___closed__4(l_Lean_IR_EmitC_emitUnbox___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitUnbox___closed__4);
_init_l_Lean_IR_EmitC_emitUnbox___closed__5(l_Lean_IR_EmitC_emitUnbox___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitUnbox___closed__5);
_init_l_Lean_IR_EmitC_emitIsShared___closed__1(l_Lean_IR_EmitC_emitIsShared___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitIsShared___closed__1);
_init_l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1(l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitIsTaggedPtr___closed__1);
_init_l_Lean_IR_EmitC_quoteString___closed__1(l_Lean_IR_EmitC_quoteString___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_quoteString___closed__1);
_init_l_Lean_IR_EmitC_emitNumLit___closed__1(l_Lean_IR_EmitC_emitNumLit___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitNumLit___closed__1);
_init_l_Lean_IR_EmitC_emitNumLit___closed__2(l_Lean_IR_EmitC_emitNumLit___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitNumLit___closed__2);
_init_l_Lean_IR_EmitC_emitNumLit___closed__3(l_Lean_IR_EmitC_emitNumLit___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitNumLit___closed__3);
_init_l_Lean_IR_EmitC_emitNumLit___closed__4(l_Lean_IR_EmitC_emitNumLit___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitNumLit___closed__4);
_init_l_Lean_IR_EmitC_emitLit___closed__1(l_Lean_IR_EmitC_emitLit___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitLit___closed__1);
_init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1(l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1);
lean_mark_persistent(l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__2___closed__1);
_init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1(l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1);
lean_mark_persistent(l_Nat_forM_loop___at_Lean_IR_EmitC_emitTailCall___spec__3___closed__1);
_init_l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1(l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitTailCall___lambda__1___closed__1);
_init_l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1(l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitTailCall___lambda__2___closed__1);
_init_l_Lean_IR_EmitC_emitTailCall___closed__1(l_Lean_IR_EmitC_emitTailCall___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitTailCall___closed__1);
_init_l_Lean_IR_EmitC_emitTailCall___closed__2(l_Lean_IR_EmitC_emitTailCall___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitTailCall___closed__2);
_init_l_Lean_IR_EmitC_emitIf___closed__1(l_Lean_IR_EmitC_emitIf___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitIf___closed__1);
_init_l_Lean_IR_EmitC_emitBlock___closed__1(l_Lean_IR_EmitC_emitBlock___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitBlock___closed__1);
_init_l_Lean_IR_EmitC_emitBlock___closed__2(l_Lean_IR_EmitC_emitBlock___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitBlock___closed__2);
_init_l_Lean_IR_EmitC_emitBlock___closed__3(l_Lean_IR_EmitC_emitBlock___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitBlock___closed__3);
_init_l_Lean_IR_EmitC_emitBlock___closed__4(l_Lean_IR_EmitC_emitBlock___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitBlock___closed__4);
_init_l_Lean_IR_EmitC_emitBlock___closed__5(l_Lean_IR_EmitC_emitBlock___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitBlock___closed__5);
_init_l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1(l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1);
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitCase___spec__1___closed__1);
_init_l_Lean_IR_EmitC_emitCase___closed__1(l_Lean_IR_EmitC_emitCase___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitCase___closed__1);
_init_l_Lean_IR_EmitC_emitCase___closed__2(l_Lean_IR_EmitC_emitCase___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitCase___closed__2);
_init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1(l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1);
lean_mark_persistent(l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__1);
_init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2(l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2);
lean_mark_persistent(l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__2);
_init_l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3(l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3);
lean_mark_persistent(l_Nat_forM_loop___at_Lean_IR_EmitC_emitDeclAux___spec__1___closed__3);
_init_l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1(l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclAux___lambda__1___closed__1);
_init_l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1(l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclAux___lambda__2___closed__1);
_init_l_Lean_IR_EmitC_emitDeclAux___closed__1(l_Lean_IR_EmitC_emitDeclAux___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclAux___closed__1);
_init_l_Lean_IR_EmitC_emitDeclAux___closed__2(l_Lean_IR_EmitC_emitDeclAux___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclAux___closed__2);
_init_l_Lean_IR_EmitC_emitDeclAux___closed__3(l_Lean_IR_EmitC_emitDeclAux___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclAux___closed__3);
_init_l_Lean_IR_EmitC_emitDeclAux___closed__4(l_Lean_IR_EmitC_emitDeclAux___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclAux___closed__4);
_init_l_Lean_IR_EmitC_emitDecl___closed__1(l_Lean_IR_EmitC_emitDecl___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitDecl___closed__1);
_init_l_Lean_IR_EmitC_emitMarkPersistent___closed__1(l_Lean_IR_EmitC_emitMarkPersistent___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitMarkPersistent___closed__1);
_init_l_Lean_IR_EmitC_emitDeclInit___closed__1(l_Lean_IR_EmitC_emitDeclInit___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclInit___closed__1);
_init_l_Lean_IR_EmitC_emitDeclInit___closed__2(l_Lean_IR_EmitC_emitDeclInit___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitDeclInit___closed__2);
_init_l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1(l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1);
lean_mark_persistent(l_Array_foldlMUnsafe_fold___at_Lean_IR_EmitC_emitInitFn___spec__3___closed__1);
_init_l_Lean_IR_EmitC_emitInitFn___closed__1(l_Lean_IR_EmitC_emitInitFn___closed__1);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__1);
_init_l_Lean_IR_EmitC_emitInitFn___closed__2(l_Lean_IR_EmitC_emitInitFn___closed__2);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__2);
_init_l_Lean_IR_EmitC_emitInitFn___closed__3(l_Lean_IR_EmitC_emitInitFn___closed__3);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__3);
_init_l_Lean_IR_EmitC_emitInitFn___closed__4(l_Lean_IR_EmitC_emitInitFn___closed__4);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__4);
_init_l_Lean_IR_EmitC_emitInitFn___closed__5(l_Lean_IR_EmitC_emitInitFn___closed__5);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__5);
_init_l_Lean_IR_EmitC_emitInitFn___closed__6(l_Lean_IR_EmitC_emitInitFn___closed__6);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__6);
_init_l_Lean_IR_EmitC_emitInitFn___closed__7(l_Lean_IR_EmitC_emitInitFn___closed__7);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__7);
_init_l_Lean_IR_EmitC_emitInitFn___closed__8(l_Lean_IR_EmitC_emitInitFn___closed__8);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__8);
_init_l_Lean_IR_EmitC_emitInitFn___closed__9(l_Lean_IR_EmitC_emitInitFn___closed__9);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__9);
_init_l_Lean_IR_EmitC_emitInitFn___closed__10(l_Lean_IR_EmitC_emitInitFn___closed__10);
lean_mark_persistent(l_Lean_IR_EmitC_emitInitFn___closed__10);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
