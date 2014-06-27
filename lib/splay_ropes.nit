# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Introduces a self-balancing method on Rope, using a Splay Tree
module splay_ropes

import standard
intrude import standard::ropes

redef class Rope

	# Performs a Left rotation on node `x`
	# Since a Rope does not have any notion of parent in its node, they need to be passed as arguments if available.
	private fun left_rotate(r: Concat): Concat
	do
		var rr = r.right.as(Concat)
		var rl = r.left
		var pl = rr.left
		var pr = rr.right
		var nr = new Concat(rl, pl)
		var np = new Concat(nr, pr)
		return np
	end

	# Performs a Right rotation on node `r`
	# Since a Rope does not have any notion of parent in its node, they need to be passed as arguments if available.
	private fun right_rotate(r: Concat): Concat
	do
		var rl = r.left.as(Concat)
		var rr = r.right
		var pr = rl.right
		var pl = rl.left
		var nr = new Concat(pr, rr)
		var np = new Concat(pl, nr)
		return np
	end

	# Performs a Splay operation on a complete path
	# The last node of the path will become the root.
	private fun splay(path: Path): nullable Concat
	do
		var st = path.stack
		if st.is_empty then return null
		var cct = st.pop.node
		while not st.is_empty do
			var tmp = st.pop
			var nod: Concat
			if tmp.left then
				nod = new Concat(cct, tmp.node.right)
				cct = right_rotate(nod)
			else
				nod = new Concat(tmp.node.left, cct)
				cct = left_rotate(nod)
			end
		end
		return cct
	end
end

redef class RopeString

	# Inserts a String `str` at position `pos`
	redef fun insert_at(str, pos)
	do
		if str.length == 0 then return self
		if self.length == 0 then return new RopeString.from(str)

		assert pos >= 0 and pos <= length

		var path = node_at(pos)

		var last_concat: Concat

		if path.offset == 0 then
			if str isa FlatString then
				last_concat = new Concat(new StringLeaf(str), path.leaf)
			else
				last_concat = new Concat(str.as(RopeString).root, path.leaf)
			end
		else if path.offset == path.leaf.length then
			if str isa FlatString then
				last_concat = new Concat(path.leaf, new StringLeaf(str))
			else
				last_concat = new Concat(path.leaf, str.as(RopeString).root)
			end
		else
			var s = path.leaf.str
			var l_half = s.substring(0, s.length - path.offset)
			var r_half = s.substring_from(s.length - path.offset)
			var cct: Concat
			var ll = new StringLeaf(l_half.as(FlatString))
			if str isa FlatString then
				cct = new Concat(ll, new StringLeaf(str))
			else
				cct = new Concat(ll, str.as(RopeString).root)
			end
			last_concat = new Concat(cct, new StringLeaf(r_half.as(FlatString)))
		end

		var st = path.stack

		if st.is_empty then return new RopeString.from_root(last_concat)

		var tmp = st.pop

		if tmp.left then
			var n = tmp.node.right
			var r = new Concat(last_concat, n)
			st.push(new PathElement(r))
		else
			var n = tmp.node.left
			var r = new Concat(n, last_concat)
			st.push(new PathElement(r))
		end

		return new RopeString.from_root(splay(path).as(not null))
	end

end

