# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2006-2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Exposes methods for debugging ropes when needed.
module ropes_debug

intrude import ::standard::ropes
import ::standard

redef class Rope
	# Writes self as a dot file on the hard drive
	fun to_dot(filepath: String): String is abstract
end

redef class RopeNode
	# Generates a dot string
	fun to_dot(s: String): String is abstract
end

redef class Leaf
	redef fun to_dot(s): String
	do
		s += "n{object_id} [label = \"{str}\" shape = rect];\n"
		s += "n{str.object_id} -> n{object_id} [label = \"contains\"];\n"
		s = str.to_dot(s)
		return s
	end
end

redef class Concat
	redef fun to_dot(s): String
	do
		s += "n{object_id} [label = {length}];\n"
		if left != null then
			s += "n{object_id} -> n{left.object_id} [label = \"left\"];\n"
			s = left.to_dot(s)
		end
		if right != null then
			s += "n{object_id} -> n{right.object_id} [label = \"right\"];\n"
			s = right.to_dot(s)
		end
		return s
	end
end

redef class FlatText
	fun to_dot(s: String): String is abstract
end

redef class FlatString
	redef fun to_dot(s: String): String
	do
		return s + "n{object_id} [label=\"FlatString\\nindex_from = {index_from}\\nindex_to = {index_to}\\nNativeString = {items.to_s_with_length(items.cstring_length)}\"];\n"
	end
end

redef class FlatBuffer
	redef fun to_dot(s: String): String
	do
		return s + "n{object_id} [label=\"FlatBuffer\\length = {length}\\ncapacity = {capacity}\\nitems = {items.to_s_with_length(items.cstring_length)}\"];\n"
	end
end

redef class RopeString
	redef fun to_dot(filepath: String)
	do
		var of = new OFStream.open(filepath)
		var ret: String = new RopeString.from("digraph g \{\n")
		ret = root.to_dot(ret).as(RopeString)
		ret += "\}\n"
		ret.write_to(of)
		of.close
		return ret
	end
end


