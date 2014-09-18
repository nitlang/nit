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

# Root of the AST class-hierarchy
abstract class ANode
	# Location is set during AST building. Once built, location cannon be null.
	# However, manual instantiated nodes may need more care.
	var location: Location is writable, noinit

	# The location of the important part of the node (identifier or whatever)
	fun hot_location: Location do return location

	# Display a message for the colored location of the node
	fun debug(message: String)
	do
		sys.stderr.write "{hot_location} {self.class_name}: {message}\n{hot_location.colored_line("0;32")}\n"
	end

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
	# Aborts if the node is not detashable. use `replace_with` instead
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
end

# A sequence of nodes
# There is a specifc class (instead of a using Array) to track the parent/child relation when nodes are added or removed
class ANodes[E: ANode]
	super Sequence[E]
	private var parent: ANode
	private var items = new Array[E]
	redef fun iterator do return items.iterator
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

	# Used in parent contructor to fill elements
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
	fun text=(text: String) is abstract

	# The previous token in the Lexer.
	# May have disapeared in the AST
	var prev_token: nullable Token = null

	# The next token in the Lexer.
	# May have disapeared in the AST
	var next_token: nullable Token = null

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
	# May have disapeared in the final AST
	var first_token: nullable Token = null

	# The first token parser by the lexer
	# May have disapeared in the final AST
	var last_token: nullable Token = null
end

# Ancestor of all productions
# A production is a node without text but that usually has children.
abstract class Prod
	super ANode

	# All the annotations attached directly to the node
	var n_annotations: nullable AAnnotations = null is writable

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
class TKwpackage
	super TokenKeyword
end
class TKwmodule
	super TokenKeyword
end
class TKwimport
	super TokenKeyword
end
class TKwclass
	super TokenKeyword
end
class TKwabstract
	super TokenKeyword
end
class TKwinterface
	super TokenKeyword
end
class TKwenum
	super TokenKeyword
end
class TKwend
	super TokenKeyword
end
class TKwmeth
	super TokenKeyword
end
class TKwtype
	super TokenKeyword
end
class TKwinit
	super TokenKeyword
end
class TKwredef
	super TokenKeyword
end
class TKwis
	super TokenKeyword
end
class TKwdo
	super TokenKeyword
end
class TKwvar
	super TokenKeyword
end
class TKwextern
	super TokenKeyword
end
class TKwpublic
	super TokenKeyword
end
class TKwprotected
	super TokenKeyword
end
class TKwprivate
	super TokenKeyword
end
class TKwintrude
	super TokenKeyword
end
class TKwif
	super TokenKeyword
end
class TKwthen
	super TokenKeyword
end
class TKwelse
	super TokenKeyword
end
class TKwwhile
	super TokenKeyword
end
class TKwloop
	super TokenKeyword
end
class TKwfor
	super TokenKeyword
end
class TKwin
	super TokenKeyword
end
class TKwand
	super TokenKeyword
end
class TKwor
	super TokenKeyword
end
class TKwimplies
	super TokenKeyword
end
class TKwnot
	super TokenKeyword
end
class TKwreturn
	super TokenKeyword
end
class TKwcontinue
	super TokenKeyword
end
class TKwbreak
	super TokenKeyword
end
class TKwabort
	super TokenKeyword
end
class TKwassert
	super TokenKeyword
end
class TKwnew
	super TokenKeyword
end
class TKwisa
	super TokenKeyword
end
class TKwonce
	super TokenKeyword
end
class TKwsuper
	super TokenKeyword
end
class TKwself
	super TokenKeyword
end
class TKwtrue
	super TokenKeyword
end
class TKwfalse
	super TokenKeyword
end
class TKwnull
	super TokenKeyword
end
class TKwas
	super TokenKeyword
end
class TKwnullable
	super TokenKeyword
end
class TKwisset
	super TokenKeyword
end
class TKwlabel
	super TokenKeyword
end
class TKwdebug
	super Token
end
class TOpar
	super Token
end
class TCpar
	super Token
end
class TObra
	super Token
end
class TCbra
	super Token
end
class TComma
	super Token
end
class TColumn
	super Token
end
class TQuad
	super Token
end
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
class TPluseq
	super TokenOperator
end
class TMinuseq
	super TokenOperator
end
class TDotdotdot
	super Token
end
class TDotdot
	super Token
end
class TDot
	super Token
end
class TPlus
	super TokenOperator
