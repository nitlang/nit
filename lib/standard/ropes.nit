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
#	            Concat
#	          /        \
#	    Concat          Concat
#	   /      \        /      \
#	"My"     " Name"  " is"   " Simon."
#
# Note that the above example is not representative of the actual implementation
# of `Ropes`, since short leaves are merged to keep the rope at an acceptable
# height (hence, this rope here might actually be a `FlatString` !).
module ropes

intrude import string

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

private abstract class RopeString
	super Rope
	super String

	redef fun chars is cached do return new RopeChars(self)
end

# Node that represents a concatenation between two `String`
private class Concat
	super RopeString

	redef var length: Int is noinit

	redef fun substrings do return new RopeSubstrings(self)

	redef fun empty do return ""

	redef fun to_cstring is cached do
		var len = length
		var ns = new NativeString(len + 1)
		ns[len] = '\0'
		var off = 0
		for i in substrings do
			var ilen = i.length
			i.as(FlatString).items.copy_to(ns, ilen, i.as(FlatString).index_from, off)
			off += ilen
		end
		return ns
	end

	# Left child of the node
	var left: String
	# Right child of the node
	var right: String

	init do
		length = left.length + right.length
	end

	redef fun output do
		left.output
		right.output
	end

	redef fun iterator do return new RopeIter(self)

	redef fun *(i) do
		var x: String = self
		for j in [1 .. i[ do x += self
		return x
	end

	redef fun [](i) do
		var llen = left.length
		if i >= llen then return right[i - llen]
		return left[i]
	end

	redef fun substring(from, len) do
		var llen = left.length
		if from < llen then
			if from + len < llen then return left.substring(from,len)
			var lsublen = llen - from
			return left.substring_from(from) + right.substring(0, len - lsublen)
		else
			return right.substring(from - llen, len)
		end
	end

	redef fun reversed do return new Concat(right.reversed, left.reversed)

	redef fun insert_at(s, pos) do
		if pos > left.length then
			return left + right.insert_at(s, pos - left.length)
		end
		return left.insert_at(s, pos) + right
	end

	redef fun to_upper do return new Concat(left.to_upper, right.to_upper)

	redef fun to_lower do return new Concat(left.to_lower, right.to_lower)

	redef fun +(o) do
		var s = o.to_s
		var slen = s.length
		if s isa Concat then
			return new Concat(self, s)
		else
			var r = right
			var rlen = r.length
			if rlen + slen > maxlen then return new Concat(self, s)
			return new Concat(left, r + s)
		end
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

	redef fun chars: Sequence[Char] is cached do return new RopeBufferChars(self)

	# The final string being built on the fly
	private var str: String is noinit

	# Current concatenation buffer
	private var ns: NativeString is noinit

	# Next available (e.g. unset) character in the `Buffer`
	private var rpos = 0

	# Keeps track of the buffer's currently dumped part
	#
	# This might happen if for instance, a String was being
	# built by concatenating small parts of string and suddenly
	# a long string (length > maxlen) is appended.
	private var dumped: Int is noinit

	# Length of the complete rope
	redef var length = 0

	# Length of the mutable part
	#
	# Is also used as base to compute the size of the next
	# mutable native string (`ns`)
	private var buf_size: Int is noinit

	redef fun substrings: Iterator[String] do return new RopeBufSubstringIterator(self)

	# Builds an empty `RopeBuffer`
	init do
		str = ""
		ns = new NativeString(maxlen)
		buf_size = maxlen
		dumped = 0
	end

	# Builds a new `RopeBuffer` with `str` in it.
	init from(str: String) do
		self.str = str
		ns = new NativeString(maxlen)
		buf_size = maxlen
		length = str.length
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

	redef fun empty do return new RopeBuffer

	redef fun clear do
		str = ""
		length = 0
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
				return new RopeBuffer.from(l + nns.to_s_with_length(rem))
			end
		else
			var nns = new NativeString(count)
			ns.copy_to(nns, count, dumped, 0)
			return new RopeBuffer.from(nns.to_s_with_length(count))
		end
	end

	redef fun append(s) do
		var slen = s.length
		length += slen
		var rp = rpos
		if s isa Rope or slen > maxlen then
			if rp > 0 and dumped != rp then
				str += new FlatString.with_infos(ns, rp - dumped, dumped, rp - 1)
				dumped = rp
			end
			str = str + s
			return
		end
		var remsp = buf_size - rp
		var sits: NativeString
		var begin: Int
		if s isa FlatString then
			begin = s.index_from
			sits = s.items
		else if s isa FlatBuffer then
			begin = 0
			sits = s.items
		else
			if slen <= remsp then
				for i in s.chars do
					ns[rpos] = i
					rpos += 1
				end
			else
				var spos = 0
				for i in [0..remsp[ do
					ns[rpos] = s[spos]
					rpos += 1
					spos += 1
				end
				dump_buffer
				while spos < slen do
					ns[rpos] = s[spos]
					spos += 1
					rpos += 1
				end
			end
			return
		end
		if slen <= remsp then
			if remsp <= 0 then
				dump_buffer
				rpos = 0
			else
				sits.copy_to(ns, slen, begin, rp)
				rpos += slen
			end
		else
			sits.copy_to(ns, remsp, begin, rp)
			rpos = buf_size
			dump_buffer
			var nlen = slen - remsp
			sits.copy_to(ns, nlen, begin + remsp, 0)
			rpos = nlen
		end
	end

	redef fun add(c) do
		var rp = rpos
		if rp >= buf_size then
			dump_buffer
			rp = 0
		end
		ns[rp] = c
		rp += 1
		length += 1
		rpos = rp
	end

	# Converts the Buffer to a FlatString, appends it to
	# the final String and re-allocates a new larger Buffer.
	private fun dump_buffer do
		written = false
		var nstr = new FlatString.with_infos(ns, rpos - dumped, dumped, rpos - 1)
		str += nstr
		var bs = buf_size
		bs = bs * 2
		ns = new NativeString(bs)
		buf_size = bs
		dumped = 0
	end

	redef fun output do
		str.output
		new FlatString.with_infos(ns, rpos - dumped, dumped, rpos - 1).output
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
		written = true
		var nnslen = rpos - dumped
		if nnslen == 0 then return str
		return str + new FlatString.with_infos(ns, rpos - dumped, dumped, rpos - 1)
	end

	redef fun reverse do
		# Flush the buffer in order to only have to reverse `str`.
		if rpos > 0 and dumped != rpos then
			str += new FlatString.with_infos(ns, rpos - dumped, dumped, rpos - 1)
			dumped = rpos
		end
		str = str.reversed
	end

	redef fun upper do
		if written then reset
		str = str.to_upper
		var mits = ns
		for i in [0 .. rpos[ do
			mits[i] = mits[i].to_upper
		end
	end

	redef fun lower do
		if written then reset
		str = str.to_lower
		var mits = ns
		for i in [0 .. rpos[ do
			mits[i] = mits[i].to_lower
		end
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
		var slen = s.length
		var mlen = length
		if slen == 0 then return self
		if mlen == 0 then return s
		var nlen = slen + mlen
		if s isa FlatString then
			if nlen > maxlen then return new Concat(self, s)
			var mits = items
			var sifrom = s.index_from
			var mifrom = index_from
			var sits = s.items
			var ns = new NativeString(nlen + 1)
			mits.copy_to(ns, mlen, mifrom, 0)
			sits.copy_to(ns, slen, sifrom, mlen)
			return ns.to_s_with_length(nlen)
		else if s isa Concat then
			var sl = s.left
			var sllen = sl.length
			if sllen + mlen > maxlen then return new Concat(self, s)
			return new Concat(self + sl, s.right)
		else
			abort
		end
	end
end

# A simple linked list for use with iterators
private class RopeIterPiece
	# The encapsulated node of the `Rope`
	var node: String
	# Was its left child (if any) visited ?
	var ldone: Bool
	# Was its right child (if any) visited ?
	var rdone: Bool
	# The previous node in the list.
	var prev: nullable RopeIterPiece
end

# A reverse iterator capable of working with `Rope` objects
private class RopeReviter
	super IndexedIterator[Char]

	# Current NativeString
	var ns: String
	# Current position in NativeString
	var pns: Int
	# Position in the Rope (0-indexed)
	var pos: Int
	# Iterator on the substrings, does the Postfix part of
	# the Rope traversal.
	var subs: IndexedIterator[String]

	init(root: RopeString) is old_style_init do
		pos = root.length - 1
		subs = new ReverseRopeSubstrings(root)
		ns = subs.item
		pns = ns.length - 1
	end

	init from(root: RopeString, pos: Int) do
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
private class RopeIter
	super IndexedIterator[Char]

	# Position in current `String`
	var pns: Int
	# Current `String` being iterated on
	var str: String
	# Substrings of the Rope
	var subs: IndexedIterator[String]
	# Maximum position to iterate on (e.g. Rope.length)
	var max: Int
	# Position (char) in the Rope (0-indexed)
	var pos: Int

	init(root: RopeString) is old_style_init do
		subs = new RopeSubstrings(root)
		pns = 0
		str = subs.item
		max = root.length - 1
		pos = 0
	end

	init from(root: RopeString, pos: Int) do
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
	super IndexedIterator[String]

	# Visit Stack
	var iter: RopeIterPiece is noinit
	# Position in `Rope`
	var pos: Int is noinit

	# Current leaf
	var str: String is noinit

	init(root: RopeString) is old_style_init do
		var r = new RopeIterPiece(root, false, true, null)
		pos = root.length - 1
		var lnod: String = root
		loop
			if lnod isa Concat then
				lnod = lnod.right
				r = new RopeIterPiece(lnod, false, true, r)
			else
				str = lnod
				iter = r
				break
			end
		end
	end

	init from(root: RopeString, pos: Int) do
		var r = new RopeIterPiece(root, false, true, null)
		var rnod: String = root
		var off = pos
		loop
			if rnod isa Concat then
				if off >= rnod.left.length then
					off -= rnod.left.length
					rnod = rnod.right
					r = new RopeIterPiece(rnod, false, true, r)
				else
					r.ldone = true
					rnod = rnod.left
					r = new RopeIterPiece(rnod, false, true, r)
				end
			else
				str = rnod
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
				str = currit
				pos -= str.length
				iter = curr
				return
			end
			if not curr.rdone then
				curr.rdone = true
				curr = new RopeIterPiece(currit.right, false, false, curr)
				continue
			end
			if not curr.ldone then
				curr.ldone = true
				curr = new RopeIterPiece(currit.left, false, false, curr)
				continue
			end
			curr = curr.prev
		end
		pos = -1
	end
end

private class RopeBufSubstringIterator
	super Iterator[String]

	# Iterator on the substrings of the building string
	var iter: Iterator[String]
	# Makes a String out of the buffered part of the Ropebuffer
	var nsstr: String
	# Did we attain the buffered part ?
	var nsstr_done = false

	init(str: RopeBuffer) is old_style_init do
		iter = str.str.substrings
		nsstr = new FlatString.with_infos(str.ns, str.rpos - str.dumped, str.dumped, str.rpos - 1)
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
	super IndexedIterator[String]

	# Visit Stack
	var iter: RopeIterPiece is noinit
	# Position in `Rope`
	var pos: Int is noinit
	# Maximum position in `Rope` (i.e. length - 1)
	var max: Int is noinit

	# Current leaf
	var str: String is noinit

	init(root: RopeString) is old_style_init do
		var r = new RopeIterPiece(root, true, false, null)
		pos = 0
		max = root.length - 1
		var rnod: String = root
		loop
			if rnod isa Concat then
				rnod = rnod.left
				r = new RopeIterPiece(rnod, true, false, r)
			else
				str = rnod
				r.rdone = true
				iter = r
				break
			end
		end
	end

	init from(root: RopeString, pos: Int) do
		var r = new RopeIterPiece(root, true, false, null)
		max = root.length - 1
		var rnod: String = root
		var off = pos
		loop
			if rnod isa Concat then
				if off >= rnod.left.length then
					r.rdone = true
					off -= rnod.left.length
					rnod = rnod.right
					r = new RopeIterPiece(rnod, true, false, r)
				else
					rnod = rnod.left
					r = new RopeIterPiece(rnod, true, false, r)
				end
			else
				str = rnod
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
				str = rnod
				iter = it.as(not null)
				break
			end
			if not it.ldone then
				rnod = rnod.left
				it.ldone = true
				it = new RopeIterPiece(rnod, false, false, it)
			else if not it.rdone then
				it.rdone = true
				rnod = rnod.right
				it = new RopeIterPiece(rnod, false, false, it)
			else
				it = it.prev
				rnod = it.node
				continue
			end
		end
	end
end

# Implementation of a `StringCharView` for `RopeString` objects
private class RopeChars
	super StringCharView

	redef type SELFTYPE: RopeString

	redef fun [](i) do
		return target[i]
	end

	redef fun iterator_from(i) do return new RopeIter.from(target, i)

	redef fun reverse_iterator_from(i) do return new RopeReviter.from(target, i)

end

# An Iterator over a RopeBuffer.
class RopeBufferIter
	super IndexedIterator[Char]

	# Subiterator.
	var sit: IndexedIterator[Char]

	# Native string iterated over.
	var ns: NativeString

	# Current position in `ns`.
	var pns: Int

	# Maximum position iterable.
	var maxpos: Int

	redef var index: Int

	# Init the iterator from a RopeBuffer.
	init(t: RopeBuffer) is old_style_init do
		ns = t.ns
		maxpos = t.rpos
		sit = t.str.chars.iterator
		pns = t.dumped
		index = 0
	end

	# Init the iterator from a RopeBuffer starting from `pos`.
	init from(t: RopeBuffer, pos: Int) do
		ns = t.ns
		maxpos = t.length
		sit = t.str.chars.iterator_from(pos)
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
class RopeBufferReviter
	super IndexedIterator[Char]

	# Subiterator.
	var sit: IndexedIterator[Char]

	# Native string iterated over.
	var ns: NativeString

	# Current position in `ns`.
	var pns: Int

	redef var index: Int

	# Init the iterator from a RopeBuffer.
	init(tgt: RopeBuffer) is old_style_init do
		sit = tgt.str.chars.reverse_iterator
		pns = tgt.rpos - 1
		index = tgt.length - 1
		ns = tgt.ns
	end

	# Init the iterator from a RopeBuffer starting from `pos`.
	init from(tgt: RopeBuffer, pos: Int) do
		sit = tgt.str.chars.reverse_iterator_from(pos - tgt.rpos - tgt.dumped)
		pns = pos - tgt.str.length
		index = pos
		ns = tgt.ns
	end

	redef fun is_ok do return index > 0

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
class RopeBufferChars
	super BufferCharView

	redef type SELFTYPE: RopeBuffer

	redef fun [](i) do
		if i < target.str.length then
			return target.str[i]
		else
			return target.ns[i - target.str.length]
		end
	end

	redef fun []=(i,c) do
		if i == target.length then target.add c
		if i < target.str.length then
			var s = target.str
			var l = s.substring(0, i)
			var r = s.substring_from(i + 1)
			target.str = l + c.to_s + r
		else
			target.ns[i - target.str.length] = c
		end
	end

	redef fun add(c) do target.add c

	redef fun push(c) do target.add c

	redef fun iterator_from(i) do return new RopeBufferIter.from(target, i)

	redef fun reverse_iterator_from(i) do return new RopeBufferReviter.from(target, i)
end
