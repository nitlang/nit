# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Helpers for various statistics tools.
module stats_base

import modelbuilder

redef class ToolContext
	var opt_dir = new OptionString("Directory where some statistics files are generated", "-d", "--dir")
	var output_dir: String = "."

	redef init
	do
		super
		self.option_context.add_option(opt_dir)
	end

	redef fun process_options
	do
		super
		var val = self.opt_dir.value
		if val != null then
			val = val.simplify_path
			val.mkdir
			self.output_dir = val
		end
	end
end

# A counter counts occurence of things
# Use this instead of a HashMap[E, Int]
class Counter[E: Object]
	# Total number of counted occurences
	var total: Int = 0

	private var map = new HashMap[E, Int]

	# The number of counted occurences of `e'
	fun [](e: E): Int
	do
		var map = self.map
		if map.has_key(e) then return map[e]
		return 0
	end

	# Count one more occurence of `e'
	fun inc(e: E)
	do
		self.map[e] = self[e] + 1
		total += 1
	end

	# Return an array of elements sorted by occurences
	fun sort: Array[E]
	do
		var res = map.keys.to_a
		var sorter = new CounterSorter[E](self)
		sorter.sort(res)
		#res.sort !cmp a, b = map[a] <=> map[b]
		return res
	end
end

private class CounterSorter[E: Object]
	super AbstractSorter[E]
	var counter: Counter[E]
	redef fun compare(a,b) do return self.counter.map[a] <=> self.counter.map[b]
end

# Helper function to display n/d and handle division by 0
fun div(n: Int, d: Int): String
do
	if d == 0 then return "na"
	return ((100*n/d).to_f/100.0).to_precision(2)
end
