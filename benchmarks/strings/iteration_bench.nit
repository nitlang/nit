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
module iteration_bench

import opts
intrude import standard::text::ropes

redef class Concat
	redef fun +(o) do
		var s = o.to_s
		return new Concat(self, s)
	end
end

redef class FlatString
	redef fun +(o) do
		var s = o.to_s
		var b = new FlatBuffer.with_capacity(length + s.length)
		b.append self
		for i in s.substrings do b.append i
		return b.to_s
	end
end

fun bench_flatstr_iter(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	a = a * nb_cct
	var cnt = 0
	var c: Char
	while cnt != loops do
		for i in a do
			c = i
		end
		cnt += 1
	end
end

fun bench_flatstr_index(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	a = a * nb_cct
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

fun bench_ropestr_iter(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x: String = new Concat(a, a)
	for i in [2 .. nb_cct[ do x = new Concat(x, a)
	var cnt = 0
	var c: Char
	while cnt != loops do
		for i in x do
			c = i
		end
		cnt += 1
	end
end

fun bench_ropestr_index(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x: String = new Concat(a, a)
	for i in [2 .. nb_cct[ do x = new Concat(x, a)
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

fun bench_flatbuf_iter(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	a = a * nb_cct
	var x = new FlatBuffer.from(a)
	var cnt = 0
	var c: Char
	while cnt != loops do
		for i in x do
			c = i
		end
		cnt += 1
	end
end

fun bench_flatbuf_index(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	a = a * nb_cct
	var x = new FlatBuffer.from(a)
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

fun bench_ropebuf_iter(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x = new RopeBuffer.from(a)
	for i in [0 .. nb_cct[ do x.append a
	var cnt = 0
	var c: Char
	while cnt != loops do
		for i in x do
			c = i
		end
		cnt += 1
	end
end

fun bench_ropebuf_index(nb_cct: Int, loops: Int, strlen: Int)
do
	var a = "a" * strlen
	var x = new RopeBuffer.from(a)
	for i in [0 .. nb_cct[ do x.append a
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
var mode = new OptionEnum(["flatstr", "flatbuf", "ropestr", "ropebuf"], "Mode", -1, "-m")
var access_mode = new OptionEnum(["iterator", "index"], "Iteration mode", -1, "--iter-mode")
var nb_ccts = new OptionInt("Number of concatenations done to the string (in the case of the rope, this will increase its depth)", -1, "--ccts")
var loops = new OptionInt("Number of loops to be done", -1, "--loops")
var strlen = new OptionInt("Length of the base string", -1, "--strlen")
opts.add_option(mode, nb_ccts, loops, strlen, access_mode)

opts.parse(args)

if nb_ccts.value == -1 or loops.value == -1 or strlen.value == -1 then
	opts.usage
	exit(-1)
end

var modval = mode.value
var iterval = access_mode.value

if modval == 0 then
	if iterval == 0 then
		bench_flatstr_iter(nb_ccts.value, loops.value, strlen.value)
	else if iterval == 1 then
		bench_flatstr_index(nb_ccts.value, loops.value, strlen.value)
	else
		opts.usage
		exit(-1)
	end
else if modval == 1 then
	if iterval == 0 then
		bench_flatbuf_iter(nb_ccts.value, loops.value, strlen.value)
	else if iterval == 1 then
		bench_flatbuf_index(nb_ccts.value, loops.value, strlen.value)
	else
		opts.usage
		exit(-1)
	end
else if modval == 2 then
	if iterval == 0 then
		bench_ropestr_iter(nb_ccts.value, loops.value, strlen.value)
	else if iterval == 1 then
		bench_ropestr_index(nb_ccts.value, loops.value, strlen.value)
	else
		opts.usage
		exit(-1)
	end
else if modval == 3 then
	if iterval == 0 then
		bench_ropebuf_iter(nb_ccts.value, loops.value, strlen.value)
	else if iterval == 1 then
		bench_ropebuf_index(nb_ccts.value, loops.value, strlen.value)
	else
		opts.usage
		exit(-1)
	end
else
	opts.usage
	exit(-1)
end
