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
	super Comparable

	redef type OTHER: UnicodeChar

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

	# Warning : This does not follow the Unicode specification for now
	#
	# TODO: Support Unicode-compliant comparison
	redef fun <(o) do return self.code_point < o.code_point

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

	redef type OTHER: FlatString

	# Length in bytes of the string (e.g. the length of the C string)
	redef var bytelen: Int

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

	redef fun <(o)
	do
		var o_pos = 0
		var olen = o.length
		for i in [0 .. length[ do
			if o_pos >= olen then return false
			if char_at(i) > o.char_at(i) then return false
			if char_at(i) < o.char_at(i) then return true
		end
		return false
	end

	redef fun ==(o) do
		if o == null then return false
		if not o isa FlatString then return super
		var mylen = length
		var itslen = o.length
		if mylen != itslen then return false
		var mypos = 0
		var itspos = 0

		while mypos < mylen do
			if char_at(mypos) != o.char_at(itspos) then return false
			mypos += 1
			itspos += 1
		end
		return true
	end

	private fun byte_index(index: Int): Int do
		assert index >= 0
		assert index < length
		var ns_i = index_from
		var my_i = 0
		while my_i != index do
			if items[ns_i].ascii.bin_and(0x80) == 0 then
				ns_i += 1
			else if items[ns_i].ascii.bin_and(0xE0) == 0xC0 then
				ns_i += 2
			else if items[ns_i].ascii.bin_and(0xF0) == 0xE0 then
				ns_i += 3
			else if items[ns_i].ascii.bin_and(0xF7) == 0xF0 then
				ns_i += 4
			else
				ns_i += 1
			end
			my_i += 1
		end
		return ns_i
	end

	fun char_at(pos: Int): UnicodeChar do
		return new UnicodeChar.from_ns(items, byte_index(pos))
	end

	private init with_bytelen(items: NativeString, index_from: Int, index_to: Int, bytelen: Int) do
		self.items = items
		self.index_from = index_from
		self.index_to = index_to
		self.bytelen = bytelen
	end

	redef fun reversed do
		var new_str = calloc_string(bytelen)
		var s_pos = bytelen
		var my_pos = index_from
		var its = items
		for i in [0..length[ do
			var c = char_at(i).len
			s_pos -= c
			its.copy_to(new_str, c, my_pos, s_pos)
			my_pos += c
		end
		return new FlatString.full(new_str, 0, bytelen - 1, bytelen, length)
	end

	redef fun to_upper do
		var ns = calloc_string(bytelen)
		var offset = 0
		for i in [0 .. length[
		do
			var c = char_at(i)
			c.to_upper.to_s.items.copy_to(ns, c.len, 0, offset)
			offset += c.len
		end
		return new FlatString.full(ns, 0, bytelen - 1, bytelen, length)
	end

	redef fun to_lower do
		var ns = calloc_string(bytelen)
		var offset = 0
		for i in [0 .. length[
		do
			var c = char_at(i)
			c.to_lower.to_s.items.copy_to(ns, c.len, 0, offset)
			offset += c.len
		end
		return new FlatString.full(ns, 0, bytelen - 1, bytelen, length)
	end

	redef fun +(o) do
		if o isa Buffer then o = o.to_s
		if o isa FlatString then
			var new_str = calloc_string(bytelen + o.bytelen + 1)
			var new_bytelen = bytelen + o.bytelen
			new_str[new_bytelen] = '\0'
			var newlen = length + o.length
			items.copy_to(new_str, bytelen, index_from, 0)
			o.items.copy_to(new_str, o.bytelen, o.index_from, bytelen)
			return new FlatString.full(new_str, 0, new_bytelen - 1, new_bytelen, newlen)
		else if o isa RopeString then
			return new RopeString.from(self) + o
		else
			# If it goes to this point, that means another String implementation was concerned, therefore you need to support the + operation for this variant
			abort
		end
	end

	redef fun *(i) do
		var mybtlen = bytelen
		var new_bytelen = mybtlen * i
		var mylen = length
		var newlen = mylen * i
		var ns = calloc_string(new_bytelen + 1)
		ns[new_bytelen] = '\0'
		var offset = 0
		while i > 0 do
			items.copy_to(ns, bytelen, index_from, offset)
			offset += mybtlen
			i -= 1
		end
		return new FlatString.full(ns, 0, new_bytelen - 1, new_bytelen, newlen)
	end

	# O(n)
	redef fun substring(from: Int, count: Int) do
		assert count >= 0

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		if count == 0 then return empty

		var real_from = byte_index(from)

		var lst = from + count - 1

		if lst > length - from then
			return new FlatString.with_bytelen(items, real_from, index_to, index_to - real_from)
		end

		var real_to = byte_index(lst)

		return new FlatString.full(items, real_from, real_to, (real_to + char_at(lst).len) - real_from, count)
	end

	redef fun to_cstring do
		if real_items != null then return real_items.as(not null)
		var new_items = calloc_string(bytelen + 1)
		self.items.copy_to(new_items, bytelen, index_from, 0)
		new_items[bytelen] = '\0'
		self.real_items = new_items
		return new_items
	end
end

redef class Text

	# Length of the string, in bytes
	fun bytelen: Int is abstract

end

redef class FlatBuffer

	redef var bytelen: Int

	redef init from(s) do
		if s isa RopeString then
			with_capacity(50)
			for i in s.substrings do self.append(i)
		end
		items = calloc_string(s.bytelen)
		if s isa FlatString then
			s.items.copy_to(items, s.bytelen, s.index_from, 0)
		else
			s.as(FlatBuffer).items.copy_to(items, s.as(FlatBuffer).bytelen, 0, 0)
		end
		length = s.length
		bytelen = s.bytelen
		capacity = s.bytelen
	end

	# Replaces the char at `index` by `item`
	fun char_at=(index: Int, item: UnicodeChar) do
		is_dirty = true
		if index == length then
			add_unicode item
			return
		end
		assert index >= 0 and index < length
		var ip = byte_at(index)
		var c = char_at_byte(ip)
		var size_diff = item.len - c.len
		if size_diff > 0 then
			rshift_bytes(ip + c.len, size_diff)
		else if size_diff < 0 then
			lshift_bytes(ip + c.len, -size_diff)
		end
		var s = item.to_s
		s.items.copy_to(items, s.bytelen, 0, ip)
	end

	# Shifts the content of the buffer by `len` bytes to the right, starting at byte `from`
	fun rshift_bytes(from: Int, len: Int) import FlatBuffer.bytelen, FlatBuffer.bytelen=, FlatBuffer.items `{
		long bt = FlatBuffer_bytelen(recv);
		char* ns = FlatBuffer_items(recv);
		int off = from + len;
		memmove(ns + off, ns + from, bt - from);
		FlatBuffer_bytelen__assign(recv, bt + len);
	`}

	# Shifts the content of the buffer by `len` bytes to the left, starting at `from`
	fun lshift_bytes(from: Int, len: Int) import FlatBuffer.bytelen, FlatBuffer.bytelen=, FlatBuffer.items `{
		long bt = FlatBuffer_bytelen(recv);
		char* ns = FlatBuffer_items(recv);
		int off = from - len;
		memmove(ns + off, ns + from, bt - from);
		FlatBuffer_bytelen__assign(recv, bt - len);
	`}

	# Get the Unicode char stored at `index` in `self`
	fun char_at(index: Int): UnicodeChar do return new UnicodeChar.from_ns(items, byte_at(index))

	# Get the Unicode char stored at `index` (bytewise) in `self`
	fun char_at_byte(index: Int): UnicodeChar do return new UnicodeChar.from_ns(items, index)

	# Add equivalent that supports Unicode
	fun add_unicode(c: UnicodeChar) do
		var s = c.to_s
		if s.bytelen + bytelen > capacity then enlarge(s.bytelen)
		s.items.copy_to(items, s.bytelen, 0, bytelen)
	end

	# Gets the byte index (in NativeString) of the char stored at `i`
	fun byte_at(i: Int): Int do
		assert i < length and i >= 0
		var ns_i = 0
		var real_i = 0
		while real_i < i do
			if items[ns_i].ascii.bin_and(0x80) == 0 then
				ns_i += 1
			else if items[ns_i].ascii.bin_and(0xE0) == 0xC0 then
				ns_i += 2
			else if items[ns_i].ascii.bin_and(0xF0) == 0xE0 then
				ns_i += 3
			else if items[ns_i].ascii.bin_and(0xF7) == 0xF0 then
				ns_i += 4
			else
				ns_i += 1
			end
			real_i += 1
		end
		return ns_i
	end

	redef fun enlarge(cap) do
		var c = capacity
		if cap <= c then return
		while c <= cap do c = c * 2 + 2
		var a = calloc_string(c+1)
		if bytelen > 0 then items.copy_to(a, bytelen, 0, 0)
		items = a
		capacity = c
	end

	redef fun append(s) do
		if s isa RopeString then
			for i in s.substrings do append i
		end
		var i = s.as(FlatString)
		var blen = bytelen
		var iblen = i.bytelen
		var newlen = blen + iblen
		if newlen > capacity then
			enlarge(newlen)
		end
		i.items.copy_to(items, iblen, i.index_from, blen)
		bytelen += iblen
		length += i.length
	end

	redef fun reverse
	do
		var nns = calloc_string(bytelen)
		var ns = items
		var btlen = bytelen
		var myp = 0
		var itsp = btlen
		while myp < btlen do
			var c = char_at_byte(myp).len
			itsp -= c
			ns.copy_to(nns, c, myp, itsp)
			myp += c
		end
		items = nns
	end

	redef fun clear do
		length = 0
		bytelen = 0
	end

	redef fun copy(s, l, d, ns) do
		if not d isa FlatBuffer then
			# This implementation here is only concerned by the FlatBuffer
			# If you implement a new Buffer subclass, make sure to support this operation via refinement.
			abort
		end
		var rs = byte_at(s)
		var re = byte_at(s + l - 1)
		var rl = re - rs
		var rns = d.byte_at(ns)
		items.copy_to(d.items, rl, rns, rs)
	end

	redef fun times(i) do
		var len = bytelen
		var off = len
		var newlen = len * i
		if newlen > capacity then enlarge(newlen)
		for j in [1 .. i[ do
			items.copy_to(items, len, 0, off)
			off += len
		end
		bytelen = newlen
		length = length * i
	end

	redef fun upper do
		for i in [0 .. length[ do
			var pos = byte_at(i)
			var c = char_at_byte(pos)
			var d = c.to_upper
			if c == d then continue
			d.to_s.items.copy_to(items, 1, 0, pos)
		end
	end

	redef fun lower do
		for i in [0 .. length[ do
			var pos = byte_at(i)
			var c = char_at_byte(pos)
			var d = c.to_lower
			if c == d then continue
			d.to_s.items.copy_to(items, 1, 0, pos)
		end
	end

	redef fun to_cstring do
		var ns = calloc_string(bytelen)
		items.copy_to(ns, bytelen, 0, 0)
		return ns
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
			write_native(s.to_cstring, s.bytelen)
		else for i in s.substrings do write_native(i.to_cstring, i.length)
	end
end
