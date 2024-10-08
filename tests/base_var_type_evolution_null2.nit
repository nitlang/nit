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

fun eat_na(a: nullable A) do 'a'.output
fun eat_a(a: A) do 'A'.output

var a: nullable Object
a = null
if rand then
	a = new A
end

if a == null then
	eat_na(a)
	#alt1#eat_a(a)
	'\n'.output
	abort#alt2#
end
eat_na(a)
eat_a(a)
'\n'.output

