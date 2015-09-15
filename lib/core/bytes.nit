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

# Services for byte streams and arrays
module bytes

import kernel
import collection::array
intrude import text::flat

redef class Byte
	# Write self as a string into `ns` at position `pos`
	private fun add_digest_at(ns: NativeString, pos: Int) do
		var tmp = (0xF0u8 & self) >> 4
		ns[pos] = if tmp >= 0x0Au8 then tmp + 0x37u8 else tmp + 0x30u8
		tmp = 0x0Fu8 & self
		ns[pos + 1] = if tmp >= 0x0Au8 then tmp + 0x37u8 else tmp + 0x30u8
	end

	# Is `self` a valid hexadecimal digit (in ASCII)
	#
	# ~~~nit
	# intrude import core::bytes
	# assert not '/'.ascii.to_b.is_valid_hexdigit
	# assert '0'.ascii.to_b.is_valid_hexdigit
	# assert '9'.ascii.to_b.is_valid_hexdigit
	# assert not ':'.ascii.to_b.is_valid_hexdigit
	# assert not '@'.ascii.to_b.is_valid_hexdigit
	# assert 'A'.ascii.to_b.is_valid_hexdigit
	# assert 'F'.ascii.to_b.is_valid_hexdigit
	# assert not 'G'.ascii.to_b.is_valid_hexdigit
	# assert not '`'.ascii.to_b.is_valid_hexdigit
	# assert 'a'.ascii.to_b.is_valid_hexdigit
	# assert 'f'.ascii.to_b.is_valid_hexdigit
	# assert not 'g'.ascii.to_b.is_valid_hexdigit
	# ~~~
	private fun is_valid_hexdigit: Bool do
		return (self >= 0x30u8 and self <= 0x39u8) or
		       (self >= 0x41u8 and self <= 0x46u8) or
		       (self >= 0x61u8 and self <= 0x66u8)
	end

	# `self` as a hexdigit to its byte value
	#
	# ~~~nit
	# intrude import core::bytes
	# assert 0x39u8.hexdigit_to_byteval == 0x09u8
	# assert 0x43u8.hexdigit_to_byteval == 0x0Cu8
	# ~~~
	#
	# REQUIRE: `self.is_valid_hexdigit`
	private fun hexdigit_to_byteval: Byte do
		if self >= 0x30u8 and self <= 0x39u8 then
			return self - 0x30u8
		else if self >= 0x41u8 and self <= 0x46u8 then
			return self - 0x37u8
		else if self >= 0x61u8 and self <= 0x66u8 then
			return self - 0x57u8
		end
		# Happens only if the requirement is not met.
		# i.e. this abort is here to please the compiler
		abort
	end
end

