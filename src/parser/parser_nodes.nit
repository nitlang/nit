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

# AST nodes of the Nit language
# Was previously based on parser_abs.nit.
module parser_nodes

import location
import ordered_tree
private import console

# Root of the AST class-hierarchy
abstract class ANode
	# Location is set during AST building. Once built, location can not be null.
	# However, manual instantiated nodes may need more care.
	var location: Location is writable, noinit

	# The location of the important part of the node (identifier or whatever)
	fun hot_location: Location do return location

	# Display a message for the colored location of the node
	fun debug(message: String)
	do
		sys.stderr.write "{hot_location} {self.class_name}: {message}\n{hot_location.colored_line("0;32")}\n"
	end

	# Is `self` a token or a pure-structural production like `AQId`?
	fun is_structural: Bool do return false

	# Write the subtree on stdout.
	#
	# Visit the subtree and display it with additional and useful information.
	#
	# By default, this displays all kind of nodes and the corresponding lines of codes.
	#
	# See `ASTDump` for details.
	fun dump_tree(display_structural, display_line: nullable Bool)
	do
		var d = new ASTDump(display_structural or else true, display_line or else true)
		d.enter_visit(self)
		d.write_to(sys.stdout)
	end

	# Information to display on a node
	#
	# Refine this method to add additional information on each node type.
	fun dump_info(v: ASTDump): String do return ""

	# Parent of the node in the AST
	var parent: nullable ANode = null

	# The topmost ancestor of the element
	# This just apply `parent` until the first one
	fun root: ANode
	do
		var res = self
		loop
			var p = res.parent
			if p == null then return res
			res = p
		end
	end

	# The most specific common parent between `self` and `other`
	# Return null if the two node are unrelated (distinct root)
	fun common_parent(other: ANode): nullable ANode
	do
		# First, get the same depth
		var s: nullable ANode = self
		var o: nullable ANode = other
		var d = s.depth - o.depth
		while d > 0 do
			s = s.parent
			d -= 1
		end
		while d < 0 do
			o = o.parent
			d += 1
		end
		assert o.depth == s.depth
		# Second, go up until same in found
		while s != o do
			s = s.parent
			o = o.parent
		end
		return s
	end

	# Number of nodes between `self` and the `root` of the AST
	# ENSURE `self == self.root implies result == 0 `
	# ENSURE `self != self.root implies result == self.parent.depth + 1`
	fun depth: Int
	do
		var n = self
		var res = 0
		loop
			var p = n.parent
			if p == null then return res
			n = p
			res += 1
		end
	end

	# Replace a child with an other node in the AST
	private fun replace_child(old_child: ANode, new_child: nullable ANode) is abstract

	# Detach a node from its parent
	# Aborts if the node is not detachable. use `replace_with` instead
	# REQUIRE: parent != null
	# REQUIRE: is_detachable
	# ENDURE: parent == null
	fun detach
	do
		assert parent != null
		parent.replace_child(self, null)
		parent = null
	end

	# Replace itself with an other node in the AST
	# REQUIRE: parent != null
	# ENSURE: node.parent == old(parent)
	# ENSURE: parent == null
	fun replace_with(node: ANode)
	do
		assert parent != null
		parent.replace_child(self, node)
		parent = null
	end

	# Visit all nodes in order.
	# Thus, call `v.enter_visit(e)` for each child `e`
	fun visit_all(v: Visitor) is abstract

	# Do a deep search and return an array of tokens that match a given text
	fun collect_tokens_by_text(text: String): Array[Token]
	do
		var v = new CollectTokensByTextVisitor(text)
		v.enter_visit(self)
		return v.result
	end

	# Do a deep search and return an array of node that are annotated
	# The attached node can be retrieved by two invocations of parent
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
	var result = new Array[AAnnotation]
	redef fun visit(node)
	do
		node.visit_all(self)
		if node isa AAnnotation and node.n_atid.n_id.text == name then result.add(node)
	end
end

# A helper class to handle (print) Nit AST as an OrderedTree
class ASTDump
	super Visitor
	super OrderedTree[ANode]

	# Reference to the last parent in the Ordered Tree
	# Is used to handle the initial node parent and workaround possible inconsistent `ANode::parent`
	private var last_parent: nullable ANode = null

	# Display tokens and structural production?
	#
	# Should tokens (and structural production like AQId) be displayed?
	var display_structural: Bool

	# Display lines?
	#
	# Should each new line be displayed (numbered and in gray)?
	var display_line: Bool

	# Current line number (when printing lines)
	private var line = 0

	redef fun visit(n)
	do
		if not display_structural and n.is_structural then return
		var p = last_parent
		add(p, n)
		last_parent = n
		n.visit_all(self)
		last_parent = p
	end

	redef fun write_line(o, n, p)
	do
		if display_line then
			var ls = n.location.line_start
			var file = n.location.file
			var line = self.line
			if ls > line and file != null then
				if line == 0 then line = ls - 1
				while line < ls do
					line += 1
					o.write "{line}\t{file.get_line(line)}\n".light_gray
				end
				self.line = ls
			end
		end

		super
	end

	redef fun display(n)
	do
		return "{n.class_name} {n.dump_info(self)} @{n.location}"
	end

	# `s` as yellow
	fun yellow(s: String): String do return s.yellow

	# `s` as red
	fun red(s: String): String do return s.red
end

