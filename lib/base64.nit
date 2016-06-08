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

redef class NativeString
	# Alphabet used by the base64 algorithm
	private fun base64_chars : SequenceRead[Byte]
	do
		return "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".bytes
	end

	# Reversed alphabet for base64
	private fun inverted_base64_chars : HashMap[Byte, Byte]
	do
		var inv_base64_chars = new HashMap[Byte, Byte]
		var l = base64_chars.length
		for k in [0 .. l[ do
			inv_base64_chars[base64_chars[k]] = k.to_b
		end
		return inv_base64_chars
	end

	# Encodes `self` to base64.
	#
	# By default, uses "=" for padding.
	#
	#     assert "string".encode_base64 == "c3RyaW5n"
	private fun encode_base64(length: Int, padding: nullable Byte): Bytes do
		var base64_bytes = once base64_chars
		if padding == null then padding = '='.ascii
		var steps = length / 3
		var bytes_in_last_step = length % 3
		var result_length = steps * 4
		if bytes_in_last_step > 0 then result_length += 4
		var result = new Bytes.with_capacity(result_length)

		var in_off = 0
		for s in [0 .. steps[ do
			var ind = ((self[in_off] & 0b1111_1100u8) >> 2).to_i
			result.add base64_bytes[ind]
			ind = ((self[in_off] & 0b0000_0011u8) << 4).to_i | ((self[in_off + 1] & 0b1111_0000u8) >> 4).to_i
			result.add base64_bytes[ind]
			ind = ((self[in_off + 1] & 0b0000_1111u8) << 2).to_i | ((self[in_off + 2] & 0b1100_0000u8) >> 6).to_i
			result.add base64_bytes[ind]
			ind = (self[in_off + 2] & 0b0011_1111u8).to_i
			result.add base64_bytes[ind]
			in_off += 3
		end
		if bytes_in_last_step == 1 then
			result.add base64_bytes[((self[in_off] & 0b1111_1100u8) >> 2).to_i]
			result.add base64_bytes[((self[in_off] & 0b0000_0011u8) << 4).to_i]
		else if bytes_in_last_step == 2 then
			result.add base64_bytes[((self[in_off] & 0b1111_1100u8) >> 2).to_i]
			result.add base64_bytes[(((self[in_off] & 0b0000_0011u8) << 4) | ((self[in_off + 1] & 0b1111_0000u8) >> 4)).to_i]
			result.add base64_bytes[((self[in_off + 1] & 0b0000_1111u8) << 2).to_i]
		end
		var rempad = if bytes_in_last_step > 0 then 3 - bytes_in_last_step else 0
		for i in [0 .. rempad[ do result.add padding

		return result
	end

	# Decodes `self` from base64
	#
	#      assert "c3RyaW5n".decode_base64 == "string"
	#      assert "c3Rya\nW5n".decode_base64 == "string"
	#
	# REQUIRE: `length % 4 == 0`
	private fun decode_base64(length: Int, padding: nullable Byte): Bytes do
		if padding == null then padding = '='.ascii
		var inv = once inverted_base64_chars
		if length == 0 then return new Bytes.empty

		# Remove non-base64 chars
		var bytes = new Bytes.with_capacity(length)
		for k in [0 .. length[ do
			var byte = self[k]
			if inv.has_key(byte) or byte == padding then bytes.add(byte)
		end
		length = bytes.length

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

		var result = new Bytes.with_capacity(result_length + 1)

		for s in [0 .. steps[ do
			var c0 = inv[bytes[s * 4]]
			var c1 = inv[bytes[s * 4 + 1]]
			var c2 = inv[bytes[s * 4 + 2]]
			var c3 = inv[bytes[s * 4 + 3]]
			result.add (((c0 & 0b0011_1111u8) << 2) | ((c1 & 0b0011_0000u8) >> 4))
			result.add (((c1 & 0b0000_1111u8) << 4) | ((c2 & 0b0011_1100u8) >> 2))
			result.add (((c2 & 0b0000_0011u8) << 6) | (c3 & 0b0011_1111u8))
		end

		var last_start = steps * 4
		if padding_len == 1 then
			var c0 = inv[bytes[last_start]]
			var c1 = inv[bytes[last_start + 1]]
			var c2 = inv[bytes[last_start + 2]]
			result.add (((c0 & 0b0011_1111u8) << 2) | ((c1 & 0b0011_0000u8) >> 4))
			result.add (((c1 & 0b0000_1111u8) << 4) | ((c2 & 0b0011_1100u8) >> 2))
		else if padding_len == 2 then
			var c0 = inv[bytes[last_start]]
			var c1 = inv[bytes[last_start + 1]]
			result.add (((c0 & 0b0011_1111u8) << 2) | ((c1 & 0b0011_0000u8) >> 4))
		end

		return result
	end
end

redef class Bytes

	# Encodes the receiver string to base64 using a custom padding character.
	#
	# If using the default padding character `=`, see `encode_base64`.
	fun encode_base64(padding: nullable Byte): Bytes
	do
		return items.encode_base64(length, padding)
	end

	# Decodes the receiver string to base64 using a custom padding character.
	#
	# Default padding character `=`
	fun decode_base64(padding : nullable Byte) : Bytes
	do
		return items.decode_base64(length, padding)
	end
end

redef class String

	# Encodes the receiver string to base64 using a custom padding character.
	#
	# If using the default padding character `=`, see `encode_base64`.
	fun encode_base64(padding: nullable Byte): String
	do
		return to_cstring.encode_base64(byte_length, padding).to_s
	end

	# Decodes the receiver string to base64 using a custom padding character.
	#
	# Default padding character `=`
	fun decode_base64(padding : nullable Byte) : String
	do
		return to_cstring.decode_base64(byte_length, padding).to_s
	end
end
