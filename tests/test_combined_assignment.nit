# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

class A
	var a: Int = 0#alt1#
	#alt1#var a: Object = 0
	init do end
	fun foo
	do
		a += 2
	end

	fun next: Int
	do
		a += 1
		return a
	end

	fun [](a: Int): Int do return a
	fun []=(a: Int, b: Int) do print "{a} {b}"
end

redef class Int
	fun sum(o: Int): Int do 
		print "{self} + {o} = {self + o}?"
		return self + o
	end
	fun sum=(o: Int, r: Int) do print "{self} + {o} = {r}!"
end

var a = new A
a.a = 1
print a.a
a.foo
print a.a
a.a += 3
print a.a

a[1] += 2

a.next.sum(a.next) += 0 # Test ugly side effects

print a.a
