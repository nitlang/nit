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

module re_parser

import nitcc::autom
import re_parser_lexer
import re_parser_parser

# Parse regular expression into NFA
#
# ~~~
# # Parse the regular expression
# var re = "(a|b)*"
# var re_parser = new REParser
# var node = re_parser.parse_re(re)
#
# # Check syntax errors
# assert node != null else
#	print re_parser.last_error.as(not null)
# end
#
# # Build nfa and dfa
# var nfa = re_parser.make_nfa(node)
# print nfa.to_dot
# print nfa.to_dfa.to_dot
# ~~~
class REParser

	# Parse the regular expression `re` and return the root production node.
	#
	# Returns `null` in case of syntax error. See `last_error`.
	#
	# ~~~
	# var re_parser = new REParser
	#
	# # Valid regular expression
	# assert re_parser.parse_re("(a|b)*") != null
	# assert re_parser.last_error == null
	#
	# # Invalid regular expression
	# assert re_parser.parse_re("a|b)*") == null
	# assert re_parser.last_error != null
	# ~~~
	fun parse_re(re: String): nullable NProd do
		var l = new Lexer_re_parser(re)
		var ts = l.lex

		var p = new Parser_re_parser
		p.tokens.add_all ts

		var node = p.parse

		if not node isa NProd then
			if node isa NError then
				last_error = "{node.position.as(not null).to_s} Syntax Error: {node.message}"
			else
				last_error = "Parsing Error: expected `NProd` got `{node.class_name}`"
			end
			return null
		end
		last_error = null
		return node
	end

	# Contains the error from the last call to `parse_re` or null if no error
	#
	# ~~~
	# var re_parser = new REParser
	#
	# # Invalid regular expression
	# assert re_parser.parse_re("a|b)*") == null
	# assert re_parser.last_error != null
	# ~~~
	var last_error: nullable String

	# Build the NFA for `node`
	#
	# Use `parse_re` to transform a re string into a NProd.
	fun make_nfa(node: NProd): Automaton do
		var v = new REVisitor
		v.start(node)
		return v.nfa
	end
end

class REVisitor
	super Visitor

	var nfa = new Automaton

	fun start(n: Node) do
		enter_visit(n)
	end

	redef fun visit(n) do n.accept_revisitor(self)
end

redef class Node
	fun accept_revisitor(v: REVisitor) do visit_children(v)

	# Build the NFA of the regular expression
	fun make_nfa: Automaton do
		print inspect
		abort
	end
end

redef class Nre
	redef fun accept_revisitor(v) do
		v.nfa = make_nfa
	end

	redef fun make_nfa do
		var a = new Automaton
		for child in children do
			if child == null then continue
			a.concat(child.make_nfa)
		end
		return a
	end
end

redef class Nre_char
	redef fun make_nfa do
		return new Automaton.atom(n_char.text.chars.first.code_point)
	end
end

redef class Nre_alter
	redef fun make_nfa
	do
		var a = n_re.make_nfa
		var b = n_re2.make_nfa
		a.alternate(b)
		return a
	end
end

redef class Nre_conc
	redef fun make_nfa
	do
		var a = n_re.make_nfa
		var b = n_re2.make_nfa
		a.concat(b)
		return a
	end
end

redef class Nre_star
	redef fun make_nfa
	do
		var a = n_re.make_nfa
		a.close
		return a
	end
end

redef class Nre_ques
	redef fun make_nfa
	do
		var a = n_re.make_nfa
		a.optionnal
		return a
	end
end

redef class Nre_plus
	redef fun make_nfa
	do
		var a = n_re.make_nfa
		a.plus
		return a
	end
end

redef class Nre_par
	redef fun make_nfa
	do
		return n_re.make_nfa
	end
end

# Parse arguments
if args.is_empty then
	print "usage: re_parser <re>"
	exit 1
end
var re = args.first

# Parse re
var re_parser = new REParser
var node = re_parser.parse_re(re)

if node == null then
	print re_parser.last_error.as(not null)
	exit 1
	abort
end

# Build nfa and dfa
var nfa = re_parser.make_nfa(node)
nfa.to_dot(false).write_to_file("nfa.dot")
nfa.to_dfa.to_dot(false).write_to_file("dfa.dot")
print "Produced files `nfa.dot` and `dfa.dot`"
