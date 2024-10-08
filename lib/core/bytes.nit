# This file is part of NIT ( https://nitlanguage.org ).
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

# Services for byte streams and arrays
module bytes

import kernel
import collection::array
intrude import text::flat

# Any kind of entity which can be searched for in a Sequence of Byte
interface BytePattern
	# Return the first occurence of `self` in `b`, or -1 if not found
	fun first_index_in(b: SequenceRead[Int]): Int do return first_index_in_from(b, 0)

	# Return the first occurence of `self` in `b` starting at `from`, or -1 if not found
	fun first_index_in_from(b: SequenceRead[Int], from: Int): Int is abstract

	# Return the last occurence of `self` in `b`, or -1 if not found
	fun last_index_in(b: SequenceRead[Int]): Int do return last_index_in_from(b, b.length - 1)

	# Return the last occurence of `self` in `b`, or -1 if not found
	fun last_index_in_from(b: SequenceRead[Int], from: Int): Int is abstract

	# Returns the indexes of all the occurences of `self` in `b`
	fun search_all_in(b: SequenceRead[Int]): SequenceRead[Int] is abstract

	# Length of the pattern
	fun pattern_length: Int is abstract

	# Appends `self` to `b`
	fun append_to(b: Sequence[Int]) is abstract

	# Is `self` a prefix for `b` ?
	fun is_prefix(b: SequenceRead[Int]): Bool is abstract

	# Is `self` a suffix for `b` ?
	fun is_suffix(b: SequenceRead[Int]): Bool is abstract
end

