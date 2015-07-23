# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Ropes with a special kind of Leaves that act similar to a `Buffer`
#
# When using this module, re-allocations are limited by the introduction
# of a larger-than-necessary buffered area for the native part of a `String`
# in an append-only fashion.
#
# Concretely, when concatenating two small strings of length `n` + `m` < `maxlen`
# What happens is that a `maxlen` byte buffer is allocated, ready to receive more
# bytes a posteriori without necessarily reallocating a new byte array.
#
# Theoretically, this should lower the number of concatenations
# and reallocations when concatenating `String` objects.
module buffered_ropes

intrude import standard::text::ropes

# Hidden buffer, used to simulate a `FlatBuffer` on a short string.
#
# This is to be used by low-level APIs because of its lack of
# safety, if you use it, make sure you know what you are doing !
#
# Practically, it is the underlying representation of a `Leaf` in
# the `Rope` block, its advantage is that it saves a bit more space
# for future concatenations, without risking to overwrite previously
# used space, making it suitable for Strings.
#
# Note for future use : Should there be parallel capacity in Nit at
# some point, this is NOT thread safe !
private class ManualBuffer
	var ns: NativeString is noinit
	# Current position in the `NativeString`
	#
	# It is used by the clients of `ManualBuffer` as a guard
	# to detect if the concatenation in the `ManualBuffer`
	# is safe or not.
	#
	# i.e. :
	# Say we have two strings `x` and `y` referencing the
	# same `ManualBuffer` `b`, `y` is the concatenation of
	# `x` and another string.
	#
	# If we try to concatenate a `String` `z` to `x`, a new
	# `ManualBuffer` will be created since `pos` and `x.length`
	# do not match.
	#
	# However, if we concatenate the same `String` to `y`,
	# the contents of `z` will be copied to the `ManualBuffer`.
	var pos = 0

	init do ns = new NativeString(maxlen)

	fun [](i: Int): Byte do return ns[i]
end

# Simple implementation of the iterator on Substrings for `Leaf`
#
# Basically just returns `self` encapsulated in a `FlatString`.
private class LeafSubstrings
	super IndexedIterator[FlatText]

	var leaf: Leaf
	var str: FlatString is noinit
	var avail = true

	init do
		str = new FlatString.with_infos(leaf.buf.ns, leaf.length, 0, leaf.length - 1)
	end

	redef fun is_ok do return avail

	redef fun next do avail = false

	redef fun index do return 0

	redef fun item do return str
end