end
class TMinus
	super TokenOperator
end
class TStar
	super TokenOperator
end
class TStarstar
	super TokenOperator
end
class TSlash
	super TokenOperator
end
class TPercent
	super TokenOperator
end
class TEq
	super TokenOperator
end
class TNe
	super TokenOperator
end
class TLt
	super TokenOperator
end
class TLe
	super TokenOperator
end
class TLl
	super TokenOperator
end
class TGt
	super TokenOperator
end
class TGe
	super TokenOperator
end
class TGg
	super TokenOperator
end
class TStarship
	super TokenOperator
end
class TBang
	super TokenOperator
end
class TAt
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
class TNumber
	super TokenLiteral
end
class THexNumber
	super TokenLiteral
end
class TFloat
	super TokenLiteral
end
class TChar
	super TokenLiteral
end
class TString
	super TokenLiteral
end
class TStartString
	super TokenLiteral
end
class TMidString
	super TokenLiteral
end
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

# A malformed char
class TBadChar
	super Token
	redef fun to_s
	do
		do return "malformed character {text}"
	end
end

class TExternCodeSegment
	super Token
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
class ALexerError
	super AError
end
class AParserError
	super AError
end

# The main node of a Nit source-file
class AModule
	super Prod

	var n_moduledecl: nullable AModuledecl = null is writable
	var n_imports: ANodes[AImport] = new ANodes[AImport](self)
	var n_extern_code_blocks: ANodes[AExternCodeBlock] = new ANodes[AExternCodeBlock](self)
	var n_classdefs: ANodes[AClassdef] = new ANodes[AClassdef](self)
end

# The declaration of the module with the documentation, name, and annotations
class AModuledecl
	super Prod
	var n_doc: nullable ADoc = null is writable
	var n_kwredef: nullable TKwredef = null is writable
	var n_visibility: AVisibility is writable, noinit
	var n_kwmodule: TKwmodule is writable, noinit
	var n_name: AModuleName is writable, noinit
end

# A import clause of a module
abstract class AImport
	super Prod
end

# A standard import clause. eg `import x`
class AStdImport
	super AImport
	var n_visibility: AVisibility is writable, noinit
	var n_kwimport: TKwimport is writable, noinit
	var n_name: AModuleName is writable, noinit
end

# The special import clause of the kernel module. eg `import end`
class ANoImport
	super AImport
	var n_visibility: AVisibility is writable, noinit
	var n_kwimport: TKwimport is writable, noinit
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
class APublicVisibility
	super AVisibility
	var n_kwpublic: nullable TKwpublic is writable
end
class APrivateVisibility
	super AVisibility
	var n_kwprivate: TKwprivate is writable, noinit
end
class AProtectedVisibility
	super AVisibility
	var n_kwprotected: TKwprotected is writable, noinit
end
class AIntrudeVisibility
	super AVisibility
	var n_kwintrude: TKwintrude is writable, noinit
end

# A class definition
# While most definition are `AStdClassdef`
# There is tow special case of class definition
abstract class AClassdef
	super Prod
	var n_propdefs: ANodes[APropdef] = new ANodes[APropdef](self)
end

# A standard class definition with a name, superclasses and properties
class AStdClassdef
	super AClassdef
	var n_doc: nullable ADoc = null is writable
	var n_kwredef: nullable TKwredef = null is writable
	var n_visibility: AVisibility is writable, noinit
	var n_classkind: AClasskind is writable, noinit
	var n_id: nullable TClassid = null is writable
	var n_formaldefs: ANodes[AFormaldef] = new ANodes[AFormaldef](self)
	var n_extern_code_block: nullable AExternCodeBlock = null is writable
	var n_superclasses: ANodes[ASuperclass] = new ANodes[ASuperclass](self)
	var n_kwend: TKwend is writable, noinit
	redef fun hot_location do return n_id.location
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
class AConcreteClasskind
	super AClasskind
	var n_kwclass: TKwclass is writable, noinit
end
class AAbstractClasskind
	super AClasskind
	var n_kwabstract: TKwabstract is writable, noinit
	var n_kwclass: TKwclass is writable, noinit
end
class AInterfaceClasskind
	super AClasskind
	var n_kwinterface: TKwinterface is writable, noinit
end
class AEnumClasskind
	super AClasskind
	var n_kwenum: TKwenum is writable, noinit
