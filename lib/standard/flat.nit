# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Basic manipulations of flat strings of characters
module flat

intrude import text

`{
#include <stdio.h>
`}

###############################################################################
# Refinement of Text, String, Buffer                                          #
###############################################################################

redef class Text
	fun flatten: FlatText is abstract
end

redef class String

	redef fun to_s do return self

	redef fun to_cstring
	do
		if self isa FlatString then
			if _index_from > 0 or _index_to != _items.cstring_length - 1 then
				var newItems = calloc_string(_length + 1)
				self.items.copy_to(newItems, _length, _index_from, 0)
				newItems[length] = '\0'
				self._real_items = newItems
				return _real_items.as(not null)
			end
			return _items
		end
		# Should never happen
		return super
	end

	# Mangles a string to be a unique string only made of alphanumeric characters
	fun to_cmangle: String
	do
		var res = new FlatBuffer
		var underscore = false
		for c in self.chars do
			if (c >= 'a' and c <= 'z') or (c >='A' and c <= 'Z') then
				res.add(c)
				underscore = false
				continue
			end
			if underscore then
				res.append('_'.ascii.to_s)
				res.add('d')
			end
			if c >= '0' and c <= '9' then
				res.add(c)
				underscore = false
			else if c == '_' then
				res.add(c)
				underscore = true
			else
				res.add('_')
				res.append(c.ascii.to_s)
				res.add('d')
				underscore = false
			end
		end
		return res.to_s
	end

	# Escape " \ ' and non printable characters using the rules of literal C strings and characters
	#
	#     assert "abAB12<>&".escape_to_c         == "abAB12<>&"
	#     assert "\n\"'\\".escape_to_c         == "\\n\\\"\\'\\\\"
	fun escape_to_c: String
	do
		var b = new FlatBuffer
		for c in self.chars do
			if c == '\n' then
				b.append("\\n")
			else if c == '\0' then
				b.append("\\0")
			else if c == '"' then
				b.append("\\\"")
			else if c == '\'' then
				b.append("\\\'")
			else if c == '\\' then
				b.append("\\\\")
			else if c.ascii < 32 then
				b.append("\\{c.ascii.to_base(8, false)}")
			else
				b.add(c)
			end
		end
		return b.to_s
	end

end

redef class Buffer

	# Returns an immutable copy of self
	redef fun to_s do return super

	redef fun cache
	do
		if self isa FlatBuffer then
			var new_native = calloc_string(length + 1)
			new_native[length] = '\0'
			_items.copy_to(new_native, length, 0, 0)
			_real_items = new_native
			is_dirty = false
		end
	end

	redef fun to_cstring do
		if self isa FlatBuffer then
			if self.is_dirty then
				cache
			else
				if _real_items == null then
					cache
				end
			end
			return _real_items.as(not null)
		end
		return super
	end

end

###############################################################################
# FlatText                                                                        #
###############################################################################

# Common subclass for FlatString and FlatBuffer
abstract class FlatText
	super Text

	# C String (char*) representing the items of self
	readable private var _items: NativeString

	# Real items (useful for substrings and to_cstring combined)
	# Also useful for Flat buffers as cache
	private var _real_items: nullable NativeString = null

	redef fun flatten do return self

end

