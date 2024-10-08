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
	var a: Object = get(5) is lazy
	var b: Object is noautoinit
	#alt1#var b2: Object = get(-4) is noautoinit
	var c: Object is noautoinit
	var d: Object = get(2) is lateinit
	#alt2#var d2: Object = get(-2) is lateinit, lazy
	var e: Object = get(1)
	fun setc(v: Object) is autoinit do self.c = get(v)
	init do
		b = get(4)
	end
	fun get(v: Object): Object
	do
		'g'.output
		v.output
		return v
	end
end

var a = new A(3)
'\n'.output
a.a.output
a.b.output
a.c.output
a.d.output
a.e.output
