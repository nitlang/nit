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
	private fun inverted_base64_chars : HashMap[Byte, Byte]
	do
		var inv_base64_chars = new HashMap[Byte, Byte]
		for k in [0..base64_chars.bytelen[ do
			inv_base64_chars[base64_chars.bytes[k]] = k.to_b
		end
		return inv_base64_chars
	end

	# Encodes the receiver string to base64.
	# By default, uses "=" for padding.
	fun encode_base64 : String do return encode_base64_custom_padding('='.ascii.to_b)

	# Encodes the receiver string to base64 using a custom padding character.
	#
	# If using the default padding character `=`, see `encode_base64`.
	fun encode_base64_custom_padding(padding : Byte) : String
	do
		var base64_bytes = once base64_chars.bytes
		var length = bytelen

		var steps = length / 3
		var bytes_in_last_step = length % 3
		var result_length = steps * 4
		if bytes_in_last_step > 0 then result_length += 4
		var result = new NativeString(result_length + 1)
		var bytes = self.bytes
		result[result_length] = 0u8

		var mask_6bit = 0b0011_1111

		for s in [0 .. steps[ do
			var e = 0
			for ss in [0 .. 3[ do
				e += bytes[s * 3 + ss].to_i << ((2 - ss) * 8)
			end
			for ss in [0..4[ do
				result[s * 4 + 3 - ss] = base64_bytes[(e >> (ss * 6)) & mask_6bit]
			end
		end

		var out_off = result_length - 4
		var in_off = length - bytes_in_last_step
		if bytes_in_last_step == 1 then
			result[out_off] = base64_bytes[((bytes[in_off] & 0b1111_1100u8) >> 2).to_i]
			result[out_off + 1] = base64_bytes[((bytes[in_off] & 0b0000_0011u8) << 4).to_i]
			out_off += 2
		else if bytes_in_last_step == 2 then
			result[out_off] = base64_bytes[((bytes[in_off] & 0b1111_1100u8) >> 2).to_i]
			result[out_off + 1] = base64_bytes[(((bytes[in_off] & 0b0000_0011u8) << 4) | ((bytes[in_off + 1] & 0b1111_0000u8) >> 4)).to_i]
			result[out_off + 2] = base64_bytes[((bytes[in_off + 1] & 0b0000_1111u8) << 2).to_i]
			out_off += 3
		end
		if bytes_in_last_step > 0 then
			for i in [out_off .. result_length[ do result[i] = padding
		end

		return result.to_s_with_length(result_length)
	end

	# Decodes the receiver string from base64.
	# By default, uses "=" for padding.
	fun decode_base64 : String do return decode_base64_custom_padding('='.ascii.to_b)

	# Decodes the receiver string to base64 using a custom padding character.
	#
	# If using the default padding character `=`, see `decode_base64`.
	fun decode_base64_custom_padding(padding : Byte) : String
	do
		var inv = once inverted_base64_chars
		var length = bytelen
		if length == 0 then return ""
		assert length % 4 == 0 else print "base64::decode_base64 only supports strings of length multiple of 4"

		var bytes = self.bytes
		var steps = length / 4
		var result_length = steps * 3

		var epos = length - 1
		var padding_len = 0
		while epos >= 0 and bytes[epos] == padding do
			epos -= 1
			padding_len += 1
		end

		if padding_len != 0 then steps -= 1
		if padding_len == 1 then result_length -= 1
		if padding_len == 2 then result_length -= 2

		var result = new NativeString(result_length + 1)
		result[result_length] = 0u8

		for s in [0 .. steps[ do
			var c0 = inv[bytes[s * 4]]
			var c1 = inv[bytes[s * 4 + 1]]
			var c2 = inv[bytes[s * 4 + 2]]
			var c3 = inv[bytes[s * 4 + 3]]
			result[s * 3] = ((c0 & 0b0011_1111u8) << 2) | ((c1 & 0b0011_0000u8) >> 4)
			result[s * 3 + 1] = ((c1 & 0b0000_1111u8) << 4) | ((c2 & 0b0011_1100u8) >> 2)
			result[s * 3 + 2] = ((c2 & 0b0000_0011u8) << 6) | (c3 & 0b0011_1111u8)
		end

		var last_start = steps * 4
		if padding_len == 1 then
			var c0 = inv[bytes[last_start]]
			var c1 = inv[bytes[last_start + 1]]
			var c2 = inv[bytes[last_start + 2]]
			result[result_length - 2] = ((c0 & 0b0011_1111u8) << 2) | ((c1 & 0b0011_0000u8) >> 4)
			result[result_length - 1] = ((c1 & 0b0000_1111u8) << 4) | ((c2 & 0b0011_1100u8) >> 2)
		else if padding_len == 2 then
			var c0 = inv[bytes[last_start]]
			var c1 = inv[bytes[last_start + 1]]
			result[result_length - 1] = ((c0 & 0b0011_1111u8) << 2) | ((c1 & 0b0011_0000u8) >> 4)
		end

		return result.to_s_with_length(result_length)
	end
end
