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

class TypeTestDepthGenerator
	super Generator

	redef fun initnit(res)
	do
		for c in classes do
			res.add "new {c}[Root]"
		end
	end

	redef fun initjava(res, interfaces)
	do

		var tagc = ""
		if interfaces then tagc = "X"
		for c in classes do
			res.add "new {tagc}{c}<Root>()"
		end
	end

	redef fun initcsharp(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		for c in classes do
			res.add "new {tagc}{c}<Root>()"
		end
	end

	redef fun initscala(res, interfaces)
	do
		var tagc = ""
		if interfaces then tagc = "X"
		for c in classes do
			res.add "new {tagc}{c}[Root]()"
		end
	end

	redef fun initcpp(res)
	do
		for c in classes do
			res.add "new {c}<Root>()"
		end
	end

	redef fun inite(res, se)
	do
		for c in classes do
			res.add "create \{{c}[ROOT]\}"
		end
	end

	redef fun initpython(res)
	do
		for c in classes do
			res.add "{c}()"
		end
	end
end

var g = new TypeTestDepthGenerator
g.dry = true
g.genall
