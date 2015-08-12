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

# A buffer containing Byte-manipulation facilities
#
# Uses Copy-On-Write when persisted
class Bytes
	super AbstractArray[Byte]

	# A NativeString being a char*, it can be used as underlying representation here.
	private var items: NativeString

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
		if not is_utf8 then
			b = clean_utf8
			persisted = false
		end
		return new FlatString.with_infos(b.items, b.length, 0, b.length -1)
	end

	redef fun iterator do return new BytesIterator.with_buffer(self)

	# Is the byte collection valid UTF-8 ?
	fun is_utf8: Bool do
		var charst = once [0x80u8, 0u8, 0xE0u8, 0xC0u8, 0xF0u8, 0xE0u8, 0xF8u8, 0xF0u8]
		var lobounds = once [0, 0x80, 0x800, 0x10000]
		var hibounds = once [0x7F, 0x7FF, 0xFFFF, 0x10FFFF]
		var pos = 0
		var len = length
		var mits = items
		while pos < len do
			var nxst = mits.length_of_char_at(pos)
			var charst_index = (nxst - 1) * 2
			if mits[pos] & charst[charst_index] == charst[charst_index + 1] then
				var c = mits.char_at(pos)
				var cp = c.ascii
				if cp <= hibounds[nxst - 1] and cp >= lobounds[nxst - 1] then
					if cp >= 0xD800 and cp <= 0xDFFF or
					   cp == 0xFFFE or cp == 0xFFFF then return false
				else
					return false
				end
			else
				return false
			end
			pos += nxst
		end
		return true
	end

	# Cleans the bytes of `self` to be UTF-8 compliant
	private fun clean_utf8: Bytes do
		var charst = once [0x80u8, 0u8, 0xE0u8, 0xC0u8, 0xF0u8, 0xE0u8, 0xF8u8, 0xF0u8]
		var badchar = once [0xEFu8, 0xBFu8, 0xBDu8]
		var lobounds = once [0, 0x80, 0x800, 0x10000]
		var hibounds = once [0x7F, 0x7FF, 0xFFFF, 0x10FFFF]
		var pos = 0
		var len = length
		var ret = new Bytes.with_capacity(len)
		var mits = items
		while pos < len do
			var nxst = mits.length_of_char_at(pos)
			var charst_index = (nxst - 1) * 2
			if mits[pos] & charst[charst_index] == charst[charst_index + 1] then
				var c = mits.char_at(pos)
				var cp = c.ascii
				if cp <= hibounds[nxst - 1] and cp >= lobounds[nxst - 1] then
					if cp >= 0xD800 and cp <= 0xDFFF or
					   cp == 0xFFFE or cp == 0xFFFF then
						ret.append badchar
						pos += 1
					else
						var pend = pos + nxst
						for i in [pos .. pend[ do ret.add mits[i]
						pos += nxst
					end
				else
					ret.append badchar
					pos += 1
				end
			else
				ret.append badchar
				pos += 1
			end
		end
		return ret
	end
end

private class BytesIterator
	super IndexedIterator[Byte]

	var tgt: NativeString

	redef var index

	var max: Int

	init with_buffer(b: Bytes) do init(b.items, 0, b.length - 1)

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
		for s in substrings do
			var from = if s isa FlatString then s.first_byte else 0
			b.append_ns_from(s.items, s.bytelen, from)
		end
		return b
	end
end

redef class FlatText
	redef fun to_bytes do
		var len = bytelen
		var b = new Bytes.with_capacity(len)
		var from = if self isa FlatString then first_byte else 0
		b.append_ns_from(items, len, from)
		return b
	end
end

redef class NativeString
	# Creates a new `Bytes` object from `self` with `strlen` as length
	fun to_bytes: Bytes do
		var len = cstring_length
		return new Bytes(self, len, len)
	end
end
