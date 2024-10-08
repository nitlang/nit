# This file is part of NIT ( https://nitlanguage.org ).
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

# Utils and tools related to parsers and AST
module parser_util

intrude import parser
import toolcontext

redef class ToolContext
	# Parse a full module given as a string
	# Fatal error if the `string` is not a syntactically correct module
	fun parse_module(string: String): AModule
	do
		var source = new SourceFile.from_string("", string)
		var lexer = new Lexer(source)
		var parser = new Parser(lexer)
		var tree = parser.parse

		var eof = tree.n_eof
		if eof isa AError then
			self.fatal_error(null, "Fatal Error: {eof.message}.")
			abort
		end
		return tree.n_base.as(not null)
	end

	# Parse a full classdef given as a string
	# Fatal error if the `string` is not a syntactically correct class definition
	fun parse_classdef(string: String): AClassdef
	do
		var nmodule = parse_module(string)
		var nclassdefs = nmodule.n_classdefs
		if nclassdefs.length != 1 then
			self.fatal_error(null, "Fatal Error: not a classdef.")
			abort
		end
		return nclassdefs.first
	end

	# Parse a full propdef given as a string
	# Fatal error if the `string` is not a syntactically correct property definition
	fun parse_propdef(string: String): APropdef
	do
		var mod_string = "class Dummy\n{string}\nend"
		var nclassdef = parse_classdef(mod_string)
		var npropdefs = nclassdef.n_propdefs
		if npropdefs.length != 1 then
			self.fatal_error(null, "Fatal Error: not a propdef.")
			abort
		end
		return npropdefs.first
	end

	# Parse a full statement block given as a string
	# Fatal error if the `string` is not a syntactically correct statement block
	fun parse_stmts(string: String): AExpr
	do
		var mod_string = "do\n{string}\nend"
		var nmodule = parse_module(mod_string)
		var nblock = nmodule.n_classdefs.first.n_propdefs.first.as(AMethPropdef).n_block.as(ABlockExpr).n_expr.first.as(ADoExpr).n_block.as(not null)
		return nblock
	end

	# Parse a full expression given as a string
	# Fatal error if the `string` is not a syntactically correct expression
	fun parse_expr(string: String): AExpr
	do
		var mod_string = "var dummy = \n{string}"
		var nmodule = parse_module(mod_string)
		var nexpr = nmodule.n_classdefs.first.n_propdefs.first.as(AMethPropdef).n_block.as(ABlockExpr).n_expr.first.as(AVardeclExpr).n_expr.as(not null)
		return nexpr
	end

	# Parse a super class declaration
	# Fatal error if the `string` is not a syntactically correct super class declaration
	fun parse_superclass(string: String): APropdef
	do
		var mod_string = "class Dummy\nsuper {string}\nend"
		var nclassdef = parse_classdef(mod_string).as(AStdClassdef)
		var nsuperclasses = nclassdef.n_propdefs
		if nsuperclasses.length != 1 then
			self.fatal_error(null, "Fatal Error: not a super class declaration.")
			abort
		end
		return nsuperclasses.first
	end

	# Try to parse the `string` as something
	#
	# Returns the first possible syntacticaly correct type among:
	#
	# - a type `AType`
	# - a single `Token`
	# - an expression `AExpr`
	# - a block of statements `ABlockExpr`
	# - a full module `AModule`
	# - a `AError` if nothing else matches
	#
	#     var tc = new ToolContext
	#     assert tc.parse_something("foo") isa TId
	#     assert tc.parse_something("foo[bar]") isa AExpr
	#     assert tc.parse_something("Foo[Bar]") isa AType
	#     assert tc.parse_something("foo\nbar") isa ABlockExpr
	#     assert tc.parse_something("fun foo do bar\nfoo") isa AModule
	#     assert tc.parse_something("fun fun") isa AParserError
	#     assert tc.parse_something("?%^&") isa ALexerError
	fun parse_something(string: String): ANode
	do
		var source = new SourceFile.from_string("", string)
		var error
		var tree
		var eof
		var lexer

		lexer = new InjectedLexer(source)
		lexer.injected_before.add new TKwvar
		lexer.injected_before.add new TId
		lexer.injected_before.add new TColumn
		lexer.injected_before.add new TClassid
		lexer.injected_before.add new TObra
		lexer.injected_after.add new TCbra
		tree = (new Parser(lexer)).parse
		eof = tree.n_eof
		if not eof isa AError then
			var ntype = tree.n_base.n_classdefs.first.n_propdefs.first.as(AMethPropdef).n_block.as(ABlockExpr).n_expr.first.as(AVardeclExpr).n_type.n_types.first
			ntype.parent = null
			return ntype
		end
		error = eof

		lexer = new Lexer(source)
		var first = lexer.next
		if first isa EOF then return first
		var second = lexer.next
		if second isa EOF and not second isa AError then
			first.parent = null
			return first
		end

		lexer = new InjectedLexer(source)
		lexer.injected_before.add new TKwvar
		lexer.injected_before.add new TId
		lexer.injected_before.add new TAssign
		lexer.injected_before.add new TOpar
		lexer.injected_after.add new TCpar
		tree = (new Parser(lexer)).parse
		eof = tree.n_eof
		if not eof isa AError then
			var nexpr = tree.n_base.n_classdefs.first.n_propdefs.first.as(AMethPropdef).n_block.as(ABlockExpr).n_expr.first.as(AVardeclExpr).n_expr.as(AParExpr).n_expr
			nexpr.parent = null
			return nexpr
		end
		if eof.location > error.location then error = eof

		lexer = new InjectedLexer(source)
		lexer.injected_before.add new TKwdo
		lexer.injected_before.add new TEol
		lexer.injected_after.add new TEol
		lexer.injected_after.add new TKwend
		tree = (new Parser(lexer)).parse
		eof = tree.n_eof
		if not eof isa AError then
			var nblock = tree.n_base.n_classdefs.first.n_propdefs.first.as(AMethPropdef).n_block.as(ABlockExpr).n_expr.first.as(ADoExpr).n_block.as(ABlockExpr)
			nblock.n_kwend = null # drop injected token
			nblock.parent = null
			return nblock
		end
		if eof.location > error.location then error = eof

		lexer = new Lexer(source)
		tree = (new Parser(lexer)).parse
		eof = tree.n_eof
		if not eof isa AError then
			return tree.n_base.as(not null)
		end
		if eof.location > error.location then error = eof

		return error
	end

	# Parse the input of the user as something
	fun interactive_parse(prompt: String): ANode
	do
		var oldtext = ""

		loop
			printn prompt
			printn " "
			var s = sys.stdin.read_line
			if s == "" then continue
			if s.chars.first == ':' then
				var res = new TString
				res.text = s
				return res
			end

			var text = oldtext + s + "\n"
			oldtext = ""
			var n = parse_something(text)

			if n isa AParserError and n.token isa EOF then
				# Unexpected end of file, thus continuing
				if oldtext == "" then prompt = "." * prompt.length
				oldtext = text
				continue
			end

			return n
		end
	end
end

# A modified lexer that feed tokens before and after the real tokens.
class InjectedLexer
	super Lexer

	# The tokens to use before the real tokens (in order).
	var injected_before = new List[Token]

	# The tokens to use after the real tokens (in order).
	# The real EOF token is produced after these tokens.
	var injected_after = new List[Token]
	private var is_finished = false

	redef fun get_token
	do
		if not injected_before.is_empty then
			var tok = injected_before.shift
			return tok
		end
		if not is_finished then
			var next = super
			if not next isa EOF then return next
			injected_after.push(next)
			is_finished = true
		end

		var tok = injected_after.shift
		return tok
	end
end
