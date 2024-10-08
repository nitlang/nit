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

# Test the creation and usage of invariant contracts with inheritance.

class A
	invariant(bar >= 10)

	var bar: Int
end

class B
	super A

	fun set_bar(x: Int) do
		print x
		bar = x
	end
end

var test = new B(10)
test.set_bar(11) # OK
test.set_bar(2) # Fail broke invariant bar >= 10
