# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Implementation of Array::to_s with manual FlatBuffer (precalc its capacity)
#
# To be used as a Mixin at compile-time for benchmarking purposes.
module array_to_s_man_buf

intrude import standard::collection::array
import standard::text

redef class Array[E]
	redef fun to_s: String do
		var l = length
		var its = _items
		var na = new NativeArray[String](l)
		var i = 0
		var sl = 0
		while i < l do
			var tmp = its[i].to_s
			sl += tmp.length
			na[i] = tmp
			i += 1
		end
		var ns = new FlatBuffer.with_capacity(sl)
		i = 0
		while i < l do
			ns.append na[i]
			i += 1
		end
		return ns.to_s
	end
end
