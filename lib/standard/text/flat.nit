# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# All the array-based text representations
module flat

intrude import abstract_text
intrude import native

`{
#include <stdio.h>
#include <string.h>
`}

private class FlatSubstringsIter
	super Iterator[FlatText]

	var tgt: nullable FlatText

	redef fun item do
		assert is_ok
		return tgt.as(not null)
	end

	redef fun is_ok do return tgt != null

	redef fun next do tgt = null
end

# Immutable strings of characters.
class FlatString
	super FlatText
	super String

	# Index at which `self` begins in `items`, inclusively
	private var first_byte: Int is noinit

	# Index at which `self` ends in `items`, inclusively
	private var last_byte: Int is noinit

	redef var chars = new FlatStringCharView(self) is lazy

	redef var bytes = new FlatStringByteView(self) is lazy

	# Cache of the latest position (char) explored in the string
	var position: Int = 0
	# Cached position (bytes) in the NativeString underlying the String
	var bytepos: Int = first_byte is lateinit

	redef var length is lazy do
		if bytelen == 0 then return 0
		var st = first_byte
		var its = items
		var ln = 0
		var lst = last_byte
		while st <= lst do
			st += its.length_of_char_at(st)
			ln += 1
		end
		return ln
	end

	redef fun [](index) do return items.char_at(char_to_byte_index(index))

	# Index of the character `index` in `items`
	private fun char_to_byte_index(index: Int): Int do
		var ln = length
		assert index >= 0
		assert index < ln

		# Find best insertion point
		var delta_begin = index
		var delta_end = (ln - 1) - index
		var delta_cache = (position - index).abs
		var min = delta_begin
		var its = items

		if delta_cache < min then min = delta_cache
		if delta_end < min then min = delta_end

		var ns_i: Int
		var my_i: Int

		if min == delta_begin then
			ns_i = first_byte
			my_i = 0
		else if min == delta_cache then
			ns_i = bytepos
			my_i = position
		else
			ns_i = its.find_beginning_of_char_at(last_byte)
			my_i = length - 1
		end

		ns_i = its.char_to_byte_index_cached(index, my_i, ns_i)

		position = index
		bytepos = ns_i

		return ns_i
	end

	redef fun reversed
	do
		var b = new FlatBuffer.with_capacity(bytelen + 1)
		for i in [length - 1 .. 0].step(-1) do
			b.add self[i]
		end
		var s = b.to_s.as(FlatString)
		s.length = self.length
		return s
	end

	redef fun fast_cstring do return items.fast_cstring(first_byte)

	redef fun substring(from, count)
	do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		if (count + from) > length then count = length - from
		if count <= 0 then return ""
		var end_index = from + count - 1

		var bytefrom = char_to_byte_index(from)
		var byteto = char_to_byte_index(end_index)
		byteto += items.length_of_char_at(byteto) - 1

		var s = new FlatString.full(items, byteto - bytefrom + 1, bytefrom, byteto, count)
		return s
	end

	redef fun empty do return "".as(FlatString)

	redef fun to_upper
	do
		var outstr = new FlatBuffer.with_capacity(self.bytelen + 1)

		var mylen = length
		var pos = 0

		while pos < mylen do
			outstr.add(chars[pos].to_upper)
			pos += 1
		end

		return outstr.to_s
	end

	redef fun to_lower
	do
		var outstr = new FlatBuffer.with_capacity(self.bytelen + 1)

		var mylen = length
		var pos = 0

		while pos < mylen do
			outstr.add(chars[pos].to_lower)
			pos += 1
		end

		return outstr.to_s
	end

	redef fun output
	do
		for i in chars do i.output
	end

	##################################################
	#              String Specific Methods           #
	##################################################

	# Low-level creation of a new string with minimal data.
	#
	# `items` will be used as is, without copy, to retrieve the characters of the string.
	# Aliasing issues is the responsibility of the caller.
	private init with_infos(items: NativeString, bytelen, from, to: Int)
	do
		self.items = items
		self.bytelen = bytelen
		first_byte = from
		last_byte = to
	end

	# Low-level creation of a new string with all the data.
	#
	# `items` will be used as is, without copy, to retrieve the characters of the string.
	# Aliasing issues is the responsibility of the caller.
	private init full(items: NativeString, bytelen, from, to, length: Int)
	do
		self.items = items
		self.length = length
		self.bytelen = bytelen
		first_byte = from
		last_byte = to
	end

	redef fun to_cstring do
		if real_items != null then return real_items.as(not null)
		var new_items = new NativeString(bytelen + 1)
		self.items.copy_to(new_items, bytelen, first_byte, 0)
		new_items[bytelen] = 0u8
		real_items = new_items
		return new_items
	end

	redef fun ==(other)
	do
		if not other isa FlatString then return super

		if self.object_id == other.object_id then return true

		var my_length = bytelen

		if other.bytelen != my_length then return false

		var my_index = first_byte
		var its_index = other.first_byte

		var last_iteration = my_index + my_length

		var itsitems = other.items
		var myitems = self.items

		while my_index < last_iteration do
			if myitems[my_index] != itsitems[its_index] then return false
			my_index += 1
			its_index += 1
		end

		return true
	end

	redef fun <(other)
	do
		if not other isa FlatString then return super

		if self.object_id == other.object_id then return false

		var my_length = self.bytelen
		var its_length = other.bytelen

		var max = if my_length < its_length then my_length else its_length

		var myits = self.bytes
		var itsits = other.bytes

		for i in [0 .. max[ do
			var my_curr_char = myits[i]
			var its_curr_char = itsits[i]

			if my_curr_char != its_curr_char then
				if my_curr_char < its_curr_char then return true
				return false
			end
		end

		return my_length < its_length
	end

	redef fun +(o) do
		var s = o.to_s
		var slen = s.bytelen
		var mlen = bytelen
		var nlen = mlen + slen
		var mits = items
		var mifrom = first_byte
		if s isa FlatText then
			var sits = s.items
			var sifrom = s.as(FlatString).first_byte
			var ns = new NativeString(nlen + 1)
			mits.copy_to(ns, mlen, mifrom, 0)
			sits.copy_to(ns, slen, sifrom, mlen)
			return new FlatString.full(ns, nlen, 0, nlen - 1, length + o.length)
		else
			abort
		end
	end

	redef fun *(i) do
		var mybtlen = bytelen
		var new_bytelen = mybtlen * i
		var mylen = length
		var newlen = mylen * i
		var ns = new NativeString(new_bytelen + 1)
		ns[new_bytelen] = 0u8
		var offset = 0
		while i > 0 do
			items.copy_to(ns, bytelen, first_byte, offset)
			offset += mybtlen
			i -= 1
		end
		return new FlatString.full(ns, new_bytelen, 0, new_bytelen - 1, newlen)
	end


	redef fun hash
	do
		if hash_cache == null then
			# djb2 hash algorithm
			var h = 5381
			var i = first_byte

			var myitems = items

			while i <= last_byte do
				h = (h << 5) + h + myitems[i].to_i
				i += 1
			end

			hash_cache = h
		end

		return hash_cache.as(not null)
	end

	redef fun substrings do return new FlatSubstringsIter(self)
end

private class FlatStringCharReverseIterator
	super IndexedIterator[Char]

	var target: FlatString

	var curr_pos: Int

	init with_pos(tgt: FlatString, pos: Int)
	do
		init(tgt, pos)
	end

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos -= 1

	redef fun index do return curr_pos

end

private class FlatStringCharIterator
	super IndexedIterator[Char]

	var target: FlatString

	var max: Int

	var curr_pos: Int

	init with_pos(tgt: FlatString, pos: Int)
	do
		init(tgt, tgt.length - 1, pos)
	end

	redef fun is_ok do return curr_pos <= max

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos += 1

	redef fun index do return curr_pos

end

private class FlatStringCharView
	super StringCharView

	redef type SELFTYPE: FlatString

	redef fun [](index) do return target[index]

	redef fun iterator_from(start) do return new FlatStringCharIterator.with_pos(target, start)

	redef fun reverse_iterator_from(start) do return new FlatStringCharReverseIterator.with_pos(target, start)

end

private class FlatStringByteReverseIterator
	super IndexedIterator[Byte]

	var target: FlatString

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatString, pos: Int)
	do
		init(tgt, tgt.items, pos + tgt.first_byte)
	end

	redef fun is_ok do return curr_pos >= target.first_byte

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

	redef fun index do return curr_pos - target.first_byte

end

private class FlatStringByteIterator
	super IndexedIterator[Byte]

	var target: FlatString

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatString, pos: Int)
	do
		init(tgt, tgt.items, pos + tgt.first_byte)
	end

	redef fun is_ok do return curr_pos <= target.last_byte

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos += 1

	redef fun index do return curr_pos - target.first_byte

