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

# The Nit virtual machine launcher
module nitvm

import vm
import frontend::code_gen

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: nitvm [OPTION]... <file.nit>...\nExecutes Nit programs with a virtual machine."
# Add an option "-o" to enable compatibility with the tests.sh script
var opt = new OptionString("compatibility (does nothing)", "-o")
toolcontext.option_context.add_option(opt)
var opt_mixins = new OptionArray("Additional modules to min-in", "-m")
toolcontext.option_context.add_option(opt_mixins)
# We do not add other options, so process them now!
toolcontext.process_options(args)

# We need a model to collect stufs
var model = new Model

# Add a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

var arguments = toolcontext.option_context.rest
var progname = arguments.first

# Here we load and process all modules passed on the command line
var mmodules = modelbuilder.parse([progname])
mmodules.add_all modelbuilder.parse(opt_mixins.value)
modelbuilder.run_phases

if toolcontext.opt_only_metamodel.value then toolcontext.quit

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

modelbuilder.run_virtual_machine(self_mm, self_args)
