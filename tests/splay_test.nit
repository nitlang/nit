# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

intrude import splay_ropes
intrude import standard::ropes
intrude import ropes_debug

redef class Leaf
	redef fun to_dot(s): String
	do
		s += "[label = \"{str}\" shape = rect];\n"
		s += " -> [label = \"contains\"];\n"
		s = str.to_dot(s)
		return s
	end
end

redef class Concat
	redef fun to_dot(s): String
	do
		s += "[label = {length}];\n"
		if left != null then
			s += " ->  [label = \"left\"];\n"
			s = left.to_dot(s)
		end
		if right != null then
			s += " ->  [label = \"right\"];\n"
			s = right.to_dot(s)
		end
		return s
	end
end

redef class FlatString
	redef fun to_dot(s: String): String
	do
		return s + " [label=\"FlatString\\nindex_from = {index_from}\\nindex_to = {index_to}\\nNativeString = {items.to_s_with_length(items.cstring_length)}\"];\n"
	end
end

redef class FlatBuffer
	redef fun to_dot(s: String): String
	do
		return s + " [label=\"FlatBuffer\\length = {length}\\ncapacity = {capacity}\\nitems = {items.to_s_with_length(items.cstring_length)}\"];\n"
	end
end


redef class RopeString

	redef fun to_dot(f)
	do
		var ret: String = new RopeString.from("digraph g \{\n")
		ret = root.to_dot(ret).as(RopeString)
		ret += "\}\n"
		print ret
		return ret
	end

end

var ab = new StringLeaf("AB".as(FlatString))
var cd = new StringLeaf("CD".as(FlatString))
var ef = new StringLeaf("EF".as(FlatString))
var gh = new StringLeaf("GH".as(FlatString))

# Zig test

var c = new Concat(cd,ef)
c = new Concat(ab,c)
var ro = new RopeString.from_root(c)

ro.to_dot("Zig-Before_splay.dot")
print ro

var p = ro.node_at(5)

ro = new RopeString.from_root(ro.splay(p).as(not null))

ro.to_dot("Zig-After_splay.dot")
print ro

# Zig-zig test left left

var d = new Concat(ab,cd)
var e = new Concat(d,ef)
var f = new Concat(e,gh)
ro = new RopeString.from_root(f)

p = ro.node_at(0)

print ro
ro.to_dot("Zig-zigll-Before_splay.dot")

ro = new RopeString.from_root(ro.splay(p).as(not null))

print ro
ro.to_dot("Zig-zigll-After_splay.dot")

# Zig-zig test right right

d = new Concat(ef,gh)
e = new Concat(cd,d)
f = new Concat(ab,e)
ro = new RopeString.from_root(f)

p = ro.node_at(7)

print ro
ro.to_dot("Zig-zigrr-Before_splay.dot")

ro = new RopeString.from_root(ro.splay(p).as(not null))

print ro
ro.to_dot("Zig-zigrr-After_splay.dot")

# Zig-zag test left right

d = new Concat(cd,ef)
e = new Concat(ab,d)
f = new Concat(e,gh)
ro = new RopeString.from_root(f)

p = ro.node_at(4)

print ro
ro.to_dot("Zig-zaglr-Before_splay.dot")

ro = new RopeString.from_root(ro.splay(p).as(not null))

print ro
ro.to_dot("Zig-zaglr-After_splay.dot")

# Zig-zag test right left

d = new Concat(cd,ef)
e = new Concat(d,gh)
f = new Concat(ab,e)
ro = new RopeString.from_root(f)

p = ro.node_at(4)

print ro
ro.to_dot("Zig-zagrl-Before_splay.dot")

ro = new RopeString.from_root(ro.splay(p).as(not null))

print ro
ro.to_dot("Zig-zagrl-After_splay.dot")

