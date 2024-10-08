# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

import c

class Bitarray

	var narr: CByteArray

	init do
		for x in [0 .. narr.length[ do narr[x] = 0xFFu8
	end

	fun [](pos: Int): Bool do
		pos -= 2
		return (narr[pos / 8] & (1u8 << (7 - pos % 8))) != 0u8
	end

	fun []=(pos: Int, val: Bool) do
		pos -= 2
		if val then
			narr[pos / 8] |= 1u8 << (7 - pos % 8)
		else
			narr[pos / 8] &= 0xFFu8 - (1u8 << (7 - pos % 8))
		end
	end
end

fun nsieve(n: Int): Int
do
	var count = 0
	var b_arrsz = ((n - 1).to_f / 8.0).ceil.to_i
	var bitarr = new Bitarray(new CByteArray(b_arrsz))
	for i in [2 .. n[ do
		# If self is already false, then no need to check for multiples
		if not bitarr[i] then continue
		count += 1
		var j = i * i
		while j < n do
			bitarr[j] = false
			j += i
		end
	end
	return count
end

fun test(n: Int)
do
	var m = 10000 << n
	print("Primes up to {m} {nsieve(m)}")
end

var n = 2
if args.length == 1 then
	n = args.first.to_i
end

test(n)
if n >= 1 then
	test(n-1)
end
if n >= 2 then
	test(n-2)
end
