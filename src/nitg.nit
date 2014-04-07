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

# A global Nit compiler
module nitg

import modelbuilder
import frontend
import transform
import rapid_type_analysis
import global_compiler
import separate_erasure_compiler
import separate_compiler
import android_platform
import compiler_ffi

# Create a tool context to handle options and paths
var toolcontext = new ToolContext

# Create a new option for --global
var opt_global = new OptionBool("Use global compilation", "--global")
var opt_rta = new OptionBool("Activate RTA (implicit with --global and --separate)", "--rta")
toolcontext.option_context.add_option(opt_global, opt_rta)

var opt_mixins = new OptionArray("Additionals module to min-in", "-m")
toolcontext.option_context.add_option(opt_mixins)

toolcontext.tooldescription = "Usage: nitg [OPTION]... file.nit\nCompiles Nit programs."

# We do not add other options, so process them now!
toolcontext.process_options(args)

# We need a model to collect stufs
var model = new Model
# An a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

var arguments = toolcontext.option_context.rest
if arguments.length > 1 then
	print "Too much arguments: {arguments.join(" ")}"
	print toolcontext.tooldescription
	exit 1
end
var progname = arguments.first

# Here we load an process all modules passed on the command line
var mmodules = modelbuilder.parse([progname])
mmodules.add_all modelbuilder.parse(opt_mixins.value)

if mmodules.is_empty then return
modelbuilder.run_phases

var mainmodule
if mmodules.length == 1 then
	mainmodule = mmodules.first
else
	mainmodule = new MModule(model, null, mmodules.first.name, mmodules.first.location)
	mainmodule.set_imported_mmodules(mmodules)
end

var platform = mainmodule.target_platform
if platform != null and not platform.supports_libunwind then
	if toolcontext.opt_stacktrace.value == null then toolcontext.opt_stacktrace.value = "none" # default is none
end

if toolcontext.opt_erasure.value then
	var analysis
	if opt_rta.value then
		analysis = modelbuilder.do_rapid_type_analysis(mainmodule)
	else
		analysis = null
	end
	modelbuilder.run_separate_erasure_compiler(mainmodule, analysis)
else if opt_global.value then
	var analysis = modelbuilder.do_rapid_type_analysis(mainmodule)
	modelbuilder.run_global_compiler(mainmodule, analysis)
else
	var analysis = modelbuilder.do_rapid_type_analysis(mainmodule)
	modelbuilder.run_separate_compiler(mainmodule, analysis)
end
