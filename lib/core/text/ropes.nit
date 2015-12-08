# This file is part of NIT (http://www.nitlanguage.org).
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

# Tree-based representation of a String.
#
# Ropes are a data structure introduced in a 1995 paper from
# Hans J. Boehm, Russ Atkinson and Michael Plass.
#
# See:
#
# > Ropes: an Alternative to Strings,
# > *Software - Practice and Experience*,
# > Vol. 25(12), 1315-1330 (December 1995).
#
# The implementation developed here provides an automatic change
# of data structure depending on the length of the leaves.
#
# The length from which a `Rope` is built from a `flat` string
# if defined at top-level (see `maxlen`) and can be redefined by clients
# depending on their needs (e.g. if you need to bench the speed of
# the creation of concat nodes, lower the size of maxlen).
#
# A Rope as defined in the original paper is a Tree made of concatenation
# nodes and containing `Flat` (that is Array-based) strings as Leaves.
#
# Example :
#
# ~~~raw
#	            Concat
#	          /        \
#	    Concat          Concat
#	   /      \        /      \
#	"My"     " Name"  " is"   " Simon."
# ~~~
#
# Note that the above example is not representative of the actual implementation
# of `Ropes`, since short leaves are merged to keep the rope at an acceptable
# height (hence, this rope here might actually be a `FlatString` !).
module ropes

intrude import flat

# Maxlen is the maximum length of a Leaf node
#
# When concatenating two leaves, if `new_length` > `maxlen`,
# A `Concat` node is created instead
#
# Its purpose is to limit the depth of the `Rope` (this
# improves performance when accessing/iterating).
fun maxlen: Int do return 64

# String using a tree-based representation with leaves as `FlatStrings`
private abstract class Rope
	super Text
end

