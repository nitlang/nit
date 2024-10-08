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
	var foo: Int = 1
	fun +(i: Int): A do return new A
	redef fun output do 1.output
end

fun unknown: nullable A do return new A

var a = null
#alt1#a.output
#alt2#a._foo.output
#alt3#a._foo = 5
#alt4#a += 5

var b: nullable A
b = null
#alt5#b.output
#alt6#b._foo.output
#alt7#b._foo = 5
#alt8#b += 5

var c = unknown
if c == null then
#alt9#	c.output
#alt10#	c._foo.output
#alt11#	c._foo = 5
#alt12#	c += 5
else
	c.output
	c._foo.output
	c._foo = 5
	c += 5
end
