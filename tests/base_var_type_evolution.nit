# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2010 Jean Privat <jean@pryen.org>
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
	fun a do 'A'.output
end

class B
	super A
	fun b do 'B'.output
end

class C
	super A
	fun c do 'C'.output
end

fun rand: Bool do return true

var a = new A
if rand then
	a = new B
end
a.a
#alt1#a.b
'\n'.output

a = new B
if rand then
	a = new B
	#alt2#a = new C
	#alt3#a = new A
end
a.a
a.b
'\n'.output

a = new A
if rand then
	a = new B
	#alt4#a = new C
else
	a = new B
	#alt5#a = new C
end
a.a
a.b
'\n'.output

a = new A
if rand then
	a = new B
else
	a = new C
	abort#alt6#
end
a.a
a.b
#alt7#a.c
'\n'.output

