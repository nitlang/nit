# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Injects stat-calculating functionalities to Text and its variants
#
# Every allocation is counted for each available type of Text in Core
#
# Cached operations are monitored and statistics of their use are printed
# at the end of the execution of a program
module text_stat

intrude import core::text::ropes
import counter

redef class Sys

	# Counts the number of allocations of UnicodeFlatString
	var uniflatstr_allocations = 0

	# Counts the number of allocations of ASCIIFlatString
	var asciiflatstr_allocations = 0

	# Counts the number of allocations of FlatBuffer
	var flatbuf_allocations = 0

	# Counts the number of allocations of Concat
	var concat_allocations = 0

	# Counts the number of calls to property length
	var length_calls = new Counter[String]

	# Counts the number of length calls that missed the cache
	var length_cache_miss = new Counter[String]

	# Counts the number of call to index on a Text
	var index_call = new Counter[String]

	# Count the number of times that an indexed access
	# on a Concat caused a regeneration of the cache
	var concat_cache_miss = 0

	# Distance between characters when looking for a character in a FlatString
	var index_len = new Counter[Int]

	# Length (bytes) of the FlatString created by lib
	var str_byte_length = new Counter[Int]

	# Counter of the times `byte_length` is called on FlatString
	var byte_length_call = new Counter[String]

	# Counter of the times `bytepos` is called on each type of receiver
	var position_call = new Counter[String]

	# Counter of the times `bytepos` is called on each type of receiver
	var bytepos_call = new Counter[String]

	# Calls to the `first_byte` property of a FlatString
	var first_byte_call = 0

	# Calls to the `last_byte` property of a FlatString
	var last_byte_call = 0

	# Number of strings created with full length created
	var str_full_created = 0

	private fun show_string_stats do
		print """
Usage of Strings:

Allocations, by type:
		"""
		print "\t-UnicodeFlatString = {uniflatstr_allocations}"
		print "\t-ASCIIFlatString = {asciiflatstr_allocations}"
		print "\t-FlatBuffer = {flatbuf_allocations}"
		print "\t-Concat = {concat_allocations}"
		print ""
		print "Calls to length, by type:"
		for k, v in length_calls do
			printn "\t{k} = {v}"
			if k == "UnicodeFlatString" then printn " (cache misses {length_cache_miss[k]}, {div(length_cache_miss[k] * 100, v)}%)"
			printn "\n"
		end
		print "Indexed accesses, by type:"
		for k, v in index_call do
			printn "\t{k} = {v}"
			if k == "Concat" then printn " (cache misses {concat_cache_miss}, {div(concat_cache_miss * 100, v)}%)"
			printn "\n"
		end

		print "Calls to byte_length for each type:"
		for k, v in byte_length_call do
			print "\t{k} = {v}"
		end

		print "Calls to position for each type:"
		for k, v in position_call do
			print "\t{k} = {v}"
		end

		print "Calls to bytepos for each type:"
		for k, v in bytepos_call do
			print "\t{k} = {v}"
		end

		print "Calls to first_byte on FlatString {first_byte_call}"
		print "Calls to last_byte on FlatString {last_byte_call}"

		print "Length of travel for index distribution:"
		index_len.print_content

		print "Byte length of the FlatStrings created:"
		str_byte_length.print_content
	end

	redef fun run do
		super
		show_string_stats
	end
end

redef fun exit(i) do
	show_string_stats
	super
end

redef class Concat
	init do
		sys.concat_allocations += 1
	end

	redef fun byte_length do
		sys.byte_length_call.inc "Concat"
		return super
	end

	redef fun [](i) do
		sys.index_call.inc "Concat"
		if flat_last_pos_start != -1 then
			var fsp = i - flat_last_pos_start
			if fsp >= 0 and fsp < flat_cache.length then return flat_cache[fsp]
		end
		sys.concat_cache_miss += 1
		var s: String = self
		var st = i
		loop
			if s isa FlatString then break
			s = s.as(Concat)
			var lft = s.left
			var llen = lft.length
			if i >= llen then
				s = s.right
				i -= llen
			else
				s = s.left
			end
		end
		flat_last_pos_start = st - i
		flat_cache = s
		return s[i]
	end
end

redef class FlatText
	redef fun char_to_byte_index(index) do
		var ln = length
		assert index >= 0
		assert index < ln

		# Find best insertion point
		var delta_begin = index
		var delta_end = (ln - 1) - index
		var delta_cache = (position - index).abs
		var min = delta_begin
		var its = items

		if delta_cache < min then min = delta_cache
		if delta_end < min then min = delta_end

		var ns_i: Int
		var my_i: Int

		if min == delta_begin then
			ns_i = first_byte
			my_i = 0
		else if min == delta_cache then
			ns_i = bytepos
			my_i = position
		else
			ns_i = its.find_beginning_of_char_at(last_byte)
			my_i = length - 1
		end

		var from = ns_i

		ns_i = its.char_to_byte_index_cached(index, my_i, ns_i)

		var after = ns_i

		sys.index_len.inc((after - from).abs)

		position = index
		bytepos = ns_i

		return ns_i
	end
end

redef class FlatBuffer

	init do
		sys.flatbuf_allocations += 1
	end

	redef fun bytepos do
		sys.bytepos_call.inc "FlatBuffer"
		return super
	end

	redef fun bytepos=(p) do
		sys.bytepos_call.inc "FlatBuffer"
		super
	end

	redef fun position do
		sys.position_call.inc "FlatBuffer"
		return super
	end

	redef fun position=(p) do
		sys.position_call.inc "FlatBuffer"
		super
	end

	redef fun byte_length do
		sys.byte_length_call.inc "FlatBuffer"
		return super
	end

	redef fun length do
		sys.length_calls.inc "FlatBuffer"
		return super
	end

	redef fun [](i) do
		sys.index_call.inc "FlatBuffer"
		return super
	end

	redef fun char_to_byte_index(i) do
		sys.index_call.inc "FlatBuffer"
		return super
	end
end

redef class FlatString

	redef fun bytepos do
		sys.bytepos_call.inc "FlatString"
		return super
	end

	redef fun bytepos=(p) do
		sys.bytepos_call.inc "FlatString"
		super
	end

	redef fun position do
		sys.position_call.inc "FlatString"
		return super
	end

	redef fun position=(p) do
		sys.position_call.inc "FlatString"
		super
	end

	redef fun byte_length do
		sys.byte_length_call.inc "FlatString"
		return super
	end

	redef fun first_byte do
		sys.first_byte_call += 1
		return super
	end

	redef fun first_byte=(v) do
		sys.first_byte_call += 1
		super
	end

	redef fun last_byte do
		sys.last_byte_call += 1
		return super
	end

	private var length_cache: nullable Int = null

	redef fun length do
		sys.length_calls.inc "FlatString"
		var l = length_cache
		if l != null then return l
		sys.length_cache_miss.inc "FlatString"
		if byte_length == 0 then return 0
		var st = first_byte
		var its = items
		var ln = 0
		var lst = last_byte
		while st <= lst do
			st += its.length_of_char_at(st)
			ln += 1
		end
		length_cache = ln
		return ln
	end

	redef fun char_to_byte_index(i) do
		sys.index_call.inc "FlatString"
		return super
	end
end

redef class ASCIIFlatString
	redef init full_data(items, byte_length, from, length)
	do
		super
		sys.asciiflatstr_allocations += 1
		sys.str_full_created += 1
	end
end

redef class UnicodeFlatString
	redef init full_data(items, byte_length, from, length)
	do
		super
		sys.uniflatstr_allocations += 1
		sys.str_full_created += 1
	end
end