end
class AExternClasskind
	super AClasskind
	var n_kwextern: TKwextern is writable, noinit
	var n_kwclass: nullable TKwclass = null is writable
end

# The definition of a formal generic parameter type. eg `X: Y`
class AFormaldef
	super Prod
	var n_id: TClassid is writable, noinit
	# The bound of the parameter type
	var n_type: nullable AType = null is writable
end

# A super-class. eg `super X`
class ASuperclass
	super Prod
	var n_kwsuper: TKwsuper is writable, noinit
	var n_type: AType is writable, noinit
end

# The definition of a property
abstract class APropdef
	super Prod
	var n_doc: nullable ADoc = null is writable
	var n_kwredef: nullable TKwredef = null is writable
	var n_visibility: nullable AVisibility = null is writable
end

# A definition of an attribute
# For historical reason, old-syle and new-style attributes use the same `ANode` sub-class
class AAttrPropdef
	super APropdef
	var n_kwvar: TKwvar is writable, noinit

	# The identifier for a new-style attribute (null if old-style)
	var n_id2: TId is writable, noinit

	var n_type: nullable AType = null is writable

	# The initial value, if any
	var n_expr: nullable AExpr = null is writable
	redef fun hot_location
	do
		return n_id2.location
	end
end

# A definition of all kind of method (including constructors)
class AMethPropdef
	super APropdef
	var n_kwmeth: nullable TKwmeth = null is writable
	var n_kwinit: nullable TKwinit = null is writable
	var n_kwnew: nullable TKwnew = null is writable
	var n_methid: nullable AMethid = null is writable
	var n_signature: nullable ASignature = null is writable
	var n_block: nullable AExpr = null is writable
	var n_extern_calls: nullable AExternCalls = null is writable
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

# Declaration of callbacks for extern methods
class AExternCalls
	super Prod
	var n_kwimport: TKwimport is writable, noinit
	var n_extern_calls: ANodes[AExternCall] = new ANodes[AExternCall](self)
end
abstract class AExternCall
	super Prod
end
abstract class APropExternCall
	super AExternCall
end
class ALocalPropExternCall
	super APropExternCall
	var n_methid: AMethid is writable, noinit
end
class AFullPropExternCall
	super APropExternCall
	var n_type: AType is writable, noinit
	var n_dot: nullable TDot = null is writable
	var n_methid: AMethid is writable, noinit
end
class AInitPropExternCall
	super APropExternCall
	var n_type: AType is writable, noinit
end
class ASuperExternCall
	super AExternCall
	var n_kwsuper: TKwsuper is writable, noinit
end
abstract class ACastExternCall
	super AExternCall
end
class ACastAsExternCall
	super ACastExternCall
	var n_from_type: AType is writable, noinit
	var n_dot: nullable TDot = null is writable
	var n_kwas: TKwas is writable, noinit
	var n_to_type: AType is writable, noinit
end
class AAsNullableExternCall
	super ACastExternCall
	var n_type: AType is writable, noinit
	var n_kwas: TKwas is writable, noinit
	var n_kwnullable: TKwnullable is writable, noinit
end
class AAsNotNullableExternCall
	super ACastExternCall
	var n_type: AType is writable, noinit
	var n_kwas: TKwas is writable, noinit
	var n_kwnot: TKwnot is writable, noinit
	var n_kwnullable: TKwnullable is writable, noinit
end

# A definition of a virtual type
class ATypePropdef
	super APropdef
	var n_kwtype: TKwtype is writable, noinit
	var n_id: TClassid is writable, noinit
	var n_type: AType is writable, noinit
end

# The identifier of a method in a method declaration.
# There is a specific class because of operator and setters.
abstract class AMethid
	super Prod
end
class AIdMethid
	super AMethid
	var n_id: TId is writable, noinit
end
class APlusMethid
	super AMethid
	var n_plus: TPlus is writable, noinit
end
class AMinusMethid
	super AMethid
	var n_minus: TMinus is writable, noinit
end
class AStarMethid
	super AMethid
	var n_star: TStar is writable, noinit
end
class AStarstarMethid
	super AMethid
	var n_starstar: TStarstar is writable, noinit
end
class ASlashMethid
	super AMethid
	var n_slash: TSlash is writable, noinit
end
class APercentMethid
	super AMethid
	var n_percent: TPercent is writable, noinit
end
class AEqMethid
	super AMethid
	var n_eq: TEq is writable, noinit
end
class ANeMethid
	super AMethid
	var n_ne: TNe is writable, noinit
