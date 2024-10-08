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

class Pair[F, S]
	fun first: F
		do
			return _first
		end
	fun second: S
		do
			return _second
		end
	fun set(f: F, s: S)
		do
			_first = f
			_second =  s
		end
	redef fun to_s: String
		do
			return "{first}:{_second}"
		end
private
	var first: F
	var second: S

	init(f: F, s: S)
		do
			set(f,s)
		end
end

class Pair[E: Comparable, F: Comparable]

	fun >(p: Pair[Comparable, Comparable]): Bool
		do
			return _first > p.first or 
				first == p.first and second > p._second
		end
end

class Pair[E: Int, F: Int]

	fun sum: Int
		do
			return first + _second
		end
end


var p1 = new Pair[Int, Int](5, 4)
var p2 = new Pair[Int, Int](1, 44)
var p3 = new Pair[Int, Int](1, 4)
print(p1)
print(p2)
print(p3)
print(p1 > p2)
print(p2 > p3)
print(p3 > p1)
print(p3.sum)
