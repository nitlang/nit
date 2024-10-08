# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
# Copyright 2015 Alexis Laferrière <alexis.laf@xymus.net>
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

# jwrapper wraps Java classes in extern Nit classes
#
# This tool takes class file, Jar archives and javap files as input,
# and it outputs a Nit source file.
# For further details on installation and usage, refer to the README file.
#
# Here's an overview of the project design :
# * Grammar and lexer : `grammar/javap.sablecc`
# * The `javap_visitor` implements the visitor that extracts data from the AST
# * The `code_generator` takes these data and converts it to Nit code via the `jtype_converter` module and generate the output Nit file.
# * The `model` contains data structures used to represent the data
# * The `jwrapper` module implements the user interface
module jwrapper

import opts
import performance_analysis

import javap_test_parser
import code_generator
import javap_visitor

var opts = new OptionContext

var opt_unknown = new OptionEnum(["comment", "stub", "ignore"], "How to deal with unknown types", 0, "-u")
var opt_verbose = new OptionCount("Verbosity", "-v")
var opt_output = new OptionString("Output file", "-o")
var opt_regex = new OptionString("Regex pattern to filter classes in Jar archives", "-r")
var opt_help = new OptionBool("Show this help message", "-h", "--help")

opts.add_option(opt_output, opt_unknown, opt_extern_class_prefix, opt_libs, opt_regex, opt_cast_objects, opt_arrays, opt_save_model, opt_load_models, opt_no_properties, opt_verbose, opt_help)
opts.parse args

if opts.errors.not_empty or opts.rest.is_empty or opt_help.value then
	print """
Usage: jwrapper [options] file [other_file [...]]
Input files: bytecode Java class (.class), Jar archive (.jar) or javap output (.javap)
Options:"""
	opts.usage

	if opt_help.value then exit 0
	exit 1
end

var out_file = opt_output.value
if out_file == null then out_file = "out.nit"

if not "javap".program_is_in_path then
	print "Error: 'javap' must be in PATH"
	exit 1
end

var regex = null
var regex_code = opt_regex.value
if regex_code != null then
	regex = regex_code.to_re
	var error = regex.compile
	if error != null then
		print_error "Regex Error: {error}"
		exit 1
	end
end

# List of bytecode Java classes and javap output files
var class_files = new Array[String]
var javap_files = new Array[String]
var clock = new Clock

# Sort through input files passed as arguments
for input in opts.rest do
	var ext = input.file_extension
	if ext == "class" then
		class_files.add input
	else if ext == "javap" then
		javap_files.add input
	else if ext == "jar" then
		clock.lapse

		var out_dir = "tmp"
		if not out_dir.file_exists then out_dir.mkdir

		if opt_verbose.value > 0 then print "# Extracting {input}"

		# Extract all files
		var cmd = "cd {out_dir}; jar -xf {input}"
		var status = system(cmd)
		if status != 0 then
			print_error "Warning: Failed to extract Jar archive '{input}'"
			continue
		end

		# List .class files
		var javap = new ProcessReader("jar", "-tf", input)
		var output = javap.read_all
		javap.wait
		for path in output.split("\n") do
			if path.file_extension == "class" then

				# Filter out the classes that do not answer to the Regex
				if regex != null and not path.has(regex) then continue

				class_files.add out_dir / path
			end
		end
		javap.close

		sys.perfs["jar extract"].add clock.lapse
	else
		print_error "Warning: Unsupported file extension for input file '{input}'"
	end
end

if class_files.is_empty and javap_files.is_empty then
	print_error "Error: No valid input files, quitting"
	exit 1
end

var model = new JavaModel
var converter = new JavaTypeConverter

# Concatenated javap output for all the target files
var javap_output = ""

# Parse and analyze all the classes at once
if class_files.not_empty then

	if opt_verbose.value > 0 then print "# Running javap on {class_files.length} Java classes"
	clock.lapse

	# Run javap of the class file
	class_files.unshift "-public"
	var javap = new ProcessReader("javap", class_files...)
	javap_output += javap.read_all
	javap.wait
	javap.close
	var status = javap.status

	if status != 0 then
		print_error "Warning: javap failed to parse all class files, is it a valid class file?"
		exit 1
	end

	sys.perfs["javap"].add clock.lapse
end

# Concatenate the preprocessed javap outputs
for class_file in javap_files do
	if opt_verbose.value > 0 then print "# Using the preprocessed file {class_file}"

	var ext = class_file.file_extension
	assert ext == "javap"

	javap_output += class_file.to_path.read_all
end

if opt_verbose.value > 0 then print "# Parsing javap output"
if opt_verbose.value > 1 then javap_output.write_to_file "tests/javap.javap"

# Lexer
var lexer = new Lexer_javap(javap_output)
var parser = new Parser_javap
var tokens = lexer.lex
parser.tokens.add_all tokens
sys.perfs["core lexer"].add clock.lapse

# Parser
var root_node = parser.parse
if root_node isa NError then
	print_error "Warning: Parsing failed with {root_node.message}:{root_node.position or else ""}"
	exit 1
end
sys.perfs["core parser"].add clock.lapse

# Build model
if opt_verbose.value > 0 then print "# Building model"
assert root_node isa NStart
var visitor = new JavaVisitor(model)
visitor.enter_visit root_node
sys.perfs["core model"].add clock.lapse

# Resolve types
model.resolve_types
sys.perfs["core resolve"].add clock.lapse

# Build class hierarchy
model.build_class_hierarchy
sys.perfs["core hierarchy"].add clock.lapse

if opt_verbose.value > 0 then print "# Generating Nit code"

# Generate the Nit module
var use_comment = opt_unknown.value == 0
var use_stub = opt_unknown.value == 1
var generator = new CodeGenerator(out_file, model, use_comment, use_stub)
generator.generate
sys.perfs["code generator"].add clock.lapse

# Write the model to a file, for use by subsequent passes
generator.write_model_to_file
sys.perfs["writing model"].add clock.lapse

if opt_verbose.value > 1 then
	print "# Performance Analysis:"
	print sys.perfs

	print "# {model.unknown_types.length} unknown types:"
	var c = 0
	for id, ntype in model.unknown_types do
		print "* {id}"
		c += 1
		if c > 100 then
			print "* ..."
			break
		end
	end
end
