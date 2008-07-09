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

class A
	type T: A
	type U: B
	meth foo(a: T) do a.output
	meth bar(b: U) do b.output
	meth baz(i: Int) do i.output
	redef meth output do 'A'.output

	init do end
end

class B
special A
	redef type T: B
	redef type U: Int
	redef meth foo(a: T) do a.output
	redef meth bar(b: U) do b.output
	redef meth baz(i: Int) do i.output
	redef meth output do 'B'.output

	init do end
end

redef class Int
special B
	redef type T: Int
	redef meth foo(a: T) do a.output
	redef meth bar(b: U) do b.output
	redef meth output is intern
end

var a = new A
var b = new B
var ab: A = b
var i = 5
var ai: A = i
var bi: B = i

a.foo(a)
a.foo(b)
a.foo(i)
a.bar(b)
a.bar(i)
a.baz(i)
#alt1#ab.foo(a) # covariant
ab.foo(b)
ab.foo(i)
#alt2#ab.bar(b) # covariant
ab.bar(i)
ab.baz(i)
#alt3#ai.foo(a) # covariant
#alt4#ai.foo(b) # covariant
ai.foo(i)
#alt5#ai.bar(b) # covariant
ai.bar(i)
ai.baz(i)

b.foo(b)
b.foo(i)
b.bar(i)
b.baz(i)
#alt6#bi.foo(b) # covariant
bi.foo(i)
bi.bar(i)
bi.baz(i)

i.foo(i)
i.bar(i)
i.baz(i)
