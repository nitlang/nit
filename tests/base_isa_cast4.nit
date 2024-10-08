# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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
	init do end
end

class B
	super A
	fun foo(i: Int) do i.output
	init do end
end

fun maybe: Bool do return true

var a: A = new B

assert a isa B
a.foo(1)
if maybe then
	a = new A
else
	a = new A
end
#alt1#a.foo(1)

a = new B

a.foo(2)
if maybe then
else
	a = new A
end
#alt2#a.foo(2)

a = new B

a.foo(3)
if maybe then
	a = new A
else
end
#alt3#a.foo(3)

a = new B

a.foo(4)
if maybe then
else
end
a.foo(4)

a = new B

a.foo(5)
if maybe then
	a = new A
end
#alt4#a.foo(5)

a = new B

a.foo(6)
if maybe then
end
a.foo(6)

a = new B

a.foo(7)
while not maybe do
	#alt5#a = new A
end
a.foo(7)

a = new B

a.foo(8)
while not maybe do
end
a.foo(8)

