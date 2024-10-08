# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Implementation of Array::to_s with manual management of the String
#
# To be used as a Mixin at compile-time for benchmarking purposes.
module array_to_s_manual

intrude import standard::text::flat
intrude import standard::collection::array

redef class NativeArray[E]
	new(length: Int) is intern
end

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
		var ns = new CString(sl + 1)
		ns[sl] = '\0'
		i = 0
		var off = 0
		while i < l do
			var tmp = na[i]
			var tpl = tmp.length
			if tmp isa FlatString then
				tmp.items.copy_to(ns, tpl, tmp.index_from, off)
				off += tpl
			else
				for j in tmp.substrings do
					var s = j.as(FlatString)
					s.items.copy_to(ns, tpl, s.index_from, off)
					off += tpl
				end
			end
			i += 1
		end
		return ns.to_s_unsafe(sl, copy=false)
	end
end
