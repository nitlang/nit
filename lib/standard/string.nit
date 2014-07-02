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

# Basic manipulations of strings of characters
module string

import math
intrude import collection # FIXME should be collection::array

`{
#include <stdio.h>
#include <string.h>
`}

###############################################################################
# String                                                                      #
###############################################################################

# High-level abstraction for all text representations
abstract class Text
	super Comparable
	super StringCapable

	redef type OTHER: Text

	# Type of self (used for factorization of several methods, ex : substring_from, empty...)
	type SELFTYPE: Text

	# Gets a view on the chars of the Text object
	#
	#     assert "hello".chars.to_a == ['h', 'e', 'l', 'l', 'o']
	fun chars: SequenceRead[Char] is abstract

	# Number of characters contained in self.
	#
	#     assert "12345".length == 5
	#     assert "".length == 0
	fun length: Int is abstract

	# Create a substring.
	#
	#     assert "abcd".substring(1, 2)      ==  "bc"
	#     assert "abcd".substring(-1, 2)     ==  "a"
	#     assert "abcd".substring(1, 0)      ==  ""
	#     assert "abcd".substring(2, 5)      ==  "cd"
	#
	# A `from` index < 0 will be replaced by 0.
	# Unless a `count` value is > 0 at the same time.
	# In this case, `from += count` and `count -= from`.
	fun substring(from: Int, count: Int): SELFTYPE is abstract

	# Iterates on the substrings of self if any
	fun substrings: Iterator[Text] is abstract

	# Concatenates `o` to `self`
	#
	#     assert "hello" + "world"  == "helloworld"
	#     assert "" + "hello" + ""  == "hello"
	fun +(o: Text): SELFTYPE is abstract

	# Auto-concatenates self `i` times
	#
	#     assert "abc" * 4 == "abcabcabcabc"
	#     assert "abc" * 1 == "abc"
	#     assert "abc" * 0 == ""
	fun *(i: Int): SELFTYPE is abstract

	# Is the current Text empty (== "")
	#
	#     assert "".is_empty
	#     assert not "foo".is_empty
	fun is_empty: Bool do return self.length == 0

	# Returns an empty Text of the right type
	#
	# This method is used internally to get the right
	# implementation of an empty string.
	protected fun empty: SELFTYPE is abstract

	# Gets the first char of the Text
	#
	# DEPRECATED : Use self.chars.first instead
	fun first: Char do return self.chars[0]

	# Access a character at `index` in the string.
	#
	#     assert "abcd"[2]         == 'c'
	#
	# DEPRECATED : Use self.chars.[] instead
	fun [](index: Int): Char do return self.chars[index]

	# Gets the index of the first occurence of 'c'
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.index_of instead
	fun index_of(c: Char): Int
	do
		return index_of_from(c, 0)
	end

	# Gets the last char of self
	#
	# DEPRECATED : Use self.chars.last instead
	fun last: Char do return self.chars[length-1]

	# Gets the index of the first occurence of ´c´ starting from ´pos´
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.index_of_from instead
	fun index_of_from(c: Char, pos: Int): Int
	do
		var iter = self.chars.iterator_from(pos)
		while iter.is_ok do
			if iter.item == c then return iter.index
			iter.next
		end
		return -1
	end

	# Gets the last index of char ´c´
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.last_index_of instead
	fun last_index_of(c: Char): Int
	do
		return last_index_of_from(c, length - 1)
	end

	# Return a null terminated char *
	fun to_cstring: NativeString do return flatten.to_cstring

	# The index of the last occurrence of an element starting from pos (in reverse order).
	#
	#     var s = "/etc/bin/test/test.nit"
	#     assert s.last_index_of_from('/', s.length-1) == 13
	#     assert s.last_index_of_from('/', 12)         == 8
	#
	# Returns -1 if not found
	#
	# DEPRECATED : Use self.chars.last_index_of_from instead
	fun last_index_of_from(item: Char, pos: Int): Int
	do
		var iter = self.chars.reverse_iterator_from(pos)
		while iter.is_ok do
			if iter.item == item then return iter.index
			iter.next
		end
		return -1
	end

	# Gets an iterator on the chars of self
	#
	# DEPRECATED : Use self.chars.iterator instead
	fun iterator: Iterator[Char]
	do
		return self.chars.iterator
	end

	# Is 'c' contained in self ?
	#
	# DEPRECATED : Use self.chars.has instead
	fun has(c: Char): Bool
	do
		return self.chars.has(c)
	end

	# Gets an Array containing the chars of self
	#
	# DEPRECATED : Use self.chars.to_a instead
	fun to_a: Array[Char] do return chars.to_a

	# Create a substring from `self` beginning at the `from` position
	#
	#     assert "abcd".substring_from(1)    ==  "bcd"
	#     assert "abcd".substring_from(-1)   ==  "abcd"
	#     assert "abcd".substring_from(2)    ==  "cd"
	#
	# As with substring, a `from` index < 0 will be replaced by 0
	fun substring_from(from: Int): SELFTYPE
	do
		if from > self.length then return empty
		if from < 0 then from = 0
		return substring(from, length - from)
	end

	# Returns a reversed version of self
	#
	#     assert "hello".reversed  == "olleh"
	#     assert "bob".reversed    == "bob"
	#     assert "".reversed       == ""
	fun reversed: SELFTYPE is abstract

	# Does self have a substring `str` starting from position `pos`?
	#
	#     assert "abcd".has_substring("bc",1)	     ==  true
	#     assert "abcd".has_substring("bc",2)	     ==  false
	fun has_substring(str: String, pos: Int): Bool
	do
		var myiter = self.chars.iterator_from(pos)
		var itsiter = str.chars.iterator
		while myiter.is_ok and itsiter.is_ok do
			if myiter.item != itsiter.item then return false
			myiter.next
			itsiter.next
		end
		if itsiter.is_ok then return false
		return true
	end

	# Is this string prefixed by `prefix`?
	#
	#     assert "abcd".has_prefix("ab")           ==  true
	#     assert "abcbc".has_prefix("bc")          ==  false
	#     assert "ab".has_prefix("abcd")           ==  false
	fun has_prefix(prefix: String): Bool do return has_substring(prefix,0)

	# Is this string suffixed by `suffix`?
	#
	#     assert "abcd".has_suffix("abc")	     ==  false
	#     assert "abcd".has_suffix("bcd")	     ==  true
	fun has_suffix(suffix: String): Bool do return has_substring(suffix, length - suffix.length)

	# If `self` contains only digits, return the corresponding integer
	#
	#     assert "123".to_i        == 123
	#     assert "-1".to_i         == -1
	fun to_i: Int
	do
		# Shortcut
		return to_s.to_cstring.atoi
	end

	# If `self` contains a float, return the corresponding float
	#
	#     assert "123".to_f        == 123.0
	#     assert "-1".to_f         == -1.0
	#     assert "-1.2e-3".to_f    == -0.0012
	fun to_f: Float
	do
		# Shortcut
		return to_s.to_cstring.atof
	end

	# If `self` contains only digits and alpha <= 'f', return the corresponding integer.
	#
	#     assert "ff".to_hex == 255
	fun to_hex: Int do return a_to(16)

	# If `self` contains only digits and letters, return the corresponding integer in a given base
	#
	#     assert "120".a_to(3)     == 15
	fun a_to(base: Int) : Int
	do
		var i = 0
		var neg = false

		for c in self.chars
		do
			var v = c.to_i
			if v > base then
				if neg then
					return -i
				else
					return i
				end
			else if v < 0 then
				neg = true
			else
				i = i * base + v
			end
		end
		if neg then
			return -i
		else
			return i
		end
	end

	# Returns `true` if the string contains only Numeric values (and one "," or one "." character)
	#
	#     assert "123".is_numeric  == true
	#     assert "1.2".is_numeric  == true
	#     assert "1,2".is_numeric  == true
	#     assert "1..2".is_numeric == false
	fun is_numeric: Bool
	do
		var has_point_or_comma = false
		for i in self.chars
		do
			if not i.is_numeric
			then
				if (i == '.' or i == ',') and not has_point_or_comma
				then
					has_point_or_comma = true
				else
					return false
				end
			end
		end
		return true
	end

	# A upper case version of `self`
	#
	#     assert "Hello World!".to_upper     == "HELLO WORLD!"
	fun to_upper: SELFTYPE is abstract

	# A lower case version of `self`
	#
	#     assert "Hello World!".to_lower     == "hello world!"
	fun to_lower : SELFTYPE is abstract

	# Removes the whitespaces at the beginning of self
	#
	#     assert " \n\thello \n\t".l_trim == "hello \n\t"
	#
	# A whitespace is defined as any character which ascii value is less than or equal to 32
	fun l_trim: SELFTYPE
	do
		var iter = self.chars.iterator
		while iter.is_ok do
			if iter.item.ascii > 32 then break
			iter.next
		end
		if iter.index == length then return self.empty
		return self.substring_from(iter.index)
	end

	# Removes the whitespaces at the end of self
	#
	#     assert " \n\thello \n\t".r_trim == " \n\thello"
	#
	# A whitespace is defined as any character which ascii value is less than or equal to 32
	fun r_trim: SELFTYPE
	do
		var iter = self.chars.reverse_iterator
		while iter.is_ok do
			if iter.item.ascii > 32 then break
			iter.next
		end
		if iter.index == length then return self.empty
		return self.substring(0, iter.index + 1)
	end

	# Trims trailing and preceding white spaces
	# A whitespace is defined as any character which ascii value is less than or equal to 32
	#
	#     assert "  Hello  World !  ".trim   == "Hello  World !"
	#     assert "\na\nb\tc\t".trim          == "a\nb\tc"
	fun trim: SELFTYPE do return (self.l_trim).r_trim

	# Mangle a string to be a unique string only made of alphanumeric characters
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

	# Escape additionnal characters
	# The result might no be legal in C but be used in other languages
	#
	#     assert "ab|\{\}".escape_more_to_c("|\{\}") == "ab\\|\\\{\\\}"
	fun escape_more_to_c(chars: String): String
	do
		var b = new FlatBuffer
		for c in escape_to_c.chars do
			if chars.chars.has(c) then
				b.add('\\')
			end
			b.add(c)
		end
		return b.to_s
	end

	# Escape to C plus braces
	#
	#     assert "\n\"'\\\{\}".escape_to_nit      == "\\n\\\"\\'\\\\\\\{\\\}"
	fun escape_to_nit: String do return escape_more_to_c("\{\}")

	# Return a string where Nit escape sequences are transformed.
	#
	#     var s = "\\n"
	#     assert s.length        ==  2
	#     var u = s.unescape_nit
	#     assert u.length        ==  1
	#     assert u.chars[0].ascii      ==  10 # (the ASCII value of the "new line" character)
	fun unescape_nit: String
	do
		var res = new FlatBuffer.with_capacity(self.length)
		var was_slash = false
		for c in chars do
			if not was_slash then
				if c == '\\' then
					was_slash = true
				else
					res.add(c)
				end
				continue
			end
			was_slash = false
			if c == 'n' then
				res.add('\n')
			else if c == 'r' then
				res.add('\r')
			else if c == 't' then
				res.add('\t')
			else if c == '0' then
				res.add('\0')
			else
				res.add(c)
			end
		end
		return res.to_s
	end

	# Equality of text
	# Two pieces of text are equals if thez have the same characters in the same order.
	#
	#     assert "hello" == "hello"
	#     assert "hello" != "HELLO"
	#     assert "hello" == "hel"+"lo"
	#
	# Things that are not Text are not equal.
	#
	#     assert "9" != '9'
	#     assert "9" != ['9']
	#     assert "9" != 9
	#
	#     assert "9".chars.first == '9'   # equality of Char
	#     assert "9".chars       == ['9'] # equality of Sequence
	#     assert "9".to_i        == 9     # equality of Int
	redef fun ==(o)
	do
		if o == null then return false
		if not o isa Text then return false
		if self.is_same_instance(o) then return true
		if self.length != o.length then return false
		return self.chars == o.chars
	end

	# Lexicographical comparaison
	#
	#     assert "abc" < "xy"
	#     assert "ABC" < "abc"
	redef fun <(other)
	do
		var self_chars = self.chars.iterator
		var other_chars = other.chars.iterator

		while self_chars.is_ok and other_chars.is_ok do
			if self_chars.item < other_chars.item then return true
			if self_chars.item > other_chars.item then return false
			self_chars.next
			other_chars.next
		end

		if self_chars.is_ok then
			return false
		else
			return true
		end
	end

	# Flat representation of self
	fun flatten: FlatText is abstract

	private var hash_cache: nullable Int = null

	redef fun hash
	do
		if hash_cache == null then
			# djb2 hash algorithm
			var h = 5381

			for char in self.chars do
				h = h.lshift(5) + h + char.ascii
			end

			hash_cache = h
		end
		return hash_cache.as(not null)
	end

