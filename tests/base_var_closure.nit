# This file is part of NIT ( http://www.nitlanguage.org ).
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

fun foo(p1: Int)
	!bar(p2: Int) do (p1+p2).output
	#alt1#!bar(p2: Int) do (p1*p2).output
	#alt2#!p1 do abort
do
	bar(p1*10)
	#alt3#var bar: Int = p1
	#alt4#p2.output
end

foo(0)
var a1: Int = 1
foo(2) !bar(a2) do
	#alt5#var a1: Int = 3
	#alt6#var a2: Int = 3
	#alt7#foo(3) !bar(a1) do a1.output
	#alt8#foo(4) !bar(a2) do a1.output
	a1.output
	a2.output
end
var a2: Int = 5
a1.output
a2.output
