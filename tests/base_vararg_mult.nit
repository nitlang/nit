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

import array

class A
	fun x(ints: Int...) is autoinit do
		for i in ints do
			'X'.output
			i.output
		end
		'\n'.output
	end
end

class B
	super A
	fun y(objs: Object...) is autoinit do
		for i in objs do
			'Y'.output
			i.output
		end
		'\n'.output
	end
end

var x

#alt1#x = new A
x = new A(1)
x = new A(10, 20)
x = new A([100, 200, 300]...)

#aly1#x = new B(1)
x = new B(1, 2)
#alt1#x = new B(1, 2, 3)
#alt1#x = new B([10, 20], 33)
x = new B([10, 11]..., 20)
x = new B(10, [20, 21]...)
x = new B([10, 11]..., [20, 21, 23]...)
