# This file is part of NIT ( https://nitlanguage.org ).
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

redef class Char
	# Is `self` a valid Base64 character ?
	fun is_base64_char: Bool do
		if code_point >= 127 then return false
		return code_point.is_base64_char
	end
end

redef class Int
	# Is `self` a valid Base64 character ?
	fun is_base64_char: Bool do
		if self == u'+' then return true
		if self == u'/' then return true
		if self > u'Z' then
			if self < u'a' then return false
			if self <= u'z' then return true
			return false
		end
		if self >= u'A' then return true
		if self <= u'9' and self >= u'0' then return true
		return false
	end

	# Returns the `base64` equivalent of `self`
	#
	# REQUIRE `self`.`is_base64_char`
	fun to_base64_char: Int do
		if self == u'+' then return 62
		if self == u'/' then return 63
		if self > u'Z' then
			if self < u'a' then abort
			if self <= u'z' then return self - 71
			abort
		end
		if self >= u'A' then return self - 0x41
		if self <= u'9' and self >= u'0' then return self + 4
		abort
	end
end

redef class CString
	# Alphabet used by the base64 algorithm
	private fun base64_chars : Bytes
	do
		return b"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
	end

	# Encodes `self` to base64.
	#
	# By default, uses "=" for padding.
	#
	#     assert "string".encode_base64 == "c3RyaW5n"
	private fun encode_base64(length: Int): Bytes do
		var base64_bytes = once base64_chars
		var steps = length / 3
		var bytes_in_last_step = length % 3
		var result_length = steps * 4
		if bytes_in_last_step > 0 then result_length += 4
		var result = new Bytes.with_capacity(result_length)

		var in_off = 0
		for s in [0 .. steps[ do
			var ind = (self[in_off] & 0b1111_1100) >> 2
			result.add base64_bytes[ind]
			ind = ((self[in_off] & 0b0000_0011) << 4) | ((self[in_off + 1] & 0b1111_0000) >> 4)
			result.add base64_bytes[ind]
			ind = ((self[in_off + 1] & 0b0000_1111) << 2) | ((self[in_off + 2] & 0b1100_0000) >> 6)
			result.add base64_bytes[ind]
			ind = (self[in_off + 2] & 0b0011_1111)
			result.add base64_bytes[ind]
			in_off += 3
		end
		if bytes_in_last_step == 1 then
			result.add base64_bytes[(self[in_off] & 0b1111_1100) >> 2]
			result.add base64_bytes[(self[in_off] & 0b0000_0011) << 4]
		else if bytes_in_last_step == 2 then
			result.add base64_bytes[(self[in_off] & 0b1111_1100) >> 2]
			result.add base64_bytes[((self[in_off] & 0b0000_0011) << 4) | ((self[in_off + 1] & 0b1111_0000) >> 4)]
			result.add base64_bytes[(self[in_off + 1] & 0b0000_1111) << 2]
		end
		var rempad = if bytes_in_last_step > 0 then 3 - bytes_in_last_step else 0
		for i in [0 .. rempad[ do result.add u'='

		return result
	end

	# Decodes `self` from base64
	#
	#      assert "c3RyaW5n".decode_base64.to_s == "string"
	#      assert "c3Rya\nW5n".decode_base64.to_s == "string"
	#      assert "c3RyaW5nCg==".decode_base64.to_s == "string\n"
	#      assert "c3RyaW5nCg".decode_base64.to_s == "string\n"
	#      assert "c3RyaW5neQo=".decode_base64.to_s == "stringy\n"
	#      assert "c3RyaW5neQo".decode_base64.to_s == "stringy\n"
	#
	private fun decode_base64(length: Int): Bytes do
		if length == 0 then return new Bytes.empty

		# Avoids constant unboxing
		var pad = '='

		var result = new Bytes.with_capacity((length / 4 + 1) * 3)

		var curr = 0
		var cnt = 0
		var endpos = -1
		for i in [0 .. length[ do
			var b = self[i]
			if b == pad then
				endpos = i
				break
			end
			# Ignore whitespaces
			if b <= 0x20 then continue
			if not b.is_base64_char then continue
			curr <<= 6
			curr += b.to_base64_char.to_i
			cnt += 1
			if cnt == 4 then
				result.add ((curr & 0xFF0000) >> 16)
				result.add ((curr & 0xFF00) >> 8)
				result.add (curr & 0xFF)
				curr = 0
				cnt = 0
			end
		end
		if endpos != -1 or cnt != 0 then
			var pads = 0
			for i in [endpos .. length[ do
				var b = self[i]
				if b <= 0x20 then continue
				pads += 1
			end
			if cnt == 2 then
				curr >>= 4
				result.add(curr)
			else if cnt == 3 then
				curr >>= 2
				result.add ((curr & 0xFF00) >> 8)
				result.add (curr & 0xFF)
			end
		end
		return result
	end

	# Is `self` a well-formed Base64 entity ?
	#
	# ~~~nit
	#	assert "Qn03".is_base64
	#	assert not "#sd=".is_base64
	# ~~~
	fun is_base64(length: Int): Bool do return check_base64(length) == null

	# Is `self` a well-formed Base64 entity ?
	#
	# Will return an Error otherwise with info on which part is erroneous.
	fun check_base64(length: Int): nullable Error do
		var rlen = 0
		var opos = length
		for i in [0 .. length[ do
			if self[i] == u'=' then
				opos = i
				break
			end
			if self[i].is_whitespace then continue
			if not self[i].is_base64_char then return new Error("Invalid Base64 character at position {i}: {self[i].code_point}")
			rlen += 1
			if rlen > 4 then rlen -= 4
		end
		var pad = 0
		for i in [opos .. length[ do
			if self[i].is_whitespace then continue
			if self[i] != u'=' then return new Error("Invalid padding character {self[i].code_point} at position {i}")
			pad += 1
		end
		if rlen + pad != 4 then return new Error("Invalid padding length")
		return null
	end
end

redef class Bytes

	# Encodes the receiver string to base64 using a custom padding character.
	#
	# If using the default padding character `=`, see `encode_base64`.
	fun encode_base64: Bytes do return items.encode_base64(length)

	# Decodes the receiver string to base64 using a custom padding character.
	#
	# Default padding character `=`
	fun decode_base64: Bytes do return items.decode_base64(length)

	# Is `self` a well-formed Base64 entity ?
	fun is_base64: Bool do return items.is_base64(length)

	# Is `self` a well-formed Base64 entity ?
	#
	# Will return an Error otherwise with info on which part is erroneous.
	fun check_base64: nullable Error do return items.check_base64(length)
end

redef class Text

	# Encodes the receiver string to base64 using a custom padding character.
	#
	# If using the default padding character `=`, see `encode_base64`.
	fun encode_base64: String do return to_cstring.encode_base64(byte_length).to_s

	# Decodes the receiver string to base64 using a custom padding character.
	#
	# Default padding character `=`
	fun decode_base64: Bytes do return to_cstring.decode_base64(byte_length)

	# Is `self` a well-formed Base64 entity ?
	fun is_base64: Bool do return to_cstring.is_base64(byte_length)

	# Is `self` a well-formed Base64 entity ?
	#
	# Will return an Error otherwise with info on which part is erroneous.
	fun check_base64: nullable Error do return to_cstring.check_base64(byte_length)
end

redef class FlatText
	redef fun encode_base64 do return fast_cstring.encode_base64(byte_length).to_s

	redef fun decode_base64 do return fast_cstring.decode_base64(byte_length)

	redef fun is_base64 do return fast_cstring.is_base64(byte_length)

	redef fun check_base64 do return fast_cstring.check_base64(byte_length)
end
