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

redef class Concat
	redef fun to_leaf
	do
		if left == null then
			if right == null then return new StringLeaf("".as(FlatString))
			return right.to_leaf
		end
		if right == null then return left.as(not null).to_leaf
		if left.length + right.length < buf_len then
			var b = new FlatBuffer.with_capacity(buf_len)
			b.append(left.to_leaf.str)
			b.append(right.to_leaf.str)
			return new BufferLeaf(b)
		else
			var b = new FlatBuffer.with_capacity(left.length + right.length)
			b.append(left.to_leaf.str)
			b.append(right.to_leaf.str)
			return new StringLeaf(b.lazy_to_s(b.length))
		end
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

	redef fun +(o) do return insert_at(o.to_s, length)

	# Inserts a String `str` at position `pos`
	redef fun insert_at(str, pos)
	do
		if str.length == 0 then return self

		assert pos >= 0 and pos <= length

		if pos == length then
			var r = root
			if r isa BufferLeaf then
				var b = r.str.as(FlatBuffer)
				if r.length + str.length < b.capacity then
					b.append(str)
					return new RopeString.from_root(new BufferLeaf(b))
				end
			end
		end

		var path = node_at(pos)

		var cct: RopeNode

		if path.offset == path.leaf.length then
			cct = build_node_len_offset(path, str)
		else if path.offset == 0 then
			cct = build_node_zero_offset(path, str)
		else
			cct = build_node_other(path,str)
		end

		if path.stack.is_empty then return new RopeString.from_root(cct)

		var tmp = path.stack.pop
		var last_concat: Concat

		if tmp.left then
			last_concat = new Concat(cct,tmp.node.right.as(not null))
		else
			last_concat = new Concat(tmp.node.left.as(not null), cct)
		end

		for i in path.stack.reverse_iterator do
			var nod: Concat
			if i.left then
				nod = new Concat(last_concat, i.node.right.as(not null))
			else
				nod = new Concat(i.node.left.as(not null), last_concat)
			end
			last_concat = nod
		end

		return new RopeString.from_root(last_concat)
	end

	redef fun substring(pos, len)
	do
		if pos < 0 then
			len += pos
			pos = 0
		end

		if pos + len > length then len = length - pos

		if len <= 0 then return new RopeString

		var path = node_at(pos)

		var lf = path.leaf
		var offset = path.offset

		var s: FlatString
		if lf isa StringLeaf then
			s = lf.str.as(FlatString)
		else
			s = lf.str.as(FlatBuffer).lazy_to_s(lf.length)
		end

		if path.leaf.str.length - offset > len then
			lf = new StringLeaf(s.substring(offset,len).as(FlatString))
		else
			lf = new StringLeaf(s.substring_from(offset).as(FlatString))
		end

		var nod: RopeNode = lf

		if lf.length == len then return new RopeString.from_root(lf)

		var lft: nullable RopeNode
		var rht: nullable RopeNode

		for i in path.stack.reverse_iterator do
			if i.right then continue
			lft = nod
			rht = i.node.right
			nod = new Concat(lft, rht)
		end

		var ret = new RopeString
		ret.root = nod

		path = ret.node_at(len-1)

		offset = path.offset

		lf = path.leaf

		if lf isa StringLeaf then
			s = lf.str.as(FlatString)
		else
			s = lf.str.as(FlatBuffer).lazy_to_s(lf.length)
		end

		nod = new StringLeaf(s.substring(0, offset+1).as(FlatString))

		for i in path.stack.reverse_iterator do
			if i.left then continue
			rht = nod
			lft = i.node.left
			nod = new Concat(lft, rht)
		end

		ret.root = nod

		return ret
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

redef class SubstringsIterator

	# Compute the bounds of the current substring and makes the substring
	redef fun make_substring
	do
		var l = nodes.item
		var s = l.str
		var min = 0
		var length = l.length
		if nodes.index < pos then
			min = pos - nodes.index
		end
		substring = s.lazy_substring(min, length)
	end

end

redef class ReverseSubstringsIterator

	redef fun make_substring
	do
		var l = leaves.item
		var s = l.str
		if pos > (leaves.index + l.length - 1) then return
		str = s.lazy_substring(0, (pos - leaves.index + 1))
	end

end

# Default size of a buffer in a rope leaf.
fun buf_len: Int do return 200

