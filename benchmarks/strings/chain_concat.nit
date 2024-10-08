# This file is part of NIT ( https://nitlanguage.org ).
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

import bench_base
import opts

private fun bench_string(str_size: Int, nb_ccts: Int, loops: Int)
do
	var lft = prepare_string(str_size)
	for i in [0 .. loops[ do
		var str = ""
		for j in [0 .. nb_ccts[ do
			str += lft
		end
	end
end

private fun bench_buffer(str_size: Int, nb_ccts: Int, loops: Int)
do
	var lft = prepare_string(str_size)
	for i in [0 .. loops[ do
		var buf = new Buffer
		for j in [0 .. nb_ccts[ do
			buf.append(lft)
		end
	end
end

var opts = new OptionContext
var mode = new OptionEnum(["string", "buffer"], "Mode", -1, "-m")
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
	bench_string(strlen.value, nb_ccts.value, loops.value)
else if modval == 1 then
	bench_buffer(strlen.value, nb_ccts.value, loops.value)
else
	opts.usage
	exit -1
end