end

# All kinds of array-based text representations.
abstract class FlatText
	super Text

	private var items: NativeString

	# Real items, used as cache for to_cstring is called
	private var real_items: nullable NativeString = null

	redef var length: Int = 0

	init do end

	redef fun output
	do
		var i = 0
		while i < length do
			items[i].output
			i += 1
		end
	end

	redef fun flatten do return self
end

# Abstract class for the SequenceRead compatible
# views on String and Buffer objects
private abstract class StringCharView
	super SequenceRead[Char]

	type SELFTYPE: Text

	private var target: SELFTYPE

	private init(tgt: SELFTYPE)
	do
		target = tgt
	end

	redef fun is_empty do return target.is_empty

	redef fun length do return target.length

	redef fun iterator: IndexedIterator[Char] do return self.iterator_from(0)

	redef fun reverse_iterator do return self.reverse_iterator_from(self.length - 1)
end

# View on Buffer objects, extends Sequence
# for mutation operations
private abstract class BufferCharView
	super StringCharView
	super Sequence[Char]

	redef type SELFTYPE: Buffer

end

abstract class String
	super Text

	redef type SELFTYPE: String

	redef fun to_s do return self

	fun append(s: String): SELFTYPE is abstract

	fun prepend(s: String): SELFTYPE is abstract

	fun insert_at(s: String, pos: Int): SELFTYPE is abstract
