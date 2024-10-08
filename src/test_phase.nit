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

# Stub for loading a runing phases on a bunch of modules
#
# The point is to refine this module in executable that does things.
# One simple way is to use the `-m` option of engines to plug various phases.
#
# One other way is to redefine `do_work`. See `test_test_phase.nit`.
module test_phase

import modelbuilder

redef class ToolContext
	var default_phase = new DefaultPhase(self, null)
end

# Empty phase that delegates `process_mainmodule` to the global `do_work`.
class DefaultPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules) do
		do_work(mainmodule, given_mmodules, toolcontext.modelbuilder)
	end
end

# Easy entry point to prototype a specific work or proof-of-concept.
#
# Complex or mature work should use the full `phase` framework to enable
# combination and orcherstration of works.
#
# * `mainmodule` is the bottom main module (possibly implicit).
# * `given_mmodules` is the exact list of module from the command line.
# * `modelbuilder` is the context that contains a lot of things.
#
# @toimplement
fun do_work(mainmodule: MModule, given_mmodules: SequenceRead[MModule], modelbuilder: ModelBuilder) do end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: [OPTION]... <file.nit>..."

# We do not add other options, so process them now!
toolcontext.process_options(args)

# Get arguments
var arguments = toolcontext.option_context.rest

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse_full(arguments)
modelbuilder.run_phases
toolcontext.run_global_phases(mmodules)
