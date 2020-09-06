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

# A naive Nit interpreter
module nit

import interpreter
import frontend::code_gen
import parser_util
import vm

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.option_context.options_before_rest = true
toolcontext.tooldescription = "Usage: nit [OPTION]... <file.nit>...\nInterprets and debugs Nit programs."
# Add an option "-o" to enable compatibility with the tests.sh script
var opt = new OptionString("Does nothing. Used for compatibility.", "-o")
opt.hidden = true
toolcontext.option_context.add_option(opt)
var opt_eval = new OptionBool("Specifies the program from command-line", "-e")
var opt_loop = new OptionBool("Repeatedly run the program for each line in file-name arguments", "-n")
var opt_vm = new OptionBool("Run the virtual machine instead of the naive interpreter (experimental)", "--vm")
toolcontext.option_context.add_option(opt_eval, opt_loop, opt_vm)
# We do not add other options, so process them now!
toolcontext.process_options(args)

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

var arguments = toolcontext.option_context.rest
var progname = arguments.first

# Here we load an process all modules passed on the command line
var mmodules: Array[MModule]

if opt_eval.value then
	var amodule = toolcontext.parse_module(progname)
	toolcontext.check_errors

	var parent = null
	if opt_loop.value then
		parent = modelbuilder.get_mmodule_by_name(null, null, "niti_runtime")
		if parent == null then
			toolcontext.check_errors
			abort
		end
	end

	modelbuilder.load_rt_module(parent, amodule, "-")

	mmodules = [amodule.mmodule.as(not null)]
else if progname == "-" then
	var content = stdin.read_all
	var amodule = toolcontext.parse_module(content)
	toolcontext.check_errors
	modelbuilder.load_rt_module(null, amodule, "-")
	mmodules = [amodule.mmodule.as(not null)]
else
	mmodules = modelbuilder.parse([progname])
end

modelbuilder.run_phases
toolcontext.run_global_phases(modelbuilder.parsed_modules)

if toolcontext.opt_only_metamodel.value then toolcontext.quit

var mainmodule = toolcontext.make_main_module(mmodules)

var self_mm = mainmodule
var self_args = arguments

if opt_vm.value then
	modelbuilder.run_virtual_machine(self_mm, self_args)
else
	modelbuilder.run_naive_interpreter(self_mm, self_args)
end

