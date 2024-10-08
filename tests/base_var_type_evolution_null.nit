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
end

class B
	super A
end

fun rand: Bool do return true

fun eat_na(a: nullable A) do 'a'.output
fun eat_a(a: A) do 'A'.output
fun eat_nb(b: nullable B) do 'b'.output
fun eat_b(b: B) do 'B'.output

var a: nullable Object = null
a = new B
if rand then
	a = null #alt1#
	#alt2#a = new A
	#alt3#a = new B
end
eat_na(a)
#alt2#eat_a(a)
eat_nb(a)
#alt1#eat_b(a)
#alt3#eat_b(a)
#alt4#eat_b(a)
'\n'.output

# a is 'nullable B' here
if rand then
	a = new A
end
eat_na(a)
#alt5#eat_a(a)
#alt6#eat_nb(a)
'\n'.output
# a is 'nullable A' here

if rand then
	a = new B
else
	a = new B
	#alt7#a = new A
end
eat_b(a)
'\n'.output

