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

# Verification if it's possible to define a simple invariant contract and remove it by inheritence.

class A
	invariant(i > 10)

	var i: Int

	fun foo do end
end

class B
	super A
	no_contract
end

class C
	super B
	invariant(i < 10)
end

var a = new A(11)
a.foo
var b = new B(9)
b.foo
var c = new C(6)
c.foo
var c2 = new C(10)
c2.foo
