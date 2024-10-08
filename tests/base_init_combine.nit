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

import kernel

class A
	init do 1.output
end

class B
	init do 2.output
end

class C
	super A
	super B

	init do 3.output
end

class D
	super A
	super B

	var i: Int
end

class E
	super A
	super B

	var i: Int
	init do
		i.output
	end
end

class F
	super E
	#alt1# var z: Int
end

var a = new A
var b = new B
var c = new C
var d = new D(4)
var e = new E(5)
var f = new F(6)
