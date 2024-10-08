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

import end

interface Object
end

class Int
end

class Bool
end

class Char
end

class A[E, F]
	type U: F

	fun e: E is abstract
	fun f: F is abstract
	fun u: U is abstract

	fun test1(a: A[E, F], ax: A[E, A[U, Int]])
	do
		__debug__ type E: self.e # E -> Object
		__debug__ type F: self.f # F -> Object
		__debug__ type U: self.u # U -> Object

		__debug__ type E: a.e # E -> Object
		__debug__ type F: a.f # F -> Object
		__debug__ type F: a.u # F -> Object

		__debug__ type A[U, Int]: ax.u # A[U, Int] -> A[Object, Int]
	end
end

class B[G]
	super A[Int, G]
	fun g: G is abstract
end

class C[H: Char]
	super B[Bool]

	type W: B[H]

	fun test3(b1: B[H], b2: B[W], w: W)
	do
		__debug__ type Int: self.e
		__debug__ type U: self.u

		__debug__ type H: b1.u

		__debug__ type W: b2.u

		__debug__ type H: w.u
	end
end