end
class ALeMethid
	super AMethid
	var n_le: TLe is writable, noinit
end
class AGeMethid
	super AMethid
	var n_ge: TGe is writable, noinit
end
class ALtMethid
	super AMethid
	var n_lt: TLt is writable, noinit
end
class AGtMethid
	super AMethid
	var n_gt: TGt is writable, noinit
end
class ALlMethid
	super AMethid
	var n_ll: TLl is writable, noinit
end
class AGgMethid
	super AMethid
	var n_gg: TGg is writable, noinit
end
class ABraMethid
	super AMethid
	var n_obra: TObra is writable, noinit
	var n_cbra: TCbra is writable, noinit
end
class AStarshipMethid
	super AMethid
	var n_starship: TStarship is writable, noinit
end
class AAssignMethid
	super AMethid
	var n_id: TId is writable, noinit
	var n_assign: TAssign is writable, noinit
end
class ABraassignMethid
	super AMethid
	var n_obra: TObra is writable, noinit
	var n_cbra: TCbra is writable, noinit
	var n_assign: TAssign is writable, noinit
end

# A signature in a method definition. eg `(x,y:X,z:Z):T`
class ASignature
	super Prod
	var n_opar: nullable TOpar = null is writable
	var n_params: ANodes[AParam] = new ANodes[AParam](self)
	var n_cpar: nullable TCpar = null is writable
	var n_type: nullable AType = null is writable
end

# A parameter definition in a signature. eg `x:X`
class AParam
	super Prod
	var n_id: TId is writable, noinit
	var n_type: nullable AType = null is writable
	var n_dotdotdot: nullable TDotdotdot = null is writable
end

# A static type. eg `nullable X[Y]`
class AType
	super Prod
	var n_kwnullable: nullable TKwnullable = null is writable

	# The name of the class or of the formal type
	var n_id: TClassid is writable, noinit

	# Type arguments for a generic type
	var n_types: ANodes[AType] = new ANodes[AType](self)
end

# A label at the end of a block or in a break/continue statement. eg `label x`
class ALabel
	super Prod
	var n_kwlabel: TKwlabel is writable, noinit
	var n_id: nullable TId is writable
end

# Expression and statements
# From a AST point of view there is no distinction between statement and expressions (even if the parser has to distinguish them)
abstract class AExpr
	super Prod
end

# A sequence of AExpr (usually statements)
# The last AExpr gives the value of the whole block
class ABlockExpr
	super AExpr
	var n_expr: ANodes[AExpr] = new ANodes[AExpr](self)
	var n_kwend: nullable TKwend = null is writable
end

# A declaration of a local variable. eg `var x: X = y`
class AVardeclExpr
	super AExpr
	var n_kwvar: TKwvar is writable, noinit
	var n_id: TId is writable, noinit
	var n_type: nullable AType = null is writable
	var n_assign: nullable TAssign = null is writable

	# The initial value, if any
	var n_expr: nullable AExpr = null is writable
end

# A `return` statement. eg `return x`
class AReturnExpr
	super AExpr
	var n_kwreturn: nullable TKwreturn = null is writable
	var n_expr: nullable AExpr = null is writable
end

# Something that has a label.
abstract class ALabelable
	super Prod
	var n_label: nullable ALabel = null is writable
end

# A `break` statement.
class ABreakExpr
	super AExpr
	super ALabelable
	var n_kwbreak: TKwbreak is writable, noinit
	var n_expr: nullable AExpr = null is writable
end

# An `abort` statement
class AAbortExpr
	super AExpr
	var n_kwabort: TKwabort is writable, noinit
end

# A `continue` statement
class AContinueExpr
	super AExpr
	super ALabelable
	var n_kwcontinue: nullable TKwcontinue = null is writable
	var n_expr: nullable AExpr = null is writable
end

# A `do` statement
class ADoExpr
	super AExpr
	super ALabelable
	var n_kwdo: TKwdo is writable, noinit
	var n_block: nullable AExpr = null is writable
end

# A `if` statement
class AIfExpr
	super AExpr
	var n_kwif: TKwif is writable, noinit
	var n_expr: AExpr is writable, noinit
	var n_then: nullable AExpr = null is writable
	var n_else: nullable AExpr = null is writable
end

