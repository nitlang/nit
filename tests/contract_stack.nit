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

class Stack[T]
	var data = new Array[T]

	var top = -1

	var max_size: Int

	init defaultinit(size: Int)
	is
		expect(size > 0)
	do
		self.max_size = size
	end

	fun push(object: T)
	is
		expect(top < (max_size - 1))
		ensure(top == old(top) + 1)
		ensure(data[top] == object)
	do
		top += 1
		data[top] = object
	end

	fun pop
	is
		expect(top > -1)
		ensure(top == old(top) - 1)
	do
		data.pop
		top -= 1
	end
end

var stack = new Stack[Int](10)
stack.push(10)
stack.pop