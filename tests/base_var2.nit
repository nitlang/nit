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

import array

fun foo(p1: Int)
do
	var a1: Int = p1 + 1
	#alt1#var p1: Int = a1 + 2
	p1.output
	a1.output
end

#alt9#fun bar(p1: Int, p1: Int) do p1.output

foo(0)
var a1: Int = 10
do
	var a2: Int = 11
	#alt2#var a1: Int = 12
	a1.output
	a2.output
end
#alt3#var a1: Int = 13
a1.output
for a3 in [30, 31] do
	var a2: Int = 20
	#alt4#var a1: Int = 1
	#alt5#var a3: Int = 1
	a1.output
	a2.output
	a3.output
	#alt6#for a2 in [400, 500] do a2.output
end
var a2: Int = 40
a1.output
a2.output
#alt7#a3.output
#alt8#p1.output
