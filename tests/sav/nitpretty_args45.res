# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

class A
	var attr: Int
	fun foo1=(i: Int) do end
	fun foo2=(i, j: Int) do end
	fun [](a: Int): Int is abstract
	fun []=(a, b: Int) do end
end

class B
	fun [](a, b: Int): Int is abstract
	fun []=(a, b, c: Int) do end
end

# comment 1
var a = new A(10) # comment 2

a.foo1 = 10 # comment 3
a.foo2(1) = 10 # comment 4
print a[1] # comment 5
a[1] = 2 # comment 6
a[2] += 3 # comment 7

var b = new B
print b[1, 2]
b[1, 2] = 10
