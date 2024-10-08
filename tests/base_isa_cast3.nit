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
	fun bar: Bool do return true
	init do end
end

var a: A = new B

if a isa B then
	a.foo(1)
else
	#alt1#a.foo(-1)
end
#alt2#a.foo(-2)

if not a isa B then
	#alt3#a.foo(-3)
else
	a.foo(2)
end
#alt4#a.foo(-4)

if a isa B and false then
	a.foo(3)
else
	#alt5#a.foo(-5)
end
#alt6#a.foo(-6)

if not a isa B or true then
	#alt7#a.foo(-7)
else
	a.foo(3)
end
#alt8#a.foo(-8)

if a isa B and a.bar then
	a.foo(4)
end

if not a isa B or not a.bar then
	#alt9# a.foo(-9)
else
	a.foo(5)
end

if not (not a isa B or not a.bar) then
	a.foo(6)
end

