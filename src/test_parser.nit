# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Program used to test the NIT parser
module test_parser

import parser
import parser_util
import astutil

var no_print = false
var only_lexer = false
var need_help = false
var no_file = false
var interactive = false
var xml = false

while not args.is_empty and args.first.chars.first == '-' do
	if args.first == "-n" then
		no_print = true
	else if args.first == "-l" then
		only_lexer = true
	else if args.first == "-p" then
		only_lexer = false
	else if args.first == "-x" then
		xml = true
	else if args.first == "-e" then
		no_file = true
	else if args.first == "-i" then
		interactive = true
	else if args.first == "-h" or args.first == "-?" then
		need_help = true
	else
		stderr.write("Unknown option {args.first}.\n")
		exit(0)
	end
	args.shift
end

if (args.is_empty and not interactive) or need_help then
	print("usage:")
	print("  test_parser [options]... <filename.nit>...")
	print("  test_parser -e [options]... <text>...")
	print("  test_parser -i [options]...")
	print("options:")
	print("  -n	do not print anything")
	print("  -l	only lexer")
	print("  -p	lexer and parser (default)")
	print("  -x	instead of a ascii tree, output a XML document")
	print("  -e	instead on files, each argument is a content to parse")
	print("  -i	tree to parse are read interactively")
	print("  -h	print this help")
else if interactive then
	if only_lexer then
		print "Error: -l and -i are incompatible"
		exit 1
	else if no_file then
		print "Error: -e and -i are incompatible"
		exit 1
	else if not args.is_empty then
		print "Error: -i works without arguments"
		exit 1
	end

	var tc = new ToolContext

	loop
		var n = tc.interactive_parse("-->")
		if n isa TString then
			var s = n.text
			if s == ":q" then
				break
			else
				print "`:q` to quit"
			end
			continue
		end

		if n isa AError then
			print "{n.location.colored_line("0;31")}: {n.message}"
			continue
		end

		if not no_print then
			n.dump_tree
		end
	end
else
	for a in args do
		var source
		if no_file then
			source = new SourceFile.from_string("", a)
		else
			var f = new FileReader.open(a)
			source = new SourceFile(a, f)
			f.close
		end
		var lexer = new Lexer(source)
		if only_lexer then
			var token = lexer.next
			while not token isa EOF do
				if not no_print then
					print("Read token at {token.location} text='{token.text}'")
				end
				token = lexer.next
			end
		else
			var parser = new Parser(lexer)
			var tree = parser.parse

			var error = tree.n_eof
			if error isa AError then
				print("Error at {error.location}:\n\t{error.message}")
				return
			end

			if xml then
				tree.parentize_tokens
				tree.to_xml.write_to(stdout)
			else if not no_print then
				tree.dump_tree
			end
		end
	end
end
