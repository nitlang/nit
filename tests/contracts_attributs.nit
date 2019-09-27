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

# Verification if it's possible to define a contract with a call of an attribute and a method call

class MyClass

	var bar = 10

	fun foo(x: Int)
	is
		expects(bar == 10)
		ensures(x > 0)
	do
		if bar != 10 then print "Error"
	end
end

class MyClass2

	var my_class: MyClass

	fun baz: Bool
	do
		return false
	end

	fun foo(bool: Bool)
	is
		expects(not self.baz)
		ensures(my_class.bar == 11)
	do
		if baz then print "Error"
		my_class.bar = 11
	end
end

var first = new MyClass
first.foo(1) # Ok
var second = new MyClass2(first)
second.foo(false) # Ok
