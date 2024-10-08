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

class Ferme[V]
end

class Animal end
class Canard super Animal end

class A[T, U]
	fun foo(o: Object): Bool do
		return o isa T
	end

	fun bar(o: Object): Bool do
		return o isa U
	end
end

class B[U]
	super A[U, Object]
end

class C end

var x = new Canard
var y = new Ferme[Canard]

var a = new A[Animal, C]
var b = new B[Canard]
var c = new B[Ferme[Canard]]

assert a.foo(x)			# true
assert not a.bar(x)		# false
assert not a.foo(y)		# false
assert not a.bar(y)		# false
assert a.bar(new C)		# true
assert b.foo(x)			# true
assert b.bar(x)			# true
assert not b.foo(y)		# false
assert b.bar(y)			# true
assert b.bar(new C)		# true

true.output