# A `if` expression
class AIfexprExpr
	super AExpr
	var n_kwif: TKwif is writable, noinit
	var n_expr: AExpr is writable, noinit
	var n_kwthen: TKwthen is writable, noinit
	var n_then: AExpr is writable, noinit
	var n_kwelse: TKwelse is writable, noinit
	var n_else: AExpr is writable, noinit
end

# A `while` statement
class AWhileExpr
	super AExpr
	super ALabelable
	var n_kwwhile:  TKwwhile is writable, noinit
	var n_expr: AExpr is writable, noinit
	var n_kwdo: TKwdo is writable, noinit
	var n_block: nullable AExpr = null is writable
end

# A `loop` statement
class ALoopExpr
	super AExpr
	super ALabelable
	var n_kwloop: TKwloop is writable, noinit
	var n_block: nullable AExpr = null is writable
end

# A `for` statement
class AForExpr
	super AExpr
	super ALabelable
	var n_kwfor: TKwfor is writable, noinit
	var n_ids: ANodes[TId] = new ANodes[TId](self)
	var n_expr: AExpr is writable, noinit
	var n_kwdo: TKwdo is writable, noinit
	var n_block: nullable AExpr = null is writable
end

# An `assert` statement
class AAssertExpr
	super AExpr
	var n_kwassert: TKwassert is writable, noinit
	var n_id: nullable TId = null is writable
	var n_expr: AExpr is writable, noinit
	var n_else: nullable AExpr = null is writable
end

# Whatever is a simple assignment. eg `= something`
abstract class AAssignFormExpr
	super AExpr
	var n_assign: TAssign is writable, noinit
	var n_value: AExpr is writable, noinit
end

# Whatever is a combined assignment. eg `+= something`
abstract class AReassignFormExpr
	super AExpr
	var n_assign_op: AAssignOp is writable, noinit
	var n_value: AExpr is writable, noinit
end

# A `once` expression. eg `once x`
class AOnceExpr
	super AProxyExpr
	var n_kwonce: TKwonce is writable, noinit
end

# A polymorphic invocation of a method
# The form of the invocation (name, arguments, etc) are specific
abstract class ASendExpr
	super AExpr
	# The receiver of the method invocation
	var n_expr: AExpr is writable, noinit
end

# A binary operation on a method
abstract class ABinopExpr
	super ASendExpr
	# The second operand of the operation
	# Note: the receiver (`n_expr`) is the first operand
	var n_expr2: AExpr is writable, noinit
end

# Something that is boolean expression
abstract class ABoolExpr
	super AExpr
end

# A `or` expression 
class AOrExpr
	super ABoolExpr
	var n_expr: AExpr is writable, noinit
	var n_expr2: AExpr is writable, noinit
end

# A `and` expression
class AAndExpr
	super ABoolExpr
	var n_expr: AExpr is writable, noinit
	var n_expr2: AExpr is writable, noinit
end

# A `or else` expression
class AOrElseExpr
	super ABoolExpr
	var n_expr: AExpr is writable, noinit
	var n_expr2: AExpr is writable, noinit
end

# A `implies` expression
class AImpliesExpr
	super ABoolExpr
	var n_expr: AExpr is writable, noinit
	var n_expr2: AExpr is writable, noinit
end

# A `not` expression
class ANotExpr
	super ABoolExpr
	var n_kwnot: TKwnot is writable, noinit
	var n_expr: AExpr is writable, noinit
end

# A `==` expression
class AEqExpr
	super ABinopExpr
end

# A `!=` expression
class ANeExpr
	super ABinopExpr
end

# A `<` expression
class ALtExpr
	super ABinopExpr
end

# A `<=` expression
class ALeExpr
	super ABinopExpr
end

# A `<<` expression
class ALlExpr
	super ABinopExpr
end

# A `>` expression
class AGtExpr
	super ABinopExpr
end

# A `>=` expression
class AGeExpr
	super ABinopExpr
end

# A `>>` expression
class AGgExpr
	super ABinopExpr
end

# A type-ckeck expression. eg `x isa T`
class AIsaExpr
	super ABoolExpr
	var n_expr: AExpr is writable, noinit
	var n_type: AType is writable, noinit
end

# A `+` expression
class APlusExpr
	super ABinopExpr
end

# A `-` expression
class AMinusExpr
	super ABinopExpr
end

# A `<=>` expression
class AStarshipExpr
	super ABinopExpr
end

# A `*` expression
class AStarExpr
	super ABinopExpr
end

# A `**` expression
class AStarstarExpr
	super ABinopExpr
