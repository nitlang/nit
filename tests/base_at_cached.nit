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

import kernel

class Base
	var foo: Int = 10
	fun -: Int do return foo + 20
	fun bar: Int do return -self + 40
	#alt1#fun fail is cached do end
	#alt2#fun fail(i: Int): Int is cached do return i
end

class CMinus
	super Base

	redef fun - is cached do return foo + 1
end

class CBar
	super Base

	redef fun bar is cached do return -self + 2
end

#alt3#fun fail: Int is cached do return 0

fun test(b: Base)
do
	b.foo.output
	(-b).output
	b.bar.output
	b.foo = 110
	b.foo.output
	(-b).output
	b.bar.output
	'\n'.output
end

test(new Base)
test(new CMinus)
test(new CBar)
