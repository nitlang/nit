# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Implementation of Array::to_s with a Rope exclusively
#
# To be used as a Mixin at compile-time for benchmarking purposes.
module array_to_s_rope

intrude import standard::collection::array
intrude import standard::text::ropes

redef class Array[E]

	redef fun to_s do
		var l = length
		var it = _items
		if l == 0 then return ""
		if l == 1 then return it[0].to_s
		var c = new Concat(it[0].to_s, it[1].to_s)
		for i in [2 .. l[ do
			c = new Concat(c, it[i].to_s)
		end
		return c
	end

end
