# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Benches for iteration on variants of Text
module iteration_bench

import opts
import bench_base

private fun bench_string_iter(loops: Int, strlen: Int)
do
	var a = prepare_string(strlen)
	var cnt = 0
	var c: Char
	while cnt != loops do
		for i in a do
			c = i
		end
		cnt += 1
	end
end

private fun bench_string_index(loops: Int, strlen: Int)
do
	var a = prepare_string(strlen)
	var cnt = 0
	var c: Char
	var pos = 0
	while cnt != loops do
		pos = 0
		while pos < a.length do
			c = a[pos]
			pos += 1
		end
		cnt += 1
	end
end

private fun bench_buffer_iter(loops: Int, strlen: Int)
do
	var x = prepare_buffer(strlen)
	var cnt = 0
	var c: Char
	while cnt != loops do
		for i in x do
			c = i
		end
		cnt += 1
	end
end

private fun bench_buffer_index(loops: Int, strlen: Int)
do
	var x = prepare_buffer(strlen)
	var cnt = 0
	var c: Char
	var pos = 0
	while cnt != loops do
		pos = 0
		while pos < x.length do
			c = x[pos]
			pos += 1
		end
		cnt += 1
	end
end

var opts = new OptionContext
var mode = new OptionEnum(["string", "buffer"], "Mode", -1, "-m")
var access_mode = new OptionEnum(["iterator", "index"], "Iteration mode", -1, "--iter-mode")
var loops = new OptionInt("Number of loops to be done", -1, "--loops")
var strlen = new OptionInt("Length of the base string", -1, "--strlen")
opts.add_option(mode, loops, strlen, access_mode)

opts.parse(args)

if loops.value == -1 or strlen.value == -1 then
	opts.usage
	exit(-1)
end

var modval = mode.value
var iterval = access_mode.value

if modval == 0 then
	if iterval == 0 then
		bench_string_iter(loops.value, strlen.value)
	else if iterval == 1 then
		bench_string_index(loops.value, strlen.value)
	else
		opts.usage
		exit(-1)
	end
else if modval == 1 then
	if iterval == 0 then
		bench_buffer_iter(loops.value, strlen.value)
	else if iterval == 1 then
		bench_buffer_index(loops.value, strlen.value)
	else
		opts.usage
		exit(-1)
	end
else
	opts.usage
	exit(-1)
end
