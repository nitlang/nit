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

class Foo
	var a1: nullable Object = fa1 is lazy
	var a2: nullable Object = fa2 is lazy
	fun fa1: nullable Object do
		1.output
		return 10
	end
	fun fa2: nullable Object do
		2.output
		return 20
	end
end

fun o(o: nullable Object)
do
	if o == null then
		'n'.output
		'\n'.output
	else
		o.output
	end
end

var f = new Foo
o f.a1
o f.a1
o f.a2
o f.a2
'\n'.output

var g = new Foo
o g.a2
o g.a1
o g.a2
o g.a1
'\n'.output

var h = new Foo
h.a1 = 100
h.a1.output
h.a1.output
