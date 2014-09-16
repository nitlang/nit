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
intrude import standard::file

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

	# Returns an upper-case version of self
	#
	# NOTE : Works only on ASCII chars
	# TODO : Support unicode for to_upper
	fun to_upper: UnicodeChar import UnicodeChar.code_point `{
		int cp = UnicodeChar_code_point(recv);
		if(cp < 97 || cp > 122){ return recv; }
		char* ns = malloc(2);
		ns[1] = '\0';
		char c = recv->ns[recv->pos];
		ns[0] = c - 32;
		UTF8Char* ret = malloc(sizeof(UTF8Char));
		ret->ns = ns;
		ret->pos = 0;
		return ret;
	`}

	# Returns an lower-case version of self
	#
	# NOTE : Works only on ASCII chars
	# TODO : Support unicode for to_upper
	fun to_lower: UnicodeChar import UnicodeChar.code_point `{
		int cp = UnicodeChar_code_point(recv);
		if(cp < 65 || cp > 90){ return recv; }
		char* ns = malloc(2);
		ns[1] = '\0';
		char c = recv->ns[recv->pos];
		ns[0] = c + 32;
		UTF8Char* ret = malloc(sizeof(UTF8Char));
		ret->ns = ns;
		ret->pos = 0;
		return ret;
	`}

	redef fun ==(o)
	do
		if o isa Char then
			if len != 1 then return false
			if code_point == o.ascii then return true
		else if o isa UnicodeChar then
			if len != o.len then return false
			if code_point == o.code_point then return true
		end
		return false
	end

	redef fun output import UnicodeChar.code_point `{
		switch(UnicodeChar_len(recv)){
			case 1:
				printf("%c", recv->ns[recv->pos]);
				break;
			case 2:
				printf("%c%c", recv->ns[recv->pos], recv->ns[recv->pos + 1]);
				break;
			case 3:
				printf("%c%c%c", recv->ns[recv->pos], recv->ns[recv->pos + 1], recv->ns[recv->pos + 2]);
				break;
			case 4:
				printf("%c%c%c%c", recv->ns[recv->pos], recv->ns[recv->pos + 1], recv->ns[recv->pos + 2], recv->ns[recv->pos + 3]);
				break;
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

	redef fun to_cstring
	do
		if real_items != null then return real_items.as(not null)
		var new_items = calloc_string(bytelen + 1)
		self.items.copy_to(new_items, bytelen, index[index_from].pos, 0)
		new_items[bytelen] = '\0'
		self.real_items = new_items
		return new_items
	end

	redef fun substring(from, count)
	do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		if count == 0 then return empty

		var real_from = index_from + from
		var real_to = real_from + count - 1

		if real_to > index_to then real_to = index_to

		var sub_bytelen = (index[real_to].pos - index[from].pos) + index[from].len

		return new FlatString.with_infos_index(items, count, real_from, real_to, index, sub_bytelen)
	end

	redef fun reversed
	do
		var native = calloc_string(self.bytelen + 1)
		var length = self.length
		var index = self.index
		var pos = 0
		var i = 0
		var ipos = bytelen
		var new_index = new StringIndex(length)
		var pos_index = length
		while i < length do
			var uchar = index[i]
			var uchar_len = uchar.len
			ipos -= uchar_len
			new_index[pos_index] = new UnicodeChar(ipos, native)
			pos_index -= 1
			items.copy_to(native, uchar_len, pos, ipos)
			pos += uchar_len
			i += 1
		end
		return new FlatString.with_infos_index(native, length, 0, length-1, new_index, bytelen)
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

	redef fun to_upper
	do
		var outstr = calloc_string(self.bytelen + 1)

		var out_index = 0
		var index = self.index
		var ipos = 0
		var max = length
		var items = self.items

		while ipos < max do
			var u = index[ipos].to_upper
			u.ns.copy_to(outstr, u.len, u.pos, out_index)
			out_index += u.len
			ipos += 1
		end

		outstr[self.bytelen] = '\0'

		return outstr.to_s_with_length(self.bytelen)
	end

	redef fun to_lower
	do
		var outstr = calloc_string(self.bytelen + 1)

		var out_index = 0
		var index = self.index
		var ipos = 0
		var max = length
		var items = self.items

		while ipos < max do
			var u = index[ipos].to_lower
			u.ns.copy_to(outstr, u.len, u.pos, out_index)
			out_index += u.len
			ipos += 1
		end

		outstr[self.bytelen] = '\0'

		return outstr.to_s_with_length(self.bytelen)
	end

	redef fun output
	do
		var i = self.index_from
		var imax = self.index_to
		while i <= imax do
			index[i].output
			i += 1
		end
	end

end

redef class FlatBuffer

	# Fix for this particular implementation
	#
	# Since the to_s of a FlatBuffer now builds using
	# the old String contructor, this breaks everything.
	#
	# This will disappear when UTF8 is fully-supported
	redef fun to_s do
		written = false
		return to_cstring.to_s_with_length(length)
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

redef class OFStream
	redef fun write(s)
	do
		assert _writable
		if s isa FlatText then
			if s isa FlatString then
				write_native(s.to_cstring, s.bytelen)
			else
				write_native(s.to_cstring, s.length)
			end
		else for i in s.substrings do write_native(i.to_cstring, i.length)
	end
end
