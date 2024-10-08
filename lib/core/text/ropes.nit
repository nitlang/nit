# This file is part of NIT (https://nitlanguage.org).
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
fun maxlen: Int do return 512

# String using a tree-based representation with leaves as `FlatStrings`
private abstract class Rope
	super Text
end

# Node that represents a concatenation between two `String`
private class Concat
	super Rope
	super String

	redef fun chars do return new RopeChars(self)

	redef fun bytes do return new RopeBytes(self)

	redef var length is noinit

	redef var byte_length is noinit

	redef fun substrings do return new RopeSubstrings.from(self, 0)

	redef fun empty do return ""

	# Cache for the latest accessed FlatString in `self`
	var flat_cache: FlatString is noinit

	# Position of the beginning of `flat_cache` in `self`
	var flat_last_pos_start: Int is noinit

	redef fun to_cstring do
		var len = _byte_length
		var ns = new CString(len + 1)
		ns[len] = 0
		var off = 0
		for i in substrings do
			var ilen = i._byte_length
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
		_length = l.length + r.length
		_byte_length = l.byte_length + r.byte_length
		_flat_last_pos_start = _length
	end

	redef fun is_empty do return _byte_length == 0

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
		assert i >= 0 and i < _length
		var flps = _flat_last_pos_start
		if i >= flps then
			var fc = _flat_cache
			if i < flps + fc._length then return fc.fetch_char_at(i - flps)
		end
		var lf = get_leaf_at(i)
		return lf.fetch_char_at(i - _flat_last_pos_start)
	end

	fun get_leaf_at(pos: Int): FlatString do
		var flps = _flat_last_pos_start
		if pos >= flps then
			var fc = _flat_cache
			if pos < flps + fc._length then return fc
		end
		var s: String = self
		var st = pos
		loop
			if s isa FlatString then break
			s = s.as(Concat)
			var lft = s._left
			var llen = lft.length
			if pos >= llen then
				s = s._right
				pos -= llen
			else
				s = lft
			end
		end
		_flat_last_pos_start = st - pos
		_flat_cache = s
		return s
	end

	redef fun substring(from, count) do
		if from < 0 then
			count += from
			if count < 0 then return ""
			from = 0
		end

		var ln = _length
		if (count + from) > ln then count = ln - from
		if count <= 0 then return ""
		var end_index = from + count - 1

		var flps = _flat_last_pos_start
		if from >= flps then
			var fc = _flat_cache
			if end_index < flps + fc._length then
				return fc.substring_impl(from - flps, count, end_index - flps)
			end
		end

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
		var slen = s.byte_length
		if s isa Concat then
			return new Concat(self, s)
		else
			var r = _right
			var rlen = r.byte_length
			if rlen + slen > maxlen then return new Concat(self, s)
			return new Concat(_left, r + s)
		end
	end

	redef fun copy_to_native(dest, n, src_offset, dest_offset) do
		var l = _left
		if src_offset < l.byte_length then
			var lcopy = l.byte_length - src_offset
			lcopy = if lcopy > n then n else lcopy
			l.copy_to_native(dest, lcopy, src_offset, dest_offset)
			dest_offset += lcopy
			n -= lcopy
			src_offset = 0
		end
		_right.copy_to_native(dest, n, src_offset, dest_offset)
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

redef class FlatString

	redef fun insert_at(s, pos) do
		var l = substring(0, pos)
		var r = substring_from(pos)
		return l + s + r
	end

	redef fun +(o) do
		var s = o.to_s
		var slen = s.byte_length
		var mlen = _byte_length
		if slen == 0 then return self
		if mlen == 0 then return s
		var nlen = slen + mlen
		if s isa FlatString then
			if nlen > maxlen then return new Concat(self, s)
			var mits = _items
			var sifrom = s._first_byte
			var mifrom = _first_byte
			var sits = s._items
			var ns = new CString(nlen + 1)
			mits.copy_to(ns, mlen, mifrom, 0)
			sits.copy_to(ns, slen, sifrom, mlen)
			return new FlatString.full(ns, nlen, 0, length + s.length)
		else if s isa Concat then
			var sl = s._left
			var sllen = sl.byte_length
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
	super IndexedIterator[Int]

	# Current CString
	var ns: CString is noautoinit
	# Current position in CString
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
	super IndexedIterator[Int]

	# Position in current `String`
	var pns: Int is noautoinit
	# Current `String` being iterated on
	var ns: CString is noautoinit
	# Substrings of the Rope
	var subs: IndexedIterator[FlatString] is noautoinit
	# Maximum position to iterate on (e.g. Rope.byte_length)
	var max: Int is noautoinit
	# Position (char) in the Rope (0-indexed)
	var pos: Int is noautoinit

	init from(root: Concat, pos: Int) do
		subs = new RopeSubstrings.from(root, pos)
		pns = pos - subs.index
		self.pos = pos
		ns = subs.item._items
		max = root.byte_length - 1
	end

	redef fun item do return ns[pns]

	redef fun is_ok do return pos <= max

	redef fun index do return pos

	redef fun next do
		pns += 1
		pos += 1
		if pns < subs.item._byte_length then return
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

	# Current CString
	var ns: String is noautoinit
	# Current position in CString
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
		var currit = curr.as(not null).node
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
		var it = iter.prev.as(not null)
		var rnod = it.node
		loop
			if not rnod isa Concat then
				it.ldone = true
				it.rdone = true
				str = rnod.as(FlatString)
				iter = it
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
				it = it.prev.as(not null)
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

	var cache: FlatString is noinit

	var cache_start: Int = -1

	var cache_end: Int = -1

	redef fun [](i) do
		assert i >= 0 and i < target._byte_length
		var flps = _cache_start
		if i >= flps and i <= _cache_end then
			return _cache.bytes[i - flps]
		end
		var lf = get_leaf_at(i)
		return lf.bytes[i - _cache_start]
	end

	fun get_leaf_at(pos: Int): FlatString do
		var flps = _cache_start
		if pos >= flps and pos <= _cache_end then
			return _cache
		end
		var s: String = target
		var st = pos
		loop
			if s isa FlatString then break
			s = s.as(Concat)
			var lft = s._left
			var llen = lft.byte_length
			if pos >= llen then
				s = s._right
				pos -= llen
			else
				s = lft
			end
		end
		_cache_start = st - pos
		_cache_end = st - pos + s.byte_length - 1
		_cache = s
		return s
	end

	redef fun iterator_from(i) do return new RopeByteIterator.from(target, i)

	redef fun reverse_iterator_from(i) do return new RopeByteReverseIterator.from(target, i)

end
