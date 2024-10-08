# This file is part of NIT ( https://nitlanguage.org ).
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

redef class Int
	fun foo do print self
end

class A
	var x: Int
end

class B
	var a: nullable A = null
end

class C
	var x: Int
	var c: nullable C = null
end

class D
	var x: nullable Int
	var d: nullable D = null
end

var b = new B

#alt1#b.a?.x.foo

var a = new A(10)

b.a = a
print "b.a.x: {b.a?.x or else "nothing"}"

var c1 = new C(1)
var c2 = new C(10)
var c3 = new C(100)
c1.c = c2
c2.c = c3

print c1.c?.c?.x or else "null"
print c1.c?.c?.c or else "null"

var d1 = new D(1)
var d2 = new D(10)
var d3 = new D(null)

d1.d = d2
d2.d = d3

print d1.d?.x or else "null"
print d1.d?.d?.x or else "null"
