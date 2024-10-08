# This file is part of NIT ( https://nitlanguage.org ).
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

import kernel

class A[T]
	type U: nullable Object
	fun testT(o: Object): Bool do return o isa T
	fun testU(o: Object): Bool do return o isa U

	fun get_c: C[U,T] do return new C[U,T]

	fun testall
	do
		self.testT(1).output
		self.testT(true).output
		self.testU(1).output
		self.testU(true).output
		var c = get_c
		c.testT(1).output
		c.testT(true).output
		c.testU(1).output
		c.testU(true).output
		'\n'.output
	end
end

class B
	super A[Int]
	redef type U: Bool
	fun foo: A[Bool] do return get_c
end

class C[V, W]
	super A[V]
	redef type U: W
	fun foo: A[W] do return get_c
end

var ao = new A[Object]
var ai = new A[Int]
var b = new B
var coo = new C[Object, Object]
var cib = new C[Int, Bool]

ao.testall
ai.testall
b.testall
b.foo.testall
coo.testall
cib.testall
cib.foo.testall
