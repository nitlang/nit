#!/usr/bin/env nit

import bench_base
import pipeline

class TypeTestDepthNotGenerator
	super Generator

	redef fun initnit(res)
	do
		res.add "new {classes.last}[Root]"
		for c in classes.skip_tail(1) do
			res.add "new {c}[Root]"
		end
	end

	redef fun testnit
	do
		return "not a isa {classes.last}[Root]"
	end

	redef fun initjava(res, interfaces)
	do

		var tagc = ""
		if interfaces then tagc = "X"
		res.add "new {tagc}{classes.last}<Root>()"
		for c in classes.skip_tail(1) do
			res.add "new {tagc}{c}<Root>()"
		end
	end

	redef fun testjava(interfaces)
	do
		return "!(a instanceof {classes.last})"
	end

	redef fun initcsharp(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		res.add "new {tagc}{classes.last}<Root>()"
		for c in classes.skip_tail(1) do
			res.add "new {tagc}{c}<Root>()"
		end
	end

	redef fun testcsharp(interfaces)
	do
		return "!(a is {classes.last}<Root>)"
	end

	redef fun initscala(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		res.add "new {tagc}{classes.last}[Root]()"
		for c in classes.skip_tail(1) do
			res.add "new {tagc}{c}[Root]()"
		end
	end

	redef fun testscala(interfaces)
	do
		return "!a.isInstanceOf[{classes.last}[Root]]"
	end

	redef fun initcpp(res)
	do
		res.add "new {classes.last}<Root>()"
		for c in classes.skip_tail(1) do
			res.add "new {c}<Root>()"
		end
	end

	redef fun testcpp
	do
		write "\t\t\t{classes.last}<Root> *to = dynamic_cast<{classes.last}<Root>*>(a);"
		return "to == 0"
	end

	redef fun inite(res, se)
	do
		res.add "create \{{classes.last}[ROOT]\} a"
		for c in classes.skip_tail(1) do
			res.add "create \{{c}[ROOT]\} a"
		end
	end

	redef fun teste(se)
	do
		write "\t\t\t\t\tto ?= a"
		return "to = Void"
	end

	redef fun locale(se)
	do
		write "\t\t\tto: {classes.last}[ROOT]"
	end
end

var g = new TypeTestDepthNotGenerator
g.genall
