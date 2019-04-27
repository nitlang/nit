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

class MyClass
	fun foo(x: Int, y: Float)is abstract, expects(x != 10)
end

abstract class AbstractClass
	fun bar(x: Int, y: Float)is abstract, expects(x >= 1), ensures(y == 10.0)
end

interface Interface
	fun baz(x: Int, y: Float)is abstract, ensures(y <= 10.0, y == 42.0)
end


class MySubClass
	super MyClass
	super Interface
	super AbstractClass

	redef fun foo(x: Int, y: Float)
	do
		if x == 10 then print "Error"
	end

	redef fun baz(x: Int, y: Float)
	do

	end

	redef fun bar(x: Int, y: Float)
	do
		if x < 1 then print "Error"
	end
end


var first = new MySubClass
first.foo(11,2.0) # Ok
first.bar(1,10.0) # Ok
first.baz(9,42.0) # Fail y > 10
