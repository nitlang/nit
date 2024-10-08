# This file is part of NIT ( https://nitlanguage.org ).
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


class A
	var val: Int = 0
	fun hop(a: A, b: A, c: A)
	do
		if a.val > val then
			a.hop(b, c, self)
		end
		foo(a, b)
		foo(a, c)
		foo(b, c)
		foo(c, b)
	end
	fun foo(a: A, b: A)
	do
		if a.val > val then
			a.foo(b, self)
		end
		bar(a)
		bar(b)
	end
	fun bar(a: A)
	do
		if a.val > val then
			a.bar(self)
		end
		baz
	end
	fun baz
	do
		i += 1
	end

	var i = 0

	init
	do
	end
end

class B
	super A
	redef fun val: Int
	do
		return 1
	end

	init
	do
	end
end

class C
	super A
	redef fun val: Int
	do
		return 2
	end

	init
	do
	end
end

class D
	super A
	redef fun val: Int
	do
		return 3
	end

	init
	do
	end
end

var a = new A
var b = new B
var c = new C
var d = new D

a.val = 0
b.val = 1
c.val = 2
d.val = 3
var i = 0

var n = 10
if args.not_empty then n = args.first.to_i

while i < 1 << n do
	a.hop(b, c, d)
	i = i + 1
end

print a.i
print b.i
print c.i
print d.i
