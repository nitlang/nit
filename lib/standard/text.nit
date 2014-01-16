# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it if you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or as a part of
# another product.

# Connects everything concerning the String model : Flat or Ropes.
module text

import kernel
import collection
import hash

# StringCapable objects can create native strings
interface StringCapable
	protected fun calloc_string(size: Int): NativeString is intern
end

# Native strings are simple C char *
class NativeString
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

	private fun to_s_with_length(length: Int): String is abstract

end

# Represents all kinds of strings of characters, whether mutable or not, Flat or Rope
abstract class Text
	super Comparable
	super StringCapable

	redef type OTHER: Text

	type SELFTYPE: Text
	type SELFVIEW: StringCharView

	private var hash_cache: nullable Int = null

	private var char_view: nullable SELFVIEW = null

	#######################################################################
	# Methods that need redefinition in subclasses                        #
	#######################################################################

	# Returns a capitalized version of self
	fun to_upper: SELFTYPE is abstract

	# Returns a lower case version of self
	fun to_lower: SELFTYPE is abstract

	# Returns a text which is a concatenation of self and other
	fun +(other: Text): SELFTYPE is abstract

	# Returns a new text object, which is a concatenation of
	# ´nb´ times self
	fun *(nb: Int): SELFTYPE is abstract

	# Returns a text object which contains a subset of self starting at
	# ´pos´ and is ´length´ long
	#
	# A `from` index < 0 will be replaced by 0.
	# Unless a `count` value is > 0 at the same time.
	# In this case, `from += count` and `count -= from`.
	fun substring(pos: Int, length: Int): SELFTYPE is abstract

	# Returns a reversed version of self
	fun reverse: SELFTYPE is abstract

	# Returns a null terminated char *
	fun to_cstring: NativeString is abstract

	# Returns an empty text
	private fun empty: SELFTYPE is abstract

	# Returns the length of the Text
	fun length: Int is abstract

	# Sets the length of the Text
	private fun length=(size: Int) is abstract

	#######################################################################
	# Generic Methods                                                     #
	#######################################################################

	# Returns an iterable view on the chars of self
	# Needs to be created when instantiating self
	fun chars: SELFVIEW do return char_view.as(not null)

	# If `self` contains only digits, return the corresponding integer
	#     assert "123".to_i        == 123
	#     assert "-1".to_i         == -1
	fun to_i: Int do return to_cstring.atoi

	# If `self` contains a float, return the corresponding float
	#     assert "123".to_f        == 123.0
	#     assert "-1".to_f         == -1.0
	#     assert "-1.2e-3".to_f    == -0.0012
	fun to_f: Float do return to_cstring.atof

	# If `self` contains only digits and letters, return the corresponding integer in a given base
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

	# Returns true if the Text is empty
	fun is_empty: Bool do return length == 0

	# Gets the index of the first occurence of 'c'
	#
	# Returns -1 if not found
	fun index_of(c: Char): Int
	do
		return index_of_from(c, 0)
	end

	# Gets the index of the first occurence of ´c´ starting from ´pos´
	#
	# Returns -1 if not found
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
	fun last_index_of(c: Char): Int
	do
		return last_index_of_from(c, length - 1)
	end

	# The index of the last occurrence of an element starting from pos (in reverse order).
	# Example :
	#		assert "/etc/bin/test/test.nit".last_index_of_from('/', length-1) == 13
	#		assert "/etc/bin/test/test.nit".last_index_of_from('/', 12) == 8
	#
	# Returns -1 if not found
	fun last_index_of_from(item: Char, pos: Int): Int
	do
		var iter = self.chars.reverse_iterator_from(pos)
		while iter.is_ok do
			if iter.item == item then return iter.index
			iter.next
		end
		return -1
	end

	# Create a substring from `self` beginning at the `from` position
	#
	# As with substring, a `from` index < 0 will be replaced by 0
	fun substring_from(from: Int): SELFTYPE
	do
		if from > self.length then return self.empty
		if from < 0 then from = 0
		return substring(from, self.length)
	end

	# Does self have a substring ´str´ starting from position ´pos´?
	fun has_substring(str: Text, pos: Int): Bool
	do
		var self_iter = self.chars.iterator_from(pos)
		var other_iter = str.chars.iterator

		while other_iter.is_ok do
			if not self_iter.is_ok or self_iter.item != other_iter.item then return false
			self_iter.next
			other_iter.next
		end

		return true
	end

	# Removes the whitespaces at the beginning of self
	fun l_trim: SELFTYPE do
		var iter = self.chars.iterator
		while iter.is_ok do
			if iter.item.ascii > 32 then break
			iter.next
		end
		if iter.index == length then return self.empty
		return self.substring_from(iter.index)
	end

	# Removes the whitespaces at the end of self
	fun r_trim: SELFTYPE do
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
	fun trim: SELFTYPE do
		return (self.l_trim).r_trim
	end

	# Returns `true` if the string is parsable for an Int (and one "." character)
	fun is_numeric: Bool
	do
		var has_point = false
		for i in self.chars
		do
			if not i.is_numeric
			then
				if (i == '.') and not has_point
				then
					has_point = true
				else
					return false
				end
			end
		end
		return true
	end

	# If `self` contains only digits and alpha <= 'f', return the corresponding integer.
	fun to_hex: Int do return a_to(16)

	# Is this string suffixed by `suffix`?
	fun has_suffix(suffix: Text): Bool do return has_substring(suffix, length - suffix.length)

	# Is this string prefixed by `prefix`?
	fun has_prefix(prefix: Text): Bool do return has_substring(prefix,0)

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

	redef fun ==(other)
	do
		if other == null then return false
		if self.object_id == other.object_id then return true
		if not other isa Text then return false
		if self.length != other.length then return false

		return self.chars == other.chars
	end

	redef fun hash
	do
		if hash_cache == null then
			# djb2 hash algorythm
			var h = 5381
			var i = length - 1

			for char in self.chars do
				h = (h * 32) + h + char.ascii
				i -= 1
			end

			return h
		else
			return hash_cache.as(not null)
		end
	end

