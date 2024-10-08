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

import core::kernel

fun foo(i: Int): Int
do
	'f'.output
	i.output
	return i
end

class A
	# needed on the new
	var i: Int

	# initialized by the allocation
	var j: Int = foo(2)

	# optional in the new, default value evaluated if `null` is given
	var k: Int = foo(3) is optional

	# the `init` will initialize it
	var l: Int is noautoinit
	init do l = foo(4)

	# initialized if needed on the first `read`
	var m: Int = foo(5) is lazy

	fun set
	do
		i = 10
		j = 20
		k = 30
		l = 40
		m = 50
	end

	fun test
	do
		#alt1#set
		i.output
		j.output
		k.output
		l.output
		m.output
		'\n'.output
	end
end

var a
a = new A(foo(100))
a.test
a = new A(foo(100), null)
a.test
a = new A(foo(100), foo(300))
a.test
