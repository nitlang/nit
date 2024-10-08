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

# Compile Nit into Java code runnable on the Java Virtual Machine.
module nitj

import compiler::java_compiler

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.process_options(args)

# We need a model to collect stufs
var model = new Model
# And a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

# Collect arguments
var arguments = toolcontext.option_context.rest
if arguments.is_empty then
	toolcontext.option_context.usage
	return
end
if arguments.length > 1 then
	print "Too much arguments: {arguments.join(" ")}"
	toolcontext.option_context.usage
	return
end
var progname = arguments.first

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse([progname])

if mmodules.is_empty then return
modelbuilder.run_phases

var mainmodule
if mmodules.length == 1 then
	mainmodule = mmodules.first
else
	mainmodule = new MModule(model, null, mmodules.first.name, mmodules.first.location)
	mainmodule.set_imported_mmodules(mmodules)
end

var analysis = modelbuilder.do_rapid_type_analysis(mainmodule)

# Do compilation
modelbuilder.run_java_compiler(mainmodule, analysis)
