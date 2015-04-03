# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Benches measuring the performance of several concatenations on Text variants
module chain_concat

intrude import standard::ropes
import opts

redef class FlatString
	redef fun +(o) do
		var mlen = length
		var slen = o.length
		var nlen = mlen + slen
		var ns = new NativeString(nlen + 1)
		items.copy_to(ns, mlen, index_from, 0)
		if o isa FlatString then
			o.items.copy_to(ns, slen, o.index_from, 0)
		else
			var pos = mlen
			for i in o.chars do
				ns[pos] = i
				pos += 1
			end
		end
		return ns.to_s_with_length(nlen)
	end
end

fun bench_flatstr(str_size: Int, nb_ccts: Int, loops: Int)
do
	var lft = "a" * str_size

	for i in [0 .. loops[ do
		var str: String = ""
		for j in [0 .. nb_ccts[ do
			str += lft
		end
	end
end

fun bench_ropestr(str_size, nb_ccts, loops: Int) do
	var lft = "a" * str_size

	for i in [0 .. loops[ do
		var str: String = ""
		for j in [0 .. nb_ccts[ do
			str = new Concat(str, lft)
		end
	end
end

fun bench_flatbuf(str_size: Int, nb_ccts: Int, loops: Int)
do
	var lft = "a" * str_size

	for i in [0 .. loops[ do
		var buf = new FlatBuffer
		for j in [0 .. nb_ccts[ do
			buf.append(lft)
		end
	end
end

fun bench_ropebuf(str_size: Int, nb_ccts: Int, loops: Int)
do
	var lft = "a" * str_size

	for i in [0 .. loops[ do
		var buf = new RopeBuffer
		for j in [0 .. nb_ccts[ do
			buf.append(lft)
		end
	end
end

var opts = new OptionContext
var mode = new OptionEnum(["flatstr", "ropestr", "flatbuf", "ropebuf"], "Mode", -1, "-m")
var nb_ccts = new OptionInt("Number of concatenations per loop", -1, "--ccts")
var loops = new OptionInt("Number of loops to be done", -1, "--loops")
var strlen = new OptionInt("Length of the base string", -1, "--strlen")
opts.add_option(mode, nb_ccts, loops, strlen)

opts.parse(args)

if nb_ccts.value == -1 or loops.value == -1 or strlen.value == -1 then
	opts.usage
	exit -1
end

var modval = mode.value

if modval == 0 then
	bench_flatstr(strlen.value, nb_ccts.value, loops.value)
else if modval == 1 then
	bench_ropestr(strlen.value, nb_ccts.value, loops.value)
else if modval == 2 then
	bench_flatbuf(strlen.value, nb_ccts.value, loops.value)
else if modval == 3 then
	bench_ropebuf(strlen.value, nb_ccts.value, loops.value)

else
	opts.usage
	exit -1
end
