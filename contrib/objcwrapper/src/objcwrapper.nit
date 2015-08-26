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

# Generator of Nit modules to wrap Objective-C services
module objcwrapper

import nitcc_runtime
import opts

import objc_visitor
import objc_model
import objc_generator
import objc_lexer
import objc_parser

var opt_help = new OptionBool("Show this help message", "-h", "--help")

var opts = new OptionContext
opts.add_option(opt_help, opt_output, opt_init_as_methods)
opts.parse(args)

if opts.errors.not_empty or opts.rest.is_empty or opt_help.value then
	print """
Usage: objcwrapper [options] input_file [other_input_file [...]]
Options:"""
	opts.usage

	if opt_help.value then exit 0
	exit 1
end

var v = new ObjcVisitor
var g = new CodeGenerator

for arg in opts.rest do
	# Read input
	var content = arg.to_path.read_all

	# Parse
	var lexer = new Lexer_objc(content)
	var parser = new Parser_objc
	var tokens = lexer.lex
	parser.tokens.add_all(tokens)
	var root = parser.parse

	# Check for errors
	if root isa NError then
		print_error "Syntax Error: {root.message}: {root.position or else ""}"
		continue
	end

	# Run analysis
	v.enter_visit root
end

g.generate v.model.classes
