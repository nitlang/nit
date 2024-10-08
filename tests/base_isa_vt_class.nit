# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Alexandre Terrasa <alexandre@moz-code.org>
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

import base_minimal

class A
	type T: Object

	fun foo(o: Object): Bool do
		return o isa T
	end
end

class B
	super A
	redef type T: B
	type U: Bool

	fun bar(o: Object): Bool do
		return o isa U
	end
end

class C
	super B
	redef type T: C
end

var a = new A
assert a.foo(new A)

var b = new B
assert not b.foo(new A)
assert b.foo(new B)
assert b.foo(new C)
assert not b.bar(new B)
assert b.bar(true)

var c = new C
assert not c.foo(new A)
assert not c.foo(new B)
assert c.foo(new C)
assert not c.bar(new B)
assert c.bar(true)

true.output
