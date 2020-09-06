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

# Check if the expects contract is redef with `and`

class MyClass
	fun foo(x: Int, y: Float)
	is
		ensure(x > 0)
	do
		print "Good"
	end
end

class SubClass
	super MyClass

	redef fun foo(x: Int, y: Float)
	is
		ensure(y == 1.2)
	do
		print "Good"
	end
end

var first = new MyClass
first.foo(1,1.2) # OK
var sub = new SubClass
sub.foo(1,1.2) # OK
sub.foo(1,1.0) # Fail