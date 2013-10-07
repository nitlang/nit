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
var a: Object
var b: Object

print("* literal int")
print(1 is 1)
print(1 is 1)
print(not 1 is 2)
print(not 1 is 2)
print("* int variable")
print(i is j)
print(j is i)
print(not i is k)
print(i is 1)
print(not i is 2)

print("* same type object")
print(s is s)
a = s
print(s is a)
a = s
print(not s is t)
b = t
print(not s is b)
print(not s is b)

print("* different type object")
a = s.chars.iterator
print(not s is a)
a = 5
print(not s is a)
print(not s is 5)

print("* boxed native")
a = i
b = i
print(i is a)
print(b is i)
print(b is a)
a = 5
b = 5.ascii
print(not 5 is 5.ascii)
print(not a is 5.ascii)
print(not 5 is b)
print(not a is b)

print("* null")
var a1: nullable Object = null
var b1: nullable Object = null
print(not null is s)
print(not s is null)
print(not a1 is s)
print(not s is a1)
print(null is null)
print(b1 is null)
print(b1 is a1)
print(not i is null)
print(not i is a1)
print(not null is i)
print(not a1 is i)
