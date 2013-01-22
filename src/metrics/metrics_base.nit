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
module metrics_base

import modelbuilder

redef class ToolContext

	# --all
	var opt_all = new OptionBool("Compute all metrics", "--all")

	# --inheritance
	var opt_inheritance = new OptionBool("Compute metrics about inheritance usage", "--inheritance")
	# --genericity
	var opt_refinement = new OptionBool("Compute metrics about refinement usage", "--refinement")
	# --self
	var opt_self = new OptionBool("Compute metrics about the usage of explicit and implicit self", "--self")
	# --nullables
	var opt_nullables = new OptionBool("Compute metrics on nullables send", "--nullables")
	# --static-types
	var opt_static_types = new OptionBool("Compute explicit static types metrics", "--static-types")
	# --tables
	var opt_tables = new OptionBool("Compute tables metrics", "--tables")
	# --rta
	var opt_rta = new OptionBool("Compute RTA metrics", "--rta")
	# --generate-csv
	var opt_generate_csv = new OptionBool("Generate CVS format metrics", "--generate-csv")
	# --generate_hyperdoc
	var opt_generate_hyperdoc = new OptionBool("Generate Hyperdoc", "--generate_hyperdoc")

	var opt_dir = new OptionString("Directory where some statistics files are generated", "-d", "--dir")
	var output_dir: String = "."

	redef init
	do
		super
		self.option_context.add_option(opt_all)
		self.option_context.add_option(opt_inheritance)
		self.option_context.add_option(opt_refinement)
		self.option_context.add_option(opt_self)
		self.option_context.add_option(opt_nullables)
		self.option_context.add_option(opt_static_types)
		self.option_context.add_option(opt_tables)
		self.option_context.add_option(opt_rta)
		self.option_context.add_option(opt_generate_csv)
		self.option_context.add_option(opt_generate_hyperdoc)
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

redef class Model

	# List of modules in std lib
	# FIXME this is quite ugly, find a dynamic way...
	fun std_modules: Set[String] do
		if self.std_modules_cache == null then
			self.std_modules_cache = new HashSet[String]
			self.std_modules_cache.add("collection")
			self.std_modules_cache.add("abstract_collection")
			self.std_modules_cache.add("array")
			self.std_modules_cache.add("hash_collection")
			self.std_modules_cache.add("list")
			self.std_modules_cache.add("range")
			self.std_modules_cache.add("sorter")
			self.std_modules_cache.add("environ")
			self.std_modules_cache.add("exec")
			self.std_modules_cache.add("file")
			self.std_modules_cache.add("gc")
			self.std_modules_cache.add("hash")
			self.std_modules_cache.add("kernel")
			self.std_modules_cache.add("math")
			self.std_modules_cache.add("standard")
			self.std_modules_cache.add("stream")
			self.std_modules_cache.add("string")
			self.std_modules_cache.add("string_search")
			self.std_modules_cache.add("time")
		end
		return self.std_modules_cache.as(not null)
	end
	private var std_modules_cache: nullable Set[String]
end

redef class MClass
	fun is_class: Bool do
		return self.kind == concrete_kind or self.kind == abstract_kind
	end

	fun is_interface: Bool do
		return self.kind == interface_kind
	end

	fun is_enum: Bool do
		return self.kind == enum_kind
	end

	fun is_abstract: Bool do
		return self.kind == abstract_kind
	end

	fun is_user_defined: Bool do
		return self.intro_mmodule.is_user_defined
	end
end

redef class MModule
	fun is_user_defined: Bool do
		return not self.model.std_modules.has(self.name)
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

# Helper class to output metrics as CVS formatted files
class CSVDocument
	private var file: String
	private var header: Array[String] = new Array[String]
	private var lines: Array[Array[String]] = new Array[Array[String]]

	init(file: String) do self.file = file

	fun set_header(values: Object...) do
		header.clear
		for value in values do header.add(value.to_s)
	end

	fun add_line(values: Object...) do
		if values.length != header.length then
			print "CSV error: header declares {header.length} columns, line contains {values.length} values"
			abort
		end
		var line = new Array[String]
		for value in values do line.add(value.to_s)
		lines.add(line)
	end

	redef fun to_s do
		var str = header.join(";") + "\n"
		for line in lines do str += line.join(";") + "\n"
		return str
	end

	fun save do
		var out = new OFStream.open(self.file)
		out.write(self.to_s)
		out.close
	end
end

# Helper function to display n/d and handle division by 0
fun div(n: Int, d: Int): String
do
	if d == 0 then return "na"
	return ((100*n/d).to_f/100.0).to_precision(2)
end
