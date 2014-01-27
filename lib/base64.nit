# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Offers the base 64 encoding and decoding algorithms
module base64

redef class String

	# Alphabet used by the base64 algorithm
	private fun base64_chars : String
	do
		return "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
	end
	private fun inverted_base64_chars : HashMap[Char,Int]
	do
		var inv_base64_chars = new HashMap[Char,Int]
		for k in [0..base64_chars.length[ do
			inv_base64_chars[ base64_chars.chars[k] ] = k
		end
		return inv_base64_chars
	end

	# Encodes the receiver string to base64.
	# By default, uses "=" for padding.
	fun encode_base64 : String do return encode_base64_custom_padding( '=' )
	fun encode_base64_custom_padding( padding : Char ) : String
	do
		var base64_chars = once base64_chars
		var length = length

		var steps = length / 3
		var chars_in_last_step = length % 3
		var result_length = steps*4
		if chars_in_last_step > 0 then result_length += 4
		var result = (padding.to_s*result_length).to_cstring

		var mask_6bit = 63

		for s in [0..steps[ do
			var e = 0
			for ss in [0..3[ do
				e += self.chars[s*3+ss].ascii.lshift((2-ss)*8)
			end
			for ss in [0..4[ do
				result[s*4+3-ss] = base64_chars.chars[ e.rshift(ss*6).bin_and( mask_6bit ) ]
			end
		end

		if chars_in_last_step == 1 then
			var e = self.chars[length-1].ascii.lshift(16)
			for ss in [0..2[ do
				result[steps*4+1-ss] = base64_chars.chars[ e.rshift((ss+2)*6).bin_and( mask_6bit ) ]
			end
		else if chars_in_last_step == 2 then
			var e = self.chars[length-2].ascii.lshift(16) +
				self.chars[length-1].ascii.lshift(8)
			for ss in [0..3[ do
				result[steps*4+2-ss] = base64_chars.chars[ e.rshift((ss+1)*6).bin_and( mask_6bit ) ]
			end
		end

		return result.to_s
	end

	# Decodes the receiver string from base64.
	# By default, uses "=" for padding.
	fun decode_base64 : String do return decode_base64_custom_padding( '=' )
	fun decode_base64_custom_padding( padding : Char ) : String
	do
		var inverted_base64_chars = once inverted_base64_chars
		var length = length
		assert length % 4 == 0 else print "base64::decode_base64 only supports strings of length multiple of 4"

		var steps = length / 4
		var result_length = steps*3

		var padding_begin = padding.search_index_in( self, 0 )
		var padding_count : Int
		if padding_begin == -1 then
			padding_count = 0
		else
			padding_count = length - padding_begin
			steps -= 1
			result_length -= padding_count
		end

		var result = ("#"*result_length).to_cstring

		var mask_8bit = 255

		for s in [0..steps[ do
			var e = 0
			for ss in [0..4[ do
				e += inverted_base64_chars[self.chars[s*4+ss]].lshift((3-ss)*6)
			end

			for ss in [0..3[ do
				result[s*3+ss] = e.rshift((2-ss)*8).bin_and( mask_8bit ).ascii
			end
		end

		var s = steps
		if padding_count == 1 then
			var e = 0
			for ss in [0..3[ do
				e += inverted_base64_chars[self.chars[s*4+ss]].lshift((3-ss)*6)
			end

			for ss in [0..2[ do
				result[s*3+ss] = e.rshift((2-ss)*8).bin_and( mask_8bit ).ascii
			end
		else if padding_count == 2 then
			var e = 0
			for ss in [0..2[ do
				e += inverted_base64_chars[self.chars[s*4+ss]].lshift((3-ss)*6)
			end

			result[s*3] = e.rshift(2*8).bin_and( mask_8bit ).ascii
		end

		return result.to_s
	end
end
