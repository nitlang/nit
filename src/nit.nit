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

import modelbuilder
import exprbuilder
import naive_interpreter
#import interpretor_type_test

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
# Add an option "-o" to enable compatibilit with the tests.sh script
var opt = new OptionString("compatibility (does noting)", "-o")
toolcontext.option_context.add_option(opt)
# We do not add other options, so process them now!
toolcontext.process_options

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

var arguments = toolcontext.option_context.rest
if arguments.is_empty or toolcontext.opt_help.value then
	toolcontext.option_context.usage
	return
end
var progname = arguments.first

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse_and_build([progname])
modelbuilder.full_propdef_semantic_analysis

if toolcontext.opt_only_metamodel.value then exit(0)

# Here we launch the interpreter on the main module
assert mmodules.length == 1
var mainmodule = mmodules.first
modelbuilder.run_naive_interpreter(mainmodule, arguments)
