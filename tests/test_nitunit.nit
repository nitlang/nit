# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

# a 'success' unit test (pass)
#
#     assert true
module test_nitunit
# a 'error' unit test (do not pass)
#
#     assert false
class X
	# a 'failure' unit test (does not compile)
	#
	#     assert undefined_identifier
	fun foo do end

	# a 'failure' unit test (does not parse)
	#
	#     assert !@#$%^&*()
	fun foo1(a, b: Int) do end

	# a private method (visible by nitunit)
	#
	#     var x = new X
	#     assert x.foo2
	private fun foo2: Bool do return true

	var foo3: Y[X] = new Y[X]
end

class Y[E: X]
	fun [](e: Int): Int do return e
	fun []=(e, i: Int) do end

	fun +(e: Int): Int do return e
	fun -(e: Int): Int do return e
	fun *(e: Int): Int do return e
	fun /(e: Int): Int do return e
	fun %(e: Int): Int do return e
	fun -: Int do return -1

	redef fun ==(e) do return true
	redef fun !=(e) do return true

	fun <(e: Int): Bool do return true
	fun <=(e: Int): Bool do return true
	fun <=>(e: Int): Bool do return true
	fun >=(e: Int): Bool do return true
	fun >(e: Int): Bool do return true
end

class Z
	fun [](i, j: Int): Bool do return true
	fun []=(i, j: Int, k: Bool) do end
	fun foo=(i, j: Int) do end
	fun bar=(i, j, k: Int) do end
end
