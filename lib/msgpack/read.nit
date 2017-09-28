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

# Low-level read MessagePack format from `Reader` streams
module read

import serialization
private import binary

import ext

redef class Reader

	# Read the next MessagePack object and return it as a simple Nit object
	#
	# The return value is composed of:
	# * the simple types `null`, `Bool`, `Int`, `Float`, `String` and `Bytes`,
	# * collections of simple Nit objects `Array[nullable Serializable]`
	#   and `Map[nullable Serializable, nullable Serializable]`,
	# * and `MsgPackExt` for custom MessagePack *ext* data.
	#
	# This method reads plain MessagePack data, as written by `MsgPackSerializer`
	# when `plain_msgpack == true`. To deserialize full Nit objects from
	# MessagePack with metadata use `Reader::deserialize_msgpack`.
	fun read_msgpack: nullable Serializable
	do
		if last_error != null then return 0

		var typ = read_byte
		if typ == null then
			# Error, return default `null`
			return null

		else if typ & 0b1000_0000u8 == 0u8 or typ & 0b1110_0000u8 == 0b1110_0000u8 then
			# fixint
			var bytes = new Bytes.with_capacity(1)
			bytes.add typ
			return bytes.to_i(signed=true)

		else if typ & 0b1111_0000u8 == 0b1000_0000u8 then
			# fixmap
			var len = typ & 0b0000_1111u8
			return read_msgpack_map_data(len.to_i)

		else if typ & 0b1111_0000u8 == 0b1001_0000u8 then
			# fixarray
			var len = typ & 0b0000_1111u8
			return read_msgpack_array_data(len.to_i)

		else if typ & 0b1110_0000u8 == 0b1010_0000u8 then
			# fixstr
			var len = typ & 0b0001_1111u8
			return read_bytes(len.to_i).to_s

		else if typ == 0xC0u8 then
			return null
		else if typ == 0xC2u8 then
			return false
		else if typ == 0xC3u8 then
			return true

		else if typ == 0xCCu8 then
			# uint8
			return (read_byte or else 0u8).to_i
		else if typ == 0xCDu8 then
			# uint16
			return read_bytes(2).to_i
		else if typ == 0xCEu8 then
			# uint32
			return read_bytes(4).to_i
		else if typ == 0xCFu8 then
			# uint64
			return read_bytes(8).to_i
		else if typ == 0xD0u8 then
			# int8
			return read_bytes(1).to_i(true)
		else if typ == 0xD1u8 then
			# int16
			return read_bytes(2).to_i(true)
		else if typ == 0xD2u8 then
			# int32
			return read_bytes(4).to_i(true)
		else if typ == 0xD3u8 then
			# int64
			return read_int64

		else if typ == 0xCAu8 then
			return read_float
		else if typ == 0xCBu8 then
			return read_double

		else if typ == 0xD9u8 then
			# str8
			var len = read_byte
			if len == null then return null
			return read_bytes(len.to_i).to_s
		else if typ == 0xDAu8 then
			# str16
			var len = read_bytes(2)
			return read_bytes(len.to_i).to_s
		else if typ == 0xDBu8 then
			# str32
			var len = read_bytes(4)
			return read_bytes(len.to_i).to_s

		else if typ == 0xC4u8 then
			# bin8
			var len = read_byte
			if len == null then return null
			return read_bytes(len.to_i)
		else if typ == 0xC5u8 then
			# bin16
			var len = read_bytes(2)
			return read_bytes(len.to_i)
		else if typ == 0xC6u8 then
			# bin32
			var len = read_bytes(4)
			return read_bytes(len.to_i)

		else if typ == 0xDCu8 then
			# array16
			var len = read_bytes(2)
			return read_msgpack_array_data(len.to_i)
		else if typ == 0xDDu8 then
			# array32
			var len = read_bytes(4)
			return read_msgpack_array_data(len.to_i)

		else if typ == 0xDEu8 then
			# map16
			var len = read_bytes(2)
			return read_msgpack_map_data(len.to_i)
		else if typ == 0xDFu8 then
			# map32
			var len = read_bytes(4)
			return read_msgpack_map_data(len.to_i)

		else if typ == 0xD4u8 then
			# fixext1
			return read_msgpack_fixext_data(1)
		else if typ == 0xD5u8 then
			# fixext2
			return read_msgpack_fixext_data(2)
		else if typ == 0xD6u8 then
			# fixext4
			return read_msgpack_fixext_data(4)
		else if typ == 0xD7u8 then
			# fixext8
			return read_msgpack_fixext_data(8)
		else if typ == 0xD8u8 then
			# fixext16
			return read_msgpack_fixext_data(16)

		else if typ == 0xC7u8 then
			# ext1
			return read_msgpack_ext_data(1)
		else if typ == 0xC8u8 then
			# ext2
			return read_msgpack_ext_data(2)
		else if typ == 0xC9u8 then
			# ext4
			return read_msgpack_ext_data(4)
		end

		print_error "MessagePack Warning: Found no match for typ {typ} / 0b{typ.to_i.to_base(2)}"
		return null
	end

	# Read the content of a map, `len` keys and values
	private fun read_msgpack_map_data(len: Int): Map[nullable Serializable, nullable Serializable]
	do
		var map = new Map[nullable Serializable, nullable Serializable]
		for i in [0..len.to_i[ do map[read_msgpack] = read_msgpack
		return map
	end

	# Read the content of an array of `len` items
	private fun read_msgpack_array_data(len: Int): Array[nullable Serializable]
	do
		return [for i in [0..len[ do read_msgpack]
	end

	# Read the content of a *fixext* of `len` bytes
	#
	# ~~~
	# var reader = new BytesReader(b"\xC7\x03\x0A\x0B\x0C\x0D")
	# var ext = reader.read_msgpack
	# assert ext isa MsgPackExt
	# assert ext.typ == 0x0Au8
	# assert ext.data == b"\x0B\x0C\x0D"
	# ~~~
	private fun read_msgpack_fixext_data(len: Int): MsgPackExt
	do
		var exttyp = read_byte or else 0u8
		var data = read_bytes(len)
		return new MsgPackExt(exttyp, data)
	end

	# Read the content of a dynamic *ext* including the length on `len_len` bytes
	private fun read_msgpack_ext_data(len_len: Int): MsgPackExt
	do
		var len = read_bytes(len_len).to_i
		return read_msgpack_fixext_data(len)
	end
end
