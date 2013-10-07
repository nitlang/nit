# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

var i = 1
var j = 1
var k = 2
var s = "Maison"
var t = "Maison"
var u = "Arbre"
var a: Object
var b: Object
print("* literal int")
print(1 == 1)
print(not 1 != 1)
print(not 1 == 2)
print(1 != 2)
print("* int variable")
print(i == j)
print(j == i)
print(i != k)
print(i == 1)
print(i != 2)

print("* same type object")
print(s == s)
a = s
print(a == s)
a = s
print(s == t)
b = t
print(b == s)
print(not s == u)
b = u
print(not b == s)

print("* different type object")
a = s.chars.iterator
print(not a == s)
a = 5
print(not a == s)

print("* boxed native")
a = i
b = i
print(a == i)
print(b == i)
print(b == a)
a = 5
b = 5.ascii
print(not a == 5.ascii)
print(not b == 5)
print(not a == b)