redef class Int
	super BytePattern

	# Write self as a string into `ns` at position `pos`
	private fun add_digest_at(ns: CString, pos: Int) do
		var tmp = (0xF0 & self) >> 4
		ns[pos] = if tmp >= 0x0A then tmp + 0x37 else tmp + 0x30
		tmp = 0x0F & self
		ns[pos + 1] = if tmp >= 0x0A then tmp + 0x37 else tmp + 0x30
	end

	# Is `self` a valid hexadecimal digit (in ASCII)
	#
	# ~~~nit
	# intrude import core::bytes
	# assert not u'/'.is_valid_hexdigit
	# assert u'0'.is_valid_hexdigit
	# assert u'9'.is_valid_hexdigit
	# assert not u':'.is_valid_hexdigit
	# assert not u'@'.is_valid_hexdigit
	# assert u'A'.is_valid_hexdigit
	# assert u'F'.is_valid_hexdigit
	# assert not u'G'.is_valid_hexdigit
	# assert not u'`'.is_valid_hexdigit
	# assert u'a'.is_valid_hexdigit
	# assert u'f'.is_valid_hexdigit
	# assert not u'g'.is_valid_hexdigit
	# ~~~
	private fun is_valid_hexdigit: Bool do
		return (self >= 0x30 and self <= 0x39) or
		       (self >= 0x41 and self <= 0x46) or
		       (self >= 0x61 and self <= 0x66)
	end

	# `self` as a hexdigit to its byte value
	#
	# ~~~nit
	# intrude import core::bytes
	# assert 0x39.hexdigit_to_byteval == 0x09
	# assert 0x43.hexdigit_to_byteval == 0x0C
	# ~~~
	#
	# REQUIRE: `self.is_valid_hexdigit`
	private fun hexdigit_to_byteval: Int do
		if self >= 0x30 and self <= 0x39 then
			return self - 0x30
		else if self >= 0x41 and self <= 0x46 then
			return self - 0x37
		else if self >= 0x61 and self <= 0x66 then
			return self - 0x57
		end
		# Happens only if the requirement is not met.
		# i.e. this abort is here to please the compiler
		abort
	end

	redef fun first_index_in_from(b, from) do
		for i in [from .. b.length[ do if b[i] == self then return i
		return -1
	end

	redef fun last_index_in_from(b, from) do
		for i in [0 .. from].step(-1) do if b[i] == self then return i
		return -1
	end

	redef fun search_all_in(b) do
		var ret = new Array[Int]
		var pos = 0
		loop
			pos = first_index_in_from(b, pos)
			if pos == -1 then return ret
			ret.add pos
			pos += 1
		end
	end

	redef fun pattern_length do return 1

	redef fun append_to(b) do b.push self

	#     assert u'b'.is_suffix("baqsdb".to_bytes)
	#     assert not u'b'.is_suffix("baqsd".to_bytes)
	redef fun is_suffix(b) do return b.length != 0 and b.last == self

	#     assert u'b'.is_prefix("baqsdb".to_bytes)
	#     assert not u'b'.is_prefix("aqsdb".to_bytes)
	redef fun is_prefix(b) do return b.length != 0 and b.first == self

	# A signed big-endian representation of `self`
	#
	# ~~~
	# assert     1.to_bytes.hexdigest ==     "01"
	# assert   255.to_bytes.hexdigest ==     "FF"
	# assert   256.to_bytes.hexdigest ==   "0100"
	# assert 65535.to_bytes.hexdigest ==   "FFFF"
	# assert 65536.to_bytes.hexdigest == "010000"
	# ~~~
	#
	# Negative values are converted to their two's complement.
	# Be careful as the result can be ambiguous.
	#
	# ~~~
	# assert     (-1).to_bytes.hexdigest ==     "FF"
	# assert    (-32).to_bytes.hexdigest ==     "E0"
	# assert   (-512).to_bytes.hexdigest ==   "FE00"
	# assert (-65794).to_bytes.hexdigest == "FEFEFE"
	# ~~~
	#
	# Optionally, set `n_bytes` to the desired number of bytes in the output.
	# This setting can disambiguate the result between positive and negative
	# integers. Be careful with this parameter as the result may overflow.
	#
	# ~~~
	# assert        1.to_bytes(2).hexdigest ==     "0001"
	# assert    65535.to_bytes(2).hexdigest ==     "FFFF"
	# assert     (-1).to_bytes(2).hexdigest ==     "FFFF"
	# assert   (-512).to_bytes(4).hexdigest == "FFFFFE00"
	# assert 0x123456.to_bytes(2).hexdigest ==     "3456"
	# ~~~
	#
	# For 0, a Bytes object with single nul byte is returned (instead of an empty Bytes object).
	#
	# ~~~
	# assert 0.to_bytes.hexdigest == "00"
	# ~~~
	#
	# For positive integers, `Bytes::to_i` can reverse the operation.
	#
	# ~~~
	# assert 1234.to_bytes.to_i == 1234
	# ~~~
	#
	# Require self >= 0
	fun to_bytes(n_bytes: nullable Int): Bytes do

		# If 0, force using at least one byte
		if self == 0 and n_bytes == null then n_bytes = 1

		# Compute the len (log256)
		var len = 1
		var max = 256
		var s = self.abs
		while s >= max do
			len += 1
			max *= 256
		end

		# Two's complement
		s = self
		if self < 0 then
			var ff = 0
			for j in [0..len[ do
				ff *= 0x100
				ff += 0xFF
			end

			s = ((-self) ^ ff) + 1
		end

		# Cut long values
		if n_bytes != null and len > n_bytes then len = n_bytes

		# Allocate the buffer
		var cap = n_bytes or else len
		var res = new Bytes.with_capacity(cap)

		var filler = if self < 0 then 0xFF else 0
		for i in [0..cap[ do res[i] = filler

		# Fill it starting with the end
		var i = cap
		var sum = s
		while i > cap - len do
			i -= 1
			res[i] = sum % 256
			sum /= 256
		end

		return res
	end
end

# A buffer containing Byte-manipulation facilities
#
# Uses Copy-On-Write when persisted
class Bytes
	super AbstractArray[Int]
	super BytePattern

	# A CString being a char*, it can be used as underlying representation here.
	var items: CString

	# Number of bytes in the array
	redef var length

	# Capacity of the array
	private var capacity: Int

	# Has this buffer been persisted (to_s'd)?
	#
	# Used for Copy-On-Write
	private var persisted = false

	#     var b = new Bytes.empty
	#     assert b.to_s == ""
	init empty do
		var ns = new CString(0)
		init(ns, 0, 0)
	end

	# Init a `Bytes` with capacity `cap`
	init with_capacity(cap: Int) do
		var ns = new CString(cap)
		init(ns, 0, cap)
	end

	redef fun pattern_length do return length

	redef fun is_empty do return length == 0

	#     var b = new Bytes.empty
	#     b.add 101
	#     assert b[0] == 101
	redef fun [](i) do
		assert i >= 0
		assert i < length
		return items[i]
	end

	# Returns a copy of `self`
	fun clone: Bytes do
		var b = new Bytes.with_capacity(length)
		b.append(self)
		return b
	end

	# Trims off the whitespaces at the beginning and the end of `self`
	#
	#     var b = "102041426E6F1020" .hexdigest_to_bytes
	#     assert b.trim.hexdigest == "41426E6F"
	#
	# NOTE: A whitespace is defined here as a byte whose value is <= 0x20
	fun trim: Bytes do
		var st = 0
		while st < length do
			if self[st] > 0x20 then break
			st += 1
		end
		if st >= length then return new Bytes.empty
		var ed = length - 1
		while ed > 0 do
			if self[ed] > 0x20 then break
			ed -= 1
		end
		return slice(st, ed - st + 1)
	end

	# Copy a subset of `self` starting at `from` and of `count` bytes
	#
	#     var b = "abcd".to_bytes
	#     assert b.slice(1, 2).hexdigest == "6263"
	#     assert b.slice(-1, 2).hexdigest == "61"
	#     assert b.slice(1, 0).hexdigest == ""
	#     assert b.slice(2, 5).hexdigest == "6364"
	fun slice(from, count: Int): Bytes do
		if count <= 0 then return new Bytes.empty

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		if (count + from) > length then count = length - from
		if count <= 0 then return new Bytes.empty

		var ret = new Bytes.with_capacity(count)

		ret.append_ns(items.fast_cstring(from), count)
		return ret
	end

	# Copy of `self` starting at `from`
	#
	#     var b = "abcd".to_bytes
	#     assert b.slice_from(1).hexdigest  == "626364"
	#     assert b.slice_from(-1).hexdigest == "61626364"
	#     assert b.slice_from(2).hexdigest  == "6364"
	fun slice_from(from: Int): Bytes do
		if from >= length then return new Bytes.empty
		if from < 0 then from = 0
		return slice(from, length)
	end

	# Reverse the byte array in place
	#
	#     var b = "abcd".to_bytes
	#     b.reverse
	#     assert b.to_s == "dcba"
	fun reverse
	do
		var l = length
		for i in [0..l/2[ do
			var tmp = self[i]
			self[i] = self[l-i-1]
			self[l-i-1] = tmp
		end
	end

	# Returns self as an hexadecimal digest.
	#
	# Also known as plain hexdump or postscript hexdump.
	#
	# ~~~
	# var b = "abcd".to_bytes
	# assert b.hexdigest == "61626364"
	# assert b.hexdigest.hexdigest_to_bytes == b
	# ~~~
	fun hexdigest: String do
		var elen = length * 2
		var ns = new CString(elen)
		var i = 0
		var oi = 0
		while i < length do
			self[i].add_digest_at(ns, oi)
			i += 1
			oi += 2
		end
		return new FlatString.full(ns, elen, 0, elen)
	end

	# Return self as a C hexadecimal digest where bytes are prefixed by `\x`
	#
	# The output is compatible with literal stream of bytes for most languages
	# including C and Nit.
	#
	# ~~~
	# var b = "abcd".to_bytes
	# assert b.chexdigest == "\\x61\\x62\\x63\\x64"
	# assert b.chexdigest.unescape_to_bytes == b
	# ~~~
	fun chexdigest: String do
		var elen = length * 4
		var ns = new CString(elen)
		var i = 0
		var oi = 0
		while i < length do
			ns[oi] = u'\\'
			ns[oi+1] = u'x'
			self[i].add_digest_at(ns, oi+2)
			i += 1
			oi += 4
		end
		return new FlatString.full(ns, elen, 0, elen)
	end


	# Returns self as a stream of bits (0 and 1)
	#
	# ~~~
	# var b = "abcd".to_bytes
	# assert b.binarydigest == "01100001011000100110001101100100"
	# assert b.binarydigest.binarydigest_to_bytes == b
	# ~~~
	fun binarydigest: String do
		var elen = length * 8
		var ns = new CString(elen)
		var i = 0
		var oi = 0
		while i < length do
			var c = self[i]
			var b = 128
			while b > 0 do
				if c & b == 0 then
					ns[oi] = u'0'
				else
					ns[oi] = u'1'
				end
				oi += 1
				b = b >> 1
			end
			i += 1
		end
		return new FlatString.full(ns, elen, 0, elen)
	end

	# Interprets `self` as a big-endian integer (unsigned by default)
	#
	# ~~~
	# var b = "0102".hexdigest_to_bytes
	# assert b.to_i == 258
	#
	# assert   "01".hexdigest_to_bytes.to_i == 1
	# assert   "FF".hexdigest_to_bytes.to_i == 255
	# assert "0000".hexdigest_to_bytes.to_i == 0
	# ~~~
	#
	# If `self.is_empty`, 0 is returned.
	#
	# ~~~
	# assert "".hexdigest_to_bytes.to_i == 0
	# ~~~
	#
	# If `signed == true`, the bytes are read as a signed integer.
	# As usual, the sign bit is the left most bit, no matter the
	# `length` of `self`.
	#
	# ~~~
	# assert     "01".hexdigest_to_bytes.to_i(true) ==      1
	# assert     "FF".hexdigest_to_bytes.to_i(true) ==     -1
	# assert   "00FF".hexdigest_to_bytes.to_i(true) ==    255
	# assert     "E0".hexdigest_to_bytes.to_i(true) ==    -32
	# assert   "FE00".hexdigest_to_bytes.to_i(true) ==   -512
	# assert "FEFEFE".hexdigest_to_bytes.to_i(true) == -65794
	# ~~~
	#
	# `Int::to_bytes` is a loosely reverse method.
	#
	# ~~~
	# assert b.to_i.to_bytes == b
	# assert (b.to_i + 1).to_bytes.hexdigest == "0103"
	# assert "0001".hexdigest_to_bytes.to_i.to_bytes.hexdigest == "01"
	#
	# assert (-32).to_bytes.to_i(true) == -32
	# ~~~
	#
	# Warning: `Int` might overflow for bytes with more than 60 bits.
	fun to_i(signed: nullable Bool): Int do
		var res = 0
		var i = 0
		while i < length do
			res *= 256
			res += self[i].to_i
			i += 1
		end

		# Two's complement is `signed`
		if signed == true and not_empty and first > 0x80 then
			var ff = 0
			for j in [0..length[ do
				ff *= 0x100
				ff += 0xFF
			end

			res = -((res ^ ff) + 1)
		end

		return res
	end

	#     var b = new Bytes.with_capacity(1)
	#     b[0] = 101
	#     assert b.to_s == "e"
	redef fun []=(i, v) do
		if persisted then regen
		assert i >= 0
		assert i <= length
		if i == length then add(v)
		items[i] = v
	end

	#     var b = new Bytes.empty
	#     b.add 101
	#     assert b.to_s == "e"
	redef fun add(c) do
		if persisted then regen
		if length >= capacity then
			enlarge(length)
		end
		items[length] = c
		length += 1
	end

	# Adds the UTF-8 representation of `c` to `self`
	#
	#     var b = new Bytes.empty
	#     b.add_char('A')
	#     b.add_char('キ')
	#     assert b.hexdigest == "41E382AD"
	fun add_char(c: Char) do
		if persisted then regen
		var cln = c.u8char_len
		var ln = length
		enlarge(ln + cln)
		items.set_char_at(length, c)
		length += cln
	end

	redef fun has(c)
	do
		if not c isa Int then return false
		return super(c&255)
	end

	#     var b = new Bytes.empty
	#     b.append([104, 101, 108, 108, 111])
	#     assert b.to_s == "hello"
	redef fun append(arr) do
		if arr isa Bytes then
			append_ns(arr.items, arr.length)
		else
			for i in arr do add i
		end
	end

	#     var b = new Bytes.empty
	#     b.append([0x41, 0x41, 0x18])
	#     b.pop
	#     assert b.to_s == "AA"
	redef fun pop do
		assert length >= 1
		length -= 1
		return items[length]
	end

	redef fun clear do length = 0

	# Regenerates the buffer, necessary when it was persisted
	private fun regen do
		var nns = new CString(capacity)
		items.copy_to(nns, length, 0, 0)
		persisted = false
	end

	# Appends the `ln` first bytes of `ns` to self
	fun append_ns(ns: CString, ln: Int) do
		if persisted then regen
		var nlen = length + ln
		if nlen > capacity then enlarge(nlen)
		ns.copy_to(items, ln, 0, length)
		length += ln
	end

	# Appends `ln` bytes from `ns` starting at index `from` to self
	fun append_ns_from(ns: CString, ln, from: Int) do
		if persisted then regen
		var nlen = length + ln
		if nlen > capacity then enlarge(nlen)
		ns.copy_to(items, ln, from, length)
		length += ln
	end

	# Appends the bytes of `str` to `self`
	fun append_text(str: Text) do str.append_to_bytes self

	redef fun append_to(b) do b.append self

	redef fun enlarge(sz) do
		if capacity >= sz then return
		persisted = false
		if capacity < 16 then capacity = 16
		while capacity < sz do capacity = capacity * 2 + 2
		var ns = new CString(capacity)
		items.copy_to(ns, length, 0, 0)
		items = ns
	end

	redef fun to_s do
		persisted = true
		var b = self
		var r = b.items.to_s_unsafe(length, copy=false)
		if r != items then persisted = false
		return r
	end

	redef fun iterator do return new BytesIterator.with_buffer(self)

	redef fun first_index_in_from(b, from) do
		if is_empty then return -1
		var fst = self[0]
		var bpos = fst.first_index_in_from(self, from)
		for i in [0 .. length[ do
			if self[i] != b[bpos] then return first_index_in_from(b, bpos + 1)
			bpos += 1
		end
		return bpos
	end

	redef fun last_index_in_from(b, from) do
		if is_empty then return -1
		var lst = self[length - 1]
		var bpos = lst.last_index_in_from(b, from)
		for i in [0 .. length[.step(-1) do
			if self[i] != b[bpos] then return last_index_in_from(b, bpos - 1)
			bpos -= 1
		end
		return bpos
	end

	redef fun search_all_in(b) do
		var ret = new Array[Int]
		var pos = first_index_in_from(b, 0)
		if pos == -1 then return ret
		pos = pos + 1
		ret.add pos
		loop
			pos = first_index_in_from(b, pos)
			if pos == -1 then return ret
			ret.add pos
			pos += length
		end
	end

	# Splits the content on self when encountering `b`
	#
	#     var a = "String is string".to_bytes.split_with(u's')
	#     assert a.length == 3
	#     assert a[0].hexdigest == "537472696E672069"
	#     assert a[1].hexdigest == "20"
	#     assert a[2].hexdigest == "7472696E67"
	fun split_with(b: BytePattern): Array[Bytes] do
		var fst = b.search_all_in(self)
		if fst.is_empty then return [clone]
		var retarr = new Array[Bytes]
		var prev = 0
		for i in fst do
			retarr.add(slice(prev, i - prev))
			prev = i + b.pattern_length
		end
		retarr.add slice_from(prev)
		return retarr
	end

	# Splits `self` in two parts at the first occurence of `b`
	#
	#     var a = "String is string".to_bytes.split_once_on(u's')
	#     assert a[0].hexdigest == "537472696E672069"
	#     assert a[1].hexdigest == "20737472696E67"
	fun split_once_on(b: BytePattern): Array[Bytes] do
		var spl = b.first_index_in(self)
		if spl == -1 then return [clone]
		var ret = new Array[Bytes].with_capacity(2)
		ret.add(slice(0, spl))
		ret.add(slice_from(spl + b.pattern_length))
		return ret
	end

	# Replaces all the occurences of `this` in `self` by `by`
	#
	#     var b = "String is string".to_bytes.replace(0x20, 0x41)
	#     assert b.hexdigest == "537472696E6741697341737472696E67"
	fun replace(pattern: BytePattern, bytes: BytePattern): Bytes do
		if is_empty then return new Bytes.empty
		var pos = pattern.search_all_in(self)
		if pos.is_empty then return clone
		var ret = new Bytes.with_capacity(length)
		var prev = 0
		for i in pos do
			ret.append_ns(items.fast_cstring(prev), i - prev)
			bytes.append_to ret
			prev = i + pattern.pattern_length
		end
		ret.append(slice_from(pos.last + pattern.pattern_length))
		return ret
	end

	# Decode `self` from percent (or URL) encoding to a clear string
	#
	# Invalid '%' are not decoded.
	#
	#     assert "aBc09-._~".to_bytes.from_percent_encoding == "aBc09-._~".to_bytes
	#     assert "%25%28%29%3c%20%3e".to_bytes.from_percent_encoding == "%()< >".to_bytes
	#     assert ".com%2fpost%3fe%3dasdf%26f%3d123".to_bytes.from_percent_encoding == ".com/post?e=asdf&f=123".to_bytes
	#     assert "%25%28%29%3C%20%3E".to_bytes.from_percent_encoding == "%()< >".to_bytes
	#     assert "incomplete %".to_bytes.from_percent_encoding == "incomplete %".to_bytes
	#     assert "invalid % usage".to_bytes.from_percent_encoding == "invalid % usage".to_bytes
	#     assert "%c3%a9%e3%81%82%e3%81%84%e3%81%86".to_bytes.from_percent_encoding == "éあいう".to_bytes
	#     assert "%1 %A %C3%A9A9".to_bytes.from_percent_encoding == "%1 %A éA9".to_bytes
	fun from_percent_encoding: Bytes do
		var tmp = new Bytes.with_capacity(length)
		var pos = 0
		while pos < length do
			var b = self[pos]
			if b != u'%' then
				tmp.add b
				pos += 1
				continue
			end
			if length - pos < 2 then
				tmp.add u'%'
				pos += 1
				continue
			end
			var bn = self[pos + 1]
			var bnn = self[pos + 2]
			if not bn.is_valid_hexdigit or not bnn.is_valid_hexdigit then
				tmp.add u'%'
				pos += 1
				continue
			end
			tmp.add((bn.hexdigit_to_byteval << 4) + bnn.hexdigit_to_byteval)
			pos += 3
		end
		return tmp
	end

	# Is `b` a prefix of `self` ?
	fun has_prefix(b: BytePattern): Bool do return b.is_prefix(self)

	# Is `b` a suffix of `self` ?
	fun has_suffix(b: BytePattern): Bool do return b.is_suffix(self)

	redef fun is_suffix(b) do
		if length > b.length then return false
		var j = b.length - 1
		var i = length - 1
		while i > 0 do
			if self[i] != b[j] then return false
			i -= 1
			j -= 1
		end
		return true
	end

	redef fun is_prefix(b) do
		if length > b.length then return false
		for i in [0 .. length[ do if self[i] != b[i] then return false
		return true
	end
end

private class BytesIterator
	super IndexedIterator[Int]

	var tgt: CString

	redef var index

	var max: Int

	init with_buffer(b: Bytes) do init(b.items, 0, b.length)

	redef fun is_ok do return index < max

	redef fun next do index += 1

	redef fun item do return tgt[index]
end

redef class Text
	# Returns a mutable copy of `self`'s bytes
	#
	# ~~~nit
	# assert "String".to_bytes isa Bytes
	# assert "String".to_bytes == [83, 116, 114, 105, 110, 103]
	# ~~~
	fun to_bytes: Bytes do
		var b = new Bytes.with_capacity(byte_length)
		append_to_bytes b
		return b
	end

	# Is `self` a valid hexdigest ?
	#
	#     assert "0B1d3F".is_valid_hexdigest
	#     assert not "5G".is_valid_hexdigest
	fun is_valid_hexdigest: Bool do
		for i in bytes do if not i.is_valid_hexdigit then return false
		return true
	end

	# Appends `self.bytes` to `b`
	fun append_to_bytes(b: Bytes) do
		for s in substrings do
			var from = if s isa FlatString then s.first_byte else 0
			b.append_ns_from(s.items, s.byte_length, from)
		end
	end

	# Returns a new `Bytes` instance with the digest as content
	#
	#     assert "0B1F4D".hexdigest_to_bytes == [0x0B, 0x1F, 0x4D]
	#     assert "0B1F4D".hexdigest_to_bytes.hexdigest == "0B1F4D"
	#
	# Characters that are not hexadecimal digits are ignored.
	#
	#     assert "z0B1 F4\nD".hexdigest_to_bytes.hexdigest == "0B1F4D"
	#     assert "\\x0b1 \\xf4d".hexdigest_to_bytes.hexdigest == "0B1F4D"
	#
	# When the number of hexadecimal digit is not even, then a leading 0 is
	# implicitly considered to fill the left byte (the most significant one).
	#
	#     assert "1".hexdigest_to_bytes.hexdigest == "01"
	#     assert "FFF".hexdigest_to_bytes.hexdigest == "0FFF"
	#
	# `Bytes::hexdigest` is a loosely reverse method since its
	# results contain only pairs of uppercase hexadecimal digits.
	#
	#     assert "ABCD".hexdigest_to_bytes.hexdigest == "ABCD"
	#     assert "a b c".hexdigest_to_bytes.hexdigest == "0ABC"
	fun hexdigest_to_bytes: Bytes do
		var b = bytes
		var max = byte_length

		var dlength = 0 # Number of hex digits
		var pos = 0
		while pos < max do
			var c = b[pos]
			if c.is_valid_hexdigit then dlength += 1
			pos += 1
		end

		# Allocate the result buffer
		var ret = new Bytes.with_capacity((dlength+1) / 2)

		var i = (dlength+1) % 2 # current hex digit (1=high, 0=low)
		var byte = 0 # current accumulated byte value

		pos = 0
		while pos < max do
			var c = b[pos]
			if c.is_valid_hexdigit then
				byte = byte << 4 | c.hexdigit_to_byteval
				i -= 1
				if i < 0 then
					# Last digit known: store and restart
					ret.add byte
					i = 1
					byte = 0
				end
			end
			pos += 1
		end
		return ret
	end

	# Gets the hexdigest of the bytes of `self`
	#
	#     assert "&lt;STRING&#47;&rt;".hexdigest == "266C743B535452494E47262334373B2672743B"
	fun hexdigest: String do
		var ln = byte_length
		var outns = new CString(ln * 2)
		var oi = 0
		for i in [0 .. ln[ do
			bytes[i].add_digest_at(outns, oi)
			oi += 2
		end
		return new FlatString.with_infos(outns, ln * 2, 0)
	end

	# Return a `Bytes` instance where Nit escape sequences are transformed.
	#
	#     assert "B\\n\\x41\\u0103D3".unescape_to_bytes.hexdigest == "420A41F0908F93"
	#
	# `Bytes::chexdigest` is a loosely reverse methods since its result is only made
	# of `"\x??"` escape sequences.
	#
	#     assert "\\x41\\x42\\x43".unescape_to_bytes.chexdigest == "\\x41\\x42\\x43"
	#     assert "B\\n\\x41\\u0103D3".unescape_to_bytes.chexdigest == "\\x42\\x0A\\x41\\xF0\\x90\\x8F\\x93"
	fun unescape_to_bytes: Bytes do
		var res = new Bytes.with_capacity(self.byte_length)
		var was_slash = false
		var i = 0
		while i < length do
			var c = self[i]
			if not was_slash then
				if c == '\\' then
					was_slash = true
				else
					res.add_char(c)
				end
				i += 1
				continue
			end
			was_slash = false
			if c == 'n' then
				res.add_char('\n')
			else if c == 'r' then
				res.add_char('\r')
			else if c == 't' then
				res.add_char('\t')
			else if c == '0' then
				res.add_char('\0')
			else if c == 'x' or c == 'X' then
				var hx = substring(i + 1, 2)
				if hx.is_hex then
					res.add hx.to_hex
				else
					res.add_char(c)
				end
				i += 2
			else if c == 'u' or c == 'U' then
				var hx = substring(i + 1, 6)
				if hx.is_hex then
					res.add_char(hx.to_hex.code_point)
				else
					res.add_char(c)
				end
				i += 6
			else
				res.add_char(c)
			end
			i += 1
		end
		return res
	end

	# Return a `Bytes` by reading 0 and 1.
	#
	#     assert "1010101100001101".binarydigest_to_bytes.hexdigest == "AB0D"
	#
	# Note that characters that are neither 0 or 1 are just ignored.
	#
	#     assert "a1B01 010\n1100あ001101".binarydigest_to_bytes.hexdigest == "AB0D"
	#     assert "hello".binarydigest_to_bytes.is_empty
	#
	# When the number of bits is not divisible by 8, then leading 0 are
	# implicitly considered to fill the left byte (the most significant one).
	#
	#     assert "1".binarydigest_to_bytes.hexdigest == "01"
	#     assert "1111111".binarydigest_to_bytes.hexdigest == "7F"
	#     assert "1000110100".binarydigest_to_bytes.hexdigest == "0234"
	#
	# `Bytes::binarydigest` is a loosely reverse method since its
	# results contain only 1 and 0 by blocks of 8.
	#
	#     assert "1010101100001101".binarydigest_to_bytes.binarydigest == "1010101100001101"
	#     assert "1".binarydigest_to_bytes.binarydigest == "00000001"
	fun binarydigest_to_bytes: Bytes
	do
		var b = bytes
		var max = byte_length

		# Count bits
		var bitlen = 0
		var pos = 0
		while pos < max do
			var c = b[pos]
			pos += 1
			if c == u'0' or c == u'1' then bitlen += 1
		end

		# Allocate (and take care of the padding)
		var ret = new Bytes.with_capacity((bitlen+7) / 8)

		var i = (bitlen+7) % 8 # current bit (7th=128, 0th=1)
		var byte = 0 # current accumulated byte value

		pos = 0
		while pos < max do
			var c = b[pos]
			pos += 1
			if c == u'0' then
				byte = byte << 1
			else if c == u'1' then
				byte = byte << 1 | 1
			else
				continue
			end

			i -= 1
			if i < 0 then
				# Last bit known: store and restart
				ret.add byte
				i = 7
				byte = 0
			end
		end
		return ret
	end
end

redef class FlatText
	redef fun append_to_bytes(b) do
		var from = if self isa FlatString then first_byte else 0
		if isset _items then b.append_ns_from(items, byte_length, from)
	end
end

redef class CString
	# Creates a new `Bytes` object from `self` with `len` as length
	#
	# If `len` is null, strlen will determine the length of the Bytes
	fun to_bytes(len: nullable Int): Bytes do
		if len == null then len = cstring_length
		return new Bytes(self, len, len)
	end

	# Creates a new `Bytes` object from a copy of `self` with `len` as length
	#
	# If `len` is null, strlen will determine the length of the Bytes
	fun to_bytes_with_copy(len: nullable Int): Bytes do
		if len == null then len = cstring_length
		var nns = new CString(len)
		copy_to(nns, len, 0, 0)
		return new Bytes(nns, len, len)
	end
end

# Joins an array of bytes `arr` separated by `sep`
#
#     assert join_bytes(["String".to_bytes, "is".to_bytes, "string".to_bytes], u' ').hexdigest == "537472696E6720697320737472696E67"
fun join_bytes(arr: Array[Bytes], sep: nullable BytePattern): Bytes do
	if arr.is_empty then return new Bytes.empty
	sep = sep or else new Bytes.empty
	var endln = sep.pattern_length * (arr.length - 1)
	for i in arr do endln += i.length
	var ret = new Bytes.with_capacity(endln)
	ret.append(arr.first)
	for i in  [1 .. arr.length[ do
		sep.append_to(ret)
		ret.append arr[i]
	end
	return ret
end