# Immutable flat strings of characters.
class FlatString
	super FlatText
	super String

	redef type SELFTYPE : FlatString

	private var _length : Int

	redef fun length do return _length

	redef fun length=(size) do _length = size

	# Index in _items of the start of the string
	readable private var _index_from: Int

	# Index in _items of the last item of the string
	readable private var _index_to: Int

	# Creates a new FlatString with all the informations
	#
	# /!\ To be used by no one except NativeString /!\
	#
	private init with_infos(items: NativeString, len: Int, from: Int, to: Int)
	do
		self._items = items
		_length = len
		_index_from = from
		_index_to = to
		self.char_view = new FlatStringCharView(self)
	end

	redef fun empty do return "".as(FlatString)

	#     assert "abcd".substring(1, 2)         ==  "bc"
	#     assert "abcd".substring(-1, )         ==  "a"
	#     assert "abcd".substring(1, 0)         ==  ""
	#     assert "abcd".substring(2, 5)         ==  "cd"
	redef fun substring(from, count)
	do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		if count == 0 then return "".as(FlatString)

		var realFrom = _index_from + from

		if (realFrom + count) > _index_to then return new FlatString.with_infos(_items, _index_to - realFrom + 1, realFrom, _index_to)

		var to = realFrom + count - 1

		return new FlatString.with_infos(_items, to - realFrom + 1, realFrom, to)
	end

	#	assert "abcd".has_substring("ab",0)
	#	assert "abcd".has_substring("cd",2)
	redef fun has_substring(str, pos) do return super

	#	assert "abcd".to_upper == "ABCD"
	redef fun to_upper
	do
		var outstr = calloc_string(self._length + 1)
		var out_index = 0

		var myitems = self._items
		var index_from = self._index_from
		var max = self._index_to

		while index_from <= max do
			outstr[out_index] = myitems[index_from].to_upper
			out_index += 1
			index_from += 1
		end

		outstr[self.length] = '\0'

		return outstr.to_s_with_length(self._length).as(FlatString)
	end

	#	assert "ABCD".to_lower == "abcd"
	redef fun to_lower
	do
		var outstr = calloc_string(self._length + 1)
		var out_index = 0

		var myitems = self._items
		var index_from = self._index_from
		var max = self._index_to

		while index_from <= max do
			outstr[out_index] = myitems[index_from].to_lower
			out_index += 1
			index_from += 1
		end

		outstr[self.length] = '\0'

		return outstr.to_s_with_length(self._length).as(FlatString)
	end

	redef fun output
	do
		var i = self._index_from
		var imax = self._index_to
		while i <= imax do
			_items[i].output
			i += 1
		end
	end

	#     assert "hello " + "world!" == "hello world!"
	redef fun +(s)
	do
		var my_length = self._length
		var its_length = s.length

		var total_length = my_length + its_length

		var target_string = calloc_string(my_length + its_length + 1)

		self._items.copy_to(target_string, my_length, _index_from, 0)

		if s isa FlatString then
			s._items.copy_to(target_string, its_length, s._index_from, my_length)
		else if s isa FlatBuffer then
			s._items.copy_to(target_string, its_length, 0, my_length)
		end

		target_string[total_length] = '\0'

		return target_string.to_s_with_length(total_length).as(FlatString)
	end

	#     assert "abc"*3           == "abcabcabc"
	#     assert "abc"*1           == "abc"
	#     assert "abc"*0           == ""
	redef fun *(i)
	do
		assert i >= 0

		var my_length = self._length

		var final_length = my_length * i

		var my_items = self._items

		var target_string = calloc_string((final_length) + 1)

		target_string[final_length] = '\0'

		var current_last = 0

		for iteration in [1 .. i] do
			my_items.copy_to(target_string, my_length, 0, current_last)
			current_last += my_length
		end

		return target_string.to_s_with_length(final_length).as(FlatString)
	end

	redef fun reverse
	do
		var native = calloc_string(self.length + 1)
		var reviter = chars.reverse_iterator
		var pos = 0
		while reviter.is_ok do
			native[pos] = reviter.item
			pos += 1
			reviter.next
		end
		return native.to_s_with_length(self.length).as(FlatString)
	end

	redef fun to_s do return self

	redef fun ==(other)
	do
		if other isa FlatString then
			if self._items.object_id == other._items.object_id and self.index_to == other.index_to and self.index_from == other.index_from then return true
		end
		return super
	end
end

private class FlatStringReverseIterator
	super IndexedIterator[Char]

	var target: FlatString

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatString, pos: Int)
	do
		target = tgt
		target_items = tgt.items
		curr_pos = pos + tgt.index_from
	end

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

	redef fun index do return curr_pos - target.index_from

end

private class FlatStringIterator
	super IndexedIterator[Char]

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

private class FlatStringCharView
	super StringCharView

	redef type SELFTYPE: FlatString

	redef fun [](index)
	do
		# Check that the index (+ index_from) is not larger than indexTo
		# In other terms, if the index is valid
		assert index >= 0
		assert (index + target._index_from) <= target._index_to
		return target._items[index + target._index_from]
	end

	redef fun iterator_from(pos) do return new FlatStringIterator.with_pos(target, pos)

	redef fun reverse_iterator_from(pos) do return new FlatStringReverseIterator.with_pos(target, pos)
end

