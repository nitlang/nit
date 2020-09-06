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

# Test the creation of contract with generic class

class MyGenericClass[E]

	fun foo(x: E)
	is
		expect(x == 1)
	do
		if x != 1 then print "Error x != 1"
	end
end

class MyGenericClass2[E]

	var real = new Array[E]

	fun add_all(x: Array[Object])
	is
		expect(x.length != 0)
	do
		real.add_all x
	end
end

var first = new MyGenericClass[Int]
first.foo(1)
var second = new MyGenericClass2[Int]
second.add_all([1,2,3])
second.add_all(new Array[Int])
