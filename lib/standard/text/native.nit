# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Native structures for text and bytes
module native

import kernel
import math

redef class Byte
	# Gives the length of the UTF-8 char starting with `self`
	private fun u8len: Int do
		if self & 0b1000_0000u8 == 0u8 then
			return 1
		else if self & 0b1110_0000u8 == 0b1100_0000u8 then
			return 2
		else if self & 0b1111_0000u8 == 0b1110_0000u8 then
			return 3
		else if self & 0b1111_1000u8 == 0b1111_0000u8 then
			return 4
		else
			return 1
		end
	end
end

# Native strings are simple C char *
extern class NativeString `{ char* `}
	# Creates a new NativeString with a capacity of `length`
	new(length: Int) is intern

	# Returns a char* starting at `index`.
	#
	# WARNING: Unsafe for extern code, use only for temporary
	# pointer manipulation purposes (e.g. write to file or such)
	fun fast_cstring(index: Int): NativeString is intern

	# Get char at `index`.
	fun [](index: Int): Byte is intern

	# Set char `item` at index.
	fun []=(index: Int, item: Byte) is intern

	# Copy `self` to `dest`.
	fun copy_to(dest: NativeString, length: Int, from: Int, to: Int) is intern

	# Position of the first nul character.
	fun cstring_length: Int
	do
		var l = 0
		while self[l] != 0u8 do l += 1
		return l
	end

	# Parse `self` as an Int.
	fun atoi: Int is intern

	# Parse `self` as a Float.
	fun atof: Float `{ return atof(self); `}

	# Gets the UTF-8 char at index `pos`
	#
	# Index is expressed in Unicode chars
	#
	# ~~~raw
	#     assert "かきく".as(FlatString).items.char_at(0) == 'か'
	# ~~~
	#
	# If the char at position pos is an invalid Unicode char,
	# the Unicode replacement character � (0xFFFD) will be used.
	#
	# ~~~raw
	#     assert "かきく".as(FlatString).items.char_at(1) == '�'
	# ~~~
	fun char_at(pos: Int): Char `{
		char c = self[pos];
		if((c & 0x80) == 0x00) return (uint32_t)c;
		if(((c & 0xE0) == 0xC0) && ((self[pos + 1] & 0xC0) == 0x80)) return ((((uint32_t)c) & 0x1F) << 6) + ((((uint32_t)self[pos + 1] & 0x3F)));
		if(((c & 0xF0) == 0xE0) && ((self[pos + 1] & 0xC0) == 0x80) && ((self[pos + 2] & 0xC0) == 0x80)) return ((((uint32_t)c) & 0xF) << 12) + ((((uint32_t)self[pos + 1]) & 0x3F) << 6) + ((((uint32_t)self[pos + 2] & 0x3F)));
		if(((c & 0xF8) == 0xF0) && ((self[pos + 1] & 0xC0) == 0x80) && ((self[pos + 2] & 0xC0) == 0x80) && ((self[pos + 3] & 0xC0) == 0x80)) return ((((uint32_t)c) & 0x7) << 18) + ((((uint32_t)self[pos + 1]) & 0x3F) << 12) + ((((uint32_t)self[pos + 2]) & 0x3F) << 6) + ((((uint32_t)self[pos + 3] & 0x3F)));
		return 0xFFFD;
	`}

	# Gets the byte index of char at position `n` in UTF-8 String
	fun char_to_byte_index(n: Int): Int do return char_to_byte_index_cached(n, 0, 0)

	# Gets the length of the character at position `pos` (1 if invalid sequence)
	fun length_of_char_at(pos: Int): Int do
		var c = self[pos]
		if c & 0x80u8 == 0x00u8 then
			return 1
		else if c & 0xE0u8 == 0xC0u8 and self[pos + 1] & 0xC0u8 == 0x80u8 then
			return 2
		else if c & 0xF0u8 == 0xE0u8 and self[pos + 1] & 0xC0u8 == 0x80u8 and self[pos + 2] & 0xC0u8 == 0x80u8 then
			return 3
		else if c & 0xF8u8 == 0xF0u8 and self[pos + 1] & 0xC0u8 == 0x80u8 and self[pos + 2] & 0xC0u8 == 0x80u8 and self[pos + 3] & 0xC0u8 == 0x80u8 then
			return 4
		else
			return 1
		end
	end

	# Gets the byte index of char at position `n` in UTF-8 String
	#
	# `char_from` and `byte_from` are cached values to seek from.
	#
	# NOTE: char_from and byte_from are not guaranteed to be valid cache values
	# It it up to the client to ensure the validity of the information
	fun char_to_byte_index_cached(n, char_from, byte_from: Int): Int do
		var ns_i = byte_from
		var my_i = char_from

		while my_i < n do
			ns_i += length_of_char_at(ns_i)
			my_i += 1
		end

		while my_i > n do
			ns_i = find_beginning_of_char_at(ns_i - 1)
			my_i -= 1
		end

		return ns_i
	end

	# Returns the beginning position of the char at position `pos`
	#
	# If the char is invalid UTF-8, `pos` is returned as-is
	#
	# ~~~raw
	# 	assert "abc".items.find_beginning_of_char_at(2) == 2
	# 	assert "か".items.find_beginning_of_char_at(1) == 0
	#	assert [0x41u8, 233u8].to_s.items.find_beginning_of_char_at(1) == 1
	# ~~~
	fun find_beginning_of_char_at(pos: Int): Int do
		var endpos = pos
		var c = self[pos]
		while c & 0xC0u8 == 0x80u8 do
			pos -= 1
			c = self[pos]
		end
		var stpos = pos
		if length_of_char_at(stpos) >= (endpos - stpos + 1) then return pos
		return endpos
	end
end
