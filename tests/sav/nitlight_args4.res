# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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
end

enum Bool
end

enum Int
	fun output is intern
end

class A
	init do 5.output
	fun run do 6.output
end

class B
	var val: Int
	init do 7.output
	fun run do val.output
end

class C
	var val1: Int
	var val2: Int = 10
end

fun foo do 2.output
fun bar(i: Int) do i.output
fun baz: Int do return 4

1.output
foo
bar(3)
baz.output

var a = new A
a.run

var b = new B(8)
b.run

var c = new C(9)
c.val1.output
c.val2.output
