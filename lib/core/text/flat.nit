# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# All the array-based text representations
module flat

intrude import abstract_text
intrude import native

`{
#include <stdio.h>
#include <string.h>
`}

private class FlatSubstringsIter
	super Iterator[FlatText]

	var tgt: nullable FlatText

	redef fun item do
		assert is_ok
		return tgt.as(not null)
	end

	redef fun is_ok do return tgt != null

	redef fun next do tgt = null
end

redef class FlatText

	# First byte of the CString
	protected fun first_byte: Int do return 0

	# Last byte of the CString
	protected fun last_byte: Int do return first_byte + _byte_length - 1

	# Cache of the latest position (char) explored in the string
	var position: Int = 0

	# Cached position (bytes) in the CString underlying the String
	var bytepos: Int = 0

	# Index of the character `index` in `_items`
	fun char_to_byte_index(index: Int): Int do
		var dpos = index - _position
		var b = _bytepos
		var its = _items

		if dpos == 1 then
			if its[b] & 0x80 == 0x00 then
				b += 1
			else
				b += its.length_of_char_at(b)
			end
			_bytepos = b
			_position = index
			return b
		end
		if dpos == -1 then
			b = its.find_beginning_of_char_at(b - 1)
			_bytepos = b
			_position = index
			return b
		end
		if dpos == 0 then return b

		var ln = _length
		var pos = _position
		# Find best insertion point
		var delta_begin = index
		var delta_end = (ln - 1) - index
		var delta_cache = (pos - index).abs
		var min = delta_begin

		if delta_cache < min then min = delta_cache
		if delta_end < min then min = delta_end

		var ns_i: Int
		var my_i: Int

		if min == delta_cache then
			ns_i = _bytepos
			my_i = pos
		else if min == delta_begin then
			ns_i = first_byte
			my_i = 0
		else
			ns_i = its.find_beginning_of_char_at(last_byte)
			my_i = _length - 1
		end

		ns_i = its.char_to_byte_index_cached(index, my_i, ns_i)

		_position = index
		_bytepos = ns_i

		return ns_i
	end

	# By escaping `self` to HTML, how many more bytes will be needed ?
	fun chars_to_html_escape: Int do
		var its = _items
		var max = last_byte
		var pos = first_byte
		var endlen = 0
		while pos <= max do
			var c = its[pos]
			if c == u'<' then
				endlen += 3
			else if c == u'>' then
				endlen += 3
			else if c == u'&' then
				endlen += 4
			else if c == u'"' then
				endlen += 4
			else if c == u'\'' then
				endlen += 4
			else if c == 0x2F then
				endlen += 4
			end
			pos += 1
		end
		return endlen
	end

	redef fun html_escape
	do
		var extra = chars_to_html_escape
		if extra == 0 then return to_s
		var its = _items
		var max = last_byte
		var pos = first_byte
		var nlen = extra + _byte_length
		var nits = new CString(nlen)
		var outpos = 0
		while pos <= max do
			var c = its[pos]
			# Special codes:
			# Some HTML characters are used as meta-data, they need
			# to be replaced by an HTML-Escaped equivalent
			if c == u'<' then
				nits[outpos] = u'&'
				nits[outpos + 1] = u'l'
				nits[outpos + 2] = u't'
				nits[outpos + 3] = u';'
				outpos += 4
			else if c == u'>' then
				nits[outpos] = u'&'
				nits[outpos + 1] = u'g'
				nits[outpos + 2] = u't'
				nits[outpos + 3] = u';'
				outpos += 4
			else if c == u'&' then
				nits[outpos] = u'&'
				nits[outpos + 1] = u'a'
				nits[outpos + 2] = u'm'
				nits[outpos + 3] = u'p'
				nits[outpos + 4] = u';'
				outpos += 5
			else if c == u'"' then
				nits[outpos] = u'&'
				nits[outpos + 1] = u'#'
				nits[outpos + 2] = u'3'
				nits[outpos + 3] = u'4'
				nits[outpos + 4] = u';'
				outpos += 5
			else if c == u'\'' then
				nits[outpos] = u'&'
				nits[outpos + 1] = u'#'
				nits[outpos + 2] = u'3'
				nits[outpos + 3] = u'9'
				nits[outpos + 4] = u';'
				outpos += 5
			else if c == u'/' then
				nits[outpos] = u'&'
				nits[outpos + 1] = u'#'
				nits[outpos + 2] = u'4'
				nits[outpos + 3] = u'7'
				nits[outpos + 4] = u';'
				outpos += 5
			else
				nits[outpos] = c
				outpos += 1
			end
			pos += 1
		end
		var s = new FlatString.with_infos(nits, nlen, 0)
		return s
	end

	# By escaping `self` to C, how many more bytes will be needed ?
	#
	# This enables a double-optimization in `escape_to_c` since if this
	# method returns 0, then `self` does not need escaping and can be
	# returned as-is
	fun chars_to_escape_to_c: Int do
		var its = _items
		var max = last_byte
		var pos = first_byte
		var req_esc = 0
		while pos <= max do
			var c = its[pos]
			if c == u'\n' then
				req_esc += 1
			else if c == u'\t' then
				req_esc += 1
			else if c == u'"' then
				req_esc += 1
			else if c == u'\'' then
				req_esc += 1
			else if c == u'\\' then
				req_esc += 1
			else if c == u'?' then
				var j = pos + 1
				if j < length then
					var next = its[j]
					# We ignore `??'` because it will be escaped as `??\'`.
					if
						next == 0x21 or
						next == 0x28 or
						next == 0x29 or
						next == 0x2D or
						next == 0x2F or
						next == 0x3C or
						next == 0x3D or
						next == 0x3E
					then req_esc += 1
				end
			else if c < 32 then
				req_esc += 3
			end
			pos += 1
		end
		return req_esc
	end

	redef fun escape_to_c do
		var ln_extra = chars_to_escape_to_c
		if ln_extra == 0 then return self.to_s
		var its = _items
		var max = last_byte
		var nlen = _byte_length + ln_extra
		var nns = new CString(nlen)
		var pos = first_byte
		var opos = 0
		while pos <= max do
			var c = its[pos]
			# Special codes:
			#
			# Any byte with value < 32 is a control character
			# All their uses will be replaced by their octal
			# value in C.
			#
			# There are two exceptions however:
			#
			# * 0x09 => \t
			# * 0x0A => \n
			#
			# Aside from the code points above, the following are:
			#
			# * 0x22 => \"
			# * 0x27 => \'
			# * 0x5C => \\
			if c == u'\t' then
				nns[opos] = u'\\'
				nns[opos + 1] = u't'
				opos += 2
			else if c == u'\n' then
				nns[opos] = u'\\'
				nns[opos + 1] = u'n'
				opos += 2
			else if c == u'"' then
				nns[opos] = u'\\'
				nns[opos + 1] = u'"'
				opos += 2
			else if c == u'\'' then
				nns[opos] = u'\\'
				nns[opos + 1] = u'\''
				opos += 2
			else if c == u'\\' then
				nns[opos] = u'\\'
				nns[opos + 1] = u'\\'
				opos += 2
			else if c == u'?' then
				var j = pos + 1
				if j < length then
					var next = its[j]
					# We ignore `??'` because it will be escaped as `??\'`.
					if
						next == 0x21 or
						next == 0x28 or
						next == 0x29 or
						next == 0x2D or
						next == 0x2F or
						next == 0x3C or
						next == 0x3D or
						next == 0x3E
					then
						nns[opos] = 0x5C
						opos += 1
					end
				end
				nns[opos] = 0x3F
				opos += 1
			else if c < 32 then
				nns[opos] = u'\\'
				nns[opos + 1] = u'0'
				nns[opos + 2] = ((c & 0x38) >> 3) + u'0'
				nns[opos + 3] = (c & 0x07) + u'0'
				opos += 4
			else
				nns[opos] = c
				opos += 1
			end
			pos += 1
		end
		return nns.to_s_unsafe(nlen, copy=false, clean=false)
	end

	redef fun [](index) do
		var len = _length

		# Statistically:
		# * ~70% want the next char
		# * ~23% want the previous
		# * ~7% want the same char
		#
		# So it makes sense to shortcut early. And early is here.
		var dpos = index - _position
		var b = _bytepos
		if dpos == 1 and index < len - 1 then
			var its = _items
			var c = its[b]
			if c & 0x80 == 0x00 then
				# We want the next, and current is easy.
				# So next is easy to find!
				b += 1
				_position = index
				_bytepos = b
				# The rest will be done by `dpos==0` bellow.
				dpos = 0
			end
		else if dpos == -1 and index > 1 then
			var its = _items
			var c = its[b-1]
			if c & 0x80 == 0x00 then
				# We want the previous, and it is easy.
				b -= 1
				dpos = 0
				_position = index
				_bytepos = b
				return c.code_point
			end
		end
		if dpos == 0 then
			# We know what we want (+0 or +1) just get it now!
			var its = _items
			var c = its[b]
			if c & 0x80 == 0x00 then return c.code_point
			return items.char_at(b)
		end

		assert index >= 0 and index < len
		return fetch_char_at(index)
	end

	# Gets a `Char` at `index` in `self`
	#
	# WARNING: Use at your own risks as no bound-checking is done
	fun fetch_char_at(index: Int): Char do
		var i = char_to_byte_index(index)
		var items = _items
		var b = items[i]
		if b & 0x80 == 0x00 then return b.code_point
		return items.char_at(i)
	end

	# If `self` contains only digits and alpha <= 'f', return the corresponding integer.
	#
	#     assert "ff".to_hex == 255
	redef fun to_hex(pos, ln) do
		var res = 0
		if pos == null then pos = 0
		if ln == null then ln = length - pos
		pos = char_to_byte_index(pos)
		var its = _items
		var max = pos + ln
		for i in [pos .. max[ do
			res <<= 4
			res += its[i].code_point.from_hex
		end
		return res
	end

	redef fun copy_to_native(dst, n, src_off, dst_off) do
		_items.copy_to(dst, n, first_byte + src_off, dst_off)
	end
end

# Immutable strings of characters.
abstract class FlatString
	super FlatText
	super String

	# Index at which `self` begins in `_items`, inclusively
	redef var first_byte is noinit

	redef fun chars do return new FlatStringCharView(self)

	redef fun bytes do return new FlatStringByteView(self)

	redef fun to_cstring do
		var blen = _byte_length
		var new_items = new CString(blen + 1)
		_items.copy_to(new_items, blen, _first_byte, 0)
		new_items[blen] = 0
		return new_items
	end

	redef fun reversed do
		var b = new FlatBuffer.with_capacity(_byte_length + 1)
		var i = _length - 1
		while i >= 0 do
			b.add self.fetch_char_at(i)
			i -= 1
		end
		var s = b.to_s.as(FlatString)
		s._length = self._length
		return s
	end

	redef fun fast_cstring do return _items.fast_cstring(_first_byte)

	redef fun substring(from, count)
	do
		if count <= 0 then return ""

		if from < 0 then
			count += from
			if count <= 0 then return ""
			from = 0
		end

		var ln = _length
		if (count + from) > ln then count = ln - from
		if count <= 0 then return ""
		var end_index = from + count - 1
		return substring_impl(from, count, end_index)
	end

	private fun substring_impl(from, count, end_index: Int): String do
		var cache = _position
		var dfrom = (cache - from).abs
		var dend = (end_index - from).abs

		var bytefrom: Int
		var byteto: Int
		if dfrom < dend then
			bytefrom = char_to_byte_index(from)
			byteto = char_to_byte_index(end_index)
		else
			byteto = char_to_byte_index(end_index)
			bytefrom = char_to_byte_index(from)
		end

		var its = _items
		byteto += its.length_of_char_at(byteto) - 1

		var s = new FlatString.full(its, byteto - bytefrom + 1, bytefrom, count)
		return s
	end

	redef fun empty do return "".as(FlatString)

	redef fun to_upper
	do
		var outstr = new FlatBuffer.with_capacity(self._byte_length + 1)

		var mylen = _length
		var pos = 0

		while pos < mylen do
			outstr.add(chars[pos].to_upper)
			pos += 1
		end

		return outstr.to_s
	end

	redef fun to_lower
	do
		var outstr = new FlatBuffer.with_capacity(self._byte_length + 1)

		var mylen = _length
		var pos = 0

		while pos < mylen do
			outstr.add(chars[pos].to_lower)
			pos += 1
		end

		return outstr.to_s
	end

	redef fun output
	do
		for i in chars do i.output
	end

	##################################################
	#              String Specific Methods           #
	##################################################

	# Low-level creation of a new string with minimal data.
	#
	# `_items` will be used as is, without copy, to retrieve the characters of the string.
	# Aliasing issues is the responsibility of the caller.
	private new with_infos(items: CString, byte_length, from: Int)
	do
		var len = items.utf8_length(from, byte_length)
		if byte_length == len then return new ASCIIFlatString.full_data(items, byte_length, from, len)
		return new UnicodeFlatString.full_data(items, byte_length, from, len)
	end

	# Low-level creation of a new string with all the data.
	#
	# `_items` will be used as is, without copy, to retrieve the characters of the string.
	# Aliasing issues is the responsibility of the caller.
	private new full(items: CString, byte_length, from, length: Int)
	do
		if byte_length == length then return new ASCIIFlatString.full_data(items, byte_length, from, length)
		return new UnicodeFlatString.full_data(items, byte_length, from, length)
	end

	redef fun ==(other)
	do
		if not other isa FlatText then return super

		if self.object_id == other.object_id then return true

		var my_length = _byte_length

		if other._byte_length != my_length then return false

		var my_index = _first_byte
		var its_index = other.first_byte

		var last_iteration = my_index + my_length

		var its_items = other._items
		var my_items = self._items

		while my_index < last_iteration do
			if my_items[my_index] != its_items[its_index] then return false
			my_index += 1
			its_index += 1
		end

		return true
	end

	redef fun <(other)
	do
		if not other isa FlatText then return super

		if self.object_id == other.object_id then return false

		var myits = _items
		var itsits = other._items

		var mbt = _byte_length
		var obt = other.byte_length

		var minln = if mbt < obt then mbt else obt
		var mst = _first_byte
		var ost = other.first_byte

		for i in [0 .. minln[ do
			var my_curr_char = myits[mst]
			var its_curr_char = itsits[ost]

			if my_curr_char > its_curr_char then return false
			if my_curr_char < its_curr_char then return true

			mst += 1
			ost += 1
		end

		return mbt < obt
	end

	redef fun +(o) do
		var s = o.to_s
		var slen = s.byte_length
		var mlen = _byte_length
		var nlen = mlen + slen
		var mits = _items
		var mifrom = _first_byte
		if s isa FlatText then
			var sits = s._items
			var sifrom = s.first_byte
			var ns = new CString(nlen + 1)
			mits.copy_to(ns, mlen, mifrom, 0)
			sits.copy_to(ns, slen, sifrom, mlen)
			return new FlatString.full(ns, nlen, 0, _length + o.length)
		else
			abort
		end
	end

	redef fun *(i) do
		var mybtlen = _byte_length
		var new_byte_length = mybtlen * i
		var mylen = _length
		var newlen = mylen * i
		var its = _items
		var fb = _first_byte
		var ns = new CString(new_byte_length + 1)
		ns[new_byte_length] = 0
		var offset = 0
		while i > 0 do
			its.copy_to(ns, mybtlen, fb, offset)
			offset += mybtlen
			i -= 1
		end
		return new FlatString.full(ns, new_byte_length, 0, newlen)
	end

	redef fun hash
	do
		if hash_cache == null then
			# djb2 hash algorithm
			var h = 5381
			var i = _first_byte

			var my_items = _items
			var max = last_byte

			while i <= max do
				h = (h << 5) + h + my_items[i].to_i
				i += 1
			end

			hash_cache = h
		end

		return hash_cache.as(not null)
	end

	redef fun substrings do return new FlatSubstringsIter(self)
end

# Regular Nit UTF-8 strings
private class UnicodeFlatString
	super FlatString

	init full_data(items: CString, byte_length, from, length: Int) do
		self._items = items
		self._length = length
		self._byte_length = byte_length
		_first_byte = from
		_bytepos = from
	end

	redef fun substring_from(from) do
		if from >= self._length then return empty
		if from <= 0 then return self
		var c = char_to_byte_index(from)
		var st = c - _first_byte
		var fln = byte_length - st
		return new FlatString.full(items, fln, c, _length - from)
	end
end

# Special cases of String where all the characters are ASCII-based
#
# Optimizes access operations to O(1) complexity.
private class ASCIIFlatString
	super FlatString

	init full_data(items: CString, byte_length, from, length: Int) do
		self._items = items
		self._length = length
		self._byte_length = byte_length
		_first_byte = from
		_bytepos = from
	end

	redef fun [](idx) do
		assert idx < _byte_length and idx >= 0
		return _items[idx + _first_byte].code_point
	end

	redef fun substring(from, count) do
		var ln = _length
		if count <= 0 then return ""
		if (count + from) > ln then count = ln - from
		if count <= 0 then return ""
		if from < 0 then
			count += from
			if count <= 0 then return ""
			from = 0
		end
		return new ASCIIFlatString.full_data(_items, count, from + _first_byte, count)
	end

	redef fun reversed do
		var b = new FlatBuffer.with_capacity(_byte_length + 1)
		var i = _length - 1
		while i >= 0 do
			b.add self[i]
			i -= 1
		end
		var s = b.to_s.as(FlatString)
		return s
	end

	redef fun char_to_byte_index(index) do return index + _first_byte

	redef fun substring_impl(from, count, end_index) do
		return new ASCIIFlatString.full_data(_items, count, from + _first_byte, count)
	end

	redef fun fetch_char_at(i) do return _items[i + _first_byte].code_point
end

private class FlatStringCharReverseIterator
	super IndexedIterator[Char]

	var target: FlatString

	var curr_pos: Int

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos -= 1

	redef fun index do return curr_pos

end

private class FlatStringCharIterator
	super IndexedIterator[Char]

	var target: FlatString

	var max: Int is noautoinit

	var curr_pos: Int

	init do max = target._length - 1

	redef fun is_ok do return curr_pos <= max

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos += 1

	redef fun index do return curr_pos

end

private class FlatStringCharView
	super StringCharView

	redef type SELFTYPE: FlatString

	redef fun [](index) do return target[index]

	redef fun iterator_from(start) do return new FlatStringCharIterator(target, start)

	redef fun reverse_iterator_from(start) do return new FlatStringCharReverseIterator(target, start)

end

private class FlatStringByteReverseIterator
	super IndexedIterator[Int]

	var target: FlatString

	var target_items: CString is noautoinit

	var curr_pos: Int

	init
	do
		var tgt = target
		target_items = tgt._items
		curr_pos += tgt._first_byte
	end

	redef fun is_ok do return curr_pos >= target._first_byte

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

	redef fun index do return curr_pos - target._first_byte

end

private class FlatStringByteIterator
	super IndexedIterator[Int]

	var target: FlatString

	var target_items: CString is noautoinit

	var curr_pos: Int

	init
	do
		var tgt = target
		target_items = tgt._items
		curr_pos += tgt._first_byte
	end

	redef fun is_ok do return curr_pos <= target.last_byte

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos += 1

	redef fun index do return curr_pos - target._first_byte

end

private class FlatStringByteView
	super StringByteView

	redef type SELFTYPE: FlatString

	redef fun [](index)
	do
		# Check that the index (+ _first_byte) is not larger than last_byte
		# In other terms, if the index is valid
		var target = _target
		assert index >= 0 and index < target._byte_length
		var ind = index + target._first_byte
		return target._items[ind]
	end

	redef fun iterator_from(start) do return new FlatStringByteIterator(target, start)

	redef fun reverse_iterator_from(start) do return new FlatStringByteReverseIterator(target, start)

end

redef class Buffer
	redef new do return new FlatBuffer

	redef new with_cap(i) do return new FlatBuffer.with_capacity(i)
end

# Mutable strings of characters.
class FlatBuffer
	super FlatText
	super Buffer

	redef fun chars do return new FlatBufferCharView(self)

	redef fun bytes do return new FlatBufferByteView(self)

	private var capacity = 0

	redef fun fast_cstring do return _items.fast_cstring(0)

	redef fun substrings do return new FlatSubstringsIter(self)

	# Re-copies the `CString` into a new one and sets it as the new `Buffer`
	#
	# This happens when an operation modifies the current `Buffer` and
	# the Copy-On-Write flag `written` is set at true.
	private fun reset do
		var nns = new CString(capacity)
		if _byte_length != 0 then _items.copy_to(nns, _byte_length, 0, 0)
		_items = nns
		written = false
	end

	# Shifts the content of the buffer by `len` bytes to the right, starting at byte `from`
	#
	# Internal only, does not modify _byte_length or length, this is the caller's responsability
	private fun rshift_bytes(from: Int, len: Int) do
		var oit = _items
		var nit = _items
		var bt = _byte_length
		if bt + len > capacity then
			capacity = capacity * 2 + 2
			nit = new CString(capacity)
			oit.copy_to(nit, 0, 0, from)
		end
		oit.copy_to(nit, bt - from, from, from + len)
	end

	# Shifts the content of the buffer by `len` bytes to the left, starting at `from`
	#
	# Internal only, does not modify _byte_length or length, this is the caller's responsability
	private fun lshift_bytes(from: Int, len: Int) do
		var it = _items
		it.copy_to(it, _byte_length - from, from, from - len)
	end

	redef fun []=(index, item)
	do
		assert index >= 0 and index <= _length
		if written then reset
		if index == _length then
			add item
			return
		end
		var it = _items
		var ip = it.char_to_byte_index(index)
		var c = it.char_at(ip)
		var clen = c.u8char_len
		var itemlen = item.u8char_len
		var size_diff = itemlen - clen
		if size_diff > 0 then
			rshift_bytes(ip + clen, size_diff)
		else if size_diff < 0 then
			lshift_bytes(ip + clen, -size_diff)
		end
		_byte_length += size_diff
		it.set_char_at(ip, item)
	end

	redef fun insert(s, pos) do
		assert pos >= 0 and pos <= length
		if pos == length then
			append s
			return
		end
		var slen = s.byte_length
		enlarge(byte_length + slen)
		var it = _items
		var shpos = it.char_to_byte_index(pos)
		rshift_bytes(shpos, slen)
		s.copy_to_native(it, slen, 0, shpos)
		length += s.length
		byte_length += slen
	end

	redef fun insert_char(c, pos) do
		assert pos >= 0 and pos <= length
		if pos == length then
			add c
			return
		end
		var clen = c.u8char_len
		enlarge(byte_length + clen)
		var it = _items
		var shpos = it.char_to_byte_index(pos)
		rshift_bytes(shpos, clen)
		it.set_char_at(shpos, c)
		length += 1
		byte_length += clen
	end

	redef fun add(c)
	do
		if written then reset
		var clen = c.u8char_len
		var bt = _byte_length
		enlarge(bt + clen)
		_items.set_char_at(bt, c)
		_byte_length += clen
		_length += 1
	end

	redef fun clear do
		_byte_length = 0
		_length = 0
		if written then
			_capacity = 16
			reset
		end
	end

	redef fun empty do return new Buffer

	redef fun enlarge(cap)
	do
		var c = capacity
		if cap <= c then return
		if c <= 16 then c = 16
		while c <= cap do c = c * 2
		# The COW flag can be set at false here, since
		# it does a copy of the current `Buffer`
		written = false
		var bln = _byte_length
		var a = new CString(c)
		if bln > 0 then
			var it = _items
			if bln > 0 then it.copy_to(a, bln, 0, 0)
		end
		_items = a
		capacity = c
	end

	redef fun to_s
	do
		written = true
		var bln = _byte_length
		if bln == 0 then _items = new CString(1)
		return new FlatString.full(_items, bln, 0, _length)
	end

	redef fun to_cstring
	do
		var bln = _byte_length
		var new_native = new CString(bln + 1)
		new_native[bln] = 0
		if _length > 0 then _items.copy_to(new_native, bln, 0, 0)
		return new_native
	end

	# Create a new empty string.
	init do end

	# Low-level creation a new buffer with given data.
	#
	# `_items` will be used as is, without copy, to store the characters of the buffer.
	# Aliasing issues is the responsibility of the caller.
	#
	# If `_items` is shared, `written` should be set to true after the creation
	# so that a modification will do a copy-on-write.
	private init with_infos(items: CString, capacity, byte_length, length: Int)
	do
		self._items = items
		self.capacity = capacity
		self._byte_length = byte_length
		self._length = length
	end

	# Create a new string copied from `s`.
	init from(s: Text)
	do
		_items = new CString(s.byte_length)
		for i in s.substrings do i._items.copy_to(_items, i._byte_length, first_byte, 0)
		_byte_length = s.byte_length
		_length = s.length
		_capacity = _byte_length
	end

	# Create a new empty string with a given capacity.
	init with_capacity(cap: Int)
	do
		assert cap >= 0
		_items = new CString(cap)
		capacity = cap
		_byte_length = 0
	end

	redef fun append(s)
	do
		if s.is_empty then return
		var sl = s.byte_length
		var nln = _byte_length + sl
		enlarge(nln)
		if s isa FlatText then
			s._items.copy_to(_items, sl, s.first_byte, _byte_length)
		else
			for i in s.substrings do append i
			return
		end
		_byte_length = nln
		_length += s.length
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
		if from < 0 then from = 0
		if (from + count) > _length then count = _length - from
		if count <= 0 then return new Buffer
		var its = _items
		var bytefrom = its.char_to_byte_index(from)
		var byteto = its.char_to_byte_index(count + from - 1)
		byteto += its.char_at(byteto).u8char_len - 1
		var byte_length = byteto - bytefrom + 1
		var r_items = new CString(byte_length)
		its.copy_to(r_items, byte_length, bytefrom, 0)
		return new FlatBuffer.with_infos(r_items, byte_length, byte_length, count)
	end

	redef fun append_substring_impl(s, from, length) do
		if length <= 0 then return
		if not s isa FlatText then
			super
			return
		end
		var sits = s._items
		var bytest = s.char_to_byte_index(from)
		var bytend = s.char_to_byte_index(from + length - 1)
		var btln = bytend - bytest + sits.char_at(bytend).u8char_len
		enlarge(btln + _byte_length)
		sits.copy_to(_items, btln, bytest, _byte_length)
		_byte_length += btln
		_length += length
	end

	redef fun remove_at(p, len) do
		if len == null then len = 1
		if len == 0 then return
		var its = _items
		var bst = char_to_byte_index(p)
		var bend = char_to_byte_index(p + len - 1)
		bend += its.char_at(bend).u8char_len
		var blen = bend - bst
		lshift_bytes(bend, bend - bst)
		byte_length -= blen
		length -= len
	end

	redef fun reverse
	do
		written = false
		var ns = new FlatBuffer.with_capacity(capacity)
		for i in chars.reverse_iterator do ns.add i
		_items = ns._items
	end

	redef fun times(repeats)
	do
		var bln = _byte_length
		var x = new FlatString.full(_items, bln, 0, _length)
		for i in [1 .. repeats[ do
			append(x)
		end
	end

	redef fun upper
	do
		if written then reset
		for i in [0 .. _length[ do self[i] = self[i].to_upper
	end

	redef fun lower
	do
		if written then reset
		for i in [0 .. _length[ do self[i] = self[i].to_lower
	end
end

private class FlatBufferByteReverseIterator
	super IndexedIterator[Int]

	var target: FlatBuffer

	var target_items: CString is noautoinit

	var curr_pos: Int

	init do target_items = target._items

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos -= 1

end

private class FlatBufferByteView
	super BufferByteView

	redef type SELFTYPE: FlatBuffer

	redef fun [](index) do return target._items[index]

	redef fun iterator_from(pos) do return new FlatBufferByteIterator(target, pos)

	redef fun reverse_iterator_from(pos) do return new FlatBufferByteReverseIterator(target, pos)

end

private class FlatBufferByteIterator
	super IndexedIterator[Int]

	var target: FlatBuffer

	var target_items: CString is noautoinit

	var curr_pos: Int

	init do if isset target._items then target_items = target._items

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos < target._byte_length

	redef fun item do return target_items[curr_pos]

	redef fun next do curr_pos += 1

end

private class FlatBufferCharReverseIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var curr_pos: Int

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos >= 0

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos -= 1

end

private class FlatBufferCharView
	super BufferCharView

	redef type SELFTYPE: FlatBuffer

	redef fun [](index) do return target[index]

	redef fun []=(index, item)
	do
		assert index >= 0 and index <= length
		if index == length then
			add(item)
			return
		end
		target[index] = item
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
		var s_length = s.length
		if target.capacity < s.length then enlarge(s_length + target._length)
		for i in s do target.add i
	end

	redef fun iterator_from(pos) do return new FlatBufferCharIterator(target, pos)

	redef fun reverse_iterator_from(pos) do return new FlatBufferCharReverseIterator(target, pos)

end

private class FlatBufferCharIterator
	super IndexedIterator[Char]

	var target: FlatBuffer

	var max: Int is noautoinit

	var curr_pos: Int

	init do max = target._length - 1

	redef fun index do return curr_pos

	redef fun is_ok do return curr_pos <= max

	redef fun item do return target[curr_pos]

	redef fun next do curr_pos += 1

end

redef class CString

	# Get a `String` from the data at `self` copied into Nit memory
	#
	# Require: `self` is a null-terminated string.
	redef fun to_s do return to_s_unsafe

	# Get a `String` from `byte_length` bytes at `self` copied into Nit memory
	#
	# The string is cleaned.
	fun to_s_with_length(byte_length: Int): String do return to_s_unsafe(byte_length)

	redef fun to_s_unsafe(byte_length, char_length, copy, clean)
	do
		byte_length = byte_length or else cstring_length
		clean = clean or else true
		copy = copy or else true

		# Clean?
		var str = null
		if clean then
			str = clean_utf8(byte_length)
			char_length = str.length
		else
			char_length = char_length or else utf8_length(0, byte_length)
		end

		# Copy? (if not already copied by `clean_utf8`)
		if copy and (str == null or str.items == self) then
			var new_cstr = new CString(byte_length + 1)
			copy_to(new_cstr, byte_length, 0, 0)
			new_cstr[byte_length] = 0
			str = new FlatString.full(new_cstr, byte_length, 0, char_length)
		end

		if str == null then
			str = new FlatString.full(self, byte_length, 0, char_length)
		end

		return str
	end

	# Cleans a CString if necessary
	fun clean_utf8(len: Int): FlatString do
		var replacements: nullable Array[Int] = null
		var end_length = len
		var pos = 0
		var chr_ln = 0
		var rem = len
		while rem > 0 do
			while rem >= 4 do
				var i = fetch_4_chars(pos)
				if i & 0x80808080u32 != 0u32 then break
				pos += 4
				chr_ln += 4
				rem -= 4
			end
			if rem == 0 then break
			var b = self[pos]
			if b & 0x80 == 0x00 then
				pos += 1
				chr_ln += 1
				rem -= 1
				continue
			end
			var nxst = length_of_char_at(pos)
			var ok_st: Bool
			if nxst == 1 then
				ok_st = b & 0x80 == 0
			else if nxst == 2 then
				ok_st = b & 0xE0 == 0xC0
			else if nxst == 3 then
				ok_st = b & 0xF0 == 0xE0
			else
				ok_st = b & 0xF8 == 0xF0
			end
			if not ok_st then
				if replacements == null then replacements = new Array[Int]
				replacements.add pos
				end_length += 2
				pos += 1
				rem -= 1
				chr_ln += 1
				continue
			end
			var ok_c: Bool
			var c = char_at(pos)
			var cp = c.code_point
			if nxst == 1 then
				ok_c = cp >= 0 and cp <= 0x7F
			else if nxst == 2 then
				ok_c = cp >= 0x80 and cp <= 0x7FF
			else if nxst == 3 then
				ok_c = cp >= 0x800 and cp <= 0xFFFF
				ok_c = ok_c and not (cp >= 0xD800 and cp <= 0xDFFF) and cp != 0xFFFE and cp != 0xFFFF
			else
				ok_c = cp >= 0x10000 and cp <= 0x10FFFF
			end
			if not ok_c then
				if replacements == null then replacements = new Array[Int]
				replacements.add pos
				end_length += 2
				pos += 1
				chr_ln += 1
				rem -= 1
				continue
			end
			var clen = c.u8char_len
			pos += clen
			rem -= clen
			chr_ln += 1
		end
		var ret = self
		if end_length != len then
			ret = new CString(end_length)
			var old_repl = 0
			var off = 0
			var repls = replacements.as(not null)
			var r = repls.items.as(not null)
			var imax = repls.length
			for i in [0 .. imax[ do
				var repl_pos = r[i]
				var chkln = repl_pos - old_repl
				copy_to(ret, chkln, old_repl, off)
				off += chkln
				ret[off] = 0xEF
				ret[off + 1] = 0xBF
				ret[off + 2] = 0xBD
				old_repl = repl_pos + 1
				off += 3
			end
			copy_to(ret, len - old_repl, old_repl, off)
		end
		return new FlatString.full(ret, end_length, 0, chr_ln)
	end

	# Sets the next bytes at position `pos` to the value of `c`, encoded in UTF-8
	#
	# Very unsafe, make sure to have room for this char prior to calling this function.
	private fun set_char_at(pos: Int, c: Char) do
		var cp = c.code_point
		if cp < 128 then
			self[pos] = cp
			return
		end
		var ln = c.u8char_len
		if ln == 2 then
			self[pos] = 0xC0 | ((cp & 0x7C0) >> 6)
			self[pos + 1] = 0x80 | (cp & 0x3F)
		else if ln == 3 then
			self[pos] = 0xE0 | ((cp & 0xF000) >> 12)
			self[pos + 1] = 0x80 | ((cp & 0xFC0) >> 6)
			self[pos + 2] = 0x80 | (cp & 0x3F)
		else if ln == 4 then
			self[pos] = 0xF0 | ((cp & 0x1C0000) >> 18)
			self[pos + 1] = 0x80 | ((cp & 0x3F000) >> 12)
			self[pos + 2] = 0x80 | ((cp & 0xFC0) >> 6)
			self[pos + 3] = 0x80 | (cp & 0x3F)
		end
	end
end

redef class Int
	# return displayable int in base 10 and signed
	#
	#     assert 1.to_s            == "1"
	#     assert (-123).to_s       == "-123"
	redef fun to_s do
		# Fast case for common numbers
		if self == 0 then return "0"
		if self == 1 then return "1"

		var nslen = int_to_s_len
		var ns = new CString(nslen + 1)
		ns[nslen] = 0
		native_int_to_s(ns, nslen + 1)
		return new FlatString.full(ns, nslen, 0, nslen)
	end
end

redef class Array[E]

	# Fast implementation
	redef fun plain_to_s
	do
		var l = _length
		if l == 0 then return ""
		var its = _items.as(not null)
		var first = its[0]
		if l == 1 then if first == null then return "" else return first.to_s
		var na = new NativeArray[String](l)
		var i = 0
		var sl = 0
		var mypos = 0
		while i < l do
			var itsi = its[i]
			if itsi == null then
				i += 1
				continue
			end
			var tmp = itsi.to_s
			sl += tmp.byte_length
			na[mypos] = tmp
			i += 1
			mypos += 1
		end
		var ns = new CString(sl + 1)
		ns[sl] = 0
		i = 0
		var off = 0
		while i < mypos do
			var tmp = na[i]
			if tmp isa FlatString then
				var tpl = tmp._byte_length
				tmp._items.copy_to(ns, tpl, tmp._first_byte, off)
				off += tpl
			else
				for j in tmp.substrings do
					var s = j.as(FlatString)
					var slen = s._byte_length
					s._items.copy_to(ns, slen, s._first_byte, off)
					off += slen
				end
			end
			i += 1
		end
		return new FlatString.with_infos(ns, sl, 0)
	end
end

redef class NativeArray[E]
	redef fun native_to_s do
		assert self isa NativeArray[String]
		var l = length
		var na = self
		var i = 0
		var sl = 0
		var mypos = 0
		while i < l do
			sl += na[i].byte_length
			i += 1
			mypos += 1
		end
		var ns = new CString(sl + 1)
		ns[sl] = 0
		i = 0
		var off = 0
		while i < mypos do
			var tmp = na[i]
			if tmp isa FlatString then
				var tpl = tmp._byte_length
				tmp._items.copy_to(ns, tpl, tmp._first_byte, off)
				off += tpl
			else
				for j in tmp.substrings do
					var s = j.as(FlatString)
					var slen = s._byte_length
					s._items.copy_to(ns, slen, s._first_byte, off)
					off += slen
				end
			end
			i += 1
		end
		return new FlatString.with_infos(ns, sl, 0)
	end
end

redef class Map[K,V]
	redef fun join(sep, couple_sep)
	do
		if is_empty then return ""

		var s = new Buffer # Result

		# Concat first item
		var i = iterator
		var k = i.key
		var e = i.item
		s.append("{k or else "<null>"}{couple_sep}{e or else "<null>"}")

		# Concat other _items
		i.next
		while i.is_ok do
			s.append(sep)
			k = i.key
			e = i.item
			s.append("{k or else "<null>"}{couple_sep}{e or else "<null>"}")
			i.next
		end
		return s.to_s
	end
end
