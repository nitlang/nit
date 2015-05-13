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

# Mix of all things cryptography-related
module crypto

redef class Char
	# Rotates self of `x`
	#
	# NOTE: works on letters only
	#
	#     assert 'x'.rot(6) == 'd'
	#     assert 'T'.rot(15) == 'I'
	#     assert '1'.rot(10) == '1'
	#     assert '$'.rot(10) == '$'
	#     assert 'z'.rot(-2) == 'x'
	fun rot(x: Int): Char do
		if not is_letter then return self
		x = x % 26
		if x < 0 then x += 26
		var up = false
		var val = ascii
		if is_upper then
			up = true
			val += 32
		end
		val += x
		if val > 122 then val -= 26
		if up then val -= 32
		return val.ascii
	end
end

redef class String
	# Performs a Rotation of `x` on each letter of self
	#
	# Works by replacing every character in `self` by its
	# rotated char.
	#
	# Say we have a rotation of `3` (Caesar rotation, for
	# culture) for a string : "aybabtu"
	#
	# a, rotated by 3 becomes d
	# y, rotated by 3 becomes b
	# b, rotated by 3 becomes e
	# t, rotated by 3 becomes w
	# u, rotated by 3 becomes x
	#
	# We then replace every letter in our original string by
	# their rotated representations, therefore yielding : "dbedewx"
	#
	#     assert "All your base are belong to us".rot(13) == "Nyy lbhe onfr ner orybat gb hf"
	#     assert "This is no moon.".rot(4).rot(22) == "This is no moon."
	#
	# NOTE : Works on letters only
	# NOTE : This cipher is symmetrically decrypted with an `x` of 26-`x`
	fun rot(x: Int): String do
		var rot = x % 26
		if rot < 0 then rot += 26
		var d = new FlatBuffer.with_capacity(length)
		for i in chars do
			d.add i.rot(rot)
		end
		return d.to_s
	end

	# Returns a rail-fence cipher from `self` with `depth` rails
	#
	# Rail works by drawing a zig-zag pattern on `depth` rails.
	#
	# Say we have "fuckingbehemoth".railfence(4)
	#
	# This happens in-memory:
	#
	# ~~~raw
	# f.....g.....o..
	# .u...n.b...m.t.
	# ..c.i...e.e...h
	# ...k.....h.....
	# ~~~
	#
	# Therefore, yielding the ciphertext : "fgounbmtcieehkh"
	#
	#     assert "fuckingbehemoth".railfence(4) == "fgounbmtcieehkh"
	fun railfence(depth: Int): String do
		var lines = new Array[FlatBuffer].with_capacity(depth)
		var up = false
		for i in [0..depth[ do
			lines[i] = new FlatBuffer.with_capacity(length)
		end
		var curr_depth = 0
		for i in chars do
			for j in [0..depth[ do
				if j == curr_depth then
					lines[j].add i
				else
					lines[j].add '.'
				end
			end
			if up then
				curr_depth -= 1
			else
				curr_depth += 1
			end
			if curr_depth == 0 then
				up = false
			end
			if curr_depth == (depth - 1) then
				up = true
			end
		end
		var r = new FlatBuffer.with_capacity(length)
		for i in lines do
			r.append i.to_s.replace(".", "")
		end
		return r.to_s
	end

	# Transforms a rail-fence-encrypted String to its original
	#
	#     assert "fgounbmtcieehkh".unrail(4) == "fuckingbehemoth"
	fun unrail(depth: Int): String do
		var dots = "." * length
		var arr = new FlatBuffer.from(dots)
		var start = 0
		var paces = depth.unrail_paces
		for i in [0..depth[ do
			var lp = paces[i].first
			var rp = paces[i].second
			var pos = i
			var l = true
			while pos < length do
				arr[pos] = chars[start]
				if l then
					pos += lp
					l = false
				else
					pos += rp
					l = true
				end
				start += 1
			end
		end
		return arr.to_s
	end
end

redef class Int
	# Generates the paces for each depth.
	#
	# Each entry of the returned array is a couple of the first pace
	# and the second one, they are alternated when deciphering a rail-encrypted string.
	#
	# Say we have the encrypted string "fgounbmtcieehkh" on 4 rails
	#
	# To find the distance between each character on the original railed
	# string, we need to compute the extremes.
	#
	# The extremes always have a distance of `depth - 1`, multiplied by 2, no pairing.
	#
	# In the example, that would be : [(4 - 1) * 2, (4 - 1) * 2] => [6,6]
	#
	# For every rail in-between, the first distance is the largest absolute value
	# of the difference between the current depth and the extremes, multiplied by 2.
	#
	# Its pair is the distance of maximum and the distance yielded by the previous
	# calculation.
	#
	# In our example, that would be :
	#
	# Maximums : (4 - 1) * 2 = 3 * 2 => [6,6]
	# In between : Distance for depth 2 : max(2 - 1, 4 - 2) => 2
	# The calculation yields the couple [(2 * 2), 6 - 4] => [4, 2]
	# The symmetric couple is reversed : [2, 4]
	#
	# In fine, the example yields the array : [[6,6], [4,2], [2,4], [6,6]]
	#
	# In the end, our string is read using the generated array
	#
	# SEE: `String::unrail` for how the array is used
	private fun unrail_paces: Array[Couple[Int, Int]] do
		var ret = new Array[Couple[Int,Int]].with_capacity(self)
		var extremes = new Couple[Int, Int]((self - 1) * 2, (self - 1) * 2)
		for i in [0..self[ do
			ret.add extremes
		end
		var mid = ((self.to_f)/2.0).floor.to_i
		for i in [1 .. mid[ do
			var rd = i + 1
			var lodepth = self - rd
			var hidepth = (rd - self).abs
			var dd: Int
			if hidepth > lodepth then
				dd = hidepth * 2
			else
				dd = lodepth * 2
			end
			var cp = new Couple[Int, Int](dd, extremes.first-dd)
			var ccp = new Couple[Int, Int](extremes.first - dd, dd)

			ret[i] = cp
			ret[self - rd] = ccp
		end
		if not self.is_even then
			ret[mid] = new Couple[Int, Int](extremes.first/2, extremes.first/2)
		end
		return ret
	end
end
