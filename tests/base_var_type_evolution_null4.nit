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

fun rand: Bool do return true

fun eat_na(a: nullable A) do if a == null then 0.output else 1.output
fun eat_a(a: A) do 2.output

fun get_a: nullable A do return new A
fun get_na: nullable A do return null

var a = get_na
while a == null do
	eat_na(a)
	#alt1#eat_a(a)
	#alt2#if rand then break
	a = new A
end
eat_na(a)
eat_a(a)

'\n'.output

a = get_a
loop
	eat_na(a)
	if rand and a != null then
		eat_a(a)
		break
	end
	#alt3#break
end
eat_na(a)
eat_a(a)

a = get_a
do
	eat_na(a)
	if rand and a != null then
		eat_a(a)
		break label doblock
	end
	abort #alt4#
end label doblock
eat_na(a)
eat_a(a)

