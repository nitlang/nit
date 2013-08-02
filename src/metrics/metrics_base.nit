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

import model_utils
import csv
import counter

redef class ToolContext

	# --all
	var opt_all = new OptionBool("Compute all metrics", "--all")

	# --inheritance
	var opt_inheritance = new OptionBool("Compute metrics about inheritance usage", "--inheritance")
	# --genericity
	var opt_refinement = new OptionBool("Compute metrics about refinement usage", "--refinement")
	# --self
	var opt_self = new OptionBool("Compute metrics about the usage of explicit and implicit self", "--self")
	# --ast
	var opt_ast = new OptionBool("Compute metrics about the usage of nodes and identifiers in the AST", "--ast")
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
	# --poset
	var opt_poset = new OptionBool("Complete metrics on posets", "--poset")

	var opt_dir = new OptionString("Directory where some statistics files are generated", "-d", "--dir")
	var output_dir: String = "."

	redef init
	do
		super
		self.option_context.add_option(opt_all)
		self.option_context.add_option(opt_inheritance)
		self.option_context.add_option(opt_refinement)
		self.option_context.add_option(opt_self)
		self.option_context.add_option(opt_ast)
		self.option_context.add_option(opt_nullables)
		self.option_context.add_option(opt_static_types)
		self.option_context.add_option(opt_tables)
		self.option_context.add_option(opt_rta)
		self.option_context.add_option(opt_generate_csv)
		self.option_context.add_option(opt_generate_hyperdoc)
		self.option_context.add_option(opt_poset)
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
	fun is_user_defined: Bool do
		return self.intro_mmodule.is_user_defined
	end
end

redef class MModule
	fun is_user_defined: Bool do
		return not self.model.std_modules.has(self.name)
	end
end
