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
# See : `Ropes : an Alternative to Strings`, `Software - Practice and Experience,
# Vol. 25(12), 1315-1330 (December 1995)`.
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
# `            Concat                   `
# `          /        \                 `
# `    Concat          Concat           `
# `   /      \        /      \          `
# `"My"     " Name"  " is"   " Simon."  `
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

	redef var length: Int

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

	init(l: String, r: String) do
		left = l
		right = r
		length = l.length + r.length
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
		var mlen = length
		var slen = s.length
		if s isa Concat then
			return new Concat(self, s)
		else
			var r = right
			var rlen = r.length
			if rlen + slen > maxlen then return new Concat(left, new Concat(r, s))
			return new Concat(left, r + s)
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

	init(root: RopeString) do
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

	init(root: RopeString) do
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

	init(root: RopeString) do
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
		var curr: nullable RopeIterPiece = iter.prev
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

	init(root: RopeString) do
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
		var rnod: String = it.node
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

	var tgt: RopeString

	init(s: RopeString) do tgt = s

	redef fun [](i) do
		return tgt[i]
	end

	redef fun iterator_from(i) do return new RopeIter.from(tgt, i)

	redef fun reverse_iterator_from(i) do return new RopeReviter.from(tgt, i)

end
