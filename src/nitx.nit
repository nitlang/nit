# This file is part of NIT ( http://www.nitlanguage.org ).
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

# `nitx`, a command tool that displays useful data about Nit code
#
# Features:
#
# * Display documentation from name/namespace
# * Find type usage in parameters, returns and news.
# * Find usage (calls) of a specific property.
# * Find source code related to class/property by its name.
# * Display inheritance lists
module nitx

import frontend
import doc::term
import prompt

redef class ToolContext

	# Used to shortcut the prompt and display directly the result in console.
	var opt_command = new OptionString("Nitx command to perform", "-c", "--command")

	# Compute and use the catalog
	var opt_catalog = new OptionBool("Use catalog", "--catalog")

	init do option_context.add_option(opt_command, opt_catalog)
end

# Nitx handles console queries
#
# Using `prompt`, the command line can be turned on an interactive tool.
class Nitx

	# Model that contains the informations to display
	var model: Model

	# Mainmodule for class linearization
	var mainmodule: MModule

	# ModelBuilder to access AST nodes
	var modelbuilder: ModelBuilder

	# Catalog if any
	var catalog: nullable Catalog = null is optional

	# Do not use colors in the output
	var no_color = false is optional

	# Displays the welcome message and start prompt.
	fun start do
		welcome
		prompt
	end

	# Displays the welcome message and the list of loaded modules.
	fun welcome do
		print "Welcome in the Nit Index!"
		print ""
		print "Loaded packages:\n"
		var cmd = new CmdModelEntities(model, kind = "packages")
		cmd.init_command
		for mpackage in cmd.results.as(not null) do
			print " * {mpackage.full_name}"
		end
		help
	end

	# Displays the list of available queries.
	fun help do
		# TODO automatize that
		print "\nCommands:\n"
		for usage, doc in parser.commands_usage do
			var l = usage.length / 8
			print "\t{usage}{"\t" * (3 - l)}{doc}"
		end
		print "\n"
		print "\t:h\t\t\tdisplay this help message"
		print "\t:q\t\t\tquit interactive mode"
		print ""
	end

	# Prompts the user for a query.
	fun prompt do
		var line = sys.prompt(">> ", true)
		if line != null then
			do_command(line)
		else
			# EOF
			exit 0
		end
		prompt
	end

	# Parser used to process doc commands
	var parser = new CommandParser(model, mainmodule, modelbuilder, catalog) is lazy

	# Processes the query string and performs it.
	fun do_command(str: String) do
		if str == ":q" then
			exit 0
		else if str == ":h" then
			help
			return
		end
		parser.execute(str, no_color)
	end
end

redef class Catalog
	# Build the catalog for Nitx
	private fun build_catalog(model: Model, filter: nullable ModelFilter) do
		# Scan all modules of collected packages
		for p in model.collect_mpackages(filter) do
			var g = p.root
			assert g != null
			modelbuilder.scan_group(g)
		end
		# Build the catalog
		for mpackage in model.collect_mpackages(filter) do
			package_page(mpackage)
			git_info(mpackage)
			mpackage_stats(mpackage)
		end
	end
end

# build toolcontext
var toolcontext = new ToolContext
var tpl = new Template
tpl.add "Usage: nitx [OPTION]... <file.nit>... [query]\n"
tpl.add "Displays pieces of API information from Nit source files."
toolcontext.tooldescription = tpl.write_to_string

# process options
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# build model
var model = new Model
var mbuilder = new ModelBuilder(model, toolcontext)
var mmodules = mbuilder.parse_full(arguments)

# process
if mmodules.is_empty then return
mbuilder.run_phases
toolcontext.run_global_phases(mmodules)
var mainmodule = toolcontext.make_main_module(mmodules)

# build views
var catalog = null
if toolcontext.opt_catalog.value then
	catalog = new Catalog(mbuilder)
	catalog.build_catalog(model)
end

# start nitx
var nitx = new Nitx(model, mainmodule, mbuilder, catalog, toolcontext.opt_no_color.value)
var q = toolcontext.opt_command.value
if q != null then # shortcut prompt
	print ""
	nitx.do_command(q)
	return
end
nitx.start
