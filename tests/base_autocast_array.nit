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

import core::collection::array

class A
	type V: nullable Object
	var v: V

	fun test_array: Array[V]
	do
		#alt3#v = 10
		return [v] #alt1-2#
		#alt1#return [10:V]
		#alt2#return [10]
	end
end

class B
	super A
	redef type V: Bool
end

var a = new A(1)

a.test_array.first.output

var ab = new A(true)

ab.test_array.first.output

var b = new B(true)

b.test_array.first.output
