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

# Utils and tools related to parsers and AST
module parser_util

import parser
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
			self.fatal_error(null, "Fatal Error: {eof.message}")
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
			self.fatal_error(null, "Fatal Error: not a classdef")
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
			self.fatal_error(null, "Fatal Error: not a propdef")
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
		var nblock = nmodule.n_classdefs.first.n_propdefs.first.as(AMainMethPropdef).n_block.as(ABlockExpr).n_expr.first.as(ADoExpr).n_block.as(not null)
		return nblock
	end

	# Parse a full expression given as a string
	# Fatal error if the `string` is not a syntactically correct expression
	fun parse_expr(string: String): AExpr
	do
		var mod_string = "var dummy = \n{string}"
		var nmodule = parse_module(mod_string)
		var nexpr = nmodule.n_classdefs.first.n_propdefs.first.as(AMainMethPropdef).n_block.as(ABlockExpr).n_expr.first.as(AVardeclExpr).n_expr.as(not null)
		return nexpr
	end
end

redef class ANode
	# Return an array of tokens that match a given text
	fun collect_tokens_by_text(text: String): Array[Token]
	do
		var v = new CollectTokensByTextVisitor(text)
		v.enter_visit(self)
		return v.result
	end

	# Return an array of node that are annotated
	# The attached node can be retrieved by two invocation of parent
	fun collect_annotations_by_name(name: String): Array[AAnnotation]
	do
		var v = new CollectAnnotationsByNameVisitor(name)
		v.enter_visit(self)
		return v.result
	end
end

private class CollectTokensByTextVisitor
	super Visitor
	var text: String
	init(text: String) do self.text = text
	var result = new Array[Token]
	redef fun visit(node)
	do
		node.visit_all(self)
		if node isa Token and node.text == text then result.add(node)
	end
end

private class CollectAnnotationsByNameVisitor
	super Visitor
	var name: String
	init(name: String) do self.name = name
	var result = new Array[AAnnotation]
	redef fun visit(node)
	do
		node.visit_all(self)
		if node isa AAnnotation and node.n_atid.n_id.text == name then result.add(node)
	end
end
