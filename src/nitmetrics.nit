# This file is part of NIT ( https://nitlanguage.org ).
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

# A program that collects various metrics on nit programs and libraries
module nitmetrics

import frontend::code_gen
import metrics

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: nitmetrics [OPTION]... <file.nit>...\nComputes various metrics on Nit programs."

# We do not add other options, so process them now!
toolcontext.process_options(args)

# Get arguments
var arguments = toolcontext.option_context.rest

# We need a model to collect stuff
var model = new Model
# And a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse_full(arguments)
modelbuilder.run_phases

print "*** METRICS ***"

toolcontext.run_global_phases(mmodules)