end

# Represents an immutable string of characters
abstract class String
	super Text

	redef type SELFTYPE: String

end

# Represents a mutable string of characters
abstract class Buffer
	super Text

	redef type SELFTYPE: Buffer
	redef type SELFVIEW: BufferCharView

	var is_dirty = true

	private fun cache is abstract

	fun add(char: Char) do is_dirty = true

	fun append(other: Text) do is_dirty = true

	fun clear do is_dirty = true

	redef fun hash
	do
		if is_dirty then hash_cache = null
		return super
	end

end

abstract class StringCharView
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

	redef fun ==(other)
	do
		if not other isa StringCharView then return false
		var other_chars = other.iterator
		for i in self do
			if i != other_chars.item then return false
			other_chars.next
		end
		return true
	end

	redef fun index_of(c)
	do
		var selfiter = iterator
		while selfiter.is_ok do
			if selfiter.item == c then return selfiter.index
			selfiter.next
		end
		return -1
	end

	fun iterator_from(pos: Int): IndexedIterator[Char] is abstract

	fun reverse_iterator: IndexedIterator[Char] do return self.reverse_iterator_from(self.length - 1)

	fun reverse_iterator_from(pos: Int): IndexedIterator[Char] is abstract

	redef fun has(c: Char): Bool
	do
		for i in self do
			if i == c then return true
		end
		return false
	end

	redef fun count(c : Char): Int
	do
		var count = 0
		for i in self do
			if i == c then count += 1
		end
		return count
	end

	redef fun has_only(c: Char): Bool
	do
		for i in self do
			if i != c then return false
		end
		return true
	end

end

abstract class BufferCharView
	super StringCharView
	super Sequence[Char]

	redef type SELFTYPE: Buffer

	redef fun push(c) do add(c)

	redef fun []=(index, item) do target.is_dirty = true

	redef fun add(c) do target.is_dirty = true

	redef fun append(s) do target.is_dirty = true

end

###############################################################################
# Refinement                                                                  #
###############################################################################

redef class Object
	# User readable representation of `self`.
	fun to_s: String is abstract
end

redef class Float
	# `self` representation with `nb` digits after the '.'.
	fun to_precision(nb: Int): String
	do
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

end

redef class Int

	# Fill `s` with the digits in base `base` of `self` (and with the '-' sign if 'signed' and negative).
	# assume < to_c max const of char
	fun fill_buffer(s: Buffer, base: Int, signed: Bool)
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

end

redef class Char
	# Returns true if the char is a numerical digit
	fun is_numeric: Bool
	do
		if self >= '0' and self <= '9'
		then
			return true
		end
		return false
	end

	# Returns true if the char is an alpha digit
	fun is_alpha: Bool
	do
		if (self >= 'a' and self <= 'z') or (self >= 'A' and self <= 'Z') then return true
		return false
	end

	# Returns true if the char is an alpha or a numeric digit
	fun is_alphanumeric: Bool
	do
		if self.is_numeric or self.is_alpha then return true
		return false
	end
end
