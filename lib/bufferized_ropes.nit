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

end

