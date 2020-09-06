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

# Verification if it's possible to add a other contract type on existing method.
# Only the expect contract display a warning when none expect contract are not defined at the introduction

class MyClass
	fun foo(x: Int)
	is
		expect(x == 1)
	do
		x=1
	end

	fun bar(x: Float): Bool
	is
		ensure(result)
	do
		return true
	end
end

class MyClass2
	super MyClass

	redef fun foo(x: Int)
	is
		ensure(x == 0)
	do
		x=0
	end

	redef fun bar(x: Float)
	is
		expect(x == 1)
	do
		return true
	end
end

var first = new MyClass2
first.foo(1)
first.bar(1.0)
first.foo(0)# Fail because the expect is x == 1
