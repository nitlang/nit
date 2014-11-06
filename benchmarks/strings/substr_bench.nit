# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Benches on the substring operation on variants of Text
module substr_bench

import opts

fun bench_flatstr(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x = a
	for i in [0 .. nb_cct] do x += a
	var cnt = 0
	while cnt != loops do
		x.substring(0,5)
		cnt += 1
	end
end

fun bench_flatbuf(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x = new FlatBuffer.from(a)
	for i in [0 .. nb_cct] do x.append a
	var cnt = 0
	while cnt != loops do
		x.substring(0,5)
		cnt += 1
	end
end

var opts = new OptionContext
var mode = new OptionEnum(["flatstr", "flatbuf"], "Mode", -1, "-m")
var nb_ccts = new OptionInt("Number of concatenations done to the string (in the case of the rope, this will increase its depth)", -1, "--ccts")
var loops = new OptionInt("Number of loops to be done", -1, "--loops")
var strlen = new OptionInt("Length of the base string", -1, "--strlen")
opts.add_option(mode, nb_ccts, loops, strlen)

opts.parse(args)

if nb_ccts.value == -1 or loops.value == -1 or strlen.value == -1 then
	opts.usage
	exit(-1)
end

var modval = mode.value

if modval == 0 then
	bench_flatstr(nb_ccts.value, loops.value, strlen.value)
else if modval == 1 then
	bench_flatbuf(nb_ccts.value, loops.value, strlen.value)
else
	opts.usage
	exit(-1)
end
