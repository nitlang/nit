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
	var prev: nullable A
	var value: Int is lazy do
		if prev == null then return 0
		var v = prev.value + 1
		v.output
		return v
	end
end

var a0 = new A(null)
var a1 = new A(a0)
var a2 = new A(a1)
var a3 = new A(a2)

'\n'.output
a2.value.output
'\n'.output
a1.value.output
'\n'.output
a3.value.output
