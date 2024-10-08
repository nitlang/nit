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

class A[X]
	type T: nullable Object

	fun foo(o: Object): Bool do
		return o isa T
	end
end

class B[X]
	super A[X]
	redef type T: B[X]
end

class C[X]
	super B[X]
	redef type T: C[X]
end

var a = new A[Object]
assert a.foo(new A[Object])

var b = new B[Object]
assert not b.foo(new A[Object])
assert b.foo(new B[Object])
assert b.foo(new C[Object])

var c = new C[Object]
assert not c.foo(new A[Object])
assert not c.foo(new B[Object])
assert c.foo(new C[Object])
assert c.foo(new C[B[Object]])
assert c.foo(new C[B[Bool]])

true.output
