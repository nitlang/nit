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

# Testing tool.
# see `testing/README`
module nitunit

import frontend
import testing

var toolcontext = new ToolContext
toolcontext.keep_going = true

toolcontext.option_context.add_option(toolcontext.opt_full, toolcontext.opt_output, toolcontext.opt_dir, toolcontext.opt_noact, toolcontext.opt_pattern, toolcontext.opt_autosav, toolcontext.opt_gen_unit, toolcontext.opt_gen_force, toolcontext.opt_gen_private, toolcontext.opt_gen_show, toolcontext.opt_nitc)
toolcontext.tooldescription = "Usage: nitunit [OPTION]... <file.nit>...\nExecutes the unit tests from Nit source files."

toolcontext.process_options(args)
var args = toolcontext.option_context.rest

if toolcontext.opt_gen_unit.value then
	if toolcontext.opt_pattern.value != null then
		print "Option --pattern cannot be used with --gen-suite"
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

var module_files = modelbuilder.filter_nit_source(args)

var mmodules = modelbuilder.parse_full(module_files)
modelbuilder.run_phases

if toolcontext.opt_gen_unit.value then
	modelbuilder.gen_test_unit(mmodules.first)
	exit(0)
end

# When testing `nitunit`, disable time.
if "NIT_TESTING".environ != "" then
	toolcontext.opt_no_time.value = true
end

"NIT_TESTING".setenv("true")
"NIT_TESTING_ID".setenv(pid.to_s)
"SRAND".setenv("0")

var test_dir = toolcontext.test_dir
test_dir.mkdir
"# This file prevents the Nit modules of the directory to be part of the package".write_to_file(test_dir / "packages.ini")

var page = new HTMLTag("testsuites")

if toolcontext.opt_full.value then mmodules = model.mmodules

for a in args do
	if not a.file_exists then
		toolcontext.fatal_error(null, "Error: cannot load file or module `{a}`.")
	end
	# Try to load the file as a markdown document
	var mdoc = modelbuilder.load_markdown(a)
	var ts = modelbuilder.test_mdoc(mdoc)
	if not ts.children.is_empty then page.add ts
end

for a in module_files do
	var g = modelbuilder.identify_group(a)
	if g == null then continue
	var ts = modelbuilder.test_group(g)
	if not ts.children.is_empty then page.add ts
end

for m in mmodules do
	var ts
	ts = modelbuilder.test_markdown(m)
	if not ts.children.is_empty then page.add ts
	ts = modelbuilder.test_unit(m)
	if ts != null and not ts.children.is_empty then page.add ts
end

var file = toolcontext.opt_output.value
if file == null then file = "nitunit.xml"
page.write_to_file(file)

# Print results
printn "Docunits: Entities: {modelbuilder.total_entities}; Documented ones: {modelbuilder.doc_entities}; With nitunits: {modelbuilder.unit_entities}"
if modelbuilder.unit_entities == 0 or toolcontext.opt_noact.value then
	print ""
else
	printn "; Failures: "
	var cpt = modelbuilder.failed_entities
	if toolcontext.opt_no_color.value then
		print cpt
	else if cpt == 0 then
		print "0".green.bold
	else
		print cpt.to_s.red.bold
	end
end
printn "Test suites: Classes: {modelbuilder.total_classes}; Test Cases: {modelbuilder.total_tests}"
if modelbuilder.total_tests == 0 or toolcontext.opt_noact.value then
	print ""
else
	printn "; Failures: "
	var cpt = modelbuilder.failed_tests
	if toolcontext.opt_no_color.value then
		print cpt
	else if cpt == 0 then
		print "0".green.bold
	else
		print cpt.to_s.red.bold
	end
end

var total = modelbuilder.unit_entities + modelbuilder.total_tests
var fail = modelbuilder.failed_entities + modelbuilder.failed_tests
if toolcontext.opt_noact.value then
	# nothing
else if total == 0 then
	var head = "[NOTHING]"
	if not toolcontext.opt_no_color.value then
		head = head.yellow
	end
	print "{head} No unit tests to execute."
else if fail == 0 then
	var head = "[SUCCESS]"
	if not toolcontext.opt_no_color.value then
		head = head.green.bold
	end
	print "{head} All {total} tests passed."
else
	var head = "[FAILURE]"
	if not toolcontext.opt_no_color.value then
		head = head.red.bold
	end
	print "{head} {fail}/{total} tests failed."

	print "`{test_dir}` is not removed for investigation."
	exit 1
end

test_dir.rmdir
