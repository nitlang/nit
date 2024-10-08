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

fun foo(i: Int): nullable Int do return i
fun bar(i: Int) do i.output
fun baz: nullable Int do return null

bar(0)
var i = null
while i == null do
	i = foo(1) #alt1# exit(1)
end
bar(i)

i = foo(2)
while i != null do
	bar(i)
	i = baz
end
#alt2#bar(i)

i = null
loop
	i = foo(3)
	if i == null then continue #alt3#
	bar(i)
	break
end
bar(i)

i = 4
loop
	bar(i)
	i = baz
	if i != null then
		bar(i)
	else
		break #alt4# exit(0)
	end
end
