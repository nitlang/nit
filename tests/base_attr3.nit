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

import base_attr2

class B
	super A
	fun foo_b(a: A)
	do
		a1.output
		#alt1#a1 = a
		a2.output
		#alt1#a2 = a
		#alt1#a3.output
		#alt1#a3 = a
		a4.output
		a4 = a
		a5.output
		a5 = a
		#alt1#a6.output
		a6 = a
		a7.output
		a7 = a
		a8.output
		a8 = a
		#alt1#a9.output
		a9 = a
		a10.output
		#alt1#a10 = a
		a11.output
		#alt1#a11 = a
		#alt1#a12.output
		#alt1#a12 = a

		'\n'.output

		a.a1.output
		#alt2#a.a1 = a
		#alt2#a.a2.output
		#alt2#a.a2 = a
		#alt2#a.a3.output
		#alt2#a.a3 = a
		a.a4.output
		a.a4 = a
		#alt2#a.a5.output
		a.a5 = a
		#alt2#a.a6.output
		a.a6 = a
		a.a7.output
		#alt2#a.a7 = a
		#alt2#a.a8.output
		#alt2#a.a8 = a
		#alt2#a.a9.output
		#alt2#a.a9 = a
		a.a10.output
		#alt2#a.a10 = a
		#alt2#a.a11.output
		#alt2#a.a11 = a
		#alt2#a.a12.output
		#alt2#a.a12 = a

		'\n'.output
	end
end

fun foo2(a: A)
do
	a.a1.output
	#alt3#a.a1 = a
	#alt3#a.a2.output
	#alt3#a.a2 = a
	#alt3#a.a3.output
	#alt3#a.a3 = a
	a.a4.output
	a.a4 = a
	#alt3#a.a5.output
	a.a5 = a
	#alt3#a.a6.output
	a.a6 = a
	a.a7.output
	#alt3#a.a7 = a
	#alt3#a.a8.output
	#alt3#a.a8 = a
	#alt3#a.a9.output
	#alt3#a.a9 = a
	a.a10.output
	#alt3#a.a10 = a
	#alt3#a.a11.output
	#alt3#a.a11 = a
	#alt3#a.a12.output
	#alt3#a.a12 = a

	'\n'.output
end

fun foo3(a: B)
do
	a.a1.output
	#alt4#a.a1 = a
	#alt4#a.a2.output
	#alt4#a.a2 = a
	#alt4#a.a3.output
	#alt4#a.a3 = a
	a.a4.output
	a.a4 = a
	#alt4#a.a5.output
	a.a5 = a
	#alt4#a.a6.output
	a.a6 = a
	a.a7.output
	#alt4#a.a7 = a
	#alt4#a.a8.output
	#alt4#a.a8 = a
	#alt4#a.a9.output
	#alt4#a.a9 = a
	a.a10.output
	#alt4#a.a10 = a
	#alt4#a.a11.output
	#alt4#a.a11 = a
	#alt4#a.a12.output
	#alt4#a.a12 = a

	'\n'.output
end

var b = new B
b.foo_b(b)
foo2(b)
foo3(b)