# Mutable strings of characters.
class FlatBuffer
	super FlatText
	super Buffer

	private var _length: Int

	redef type SELFTYPE: FlatBuffer

	redef fun empty do return new FlatBuffer.from("")

	redef fun length do return _length

	redef fun length=(size) do _length = size

	redef fun substring(from, count)
	do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		if from + count > length then count = length - from

		if count == 0 then return new FlatBuffer.from("")

		var native_buf = calloc_string(count + 1)
		native_buf[count] = '\0'

		_items.copy_to(native_buf, count, from, 0)

		return new FlatBuffer.from(native_buf.to_s_with_length(count))
	end

	#     assert new FlatBuffer.from("Hello World!").to_upper == "HELLO WORLD!"
	redef fun to_upper
	do
		var new_buf = new FlatBuffer.with_capacity(self.length)
		for i in self.chars do
			new_buf.add(i.to_upper)
		end
		return new_buf
	end

	#     assert new FlatBuffer.from("Hello World!").to_lower == "hello world!"
	redef fun to_lower
	do
		var new_buf = new FlatBuffer.with_capacity(self.length)
		for i in self.chars do
			new_buf.add(i.to_lower)
		end
		return new_buf
	end

	redef fun to_s
	do
		var l = length

		return to_cstring.to_s_with_length(length)
	end

	# Create a new empty string.
	init
	do
		with_capacity(5)
	end

	init from(s: Text)
	do
		_capacity = s.length + 1
		_length = s.length
		if s isa FlatString then
			_items = calloc_string(_capacity)
			s.items.copy_to(_items, _length, s._index_from, 0)
		end
		self.char_view = new FlatBufferCharView(self)
	end

	# Create a new empty string with a given capacity.
	init with_capacity(cap: Int)
	do
		assert cap >= 0
		# _items = new NativeString.calloc(cap)
		_items = calloc_string(cap+1)
		_capacity = cap
		_length = 0
		self.char_view = new FlatBufferCharView(self)
	end

	fun enlarge(cap: Int)
	do
		var c = _capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_string(c+1)
		_items.copy_to(a, length, 0, 0)
		_items = a
		_capacity = c
	end

	redef fun append(s)
	do
		var sl = s.length
		if _capacity < _length + sl then enlarge(_length + sl)
		if s isa FlatString then
			s.items.copy_to(_items, sl, s._index_from, _length)
		else if s isa FlatBuffer then
			s.items.copy_to(_items, sl, 0, _length)
		end
		_length += sl
		super
	end

	redef fun clear
	do
		_length = 0
		super
	end

	redef fun add(char: Char)
	do
		if _capacity <= length then enlarge(length + 5)
		_items[length] = char
		_length += 1
		super
	end

	readable private var _capacity: Int

	redef fun +(other)
	do
		var new_buf = new FlatBuffer.with_capacity(self.length + other.length)
		new_buf.append(self)
		new_buf.append(other)
		return new_buf
	end
	
	redef fun *(repeats)
	do
		var new_buf = new FlatBuffer.with_capacity(self.length * repeats)
		for i in [0..repeats[ do
			new_buf.append(self)
		end
		return new_buf
	end
	
	redef fun reverse
	do
		var new_buf = new FlatBuffer.with_capacity(self.length)
		var reviter = self.chars.reverse_iterator
		while reviter.is_ok do
			new_buf.add(reviter.item)
			reviter.next
		end
		return new_buf
	end

end

private class FlatBufferCharView
	super BufferCharView
	super StringCapable

	redef type SELFTYPE: FlatBuffer

	redef fun [](index) do return target._items[index]

	redef fun []=(index, item)
	do
		assert index >= 0 and index <= length
		if index == length then
			add(item)
			return
		end
		target._items[index] = item
		super
	end

	redef fun add(c)
	do
		target.add(c)
		super
	end

	fun enlarge(cap: Int)
	do
		target.enlarge(cap)
	end

	redef fun append(s)
	do
		var my_items = target.items
		var s_length = s.length
		if target.capacity < s.length then enlarge(s_length + target.length)
		super
	end

	redef fun iterator_from(pos) do return new FlatBufferIterator.with_pos(target, pos)

	redef fun reverse_iterator_from(pos) do return new FlatBufferReverseIterator.with_pos(target, pos)

end

private class FlatBufferReverseIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		target = tgt
		target_items = tgt.items
		curr_pos = pos
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

end

private class FlatBufferIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var target_items: NativeString

	var curr_pos: Int

	init with_pos(tgt: FlatBuffer, pos: Int)
	do
		target = tgt
		target_items = tgt.items
		curr_pos = pos
	end

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos < target.length

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos += 1

end

###############################################################################
# Refinement                                                                  #
###############################################################################

redef class Collection[E]

	# Concatenate elements.
	redef fun to_s
	do
		var s = new FlatBuffer
		for e in self do if e != null then s.append(e.to_s)
		return s.to_s
	end

	# Concatenate and separate each elements with `sep`.
	#
	#     assert [1, 2, 3].join(":")         == "1:2:3"
	#     assert [1..3].join(":")            == "1:2:3"
	fun join(sep: String): String
	do
		if is_empty then return ""

		var s = new FlatBuffer # Result

		# Concat first item
		var i = iterator
		var e = i.item
		if e != null then s.append(e.to_s)

		# Concat other items
		i.next
		while i.is_ok do
			s.append(sep)
			e = i.item
			if e != null then s.append(e.to_s)
			i.next
		end
		return s.to_s
	end
end

redef class Object
	# User readable representation of `self`.
	redef fun to_s: String do return inspect

	# The class name of the object in NativeString format.
	private fun native_class_name: NativeString is intern

	# The class name of the object.
	#
	#    assert 5.class_name == "Int"
	fun class_name: String do return native_class_name.to_s

	# Developer readable representation of `self`.
	# Usually, it uses the form "<CLASSNAME:#OBJECTID bla bla bla>"
	fun inspect: String
	do
		return "<{inspect_head}>"
	end

	# Return "CLASSNAME:#OBJECTID".
	# This function is mainly used with the redefinition of the inspect method
	protected fun inspect_head: String
	do
		return "{class_name}:#{object_id.to_hex}"
	end

	protected fun args: Sequence[String]
	do
		return sys.args
	end
end

redef class Int

	# return displayable int in base 10 and signed
	#
	#     assert 1.to_s            == "1"
	#     assert (-123).to_s       == "-123"
	redef fun to_s do
		var len = digit_count(10)
		return native_int_to_s(len).to_s_with_length(len)
	end

	# return displayable int in hexadecimal (unsigned (not now))
	fun to_hex: String do return to_base(16,false)

	# return displayable int in base base and signed
	fun to_base(base: Int, signed: Bool): String
	do
		var l = digit_count(base)
		var s = new FlatBuffer.from(" "*l)
		fill_buffer(s, base, signed)
		return s.to_s
	end

end

redef class Char
	super StringCapable

	#     assert 'x'.to_s    == "x"
	redef fun to_s
	do
		var s = new FlatBuffer.with_capacity(1)
		s.chars[0] = self
		return s.to_s
	end
end

redef class Bool

	#     assert true.to_s         == "true"
	#     assert false.to_s        == "false"
	redef fun to_s
	do
		if self then
			return once "true"
		else
			return once "false"
		end
	end

end

redef class Float

	# Pretty print self, print needoed decimals up to a max of 3.
	redef fun to_s do
		var str = to_precision( 3 )
		var len = str.length
		for i in [0..len-1] do
			var j = len-1-i
			var c = str.chars[j]
			if c == '0' then
				continue
			else if c == '.' then
				return str.substring( 0, j+2 ).to_s
			else
				return str.substring( 0, j+1 ).to_s
			end
		end
		return str
	end
end

redef class Map[K,V]
	# Concatenate couple of 'key value'.
	# key and value are separated by `couple_sep`.
	# each couple is separated each couple with `sep`.
	#
	#     var m = new ArrayMap[Int, String]
	#     m[1] = "one"
	#     m[10] = "ten"
	#     assert m.join("; ", "=") == "1=one; 10=ten"
	fun join(sep: String, couple_sep: String): String
	do
		if is_empty then return ""

		var s = new FlatBuffer # Result

		# Concat first item
		var i = iterator
		var k = i.key
		var e = i.item
		if e != null then s.append("{k}{couple_sep}{e}")

		# Concat other items
		i.next
		while i.is_ok do
			s.append(sep)
			k = i.key
			e = i.item
			if e != null then s.append("{k}{couple_sep}{e}")
			i.next
		end
		return s.to_s
	end
end

###############################################################################
# Native classes                                                              #
###############################################################################

redef class NativeString

	redef fun to_s
	do
		return to_s_with_length(cstring_length)
	end

	redef fun to_s_with_length(length)
	do
		assert length >= 0
		return new FlatString.with_infos(self, length, 0, length - 1)
	end

	fun to_s_with_copy: String
	do
		var length = cstring_length
		var new_self = calloc_string(length + 1)
		copy_to(new_self, length, 0, 0)
		return new FlatString.with_infos(new_self, length, 0, length - 1)
	end

end

redef class Array[E]
	# Fast implementation
	redef fun to_s
	do
		var s = new FlatBuffer
		var i = 0
		var l = length
		while i < l do
			var e = self[i]
			if e != null then s.append(e.to_s)
			i += 1
		end
		return s.to_s
	end
end

redef class Sys
	var _args_cache: nullable Sequence[String]

	redef fun args: Sequence[String]
	do
		if _args_cache == null then init_args
		return _args_cache.as(not null)
	end

	# The name of the program as given by the OS
	fun program_name: String
	do
		return native_argv(0).to_s
	end

	# Initialize `args` with the contents of `native_argc` and `native_argv`.
	private fun init_args
	do
		var argc = native_argc
		var args = new Array[String].with_capacity(0)
		var i = 1
		while i < argc do
			args[i-1] = native_argv(i).to_s
			i += 1
		end
		_args_cache = args
	end

	# First argument of the main C function.
	private fun native_argc: Int is intern

	# Second argument of the main C function.
	private fun native_argv(i: Int): NativeString is intern
end