# A buffer containing Byte-manipulation facilities
#
# Uses Copy-On-Write when persisted
class Bytes
	super AbstractArray[Byte]

	# A NativeString being a char*, it can be used as underlying representation here.
	var items: NativeString

	# Number of bytes in the array
	redef var length

	# Capacity of the array
	private var capacity: Int

	# Has this buffer been persisted (to_s'd)?
	#
	# Used for Copy-On-Write
	private var persisted = false

	#     var b = new Bytes.empty
	#     assert b.to_s == ""
	init empty do
		var ns = new NativeString(0)
		init(ns, 0, 0)
	end

	# Init a `Bytes` with capacity `cap`
	init with_capacity(cap: Int) do
		var ns = new NativeString(cap)
		init(ns, 0, cap)
	end

	redef fun is_empty do return length != 0

	#     var b = new Bytes.empty
	#     b.add 101u8
	#     assert b[0] == 101u8
	redef fun [](i) do
		assert i >= 0
		assert i < length
		return items[i]
	end

	# Returns self as a hexadecimal digest
	fun hexdigest: String do
		var elen = length * 2
		var ns = new NativeString(elen)
		var i = 0
		var oi = 0
		while i < length do
			self[i].add_digest_at(ns, oi)
			i += 1
			oi += 2
		end
		return new FlatString.full(ns, elen, 0, elen - 1, elen)
	end

	#     var b = new Bytes.with_capacity(1)
	#     b[0] = 101u8
	#     assert b.to_s == "e"
	redef fun []=(i, v) do
		if persisted then regen
		assert i >= 0
		assert i <= length
		if i == length then add(v)
		items[i] = v
	end

	#     var b = new Bytes.empty
	#     b.add 101u8
	#     assert b.to_s == "e"
	redef fun add(c) do
		if persisted then regen
		if length >= capacity then
			enlarge(length)
		end
		items[length] = c
		length += 1
	end

	#     var b = new Bytes.empty
	#     b.append([104u8, 101u8, 108u8, 108u8, 111u8])
	#     assert b.to_s == "hello"
	redef fun append(arr) do
		if arr isa Bytes then
			append_ns(arr.items, arr.length)
		else
			for i in arr do add i
		end
	end

	#     var b = new Bytes.empty
	#     b.append([0x41u8, 0x41u8, 0x18u8])
	#     b.pop
	#     assert b.to_s == "AA"
	redef fun pop do
		assert length >= 1
		length -= 1
		return items[length]
	end

	redef fun clear do length = 0

	# Regenerates the buffer, necessary when it was persisted
	private fun regen do
		var nns = new NativeString(capacity)
		items.copy_to(nns, length, 0, 0)
		persisted = false
	end

	# Appends the `ln` first bytes of `ns` to self
	fun append_ns(ns: NativeString, ln: Int) do
		if persisted then regen
		var nlen = length + ln
		if nlen > capacity then enlarge(nlen)
		ns.copy_to(items, ln, 0, length)
		length += ln
	end

	# Appends `ln` bytes from `ns` starting at index `from` to self
	fun append_ns_from(ns: NativeString, ln, from: Int) do
		if persisted then regen
		var nlen = length + ln
		if nlen > capacity then enlarge(nlen)
		ns.copy_to(items, ln, from, length)
		length += ln
	end

	redef fun enlarge(sz) do
		if capacity >= sz then return
		persisted = false
		while capacity < sz do capacity = capacity * 2 + 2
		var ns = new NativeString(capacity)
		items.copy_to(ns, length, 0, 0)
		items = ns
	end

	redef fun to_s do
		persisted = true
		var b = self
		var r = b.items.to_s_with_length(length)
		if r != items then persisted = false
		return r
	end

	redef fun iterator do return new BytesIterator.with_buffer(self)

end

private class BytesIterator
	super IndexedIterator[Byte]

	var tgt: NativeString

	redef var index

	var max: Int

	init with_buffer(b: Bytes) do init(b.items, 0, b.length)

	redef fun is_ok do return index < max

	redef fun next do index += 1

	redef fun item do return tgt[index]
end

redef class Text
	# Returns a mutable copy of `self`'s bytes
	#
	# ~~~nit
	# assert "String".to_bytes isa Bytes
	# assert "String".to_bytes == [83u8, 116u8, 114u8, 105u8, 110u8, 103u8]
	# ~~~
	fun to_bytes: Bytes do
		var b = new Bytes.with_capacity(bytelen)
		append_to_bytes b
		return b
	end

	# Is `self` a valid hexdigest ?
	#
	#     assert "0B1d3F".is_valid_hexdigest
	#     assert not "5G".is_valid_hexdigest
	fun is_valid_hexdigest: Bool do
		for i in bytes do if not i.is_valid_hexdigit then return false
		return true
	end

	# Appends `self.bytes` to `b`
	fun append_to_bytes(b: Bytes) do
		for s in substrings do
			var from = if s isa FlatString then s.first_byte else 0
			b.append_ns_from(s.items, s.bytelen, from)
		end
	end

	# Returns a new `Bytes` instance with the digest as content
	#
	#     assert "0B1F4D".hexdigest_to_bytes == [0x0Bu8, 0x1Fu8, 0x4Du8]
	#
	# REQUIRE: `self` is a valid hexdigest and hexdigest.length % 2 == 0
	fun hexdigest_to_bytes: Bytes do
		var b = bytes
		var pos = 0
		var max = bytelen
		var ret = new Bytes.with_capacity(max / 2)
		while pos < max do
			ret.add((b[pos].hexdigit_to_byteval << 4) |
			b[pos + 1].hexdigit_to_byteval)
			pos += 2
		end
		return ret
	end
end

redef class FlatText
	redef fun append_to_bytes(b) do
		var from = if self isa FlatString then first_byte else 0
		b.append_ns_from(items, bytelen, from)
	end
end

redef class NativeString
	# Creates a new `Bytes` object from `self` with `strlen` as length
	fun to_bytes: Bytes do
		var len = cstring_length
		return new Bytes(self, len, len)
	end
end
