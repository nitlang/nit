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

class A
	var a1: Object = self
	protected var a2: Object = self
	private var a3: Object = self

	var a4: Object = self is writable
	protected var a5: Object = self is writable
	private var a6: Object = self is writable

	var a7: Object = self is protected writable
	protected var a8: Object = self is protected writable
	private var a9: Object = self is protected writable

	var a10: Object = self is private writable
	protected var a11: Object = self is private writable
	private var a12: Object = self is private writable

	var cpt: Int = 0

	redef fun output
	do
		_cpt += 1
		_cpt.output
	end

	fun foo_a(a: A)
	do
		a1.output
		a1 = a
		a2.output
		a2 = a
		a3.output
		a3 = a
		a4.output
		a4 = a
		a5.output
		a5 = a
		a6.output
		a6 = a
		a7.output
		a7 = a
		a8.output
		a8 = a
		a9.output
		a9 = a
		a10.output
		a10 = a
		a11.output
		a11 = a
		a12.output
		a12 = a

		'\n'.output

		a.a1.output
		a.a1 = a
		a.a2.output
		a.a2 = a
		a.a3.output
		a.a3 = a
		a.a4.output
		a.a4 = a
		a.a5.output
		a.a5 = a
		a.a6.output
		a.a6 = a
		a.a7.output
		a.a7 = a
		a.a8.output
		a.a8 = a
		a.a9.output
		a.a9 = a
		a.a10.output
		a.a10 = a
		a.a11.output
		a.a11 = a
		a.a12.output
		a.a12 = a

		'\n'.output
	end
end

fun foo(a: A)
do
	a.a1.output
	a.a1 = a
	a.a2.output
	a.a2 = a
	a.a3.output
	a.a3 = a
	a.a4.output
	a.a4 = a
	a.a5.output
	a.a5 = a
	a.a6.output
	a.a6 = a
	a.a7.output
	a.a7 = a
	a.a8.output
	a.a8 = a
	a.a9.output
	a.a9 = a
	a.a10.output
	a.a10 = a
	a.a11.output
	a.a11 = a
	a.a12.output
	a.a12 = a

	'\n'.output
end

var a = new A
a.foo_a(a)
foo(a)
