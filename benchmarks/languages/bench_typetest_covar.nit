#!/usr/bin/env nit

import bench_base

class TypeTestCovarGenerator
	super Generator

	redef fun initnit(res)
	do
		for c in classes do
			res.add "new {classes.first}[{c}[Root]]"
		end

	end

	redef fun testnit
	do
		return "a isa {classes.first}[{classes[middle]}[Root]]"
	end

	redef fun initjava(res, interfaces)
	do

		var tagc = ""
		if interfaces then tagc = "X"
		for c in classes do
			res.add "new {tagc}{classes.first}<{c}<Root>>()"
		end
	end

	redef fun testjava(interfaces)
	do
		return "a instanceof {classes.first}"
	end

	redef fun initcsharp(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		for c in classes do
			res.add "new {tagc}{classes.first}<{c}<Root>>()"
		end
	end

	redef fun testcsharp(interfaces)
	do
		return "a is {classes.first}<{classes[middle]}<Root>>"
	end

	redef fun initscala(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		for c in classes do
			res.add "new {tagc}{classes.first}[{c}[Root]]()"
		end
	end

	redef fun testscala(interfaces)
	do
		return "a.isInstanceOf[{classes.first}[{classes[middle]}[Root]]]"
	end

	redef fun initcpp(res)
	do
		for c in classes do
			res.add "new {classes.first}<{c}<Root>*>()"
		end
	end

	redef fun testcpp
	do
		write "\t\t\t{classes.first}<{classes[middle]}<Root>*> *to = dynamic_cast<{classes.first}<{classes[middle]}<Root>*>*>(a);"
		return "to != 0"
	end

	redef fun inite(res, se)
	do
		for c in classes do
			res.add "create \{{classes.first}[{c}[ROOT]]\} a"
		end
	end

	redef fun teste(se)
	do
		write "\t\t\t\t\tto ?= a"
		return "to /= Void"
	end

	redef fun locale(se)
	do
		write "\t\t\tto: {classes.first}[{classes[middle]}[ROOT]]"
	end
end

var g = new TypeTestCovarGenerator
g.genall
