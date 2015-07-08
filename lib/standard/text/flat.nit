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

	# Index in _items of the start of the string
	private var index_from: Int is noinit

	# Indes in _items of the last item of the string
	private var index_to: Int is noinit

	redef var chars = new FlatStringCharView(self) is lazy

	redef var bytes = new FlatStringByteView(self) is lazy

	redef fun [](index)
	do
		# Check that the index (+ index_from) is not larger than indexTo
		# In other terms, if the index is valid
		assert index >= 0
		assert (index + index_from) <= index_to
		return items[index + index_from]
	end

	################################################
	#       AbstractString specific methods        #
	################################################

	redef fun reversed
	do
		var native = new NativeString(self.length + 1)
		var length = self.length
		var items = self.items
		var pos = 0
		var ipos = length-1
		while pos < length do
			native[pos] = items[ipos]
			pos += 1
			ipos -= 1
		end
		return native.to_s_with_length(self.length)
	end

	redef fun fast_cstring do return items.fast_cstring(index_from)

	redef fun substring(from, count)
	do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		var new_from = index_from + from

		if (new_from + count) > index_to then
			var new_len = index_to - new_from + 1
			if new_len <= 0 then return empty
			return new FlatString.with_infos(items, new_len, new_from, index_to)
		end

		if count <= 0 then return empty

		var to = new_from + count - 1

		return new FlatString.with_infos(items, to - new_from + 1, new_from, to)
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

	# Low-level creation of a new string with given data.
	#
	# `items` will be used as is, without copy, to retrieve the characters of the string.
	# Aliasing issues is the responsibility of the caller.
	private init with_infos(items: NativeString, length: Int, from: Int, to: Int)
	do
		self.items = items
		self.length = length
		index_from = from
		index_to = to
	end

	redef fun to_cstring
	do
		if real_items != null then
			return real_items.as(not null)
		else
			var newItems = new NativeString(length + 1)
			self.items.copy_to(newItems, length, index_from, 0)
			newItems[length] = '\0'
			self.real_items = newItems
			return newItems
		end
	end

	redef fun ==(other)
	do
		if not other isa FlatString then return super

		if self.object_id == other.object_id then return true

		var my_length = length

		if other.length != my_length then return false

		var my_index = index_from
		var its_index = other.index_from

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

		var my_curr_char : Char
		var its_curr_char : Char

		var my_length = self.length
		var its_length = other.length
		var max

		if my_length < its_length then
			max = my_length
		else
			max = its_length
		end

		var my_chars = chars
		var its_chars = other.chars

		var pos = 0
		while pos < max do
			my_curr_char = my_chars[pos]
			its_curr_char = its_chars[pos]

			if my_curr_char != its_curr_char then
				if my_curr_char < its_curr_char then return true
				return false
			end

			pos += 1
		end

		return my_length < its_length
	end

	redef fun +(s)
	do
		var my_length = self.length
		var its_length = s.length

		var total_length = my_length + its_length

		var target_string = new NativeString(my_length + its_length + 1)

		self.items.copy_to(target_string, my_length, index_from, 0)
		if s isa FlatString then
			s.items.copy_to(target_string, its_length, s.index_from, my_length)
		else if s isa FlatBuffer then
			s.items.copy_to(target_string, its_length, 0, my_length)
		else
			var curr_pos = my_length
			for i in [0 .. s.bytelen[ do
				target_string[curr_pos] = s.bytes[i]
				curr_pos += 1
			end
		end

		target_string[total_length] = '\0'

		return target_string.to_s_with_length(total_length)
	end

	redef fun *(i)
	do
		assert i >= 0

		var my_length = self.length

		var final_length = my_length * i

		var my_items = self.items

		var target_string = new NativeString(final_length + 1)

		target_string[final_length] = '\0'

		var current_last = 0

		for iteration in [1 .. i] do
			my_items.copy_to(target_string, my_length, 0, current_last)
			current_last += my_length
		end

		return target_string.to_s_with_length(final_length)
	end

	redef fun hash
	do
		if hash_cache == null then
			# djb2 hash algorithm
			var h = 5381
			var i = index_from

			var myitems = items

			while i <= index_to do
				h = h.lshift(5) + h + myitems[i].ascii
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
		target = tgt
		curr_pos = pos
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
		target = tgt
		curr_pos = pos
		max = tgt.length - 1
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
		target = tgt
		target_items = tgt.items
		curr_pos = pos + tgt.index_from
	end

	redef fun is_ok do return curr_pos >= target.index_from

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

	redef fun index do return curr_pos - target.index_from

end

private class FlatStringByteIterator
	super IndexedIterator[Byte]

	var target: FlatString

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatString, pos: Int)
	do
		target = tgt
		target_items = tgt.items
		curr_pos = pos + target.index_from
	end

	redef fun is_ok do return curr_pos <= target.index_to

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos += 1

	redef fun index do return curr_pos - target.index_from

end

private class FlatStringByteView
	super StringByteView

	redef type SELFTYPE: FlatString

	redef fun [](index)
	do
		# Check that the index (+ index_from) is not larger than indexTo
		# In other terms, if the index is valid
		assert index >= 0
		var target = self.target
		assert (index + target.index_from) <= target.index_to
		return target.items[index + target.index_from]
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

	private var capacity: Int = 0

	redef fun fast_cstring do return items.fast_cstring(0)

	redef fun substrings do return new FlatSubstringsIter(self)

	# Re-copies the `NativeString` into a new one and sets it as the new `Buffer`
	#
	# This happens when an operation modifies the current `Buffer` and
	# the Copy-On-Write flag `written` is set at true.
	private fun reset do
		var nns = new NativeString(capacity)
		items.copy_to(nns, length, 0, 0)
		items = nns
		written = false
	end

	redef fun [](index)
	do
		assert index >= 0
		assert index  < length
		return items[index]
	end

	redef fun []=(index, item)
	do
		is_dirty = true
		if index == length then
			add(item)
			return
		end
		if written then reset
		assert index >= 0 and index < length
		items[index] = item
	end

	redef fun add(c)
	do
		is_dirty = true
		if capacity <= length then enlarge(length + 5)
		items[length] = c.ascii.to_b
		length += 1
	end

	private fun add_byte(b: Byte) do
		is_dirty = true
		if capacity <= length then enlarge(length + 5)
		items[bytelen] = b
		length += 1
	end

	redef fun clear do
		is_dirty = true
		if written then reset
		length = 0
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
		if length > 0 then items.copy_to(a, length, 0, 0)
		items = a
		capacity = c
	end

	redef fun to_s
	do
		written = true
		if length == 0 then items = new NativeString(1)
		return new FlatString.with_infos(items, length, 0, length - 1)
	end

	redef fun to_cstring
	do
		if is_dirty then
			var new_native = new NativeString(length + 1)
			new_native[length] = '\0'
			if length > 0 then items.copy_to(new_native, length, 0, 0)
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
	private init with_infos(items: NativeString, capacity, length: Int)
	do
		self.items = items
		self.length = length
		self.capacity = capacity
	end

	# Create a new string copied from `s`.
	init from(s: Text)
	do
		capacity = s.length + 1
		length = s.length
		items = new NativeString(capacity)
		if s isa FlatString then
			s.items.copy_to(items, length, s.index_from, 0)
		else if s isa FlatBuffer then
			s.items.copy_to(items, length, 0, 0)
		else
			var curr_pos = 0
			for i in [0..s.length[ do
				var c = s.chars[i]
				items[curr_pos] = c
				curr_pos += 1
			end
		end
	end

	# Create a new empty string with a given capacity.
	init with_capacity(cap: Int)
	do
		assert cap >= 0
		items = new NativeString(cap+1)
		capacity = cap
		length = 0
	end

	redef fun append(s)
	do
		if s.is_empty then return
		is_dirty = true
		var sl = s.length
		if capacity < length + sl then enlarge(length + sl)
		if s isa FlatString then
			s.items.copy_to(items, sl, s.index_from, length)
		else if s isa FlatBuffer then
			s.items.copy_to(items, sl, 0, length)
		else
			var curr_pos = self.length
			for i in [0..s.length[ do
				var c = s.chars[i]
				items[curr_pos] = c
				curr_pos += 1
			end
		end
		length += sl
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
		count += from
		if from < 0 then from = 0
		if count > length then count = length
		if from < count then
			var len = count - from
			var r_items = new NativeString(len)
			items.copy_to(r_items, len, from, 0)
			var r = new FlatBuffer.with_infos(r_items, len, len)
			return r
		else
			return new Buffer
		end
	end

	redef fun reverse
	do
		written = false
		var ns = new NativeString(capacity)
		var si = length - 1
		var ni = 0
		var it = items
		while si >= 0 do
			ns[ni] = it[si]
			ni += 1
			si -= 1
		end
		items = ns
	end

	redef fun times(repeats)
	do
		var x = new FlatString.with_infos(items, length, 0, length - 1)
		for i in [1..repeats[ do
			append(x)
		end
	end

	redef fun upper
	do
		if written then reset
		var id = length - 1
		while id >= 0 do
			self[id] = self[id].to_upper
			id -= 1
		end
	end

	redef fun lower
	do
		if written then reset
		var id = length - 1
		while id >= 0 do
			self[id] = self[id].to_lower
			id -= 1
		end
	end
end

private class FlatBufferByteReverseIterator
	super IndexedIterator[Byte]

	var target: FlatBuffer

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		target = tgt
		if tgt.length > 0 then target_items = tgt.items
		curr_pos = pos
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
		target = tgt
		if tgt.length > 0 then target_items = tgt.items
		curr_pos = pos
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos < target.length

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos += 1

end

private class FlatBufferCharReverseIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		target = tgt
		curr_pos = pos
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

private class FlatBufferIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		target = tgt
		if tgt.length > 0 then target_items = tgt.items
		curr_pos = pos
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos < target.length

	redef fun item do return target_items[curr_pos]

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
		new_self[length] = '\0'
		str.real_items = new_self
		return str
	end
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
		ns[nslen] = '\0'
		native_int_to_s(ns, nslen + 1)
		return ns.to_s_with_length(nslen)
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
			sl += tmp.length
			na[mypos] = tmp
			i += 1
			mypos += 1
		end
		var ns = new NativeString(sl + 1)
		ns[sl] = '\0'
		i = 0
		var off = 0
		while i < mypos do
			var tmp = na[i]
			var tpl = tmp.length
			if tmp isa FlatString then
				tmp.items.copy_to(ns, tpl, tmp.index_from, off)
				off += tpl
			else
				for j in tmp.substrings do
					var s = j.as(FlatString)
					var slen = s.length
					s.items.copy_to(ns, slen, s.index_from, off)
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
			sl += na[i].length
			i += 1
			mypos += 1
		end
		var ns = new NativeString(sl + 1)
		ns[sl] = '\0'
		i = 0
		var off = 0
		while i < mypos do
			var tmp = na[i]
			var tpl = tmp.length
			if tmp isa FlatString then
				tmp.items.copy_to(ns, tpl, tmp.index_from, off)
				off += tpl
			else
				for j in tmp.substrings do
					var s = j.as(FlatString)
					var slen = s.length
					s.items.copy_to(ns, slen, s.index_from, off)
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