end

private class FlatSubstringsIter
	super Iterator[FlatText]

	var tgt: nullable FlatText

	init(tgt: FlatText) do self.tgt = tgt

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
	private var index_from: Int

	# Indes in _items of the last item of the string
	private var index_to: Int

	redef var chars: SequenceRead[Char] = new FlatStringCharView(self)

	################################################
	#       AbstractString specific methods        #
	################################################

	redef fun reversed
	do
		var native = calloc_string(self.length + 1)
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

	redef fun substring(from, count)
	do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		var realFrom = index_from + from

		if (realFrom + count) > index_to then return new FlatString.with_infos(items, index_to - realFrom + 1, realFrom, index_to)

		if count == 0 then return empty

		var to = realFrom + count - 1

		return new FlatString.with_infos(items, to - realFrom + 1, realFrom, to)
	end

	redef fun empty do return "".as(FlatString)

	redef fun to_upper
	do
		var outstr = calloc_string(self.length + 1)
		var out_index = 0

		var myitems = self.items
		var index_from = self.index_from
		var max = self.index_to

		while index_from <= max do
			outstr[out_index] = myitems[index_from].to_upper
			out_index += 1
			index_from += 1
		end

		outstr[self.length] = '\0'

		return outstr.to_s_with_length(self.length)
	end

	redef fun to_lower
	do
		var outstr = calloc_string(self.length + 1)
		var out_index = 0

		var myitems = self.items
		var index_from = self.index_from
		var max = self.index_to

		while index_from <= max do
			outstr[out_index] = myitems[index_from].to_lower
			out_index += 1
			index_from += 1
		end

		outstr[self.length] = '\0'

		return outstr.to_s_with_length(self.length)
	end

	redef fun output
	do
		var i = self.index_from
		var imax = self.index_to
		while i <= imax do
			items[i].output
			i += 1
		end
	end

	##################################################
	#              String Specific Methods           #
	##################################################

	private init with_infos(items: NativeString, len: Int, from: Int, to: Int)
	do
		self.items = items
		length = len
		index_from = from
		index_to = to
	end

	redef fun to_cstring: NativeString
	do
		if real_items != null then return real_items.as(not null)
		if index_from > 0 or index_to != items.cstring_length - 1 then
			var newItems = calloc_string(length + 1)
			self.items.copy_to(newItems, length, index_from, 0)
			newItems[length] = '\0'
			self.real_items = newItems
			return newItems
		end
		return items
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

		var curr_id_self = self.index_from
		var curr_id_other = other.index_from

		var my_items = self.items
		var its_items = other.items

		var my_length = self.length
		var its_length = other.length

		var max_iterations = curr_id_self + my_length

		while curr_id_self < max_iterations do
			my_curr_char = my_items[curr_id_self]
			its_curr_char = its_items[curr_id_other]

			if my_curr_char != its_curr_char then
				if my_curr_char < its_curr_char then return true
				return false
			end

			curr_id_self += 1
			curr_id_other += 1
		end

		return my_length < its_length
	end

	redef fun +(s)
	do
		var my_length = self.length
		var its_length = s.length

		var total_length = my_length + its_length

		var target_string = calloc_string(my_length + its_length + 1)

		self.items.copy_to(target_string, my_length, index_from, 0)
		if s isa FlatString then
			s.items.copy_to(target_string, its_length, s.index_from, my_length)
		else if s isa FlatBuffer then
			s.items.copy_to(target_string, its_length, 0, my_length)
		else
			var curr_pos = my_length
			for i in s.chars do
				target_string[curr_pos] = i
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

		var target_string = calloc_string((final_length) + 1)

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
		var target = self.target
		assert (index + target.index_from) <= target.index_to
		return target.items[index + target.index_from]
	end

	redef fun iterator_from(start) do return new FlatStringIterator.with_pos(target, start)

	redef fun reverse_iterator_from(start) do return new FlatStringReverseIterator.with_pos(target, start)

