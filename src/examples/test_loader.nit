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

# Sample program that scan and load things.
#
# It shows the difference betwenn the various services of the `loader`.
module test_loader is example

import loader

# Display current loaded/known things.
fun stats(mb: ModelBuilder)
do
	var m = mb.model
	print "  model: mpackages={m.mpackages.length} mmodules={m.mmodules.length}"
	print "  mb: identified modules={mb.identified_modules.length}; parsed modules={mb.parsed_modules.length}"
end


# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.keep_going = true

# We do not add other options, so process them now!
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# We need a model to collect stuff
var model = new Model
# And a model builder to parse files
var modelbuilder = new ModelBuilder(model, toolcontext)

# Identify each argument independently
for a in arguments do
	var x

	print "{a}: module?"
	x = modelbuilder.identify_module(a)
	if x != null then
		print "\tmodule {x.full_name} at {x.filepath or else "?"}"
	else
		var le = modelbuilder.last_loader_error
		if le != null then
			print "\t{le}"
		else
			print "\tnothing"
		end
	end

	print "{a}: group?"
	x = modelbuilder.identify_group(a)
	if x != null then
		print "\tgroup {x.full_name} at {x.filepath or else "?"}"
	else
		var le = modelbuilder.last_loader_error
		if le != null then
			print "\t{le}"
		else
			print "\tnothing"
		end
	end
	toolcontext.check_errors
	stats(modelbuilder)
end

# Scan everything (including subdirectories)
var mm = modelbuilder.scan_full(arguments)
print "scan_full found {mm.length} modules"
stats(modelbuilder)

# Parse specific modules only
mm = modelbuilder.parse(arguments)
print "parse found {mm.length} modules"
stats(modelbuilder)

# Parse everything (including modules in subdirectories)
mm = modelbuilder.parse_full(arguments)
print "parse_full found {mm.length} modules"
stats(modelbuilder)
