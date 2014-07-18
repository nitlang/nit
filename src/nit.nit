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

import naive_interpreter
import debugger
import debugger_socket

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: nit [OPTION]... <file.nit>...\nInterprets and debbugs Nit programs."
# Add an option "-o" to enable compatibilit with the tests.sh script
var opt = new OptionString("compatibility (does noting)", "-o")
toolcontext.option_context.add_option(opt)
var opt_mixins = new OptionArray("Additionals module to min-in", "-m")
toolcontext.option_context.add_option(opt_mixins)
# We do not add other options, so process them now!
toolcontext.process_options(args)

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

var arguments = toolcontext.option_context.rest
var progname = arguments.first

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse([progname])
mmodules.add_all modelbuilder.parse(opt_mixins.value)
modelbuilder.run_phases

if toolcontext.opt_only_metamodel.value then exit(0)

var mainmodule: nullable MModule

# Here we launch the interpreter on the main module
if mmodules.length == 1 then
	mainmodule = mmodules.first
else
	mainmodule = new MModule(model, null, mmodules.first.name, mmodules.first.location)
	mainmodule.set_imported_mmodules(mmodules)
end

var self_mm = mainmodule
var self_args = arguments

if toolcontext.opt_debugger_autorun.value then
	modelbuilder.run_debugger_autorun(self_mm, self_args)
else if toolcontext.opt_debugger_mode.value then
	modelbuilder.run_debugger(self_mm, self_args)
else
	modelbuilder.run_naive_interpreter(self_mm, self_args)
end

