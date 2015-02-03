# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

# jwrapper is a Nit extern class generator `in "Java"`.
# It takes a .class file and output a Nit file. For further details on installation and usage, refer to the README file.
#
# Here's an overview of the project design :
# * Grammar and lexer : `grammar/javap.sablecc`
# * The `javap_visitor` implements the visitor that extracts data from the AST
# * The `code_generator` takes these data and converts it to Nit code via the `jtype_converter` module and generate the output Nit file.
# * The `types` contains data structures used to represent the data
# * The `jwrapper` module implements the user interface
module jwrapper

import opts
import javap_test_parser
import code_generator
import javap_visitor

var opts = new OptionContext

var opt_attr = new OptionBool("Generate attributes", "-a", "--with-attributes")
var opt_comment = new OptionBool("Comment methods/attributes containing unknown types", "-c", "--comment")
var opt_wrap = new OptionBool("Create extern classes wrapping unknown types (Default)", "-w", "--wrap")
var opt_help = new OptionBool("Show this help message", "-h", "--help")

opts.add_option(opt_attr, opt_comment, opt_wrap, opt_help)

opts.parse(args)

if opt_wrap.value and opt_comment.value then
	print "Error: Can't use both '-c' and '-w'"
	exit 1
end

if not opts.errors.is_empty or opts.rest.length != 2 or opt_help.value then
	print "USAGE: jwrapper [OPTIONS] class_file nit_file"
	print "Options:"
	opts.usage

	if opt_help.value then exit 0
	exit 1
end

var dot_class = opts.rest[0]
var out_file = opts.rest[1]

if not "javap".program_is_in_path then
	print "ERROR: 'javap' not found."
	exit 1
end

var javap = new IProcess("javap", "-public", dot_class)

var p = new TestParser_javap
var tree = p.work(javap.read_all)

var converter = new JavaTypeConverter

var visitor = new JavaVisitor(converter)
visitor.enter_visit(tree)

var generator = new CodeGenerator(out_file, visitor.java_class, opt_attr.value, opt_comment.value)
generator.generate
