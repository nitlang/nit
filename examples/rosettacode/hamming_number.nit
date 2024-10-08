# This file is part of NIT ( https://nitlanguage.org ).
# This program is public domain
# Copyright 2014 amineorion <amineorion@gmail.com>
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
#
# Task: Hamming numbers
# SEE: <http://rosettacode.org/wiki/Hamming_numbers>
#
# Version that don't support 1,000,000th position of Hamming number yet.

module hamming_number

class HammingTriple
	super Comparable

	var a: Int
	var b: Int
	var c: Int

	redef type OTHER: HammingTriple

	init(a: Int, b: Int, c: Int)
	do
		self.a = a
		self.b = b
		self.c = c
	end

	redef fun >(other: OTHER): Bool
	do
		if a > other.a and b > other.b and c > other.c then
			return true
		end

		if a < other.a and b < other.b and c < other.c then
			return false
		end

		if self == other then
			return false
		end

		var log1 = log
		var log2 = other.log

		if not log1.is_approx(log2, 0.000001) then
			return log1 > log2
		end
		return false
	end

	fun log: Float
	do
		return a.to_f * 2.0.log + b.to_f * 3.0.log + c.to_f * 5.0.log
	end

	redef fun ==(o)
	do
		return o isa HammingTriple and a == o.a and b == o.b and c == o.c
	end

	fun calcul: Int
	do
		return (2 ** a) * (3 ** b) * (5 ** c)
	end

	redef fun to_s: String
	do
		return "a: {a}, b: {b}, c: {c}"
	end
end

class HammingArray
	super Array[HammingTriple]

	fun get_min: HammingTriple
	do
		var min = self[0]
		var min_index = 0
		for i in [1..length[ do
			if min > self[i] then
				min = self[i]
				min_index = i
			end
		end
		remove_at(min_index)
		return min
	end
end

fun hamming(limit_position: Int): Int
do
	var hamming_triple = new HammingArray
	hamming_triple.add(new HammingTriple(0, 0, 0))
	loop
		var current = hamming_triple.get_min
		limit_position -= 1
		if limit_position == 0 then
			return current.calcul
		end

		if current.a == 0 and current.b == 0 then
			hamming_triple.add(new HammingTriple(current.a, current.b, current.c + 1))
		end

		if current.a == 0 then
			hamming_triple.add(new HammingTriple(current.a, current.b + 1, current.c))
		end

		hamming_triple.add(new HammingTriple(current.a + 1, current.b, current.c))
	end
end

for i in [1..20] do
	print "{i}: {hamming(i)}"
end

print "1691: {hamming(1691)}"