end

abstract class Buffer
	super Text

	redef type SELFTYPE: Buffer

	# Specific implementations MUST set this to `true` in order to invalidate caches
	protected var is_dirty = true

	# Modifies the char contained at pos `index`
	#
	# DEPRECATED : Use self.chars.[]= instead
	fun []=(index: Int, item: Char) is abstract

	# Adds a char `c` at the end of self
	#
	# DEPRECATED : Use self.chars.add instead
	fun add(c: Char) is abstract

	# Clears the buffer
	#
	#     var b = new FlatBuffer
	#     b.append "hello"
	#     assert not b.is_empty
	#     b.clear
	#     assert b.is_empty
	fun clear is abstract

	# Enlarges the subsequent array containing the chars of self
	fun enlarge(cap: Int) is abstract

	# Adds the content of text `s` at the end of self
	#
	#     var b = new FlatBuffer
	#     b.append "hello"
	#     b.append "world"
	#     assert b == "helloworld"
	fun append(s: Text) is abstract

	redef fun hash
	do
		if is_dirty then hash_cache = null
		return super
	end

	# In Buffers, the internal sequence of character is mutable
	# Thus, `chars` can be used to modify the buffer.
	redef fun chars: Sequence[Char] is abstract
end

# Mutable strings of characters.
class FlatBuffer
	super FlatText
	super Buffer

	redef type SELFTYPE: FlatBuffer

	redef var chars: Sequence[Char] = new FlatBufferCharView(self)

	private var capacity: Int = 0

	redef fun substrings do return new FlatSubstringsIter(self)

	redef fun []=(index, item)
	do
		is_dirty = true
		if index == length then
			add(item)
			return
		end
		assert index >= 0 and index < length
		items[index] = item
	end

	redef fun add(c)
	do
		is_dirty = true
		if capacity <= length then enlarge(length + 5)
		items[length] = c
		length += 1
	end

	redef fun clear do
		is_dirty = true
		length = 0
	end

	redef fun empty do return new FlatBuffer

	redef fun enlarge(cap)
	do
		var c = capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_string(c+1)
		if length > 0 then items.copy_to(a, length, 0, 0)
		items = a
		capacity = c
	end

	redef fun to_s: String
	do
		return to_cstring.to_s_with_length(length)
	end

	redef fun to_cstring
	do
		if is_dirty then
			var new_native = calloc_string(length + 1)
			new_native[length] = '\0'
			if length > 0 then items.copy_to(new_native, length, 0, 0)
			real_items = new_native
			is_dirty = false
		end
		return real_items.as(not null)
	end

	# Create a new empty string.
	init do end

	init from(s: Text)
	do
		capacity = s.length + 1
		length = s.length
		items = calloc_string(capacity)
		if s isa FlatString then
			s.items.copy_to(items, length, s.index_from, 0)
		else if s isa FlatBuffer then
			s.items.copy_to(items, length, 0, 0)
		else
			var curr_pos = 0
			for i in s.chars do
				items[curr_pos] = i
				curr_pos += 1
			end
		end
	end

	# Create a new empty string with a given capacity.
	init with_capacity(cap: Int)
	do
		assert cap >= 0
		# _items = new NativeString.calloc(cap)
		items = calloc_string(cap+1)
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
			for i in s.chars do
				items[curr_pos] = i
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
			var r = new FlatBuffer.with_capacity(count - from)
			while from < count do
				r.chars.push(items[from])
				from += 1
			end
			return r
		else
			return new FlatBuffer
		end
	end

	redef fun reversed
	do
		var new_buf = new FlatBuffer.with_capacity(self.length)
		var reviter = self.chars.reverse_iterator
		while reviter.is_ok do
			new_buf.add(reviter.item)
			reviter.next
		end
		return new_buf
	end

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

	redef fun to_upper
	do
		var new_buf = new FlatBuffer.with_capacity(self.length)
		for i in self.chars do
			new_buf.add(i.to_upper)
		end
		return new_buf
	end

	redef fun to_lower
	do
		var new_buf = new FlatBuffer.with_capacity(self.length)
		for i in self.chars do
			new_buf.add(i.to_lower)
		end
		return new_buf
	end
