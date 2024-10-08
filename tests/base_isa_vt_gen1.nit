# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Alexandre Terrasa <alexandre@moz-code.org>
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

import base_minimal

class Int end
class String end

class Triple[X, Y, Z]
end

class A[T, U]
	type V: nullable Object

	fun foo: Triple[T, U, V] do
		var triple = new Triple[T, U, V]
		assert triple isa Triple[T, U, V] # true
		return triple
	end

	fun bar(e: T) do
		assert e isa V
	end
end

class B[E] super A[E, E]
	redef type V: E
end

class C[E] super A[E, E]
	redef type V: B[E]
end

class D[E] super A[E, E]
	type W: E
	redef type V: W
end


var a = new A[String, Int]
assert a.foo isa Triple[String, Int, nullable Object]

var b = new B[String]
assert b.foo isa Triple[String, String, String]

var c = new C[String]
assert c.foo isa Triple[String, String, B[String]]

var d = new D[String]
assert d.foo isa Triple[String, String, String]

true.output
