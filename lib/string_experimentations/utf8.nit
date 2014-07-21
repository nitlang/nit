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

# Introduces UTF-8 as internal encoding for Strings in Nit.
module utf8

intrude import standard::string

in "C Header" `{

#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct {
	long pos;
	char* ns;
} UTF8Char;

`}

# UTF-8 char as defined in RFC-3629, e.g. 1-4 Bytes
#
# A UTF-8 char has its bytes stored in a NativeString (char*)
extern class UnicodeChar `{ UTF8Char* `}

	new(pos: Int, ns: NativeString) `{
		UTF8Char* u = malloc(sizeof(UTF8Char));
		u->pos = pos;
		u->ns = ns;
		return u;
	`}

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
	private fun len: Int `{
		char* ns = recv->ns;
		int pos = recv->pos;
		char nspos = ns[pos];
		if((nspos & 0x80) == 0x00){ return 1;}
		if((nspos & 0xE0) == 0xC0){ return 2;}
		if((nspos & 0xF0) == 0xE0){ return 3;}
		if((nspos & 0xF7) == 0xF0){ return 4;}
		// Invalid character
		return 1;
	`}

	# Position in containing NativeString
	private fun pos: Int `{
		return recv->pos;
	`}

	private fun pos=(p: Int) `{recv->pos = p;`}

	# C char* wrapping the char
	fun ns: NativeString `{
		return recv->ns;
	`}

	# Returns the Unicode code point representing the character
	#
	# Note : A unicode character might not be a visible glyph, but it will be used to determine canonical equivalence
	fun code_point: Int import UnicodeChar.len `{
		switch(UnicodeChar_len(recv)){
			case 1:
				return (long)(0x7F & (unsigned char)recv->ns[recv->pos]);
			case 2:
				return 0 | ((0x1F & (unsigned char)recv->ns[recv->pos]) << 6) | (0x3F & (unsigned char)recv->ns[recv->pos+1]);
			case 3:
				return 0 | ((0x0F & (unsigned char)recv->ns[recv->pos]) << 12) |
				((0x3F & (unsigned char)recv->ns[recv->pos+1]) << 6) |
				(0x3F & (unsigned char)recv->ns[recv->pos+2]);
			case 4:
				return 0 | ((0x07 & (unsigned char)recv->ns[recv->pos]) << 18) |
				((0x3F & (unsigned char)recv->ns[recv->pos+1]) << 12) |
				((0x3F & (unsigned char)recv->ns[recv->pos+2]) << 6) |
				(0x3F & (unsigned char)recv->ns[recv->pos+3]);
		}
	`}

	redef fun to_s import NativeString.to_s_with_length `{
		int len = utf8___UnicodeChar_len___impl(recv);
		char* r = malloc(len + 1);
		r[len] = '\0';
		char* src = (recv->ns + recv->pos);
		memcpy(r, src, len);
		return NativeString_to_s_with_length(r, len);
	`}
end

# A `StringIndex` is used to keep track of the position of characters in a `FlatString` object
#
# It becomes mandatory for UTF-8 strings since characters do not have a fixed size.
private extern class StringIndex `{ UTF8Char* `}

	new(size: Int) `{ return malloc(size*sizeof(UTF8Char)); `}

	# Sets the character at `index` as `item`
	fun []=(index: Int, item: UnicodeChar) `{ recv[index] = *item; `}

	# Gets the character at position `id`
	fun [](id: Int): UnicodeChar `{ return &recv[id]; `}

	# Copies a part of self starting at index `my_from` of length `length` into `other`, starting at `its_from`
	fun copy_to(other: StringIndex, my_from: Int, its_from: Int, length: Int)`{
		UTF8Char* myfrom = recv + my_from*(sizeof(UTF8Char));
		UTF8Char* itsfrom = other + its_from*(sizeof(UTF8Char));
		memcpy(itsfrom, myfrom, length);
	`}
end

redef class FlatString

	# Index of the characters of the FlatString
	private var index: StringIndex

	# Length in bytes of the string (e.g. the length of the C string)
	var bytelen: Int

	private init with_infos_index(items: NativeString, len: Int, index_from: Int, index_to: Int, index: StringIndex, bytelen: Int)
	do
		self.items = items
		length = len
		self.index_from = index_from
		self.index_to = index_to
		self.index = index
		self.bytelen = bytelen
	end

	redef fun *(i)
	do
		assert i >= 0

		var mylen = self.bytelen
		var finlen = mylen * i

		var my_items = self.items

		var my_real_len = length
		var my_real_fin_len = my_real_len * i

		var target_string = calloc_string((finlen) + 1)

		var my_index = index
		var new_index = new StringIndex(my_real_fin_len)

		target_string[finlen] = '\0'

		var current_last = 0
		var curr_index = 0

		for iteration in [1 .. i] do
			my_items.copy_to(target_string, mylen, index_from, current_last)
			my_index.copy_to(new_index, length, 0, curr_index)
			current_last += mylen
		end

		return new FlatString.with_infos_index(target_string, my_real_fin_len, 0, my_real_fin_len -1, new_index, finlen)

	end

end

redef class NativeString

	# Creates the index for said NativeString
	# `length` is the size of the CString (in bytes, up to the first \0)
	# real_len is just a way to store the length (UTF-8 characters)
	private fun make_index(length: Int, real_len: Container[Int]): StringIndex import Container[Int].item=, UnicodeChar.len `{
		int pos = 0;
		int index_pos = 0;
		UTF8Char* index = malloc(length*sizeof(UTF8Char));
		while(pos < length){
			UTF8Char* curr = &index[index_pos];
			curr->pos = pos;
			curr->ns = recv;
			pos += UnicodeChar_len(curr);
			index_pos ++;
		}
		Container_of_Int_item__assign(real_len, index_pos);
		return index;
	`}

	redef fun to_s: FlatString
	do
		var len = cstring_length
		return to_s_with_length(len)
	end

	redef fun to_s_with_length(len: Int): FlatString
	do
		var real_len = new Container[Int](0)
		var x = make_index(len, real_len)
		return new FlatString.with_infos_index(self, real_len.item, 0, real_len.item - 1, x, len)
	end

	redef fun to_s_with_copy
	do
		var real_len = new Container[Int](0)
		var length = cstring_length
		var x = make_index(length, real_len)
		var new_self = calloc_string(length + 1)
		copy_to(new_self, length, 0, 0)
		return new FlatString.with_infos_index(new_self, real_len.item, 0, real_len.item - 1, x, length)
	end
end
