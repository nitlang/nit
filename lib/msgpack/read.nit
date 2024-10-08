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
		if typ < 0 then
			# Error, return default `null`
			return null

		else if typ & 0b1000_0000 == 0 or typ & 0b1110_0000 == 0b1110_0000 then
			# fixint
			var bytes = new Bytes.with_capacity(1)
			bytes.add typ
			return bytes.to_i(signed=true)

		else if typ & 0b1111_0000 == 0b1000_0000 then
			# fixmap
			var len = typ & 0b0000_1111
			return read_msgpack_map_data(len.to_i)

		else if typ & 0b1111_0000 == 0b1001_0000 then
			# fixarray
			var len = typ & 0b0000_1111
			return read_msgpack_array_data(len.to_i)

		else if typ & 0b1110_0000 == 0b1010_0000 then
			# fixstr
			var len = typ & 0b0001_1111
			return read_bytes(len.to_i).to_s

		else if typ == 0xC0 then
			return null
		else if typ == 0xC2 then
			return false
		else if typ == 0xC3 then
			return true

		else if typ >= 0xCC and typ <= 0xCF then
			# uint8, 16, 32 and 64
			var len = 1 << (typ - 0xCC)
			return read_bytes(len).to_i

		else if typ >= 0xD0 and typ <= 0xD3 then
			# int8, 16, 32 and 64
			var len = 1 << (typ - 0xD0)
			return read_bytes(len).to_i(true)

		else if typ == 0xCA then
			return read_float
		else if typ == 0xCB then
			return read_double

		else if typ >= 0xD9 and typ <= 0xDB then
			# str8, 16 and 32
			var len_ln = 1 << (typ - 0xD9)
			var bf = read_bytes(len_ln)
			var len = bf.to_i
			if len < 0 then return null
			var rd_buf = read_bytes(len)
			if rd_buf.length != len then
				# Bad formatted message.
				return null
			end
			return rd_buf.to_s

		else if typ >= 0xC4 and typ <= 0xC6 then
			# bin8, 16 or 32
			var len_ln = 1 << (typ - 0xC4)
			var bf = read_bytes(len_ln)
			var len = bf.to_i
			if len < 0 then return null
			var rd_buf = read_bytes(len)
			if rd_buf.length != len then
				# Bad formatted message.
				return null
			end
			return rd_buf

		else if typ == 0xDC or typ == 0xDD then
			# array16 and array32
			var len_ln = 2 << (typ - 0xDC)
			var lenbuf = read_bytes(len_ln)
			return read_msgpack_array_data(lenbuf.to_i)

		else if typ == 0xDE or typ == 0xDF then
			# map16 and map32
			var len_ln = 2 << (typ - 0xDE)
			var lenbuf = read_bytes(len_ln)
			return read_msgpack_map_data(lenbuf.to_i)

		else if typ == 0xD4 then
			# fixext1
			return read_msgpack_fixext_data(1)
		else if typ == 0xD5 then
			# fixext2
			return read_msgpack_fixext_data(2)
		else if typ == 0xD6 then
			# fixext4
			return read_msgpack_fixext_data(4)
		else if typ == 0xD7 then
			# fixext8
			return read_msgpack_fixext_data(8)
		else if typ == 0xD8 then
			# fixext16
			return read_msgpack_fixext_data(16)

		else if typ == 0xC7 then
			# ext1
			return read_msgpack_ext_data(1)
		else if typ == 0xC8 then
			# ext2
			return read_msgpack_ext_data(2)
		else if typ == 0xC9 then
			# ext4
			return read_msgpack_ext_data(4)
		end

		print_error "MessagePack Warning: Found no match for typ {typ.to_base(16)} / 0b{typ.to_base(2)}"
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
	# assert ext.typ == 0x0a
	# assert ext.data == b"\x0B\x0C\x0D"
	# ~~~
	private fun read_msgpack_fixext_data(len: Int): MsgPackExt
	do
		var exttyp = read_byte
		if exttyp < 0 then exttyp = 0
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
