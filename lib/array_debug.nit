# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Exposes functions to help profile or debug Arrays.
module array_debug

import counter

redef class Sys

	# Tracks the average length of the Strings of an array when calling to_s
	var arr_s_len = new Counter[Int]

	# Keeps the average length of an Array when calling to_s
	var arr_len = new Counter[Int]

	# Compute the average array length.
	fun avg_arr_len: Float do
		var total = 0
		var sum = 0
		for i in arr_len.keys do
			total += arr_len[i]
			sum += arr_len[i] * i
		end
		return sum.to_f / total.to_f
	end

	# Compute the average string length.
	fun avg_s_len: Float do
		var total = 0
		var sum = 0
		for i in arr_s_len.keys do
			total += arr_s_len[i]
			sum += arr_s_len[i] * i
		end
		return sum.to_f / total.to_f
	end

	# Display statistics in standard output.
	fun print_stats do
		if arr_len.sum == 0 then
			print "*** No Array stats ***"
			return
		end
		print "*** Array Stats ***"
		print "Number of calls to Array::to_s : {sys.arr_len.sum}"
		print "Average number of elements in an Array (when calling to_s) : {sys.avg_arr_len}"
		print "Average string size in Array : {sys.avg_s_len}"
		print "*** End of Stats ***"
	end

	redef fun run do
		super
		print_stats
	end
end

redef fun exit(i)
do
	sys.print_stats
	super
end

redef class Array[E]

	redef fun to_s do
		sys.arr_len.inc length
		for i in self do
			sys.arr_s_len.inc i.to_s.length
		end
		return super
	end

end
