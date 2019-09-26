# This file is part of NIT ( http://www.nitlanguage.org ).
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

import functional

redef class Object
	fun toto(x: Int): Int
	do
		return x + 1
	end
end

redef class Int
	redef fun toto(x) do return x + self

	fun mult_by(x: Int): Int do return x * self
end

class A
	fun fun1: String
	do
		return "in A::fun1"
	end
end

class B
	super A

	redef fun fun1
	do
		return "in B::fun1"
	end
end

class Counter
	var x = 0
	fun incr do x += 1
end

class C[E]
	var x: E
	redef fun to_s
	do
		if x != null then
			return "x is {x.as(not null)}"
		end
		return "x is null"
	end
end

var a = new A
var b: A = new B

var f1 = &a.fun1
print f1.call	# "in A::fun1"

var f2 = &b.fun1
print f2.call	# "in B::fun1"

var f3 = &10.mult_by
print f3.call(10)	# 100

var f4 = &f2.call
print f4.call	# "in B::fun1"

var f5: Fun0[Object] = &f4.call
print f5.call
print f5.call

print((&10.toto).call(100))	# 110
print((&"allo".toto).call(2))	# 3

var cnt = new Counter
var p1 = &cnt.incr
var ps = [p1,p1,p1,p1,p1]

for p in ps do p.call
print cnt.x	# 5

var c1 = new C[nullable Object](null)
var c2 = new C[nullable Int](null)

var f6 = &c1.to_s
var f7 = &c2.to_s

print f6.call	# "x is null"
print f7.call	# "x is null"

c1.x = "test"
c2.x = 100

print f6.call	# "x is test"
print f7.call	# "x is 100"
