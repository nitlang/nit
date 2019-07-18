# This file is part of NIT ( http://www.nitlanguage.org ).
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

class A
	fun foo(i: Int) do
		'F'.output
		i.output
	end

	fun bar(i: Int): A do
		'B'.output
		i.output
		return self
	end
end

fun test(a: nullable A) do
	'a'.output
	(a == null).output
	a?.foo(1)

	var r = a?.bar(2)
	'r'.output
	(r == null).output

	a?.bar(10)?.bar(11)?.foo(12)
	#alt2#a.bar(20).foo(21)
	#alt3#a?.bar(20).foo(21)
	#alt4#a.bar(20)?.foo(21)
end

var a = new A
test(a)
'\n'.output
test(null)

#alt1#a?.foo(10)
#alt1#null?.foo(11)
