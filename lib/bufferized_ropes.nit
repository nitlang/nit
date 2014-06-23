# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it if you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or as a part of
# another product.

# Introduces ropes with buffered leaves
module bufferized_ropes

import standard
intrude import standard::ropes

# Leaf containing a FlatBuffer to optimize concatenation operations
private class BufferLeaf
	super Leaf

	init(val: FlatBuffer) do
		self.str = val
		length = str.length
	end

end

redef class FlatText

	# Creates a substring, only without any copy overhead for Buffers
	# The call to lazy_substring ensures the creation of a FlatString, which is required for Leaves.
	private fun lazy_substring(from: Int, length: Int): FlatString is abstract

	# Same as substring_from, but without copy of the data for Buffers.
	private fun lazy_substring_from(from: Int): FlatString is abstract
end

redef class FlatBuffer

	# Same as to_s, only will not copy self before returning a String.
	private fun lazy_to_s(len: Int): FlatString
	do
		return new FlatString.with_infos(items, len, 0, length - 1)
	end

	redef fun lazy_substring(from,length)
	do
		return new FlatString.with_infos(items, length, from, from + length - 1)
	end

	redef fun lazy_substring_from(from)
	do
		var newlen = length - from
		return new FlatString.with_infos(items, newlen, from, from + newlen - 1)
	end

end

redef class FlatString

	redef fun lazy_substring(from, len) do return substring(from,len).as(FlatString)

	redef fun lazy_substring_from(from) do return substring_from(from).as(FlatString)

end

redef class Rope

	# Empty Rope
	init do root = new BufferLeaf(new FlatBuffer.with_capacity(buf_len))

end

redef class RopeString

	init from(s: String) do
		if s.length < buf_len then
			var b = new FlatBuffer.with_capacity(buf_len)
			b.append(s)
			root = new BufferLeaf(b)
		else
			if s isa RopeString then root = s.root else root = new StringLeaf(s.as(FlatString))
		end
	end

	private fun build_node_zero_offset(path: Path, s: String): RopeNode
	do
		var finlen = path.leaf.length + s.length
		if finlen <= buf_len then
			var b = new FlatBuffer.with_capacity(buf_len)
			b.append(s)
			b.append(path.leaf.str)
			if finlen == buf_len then return new StringLeaf(b.lazy_to_s(finlen))
			return new BufferLeaf(b)
		end
		var rht = path.leaf
		var lft: RopeNode
		if s isa FlatString then
			if s.length > buf_len then
				lft = new StringLeaf(s)
			else
				var b = new FlatBuffer
				b.append(s)
				lft = new BufferLeaf(b)
			end
		else
			lft = s.as(RopeString).root
		end
		return new Concat(lft, rht)
	end

	private fun build_node_len_offset(path: Path, s: String): RopeNode
	do
		var leaf = path.leaf
		if leaf isa BufferLeaf then
			if s.length > buf_len then
				if s isa FlatString then
					return new Concat(leaf, new StringLeaf(s))
				else
					return new Concat(leaf, s.as(Rope).root)
				end
			end
			var finlen = leaf.length + s.length
			var buf = leaf.str.as(FlatBuffer)
			var cap = buf.capacity
			# Meaning the buffer was modified elsewhere
			# Therefore, we create a new one
			if leaf.length != buf.length then
				var b = new FlatBuffer.with_capacity(buf_len)
				b.append(buf.lazy_to_s(leaf.length))
				buf = b
			end
			if finlen <= cap then
				buf.append(s)
				if finlen == buf_len then return new StringLeaf(buf.lazy_to_s(finlen))
				return new BufferLeaf(buf)
			else
				var l_len = finlen - cap
				buf.append(s.substring(0,l_len))
				var b2 = new FlatBuffer.with_capacity(buf_len)
				b2.append(s.substring_from(l_len))
				var left_leaf = new StringLeaf(buf.lazy_to_s(buf.length))
				var right_leaf = new BufferLeaf(b2)
				var cct = new Concat(left_leaf, right_leaf)
				return cct
			end
		else
			var lft = leaf
			var rht: RopeNode
			if s.length >= buf_len then
				if s isa FlatString then rht = new StringLeaf(s) else rht = s.as(Rope).root
			else
				var buf = new FlatBuffer.with_capacity(buf_len)
				buf.append(s)
				rht = new BufferLeaf(buf)
			end
			return new Concat(lft,rht)
		end
	end

	private fun build_node_other(path: Path,str: String): RopeNode
	do
		var lf = path.leaf
		var s: FlatString
		if lf isa BufferLeaf then
			var b = lf.str.as(FlatBuffer)
			s = b.lazy_to_s(lf.length)
		else
			s = lf.str.as(FlatString)
		end
		var l_str = s.lazy_substring(0, path.offset)
		var r_str = s.lazy_substring_from(path.offset)
		if s.length + str.length < buf_len then
			var buf = new FlatBuffer.with_capacity(buf_len)
			buf.append(l_str)
			buf.append(str)
			buf.append(r_str)
			return new BufferLeaf(buf)
		end
		var child: RopeNode
		if str isa FlatString then child = new StringLeaf(str) else child = str.as(Rope).root
		var l_cct = new Concat(new StringLeaf(l_str), child)
		var r_cct = new Concat(l_cct, new StringLeaf(r_str))
		return r_cct
	end

end

