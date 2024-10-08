# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Benchmark on the Array.to_s function using several methods.
module array_tos

import opts

fun bench_array(arr_size, item_size, loops: Int)
do
	var arr = new Array[String].with_capacity(arr_size)
	var s = "a" * item_size

	for i in [0 .. arr_size[ do arr.push s

	for i in [0..loops[ do
		s = arr.to_s
	end
end

var opts = new OptionContext
var nb_ccts = new OptionInt("Size of an element", -1, "--ccts")
var loops = new OptionInt("Number of loops to be done", -1, "--loops")
var strlen = new OptionInt("Length of the Array", -1, "--strlen")
opts.add_option(nb_ccts, loops, strlen)

opts.parse(args)

if nb_ccts.value == -1 or loops.value == -1 or strlen.value == -1 then
	opts.usage
	exit(-1)
end

bench_array(strlen.value, nb_ccts.value, loops.value)