# Leaf of a `Rope`, used as a buffered area for speedy concatenation.
private class Leaf
	super String
	super Rope

	var buf: ManualBuffer
	var bns: NativeString is noinit
	redef var length is noinit

	# Unsafe, but since it is an experiment, don't mind
	redef fun bytelen do return length

	redef fun empty do return new Leaf(new ManualBuffer)

	redef fun to_cstring do
		var len = length
		var ns = new NativeString(len + 1)
		ns[len] = 0u8
		buf.ns.copy_to(ns, len, 0, 0)
		return ns
	end

	redef fun substrings do return new LeafSubstrings(self)

	redef fun [](i) do return buf[i].to_i.ascii

	init do
		bns = buf.ns
		length = buf.pos
	end

	redef fun output do new FlatString.with_infos(buf.ns, length, 0, length - 1).output

	redef fun to_upper do
		var x = new FlatBuffer
		for i in chars do x.add(i.to_upper)
		return x.to_s
	end

	redef fun to_lower do
		var x = new FlatBuffer
		for i in chars do x.add(i.to_lower)
		return x.to_s
	end

	redef fun reversed do
		var x = new ManualBuffer
		var nns = x.ns
		var ns = bns
		var mlen = length
		var j = mlen - 1
		for i in [0 .. mlen[ do
			nns[j] = ns[i]
			j -= 1
		end
		x.pos = mlen - 1
		return new Leaf(x)
	end

	redef fun substring(from, len) do
		return new FlatString.with_infos(buf.ns, len, from, from + len - 1)
	end

	redef fun insert_at(s, pos) do
		var l = substring(0, pos)
		var r = substring_from(pos)
		return l + s + r
	end

	redef fun +(o) do
		var s = o.to_s
		var slen = s.bytelen
		var mlen = bytelen
		if slen == 0 then return self
		if mlen == 0 then return s
		var nlen = mlen + slen
		if nlen > maxlen then return new Concat(self, s)
		if s isa FlatString then
			var bpos = buf.pos
			var sits = s.items
			if bpos == mlen then
				sits.copy_to(buf.ns, slen, s.first_byte, bpos)
				buf.pos = bpos + slen
				return new Leaf(buf)
			else
				var b = new ManualBuffer
				var nbns = b.ns
				bns.copy_to(nbns, mlen, 0, 0)
				sits.copy_to(nbns, slen, s.first_byte, mlen)
				b.pos = nlen
				return new Leaf(b)
			end
		else if s isa Leaf then
			var bpos = buf.pos
			var sbns = s.bns
			if bpos == mlen then
				sbns.copy_to(bns, slen, 0, bpos)
				buf.pos += slen
				return new Leaf(buf)
			else
				var b = new ManualBuffer
				var nbns = b.ns
				bns.copy_to(nbns, mlen, 0, 0)
				sbns.copy_to(nbns, slen, 0, mlen)
				b.pos = nlen
				return new Leaf(b)
			end
		else if s isa Concat then
			if not s.left isa Concat then
				return new Concat(self + s.left, s.right)
			end
			return new Concat(self, s)
		else
			var bpos = buf.pos
			var b = buf
			if bpos != mlen then
				b = new ManualBuffer
				bns.copy_to(b.ns, mlen, 0, 0)
			end
			for i in s.bytes do
				bns[bpos] = i
				bpos += 1
			end
			return new Leaf(b)
		end
	end
end

redef class Concat
	redef fun to_cstring do
		var len = length
		var ns = new NativeString(len + 1)
		ns[len] = 0u8
		var off = 0
		for i in substrings do
			var ilen = i.length
			if i isa FlatString then
				i.items.copy_to(ns, ilen, i.first_byte, off)
			else if i isa Leaf then
				i.buf.ns.copy_to(ns, ilen, 0, off)
			else
				abort
			end
			off += ilen
		end
		return ns
	end

	redef fun +(o) do
		var s = o.to_s
		var slen = s.length
		if s isa FlatString then
			var r = right
			var rlen = r.length
			if rlen + slen > maxlen then return new Concat(left, new Concat(r, s))
			return new Concat(left, r + s)
		else if s isa Concat then
			return new Concat(self, s)
		else if s isa Leaf then
			var r = right
			var rlen = r.length
			if rlen + slen > maxlen then return new Concat(left, new Concat(r, s))
			return new Concat(left, r + s)
		else
			abort
		end
	end
end

redef class FlatString
	redef fun +(o) do
		var s = o.to_s
		var slen = s.length
		var mlen = length
		if slen == 0 then return self
		if mlen == 0 then return s
		if s isa FlatString then
			if slen + mlen > maxlen then return new Concat(self, s)
			var mits = items
			var sifrom = s.first_byte
			var mifrom = first_byte
			var sits = s.items
			var b = new ManualBuffer
			var bns = b.ns
			mits.copy_to(bns, mlen, mifrom, 0)
			sits.copy_to(bns, slen, sifrom, mlen)
			b.pos = mlen + slen
			return new Leaf(b)
		else if s isa Concat then
			var sl = s.left
			var sllen = sl.length
			if sllen + mlen > maxlen then return new Concat(self, s)
			return new Concat(sl + self, s.right)
		else if s isa Leaf then
			if slen + mlen > maxlen then return new Concat(self, s)
			var mifrom = first_byte
			var sb = s.buf
			var b = new ManualBuffer
			var bns = b.ns
			items.copy_to(bns, mlen, mifrom, 0)
			sb.ns.copy_to(bns, slen, 0, mlen)
			b.pos = mlen + slen
			return new Leaf(b)
		else
			abort
		end
	end
end

redef class Array[E]

	# Fast implementation
	redef fun to_s do
		var l = length
		if l == 0 then return ""
		if l == 1 then if self[0] == null then return "" else return self[0].to_s
		var its = _items
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
			sl += tmp.length
			na[mypos] = tmp
			i += 1
			mypos += 1
		end
		var ns = new NativeString(sl + 1)
		ns[sl] = 0u8
		i = 0
		var off = 0
		while i < mypos do
			var tmp = na[i]
			var tpl = tmp.length
			if tmp isa FlatString then
				tmp.items.copy_to(ns, tpl, tmp.first_byte, off)
				off += tpl
			else
				for j in tmp.substrings do
					var slen = j.length
					if j isa FlatString then
						j.items.copy_to(ns, slen, j.first_byte, off)
					else if j isa Leaf then
						j.buf.ns.copy_to(ns, slen, 0, off)
					end
					off += slen
				end
			end
			i += 1
		end
		return ns.to_s_with_length(sl)
	end
end