end

private class FlatBufferReverseIterator
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

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

end

private class FlatBufferCharView
	super BufferCharView
	super StringCapable

	redef type SELFTYPE: FlatBuffer

	redef fun [](index) do return target.items[index]

	redef fun []=(index, item)
	do
		assert index >= 0 and index <= length
		if index == length then
			add(item)
			return
		end
		target.items[index] = item
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
		var my_items = target.items
		var s_length = s.length
		if target.capacity < s.length then enlarge(s_length + target.length)
	end

	redef fun iterator_from(pos) do return new FlatBufferIterator.with_pos(target, pos)

	redef fun reverse_iterator_from(pos) do return new FlatBufferReverseIterator.with_pos(target, pos)

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

###############################################################################
# Refinement                                                                  #
###############################################################################

redef class Object
	# User readable representation of `self`.
	fun to_s: String do return inspect

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

redef class Int

	# Wrapper of strerror C function
	private fun strerror_ext: NativeString is extern `{
		return strerror(recv);
	`}

	# Returns a string describing error number
	fun strerror: String do return strerror_ext.to_s

	# Fill `s` with the digits in base `base` of `self` (and with the '-' sign if 'signed' and negative).
	# assume < to_c max const of char
	private fun fill_buffer(s: Buffer, base: Int, signed: Bool)
	do
		var n: Int
		# Sign
		if self < 0 then
			n = - self
			s.chars[0] = '-'
		else if self == 0 then
			s.chars[0] = '0'
			return
		else
			n = self
		end
		# Fill digits
		var pos = digit_count(base) - 1
		while pos >= 0 and n > 0 do
			s.chars[pos] = (n % base).to_c
			n = n / base # /
			pos -= 1
		end
	end

	# C function to convert an nit Int to a NativeString (char*)
	private fun native_int_to_s(len: Int): NativeString is extern "native_int_to_s"

	# return displayable int in base 10 and signed
	#
	#     assert 1.to_s            == "1"
	#     assert (-123).to_s       == "-123"
	redef fun to_s do
		var len = digit_count(10)
		return native_int_to_s(len).to_s_with_length(len)
	end

	# return displayable int in hexadecimal
	#
	#     assert 1.to_hex  == "1"
	#     assert (-255).to_hex  == "-ff"
	fun to_hex: String do return to_base(16,false)

	# return displayable int in base base and signed
	fun to_base(base: Int, signed: Bool): String
	do
		var l = digit_count(base)
		var s = new FlatBuffer.from(" " * l)
		fill_buffer(s, base, signed)
		return s.to_s
	end
