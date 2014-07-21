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
