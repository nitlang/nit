# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Benches on the indexed access operation on variants of Text
module index_bench

import bench_base
import opts

private fun bench_string(loops: Int, strlen: Int)
do
	var a = prepare_string(strlen)
	var maxl = a.length - 1
	var cnt = 0
	while cnt != loops do
		var c = a[maxl.rand]
		cnt += 1
	end
end

private fun bench_buffer(loops: Int, strlen: Int)
do
	var x = prepare_buffer(strlen)
	var maxl = x.length - 1
	var cnt = 0
	while cnt != loops do
		var c = x[maxl.rand]
		cnt += 1
	end
end

var opts = new OptionContext
var mode = new OptionEnum(["string", "buffer"], "Mode", -1, "-m")
var loops = new OptionInt("Number of loops to be done", -1, "--loops")
var strlen = new OptionInt("Length of the base string", -1, "--strlen")
opts.add_option(mode, loops, strlen)

opts.parse(args)

if loops.value == -1 or strlen.value == -1 then
	opts.usage
	exit(-1)
end

var modval = mode.value
srand_from(0)

if modval == 0 then
	bench_string(loops.value, strlen.value)
else if modval == 1 then
	bench_buffer(loops.value, strlen.value)
else
	opts.usage
	exit(-1)
end
