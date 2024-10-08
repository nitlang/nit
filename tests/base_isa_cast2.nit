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
var a0: A = new B
var a: A = new B
if a isa B then
	a.foo(1)
	a = new B
	a.foo(2)
	a = new A
	#alt1#a.foo(-1)
else
#alt2#a.foo(-2)
end
#alt3#a.foo(-3)

if not a isa B then
	#alt4#a.foo(-4)
	a = new B

	a.foo(3)
end
a.foo(4)
a = a0
while a isa B do
	a.foo(5)
	a = new A
	#alt5#a.foo(-5)
end
#alt6#a.foo(-6)

while not a isa B do
	#alt7#a.foo(-7)
	a = new B

	a.foo(6)
end
#alt8#a.foo(7)
