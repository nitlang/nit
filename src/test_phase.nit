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

# Stub for loading a runing phases on a bunch of modules
#
# The point is to refine this module is executable that does things.
# One simple way is to use the `-m` option of engines plug various phases.
module test_phase

import modelbuilder

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
# We do not add other options, so process them now!
toolcontext.process_options

# Get arguments
var arguments = toolcontext.option_context.rest
if arguments.is_empty or toolcontext.opt_help.value then
	toolcontext.option_context.usage
	return
end

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse(arguments)
modelbuilder.run_phases

if mmodules.length == 0 then
	return
end

var mainmodule: MModule
if mmodules.length == 1 then
	mainmodule = mmodules.first
else
	# We need a main module, so we build it by importing all modules
	mainmodule = new MModule(model, null, "<main>", new Location(null, 0, 0, 0, 0))
	mainmodule.set_imported_mmodules(mmodules)
end

toolcontext.run_global_phases(mainmodule)
