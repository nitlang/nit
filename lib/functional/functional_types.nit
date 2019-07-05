# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2019 Louis-Vincent Boudreault <lv.boudreault95@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This module provides functional type to represents various function forms.
# Function types can hold up to 20 arguments. The type `Fun` is for function
# (input and output) and `Proc` is for procedure (input but no output).
module functional_types

interface Routine
end
interface Fun
	super Routine
end
interface Proc
	super Routine
end
interface Fun0[RESULT]
	super Fun
	fun call: RESULT is abstract
end
interface Fun1[A0,RESULT]
	super Fun
	fun call(a0: A0): RESULT is abstract
end
interface Fun2[A0,A1,RESULT]
	super Fun
	fun call(a0: A0,a1: A1): RESULT is abstract
end
interface Fun3[A0,A1,A2,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2): RESULT is abstract
end
interface Fun4[A0,A1,A2,A3,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3): RESULT is abstract
end
interface Fun5[A0,A1,A2,A3,A4,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4): RESULT is abstract
end
interface Fun6[A0,A1,A2,A3,A4,A5,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5): RESULT is abstract
end
interface Fun7[A0,A1,A2,A3,A4,A5,A6,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6): RESULT is abstract
end
interface Fun8[A0,A1,A2,A3,A4,A5,A6,A7,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7): RESULT is abstract
end
interface Fun9[A0,A1,A2,A3,A4,A5,A6,A7,A8,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8): RESULT is abstract
end
interface Fun10[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9): RESULT is abstract
end
interface Fun11[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10): RESULT is abstract
end
interface Fun12[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11): RESULT is abstract
end
interface Fun13[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12): RESULT is abstract
end
interface Fun14[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13): RESULT is abstract
end
interface Fun15[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14): RESULT is abstract
end
interface Fun16[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15): RESULT is abstract
end
interface Fun17[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15,a16: A16): RESULT is abstract
end
interface Fun18[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15,a16: A16,a17: A17): RESULT is abstract
end
interface Fun19[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,RESULT]
	super Fun
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15,a16: A16,a17: A17,a18: A18): RESULT is abstract
end
interface Proc0[]
	super Proc
	fun call is abstract
end
interface Proc1[A0]
	super Proc
	fun call(a0: A0) is abstract
end
interface Proc2[A0,A1]
	super Proc
	fun call(a0: A0,a1: A1) is abstract
end
interface Proc3[A0,A1,A2]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2) is abstract
end
interface Proc4[A0,A1,A2,A3]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3) is abstract
end
interface Proc5[A0,A1,A2,A3,A4]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4) is abstract
end
interface Proc6[A0,A1,A2,A3,A4,A5]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5) is abstract
end
interface Proc7[A0,A1,A2,A3,A4,A5,A6]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6) is abstract
end
interface Proc8[A0,A1,A2,A3,A4,A5,A6,A7]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7) is abstract
end
interface Proc9[A0,A1,A2,A3,A4,A5,A6,A7,A8]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8) is abstract
end
interface Proc10[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9) is abstract
end
interface Proc11[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10) is abstract
end
interface Proc12[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11) is abstract
end
interface Proc13[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12) is abstract
end
interface Proc14[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13) is abstract
end
interface Proc15[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14) is abstract
end
interface Proc16[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15) is abstract
end
interface Proc17[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15,a16: A16) is abstract
end
interface Proc18[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15,a16: A16,a17: A17) is abstract
end
interface Proc19[A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18]
	super Proc
	fun call(a0: A0,a1: A1,a2: A2,a3: A3,a4: A4,a5: A5,a6: A6,a7: A7,a8: A8,a9: A9,a10: A10,a11: A11,a12: A12,a13: A13,a14: A14,a15: A15,a16: A16,a17: A17,a18: A18) is abstract
end
