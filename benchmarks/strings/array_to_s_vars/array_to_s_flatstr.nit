# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Implementation of Array::to_s with FlatStrings exclusively
#
# To be used as a Mixin at compile-time for benchmarking purposes.
module array_to_s_flatstr

intrude import standard::text::flat

redef class FlatString
	redef fun +(o) do
		var mlen = length
		var slen = o.length
		var nns = new CString(mlen + slen)
		items.copy_to(nns, mlen, index_from, 0)
		if o isa FlatString then
			o.items.copy_to(nns, slen, o.index_from, mlen)
		else
			var pos = mlen
			for i in o.chars do
				nns[pos] = i
				pos += 1
			end
		end
		return nns.to_s_unsafe(mlen, copy=false)
	end
end

redef class Array[E]

	redef fun to_s do
		var i = 1
		var l = length
		if l == 0 then return ""
		var its = _items
		var s = its[0].to_s
		while i < l do
			var e = its[i]
			if e != null then s += e.to_s
			i += 1
		end
		return s
	end
end
