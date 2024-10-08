# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Implementation of Array::to_s with FlatBuffer exclusively
#
# To be used as a Mixin at compile-time for benchmarking purposes.
module array_to_s_buffer

intrude import standard::collection::array
import standard::text

redef class Array[E]
	redef fun to_s: String do
		var s = new FlatBuffer
		var i = 0
		var l = length
		var its = _items
		while i < l do
			var e = its[i]
			if e != null then s.append(e.to_s)
			i += 1
		end
		return s.to_s
	end
end