end

# A `/` expression
class ASlashExpr
	super ABinopExpr
end

# A `%` expression
class APercentExpr
	super ABinopExpr
end

# A unary minus expression. eg `-x`
class AUminusExpr
	super ASendExpr
	var n_minus: TMinus is writable, noinit
end

# An explicit instantiation. eg `new T`
class ANewExpr
	super AExpr
	var n_kwnew: TKwnew is writable, noinit
	var n_type: AType is writable, noinit

	# The name of the named-constructor, if any
	var n_id: nullable TId = null is writable
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
	var n_id: TId is writable, noinit

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
# Note: because the parser cannot distinguish a variable write with a compex setter call with an implicit receiver and no arguments, it always returns a `ACallReassignExpr`.
# Semantic analysis have to transform them to instance of `AVarReassignExpr`.
class ACallReassignExpr
	super ACallFormExpr
	super ASendReassignFormExpr
end

# A call to `super`. OR a call of a super-constructor
class ASuperExpr
	super AExpr
	var n_qualified: nullable AQualified = null is writable
	var n_kwsuper: TKwsuper is writable, noinit
	var n_args: AExprs is writable, noinit
end

# A call to the `init` constructor.
# Note: because `init` is a keyword and not a `TId`, the explicit call to init cannot be a ACallFormExpr.
class AInitExpr
	super ASendExpr
	var n_kwinit: TKwinit is writable, noinit
	var n_args: AExprs is writable, noinit
end

# Whatever looks-like a call of the brackets `[]` operator.
abstract class ABraFormExpr
	super ASendExpr
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

# A local variable simple assigment access
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
	var n_expr: AExpr is writable, noinit
	var n_expr2: AExpr is writable, noinit
end

# A closed literal range. eg `[x..y]`
class ACrangeExpr
	super ARangeExpr
	var n_obra: TObra is writable, noinit
	var n_cbra: TCbra is writable, noinit
end

# An open literal range. eg `[x..y[`
class AOrangeExpr
	super ARangeExpr
	var n_obra: TObra is writable, noinit
	var n_cbra: TObra is writable, noinit
end

# A literal array. eg. `[x,y,z]`
class AArrayExpr
	super AExpr
	var n_exprs: AExprs is writable, noinit
end

# A read of `self` 
class ASelfExpr
	super AExpr
	var n_kwself: nullable TKwself is writable
end

# When there is no explicit receiver, `self` is implicit
class AImplicitSelfExpr
	super ASelfExpr
end

# A `true` boolean literal constant
class ATrueExpr
	super ABoolExpr
	var n_kwtrue: TKwtrue is writable, noinit
end
# A `false` boolean literal constant
class AFalseExpr
	super ABoolExpr
	var n_kwfalse: TKwfalse is writable, noinit
end
# A `null` literal constant
class ANullExpr
	super AExpr
	var n_kwnull: TKwnull is writable, noinit
end
# An integer literal
class AIntExpr
	super AExpr
end
# An integer literal in decimal format
class ADecIntExpr
	super AIntExpr
	var n_number: TNumber is writable, noinit
end
# An integer literal in hexadecimal format
class AHexIntExpr
	super AIntExpr
	var n_hex_number: THexNumber is writable, noinit
end
# A float literal
class AFloatExpr
	super AExpr
	var n_float: TFloat is writable, noinit
end
# A character literal
class ACharExpr
	super AExpr
	var n_char: TChar is writable, noinit
end
# A string literal
abstract class AStringFormExpr
	super AExpr
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
# Each part is modelized a sequence of expression. eg. `["a{, x, }b{, y, }c"]`
class ASuperstringExpr
	super AExpr
	var n_exprs: ANodes[AExpr] = new ANodes[AExpr](self)
end

# A simple parenthesis. eg `(x)`
class AParExpr
	super AProxyExpr
	var n_opar: TOpar is writable, noinit
	var n_cpar: TCpar is writable, noinit
end

# Whatevej just contains (and mimic) an other expression
abstract class AProxyExpr
	super AExpr
	var n_expr: AExpr is writable, noinit
end

# A type cast. eg `x.as(T)`
class AAsCastExpr
	super AExpr
	var n_expr: AExpr is writable, noinit
	var n_kwas: TKwas is writable, noinit
	var n_opar: nullable TOpar = null is writable
	var n_type: AType is writable, noinit
	var n_cpar: nullable TCpar = null is writable
end