end

redef class Float
	# Pretty print self, print needoed decimals up to a max of 3.
	#
	#     assert 12.34.to_s        == "12.34"
	#     assert (-0120.03450).to_s  == "-120.035"
	#
	# see `to_precision` for a different precision.
	redef fun to_s do
		var str = to_precision( 3 )
		if is_inf != 0 or is_nan then return str
		var len = str.length
		for i in [0..len-1] do
			var j = len-1-i
			var c = str.chars[j]
			if c == '0' then
				continue
			else if c == '.' then
				return str.substring( 0, j+2 )
			else
				return str.substring( 0, j+1 )
			end
		end
		return str
	end

	# `self` representation with `nb` digits after the '.'.
	#
	#     assert 12.345.to_precision(1) == "12.3"
	#     assert 12.345.to_precision(2) == "12.35"
	#     assert 12.345.to_precision(3) == "12.345"
	#     assert 12.345.to_precision(4) == "12.3450"
	fun to_precision(nb: Int): String
	do
		if is_nan then return "nan"

		var isinf = self.is_inf
		if isinf == 1 then
			return "inf"
		else if isinf == -1 then
			return  "-inf"
		end

		if nb == 0 then return self.to_i.to_s
		var f = self
		for i in [0..nb[ do f = f * 10.0
		if self > 0.0 then
			f = f + 0.5
		else
			f = f - 0.5
		end
		var i = f.to_i
		if i == 0 then return "0.0"
		var s = i.to_s
		var sl = s.length
		if sl > nb then
			var p1 = s.substring(0, s.length-nb)
			var p2 = s.substring(s.length-nb, nb)
			return p1 + "." + p2
		else
			return "0." + ("0"*(nb-sl)) + s
		end
	end

	# `self` representation with `nb` digits after the '.'.
	#
	#     assert 12.345.to_precision_native(1) == "12.3"
	#     assert 12.345.to_precision_native(2) == "12.35"
	#     assert 12.345.to_precision_native(3) == "12.345"
	#     assert 12.345.to_precision_native(4) == "12.3450"
	fun to_precision_native(nb: Int): String import NativeString.to_s `{
		int size;
		char *str;

		size = snprintf(NULL, 0, "%.*f", (int)nb, recv);
		str = malloc(size + 1);
		sprintf(str, "%.*f", (int)nb, recv );

		return NativeString_to_s( str );
	`}
end

redef class Char
	#     assert 'x'.to_s    == "x"
	redef fun to_s
	do
		var s = new FlatBuffer.with_capacity(1)
		s.chars[0] = self
		return s.to_s
	end

	# Returns true if the char is a numerical digit
	#
	#      assert '0'.is_numeric
	#      assert '9'.is_numeric
	#      assert not 'a'.is_numeric
	#      assert not '?'.is_numeric
	fun is_numeric: Bool
	do
		return self >= '0' and self <= '9'
	end

	# Returns true if the char is an alpha digit
	#
	#      assert 'a'.is_alpha
	#      assert 'Z'.is_alpha
	#      assert not '0'.is_alpha
	#      assert not '?'.is_alpha
	fun is_alpha: Bool
	do
		return (self >= 'a' and self <= 'z') or (self >= 'A' and self <= 'Z')
	end

	# Returns true if the char is an alpha or a numeric digit
	#
	#      assert 'a'.is_alphanumeric
	#      assert 'Z'.is_alphanumeric
	#      assert '0'.is_alphanumeric
	#      assert '9'.is_alphanumeric
	#      assert not '?'.is_alphanumeric
	fun is_alphanumeric: Bool
	do
		return self.is_numeric or self.is_alpha
	end
end

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
	fun join(sep: Text): String
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
		s.append("{k}{couple_sep}{e or else "<null>"}")

		# Concat other items
		i.next
		while i.is_ok do
			s.append(sep)
			k = i.key
			e = i.item
			s.append("{k}{couple_sep}{e or else "<null>"}")
			i.next
		end
		return s.to_s
	end
end

###############################################################################
# Native classes                                                              #
###############################################################################

# Native strings are simple C char *
extern class NativeString `{ char* `}
	super StringCapable

	fun [](index: Int): Char is intern
	fun []=(index: Int, item: Char) is intern
	fun copy_to(dest: NativeString, length: Int, from: Int, to: Int) is intern

	# Position of the first nul character.
	fun cstring_length: Int
	do
		var l = 0
		while self[l] != '\0' do l += 1
		return l
	end
	fun atoi: Int is intern
	fun atof: Float is extern "atof"

	redef fun to_s
	do
		return to_s_with_length(cstring_length)
	end

	fun to_s_with_length(length: Int): FlatString
	do
		assert length >= 0
		return new FlatString.with_infos(self, length, 0, length - 1)
	end

	fun to_s_with_copy: FlatString
	do
		var length = cstring_length
		var new_self = calloc_string(length + 1)
		copy_to(new_self, length, 0, 0)
		return new FlatString.with_infos(new_self, length, 0, length - 1)
	end
