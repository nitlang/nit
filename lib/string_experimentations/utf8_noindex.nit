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
module utf8_noindex

intrude import standard::string
intrude import standard::file

in "C Header" `{

#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define IS_BIG_ENDIAN (*(uint16_t *)"\0\xff" < 0x100)

`}

# UTF-8 char as defined in RFC-3629, e.g. 1-4 Bytes
extern class UnicodeChar `{ uint32_t* `}

	# Transforms a byte-variable char* character to its uint32_t equivalent
	new from_ns(ns: NativeString, index: Int) `{
		unsigned char* ret = calloc(1,4);
		if((ns[index] & 0x80) == 0){ memcpy(ret + 3, ns + index, 1);  }
		else if((ns[index] & 0xE0) == 0xC0) { memcpy(ret + 2, ns + index, 2); }
		else if((ns[index] & 0xF0) == 0xE0) { memcpy(ret + 1, ns + index, 3); }
		else if((ns[index] & 0xF7) == 0xF0) { memcpy(ret, ns + index, 4); }
		else{ memcpy(ret + 3, ns + index, 1);}
		if (!IS_BIG_ENDIAN) {
			uint32_t tmp = ntohl(*((uint32_t*)ret));
			memcpy(ret, &tmp, 4);
		}
		return (uint32_t*)ret;
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
	fun len: Int `{
		uint32_t s = *recv;
		if(s <= 127) {return 1;}
		if(s >= 49280 && s <= 57279) {return 2;}
		if(s >= 14712960 && s <= 15712191) {return 3;}
		if(s >= 4034953344 && s <= 4156538815) { return 4; }
		// Bad character
		return 1;
	`}

	# Returns the Unicode code point representing the character
	#
	# Note : A unicode character might not be a visible glyph, but it will be used to determine canonical equivalence
	fun code_point: Int `{
		uint32_t val = *recv;
		uint32_t ret = 0;
		switch(UnicodeChar_len(recv)){
			case 1:
				ret = *recv;
				break;
			case 2:
				ret = 0 | ((val & 0x00001F00) >> 2) | (val & 0x0000003F);
				break;
			case 3:
				ret = 0 | ((val & 0x000F0000) >> 4) | ((val & 0x00003F00) >> 2) | (val & 0x0000003F);
				break;
			case 4:
				ret = 0 | ((val & 0x07000000) >> 6) | ((val & 0x003F0000) >> 4) | ((val & 0x00003F00) >> 2) | (val & 0x0000003F);
				break;
		}
		unsigned char* rt = (unsigned char*) &ret;
		return ret;
	`}

	# Returns an upper-case version of self
	#
	# NOTE : Works only on ASCII chars
	# TODO : Support unicode for to_upper
	fun to_upper: UnicodeChar import UnicodeChar.code_point `{
		if(*recv < 97 || *recv > 122){ return recv; }
		uint32_t* ret = calloc(1,4);
		*ret = *recv - 32;
		return ret;
	`}

	# Returns an lower-case version of self
	#
	# NOTE : Works only on ASCII chars
	# TODO : Support unicode for to_upper
	fun to_lower: UnicodeChar import UnicodeChar.code_point `{
		if(*recv < 65 || *recv > 90){ return recv; }
		uint32_t* ret = calloc(1,4);
		*ret = *recv + 32;
		return ret;
	`}

	redef fun ==(o)
	do
		if not o isa UnicodeChar then return false
		if o.code_point == self.code_point then return true
		return false
	end

	redef fun output import UnicodeChar.len `{
		uint32_t self = *recv;
		if(!IS_BIG_ENDIAN){
			uint32_t tmp = ntohl(self);
			memcpy(&self, &tmp, 4);
		}
		unsigned char* s = (unsigned char*) &self;
		switch(UnicodeChar_len(recv)){
			case 1:
				printf("%c", s[3]);
				break;
			case 2:
				printf("%c%c", s[2], s[3]);
				break;
			case 3:
				printf("%c%c%c", s[1], s[2], s[3]);
				break;
			case 4:
				printf("%c%c%c%c", s[0], s[1], s[2], s[3]);
				break;
		}
	`}

	redef fun to_s: FlatString import FlatString.full, UnicodeChar.len `{
		int len = UnicodeChar_len(recv);
		char* r = malloc(len + 1);
		r[len] = '\0';
		uint32_t src = *recv;
		if(!IS_BIG_ENDIAN){
			uint32_t tmp = htonl(src);
			memcpy(&src, &tmp, 4);
		}
		unsigned char* s = (unsigned char*) &src;
		switch(len){
			case 1: memcpy(r, s+3, 1); break;
			case 2: memcpy(r, s+2, 2); break;
			case 3: memcpy(r, s+1, 3); break;
			case 4: memcpy(r, s, 4); break;
		}
		return new_FlatString_full(r, 0, len - 1, len, 1);
	`}
end

redef class FlatString

	# Length in bytes of the string (e.g. the length of the C string)
	var bytelen: Int

	redef var length = length_l is lazy

	private init full(items: NativeString, from, to, bytelen, len: Int)
	do
		self.items = items
		index_from = from
		index_to = to
		self.bytelen = bytelen
		length = len
	end

	# Length implementation
	private fun length_l: Int import FlatString.items, FlatString.index_to, FlatString.index_from `{
		char* ns = FlatString_items(recv);
		int i = FlatString_index_from(recv);
		int max = FlatString_index_to(recv);
		int length = 0;
		while(i <= max){
			char c = ns[i];
			if((c & 0x80) == 0) { i+= 1; }
			else if((c & 0xE0) == 0xC0) { i += 2; }
			else if((c & 0xF0) == 0xE0) { i += 3; }
			else if((c & 0xF7) == 0xF0) { i += 4; }
			else { i += 1; }
			length ++;
		}
		return length;
	`}

	private init with_bytelen(items: NativeString, index_from: Int, index_to: Int, bytelen: Int)
	do
		self.items = items
		self.index_from = index_from
		self.index_to = index_to
		self.bytelen = bytelen
	end

	redef fun to_cstring
	do
		if real_items != null then return real_items.as(not null)
		var new_items = calloc_string(bytelen + 1)
		self.items.copy_to(new_items, bytelen, index_from, 0)
		new_items[bytelen] = '\0'
		self.real_items = new_items
		return new_items
	end
end

redef class NativeString

	redef fun to_s: FlatString
	do
		var len = cstring_length
		return to_s_with_length(len)
	end

	redef fun to_s_with_length(len: Int): FlatString
	do
		return new FlatString.with_bytelen(self, 0, len - 1, len)
	end

	redef fun to_s_with_copy
	do
		var length = cstring_length
		var new_self = calloc_string(length + 1)
		copy_to(new_self, length, 0, 0)
		return new FlatString.with_bytelen(new_self, 0, length - 1, length)
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
