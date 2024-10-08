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

	redef fun inite(res, se)
	do
		for c in classes do
			res.add "create \{{classes.first}[{c}[ROOT]]\}"
		end
	end

	redef fun teste(se)
	do
		write "\t\t\t\t\tto ?= a"
		return "to /= Void"
	end

	redef fun locale(se)
	do
		write "\t\t\tto: detachable {classes.first}[{classes[middle]}[ROOT]]"
	end
end

var g = new TypeTestCovarGenerator
g.genall
