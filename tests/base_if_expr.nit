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
	redef fun output do 'A'.output
end

fun max(a: Int, b: Int): Int do return if a > b then a else b

var x = if true then 1 else 0
x.output

max(1,2).output
max(2,2).output
max(2,1).output

var o: Object = 1
var y = if true then new A else o
y.output
var y2 = if true then o else new A
var y3 = if true then null else new A
var y4 = if true then new A else null
#alt1# var y5 = if true then new A else 1

var z = 0
while z <=4 do
	var i = if z < 2 then
		if z == 0 then 'a'
		else 'b'
	else
		if z == 2 then 'c'
		else 'd'
	i.output
	z = z + 1
end
'\n'.output