# A as-not-null cast. eg `x.as(not null)`
class AAsNotnullExpr
	super AExpr
	var n_expr: AExpr is writable, noinit
	var n_kwas: TKwas is writable, noinit
	var n_opar: nullable TOpar = null is writable
	var n_kwnot: TKwnot is writable, noinit
	var n_kwnull: TKwnull is writable, noinit
	var n_cpar: nullable TCpar = null is writable
end

# A is-set check of old-style attributes. eg `isset x._a`
class AIssetAttrExpr
	super AAttrFormExpr
	var n_kwisset: TKwisset is writable, noinit
end

# A elyspis notation used to pass an expression as it in a vararg parameter
class AVarargExpr
	super AExpr
	var n_expr: AExpr is writable, noinit
	var n_dotdotdot: TDotdotdot is writable, noinit
end

# A list of expression separated with commas (arguments for instance)
abstract class AExprs
	super Prod 
	var n_exprs: ANodes[AExpr] = new ANodes[AExpr](self)
end


class ADebugTypeExpr
	super AExpr
	var n_kwdebug: TKwdebug is writable, noinit
	var n_kwtype: TKwtype is writable, noinit
	var n_expr: AExpr is writable, noinit
	var n_type: AType is writable, noinit
end

# A simple list of expressions
class AListExprs
	super AExprs
end

# A list of expressions enclosed in parentheses
class AParExprs
	super AExprs
	var n_opar: TOpar is writable, noinit
	var n_cpar: TCpar is writable, noinit
end

# A list of expressions enclosed in brackets
class ABraExprs
	super AExprs
	var n_obra: TObra is writable, noinit
	var n_cbra: TCbra is writable, noinit
end

# A complex assignment operator. eg `+=`
abstract class AAssignOp
	super Prod
end
class APlusAssignOp
	super AAssignOp
	var n_pluseq: TPluseq is writable, noinit
end
class AMinusAssignOp
	super AAssignOp
	var n_minuseq: TMinuseq is writable, noinit
end

class AModuleName
	super Prod
	var n_quad: nullable TQuad = null is writable
	var n_path: ANodes[TId] = new ANodes[TId](self)
	var n_id: TId is writable, noinit
end
class AInLanguage
	super Prod
	var n_kwin: TKwin is writable, noinit
	var n_string: TString is writable, noinit
end
class AExternCodeBlock
	super Prod
	var n_in_language: nullable AInLanguage = null is writable
	var n_extern_code_segment: TExternCodeSegment is writable, noinit
end
class AQualified
	super Prod
	var n_quad: nullable TQuad = null is writable
	var n_id: ANodes[TId] = new ANodes[TId](self)
	var n_classid: nullable TClassid = null is writable
end

# A documentation of a definition
# It contains the block of comments just above the declaration
class ADoc
	super Prod
	var n_comment: ANodes[TComment] = new ANodes[TComment](self)
end

class AAnnotations
	super Prod
	var n_at: nullable TAt = null is writable
	var n_opar: nullable TOpar = null is writable
	var n_items: ANodes[AAnnotation] = new ANodes[AAnnotation](self)
	var n_cpar: nullable TCpar = null is writable
end
class AAnnotation
	super Prod
	var n_doc: nullable ADoc = null is writable
	var n_kwredef: nullable TKwredef = null is writable
	var n_visibility: nullable AVisibility is writable
	var n_atid: AAtid is writable, noinit
	var n_opar: nullable TOpar = null is writable
	var n_args: ANodes[AAtArg] = new ANodes[AAtArg](self)
	var n_cpar: nullable TCpar = null is writable
end
abstract class AAtArg
	super Prod
end
class ATypeAtArg
	super AAtArg
	var n_type: AType is writable, noinit
end
class AExprAtArg
	super AAtArg
	var n_expr: AExpr is writable, noinit
end
class AAtAtArg
	super AAtArg
end
abstract class AAtid
	super Prod
	var n_id: Token is writable, noinit
end
class AIdAtid
	super AAtid
end
class AKwexternAtid
	super AAtid
end
class AKwimportAtid
	super AAtid
end
class AKwabstractAtid
	super AAtid
end

# The root of the AST
class Start
	super Prod
	var n_base: nullable AModule is writable
	var n_eof: EOF is writable, noinit
	init(n_base: nullable AModule, n_eof: EOF)
	do
		self._n_base = n_base
		self._n_eof = n_eof
	end
end
