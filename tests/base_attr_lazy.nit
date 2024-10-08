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
	var a1: Object = fa1 is lazy
	var a2: Object = fa2 is lazy
	fun fa1: Object do
		1.output
		return 10
	end
	fun fa2: Object do
		2.output
		return 20
	end
	#alt1#var a3: Object is lazy
	#alt2#fun a4: Object is lazy
end

var f = new Foo
f.a1.output
f.a1.output
f.a2.output
f.a2.output
'\n'.output

var g = new Foo
g.a2.output
g.a1.output
g.a2.output
g.a1.output
'\n'.output

var h = new Foo
h.a1 = 100
h.a1.output
h.a1.output
