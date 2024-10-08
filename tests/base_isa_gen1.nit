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

class A end

class B[T]
	super A
end

class C
	super A
end

class D[T, U]
	super B[T]
	super C
end

class E[T]
	super D[T, Object]
end

class F
	super D[Object, Object]
end

class G[T: Object]
	super F
end

class H
end




var a = new A
var b = new B[Object]
var b2 = new B[H]
var b3 = new B[F]
var c = new C
var d = new D[Object, Object]
var e = new E[F]
var f = new F
var g = new G[Object]

assert f isa A
assert f isa C
assert not f isa G[Object]
assert g isa D[Object, Object]
assert e isa D[Object, Object]
assert e isa D[A, Object]
assert not e isa D[H, Object]
assert e isa D[F, Object]

true.output
