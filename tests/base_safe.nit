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

class A
	var i: Int
	var parent: nullable A
	fun gd_parent: nullable A
	do
		return parent?.parent
	end
end

fun p(o: Object) do o.output

var a0 = new A(0, null)
var a1 = new A(1, a0)
var a2 = new A(2, a1)
var a3 = new A(3, a2)

p a3.gd_parent?.i or else -1
p a2.gd_parent?.i?
p a1.gd_parent?.i or else -1
p a0.gd_parent?.i?
