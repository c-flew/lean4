-- Copyright (c) 2014 Microsoft Corporation. All rights reserved.
-- Released under Apache 2.0 license as described in the file LICENSE.
-- Author: Leonardo de Moura

import data.bool

open bool inhabited

inductive char : Type :=
  mk : bool → bool → bool → bool → bool → bool → bool → bool → char

namespace char
  protected definition is_inhabited [instance] : inhabited char :=
  inhabited.mk (mk ff ff ff ff ff ff ff ff)
end char

inductive string : Type :=
  empty : string,
  str   : char → string → string

namespace string
  protected definition is_inhabited [instance] : inhabited string :=
  inhabited.mk empty
end string
