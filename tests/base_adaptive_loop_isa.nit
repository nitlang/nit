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

import core::kernel


interface A
end

class B
	super A
	var next: A
end

class C
	super A
end

class D
	super A
end

fun foo(a: A): Int
do
	var i = 0
	if a isa B then while i < 10 do
		i += 1

		if a isa C then return i
		if not a isa B then return -i
		a = a.next #alt1#
	end
	return i
end

var c = new C
var b = new B(c)
var bd = new B(new D)
foo(c).output
foo(b).output
foo(bd).output
