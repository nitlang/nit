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

# Verification if it's possible to define a simple expects contract.

class MyClass
	fun foo(x: Int)
	is
		expect(x > 0)
	do
		if x <= 0 then print "FAIL"
	end
end

class MyClass2
	fun foo(bool: Bool)
	is
		expect(not bool)
	do
		if bool then print "FAIL"
	end
end

var first = new MyClass
first.foo(1) # OK
var second = new MyClass2
second.foo(false) # OK
