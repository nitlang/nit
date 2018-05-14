# This file is part of NIT ( http://www.nitlanguage.org ).
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

class Bitarray

	var narr: Bytes

	init do
		for x in [0 .. narr.length[ do narr[x] = 0xFF
	end

	fun [](pos: Int): Bool do
		pos -= 2
		return (narr[pos / 8] & (1 << (7 - pos % 8))) != 0
	end

	fun []=(pos: Int, val: Bool) do
		pos -= 2
		if val then
			narr[pos / 8] |= 1 << (7 - pos % 8)
		else
			narr[pos / 8] &= 0xFF - (1 << (7 - pos % 8))
		end
	end
end

fun nsieve(n: Int): Int
do
	var count = 0
	var b_arrsz = ((n - 1).to_f / 8.0).ceil.to_i
	var bitarr = new Bitarray(new Bytes(new CString(b_arrsz), b_arrsz, b_arrsz))
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
