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

# Verification if it's possible to define a simple expect contract and remove it by inheritence.

class A
	fun foo(i: Int)
	is
		expect(i > 10)
	do
		print "Foo of A"
	end
end

class B
	super A

	redef fun foo(i: Int)
	is
		no_contract
	do
		print "Foo of B"
	end
end

var a = new A
a.foo(20)
var b = new B
b.foo(5)
