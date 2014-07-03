# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Implementation of UTF-8 Strings in Nit.
module utf8

import standard
intrude import standard::string

redef class Char

	redef fun ==(o)
	do
		if o isa NitChar then
			if o.len == 1 then return o == self
			return false
		end
		return super
	end

end

# A Nit char is a UTF-8 char as defined in RFC-3629, e.g. 1-4 Bytes
class NitChar
	super Discrete

	# Real length of the char in UTF8
	#
	# As per the specification :
	#
	#  Length  |        UTF-8 octet sequence
	#          |              (binary)
	# ---------+-------------------------------------------------
	#  1       | 0xxxxxxx
	#  2       | 110xxxxx 10xxxxxx
	#  3       | 1110xxxx 10xxxxxx 10xxxxxx
	#  4       | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
	var len: Int

	# Position in containing NativeString
	var pos: Int

	# C char* wrapping the char
	var container: NativeString

	# Returns upper-cased version of self.
	# FIXME: Support more than ASCII characters.
	fun to_upper: NitChar
	do
		if len != 1 then return self
		return new NitChar(1, 0, container[pos].to_upper.to_s.as(FlatString).items)
	end

	# Returns lower-cased version of self.
	# FIXME: Support more than ASCII characters.
	fun to_lower: NitChar
	do
		if len != 1 then return self
		return new NitChar(1, 0, container[pos].to_lower.to_s.as(FlatString).items)
	end

	redef fun ==(o)
	do
		if o == null then return false
		var mylen = len
		if o isa Char then
			if mylen == 1 then return container[pos] == o
		else if o isa NitChar then
			var olen = o.len
			if olen != mylen then return false
			var mys = container
			var its = o.container
			var mypos = pos
			var opos = o.pos
			for i in [0..mylen[ do
				if mys[mypos] != its[opos] then return false
				mypos += 1
				opos += 1
			end
			return true
		end
		return false
	end

	redef fun to_s
	do
		return new FlatString.with_infos(container, len, pos, pos + len)
	end

end

redef class FlatString

	# Returns a UTF-8 compliant version of self.
	fun to_utf8: UTF8String
	do
		var real_items = new Array[NitChar]
		var pos = index_from
		var items = items
		while pos <= index_to do
			var int = items[pos].ascii
			if int.bin_and(0x80) == 0 then
				real_items.add(new NitChar(1,pos, items))
				pos += 1
			else if int.bin_and(0xE0) == 0xC0 then
				real_items.add(new NitChar(2, pos, items))
				pos += 2
			else if int.bin_and(0xF0) == 0xE0 then
				real_items.add(new NitChar(3, pos, items))
				pos += 3
			else
				real_items.add(new NitChar(4, pos, items))
				pos += 4
			end
		end
		return new UTF8String.with_items(real_items)
	end

end

# A UTF8String is a String composed of UTF-8 chars.
# The old Strings could be composed of UTF-8 chars, however they could not be aware of their composition
# This implementation fixes this behaviour.
class UTF8String

	# Array of Chars
	var real_items: SequenceRead[NitChar]

	# Point in real_items (can be shared) where the string starts.
	var index_from: Int

	# Length in UTF8 chars of the String
	#
	#      assert "ハロー世界, 日本語です".as(FlatString).to_utf8.length == 12
	var length: Int

	# View on the chars of self
	var chars: SequenceRead[NitChar] = new UTF8Chars(self)

	init with_items(items: SequenceRead[NitChar]) do
		real_items = items
		length = real_items.length
	end

	init with_infos(items: SequenceRead[NitChar], from, length : Int)
	do
		real_items = items
		index_from = from
		self.length = length
	end

	# Returns a new UTF8String
	fun reversed: UTF8String
	do
		var new_items = new Array[NitChar].with_capacity(real_items.length)
		for i in real_items.reverse_iterator do
			new_items.add(i)
		end
		return new UTF8String.with_items(new_items)
	end

	# Builds a substring starting at `from` and `length` long
	# REQUIRES: length >= 0
	fun substring(from, length: Int): UTF8String do
		assert length >= 0

		if from < 0 then
			length += from
			if length < 0 then length = 0
			from = 0
		end

		var max = index_from + self.length

		var newmax = from + length

		if newmax > max then length = self.length - from

		if length == 0 then return new UTF8String.with_infos(real_items, 0, 0)

		return new UTF8String.with_infos(real_items, from, length)
	end

	# Builds a substring starting at `from`
	fun substring_from(from: Int): UTF8String do return substring(from, length)

	# Returns an upper-cased self
	# FIXME: ASCII only
	fun to_upper: UTF8String do
		var new_items = new Array[NitChar].with_capacity(self.length)
		for i in real_items.iterator do
			new_items.push(i.to_upper)
		end
		return new UTF8String.with_items(new_items)
	end

	# Returns a lower-cased self
	# FIXME: ASCII only
	fun to_lower: UTF8String do
		var new_items = new Array[NitChar].with_capacity(self.length)
		for i in real_items.iterator do
			new_items.push(i.to_lower)
		end
		return new UTF8String.with_items(new_items)
	end

	# Returns an empty string
	fun empty: UTF8String do return once new UTF8String.with_infos(new Array[NitChar],0,0)

	# Concatenates two UTF-8 Strings
	fun +(o: UTF8String): UTF8String
	do
		var n = new Array[NitChar].with_capacity(length + o.length)
		for i in self.chars do n.push(i)
		for i in o.chars do n.push(i)
		return new UTF8String.with_infos(n, 0, length + o.length)
	end

	# Self repeated `rep` times.
	fun *(rep: Int): UTF8String
	do
		var n = new Array[NitChar].with_capacity(length * rep)
		for i in [0..rep[ do
			for j in self.chars do
				n.push(j)
			end
		end
		return new UTF8String.with_infos(n, 0, length * rep)
	end

	redef fun ==(o)
	do
		if not o isa UTF8String then return false
		if o.length != self.length then return false
		var oit = o.chars.iterator
		for i in self.chars do
			if i != oit.item then return false
			oit.next
		end
		return true
	end

end

private class UTF8Chars
	super SequenceRead[NitChar]

	var tgt: UTF8String

	init(str: UTF8String) do tgt = str

	redef fun iterator: IndexedIterator[NitChar] do return new UTF8StringIterator(self)

	redef fun length do return tgt.length

	redef fun [](i)
	do
		assert i < length
		return tgt.real_items[tgt.index_from + i]
	end
end

private class UTF8StringIterator
	super IndexedIterator[NitChar]

	var tgt: UTF8Chars

	var curr_pos: Int

	var max: Int

	init(str: UTF8Chars)
	do
		tgt = str
		curr_pos = 0
		max = curr_pos + str.length - 1
	end

	redef fun is_ok do return curr_pos <= max

	redef fun item
	do
		assert is_ok
		return tgt[curr_pos]
	end

	redef fun next
	do
		curr_pos += 1
	end

	redef fun index do return curr_pos
end

