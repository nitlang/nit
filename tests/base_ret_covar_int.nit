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

class A[E]
	type V: Object
	fun foo: Object do return 1

	fun bar1: E do return 2
	fun bar2: E do return 3

	fun baz1: V do return 4
	fun baz2: V do return 5
end

class B
	super A[Int]
	redef type V: Int

	redef fun foo: Int do return 11

	redef fun bar1 do return 22
	redef fun bar2: Int do return 33

	redef fun baz1 do return 44
	#alt1#redef fun baz2 do return 55
end

fun test_a(a: A[Object])
do
	a.foo.output
	a.bar1.output
	a.bar2.output
	a.baz1.output
	a.baz2.output
end
fun test_b(a: B)
do
	a.foo.output
	a.bar1.output
	a.bar2.output
	a.baz1.output
	a.baz2.output
end

var a = new A[Object]
test_a(a)

a = new A[Int]
test_a(a)

a = new B
test_a(a)
test_b(a)
