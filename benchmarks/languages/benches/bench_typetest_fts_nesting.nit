#!/usr/bin/env nit
# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import bench_base

class TypeTestFtsNestingGenerator
	super Generator

	fun clanit(i: Int): String
	do
		var s = new FlatBuffer
		s.append("{classes[i]}[")
		s.append("{classes.first}[" * (dept-1))
		s.append("Root")
		s.append("]" * dept)
		return s.to_s
	end

	redef fun initnit(res)
	do
		for i in [0..dept[ do
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
		s.append("{classes[i]}<")
		s.append("{classes.first}<" * (dept-1))
		s.append("Root")
		s.append(">" * dept)
		return s.to_s
	end

	redef fun initcsharp(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		for i in [0..dept[ do
			res.add "new {tagc}{clajava(i)}()"
		end
	end

	redef fun testcsharp(interfaces)
	do
		return "a is {clajava(middle)}"
	end

	fun clacpp(i: Int): String
	do
		var s = new FlatBuffer
		s.append("{classes[i]}<")
		s.append("{classes.first}<" * (dept-1))
		s.append("Root")
		s.append("*>" * dept)
		return s.to_s
	end

	redef fun initcpp(res)
	do
		for i in [0..dept[ do
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
		s.append("{classes[i]}[")
		s.append("{classes.first}[" * (dept-1))
		s.append("ROOT")
		s.append("]" * dept)
		return s.to_s
	end

	redef fun inite(res, se)
	do
		for i in [0..dept[ do
			res.add "create \{{clae(i)}\}"
		end
	end

	redef fun teste(se)
	do
		write "\t\t\t\t\tto ?= a"
		return "to /= Void"
	end

	redef fun locale(se)
	do
		write "\t\t\tto: detachable {clae(middle)}"
	end
end

var g = new TypeTestFtsNestingGenerator
g.genall
