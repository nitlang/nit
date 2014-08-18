# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Benches for iteration on variants of Text
module utf_iteration_bench

import opts
import string_experimentations::utf8_noindex

fun bench_flatstr_iter(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x = a.as(FlatString)
	for i in [0 .. nb_cct] do x = (x + a).as(FlatString)
	var cnt = 0
	var c: UnicodeChar
	while cnt != loops do
		var it = new FlatStringIter(x)
		for i in it do
			c = i
		end
		cnt += 1
	end
end

fun bench_flatstr_index(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x = a.as(FlatString)
	for i in [0 .. nb_cct] do x = (x + a).as(FlatString)
	var cnt = 0
	var c: UnicodeChar
	var pos = 0
	while cnt != loops do
		pos = 0
		while pos < x.length do
			c = x.char_at(pos)
			pos += 1
		end
		cnt += 1
	end
end

var opts = new OptionContext
var access_mode = new OptionEnum(["iterator", "index"], "Iteration mode", -1, "--iter-mode")
var nb_ccts = new OptionInt("Number of concatenations done to the string (in the case of the rope, this will increase its depth)", -1, "--ccts")
var loops = new OptionInt("Number of loops to be done", -1, "--loops")
var strlen = new OptionInt("Length of the base string", -1, "--strlen")
opts.add_option(nb_ccts, loops, strlen, access_mode)

opts.parse(args)

if nb_ccts.value == -1 or loops.value == -1 or strlen.value == -1 then
	opts.usage
	exit(-1)
end

var iterval = access_mode.value

if iterval == 0 then
	bench_flatstr_iter(nb_ccts.value, loops.value, strlen.value)
else if iterval == 1 then
	bench_flatstr_index(nb_ccts.value, loops.value, strlen.value)
else
	opts.usage
	exit(-1)
end
