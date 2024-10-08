# This file is part of NIT ( https://nitlanguage.org ).
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

import core
intrude import core::text::ropes

redef class Text
	# Writes self as a dot file on the hard drive
	private fun internal_to_dot: String is abstract

	# Returns the graphviz-formatted content of `self`
	fun to_dot: String do
		return "digraph g \{\n" + internal_to_dot + "\}\n"
	end
end

redef class Concat
	redef fun internal_to_dot
	do
		var s = "n{object_id} [label = {length}];\n"
		s += "n{object_id} -> n{left.object_id} [label = \"left\"];\n"
		s += left.internal_to_dot
		s += "n{object_id} -> n{right.object_id} [label = \"right\"];\n"
		s += right.internal_to_dot
		return s
	end
end

redef class FlatString
	redef fun internal_to_dot
	do
		return "n{object_id} [label=\"FlatString\\nlength = {length}\\nbyte_length = {byte_length}\\nfirst_byte = {first_byte}\\nlast_byte = {last_byte}\\nText = {self.escape_to_dot}\"];\n"
	end
end

redef class FlatBuffer
	redef fun internal_to_dot
	do
		return "n{object_id} [label=\"FlatBuffer\\nbyte_length = {byte_length}\\nlength = {length}\\ncapacity = {capacity}\\nText = {escape_to_dot}\"];\n"
	end
end
