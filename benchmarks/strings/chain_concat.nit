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

import opts

fun bench_flatstr(str_size: Int, nb_ccts: Int, loops: Int)
do
	var lft = "a" * str_size

	for i in [0..loops] do
		var str: String = lft
		for j in [0..nb_ccts] do
			str += lft
		end
	end
end

fun bench_flatbuf(str_size: Int, nb_ccts: Int, loops: Int)
do
	var lft = "a" * str_size

	for i in [0..loops] do
		var buf = new FlatBuffer.from(lft)
		for j in [0..nb_ccts] do
			buf.append(lft)
		end
		buf.to_s
	end
end

var opts = new OptionContext
var mode = new OptionEnum(["flatstr", "flatbuf"], "Mode", -1, "-m")
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
	bench_flatbuf(strlen.value, nb_ccts.value, loops.value)
else
	opts.usage
	exit -1
end
