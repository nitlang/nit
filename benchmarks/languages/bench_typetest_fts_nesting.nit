#!/usr/bin/env nit

import bench_base

class TypeTestFtsNestingGenerator
	super Generator

	fun clanit(i: Int): String
	do
		var s = new FlatBuffer
		s.append("{classes.first}[" * i)
		s.append("Root")
		s.append("]" * i)
		return s.to_s
	end

	redef fun initnit(res)
	do
		for i in [1..dept] do
			res.add "new {clanit(i)}"
		end

	end

	redef fun testnit
	do
		return "a isa {clanit(middle)}"
	end

	fun clajava(i: Int): String
	do
		var s = new FlatBuffer
		s.append("{classes.first}<" * i)
		s.append("Root")
		s.append(">" * i)
		return s.to_s
	end

	redef fun initjava(res, interfaces)
	do

		var tagc = ""
		if interfaces then tagc = "X"
		for i in [1..dept] do
			res.add "new {tagc}{clajava(i)}()"
		end
	end

	redef fun testjava(interfaces)
	do
		return "a instanceof {classes.first}<?>"
	end

	redef fun initcsharp(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		for i in [1..dept] do
			res.add "new {tagc}{clajava(i)}()"
		end
	end

	redef fun testcsharp(interfaces)
	do
		return "a is {clajava(middle)}"
	end

	redef fun initscala(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		for i in [1..dept] do
			res.add "new {tagc}{clanit(i)}()"
		end
	end

	redef fun testscala(interfaces)
	do
		return "a.isInstanceOf[{clanit(middle)}]"
	end

	fun clacpp(i: Int): String
	do
		var s = new FlatBuffer
		s.append("{classes.first}<" * i)
		s.append("Root")
		s.append("*>" * i)
		return s.to_s
	end

	redef fun initcpp(res)
	do
		for i in [1..dept] do
			res.add "new {clacpp(i)}()"
		end
	end

	redef fun testcpp
	do
		write "\t\t\t{clacpp(middle)} *to = dynamic_cast<{clacpp(middle)}*>(a);"
		return "to != 0"
	end

	fun clae(i: Int): String
	do
		var s = new FlatBuffer
		s.append("{classes.first}[" * i)
		s.append("ROOT")
		s.append("]" * i)
		return s.to_s
	end

	redef fun inite(res, se)
	do
		for i in [1..dept] do
			res.add "create \{{clae(i)}\} a"
		end
	end

	redef fun teste(se)
	do
		write "\t\t\t\t\tto ?= a"
		return "to /= Void"
	end

	redef fun locale(se)
	do
		write "\t\t\tto: {clae(middle)}"
	end
end

var g = new TypeTestFtsNestingGenerator
g.genall
