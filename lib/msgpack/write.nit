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

# Low-level write in MessagePack format to `Writer` streams
module write

import binary

redef class Writer

	# Write `null`, or nil, in MessagePack format
	fun write_msgpack_null do write_byte 0xC0

	# Write `bool` in MessagePack format
	fun write_msgpack_bool(bool: Bool)
	do write_byte(if bool then 0xC3 else 0xC2)

	# ---
	# Integers

	# Write the integer `value` either as the shortest possible MessagePack _int_
	fun write_msgpack_int(value: Int)
	do
		if value >= -0x20 and value <= 0x7F then
			write_msgpack_fixint value
		else if value >= 0 then
			if value <= 0xFF then
				write_msgpack_uint8 value
			else if value <= 0xFFFF then
				write_msgpack_uint16 value
			else if value <= 0xFFFF_FFFF then
				write_msgpack_uint32 value
			else #if value <= 0xFFFF_FFFF_FFFF_FFFF then
				write_msgpack_uint64 value
			end
		else if value >= -128 then
			write_msgpack_int8 value
		else if value >= -32768 then
			write_msgpack_int16 value
		else if value >= -2147483648 then
			write_msgpack_int32 value
		else
			write_msgpack_int64 value
		end
	end

	# Write `value` as a single byte with metadata
	#
	# Require: `value >= -0x20 and value <= 0x7F`
	fun write_msgpack_fixint(value: Int)
	do
		assert value >= -0x20 and value <= 0x7F
		write_byte value
	end

	# Write `value` over one unsigned byte, following 1 metadata byte
	#
	# Require: `value >= 0x00 and value <= 0xFF`
	fun write_msgpack_uint8(value: Int)
	do
		write_byte 0xCC
		write_bytes value.to_bytes(n_bytes=1)
	end

	# Write `value` over two unsigned bytes, following 1 metadata byte
	#
	# Require: `value >= 0x00 and value <= 0xFFFF`
	fun write_msgpack_uint16(value: Int)
	do
		write_byte 0xCD
		write_bytes value.to_bytes(n_bytes=2)
	end

	# Write `value` over 4 unsigned bytes, following 1 metadata byte
	#
	# Require: `value >= 0x00 and value <= 0xFFFF_FFFF`
	fun write_msgpack_uint32(value: Int)
	do
		write_byte 0xCE
		write_bytes value.to_bytes(n_bytes=4)
	end

	# Write `value` over 8 unsigned bytes, following 1 metadata byte
	#
	# Require: `value >= 0x00 and value <= 0xFFFF_FFFF_FFFF_FFFF`
	fun write_msgpack_uint64(value: Int)
	do
		write_byte 0xCF
		write_bytes value.to_bytes(n_bytes=8)
	end

	# Write `value` over one signed byte, following 1 metadata byte
	#
	# Require: `value >= -128  and value <= 127`
	fun write_msgpack_int8(value: Int)
	do
		write_byte 0xD0
		write_bytes value.to_bytes(n_bytes=1)
	end

	# Write `value` over two signed bytes, following 1 metadata byte
	fun write_msgpack_int16(value: Int)
	do
		write_byte 0xD1
		write_bytes value.to_bytes(n_bytes=2)
	end

	# Write `value` over 4 signed bytes, following 1 metadata byte
	fun write_msgpack_int32(value: Int)
	do
		write_byte 0xD2
		write_bytes value.to_bytes(n_bytes=4)
	end

	# Write `value` over 8 signed bytes, following 1 metadata byte
	fun write_msgpack_int64(value: Int)
	do
		write_byte 0xD3
		write_int64 value
	end

	# ---
	# Floats

	# Write `value` as a MessagePack float (losing precision)
	fun write_msgpack_float(value: Float)
	do
		write_byte 0xCA
		write_float value
	end

	# Write `value` as a MessagePack double
	fun write_msgpack_double(value: Float)
	do
		write_byte 0xCB
		write_double value
	end

	# ---
	# Strings

	# Write `text` in the shortest possible MessagePack format
	#
	# Require: `text.byte_length <= 0xFFFF_FFFF`
	fun write_msgpack_str(text: Text)
	do
		var len = text.byte_length
		if len <= 0x1F then
			write_msgpack_fixstr text
		else if len <= 0xFF then
			write_msgpack_str8 text
		else if len <= 0xFFFF then
			write_msgpack_str16 text
		else if len <= 0xFFFF_FFFF then
			write_msgpack_str32 text
		else
			abort
		end
	end

	# Write `text` in _fixstr_ format, max of 0x1F bytes
	#
	# Require: `text.byte_length <= 0x1F`
	fun write_msgpack_fixstr(text: Text)
	do
		var len = text.byte_length
		assert len <= 0x1F

		var b = 0b1010_0000 | len
		write_byte b

		write text
	end

	# Write `text` in _str8_ format, max of 0xFF bytes
	#
	# Require: `text.byte_length <= 0xFF`
	fun write_msgpack_str8(text: Text)
	do
		var len = text.byte_length
		assert len <= 0xFF

		write_byte 0xD9
		write_byte len
		write text
	end

	# Write `text` in _str16_ format, max of 0xFFFF bytes
	#
	# Require: `text.byte_length <= 0xFFFF`
	fun write_msgpack_str16(text: Text)
	do
		var len = text.byte_length
		assert len <= 0xFFFF

		write_byte 0xDA
		var len_bytes = len.to_bytes
		write_byte len_bytes[0]
		write_byte if len_bytes.length > 1 then len_bytes[1] else 0
		write text
	end

	# Write `text` in _str32_ format, max of 0xFFFF_FFFF bytes
	#
	# Require: `text.byte_length <= 0xFFFF_FFFF`
	fun write_msgpack_str32(text: Text)
	do
		var len = text.byte_length
		assert len <= 0xFFFF_FFFF

		write_byte 0xDB
		var len_bytes = len.to_bytes
		write_byte len_bytes[0]
		for i in [1..4[ do
			write_byte if len_bytes.length > i then len_bytes[i] else 0
		end
		write text
	end

	# ---
	# Binary data

	# Write `data` in the shortest possible MessagePack _bin_ format
	#
	# Require: `data.length <= 0xFFFF_FFFF`
	fun write_msgpack_bin(data: Bytes)
	do
		var len = data.length
		if len <= 0xFF then
			write_msgpack_bin8 data
		else if len <= 0xFFFF then
			write_msgpack_bin16 data
		else if len <= 0xFFFF_FFFF then
			write_msgpack_bin32 data
		else abort
	end

	# Write `data` in _bin8_ format, max of 0xFF bytes
	#
	# Require: `data.length <= 0xFF`
	fun write_msgpack_bin8(data: Bytes)
	do
		var len = data.length
		assert len <= 0xFF

		write_byte 0xC4
		write_byte len
		write_bytes data
	end

	# Write `data` in _bin16_ format, max of 0xFFFF bytes
	#
	# Require: `data.length <= 0xFFFF`
	fun write_msgpack_bin16(data: Bytes)
	do
		var len = data.length
		assert len <= 0xFFFF

		write_byte 0xC5
		write_bytes len.to_bytes(n_bytes=2)
		write_bytes data
	end

	# Write `data` in _bin32_ format, max of 0xFFFF_FFFF bytes
	#
	# Require: `data.length <= 0xFFFF_FFFF`
	fun write_msgpack_bin32(data: Bytes)
	do
		var len = data.length
		assert len <= 0xFFFF_FFFF

		write_byte 0xC6
		write_bytes len.to_bytes(n_bytes=4)
		write_bytes data
	end

	# ---
	# Arrays

	# Write an array header for `len` items in the shortest possible MessagePack _array_ format
	#
	# After writing the header, clients should write the array items.
	#
	# Require: `len <= 0xFFFF_FFFF`
	fun write_msgpack_array(len: Int)
	do
		if len <= 0x0F then
			write_msgpack_fixarray len
		else if len <= 0xFFFF then
			write_msgpack_array16 len
		else if len <= 0xFFFF_FFFF then
			write_msgpack_array32 len
		else
			abort
		end
	end

	# Write an array header for `len` items, max of 0x0F items
	#
	# After writing the header, clients should write the array items.
	#
	# Require: `len <= 0x0F`
	fun write_msgpack_fixarray(len: Int)
	do
		assert len <= 0x0F
		write_byte 0b1001_0000 | len
	end

	# Write an array header for `len` items, max of 0xFFFF items
	#
	# After writing the header, clients should write the array items.
	#
	# Require: `len <= 0xFFFF`
	fun write_msgpack_array16(len: Int)
	do
		assert len <= 0xFFFF
		write_byte 0xDC
		write_bytes len.to_bytes(n_bytes=2)
	end

	# Write an array header for `len` items, max of 0xFFFF_FFFF items
	#
	# After writing the header, clients should write the array items.
	#
	# Require: `len <= 0xFFFF_FFFF`
	fun write_msgpack_array32(len: Int)
	do
		assert len <= 0xFFFF_FFFF
		write_byte 0xDD
		write_bytes len.to_bytes(n_bytes=4)
	end

	# ---
	# Map

	# Write a map header for `len` keys/value pairs in the shortest possible MessagePack _map_ format
	#
	# After writing the header, clients should write the map data, alternating
	# between keys and values.
	#
	# Require: `len <= 0xFFFF_FFFF`
	fun write_msgpack_map(len: Int)
	do
		if len <= 0x0F then
			write_msgpack_fixmap len
		else if len <= 0xFFFF then
			write_msgpack_map16 len
		else if len <= 0xFFFF_FFFF then
			write_msgpack_map32 len
		else
			abort
		end
	end

	# Write a map header for `len` key/value pairs, max of 0x0F pairs
	#
	# After writing the header, clients should write the map data, alternating
	# between keys and values.
	#
	# Require: `len <= 0x0F`
	fun write_msgpack_fixmap(len: Int)
	do
		assert len <= 0x0F
		write_byte 0b1000_0000 | len
	end

	# Write a map header for `len` key/value pairs, max of 0xFFFF pairs
	#
	# After writing the header, clients should write the map data, alternating
	# between keys and values.
	#
	# Require: `len <= 0xFFFF`
	fun write_msgpack_map16(len: Int)
	do
		assert len <= 0xFFFF
		write_byte 0xDE
		write_bytes len.to_bytes(n_bytes=2)
	end

	# Write a map header for `len` key/value pairs, max of 0xFFFF_FFFF pairs
	#
	# After writing the header, clients should write the map data, alternating
	# between keys and values.
	#
	# Require: `len <= 0xFFFF_FFFF`
	fun write_msgpack_map32(len: Int)
	do
		assert len <= 0xFFFF_FFFF
		write_byte 0xDF
		write_bytes len.to_bytes(n_bytes=4)
	end

	# ---
	# Ext

	# Write an application-specific extension for `typ` and `bytes` in the shortest possible MessagePack _ext_ format
	#
	# Require: `bytes.length <= 0xFFFF_FFFF`
	#
	# ~~~
	# var writer = new BytesWriter
	# writer.write_msgpack_ext(0x0A, b"\x0B\x0C\x0D")
	# assert writer.bytes == b"\xC7\x03\x0A\x0B\x0C\x0D"
	# ~~~
	fun write_msgpack_ext(typ: Int, bytes: Bytes)
	do
		var len = bytes.length
		if len == 1 then
			write_msgpack_fixext1 typ
			write_byte bytes.first
		else if len == 2 then
			write_msgpack_fixext2 typ
			write_bytes bytes
		else if len == 4 then
			write_msgpack_fixext4 typ
			write_bytes bytes
		else if len == 8 then
			write_msgpack_fixext8 typ
			write_bytes bytes
		else if len == 16 then
			write_msgpack_fixext16 typ
			write_bytes bytes
		else if len <= 0xFF then
			write_msgpack_ext8(typ, len)
			write_bytes bytes
		else if len <= 0xFFFF then
			write_msgpack_ext16(typ, len)
			write_bytes bytes
		else if len <= 0xFFFF_FFFF then
			write_msgpack_ext32(typ, len)
			write_bytes bytes
		else
			abort
		end
	end

	# Write the header for an application-specific extension of one data byte
	#
	# After writing the header, clients should write the data byte.
	fun write_msgpack_fixext1(typ: Int)
	do
		write_byte 0xD4
		write_byte typ
	end

	# Write the header for an application-specific extension of two data bytes
	#
	# After writing the header, clients should write the two data bytes.
	fun write_msgpack_fixext2(typ: Int)
	do
		write_byte 0xD5
		write_byte typ
	end

	# Write the header for an application-specific extension of 4 data bytes
	#
	# After writing the header, clients should write the 4 data bytes.
	fun write_msgpack_fixext4(typ: Int)
	do
		write_byte 0xD6
		write_byte typ
	end

	# Write the header for an application-specific extension of 8 data bytes
	#
	# After writing the header, clients should write the 8 data bytes.
	fun write_msgpack_fixext8(typ: Int)
	do
		write_byte 0xD7
		write_byte typ
	end

	# Write the header for an application-specific extension of 16 data bytes
	#
	# After writing the header, clients should write the 16 data bytes.
	fun write_msgpack_fixext16(typ: Int)
	do
		write_byte 0xD8
		write_byte typ
	end

	# Write the header for an application-specific extension of `len` data bytes
	#
	# After writing the header, clients should write the data bytes.
	#
	# Require: `len >= 0 and <= 0xFF`
	fun write_msgpack_ext8(typ, len: Int)
	do
		assert len >= 0 and len <= 0xFF
		write_byte 0xC7
		write_byte len
		write_byte typ
	end

	# Write the header for an application-specific extension of `len` data bytes
	#
	# After writing the header, clients should write the data bytes.
	#
	# Require: `len >= 0 and <= 0xFFFF`
	fun write_msgpack_ext16(typ, len: Int)
	do
		assert len >= 0 and len <= 0xFFFF
		write_byte 0xC8
		write_bytes len.to_bytes(n_bytes=2)
		write_byte typ
	end

	# Write the header for an application-specific extension of `len` data bytes
	#
	# After writing the header, clients should write the data bytes.
	#
	# Require: `len >= 0 and <= 0xFFFF_FFFF`
	fun write_msgpack_ext32(typ, len: Int)
	do
		assert len >= 0 and len <= 0xFFFF_FFFF
		write_byte 0xC9
		write_bytes len.to_bytes(n_bytes=4)
		write_byte typ
	end

	# TODO timestamps
end
