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

import nitsmell_toolcontext
import semantize

import codesmells_metrics
# For force nit to do the good linéarisation to remove the toolcontext redef warning
redef class ToolContext
     redef init do super
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: nitsmells [OPTION]... <file.nit>...\n Computes code smells on Nit programs."
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
print "*** CODE SMELLS METRICS ***"
toolcontext.run_global_phases(mmodules)
