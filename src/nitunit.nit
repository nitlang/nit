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

# Program to extract and execute unit tests from nit source files
module nitunit

import testing

var toolcontext = new ToolContext

toolcontext.option_context.add_option(toolcontext.opt_full, toolcontext.opt_output, toolcontext.opt_dir, toolcontext.opt_noact, toolcontext.opt_pattern, toolcontext.opt_file, toolcontext.opt_gen_unit, toolcontext.opt_gen_force, toolcontext.opt_gen_private, toolcontext.opt_gen_show)
toolcontext.tooldescription = "Usage: nitunit [OPTION]... <file.nit>...\nExecutes the unit tests from Nit source files."

toolcontext.process_options(args)
var args = toolcontext.option_context.rest

if toolcontext.opt_gen_unit.value then
	if toolcontext.opt_pattern.value != null then
		print "Option --pattern cannot be used with --gen-suite"
		exit(0)
	end
	if toolcontext.opt_file.value != null then
		print "Option --target-file cannot be used with --gen-suite"
		exit(0)
	end
else
	if toolcontext.opt_gen_force.value then
		print "Option --force must be used with --gen-suite"
		exit(0)
	end
	if toolcontext.opt_gen_private.value then
		print "Option --private must be used with --gen-suite"
		exit(0)
	end
	if toolcontext.opt_gen_show.value then
		print "Option --only-show must be used with --gen-suite"
		exit(0)
	end
end

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var mmodules = modelbuilder.parse(args)
modelbuilder.run_phases

if toolcontext.opt_gen_unit.value then
	modelbuilder.gen_test_unit(mmodules.first)
	exit(0)
end

var page = new HTMLTag("testsuites")

if toolcontext.opt_full.value then mmodules = model.mmodules

for m in mmodules do
	page.add modelbuilder.test_markdown(m)
	page.add modelbuilder.test_unit(m)
end

var file = toolcontext.opt_output.value
if file == null then file = "nitunit.xml"
page.write_to_file(file)
print "Results saved in {file}"
# print docunits results
print "\nDocUnits:"
if modelbuilder.unit_entities == 0 then
	print "No doc units found"
else if modelbuilder.failed_entities == 0 and not toolcontext.opt_noact.value then
	print "DocUnits Success"
end
print "Entities: {modelbuilder.total_entities}; Documented ones: {modelbuilder.doc_entities}; With nitunits: {modelbuilder.unit_entities}; Failures: {modelbuilder.failed_entities}"
# print testsuites results
print "\nTestSuites:"
if modelbuilder.total_tests == 0 then
	print "No test cases found"
else if modelbuilder.failed_tests == 0 and not toolcontext.opt_noact.value then
	print "TestSuites Success"
end
print "Class suites: {modelbuilder.total_classes}; Test Cases: {modelbuilder.total_tests}; Failures: {modelbuilder.failed_tests}"
