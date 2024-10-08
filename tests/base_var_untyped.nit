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

fun rand: Bool do return true

var a
#alt1#a.output
a = 1
(a*10).output
a = 2
(a*10).output
a = false
(not a).output

var b1
var b2
var b3
if rand then
	b1 = 3
	b2 = 4
	b3 = 5
else
	b1 = -3
	b2 = true
end
(b1*10).output
#alt2#b2.output
#alt3#b3.output
#alt4#b2 += 1

var c
while rand do
	c = 4
	#alt5#c = b2
	#alt6#c = b3
	(c*10).output
	if rand then break
end
#alt7#c.output

var d
#alt8#d = fail
#alt8#d.output
