# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Test for neo model saving and loading.
module test_neo

import neo
import model
import frontend

var test_id = "NIT_TESTING_ID".environ
var test_name = "test_{test_id}"

# init tool
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: neo_saver host port files..."
toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

if arguments.length < 3 then
	toolcontext.usage
	exit 0
end

var host = arguments.shift
var port = arguments.shift
var url = "http://{host}:{port}"

# parse model
toolcontext.info("Parse files...", 1)
var org_model = new Model
var modelbuilder = new ModelBuilder(org_model, toolcontext)
modelbuilder.parse(arguments)
modelbuilder.run_phases

toolcontext.info("Open connection to neo4j on {url} for saving...", 1)
var save_client = new Neo4jClient(url)
var save_model = new NeoModel(test_name, toolcontext, save_client)
save_model.save(org_model)

toolcontext.info("Open connection to neo4j on {url} for reading...", 1)
var read_client = new Neo4jClient(url)
var neo_model = new Model
var read_model = new NeoModel(test_name, toolcontext, read_client)
read_model.load(neo_model)

# Compare model
var sorter = new MEntityNameSorter

print "# mpackages:"
var org_mpackages = org_model.mpackages.to_a
sorter.sort org_mpackages
print org_mpackages.join(" ")
print "------------------------------------"
var neo_mpackages = neo_model.mpackages.to_a
sorter.sort neo_mpackages
print neo_mpackages.join(" ")

print "\n# mmodules:"
var org_mmodules = org_model.mmodules.to_a
sorter.sort org_mmodules
print org_mmodules.join(" ")
print "------------------------------------"
var neo_mmodules = neo_model.mmodules.to_a
sorter.sort neo_mmodules
print neo_mmodules.join(" ")

print "\n# mclasses:"
var org_mclasses = org_model.mclasses.to_a
sorter.sort org_mclasses
print org_mclasses.join(" ")
print "------------------------------------"
var neo_mclasses = neo_model.mclasses.to_a
sorter.sort neo_mclasses
print neo_mclasses.join(" ")

print "\n# mproperties:"
var org_mproperties = org_model.mproperties.to_a
sorter.sort org_mproperties
print org_mproperties.join(" ")
print "------------------------------------"
var neo_mproperties = neo_model.mproperties.to_a
sorter.sort neo_mproperties
print neo_mproperties.join(" ")

print "\n# msignatures:"
for org_mprop in org_mproperties do
	if not org_mprop isa MMethod then continue
	print "{org_mprop.name}{org_mprop.intro.msignature or else ""}"
end
print "------------------------------------"
for neo_mprop in neo_mproperties do
	if not neo_mprop isa MMethod then continue
	print "{neo_mprop.name}{neo_mprop.intro.msignature or else ""}"
end
