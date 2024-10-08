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

import end

interface Object
	fun output is abstract
end

enum Int
	redef fun output is intern
end

enum Bool
	redef fun output is intern
end

fun maybe: Bool do return false

var a: Object
#alt1#a.output
a = 1
a.output

var b = a
b.output

var c: Object
if maybe then
	c = 2 #alt2# #alt4#
else
	c = 2 #alt3# #alt4#
end
c.output

var d: Object
if maybe then
	d = 3
	d.output
end
#alt5#d.output

var e: Object
do
	e = 4
	e.output
end
e.output

var f: Object
while maybe do
	f = 5
	f.output
end
#alt6#f.output