end

private class FlatStringByteView
	super StringByteView

	redef type SELFTYPE: FlatString

	redef fun [](index)
	do
		# Check that the index (+ first_byte) is not larger than last_byte
		# In other terms, if the index is valid
		assert index >= 0
		var target = self.target
		assert (index + target.first_byte) <= target.last_byte
		return target.items[index + target.first_byte]
	end

	redef fun iterator_from(start) do return new FlatStringByteIterator.with_pos(target, start)

	redef fun reverse_iterator_from(start) do return new FlatStringByteReverseIterator.with_pos(target, start)

end

redef class Buffer
	redef new do return new FlatBuffer

	redef new with_cap(i) do return new FlatBuffer.with_capacity(i)
end

# Mutable strings of characters.
class FlatBuffer
	super FlatText
	super Buffer

	redef var chars: Sequence[Char] = new FlatBufferCharView(self) is lazy

	redef var bytes: Sequence[Byte] = new FlatBufferByteView(self) is lazy

	redef var bytelen = 0

	# O(n)
	redef fun length do
		var max = bytelen
		if max == 0 then return 0
		var pos = 0
		var ln = 0
		var its = items
		while pos < max do
			pos += its.length_of_char_at(pos)
			ln += 1
		end
		return ln
	end

	private var capacity = 0

	redef fun fast_cstring do return items.fast_cstring(0)

	redef fun substrings do return new FlatSubstringsIter(self)

	# Re-copies the `NativeString` into a new one and sets it as the new `Buffer`
	#
	# This happens when an operation modifies the current `Buffer` and
	# the Copy-On-Write flag `written` is set at true.
	private fun reset do
		var nns = new NativeString(capacity)
		items.copy_to(nns, bytelen, 0, 0)
		items = nns
		written = false
	end

	# Shifts the content of the buffer by `len` bytes to the right, starting at byte `from`
	#
	# Internal only, does not modify bytelen or length, this is the caller's responsability
	private fun rshift_bytes(from: Int, len: Int) do
		var oit = items
		var nit = items
		if bytelen + len > capacity then
			capacity = capacity * 2 + 2
			nit = new NativeString(capacity)
			oit.copy_to(nit, 0, 0, from)
		end
		oit.copy_to(nit, bytelen - from, from, from + len)
	end

	# Shifts the content of the buffer by `len` bytes to the left, starting at `from`
	#
	# Internal only, does not modify bytelen or length, this is the caller's responsability
	private fun lshift_bytes(from: Int, len: Int) do
		items.copy_to(items, bytelen - from, from, from - len)
	end

	redef fun [](i)
	do
		assert i < length and i >= 0
		return items.char_at(items.char_to_byte_index(i))
	end

	redef fun []=(index, item)
	do
		assert index >= 0 and index <= length
		if written then reset
		is_dirty = true
		if index == length then
			add item
			return
		end
		var ip = items.char_to_byte_index(index)
		var c = items.char_at(ip)
		var clen = c.u8char_len
		var itemlen = item.u8char_len
		var size_diff = itemlen - clen
		if size_diff > 0 then
			rshift_bytes(ip + clen, size_diff)
		else if size_diff < 0 then
			lshift_bytes(ip + clen, -size_diff)
		end
		bytelen += size_diff
		items.set_char_at(ip, item)
	end

	redef fun add(c)
	do
		if written then reset
		is_dirty = true
		var clen = c.u8char_len
		enlarge(bytelen + clen)
		items.set_char_at(bytelen, c)
		bytelen += clen
	end

	private fun add_byte(b: Byte) do
		if written then reset
		is_dirty = true
		enlarge(bytelen + 1)
		items[bytelen] = b
		# FIXME: Might trigger errors
		bytelen += 1
	end

	redef fun clear do
		is_dirty = true
		if written then reset
		bytelen = 0
	end

	redef fun empty do return new Buffer

	redef fun enlarge(cap)
	do
		var c = capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		# The COW flag can be set at false here, since
		# it does a copy of the current `Buffer`
		written = false
		var a = new NativeString(c+1)
		if bytelen > 0 then items.copy_to(a, bytelen, 0, 0)
		items = a
		capacity = c
	end

	redef fun to_s
	do
		written = true
		if bytelen == 0 then items = new NativeString(1)
		return new FlatString.with_infos(items, bytelen, 0, bytelen - 1)
	end

	redef fun to_cstring
	do
		if is_dirty then
			var new_native = new NativeString(bytelen + 1)
			new_native[bytelen] = 0u8
			if length > 0 then items.copy_to(new_native, bytelen, 0, 0)
			real_items = new_native
			is_dirty = false
		end
		return real_items.as(not null)
	end

	# Create a new empty string.
	init do end

	# Low-level creation a new buffer with given data.
	#
	# `items` will be used as is, without copy, to store the characters of the buffer.
	# Aliasing issues is the responsibility of the caller.
	#
	# If `items` is shared, `written` should be set to true after the creation
	# so that a modification will do a copy-on-write.
	private init with_infos(items: NativeString, capacity, bytelen: Int)
	do
		self.items = items
		self.capacity = capacity
		self.bytelen = bytelen
	end

	# Create a new string copied from `s`.
	init from(s: Text)
	do
		items = new NativeString(s.bytelen)
		if s isa FlatText then
			items = s.items
		else
			for i in substrings do i.as(FlatString).items.copy_to(items, i.bytelen, 0, 0)
		end
		bytelen = s.bytelen
		capacity = s.bytelen
		written = true
	end

	# Create a new empty string with a given capacity.
	init with_capacity(cap: Int)
	do
		assert cap >= 0
		items = new NativeString(cap + 1)
		capacity = cap
		bytelen = 0
	end

	redef fun append(s)
	do
		if s.is_empty then return
		is_dirty = true
		var sl = s.bytelen
		enlarge(bytelen + sl)
		if s isa FlatString then
			s.items.copy_to(items, sl, s.first_byte, bytelen)
		else if s isa FlatBuffer then
			s.items.copy_to(items, sl, 0, bytelen)
		else
			for i in s.substrings do append i
			return
		end
		bytelen += sl
	end

	# Copies the content of self in `dest`
	fun copy(start: Int, len: Int, dest: Buffer, new_start: Int)
	do
		var self_chars = self.chars
		var dest_chars = dest.chars
		for i in [0..len-1] do
			dest_chars[new_start+i] = self_chars[start+i]
		end
	end

	redef fun substring(from, count)
	do
		assert count >= 0
		if from < 0 then from = 0
		if (from + count) > length then count = length - from
		if count != 0 then
			var bytefrom = items.char_to_byte_index(from)
			var byteto = items.char_to_byte_index(count + from - 1)
			byteto += items.char_at(byteto).u8char_len - 1
			var byte_length = byteto - bytefrom + 1
			var r_items = new NativeString(byte_length)
			items.copy_to(r_items, byte_length, bytefrom, 0)
			return new FlatBuffer.with_infos(r_items, byte_length, byte_length)
		else
			return new Buffer
		end
	end

	redef fun reverse
	do
		written = false
		var ns = new FlatBuffer.with_capacity(capacity)
		for i in chars.reverse_iterator do ns.add i
		items = ns.items
	end

	redef fun times(repeats)
	do
		var x = new FlatString.with_infos(items, bytelen, 0, bytelen - 1)
		for i in [1 .. repeats[ do
			append(x)
		end
	end

	redef fun upper
	do
		if written then reset
		for i in [0 .. length[ do self[i] = self[i].to_upper
	end

	redef fun lower
	do
		if written then reset
		for i in [0 .. length[ do self[i] = self[i].to_lower
	end
end

private class FlatBufferByteReverseIterator
	super IndexedIterator[Byte]

	var target: FlatBuffer

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		init(tgt, tgt.items, pos)
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

end

private class FlatBufferByteView
	super BufferByteView

	redef type SELFTYPE: FlatBuffer

	redef fun [](index) do return target.items[index]

	redef fun []=(index, item)
	do
		assert index >= 0 and index <= target.bytelen
		if index == target.bytelen then
			add(item)
			return
		end
		target.items[index] = item
	end

	redef fun push(c)
	do
		target.add_byte(c)
	end

	fun enlarge(cap: Int)
	do
		target.enlarge(cap)
	end

	redef fun append(s)
	do
		var s_length = s.length
		if target.capacity < (target.length + s_length) then enlarge(s_length + target.length)
		var pos = target.length
		var its = target.items
		for i in s do
			its[pos] = i
			pos += 1
		end
		target.length += s.length
	end

	redef fun iterator_from(pos) do return new FlatBufferByteIterator.with_pos(target, pos)

	redef fun reverse_iterator_from(pos) do return new FlatBufferByteReverseIterator.with_pos(target, pos)

end

private class FlatBufferByteIterator
	super IndexedIterator[Byte]

	var target: FlatBuffer

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		init(tgt, tgt.items, pos)
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos < target.bytelen

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos += 1

end

private class FlatBufferCharReverseIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		init(tgt, pos)
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos -= 1

end

private class FlatBufferCharView
	super BufferCharView

	redef type SELFTYPE: FlatBuffer

	redef fun [](index) do return target[index]

	redef fun []=(index, item)
	do
		assert index >= 0 and index <= length
		if index == length then
			add(item)
			return
		end
		target[index] = item
	end

	redef fun push(c)
	do
		target.add(c)
	end

	redef fun add(c)
	do
		target.add(c)
	end

	fun enlarge(cap: Int)
	do
		target.enlarge(cap)
	end

	redef fun append(s)
	do
		var s_length = s.length
		if target.capacity < s.length then enlarge(s_length + target.length)
		for i in s do target.add i
	end

	redef fun iterator_from(pos) do return new FlatBufferCharIterator.with_pos(target, pos)

	redef fun reverse_iterator_from(pos) do return new FlatBufferCharReverseIterator.with_pos(target, pos)

end

private class FlatBufferCharIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var max: Int

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		init(tgt, tgt.length - 1, pos)
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos <= max

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos += 1

end

redef class NativeString
	redef fun to_s
	do
		return to_s_with_length(cstring_length)
	end

	# Returns `self` as a String of `length`.
	redef fun to_s_with_length(length): FlatString
	do
		assert length >= 0
		var str = new FlatString.with_infos(self, length, 0, length - 1)
		return str
	end

	# Returns `self` as a new String.
	redef fun to_s_with_copy: FlatString
	do
		var length = cstring_length
		var new_self = new NativeString(length + 1)
		copy_to(new_self, length, 0, 0)
		var str = new FlatString.with_infos(new_self, length, 0, length - 1)
		new_self[length] = 0u8
		str.real_items = new_self
		return str
	end

	# Sets the next bytes at position `pos` to the value of `c`, encoded in UTF-8
	#
	# Very unsafe, make sure to have room for this char prior to calling this function.
	private fun set_char_at(pos: Int, c: Char) do
		var ln = c.u8char_len
		native_set_char(pos, c, ln)
	end

	private fun native_set_char(pos: Int, c: Char, ln: Int) `{
		char* dst = self + pos;
		switch(ln){
			case 1:
				dst[0] = c;
				break;
			case 2:
				dst[0] = 0xC0 | ((c & 0x7C0) >> 6);
				dst[1] = 0x80 | (c & 0x3F);
				break;
			case 3:
				dst[0] = 0xE0 | ((c & 0xF000) >> 12);
				dst[1] = 0x80 | ((c & 0xFC0) >> 6);
				dst[2] = 0x80 | (c & 0x3F);
				break;
			case 4:
				dst[0] = 0xF0 | ((c & 0x1C0000) >> 18);
				dst[1] = 0x80 | ((c & 0x3F000) >> 12);
				dst[2] = 0x80 | ((c & 0xFC0) >> 6);
				dst[3] = 0x80 | (c & 0x3F);
				break;
		}
	`}
end

redef class Int
	redef fun to_base(base, signed)
	do
		var l = digit_count(base)
		var s = new FlatBuffer.from(" " * l)
		fill_buffer(s, base, signed)
		return s.to_s
	end

	# return displayable int in base 10 and signed
	#
	#     assert 1.to_s            == "1"
	#     assert (-123).to_s       == "-123"
	redef fun to_s do
		# Fast case for common numbers
		if self == 0 then return "0"
		if self == 1 then return "1"

		var nslen = int_to_s_len
		var ns = new NativeString(nslen + 1)
		ns[nslen] = 0u8
		native_int_to_s(ns, nslen + 1)
		return new FlatString.full(ns, nslen, 0, nslen - 1, nslen)
	end
end

redef class Array[E]

	# Fast implementation
	redef fun plain_to_s
	do
		var l = length
		if l == 0 then return ""
		if l == 1 then if self[0] == null then return "" else return self[0].to_s
		var its = _items
		var na = new NativeArray[String](l)
		var i = 0
		var sl = 0
		var mypos = 0
		while i < l do
			var itsi = its[i]
			if itsi == null then
				i += 1
				continue
			end
			var tmp = itsi.to_s
			sl += tmp.bytelen
			na[mypos] = tmp
			i += 1
			mypos += 1
		end
		var ns = new NativeString(sl + 1)
		ns[sl] = 0u8
		i = 0
		var off = 0
		while i < mypos do
			var tmp = na[i]
			if tmp isa FlatString then
				var tpl = tmp.bytelen
				tmp.items.copy_to(ns, tpl, tmp.first_byte, off)
				off += tpl
			else
				for j in tmp.substrings do
					var s = j.as(FlatString)
					var slen = s.bytelen
					s.items.copy_to(ns, slen, s.first_byte, off)
					off += slen
				end
			end
			i += 1
		end
		return ns.to_s_with_length(sl)
	end
end

redef class NativeArray[E]
	redef fun native_to_s do
		assert self isa NativeArray[String]
		var l = length
		var na = self
		var i = 0
		var sl = 0
		var mypos = 0
		while i < l do
			sl += na[i].bytelen
			i += 1
			mypos += 1
		end
		var ns = new NativeString(sl + 1)
		ns[sl] = 0u8
		i = 0
		var off = 0
		while i < mypos do
			var tmp = na[i]
			if tmp isa FlatString then
				var tpl = tmp.bytelen
				tmp.items.copy_to(ns, tpl, tmp.first_byte, off)
				off += tpl
			else
				for j in tmp.substrings do
					var s = j.as(FlatString)
					var slen = s.bytelen
					s.items.copy_to(ns, slen, s.first_byte, off)
					off += slen
				end
			end
			i += 1
		end
		return ns.to_s_with_length(sl)
	end
end

redef class Map[K,V]
	redef fun join(sep, couple_sep)
	do
		if is_empty then return ""

		var s = new Buffer # Result

		# Concat first item
		var i = iterator
		var k = i.key
		var e = i.item
		s.append("{k or else "<null>"}{couple_sep}{e or else "<null>"}")

		# Concat other items
		i.next
		while i.is_ok do
			s.append(sep)
			k = i.key
			e = i.item
			s.append("{k or else "<null>"}{couple_sep}{e or else "<null>"}")
			i.next
		end
		return s.to_s
	end
end