end

# StringCapable objects can create native strings
interface StringCapable
	protected fun calloc_string(size: Int): NativeString is intern
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

# Comparator that efficienlty use `to_s` to compare things
#
# The comparaison call `to_s` on object and use the result to order things.
#
#     var a = [1, 2, 3, 10, 20]
#     (new CachedAlphaComparator).sort(a)
#     assert a == [1, 10, 2, 20, 3]
#
# Internally the result of `to_s` is cached in a HashMap to counter
# uneficient implementation of `to_s`.
#
# Note: it caching is not usefull, see `alpha_comparator`
class CachedAlphaComparator
	super Comparator[Object]

	private var cache = new HashMap[Object, String]

	private fun do_to_s(a: Object): String do
		if cache.has_key(a) then return cache[a]
		var res = a.to_s
		cache[a] = res
		return res
	end

	redef fun compare(a, b) do
		return do_to_s(a) <=> do_to_s(b)
	end
end

# see `alpha_comparator`
private class AlphaComparator
	super Comparator[Object]
	redef fun compare(a, b) do return a.to_s <=> b.to_s
end

# Stateless comparator that naively use `to_s` to compare things.
#
# Note: the result of `to_s` is not cached, thus can be invoked a lot
# on a single instace. See `CachedAlphaComparator` as an alternative.
#
#     var a = [1, 2, 3, 10, 20]
#     alpha_comparator.sort(a)
#     assert a == [1, 10, 2, 20, 3]
fun alpha_comparator: Comparator[Object] do return once new AlphaComparator
