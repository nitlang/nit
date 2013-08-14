# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Lucas Bajolet <lucas.bajolet@hotmail.com>
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

module nitdbg_commons

import modelbuilder
import frontend
import transform

class InterpretCommons

	var model: nullable Model
	var modelbuilder: nullable ModelBuilder
	var toolcontext: nullable ToolContext
	var mainmodule: nullable MModule
	var arguments: nullable Array[String]

	init
	do
	end

	fun launch
	do
		# Create a tool context to handle options and paths
		toolcontext = new ToolContext
		# Add an option "-o" to enable compatibilit with the tests.sh script
		var opt = new OptionString("compatibility (does noting)", "-o")
		toolcontext.option_context.add_option(opt)
		# We do not add other options, so process them now!
		toolcontext.process_options
		
		# We need a model to collect stufs
		model = new Model
		# An a model builder to parse files
		modelbuilder = new ModelBuilder(model.as(not null), toolcontext.as(not null))
		
		arguments = toolcontext.option_context.rest
		if arguments.is_empty or toolcontext.opt_help.value then
			toolcontext.option_context.usage
			exit(0)
		end
		var progname = arguments.first
		
		# Here we load an process all modules passed on the command line
		var mmodules = modelbuilder.parse([progname])
		modelbuilder.run_phases
		
		if toolcontext.opt_only_metamodel.value then exit(0)
		
		# Here we launch the interpreter on the main module
		assert mmodules.length == 1
		mainmodule = mmodules.first
	end

end
