# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Alexandre Terrasa <alexandre@moz-code.org>
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

import base_minimal

class X end
class Y end
class Z end

class A[T]
	fun foo: B[T] do
		return new B[T]
	end
end

class B[U]
end

class C[V, W] end
class D[T, U, V] end
class E[T, U, V, W] end

var ax = new A[X]
var ay = new A[Y]
var az = new A[Z]

var b = ax.foo

var cxx = new C[X, X]
var cxy = new C[X, Y]
var cxz = new C[X, Z]

var d = new D[X, Y, Z]
var e = new E[X, Y, Z, Bool]

assert ax isa A[X]
assert ay isa A[Y]
assert az isa A[Z]

assert b isa B[Object]

assert cxx isa C[X, X]
assert cxy isa C[X, Y]
assert cxz isa C[X, Z]

assert d isa D[X, Y, Z]
assert e isa E[X, Y, Z, Bool]



true.output
