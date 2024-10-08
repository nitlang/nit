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
module contracts_invariant_inheritance_multi

# Test the creation and usage of invariant contracts with multiple inheritance.

class A
	invariant(bar >= 10)

	var bar: Int
end

class B
	invariant(baz <= 2.0)

	var baz: Float
end

class C
	super A
	super B

	autoinit bar=, baz=

	fun set_bar_baz(x: Int, y: Float)
	do
		print x
		bar = x
		print y
		baz = y
	end
end

var test = new C(10, 2.0)
test.set_bar_baz(16, 1.5)# Ok
test.set_bar_baz(1, 3.8)# Fail
