# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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
	fun foo do 0.output
	init do end
end
class C
	super B
	fun bar do 1.output
	init do end
end


#alt5# var b: A = new B
var a: A = new C
#alt5# a = b
#alt6# a = new A
if a isa B then
	a.foo
	if a isa C then
		a.bar
	end
#alt1#	a.bar
	a.foo
else
#alt2#	a.foo
end
#alt3#a.foo

if a isa B and a == a then
	a.foo
end

if a isa B or a == a then
#alt4#	a.foo
end

if not (not a isa B or a == a) then
	a.foo
end

if a isa B implies a == a then
#alt7#	a.foo
end

if not (a isa B implies a == a) then
	a.foo
end

assert a isa B
a.foo
