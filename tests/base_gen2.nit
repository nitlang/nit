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

class Int
	redef fun output is intern
end

class A
	redef fun output do 1.output
end

class B[E]
	redef fun output do _e.output
	var e: E
	init(e: E) do _e = e
end

class C[F, G]
	redef fun output
	do
		_f.output
		_g.output
	end
	var f: F
	var g: G
	init(f: F, g: G)
	do
		_f = f
		_g = g
	end
end

var a = new A
a.output

var b = new B[Int](2)
b.output

var c = new C[Int, A](2, a)
c.output

#alt1#var d = new A[Int]
#alt2#var d = new B
#alt3#var d = new B[Int, Int]
#alt4#var d = new C
#alt5#var d = new C[Int]

