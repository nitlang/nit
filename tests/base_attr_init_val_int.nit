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
	var b: Bool
	var c: Char
	var i: Int
	var f: Float
	init is old_style_init do end
end

fun print(o: Object) do o.output

var a = new A
#alt1#print a.b
#alt2#print a.c
#alt3#print a.i
#alt4#print a.f