# Node that represents a concatenation between two `String`
private class Concat
	super Rope
	super String

	redef var chars is lazy do return new RopeChars(self)

	redef var bytes is lazy do return new RopeBytes(self)

	redef var length is noinit

	redef var bytelen is noinit

	redef fun substrings do return new RopeSubstrings.from(self, 0)

	redef fun empty do return ""

	# Cache for the latest accessed FlatString in `self`
	var flat_cache: String = ""

	# Position of the beginning of `flat_cache` in `self`
	var flat_last_pos_start: Int = -1

	redef var to_cstring is lazy do
		var len = _bytelen
		var ns = new NativeString(len + 1)
		ns[len] = 0u8
		var off = 0
		for i in substrings do
			var ilen = i._bytelen
			i.as(FlatString)._items.copy_to(ns, ilen, i.as(FlatString)._first_byte, off)
			off += ilen
		end
		return ns
	end

	# Left child of the node
	var left: String
	# Right child of the node
	var right: String

	init do
		var l = _left
		var r = _right
		length = l.length + r.length
		_bytelen = l.bytelen + r.bytelen
	end

	redef fun output do
		_left.output
		_right.output
	end

	redef fun iterator do return new RopeCharIterator.from(self, 0)

	redef fun *(i) do
		var x: String = self
		for j in [1 .. i[ do x += self
		return x
	end

	redef fun [](i) do
		if flat_last_pos_start != -1 then
			var fsp = i - flat_last_pos_start
			if fsp >= 0 and fsp < flat_cache.length then return flat_cache[fsp]
		end
		var s: String = self
		var st = i
		loop
			if s isa FlatString then break
			s = s.as(Concat)
			var lft = s._left
			var llen = lft.length
			if i >= llen then
				s = s._right
				i -= llen
			else
				s = lft
			end
		end
		flat_last_pos_start = st - i
		flat_cache = s
		return s[i]
	end

	redef fun substring(from, len) do
		var lft = _left
		var llen = lft.length
		if from < llen then
			if from + count < llen then return lft.substring(from, count)
			var lsublen = llen - from
			return lft.substring_from(from) + _right.substring(0, count - lsublen)
		else
			return _right.substring(from - llen, count)
		end
	end

	redef fun reversed do return new Concat(_right.reversed, _left.reversed)

	redef fun insert_at(s, pos) do
		var lft = _left
		if pos > lft.length then
			return lft + _right.insert_at(s, pos - lft.length)
		end
		return lft.insert_at(s, pos) + _right
	end

	redef fun to_upper do return new Concat(_left.to_upper, _right.to_upper)

	redef fun to_lower do return new Concat(_left.to_lower, _right.to_lower)

	redef fun +(o) do
		var s = o.to_s
		var slen = s.bytelen
		if s isa Concat then
			return new Concat(self, s)
		else
			var r = _right
			var rlen = r.bytelen
			if rlen + slen > maxlen then return new Concat(self, s)
			return new Concat(_left, r + s)
		end
	end

	redef fun copy_to_native(dest, n, src_offset, dest_offset) do
		var subs = new RopeSubstrings.from(self, src_offset)
		var st = src_offset - subs.pos
		var off = dest_offset
		while n > 0 do
			var it = subs.item
			if n > it.length then
				var cplen = it.length - st
				it._items.copy_to(dest, cplen, st, off)
				off += cplen
				n -= cplen
			else
				it._items.copy_to(dest, n, st, off)
				n = 0
			end
			subs.next
			st = 0
		end
	end

	# Returns a balanced version of `self`
	fun balance: String do
		var children = new Array[String]
		var rnod: String
		var iter: nullable RopeCharIteratorPiece = new RopeCharIteratorPiece(self, false, false, null)
		loop
			if iter == null then break
			rnod = iter.node
			if not rnod isa Concat then
				children.push rnod
				iter = iter.prev
				continue
			end
			if not iter.ldone then
				iter.ldone = true
				iter = new RopeCharIteratorPiece(rnod._left, false, false, iter)
			else if not iter.rdone then
				iter.rdone = true
				iter = new RopeCharIteratorPiece(rnod._right, false, false, iter)
			else
				iter = iter.prev
			end

		end
		return recurse_balance(children, children.length)
	end

	fun recurse_balance(nodes: Array[String], len: Int): String do
		var finpos = 0
		var stpos = 0
		while stpos < len do
			if len - stpos > 1 then
				nodes[finpos] = new Concat(nodes[stpos], nodes[stpos + 1])
				stpos += 2
			else
				nodes[finpos] = nodes[stpos]
				stpos += 1
			end
			finpos += 1
		end
		if finpos == 1 then return nodes[0]
		return recurse_balance(nodes, finpos)
	end
end

# Mutable `Rope`, optimized for concatenation operations
#
# A `RopeBuffer` is an efficient way of building a `String` when
# concatenating small strings.
#
# It does concatenations in an optimized way by having a
# mutable part and an immutable part built by efficiently
# concatenating strings in chain.
#
# Every concatenation operation is done by copying a string to
# the mutable part and flushing it when full.
#
# However, when a long string is appended to the `Buffer`,
# the concatenation is done at it would be in a `Rope`.
class RopeBuffer
	super Rope
	super Buffer

	redef var chars: Sequence[Char] is lazy do return new RopeBufferChars(self)

	redef var bytes is lazy do return new RopeBufferBytes(self)

	# The final string being built on the fly
	private var str: String = ""

	# Current concatenation buffer
	private var ns: NativeString is noinit

	# Next available (e.g. unset) character in the `Buffer`
	private var rpos = 0

	# Length (in chars) of the buffered part
	private var nslen = 0

	# Keeps track of the buffer's currently dumped part
	#
	# This might happen if for instance, a String was being
	# built by concatenating small parts of string and suddenly
	# a long string (length > maxlen) is appended.
	private var dumped: Int is noinit

	# Length of the complete rope in chars (0)
	redef fun length do
		var st = dumped
		var len = str.length
		while st < rpos do
			st += ns[st].u8len
			len += 1
		end
		return len
	end

	# Length of the complete rope in bytes
	redef var bytelen = 0

	# Length of the mutable part (in bytes)
	#
	# Is also used as base to compute the size of the next
	# mutable native string (`ns`)
	private var buf_size: Int is noinit

	redef fun substrings do return new RopeBufSubstringIterator.from(self)

	# Builds an empty `RopeBuffer`
	init do
		ns = new NativeString(maxlen)
		buf_size = maxlen
		dumped = 0
	end

	# Builds a new `RopeBuffer` with `str` in it.
	init from(str: String) do
		self.str = str
		ns = new NativeString(maxlen)
		buf_size = maxlen
		_bytelen = str.length
		dumped = 0
	end

	# Resets the informations of the `Buffer`
	#
	# This is called when doing in-place modifications
	# on a previously to_s'd `RopeBuffer`
	private fun reset do
		var nns = new NativeString(buf_size)
		var blen = rpos - dumped
		ns.copy_to(nns, blen, dumped, 0)
		ns = nns
		dumped = 0
		rpos = blen
		written = false
	end

	redef fun [](i) do
		if i < str.length then
			return str[i]
		else
			var index = ns.char_to_byte_index_cached(i - str.length, 0, dumped)
			return ns.char_at(index)
		end
	end

	redef fun []=(i, c) do
		assert i >= 0 and i <= length
		if i == length then add c
		if i < str.length then
			_bytelen += c.u8char_len - str[i].u8char_len
			var s = str
			var l = s.substring(0, i)
			var r = s.substring_from(i + 1)
			str = l + c.to_s + r
		else
			var reali = i - str.length
			var index = ns.char_to_byte_index_cached(reali, 0, dumped)
			var st_nxt = ns.char_to_byte_index_cached(reali + 1, reali, index)
			var loc_c = ns.char_at(index)
			if loc_c.u8char_len != c.u8char_len then
				var delta = c.u8char_len - loc_c.u8char_len
				var remsp = buf_size - rpos
				if remsp < delta then
					buf_size *= 2
					var nns = new NativeString(buf_size)
					ns.copy_to(nns, index - dumped, dumped, 0)
					ns.copy_to(nns, rpos - index - loc_c.u8char_len, index + loc_c.u8char_len, index - dumped + delta)
					ns = nns
					index = index - dumped
				else
					ns.copy_to(ns, rpos - st_nxt, st_nxt, st_nxt + delta)
				end
				_bytelen += delta
				rpos += delta
			end
			ns.set_char_at(index, c)
		end
	end

	redef fun empty do return new RopeBuffer

	redef fun clear do
		str = ""
		_bytelen = 0
		rpos = 0
		dumped = 0
		if written then
			ns = new NativeString(buf_size)
			written = false
		end
	end

	redef fun substring(from, count) do
		var strlen = str.length

		if from < 0 then
			count += from
			if count < 0 then count = 0
			from = 0
		end

		if count > length then count = length - from

		if count == 0 then return empty

		if from < strlen then
			var subpos = strlen - from
			if count <= subpos then
				return new RopeBuffer.from(str.substring(from, count))
			else
				var l = str.substring_from(from)
				var rem = count - subpos
				var nns = new NativeString(rem)
				ns.copy_to(nns, rem, dumped, 0)
				return new RopeBuffer.from(l + nns.to_s_unsafe(rem))
			end
		else
			var nns = new NativeString(count)
			ns.copy_to(nns, count, dumped, 0)
			return new RopeBuffer.from(nns.to_s_unsafe(count))
		end
	end

	redef fun append(s) do
		var slen = s.bytelen
		if slen >= maxlen then
			persist_buffer
			str += s.to_s
			return
		end
		if s isa FlatText then
			var oits = s._items
			var from = s.first_byte
			var remsp = buf_size - rpos
			if slen <= remsp then
				oits.copy_to(ns, slen, from, rpos)
				rpos += slen
				return
			end
			var brk = oits.find_beginning_of_char_at(from + remsp)
			oits.copy_to(ns, brk, from, rpos)
			rpos += brk
			dump_buffer
			oits.copy_to(ns, slen - remsp, brk, 0)
			rpos = slen - remsp
		else
			for i in s.substrings do append i
		end
	end

	redef fun add(c) do
		var rp = rpos
		var remsp = buf_size - rp
		var cln = c.u8char_len
		if cln > remsp then
			dump_buffer
			rp = 0
		end
		ns.set_char_at(rp, c)
		rp += cln
		_bytelen += cln
		rpos = rp
	end

	# Converts the Buffer to a FlatString, appends it to
	# the final String and re-allocates a new larger Buffer.
	private fun dump_buffer do
		written = false
		var nstr = new FlatString.with_infos(ns, rpos - dumped, dumped)
		str += nstr
		var bs = buf_size
		bs = bs * 2
		ns = new NativeString(bs)
		buf_size = bs
		dumped = 0
		rpos = 0
	end

	# Similar to dump_buffer, but does not reallocate a new NativeString
	private fun persist_buffer do
		if rpos == dumped then return
		var nstr = new FlatString.with_infos(ns, rpos - dumped, dumped)
		str += nstr
		dumped = rpos
	end

	redef fun output do
		str.output
		new FlatString.with_infos(ns, rpos - dumped, dumped).output
	end

	# Enlarge is useless here since the `Buffer`
	# part is automatically dumped when necessary.
	#
	# Also, since the buffer can not be overused by a
	# single string, there is no need for manual
	# resizing.
	#
	# "You have no power here !"
	redef fun enlarge(i) do end

	redef fun to_s do
		persist_buffer
		written = true
		return str
	end

	redef fun reverse do
		# Flush the buffer in order to only have to reverse `str`.
		if rpos > 0 and dumped != rpos then
			str += new FlatString.with_infos(ns, rpos - dumped, dumped)
			dumped = rpos
		end
		str = str.reversed
	end

	redef fun upper do
		if written then reset
		persist_buffer
		str = str.to_upper
	end

	redef fun lower do
		if written then reset
		persist_buffer
		str = str.to_lower
	end
end

redef class FlatString

	redef fun insert_at(s, pos) do
		var l = substring(0, pos)
		var r = substring_from(pos)
		return l + s + r
	end

	redef fun +(o) do
		var s = o.to_s
		var slen = s.bytelen
		var mlen = _bytelen
		if slen == 0 then return self
		if mlen == 0 then return s
		var nlen = slen + mlen
		if s isa FlatString then
			if nlen > maxlen then return new Concat(self, s)
			var mits = _items
			var sifrom = s._first_byte
			var mifrom = _first_byte
			var sits = s._items
			var ns = new NativeString(nlen + 1)
			mits.copy_to(ns, mlen, mifrom, 0)
			sits.copy_to(ns, slen, sifrom, mlen)
			return new FlatString.full(ns, nlen, 0, length + s.length)
		else if s isa Concat then
			var sl = s._left
			var sllen = sl.bytelen
			if sllen + mlen > maxlen then return new Concat(self, s)
			return new Concat(self + sl, s._right)
		else
			abort
		end
	end
end

# A simple linked list for use with iterators
private class RopeCharIteratorPiece
	# The encapsulated node of the `Rope`
	var node: String
	# Was its _left child (if any) visited ?
	var ldone: Bool
	# Was its _right child (if any) visited ?
	var rdone: Bool
	# The previous node in the list.
	var prev: nullable RopeCharIteratorPiece
end

# A reverse iterator capable of working with `Rope` objects
private class RopeByteReverseIterator
	super IndexedIterator[Byte]

	# Current NativeString
	var ns: NativeString is noautoinit
	# Current position in NativeString
	var pns: Int is noautoinit
	# Position in the Rope (0-indexed)
	var pos: Int is noautoinit
	# Iterator on the substrings, does the Postfix part of
	# the Rope traversal.
	var subs: IndexedIterator[FlatString] is noautoinit

	init from(root: Concat, pos: Int) do
		self.pos = pos
		subs = new ReverseRopeSubstrings.from(root, pos)
		var s = subs.item
		ns = s._items
		pns = pos - subs.index
	end

	redef fun index do return pos

	redef fun is_ok do return pos >= 0

	redef fun item do return ns[pns]

	redef fun next do
		pns -= 1
		pos -= 1
		if pns >= 0 then return
		if not subs.is_ok then return
		subs.next
		if not subs.is_ok then return
		var s = subs.item
		ns = s._items
		pns = s.last_byte
	end
end

# Forward iterator on the bytes of a `Rope`
private class RopeByteIterator
	super IndexedIterator[Byte]

	# Position in current `String`
	var pns: Int is noautoinit
	# Current `String` being iterated on
	var ns: NativeString is noautoinit
	# Substrings of the Rope
	var subs: IndexedIterator[FlatString] is noautoinit
	# Maximum position to iterate on (e.g. Rope.length)
	var max: Int is noautoinit
	# Position (char) in the Rope (0-indexed)
	var pos: Int is noautoinit

	init from(root: Concat, pos: Int) do
		subs = new RopeSubstrings.from(root, pos)
		pns = pos - subs.index
		self.pos = pos
		ns = subs.item._items
		max = root.length - 1
	end

	redef fun item do return ns[pns]

	redef fun is_ok do return pos <= max

	redef fun index do return pos

	redef fun next do
		pns += 1
		pos += 1
		if pns < subs.item._bytelen then return
		if not subs.is_ok then return
		subs.next
		if not subs.is_ok then return
		ns = subs.item._items
		pns = 0
	end
end


# A reverse iterator capable of working with `Rope` objects
private class RopeCharReverseIterator
	super IndexedIterator[Char]

	# Current NativeString
	var ns: String is noautoinit
	# Current position in NativeString
	var pns: Int is noautoinit
	# Position in the Rope (0-indexed)
	var pos: Int is noautoinit
	# Iterator on the substrings, does the Postfix part of
	# the Rope traversal.
	var subs: IndexedIterator[String] is noautoinit

	init from(root: Concat, pos: Int) do
		self.pos = pos
		subs = new ReverseRopeSubstrings.from(root, pos)
		ns = subs.item
		pns = pos - subs.index
	end

	redef fun index do return pos

	redef fun is_ok do return pos >= 0

	redef fun item do return ns[pns]

	redef fun next do
		pns -= 1
		pos -= 1
		if pns >= 0 then return
		if not subs.is_ok then return
		subs.next
		if not subs.is_ok then return
		ns = subs.item
		pns = ns.length - 1
	end
end

# Forward iterator on the chars of a `Rope`
private class RopeCharIterator
	super IndexedIterator[Char]

	# Position in current `String`
	var pns: Int is noautoinit
	# Current `String` being iterated on
	var str: String is noautoinit
	# Substrings of the Rope
	var subs: IndexedIterator[String] is noautoinit
	# Maximum position to iterate on (e.g. Rope.length)
	var max: Int is noautoinit
	# Position (char) in the Rope (0-indexed)
	var pos: Int is noautoinit

	init from(root: Concat, pos: Int) do
		subs = new RopeSubstrings.from(root, pos)
		pns = pos - subs.index
		self.pos = pos
		str = subs.item
		max = root.length - 1
	end

	redef fun item do return str[pns]

	redef fun is_ok do return pos <= max

	redef fun index do return pos

	redef fun next do
		pns += 1
		pos += 1
		if pns < subs.item.length then return
		if not subs.is_ok then return
		subs.next
		if not subs.is_ok then return
		str = subs.item
		pns = 0
	end
end

# Substrings of a Rope (i.e. Reverse postfix iterator on leaves)
private class ReverseRopeSubstrings
	super IndexedIterator[FlatString]

	# Visit Stack
	var iter: RopeCharIteratorPiece is noinit
	# Position in `Rope`
	var pos: Int is noinit

	# Current leaf
	var str: FlatString is noinit

	init from(root: Concat, pos: Int) do
		var r = new RopeCharIteratorPiece(root, false, true, null)
		var rnod: String = root
		var off = pos
		loop
			if rnod isa Concat then
				if off >= rnod._left.length then
					off -= rnod._left.length
					rnod = rnod._right
					r = new RopeCharIteratorPiece(rnod, false, true, r)
				else
					r.ldone = true
					rnod = rnod._left
					r = new RopeCharIteratorPiece(rnod, false, true, r)
				end
			else
				str = rnod.as(FlatString)
				r.ldone = true
				iter = r
				self.pos = pos - off
				break
			end
		end
	end

	redef fun item do return str

	redef fun index do return pos

	redef fun is_ok do return pos >= 0

	redef fun next do
		if pos < 0 then return
		var curr = iter.prev
		var currit = curr.node
		while curr != null do
			currit = curr.node
			if not currit isa Concat then
				str = currit.as(FlatString)
				pos -= str.length
				iter = curr
				return
			end
			if not curr.rdone then
				curr.rdone = true
				curr = new RopeCharIteratorPiece(currit._right, false, false, curr)
				continue
			end
			if not curr.ldone then
				curr.ldone = true
				curr = new RopeCharIteratorPiece(currit._left, false, false, curr)
				continue
			end
			curr = curr.prev
		end
		pos = -1
	end
end

private class RopeBufSubstringIterator
	super Iterator[FlatText]

	# Iterator on the substrings of the building string
	var iter: Iterator[FlatText] is noautoinit
	# Makes a String out of the buffered part of the Ropebuffer
	var nsstr: FlatString is noautoinit
	# Did we attain the buffered part ?
	var nsstr_done = false

	init from(str: RopeBuffer) do
		iter = str.str.substrings
		nsstr = new FlatString.with_infos(str.ns, str.rpos - str.dumped, str.dumped)
		if str.length == 0 then nsstr_done = true
	end

	redef fun is_ok do return iter.is_ok or not nsstr_done

	redef fun item do
		assert is_ok
		if iter.is_ok then return iter.item
		return nsstr
	end

	redef fun next do
		if iter.is_ok then
			iter.next
			return
		end
		nsstr_done = true
	end
end

# Substrings of a Rope (i.e. Postfix iterator on leaves)
private class RopeSubstrings
	super IndexedIterator[FlatString]

	# Visit Stack
	var iter: RopeCharIteratorPiece is noinit
	# Position in `Rope`
	var pos: Int is noinit
	# Maximum position in `Rope` (i.e. length - 1)
	var max: Int is noinit

	# Current leaf
	var str: FlatString is noinit

	init from(root: Concat, pos: Int) do
		var r = new RopeCharIteratorPiece(root, true, false, null)
		max = root.length - 1
		var rnod: String = root
		var off = pos
		loop
			if rnod isa Concat then
				if off >= rnod._left.length then
					r.rdone = true
					off -= rnod._left.length
					rnod = rnod._right
					r = new RopeCharIteratorPiece(rnod, true, false, r)
				else
					rnod = rnod._left
					r = new RopeCharIteratorPiece(rnod, true, false, r)
				end
			else
				str = rnod.as(FlatString)
				r.rdone = true
				iter = r
				self.pos = pos - off
				break
			end
		end
	end

	redef fun item do return str

	redef fun is_ok do return pos <= max

	redef fun index do return pos

	redef fun next do
		pos += str.length
		if pos > max then return
		var it = iter.prev
		var rnod = it.node
		loop
			if not rnod isa Concat then
				it.ldone = true
				it.rdone = true
				str = rnod.as(FlatString)
				iter = it.as(not null)
				break
			end
			if not it.ldone then
				rnod = rnod._left
				it.ldone = true
				it = new RopeCharIteratorPiece(rnod, false, false, it)
			else if not it.rdone then
				it.rdone = true
				rnod = rnod._right
				it = new RopeCharIteratorPiece(rnod, false, false, it)
			else
				it = it.prev
				rnod = it.node
				continue
			end
		end
	end
end

# Implementation of a `StringCharView` for `Concat` objects
private class RopeChars
	super StringCharView

	redef type SELFTYPE: Concat

	redef fun [](i) do
		return target[i]
	end

	redef fun iterator_from(i) do return new RopeCharIterator.from(target, i)

	redef fun reverse_iterator_from(i) do return new RopeCharReverseIterator.from(target, i)

end

# Implementation of a `StringCharView` for `Concat` objects
private class RopeBytes
	super StringByteView

	redef type SELFTYPE: Concat

	redef fun [](i) do
		var nod: String = target
		loop
			if nod isa FlatString then return nod._items[i]
			if not nod isa Concat then abort
			var lft = nod._left
			if lft.bytelen >= i then
				nod = nod._right
			else
				nod = lft
			end
		end
	end

	redef fun iterator_from(i) do return new RopeByteIterator.from(target, i)

	redef fun reverse_iterator_from(i) do return new RopeByteReverseIterator.from(target, i)

end

# An Iterator over a RopeBuffer.
class RopeBufferCharIterator
	super IndexedIterator[Char]

	# Subiterator.
	var sit: IndexedIterator[Char] is noautoinit

	redef fun index do return sit.index

	# Init the iterator from a RopeBuffer starting from `pos`.
	init from(t: RopeBuffer, pos: Int) do
		t.persist_buffer
		sit = t.str.chars.iterator_from(pos)
	end

	redef fun is_ok do return sit.is_ok

	redef fun item do
		assert is_ok
		return sit.item
	end

	redef fun next do sit.next
end

# Reverse iterator over a RopeBuffer.
class RopeBufferCharReverseIterator
	super IndexedIterator[Char]

	# Subiterator.
	var sit: IndexedIterator[Char] is noautoinit

	redef fun index do return sit.index

	# Init the iterator from a RopeBuffer starting from `pos`.
	init from(tgt: RopeBuffer, pos: Int) do
		tgt.persist_buffer
		sit = tgt.str.chars.reverse_iterator_from(pos)
	end

	redef fun is_ok do return sit.is_ok

	redef fun item do
		assert is_ok
		return sit.item
	end

	redef fun next do sit.next
end

# View on the chars of a `RopeBuffer`
class RopeBufferChars
	super BufferCharView

	redef type SELFTYPE: RopeBuffer

	redef fun [](i) do return target[i]

	redef fun []=(i,c) do target[i] = c

	redef fun add(c) do target.add c

	redef fun push(c) do target.add c

	redef fun iterator_from(i) do return new RopeBufferCharIterator.from(target, i)

	redef fun reverse_iterator_from(i) do return new RopeBufferCharReverseIterator.from(target, i)
end

# An Iterator over a RopeBuffer.
class RopeBufferByteIterator
	super IndexedIterator[Byte]

	# Subiterator.
	var sit: IndexedIterator[Byte] is noautoinit

	# Native string iterated over.
	var ns: NativeString is noautoinit

	# Current position in `ns`.
	var pns: Int is noautoinit

	# Maximum position iterable.
	var maxpos: Int is noautoinit

	redef var index is noautoinit

	# Init the iterator from a RopeBuffer starting from `pos`.
	init from(t: RopeBuffer, pos: Int) do
		ns = t.ns
		maxpos = t._bytelen
		sit = t.str.bytes.iterator_from(pos)
		pns = pos - t.str.length
		index = pos
	end

	redef fun is_ok do return index < maxpos

	redef fun item do
		if sit.is_ok then return sit.item
		return ns[pns]
	end

	redef fun next do
		index += 1
		if sit.is_ok then
			sit.next
		else
			pns += 1
		end
	end
end

# Reverse iterator over a RopeBuffer.
class RopeBufferByteReverseIterator
	super IndexedIterator[Byte]

	# Subiterator.
	var sit: IndexedIterator[Byte] is noautoinit

	# Native string iterated over.
	var ns: NativeString is noautoinit

	# Current position in `ns`.
	var pns: Int is noautoinit

	redef var index is noautoinit

	# Init the iterator from a RopeBuffer starting from `pos`.
	init from(tgt: RopeBuffer, pos: Int) do
		sit = tgt.str.bytes.reverse_iterator_from(pos - (tgt.rpos - tgt.dumped))
		pns = pos - tgt.str.bytelen + tgt.rpos
		index = pos
		ns = tgt.ns
	end

	redef fun is_ok do return index >= 0

	redef fun item do
		if pns >= 0 then return ns[pns]
		return sit.item
	end

	redef fun next do
		index -= 1
		if pns >= 0 then
			pns -= 1
		else
			sit.next
		end
	end
end

# View on the chars of a `RopeBuffer`
class RopeBufferBytes
	super BufferByteView

	redef type SELFTYPE: RopeBuffer

	redef fun [](i) do
		if i < target.str.bytelen then
			return target.str.bytes[i]
		else
			return target.ns[i - target.str.bytelen]
		end
	end

	redef fun iterator_from(i) do return new RopeBufferByteIterator.from(target, i)

	redef fun reverse_iterator_from(i) do return new RopeBufferByteReverseIterator.from(target, i)
end
