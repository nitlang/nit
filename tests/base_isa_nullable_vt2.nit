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

class Something end

class A[T]
	type U: nullable Object

	fun test(t: nullable T): Bool do
		return t isa U
	end
end

class B[T]
	super A[T]

	redef type U: Bool
end

class C[T]
	super A[T]

	redef type U: nullable Bool
end

var a = new A[Object]
assert a.test(true)
assert a.test(null)

a = new A[Bool]
assert a.test(true)
assert a.test(null)

var b = new B[Object]
assert not b.test(new Something)
assert b.test(false)
assert not b.test(null)

var c = new C[Object]
assert not c.test(new Something)
assert c.test(false)
assert c.test(null)

true.output
