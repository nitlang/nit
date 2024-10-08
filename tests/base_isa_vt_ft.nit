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

import end

interface Object
end

enum Bool
	fun output is intern
end

class A[X]
	type T: nullable Object

	fun foo(o: Object): Bool do
		return o isa T
	end
end

class B[X]
	super A[X]
	redef type T: X
	type U: Bool

	fun bar(o: Object): Bool do
		return o isa U
	end
end

class C[X, Y]
	super B[X]
	redef type T: X
end

var a = new A[Object]
assert a.foo(new A[Object])

var b = new B[A[Object]]
assert b.foo(new A[Object])
assert b.foo(new B[Object])
assert not b.foo(true)
assert not b.bar(new B[Object])
assert b.bar(true)

var c = new C[Object, B[Object]]
assert c.foo(new A[Object])
assert c.foo(new B[Object])
assert c.foo(new C[Object, B[Object]])

true.output