# A sequence of nodes
# It is a specific class (instead of using a Array) to track the parent/child relation when nodes are added or removed
class ANodes[E: ANode]
	super Sequence[E]
	private var parent: ANode
	private var items = new Array[E]
	redef fun iterator do return items.iterator
	redef fun reverse_iterator do return items.reverse_iterator
	redef fun length do return items.length
	redef fun is_empty do return items.is_empty
	redef fun push(e)
	do
		hook_add(e)
		items.push(e)
	end
	redef fun pop
	do
		var res = items.pop
		hook_remove(res)
		return res
	end
	redef fun unshift(e)
	do
		hook_add(e)
		items.unshift(e)
	end
	redef fun shift
	do
		var res = items.shift
		hook_remove(res)
		return res
	end
	redef fun has(e)
	do
		return items.has(e)
	end
	redef fun [](index)
	do
		return items[index]
	end
	redef fun []=(index, e)
	do
		hook_remove(self[index])
		hook_add(e)
		items[index]=e
	end
	redef fun remove_at(index)
	do
		hook_remove(items[index])
		items.remove_at(index)
	end
	private fun hook_add(e: E)
	do
		#assert e.parent == null
		e.parent = parent
	end
	private fun hook_remove(e: E)
	do
		assert e.parent == parent
		e.parent = null
	end

	# Used in parent constructor to fill elements
	private fun unsafe_add_all(nodes: Collection[Object])
	do
		var parent = self.parent
		for n in nodes do
			assert n isa E
			add n
			n.parent = parent
		end
	end

	private fun replace_child(old_child: ANode, new_child: nullable ANode): Bool
	do
		var parent = self.parent
		for i in [0..length[ do
			if self[i] == old_child then
				if new_child != null then
					assert new_child isa E
					self[i] = new_child
					new_child.parent = parent
				else
					self.remove_at(i)
				end
				return true
			end
		end
		return false
	end

	private fun visit_all(v: Visitor)
	do
		for n in self do v.enter_visit(n)
	end
end

# Ancestor of all tokens
# A token is a node that has a `text` but no children.
abstract class Token
	super ANode

	# The raw content on the token
	fun text: String is abstract

	# The raw content on the token
	fun text=(text: String) is abstract

	# The previous token in the Lexer.
	# May have disappeared in the AST
	var prev_token: nullable Token = null

	# The next token in the Lexer.
	# May have disappeared in the AST
	var next_token: nullable Token = null

	# Is `self` a token discarded from the AST?
	#
	# Loose tokens are not present in the AST.
	# It means they were identified by the lexer but were discarded by the parser.
	# It also means that they are not visited or manipulated by AST-related functions.
	#
	# Each loose token is attached to the non-loose token that precedes or follows it.
	# The rules are the following:
	#
	# * tokens that follow a non-loose token on a same line are attached to it.
	#   See `next_looses`.
	# * other tokens, thus that precede a non-loose token on the same line or the next one,
	# are attached to this one. See `prev_looses`.
	#
	# Loose tokens are mostly end of lines (`TEol`) and comments (`TComment`).
	# Whitespace are ignored by the lexer, so they are not even considered as loose tokens.
	# See `blank_before` to get the whitespace that separate tokens.
	var is_loose = false

	redef fun is_structural do return true

	redef fun dump_info(v) do return " {text.escape_to_c}"

	# Loose tokens that precede `self`.
	#
	# These tokens start the line or belong to a line with only loose tokens.
	var prev_looses = new Array[Token] is lazy

	# Loose tokens that follow `self`
	#
	# These tokens are on the same line than `self`.
	var next_looses = new Array[Token] is lazy

	# The verbatim blank text between `prev_token` and `self`
	fun blank_before: String
	do
		if prev_token == null then return ""
		var from = prev_token.location.pend+1
		var to = location.pstart
		return location.file.string.substring(from,to-from)
	end

	redef fun to_s: String do
		return "'{text}'"
	end

	redef fun visit_all(v: Visitor) do end
	redef fun replace_child(old_child: ANode, new_child: nullable ANode) do end
end

redef class SourceFile
	# The first token parser by the lexer
	# May have disappeared in the final AST
	var first_token: nullable Token = null

	# The first token parser by the lexer
	# May have disappeared in the final AST
	var last_token: nullable Token = null
end

# Ancestor of all productions
# A production is a node without text but that usually has children.
abstract class Prod
	super ANode

	# All the annotations attached directly to the node
	var n_annotations: nullable AAnnotations = null is writable

	# Return all its annotations of a given name in the order of their declaration
	# Retun an empty array if no such an annotation.
	fun get_annotations(name: String): Array[AAnnotation]
	do
		var res = new Array[AAnnotation]
		var nas = n_annotations
		if nas != null then for na in nas.n_items do
			if na.name != name then continue
			res.add(na)
		end
		if self isa AClassdef then for na in n_propdefs do
			if na isa AAnnotPropdef then
				if na.name != name then continue
				res.add na
			end
		end

		return res
	end

	redef fun replace_with(n: ANode)
	do
		super
		assert n isa Prod
		if not isset n._location and isset _location then n._location = _location
	end
end

# Abstract standard visitor on the AST
abstract class Visitor
	# What the visitor do when a node is visited
	# Concrete visitors should implement this method.
	# @toimplement
	protected fun visit(e: ANode) is abstract

	# Ask the visitor to visit a given node.
	# Usually automatically called by visit_all* methods.
	# This method should not be redefined
	fun enter_visit(e: nullable ANode)
	do
		if e == null then return
		var old = _current_node
		_current_node = e
		visit(e)
		_current_node = old
	end

	# The current visited node
	var current_node: nullable ANode = null is writable
end

# Token of end of line (basically `\n`)
class TEol
	super Token
	redef fun to_s
	do
		return "end of line"
	end
end

# Token of a line of comments
# Starts with the `#` and contains the final end-of-line (if any)
class TComment
	super Token
end

# A token associated with a keyword
abstract class TokenKeyword
	super Token
	redef fun to_s
	do
		return "keyword '{text}'"
	end
end

# The deprecated keyword `package`.
class TKwpackage
	super TokenKeyword
end

# The keyword `module`
class TKwmodule
	super TokenKeyword
end

# The keyword `import`
class TKwimport
	super TokenKeyword
end

# The keyword `class`
class TKwclass
	super TokenKeyword
end

# The keyword `abstract`
class TKwabstract
	super TokenKeyword
end

# The keyword `interface`
class TKwinterface
	super TokenKeyword
end

# The keywords `enum` and `universal`
class TKwenum
	super TokenKeyword
end

# The keyword `subset`
class TKwsubset
	super TokenKeyword
end

# The keyword `end`
class TKwend
	super TokenKeyword
end

# The keyword `fun`
class TKwmeth
	super TokenKeyword
end

# The keyword `type`
class TKwtype
	super TokenKeyword
end

# The keyword `init`
class TKwinit
	super TokenKeyword
end

# The keyword `redef`
class TKwredef
	super TokenKeyword
end

# The keyword `is`
class TKwis
	super TokenKeyword
end

# The keyword `do`
class TKwdo
	super TokenKeyword
end

# The keyword `catch`
class TKwcatch
	super TokenKeyword
end

# The keyword `var`
class TKwvar
	super TokenKeyword
end

# The keyword `extern`
class TKwextern
	super TokenKeyword
end

# The keyword `public`
class TKwpublic
	super TokenKeyword
end

# The keyword `protected`
class TKwprotected
	super TokenKeyword
end

# The keyword `private`
class TKwprivate
	super TokenKeyword
end

# The keyword `intrude`
class TKwintrude
	super TokenKeyword
end

# The keyword `if`
class TKwif
	super TokenKeyword
end

# The keyword `then`
class TKwthen
	super TokenKeyword
end

# The keyword `else`
class TKwelse
	super TokenKeyword
end

# The keyword `while`
class TKwwhile
	super TokenKeyword
end

# The keyword `loop`
class TKwloop
	super TokenKeyword
end

# The keyword `for`
class TKwfor
	super TokenKeyword
end

# The keyword `in`
class TKwin
	super TokenKeyword
end

# The keyword `and`
class TKwand
	super TokenKeyword
end

# The keyword `or`
class TKwor
	super TokenKeyword
end

# The keyword `implies`
class TKwimplies
	super TokenKeyword
end

# The keyword `not`
class TKwnot
	super TokenKeyword
end

# The keyword `return`
class TKwreturn
	super TokenKeyword
end

# The keyword `continue`
class TKwcontinue
	super TokenKeyword
end

# The keyword `break`
class TKwbreak
	super TokenKeyword
end

# The keyword `abort`
class TKwabort
	super TokenKeyword
end

# The keyword `assert`
class TKwassert
	super TokenKeyword
end

# The keyword `new`
class TKwnew
	super TokenKeyword
end

# The keyword `isa`
class TKwisa
	super TokenKeyword
end

# The keyword `once`
class TKwonce
	super TokenKeyword
end

# The keyword `super`
class TKwsuper
	super TokenKeyword
end

# The keyword `self`
class TKwself
	super TokenKeyword
end

# The keyword `true`
class TKwtrue
	super TokenKeyword
end

# The keyword `false`
class TKwfalse
	super TokenKeyword
end

# The keyword `null`
class TKwnull
	super TokenKeyword
end

# The keyword `as`
class TKwas
	super TokenKeyword
end

# The keyword `nullable`
class TKwnullable
	super TokenKeyword
end

# The keyword `isset`
class TKwisset
	super TokenKeyword
end

# The keyword `label`
class TKwlabel
	super TokenKeyword
end

# The keyword `with`
class TKwwith
	super TokenKeyword
end

# The keyword `yield`
class TKwyield
	super TokenKeyword
end

# The special keyword `__DEBUG__`
class TKwdebug
	super Token
end

# The symbol `(`
class TOpar
	super Token
end

# The symbol `)`
class TCpar
	super Token
end

# The symbol `[`
class TObra
	super Token
end

# The symbol `]`
class TCbra
	super Token
end

# The symbol '{'
class TObrace
	super Token
end

# The symbol '}'
class TCbrace
	super Token
end

# The symbol `,`
class TComma
	super Token
end

# The symbol `:`
class TColumn
	super Token
end

# The symbol `::`
class TQuad
	super Token
end

# The symbol `=`
class TAssign
	super Token
end

# A token associated with an operator (and other lookalike symbols)
abstract class TokenOperator
	super Token
	redef fun to_s
	do
		return "operator '{text}'"
	end
end

# The operator `+=`
class TPluseq
	super TokenOperator
end

# The operator `-=`
class TMinuseq
	super TokenOperator
end

# The operator `*=`
class TStareq
	super TokenOperator
end

# The operator `/=`
class TSlasheq
	super TokenOperator
end

# The operator `%=`
class TPercenteq
	super TokenOperator
end

# The operator `**=`
class TStarstareq
	super TokenOperator
end

# The operator `|=`
class TPipeeq
	super TokenOperator
end

# The operator `^=`
class TCareteq
	super TokenOperator
end

# The operator `&=`
class TAmpeq
	super TokenOperator
end

# The operator `<<=`
class TLleq
	super TokenOperator
end

# The operator `>>=`
class TGgeq
	super TokenOperator
end

# The symbol `...`
class TDotdotdot
	super Token
end

# The symbol `..`
class TDotdot
	super Token
end

# The symbol `.`
class TDot
	super Token
end

# The operator `+`
class TPlus
	super TokenOperator
end

# The operator `-`
class TMinus
	super TokenOperator
end

# The operator `*`
class TStar
	super TokenOperator
end

# The operator `**`
class TStarstar
	super TokenOperator
end

# The operator `/`
class TSlash
	super TokenOperator
end

# The operator `%`
class TPercent
	super TokenOperator
end

# The operator `|`
class TPipe
	super TokenOperator
end

# The operator `^`
class TCaret
	super TokenOperator
end

# The operator `&`
class TAmp
	super TokenOperator
end

# The operator `~`
class TTilde
	super TokenOperator
end

# The operator `==`
class TEq
	super TokenOperator
end

# The operator `!=`
class TNe
	super TokenOperator
end

# The operator `<`
class TLt
	super TokenOperator
end

# The operator `<=`
class TLe
	super TokenOperator
end

# The operator `<<`
class TLl
	super TokenOperator
end

# The operator `>`
class TGt
	super TokenOperator
end

# The operator `>=`
class TGe
	super TokenOperator
end

# The operator `>>`
class TGg
	super TokenOperator
end

# The operator `<=>`
class TStarship
	super TokenOperator
end

# The operator `?`
class TQuest
	super TokenOperator
end

# The operator `!`
class TBang
	super TokenOperator
end

# The symbol `@`
class TAt
	super Token
end

# The symbol `;`
class TSemi
	super Token
end

# A class (or formal type) identifier. They start with an uppercase.
class TClassid
	super Token
	redef fun to_s
	do
		do return "type identifier '{text}'"
	end
end

# A standard identifier (variable, method...). They start with a lowercase.
class TId
	super Token
	redef fun to_s
	do
		do return "identifier '{text}'"
	end
end

# An attribute identifier. They start with an underscore.
class TAttrid
	super Token
	redef fun to_s
	do
		do return "attribute '{text}'"
	end
end

# A token of a literal value (string, integer, etc).
abstract class TokenLiteral
	super Token
	redef fun to_s
	do
		do return "literal value '{text}'"
	end
end

# A literal integer
class TInteger
	super TokenLiteral
end

# A literal floating point number
class TFloat
	super TokenLiteral
end

# A literal character
class TChar
	super TokenLiteral
end

# A literal string
class TString
	super TokenLiteral
end

# The starting part of a super string (between `"` and `{`)
class TStartString
	super TokenLiteral
end

# The middle part of a super string (between `}` and `{`)
class TMidString
	super TokenLiteral
end

# The final part of a super string (between `}` and `"`)
class TEndString
	super TokenLiteral
end

# A malformed string
class TBadString
	super Token
	redef fun to_s
	do
		do return "malformed string {text}"
	end
end

# A malformed triple quoted string
class TBadTString
	super TBadString
end

# A malformed char
class TBadChar
	super Token
	redef fun to_s
	do
		do return "malformed character {text}"
	end
end

# A extern code block
class TExternCodeSegment
	super Token
end

# A malformed extern code block
class TBadExtern
	super Token
	redef fun to_s
	do
		do return "malformed extern segment {text}"
	end
end

# A end of file
class EOF
	super Token
	redef fun to_s
	do
		return "end of file"
	end
end

# A mark of an error
class AError
	super EOF
end
# A lexical error (unexpected character)
class ALexerError
	super AError
end
# A syntactic error (unexpected token)
class AParserError
	super AError
end

# The main node of a Nit source-file
class AModule
	super Prod

	# The declaration part of the module
	var n_moduledecl: nullable AModuledecl = null is writable

	# List of importation clauses
	var n_imports = new ANodes[AImport](self)

	# List of extern blocks
	var n_extern_code_blocks = new ANodes[AExternCodeBlock](self)

	# List of class definition (including top-level methods and the main)
	var n_classdefs = new ANodes[AClassdef](self)
end

# Abstract class for definition of entities
abstract class ADefinition
	super Prod
	# The documentation
	var n_doc: nullable ADoc = null is writable

	# The `redef` keyword
	var n_kwredef: nullable TKwredef = null is writable

	# The declared visibility
	var n_visibility: nullable AVisibility = null is writable
end

# The declaration of the module with the documentation, name, and annotations
class AModuledecl
	super ADefinition

	# The `module` keyword
	var n_kwmodule: TKwmodule is writable, noinit

	# The declared module name
	var n_name: AModuleName is writable, noinit
end

# A import clause of a module
abstract class AImport
	super Prod

	# The declared visibility
	var n_visibility: AVisibility is writable, noinit

	# The `import` keyword
	var n_kwimport: TKwimport is writable, noinit
end

# A standard import clause. eg `import x`
class AStdImport
	super AImport
	# The imported module name
	var n_name: AModuleName is writable, noinit
end

# The special import clause of the kernel module. eg `import end`
class ANoImport
	super AImport
	# The `end` keyword, that indicate the root module
	var n_kwend: TKwend is writable, noinit
end

# A visibility modifier
#
# The public visibility is an empty production (no keyword).
#
# Note: even if some visibilities are only valid on some placse (for instance, no `protected` class or no `intrude` method)
# the parser has no such a restriction, therefore the semantic phases has to check that the visibilities make sense.
abstract class AVisibility
	super Prod
end

# An implicit or explicit public visibility modifier
class APublicVisibility
	super AVisibility
	# The `public` keyword, if any
	var n_kwpublic: nullable TKwpublic = null is writable
end
# An explicit private visibility modifier
class APrivateVisibility
	super AVisibility
	# The `private` keyword
	var n_kwprivate: TKwprivate is writable, noinit
end
# An explicit protected visibility modifier
class AProtectedVisibility
	super AVisibility
	# The `protected` keyword
	var n_kwprotected: TKwprotected is writable, noinit
end
# An explicit intrude visibility modifier
class AIntrudeVisibility
	super AVisibility
	# The `intrude` keyword
	var n_kwintrude: TKwintrude is writable, noinit
end

# A class definition
#
# While most definitions are `AStdClassdef`s,
# there are 2 special cases of class definitions.
abstract class AClassdef
	super Prod
	# All the declared properties (including the main method)
	var n_propdefs = new ANodes[APropdef](self)
end

# A standard class definition with a name, superclasses and properties
class AStdClassdef
	super AClassdef
	super ADefinition

	# The class kind (interface, abstract class, etc.)
	var n_classkind: AClasskind is writable, noinit

	# The name of the class
	var n_qid: nullable AQclassid = null is writable

	# The `[` symbol
	var n_obra: nullable TObra = null is writable

	# The list of formal parameter types
	var n_formaldefs = new ANodes[AFormaldef](self)

	# The `]` symbol
	var n_cbra: nullable TCbra = null is writable

	# The extern block code
	var n_extern_code_block: nullable AExternCodeBlock = null is writable

	# The `end` keyword
	var n_kwend: TKwend is writable, noinit

	fun n_superclasses: Array[ASuperPropdef] do
		return [for d in n_propdefs do if d isa ASuperPropdef then d]
	end

	redef fun hot_location do return n_qid.location
end

# The implicit class definition of the implicit main method
class ATopClassdef
	super AClassdef
end

# The implicit class definition of the top-level methods
class AMainClassdef
	super AClassdef
end

# The modifier for the kind of class (abstract, interface, etc.)
abstract class AClasskind
	super Prod
end

# A default, or concrete class modifier (just `class`)
class AConcreteClasskind
	super AClasskind

	# The `class` keyword.
	var n_kwclass: TKwclass is writable, noinit
end

# An abstract class modifier (`abstract class`)
class AAbstractClasskind
	super AClasskind

	# The `abstract` keyword.
	var n_kwabstract: TKwabstract is writable, noinit

	# The `class` keyword.
	var n_kwclass: TKwclass is writable, noinit
end

# An interface class modifier (`interface`)
class AInterfaceClasskind
	super AClasskind

	# The `interface` keyword.
	var n_kwinterface: TKwinterface is writable, noinit
end

# An enum/universal class modifier (`enum class`)
class AEnumClasskind
	super AClasskind

	# The `enum` keyword.
	var n_kwenum: TKwenum is writable, noinit
end

# An extern class modifier (`extern class`)
class AExternClasskind
	super AClasskind

	# The `extern` keyword.
	var n_kwextern: TKwextern is writable, noinit

	# The `class` keyword.
	var n_kwclass: nullable TKwclass = null is writable
end

class ASubsetClasskind
	super AClasskind

	# The `subset` keyword.
	var n_kwsubset: TKwsubset is writable, noinit

	redef fun visit_all(v) do
		# TODO: Remove this redefinition once generated from the grammar.
		v.enter_visit(n_kwsubset)
	end
end

# The definition of a formal generic parameter type. eg `X: Y`
class AFormaldef
	super Prod

	# The name of the parameter type
	var n_id: TClassid is writable, noinit

	# The bound of the parameter type
	var n_type: nullable AType = null is writable
end

# The definition of a property
abstract class APropdef
	super ADefinition
end

# A definition of an attribute
# For historical reason, old-syle and new-style attributes use the same `ANode` sub-class
class AAttrPropdef
	super APropdef

	# The `var` keyword
	var n_kwvar: TKwvar is writable, noinit

	# The identifier for a new-style attribute
	var n_id2: TId is writable, noinit

	# The declared type of the attribute
	var n_type: nullable AType = null is writable

	# The `=` symbol
	var n_assign: nullable TAssign = null is writable

	# The initial value, if any (set with `=`)
	var n_expr: nullable AExpr = null is writable

	# The `do` keyword
	var n_kwdo: nullable TKwdo = null is writable

	# The initial value, if any (set with `do return`)
	var n_block: nullable AExpr = null is writable

	# The `end` keyword
	var n_kwend: nullable TKwend = null is writable

	redef fun hot_location
	do
		return n_id2.location
	end
end

# A definition of all kind of method (including constructors)
class AMethPropdef
	super APropdef

	# The `fun` keyword, if any
	var n_kwmeth: nullable TKwmeth = null is writable

	# The `init` keyword, if any
	var n_kwinit: nullable TKwinit = null is writable

	# The `isa` keyword, if any
	var n_kwisa: nullable TKwisa = null is writable

	# The `new` keyword, if any
	var n_kwnew: nullable TKwnew = null is writable

	# The name of the method, if any
	var n_methid: nullable AMethid = null is writable

	# The signature of the method, if any
	var n_signature: nullable ASignature = null is writable

	# The `do` keyword
	var n_kwdo: nullable TKwdo = null is writable

	# The body (in Nit) of the method, if any
	var n_block: nullable AExpr = null is writable

	# The `end` keyword
	var n_kwend: nullable TKwend = null is writable

	# The list of declared callbacks (for extern methods)
	var n_extern_calls: nullable AExternCalls = null is writable

	# The body (in extern code) of the method, if any
	var n_extern_code_block: nullable AExternCodeBlock = null is writable

	redef fun hot_location
	do
		if n_methid != null then
			return n_methid.location
		else if n_kwinit != null then
			return n_kwinit.location
		else if n_kwnew != null then
			return n_kwnew.location
		else
			return location
		end
	end
end

# The implicit main method
class AMainMethPropdef
	super AMethPropdef
end

class AAnnotPropdef
	super APropdef
	super AAnnotation
end

# A super-class. eg `super X`
class ASuperPropdef
	super APropdef

	# The super keyword
	var n_kwsuper: TKwsuper is writable, noinit

	# The super-class (indicated as a type)
	var n_type: AType is writable, noinit
end

# Declaration of callbacks for extern methods
class AExternCalls
	super Prod

	# The `import` keyword
	var n_kwimport: TKwimport is writable, noinit

	# The list of declared callbacks
	var n_extern_calls: ANodes[AExternCall] = new ANodes[AExternCall](self)
end

# A single callback declaration
abstract class AExternCall
	super Prod
end

# A single callback declaration on a method
abstract class APropExternCall
	super AExternCall
end

# A single callback declaration on a method on the current receiver
class ALocalPropExternCall
	super APropExternCall

	# The name of the called-back method
	var n_methid: AMethid is writable, noinit
end

# A single callback declaration on a method on an explicit receiver type.
class AFullPropExternCall
	super APropExternCall

	# The type of the receiver of the called-back method
	var n_type: AType is writable, noinit

	# The dot `.`
	var n_dot: nullable TDot = null is writable

	# The name of the called-back method
	var n_methid: AMethid is writable, noinit
end

# A single callback declaration on a method on a constructor
class AInitPropExternCall
	super APropExternCall

	# The allocated type
	var n_type: AType is writable, noinit
end

# A single callback declaration on a `super` call
class ASuperExternCall
	super AExternCall

	# The `super` keyword
	var n_kwsuper: TKwsuper is writable, noinit
end

# A single callback declaration on a cast
abstract class ACastExternCall
	super AExternCall
end

# A single callback declaration on a cast to a given type
class ACastAsExternCall
	super ACastExternCall

	# The origin type of the cast
	var n_from_type: AType is writable, noinit

	# The dot (`.`)
	var n_dot: nullable TDot = null is writable

	# The `as` keyword
	var n_kwas: TKwas is writable, noinit

	# The destination of the cast
	var n_to_type: AType is writable, noinit
end

# A single callback declaration on a cast to a nullable type
class AAsNullableExternCall
	super ACastExternCall

	# The origin type to cast as nullable
	var n_type: AType is writable, noinit

	# The `as` keyword
	var n_kwas: TKwas is writable, noinit

	# The `nullable` keyword
	var n_kwnullable: TKwnullable is writable, noinit
end

# A single callback declaration on a cast to a non-nullable type
class AAsNotNullableExternCall
	super ACastExternCall

	# The destination type on a cast to not nullable
	var n_type: AType is writable, noinit

	# The `as` keyword.
	var n_kwas: TKwas is writable, noinit

	# The `not` keyword
	var n_kwnot: TKwnot is writable, noinit

	# The `nullable` keyword
	var n_kwnullable: TKwnullable is writable, noinit
end

# A definition of a virtual type
class ATypePropdef
	super APropdef

	# The `type` keyword
	var n_kwtype: TKwtype is writable, noinit

	# The name of the virtual type
	var n_qid: AQclassid is writable, noinit

	# The bound of the virtual type
	var n_type: AType is writable, noinit
end

# The identifier of a method in a method declaration.
# There is a specific class because of operator and setters.
abstract class AMethid
	super Prod
end

# A method name with a simple identifier
class AIdMethid
	super AMethid

	# The simple identifier
	var n_id: TId is writable, noinit
end

# A method name for an operator
class AOperatorMethid
	super AMethid

	# The associated operator symbol
	var n_op: Token is writable, noinit
end
# A method name `+`
class APlusMethid
	super AOperatorMethid
end

# A method name `-`
class AMinusMethid
	super AOperatorMethid
end

# A method name `*`
class AStarMethid
	super AOperatorMethid
end

# A method name `**`
class AStarstarMethid
	super AOperatorMethid
end

# A method name `/`
class ASlashMethid
	super AOperatorMethid
end

# A method name `%`
class APercentMethid
	super AOperatorMethid
end

# A method name `|`
class APipeMethid
	super AOperatorMethid
end

# A method name `^`
class ACaretMethid
	super AOperatorMethid
end

# A method name `&`
class AAmpMethid
	super AOperatorMethid
end

# A method name `~`
class ATildeMethid
	super AOperatorMethid
end

# A method name `==`
class AEqMethid
	super AOperatorMethid
end

# A method name `!=`
class ANeMethid
	super AOperatorMethid
end

# A method name `<=`
class ALeMethid
	super AOperatorMethid
end

# A method name `>=`
class AGeMethid
	super AOperatorMethid
end

# A method name `<`
class ALtMethid
	super AOperatorMethid
end

# A method name `>`
class AGtMethid
	super AOperatorMethid
end

# A method name `<<`
class ALlMethid
	super AOperatorMethid
end

# A method name `>>`
class AGgMethid
	super AOperatorMethid
end

# A method name `<=>`
class AStarshipMethid
	super AOperatorMethid
end

# A method name `[]`
class ABraMethid
	super AMethid

	# The `[` symbol
	var n_obra: TObra is writable, noinit

	# The `]` symbol
	var n_cbra: TCbra is writable, noinit
end

# A setter method name with a simple identifier (with a `=`)
class AAssignMethid
	super AMethid

	# The base identifier
	var n_id: TId is writable, noinit

	# The `=` symbol
	var n_assign: TAssign is writable, noinit
end

# A method name `[]=`
class ABraassignMethid
	super AMethid

	# The `[` symbol
	var n_obra: TObra is writable, noinit

	# The `]` symbol
	var n_cbra: TCbra is writable, noinit

	# The `=` symbol
	var n_assign: TAssign is writable, noinit
end

# A potentially qualified simple identifier `foo::bar::baz`
class AQid
	super Prod
	# The qualifier, if any
	var n_qualified: nullable AQualified = null is writable

	# The final identifier
	var n_id: TId is writable, noinit

	redef fun is_structural do return true
end

# A potentially qualified class identifier `foo::bar::Baz`
class AQclassid
	super Prod
	# The qualifier, if any
	var n_qualified: nullable AQualified = null is writable

	# The final identifier
	var n_id: TClassid is writable, noinit

	redef fun is_structural do return true
end

# A signature in a method definition. eg `(x,y:X,z:Z):T`
class ASignature
	super Prod

	# The `(` symbol
	var n_opar: nullable TOpar = null is writable

	# The list of parameters
	var n_params = new ANodes[AParam](self)

	# The `)` symbol
	var n_cpar: nullable TCpar = null is writable

	# The return type
	var n_type: nullable AType = null is writable
end

# A parameter definition in a signature. eg `x:X`
class AParam
	super Prod

	# The name of the parameter
	var n_id: TId is writable, noinit

	# The type of the parameter, if any
	var n_type: nullable AType = null is writable

	# The `...` symbol to indicate varargs
	var n_dotdotdot: nullable TDotdotdot = null is writable
end

# A static type. eg `nullable X[Y]`
class AType
	super Prod
	# The `nullable` keyword
	var n_kwnullable: nullable TKwnullable = null is writable

	# The name of the class or of the formal type
	var n_qid: AQclassid is writable, noinit

	# The opening bracket
	var n_obra: nullable TObra = null is writable

	# Type arguments for a generic type
	var n_types = new ANodes[AType](self)

	# The closing bracket
	var n_cbra: nullable TCbra = null is writable
end

# A label at the end of a block or in a break/continue statement. eg `label x`
class ALabel
	super Prod

	# The `label` keyword
	var n_kwlabel: TKwlabel is writable, noinit

	# The name of the label, if any
	var n_id: nullable TId is writable, noinit
end

# Expression and statements
# From a AST point of view there is no distinction between statement and expressions (even if the parser has to distinguish them)
abstract class AExpr
	super Prod
end

# A sequence of `AExpr` (usually statements)
# The last `AExpr` gives the value of the whole block
class ABlockExpr
	super AExpr

	# The list of statements in the bloc.
	# The last element is often considered as an expression that give the value of the whole block.
	var n_expr = new ANodes[AExpr](self)

	# The `end` keyword
	var n_kwend: nullable TKwend = null is writable
end

# A declaration of a local variable. eg `var x: X = y`
class AVardeclExpr
	super AExpr

	# The `var` keyword
	var n_kwvar: nullable TKwvar = null is writable

	# The name of the local variable
	var n_id: TId is writable, noinit

	# The declaration type of the local variable
	var n_type: nullable AType = null is writable

	# The `=` symbol (for the initial value)
	var n_assign: nullable TAssign = null is writable

	# The initial value, if any
	var n_expr: nullable AExpr = null is writable
end

# A `return` statement. eg `return x`
class AReturnExpr
	super AEscapeExpr

	# The `return` keyword
	var n_kwreturn: nullable TKwreturn = null is writable
end

# A `yield` statement. eg `yield x`
class AYieldExpr
	super AExpr

	# The `yield` keyword
	var n_kwyield: nullable TKwyield = null is writable

	# The return value, if any
	var n_expr: nullable AExpr = null is writable
end

# Something that has a label.
abstract class ALabelable
	super Prod

	# The associated label declatation
	var n_label: nullable ALabel = null is writable
end

# A `break` or a `continue`
abstract class AEscapeExpr
	super AExpr
	super ALabelable

	# The return value, if nay (unused currently)
	var n_expr: nullable AExpr = null is writable
end

# A `break` statement.
class ABreakExpr
	super AEscapeExpr

	# The `break` keyword
	var n_kwbreak: TKwbreak is writable, noinit
end

# An `abort` statement
class AAbortExpr
	super AExpr

	# The `abort` keyword
	var n_kwabort: TKwabort is writable, noinit
end

# A `continue` statement
class AContinueExpr
	super AEscapeExpr

	# The `continue` keyword.
	var n_kwcontinue: nullable TKwcontinue = null is writable
end

# A `do` statement
class ADoExpr
	super AExpr
	super ALabelable

	# The `do` keyword
	var n_kwdo: TKwdo is writable, noinit

	# The list of statements of the `do`.
	var n_block: nullable AExpr = null is writable

	# The `catch` keyword
	var n_kwcatch: nullable TKwcatch = null is writable

	# The do catch block
	var n_catch: nullable AExpr = null is writable
end

# A `if` statement
class AIfExpr
	super AExpr

	# The `if` keyword
	var n_kwif: TKwif is writable, noinit

	# The expression used as the condition of the `if`
	var n_expr: AExpr is writable, noinit

	# The `then` keyword
	var n_kwthen: TKwthen is writable, noinit

	# The body of the `then` part
	var n_then: nullable AExpr = null is writable

	# The `else` keyword
	var n_kwelse: nullable TKwelse = null is writable

	# The body of the `else` part
	var n_else: nullable AExpr = null is writable
end

# A `if` expression (ternary conditional). eg. `if true then 1 else 0`
class AIfexprExpr
	super AExpr

	# The `if` keyword
	var n_kwif: TKwif is writable, noinit

	# The expression used as the condition of the `if`
	var n_expr: AExpr is writable, noinit

	# The `then` keyword
	var n_kwthen: TKwthen is writable, noinit

	# The expression in the `then` part
	var n_then: AExpr is writable, noinit

	# The `else` keyword
	var n_kwelse: TKwelse is writable, noinit

	# The expression in the `else` part
	var n_else: AExpr is writable, noinit
end

# A `while` statement
class AWhileExpr
	super AExpr
	super ALabelable

	# The `while` keyword
	var n_kwwhile:  TKwwhile is writable, noinit

	# The expression used as the condition of the `while`
	var n_expr: AExpr is writable, noinit

	# The `do` keyword
	var n_kwdo: TKwdo is writable, noinit

	# The body of the loop
	var n_block: nullable AExpr = null is writable
end

# A `loop` statement
class ALoopExpr
	super AExpr
	super ALabelable

	# The `loop` keyword
	var n_kwloop: TKwloop is writable, noinit

	# The body of the loop
	var n_block: nullable AExpr = null is writable
end

# A `for` statement
class AForExpr
	super AExpr
	super ALabelable

	# The `for` keyword
	var n_kwfor: TKwfor is writable, noinit

	# The list of groups to iterate
	var n_groups = new ANodes[AForGroup](self)

	# The `do` keyword
	var n_kwdo: TKwdo is writable, noinit

	# The body of the loop
	var n_block: nullable AExpr = null is writable
end

# A collection iterated by a for, its automatic variables and its implicit iterator.
#
# Standard `for` iterate on a single collection.
# Multiple `for` can iterate on more than one collection at once.
class AForGroup
	super Prod

	# The list of name of the automatic variables
	var n_ids = new ANodes[TId](self)

	# The `in` keyword
	var n_kwin: TKwin is writable, noinit

	# The expression used as the collection to iterate on
	var n_expr: AExpr is writable, noinit
end

# A `with` statement
class AWithExpr
	super AExpr
	super ALabelable

	# The `with` keyword
	var n_kwwith: TKwwith is writable, noinit

	# The expression used to get the value to control
	var n_expr: AExpr is writable, noinit

	# The `do` keyword
	var n_kwdo: TKwdo is writable, noinit

	# The body of the loop
	var n_block: nullable AExpr = null is writable
end

# An `assert` statement
class AAssertExpr
	super AExpr

	# The `assert` keyword
	var n_kwassert: TKwassert is writable, noinit

	# The name of the assert, if any
	var n_id: nullable TId = null is writable

	# The expression used as the condition of the `assert`
	var n_expr: AExpr is writable, noinit

	# The `else` keyword
	var n_kwelse: nullable TKwelse = null is writable

	# The body to execute when the assert fails
	var n_else: nullable AExpr = null is writable
end

# Whatever is a simple assignment. eg `= something`
abstract class AAssignFormExpr
	super AExpr

	# The `=` symbol
	var n_assign: TAssign is writable, noinit

	# The right-value to assign.
	var n_value: AExpr is writable, noinit
end

# Whatever is a combined assignment. eg `+= something`
abstract class AReassignFormExpr
	super AExpr

	# The combined operator (eg. `+=`)
	var n_assign_op: AAssignOp is writable, noinit

	# The right-value to apply on the combined operator.
	var n_value: AExpr is writable, noinit
end

# A `once` expression. eg `once x`
class AOnceExpr
	super AExpr

	# The `once` keyword
	var n_kwonce: TKwonce is writable, noinit

	# The expression to evaluate only one time
	var n_expr: AExpr is writable, noinit
end

# A polymorphic invocation of a method
# The form of the invocation (name, arguments, etc.) are specific
abstract class ASendExpr
	super AExpr
	# The receiver of the method invocation
	var n_expr: AExpr is writable, noinit
end

# A binary operation on a method
abstract class ABinopExpr
	super ASendExpr

	# The operator
	var n_op: Token is writable, noinit

	# The second operand of the operation
	# Note: the receiver (`n_expr`) is the first operand
	var n_expr2: AExpr is writable, noinit

	# The name of the operator (eg '+')
	fun operator: String is abstract
end

# Something that is boolean expression
abstract class ABoolExpr
	super AExpr
end

# Something that is binary boolean expression
abstract class ABinBoolExpr
	super ABoolExpr

	# The first boolean operand
	var n_expr: AExpr is writable, noinit

	# The operator
	var n_op: Token is writable, noinit

	# The second boolean operand
	var n_expr2: AExpr is writable, noinit
end

# A `or` expression
class AOrExpr
	super ABinBoolExpr
end

# A `and` expression
class AAndExpr
	super ABinBoolExpr
end

# A `or else` expression
class AOrElseExpr
	super ABinBoolExpr

	# The `else` keyword
	var n_kwelse: TKwelse is writable, noinit
end

# A `implies` expression
class AImpliesExpr
	super ABinBoolExpr
end

# A `not` expression
class ANotExpr
	super ABoolExpr

	# The `not` keyword
	var n_kwnot: TKwnot is writable, noinit

	# The boolean operand of the `not`
	var n_expr: AExpr is writable, noinit
end

# A `==` or a `!=` expression
#
# Both have a similar effect on adaptive typing, so this class factorizes the common behavior.
class AEqFormExpr
	super ABinopExpr
end

# A `==` expression
class AEqExpr
	super AEqFormExpr
	redef fun operator do return "=="
end

# A `!=` expression
class ANeExpr
	super AEqFormExpr
	redef fun operator do return "!="
end

# A `<` expression
class ALtExpr
	super ABinopExpr
	redef fun operator do return "<"
end

# A `<=` expression
class ALeExpr
	super ABinopExpr
	redef fun operator do return "<="
end

# A `<<` expression
class ALlExpr
	super ABinopExpr
	redef fun operator do return "<<"
end

# A `>` expression
class AGtExpr
	super ABinopExpr
	redef fun operator do return ">"
end

# A `>=` expression
class AGeExpr
	super ABinopExpr
	redef fun operator do return ">="
end

# A `>>` expression
class AGgExpr
	super ABinopExpr
	redef fun operator do return ">>"
end

# A type-ckeck expression. eg `x isa T`
class AIsaExpr
	super ABoolExpr

	# The expression to check
	var n_expr: AExpr is writable, noinit

	# The `isa` keyword
	var n_kwisa: TKwisa is writable, noinit

	# The destination type to check to
	var n_type: AType is writable, noinit
end

# A `+` expression
class APlusExpr
	super ABinopExpr
	redef fun operator do return "+"
end

# A `-` expression
class AMinusExpr
	super ABinopExpr
	redef fun operator do return "-"
end

# A `<=>` expression
class AStarshipExpr
	super ABinopExpr
	redef fun operator do return "<=>"
end

# A `*` expression
class AStarExpr
	super ABinopExpr
	redef fun operator do return "*"
end

# A `**` expression
class AStarstarExpr
	super ABinopExpr
	redef fun operator do return "**"
end

# A `/` expression
class ASlashExpr
	super ABinopExpr
	redef fun operator do return "/"
end

# A `%` expression
class APercentExpr
	super ABinopExpr
	redef fun operator do return "%"
end

# A `|` expression
class APipeExpr
	super ABinopExpr
	redef fun operator do return "|"
end

# A `^` expression
class ACaretExpr
	super ABinopExpr
	redef fun operator do return "^"
end

# A `&` expression
class AAmpExpr
	super ABinopExpr
	redef fun operator do return "&"
end

# A unary operation on a method
abstract class AUnaryopExpr
	super ASendExpr

	# The operator
	var n_op: Token is writable, noinit

	# The name of the operator (eg '+')
	fun operator: String is abstract
end

# A unary minus expression. eg `-x`
class AUminusExpr
	super AUnaryopExpr
	redef fun operator do return "-"
end

# A unary plus expression. eg `+x`
class AUplusExpr
	super AUnaryopExpr
	redef fun operator do return "+"
end

# A unary `~` expression
class AUtildeExpr
	super AUnaryopExpr
	redef fun operator do return "~"
end

# An explicit instantiation. eg `new T`
class ANewExpr
	super AExpr

	# The `new` keyword
	var n_kwnew: TKwnew is writable, noinit

	# The `type` keyword
	var n_type: AType is writable, noinit

	# The name of the named-constructor, if any
	var n_qid: nullable AQid = null is writable

	# The arguments of the `new`
	var n_args: AExprs is writable, noinit
end

# Whatever is a old-style attribute access
abstract class AAttrFormExpr
	super AExpr

	# The receiver of the attribute
	var n_expr: AExpr is writable, noinit

	# The name of the attribute
	var n_id: TAttrid is writable, noinit

end

# The read of an attribute. eg `x._a`
class AAttrExpr
	super AAttrFormExpr
end

# The assignment of an attribute. eg `x._a=y`
class AAttrAssignExpr
	super AAttrFormExpr
	super AAssignFormExpr
end

# Whatever looks-like a call with a standard method and any number of arguments.
abstract class ACallFormExpr
	super ASendExpr

	# The name of the method
	var n_qid: AQid is writable, noinit

	# The arguments of the call
	var n_args: AExprs is writable, noinit
end

# A complex setter call (standard or brackets)
abstract class ASendReassignFormExpr
	super ASendExpr
	super AReassignFormExpr
end

# A complex attribute assignment. eg `x._a+=y`
class AAttrReassignExpr
	super AAttrFormExpr
	super AReassignFormExpr
end

# A call with a standard method-name and any number of arguments. eg `x.m(y)`. OR just a simple id
# Note: because the parser cannot distinguish a variable read with a method call with an implicit receiver and no arguments, it always returns a `ACallExpr`.
# Semantic analysis have to transform them to instance of `AVarExpr`.
class ACallExpr
	super ACallFormExpr
end

# A setter call with a standard method-name and any number of arguments. eg `x.m(y)=z`. OR just a simple assignment.
# Note: because the parser cannot distinguish a variable write with a setter call with an implicit receiver and no arguments, it always returns a `ACallAssignExpr`.
# Semantic analysis have to transform them to instance of `AVarAssignExpr`.
class ACallAssignExpr
	super ACallFormExpr
	super AAssignFormExpr
end

# A complex setter call with a standard method-name and any number of arguments. eg `x.m(y)+=z`. OR just a simple complex assignment.
# Note: because the parser cannot distinguish a variable write with a complex setter call with an implicit receiver and no arguments, it always returns a `ACallReassignExpr`.
# Semantic analysis have to transform them to instance of `AVarReassignExpr`.
class ACallReassignExpr
	super ACallFormExpr
	super ASendReassignFormExpr
end

# A reference to a method with a captured receiver. eg. `&x.foo` or just `&foo` is self is captured.
#
# Currently, the syntax is analogous to a simple call (`recv.foo`) with a prefix `&`.
# On chains, only the last call is captured (`.` has a higher precedence than `&`).
#
# The syntax is analogous to a call (except the &), there is always a receiver (including the implicit self or sys) and arguments are accepted by the parser.
#
# TODO There is no clear syntax proposal
#
# * to avoid the capture of a receiver since a receiver is statically expected to resolve the method name
# * for special method names (setters, brackets and operators)
#
# Note: The class specializes `ASendExpr` (trough `ACallFormExpr`) so some behavior of a genuine send expression must be redefined.
class ACallrefExpr
       super ACallFormExpr

       # The `&` operator
       var n_amp: TAmp is writable, noinit

       # The `type` of the receiver if not any.
       var n_type: nullable AType = null is writable
end

# A call to `super`. OR a call of a super-constructor
class ASuperExpr
	super AExpr

	# The qualifier part before the super (currenlty unused)
	var n_qualified: nullable AQualified = null is writable

	# The `super` keyword
	var n_kwsuper: TKwsuper is writable, noinit

	# The arguments of the super
	var n_args: AExprs is writable, noinit
end

# A call to the `init` constructor.
# Note: because `init` is a keyword and not a `TId`, the explicit call to init cannot be a `ACallFormExpr`.
class AInitExpr
	super ASendExpr

	# The `init` keyword
	var n_kwinit: TKwinit is writable, noinit

	# The arguments of the init
	var n_args: AExprs is writable, noinit
end

# Whatever looks-like a call of the brackets `[]` operator.
abstract class ABraFormExpr
	super ASendExpr

	# The arguments inside the brackets
	var n_args: AExprs is writable, noinit
end

# A call of the brackets operator. eg `x[y,z]`
class ABraExpr
	super ABraFormExpr
end

# A setter call of the bracket operator. eg `x[y,z]=t`
class ABraAssignExpr
	super ABraFormExpr
	super AAssignFormExpr
end

# Whatever is an access to a local variable
abstract class AVarFormExpr
	super AExpr

	# The name of the attribute
	var n_id: TId is writable, noinit
end

# A complex setter call of the bracket operator. eg `x[y,z]+=t`
class ABraReassignExpr
	super ABraFormExpr
	super ASendReassignFormExpr
end

# A local variable read access.
# The parser cannot instantiate them, see `ACallExpr`.
class AVarExpr
	super AVarFormExpr
end

# A local variable simple assignment access
# The parser cannot instantiate them, see `ACallAssignExpr`.
class AVarAssignExpr
	super AVarFormExpr
	super AAssignFormExpr
end

# A local variable complex assignment access
# The parser cannot instantiate them, see `ACallReassignExpr`.
class AVarReassignExpr
	super AVarFormExpr
	super AReassignFormExpr
end

# A literal range, open or closed
abstract class ARangeExpr
	super AExpr

	# The left (lower) element of the range
	var n_expr: AExpr is writable, noinit

	# The `..`
	var n_dotdot: TDotdot is writable, noinit

	# The right (upper) element of the range
	var n_expr2: AExpr is writable, noinit
end

# A closed literal range. eg `[x..y]`
class ACrangeExpr
	super ARangeExpr

	# The opening bracket `[`
	var n_obra: TObra is writable, noinit

	# The closing bracket `]`
	var n_cbra: TCbra is writable, noinit
end

# An open literal range. eg `[x..y[`
class AOrangeExpr
	super ARangeExpr

	# The opening bracket `[`
	var n_obra: TObra is writable, noinit

	# The closing bracket `[` (because open range)
	var n_cbra: TObra is writable, noinit
end

# A literal array. eg. `[x,y,z]`
class AArrayExpr
	super AExpr

	# The opening bracket `[`
	var n_obra: TObra is writable, noinit

	# The elements of the array
	var n_exprs = new ANodes[AExpr](self)

	# The type of the element of the array (if any)
	var n_type: nullable AType = null is writable

	# The closing bracket `]`
	var n_cbra: TCbra is writable, noinit
end

# A read of `self`
class ASelfExpr
	super AExpr

	# The `self` keyword
	var n_kwself: nullable TKwself = null is writable
end

# When there is no explicit receiver, `self` is implicit
class AImplicitSelfExpr
	super ASelfExpr
end

# A `true` boolean literal constant
class ATrueExpr
	super ABoolExpr

	# The `true` keyword
	var n_kwtrue: TKwtrue is writable, noinit
end

# A `false` boolean literal constant
class AFalseExpr
	super ABoolExpr

	# The `false` keyword
	var n_kwfalse: TKwfalse is writable, noinit
end

# A `null` literal constant
class ANullExpr
	super AExpr

	# The `null` keyword
	var n_kwnull: TKwnull is writable, noinit
end

# An integer literal
class AIntegerExpr
	super AExpr

	# The integer token
	var n_integer: TInteger is writable, noinit
end

# A float literal
class AFloatExpr
	super AExpr

	# The float token
	var n_float: TFloat is writable, noinit
end

# A character literal
class ACharExpr
	super AExpr

	# The character token
	var n_char: TChar is writable, noinit
end

# A string literal
abstract class AStringFormExpr
	super AExpr

	# The string token
	var n_string: Token is writable, noinit
end

# A simple string. eg. `"abc"`
class AStringExpr
	super AStringFormExpr
end

# The start of a superstring. eg `"abc{`
class AStartStringExpr
	super AStringFormExpr
end

# The middle of a superstring. eg `}abc{`
class AMidStringExpr
	super AStringFormExpr
end

# The end of a superstrng. eg `}abc"`
class AEndStringExpr
	super AStringFormExpr
end

# A superstring literal. eg `"a{x}b{y}c"`
# Each part is modeled a sequence of expression. eg. `["a{, x, }b{, y, }c"]`
class ASuperstringExpr
	super AExpr

	# The list of the expressions of the superstring
	var n_exprs = new ANodes[AExpr](self)
end

class ALambdaExpr
	super AExpr
	var n_kwmeth: TKwmeth is writable, noinit
	var n_signature: ASignature is writable, noinit
	var n_kwdo: TKwdo is writable, noinit
	var n_expr: AExpr is writable, noinit
end

# A simple parenthesis. eg `(x)`
class AParExpr
	super AExpr

	# The opening parenthesis
	var n_opar: TOpar is writable, noinit

	# The inner expression
	var n_expr: AExpr is writable, noinit

	# The closing parenthesis
	var n_cpar: TCpar is writable, noinit
end

# A cast, against a type or `not null`
class AAsCastForm
	super AExpr

	# The expression to cast
	var n_expr: AExpr is writable, noinit

	# The `as` keyword
	var n_kwas: TKwas is writable, noinit

	# The opening parenthesis
	var n_opar: nullable TOpar = null is writable

	# The closing parenthesis
	var n_cpar: nullable TCpar = null is writable
end

# A type cast. eg `x.as(T)`
class AAsCastExpr
	super AAsCastForm

	# The target type to cast to
	var n_type: AType is writable, noinit
end

# A as-not-null cast. eg `x.as(not null)`
class AAsNotnullExpr
	super AAsCastForm

	# The `not` keyword
	var n_kwnot: TKwnot is writable, noinit

	# The `null` keyword
	var n_kwnull: TKwnull is writable, noinit
end

# A is-set check of old-style attributes. eg `isset x._a`
class AIssetAttrExpr
	super AAttrFormExpr

	# The `isset` keyword
	var n_kwisset: TKwisset is writable, noinit
end

# An ellipsis notation used to pass an expression as it, in a vararg parameter
class AVarargExpr
	super AExpr

	# The passed expression
	var n_expr: AExpr is writable, noinit

	# The `...` symbol
	var n_dotdotdot: TDotdotdot is writable, noinit
end

# A receiver with a `?` suffix used in safe call operator.
class ASafeExpr
	super AExpr

	# The expression made safe
	var n_expr: AExpr is writable, noinit

	# The `?` symbol
	var n_quest: TQuest is writable, noinit
end

# An named notation used to pass an expression by name in a parameter
class ANamedargExpr
	super AExpr

	# The name of the argument
	var n_id: TId is writable, noinit

	# The `=` synbol
	var n_assign: TAssign is writable, noinit

	# The passed expression
	var n_expr: AExpr is writable, noinit
end

# A list of expression separated with commas (arguments for instance)
class AManyExpr
	super AExpr

	# The list of expressions
	var n_exprs = new ANodes[AExpr](self)
end

# A special expression that encapsulates a static type
# Can only be found in special construction like arguments of annotations.
class ATypeExpr
	super AExpr

	# The encapsulated type
	var n_type: AType is writable, noinit
end

# A special expression that encapsulates a method identifier
# Can only be found in special construction like arguments of annotations.
class AMethidExpr
	super AExpr

	# The receiver
	var n_expr: AExpr is writable, noinit

	# The encapsulated method identifier
	var n_id: AMethid is writable, noinit
end

# A special expression that encapsulate an annotation
# Can only be found in special construction like arguments of annotations.
#
# The encapsulated annotations are in `n_annotations`
class AAtExpr
	super AExpr
end

# A special expression to debug types
class ADebugTypeExpr
	super AExpr

	# The `debug` keyword
	var n_kwdebug: TKwdebug is writable, noinit

	# The `type` keyword
	var n_kwtype: TKwtype is writable, noinit

	# The expression to check
	var n_expr: AExpr is writable, noinit

	# The type to check
	var n_type: AType is writable, noinit
end

# A list of expression separated with commas (arguments for instance)
abstract class AExprs
	super Prod

	# The list of expressions
	var n_exprs = new ANodes[AExpr](self)
end

# A simple list of expressions
class AListExprs
	super AExprs
end

# A list of expressions enclosed in parentheses
class AParExprs
	super AExprs

	# The opening parenthesis
	var n_opar: TOpar is writable, noinit

	# The closing parenthesis
	var n_cpar: TCpar is writable, noinit
end

# A list of expressions enclosed in brackets
class ABraExprs
	super AExprs

	# The opening bracket
	var n_obra: TObra is writable, noinit

	# The closing bracket
	var n_cbra: TCbra is writable, noinit
end

# A complex assignment operator. (`+=` and `-=`)
abstract class AAssignOp
	super Prod

	# The combined assignment operator
	var n_op: Token is writable, noinit

	# The name of the operator without the `=` (eg '+')
	fun operator: String is abstract
end

# A `+=` assignment operation
class APlusAssignOp
	super AAssignOp

	redef fun operator do return "+"
end

# A `-=` assignment operation
class AMinusAssignOp
	super AAssignOp

	redef fun operator do return "-"
end

# A `*=` assignment operation
class AStarAssignOp
	super AAssignOp

	redef fun operator do return "*"
end

# A `/=` assignment operation
class ASlashAssignOp
	super AAssignOp

	redef fun operator do return "/"
end

# A `%=` assignment operation
class APercentAssignOp
	super AAssignOp

	redef fun operator do return "%"
end

# A `**=` assignment operation
class AStarstarAssignOp
	super AAssignOp

	redef fun operator do return "**"
end

# A `|=` assignment operation
class APipeAssignOp
	super AAssignOp

	redef fun operator do return "|"
end

# A `^=` assignment operation
class ACaretAssignOp
	super AAssignOp

	redef fun operator do return "^"
end

# A `&=` assignment operation
class AAmpAssignOp
	super AAssignOp

	redef fun operator do return "&"
end

# A `<<=` assignment operation
class ALlAssignOp
	super AAssignOp

	redef fun operator do return "<<"
end

# A `>>=` assignment operation
class AGgAssignOp
	super AAssignOp

	redef fun operator do return ">>"
end

# A possibly fully-qualified module identifier
class AModuleName
	super Prod

	# The starting quad (`::`)
	var n_quad: nullable TQuad = null is writable

	# The list of quad-separated package/group identifiers
	var n_path = new ANodes[TId](self)

	# The final module identifier
	var n_id: TId is writable, noinit
end

# A language declaration for an extern block
class AInLanguage
	super Prod

	# The `in` keyword
	var n_kwin: TKwin is writable, noinit

	# The language name
	var n_string: TString is writable, noinit
end

# An full extern block
class AExternCodeBlock
	super Prod

	# The language declration
	var n_in_language: nullable AInLanguage = null is writable

	# The block of extern code
	var n_extern_code_segment: TExternCodeSegment is writable, noinit
end

# A possible full method qualifier.
class AQualified
	super Prod

	# The starting quad (`::`)
	var n_quad: nullable TQuad = null is writable

	# The list of quad-separated package/group/module identifiers
	var n_id = new ANodes[TId](self)

	# A class identifier
	var n_classid: nullable TClassid = null is writable
end

# A documentation of a definition
# It contains the block of comments just above the declaration
class ADoc
	super Prod

	# A list of lines of comment
	var n_comment = new ANodes[TComment](self)
end

# A group of annotation on a node
#
# This same class is used for the 3 kind of annotations:
#
# * *is* annotations. eg `module foo is bar`.
# * *at* annotations. eg `foo@bar` or `foo@(bar,baz)`.
# * *class* annotations, defined in classes.
class AAnnotations
	super Prod

	# The `is` keyword, for *is* annotations
	var n_kwis: nullable TKwis = null is writable

	# The `@` symbol, for *at* annotations
	var n_at: nullable TAt = null is writable

	# The opening parenthesis in *at* annotations
	var n_opar: nullable TOpar = null is writable

	# The list of annotations
	var n_items = new ANodes[AAnnotation](self)

	# The closing parenthesis in *at* annotations
	var n_cpar: nullable TCpar = null is writable

	# The `end` keyword, for *is* annotations
	var n_kwend: nullable TKwend = null is writable
end

# A single annotation
class AAnnotation
	super ADefinition

	# The name of the annotation
	var n_atid: AAtid is writable, noinit

	# The opening parenthesis of the arguments
	var n_opar: nullable TOpar = null is writable

	# The list of arguments
	var n_args = new ANodes[AExpr](self)

	# The closing parenthesis
	var n_cpar: nullable TCpar = null is writable

	# The name of the annotation
	fun name: String
	do
		return n_atid.n_id.text
	end
end

# An annotation name
abstract class AAtid
	super Prod

	# The identifier of the annotation.
	#
	# Can be a TId or a keyword.
	var n_id: Token is writable, noinit
end

# An annotation name based on an identifier
class AIdAtid
	super AAtid
end

# An annotation name based on the keyword `extern`
class AKwexternAtid
	super AAtid
end

# An annotation name based on the keyword `import`
class AKwimportAtid
	super AAtid
end

# An annotation name based on the keyword `abstract`
class AKwabstractAtid
	super AAtid
end

# The root of the AST
class Start
	super Prod

	# The main module
	var n_base: nullable AModule is writable

	# The end of file (or error) token
	var n_eof: EOF is writable
end
