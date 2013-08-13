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
package parser_nodes

import location

# Root of the AST class-hierarchy
abstract class ANode
	var _location: nullable Location = null

	# Location is set during AST building. Once built, location cannon be null.
	# However, manual instantiated nodes may need more care.
	fun location: Location do return _location.as(not null)

	# The location of the important part of the node (identifier or whatever)
	fun hot_location: Location do return location

	# Display a message for the colored location of the node
	fun debug(message: String)
	do
		print "{hot_location} {self.class_name}: {message}\n{hot_location.colored_line("0;32")}"
	end

	# Parent of the node in the AST
	var parent: nullable ANode = null

	# Protect form invalid instantiation of nodes
	private init do end

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
end

# Ancestor of all tokens
# A token is a node that has a `text` but no children.
abstract class Token
	super ANode

	# The raw content on the token
	fun text: String is abstract
	fun text=(text: String) is abstract

	redef fun to_s: String do
		return "'{text}'"
	end

	redef fun visit_all(v: Visitor) do end
	redef fun replace_child(old_child: ANode, new_child: nullable ANode) do end
end

# Ancestor of all productions
# A production is a node without text but that usually has children.
abstract class Prod
	super ANode

	fun location=(l: Location) do _location = l

	# All the annotations attached directly to the node
	readable writable var _n_annotations: nullable AAnnotations = null

	redef fun replace_with(n: ANode)
	do
		super
		assert n isa Prod
		if n._location == null then n._location = _location
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
	readable writable var _current_node: nullable ANode = null
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
class TKwreadable
	super TokenKeyword
end
class TKwwritable
	super TokenKeyword
end
class TKwvar
	super TokenKeyword
end
class TKwintern
	super TokenKeyword
end
class TKwextern
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
	super TokenOperator
end
class TDotdot
	super TokenOperator
end
class TDot
	super TokenOperator
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
	super Token
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

	readable writable var _n_moduledecl: nullable AModuledecl = null
	readable var _n_imports: ANodes[AImport] = new ANodes[AImport](self)
	readable var _n_extern_code_blocks: ANodes[AExternCodeBlock] = new ANodes[AExternCodeBlock](self)
	readable var _n_classdefs: ANodes[AClassdef] = new ANodes[AClassdef](self)
end

# The declaration of the module with the documentation, name, and annotations
class AModuledecl
	super Prod
	readable writable var _n_doc: nullable ADoc = null
	readable writable var _n_kwmodule: TKwmodule
	readable writable var _n_name: AModuleName
end

# A import clause of a module
abstract class AImport
	super Prod
end

# A standard import clause. eg `import x`
class AStdImport
	super AImport
	readable writable var _n_visibility: AVisibility
	readable writable var _n_kwimport: TKwimport
	readable writable var _n_name: AModuleName
end

# The special import clause of the kernel module. eg `import end`
class ANoImport
	super AImport
	readable writable var _n_visibility: AVisibility
	readable writable var _n_kwimport: TKwimport
	readable writable var _n_kwend: TKwend
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
end
class APrivateVisibility
	super AVisibility
	readable writable var _n_kwprivate: TKwprivate
end
class AProtectedVisibility
	super AVisibility
	readable writable var _n_kwprotected: TKwprotected
end
class AIntrudeVisibility
	super AVisibility
	readable writable var _n_kwintrude: TKwintrude
end

# A class definition
# While most definition are `AStdClassdef`
# There is tow special case of class definition
abstract class AClassdef super Prod
	readable var _n_propdefs: ANodes[APropdef] = new ANodes[APropdef](self)
end

# A standard class definition with a name, superclasses and properties
class AStdClassdef
	super AClassdef
	readable writable var _n_doc: nullable ADoc = null
	readable writable var _n_kwredef: nullable TKwredef = null
	readable writable var _n_visibility: AVisibility
	readable writable var _n_classkind: AClasskind
	readable writable var _n_id: nullable TClassid = null
	readable var _n_formaldefs: ANodes[AFormaldef] = new ANodes[AFormaldef](self)
	readable writable var _n_extern_code_block: nullable AExternCodeBlock = null
	readable var _n_superclasses: ANodes[ASuperclass] = new ANodes[ASuperclass](self)
	readable writable var _n_kwend: TKwend
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
	readable writable var _n_kwclass: TKwclass
end
class AAbstractClasskind
	super AClasskind
	readable writable var _n_kwabstract: TKwabstract
	readable writable var _n_kwclass: TKwclass
end
class AInterfaceClasskind
	super AClasskind
	readable writable var _n_kwinterface: TKwinterface
end
class AEnumClasskind
	super AClasskind
	readable writable var _n_kwenum: TKwenum
end
class AExternClasskind
	super AClasskind
	readable writable var _n_kwextern: TKwextern
	readable writable var _n_kwclass: nullable TKwclass = null
end

# The definition of a formal generic parameter type. eg `X: Y`
class AFormaldef
	super Prod
	readable writable var _n_id: TClassid
	# The bound of the parameter type
	readable writable var _n_type: nullable AType = null
end

# A super-class. eg `super X`
class ASuperclass
	super Prod
	readable writable var _n_kwsuper: TKwsuper
	readable writable var _n_type: AType
end

# The definition of a property
abstract class APropdef
	super Prod
	readable writable var _n_doc: nullable ADoc = null
end

# A definition of an attribute
# For historical reason, old-syle and new-style attributes use the same `ANode` sub-class
class AAttrPropdef
	super APropdef
	readable writable var _n_kwredef: nullable TKwredef = null
	readable writable var _n_visibility: AVisibility
	readable writable var _n_kwvar: TKwvar

	# The identifier for an old-style attribute (null if new-style)
	readable writable var _n_id: nullable TAttrid

	# The identifier for a new-style attribute (null if old-style)
	readable writable var _n_id2: nullable TId

	readable writable var _n_type: nullable AType = null
	readable writable var _n_readable: nullable AAble = null
	readable writable var _n_writable: nullable AAble = null

	# The initial value, if any
	readable writable var _n_expr: nullable AExpr = null
	redef fun hot_location
	do
		if n_id != null then return n_id.location else return n_id2.location
	end
end

# A definition of all kind of method (including constructors)
abstract class AMethPropdef
	super APropdef
	readable writable var _n_kwredef: nullable TKwredef = null
	readable writable var _n_visibility: nullable AVisibility
	readable writable var _n_methid: nullable AMethid = null
	readable writable var _n_signature: nullable ASignature
	redef fun hot_location
	do
		if n_methid != null then
			return n_methid.location
		else
			return location
		end
	end
end

# A method marked abstract
# *deferred* is a old synonynmous of *abstract* that comes from PRM, that comes from Eiffel.
class ADeferredMethPropdef
	super AMethPropdef
	readable writable var _n_kwmeth: TKwmeth
end

# A method marked intern
class AInternMethPropdef
	super AMethPropdef
	readable writable var _n_kwmeth: TKwmeth
end

# A method of a constructor marked extern
abstract class AExternPropdef
	super AMethPropdef
	readable writable var _n_extern: nullable TString = null
	readable writable var _n_extern_calls: nullable AExternCalls = null
	readable writable var _n_extern_code_block: nullable AExternCodeBlock = null
end

# A method marked extern
class AExternMethPropdef
	super AExternPropdef
	readable writable var _n_kwmeth: TKwmeth
end

# A method with a body
class AConcreteMethPropdef
	super AMethPropdef
	readable writable var _n_kwmeth: nullable TKwmeth
	readable writable var _n_block: nullable AExpr = null
end

# A constructor
abstract class AInitPropdef
	super AMethPropdef
end

# A constructor with a body
class AConcreteInitPropdef
	super AConcreteMethPropdef
	super AInitPropdef
	readable writable var _n_kwinit: TKwinit
	redef fun hot_location do return n_kwinit.location
end

# A constructor marked extern (defined with the `new` keyword)
class AExternInitPropdef
	super AExternPropdef
	super AInitPropdef
	readable writable var _n_kwnew: TKwnew
end

# The implicit main method
class AMainMethPropdef
	super AConcreteMethPropdef
end

# Declaration of callbacks for extern methods
class AExternCalls
	super Prod
	readable writable var _n_kwimport: TKwimport
	readable var _n_extern_calls: ANodes[AExternCall] = new ANodes[AExternCall](self)
end
abstract class AExternCall
	super Prod
end
abstract class APropExternCall
	super AExternCall
end
class ALocalPropExternCall
	super APropExternCall
	readable writable var _n_methid: AMethid
end
class AFullPropExternCall
	super APropExternCall
	readable writable var _n_classid: TClassid
	readable writable var _n_quad: nullable TQuad = null
	readable writable var _n_methid: AMethid
end
class AInitPropExternCall
	super APropExternCall
	readable writable var _n_classid: TClassid
end
class ASuperExternCall
	super AExternCall
	readable writable var _n_kwsuper: TKwsuper
end
abstract class ACastExternCall
	super AExternCall
end
class ACastAsExternCall
	super ACastExternCall
	readable writable var _n_from_type: AType
	readable writable var _n_kwas: TKwas
	readable writable var _n_to_type: AType
end
class AAsNullableExternCall
	super ACastExternCall
	readable writable var _n_type: AType
	readable writable var _n_kwas: TKwas
	readable writable var _n_kwnullable: TKwnullable
end
class AAsNotNullableExternCall
	super ACastExternCall
	readable writable var _n_type: AType
	readable writable var _n_kwas: TKwas
	readable writable var _n_kwnot: TKwnot
	readable writable var _n_kwnullable: TKwnullable
end

# A definition of a virtual type
class ATypePropdef
	super APropdef
	readable writable var _n_kwredef: nullable TKwredef = null
	readable writable var _n_visibility: AVisibility
	readable writable var _n_kwtype: TKwtype
	readable writable var _n_id: TClassid
	readable writable var _n_type: AType
end

# A `writable` or `readable` modifier
abstract class AAble
	super Prod
	readable writable var _n_visibility: nullable AVisibility = null
	readable writable var _n_kwredef: nullable TKwredef = null
end

# A `readable` modifier
class AReadAble
	super AAble
	readable writable var _n_kwreadable: TKwreadable
end

# A `writable` modifier
class AWriteAble
	super AAble
	readable writable var _n_kwwritable: TKwwritable
end

# The identifier of a method in a method declaration.
# There is a specific class because of operator and setters.
abstract class AMethid
	super Prod
end
class AIdMethid
	super AMethid
	readable writable var _n_id: TId
end
class APlusMethid
	super AMethid
	readable writable var _n_plus: TPlus
end
class AMinusMethid
	super AMethid
	readable writable var _n_minus: TMinus
end
class AStarMethid
	super AMethid
	readable writable var _n_star: TStar
end
class ASlashMethid
	super AMethid
	readable writable var _n_slash: TSlash
end
class APercentMethid
	super AMethid
	readable writable var _n_percent: TPercent
end
class AEqMethid
	super AMethid
	readable writable var _n_eq: TEq
end
class ANeMethid
	super AMethid
	readable writable var _n_ne: TNe
end
class ALeMethid
	super AMethid
	readable writable var _n_le: TLe
end
class AGeMethid
	super AMethid
	readable writable var _n_ge: TGe
end
class ALtMethid
	super AMethid
	readable writable var _n_lt: TLt
end
class AGtMethid
	super AMethid
	readable writable var _n_gt: TGt
end
class ALlMethid
	super AMethid
	readable writable var _n_ll: TLl
end
class AGgMethid
	super AMethid
	readable writable var _n_gg: TGg
end
class ABraMethid
	super AMethid
	readable writable var _n_obra: TObra
	readable writable var _n_cbra: TCbra
end
class AStarshipMethid
	super AMethid
	readable writable var _n_starship: TStarship
end
class AAssignMethid
	super AMethid
	readable writable var _n_id: TId
	readable writable var _n_assign: TAssign
end
class ABraassignMethid
	super AMethid
	readable writable var _n_obra: TObra
	readable writable var _n_cbra: TCbra
	readable writable var _n_assign: TAssign
end

# A signature in a method definition. eg `(x,y:X,z:Z):T`
class ASignature
	super Prod
	readable writable var _n_opar: nullable TOpar = null
	readable var _n_params: ANodes[AParam] = new ANodes[AParam](self)
	readable writable var _n_cpar: nullable TCpar = null
	readable writable var _n_type: nullable AType = null
	readable var _n_closure_decls: ANodes[AClosureDecl] = new ANodes[AClosureDecl](self)
end

# A parameter definition in a signature. eg `x:X`
class AParam
	super Prod
	readable writable var _n_id: TId
	readable writable var _n_type: nullable AType = null
	readable writable var _n_dotdotdot: nullable TDotdotdot = null
end

class AClosureDecl
	super Prod
	readable writable var _n_kwbreak: nullable TKwbreak = null
	readable writable var _n_bang: TBang
	readable writable var _n_id: TId
	readable writable var _n_signature: ASignature
	readable writable var _n_expr: nullable AExpr = null
end

# A static type. eg `nullable X[Y]`
class AType
	super Prod
	readable writable var _n_kwnullable: nullable TKwnullable = null

	# The name of the class or of the formal type
	readable writable var _n_id: TClassid

	# Type arguments for a generic type
	readable var _n_types: ANodes[AType] = new ANodes[AType](self)
end

# A label at the end of a block or in a break/continue statement. eg `label x`
class ALabel
	super Prod
	readable writable var _n_kwlabel: TKwlabel
	readable writable var _n_id: TId
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
	readable var _n_expr: ANodes[AExpr] = new ANodes[AExpr](self)
	readable writable var _n_kwend: nullable TKwend = null
end

# A declaration of a local variable. eg `var x: X = y`
class AVardeclExpr
	super AExpr
	readable writable var _n_kwvar: TKwvar
	readable writable var _n_id: TId
	readable writable var _n_type: nullable AType = null
	readable writable var _n_assign: nullable TAssign = null

	# The initial value, if any
	readable writable var _n_expr: nullable AExpr = null
end

# A `return` statement. eg `return x`
class AReturnExpr
	super AExpr
	readable writable var _n_kwreturn: nullable TKwreturn = null
	readable writable var _n_expr: nullable AExpr = null
end

# Something that has a label.
abstract class ALabelable
	super Prod
	readable writable var _n_label: nullable ALabel = null
end

# A `break` statement.
class ABreakExpr
	super AExpr
	super ALabelable
	readable writable var _n_kwbreak: TKwbreak
	readable writable var _n_expr: nullable AExpr = null
end

# An `abort` statement
class AAbortExpr
	super AExpr
	readable writable var _n_kwabort: TKwabort
end

# A `continue` statement
class AContinueExpr
	super AExpr
	super ALabelable
	readable writable var _n_kwcontinue: nullable TKwcontinue = null
	readable writable var _n_expr: nullable AExpr = null
end

# A `do` statement
class ADoExpr
	super AExpr
	super ALabelable
	readable writable var _n_kwdo: TKwdo
	readable writable var _n_block: nullable AExpr = null
end

# A `if` statement
class AIfExpr
	super AExpr
	readable writable var _n_kwif: TKwif
	readable writable var _n_expr: AExpr
	readable writable var _n_then: nullable AExpr = null
	readable writable var _n_else: nullable AExpr = null
end

# A `if` expression
class AIfexprExpr
	super AExpr
	readable writable var _n_kwif: TKwif
	readable writable var _n_expr: AExpr
	readable writable var _n_kwthen: TKwthen
	readable writable var _n_then: AExpr
	readable writable var _n_kwelse: TKwelse
	readable writable var _n_else: AExpr
end

# A `while` statement
class AWhileExpr
	super AExpr
	super ALabelable
	readable writable var _n_kwwhile:  TKwwhile
	readable writable var _n_expr: AExpr
	readable writable var _n_kwdo: TKwdo
	readable writable var _n_block: nullable AExpr = null
end

# A `loop` statement
class ALoopExpr
	super AExpr
	super ALabelable
	readable writable var _n_kwloop: TKwloop
	readable writable var _n_block: nullable AExpr = null
end

# A `for` statement
class AForExpr
	super AExpr
	super ALabelable
	readable writable var _n_kwfor: TKwfor
	readable var _n_ids: ANodes[TId] = new ANodes[TId](self)
	readable writable var _n_expr: AExpr
	readable writable var _n_kwdo: TKwdo
	readable writable var _n_block: nullable AExpr = null
end

# An `assert` statement
class AAssertExpr
	super AExpr
	readable writable var _n_kwassert: TKwassert
	readable writable var _n_id: nullable TId = null
	readable writable var _n_expr: AExpr
	readable writable var _n_else: nullable AExpr = null
end

# Whatever is a simple assignment. eg `= something`
abstract class AAssignFormExpr
	super AExpr
	readable writable var _n_assign: TAssign
	readable writable var _n_value: AExpr
end

# Whatever is a combined assignment. eg `+= something`
abstract class AReassignFormExpr
	super AExpr
	readable writable var _n_assign_op: AAssignOp
	readable writable var _n_value: AExpr
end

# A `once` expression. eg `once x`
class AOnceExpr
	super AProxyExpr
	readable writable var _n_kwonce: TKwonce
end

# A polymorphic invocation of a method
# The form of the invocation (name, arguments, etc) are specific
abstract class ASendExpr
	super AExpr
	# The receiver of the method invocation
	readable writable var _n_expr: AExpr
	readable var _n_closure_defs: ANodes[AClosureDef] = new ANodes[AClosureDef](self)
end

# A binary operation on a method
abstract class ABinopExpr
	super ASendExpr
	# The second operand of the operation
	# Note: the receiver (`n_expr`) is the first operand
	readable writable var _n_expr2: AExpr
end

# Something that is boolean expression
abstract class ABoolExpr
	super AExpr
end

# A `or` expression 
class AOrExpr
	super ABoolExpr
	readable writable var _n_expr: AExpr
	readable writable var _n_expr2: AExpr
end

# A `and` expression
class AAndExpr
	super ABoolExpr
	readable writable var _n_expr: AExpr
	readable writable var _n_expr2: AExpr
end

# A `or else` expression
class AOrElseExpr
	super ABoolExpr
	readable writable var _n_expr: AExpr
	readable writable var _n_expr2: AExpr
end

# A `not` expression
class ANotExpr
	super ABoolExpr
	readable writable var _n_kwnot: TKwnot
	readable writable var _n_expr: AExpr
end

# A `==` expression
class AEqExpr
	super ABinopExpr
end

# A `is` expression
class AEeExpr
	super ABoolExpr
	readable writable var _n_expr: AExpr
	readable writable var _n_expr2: AExpr
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
	readable writable var _n_expr: AExpr
	readable writable var _n_type: AType
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
	readable writable var _n_minus: TMinus
end

# An explicit instantiation. eg `new T`
class ANewExpr
	super AExpr
	readable writable var _n_kwnew: TKwnew
	readable writable var _n_type: AType

	# The name of the named-constructor, if any
	readable writable var _n_id: nullable TId = null
	readable writable var _n_args: AExprs
end

# Whatever is a old-style attribute access
abstract class AAttrFormExpr
	super AExpr

	# The receiver of the attribute
	readable writable var _n_expr: AExpr

	# The name of the attribute
	readable writable var _n_id: TAttrid
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
	readable writable var _n_id: TId

	# The arguments of the call
	readable writable var _n_args: AExprs
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
# Note: because the parser cannot distinguish a variable read with a method call with an implicit receiver and no arguments. it always returns a ACallExpr.
# Semantic analysis have to transform them to instance of `AVarExpr`.
class ACallExpr
	super ACallFormExpr
end

# A setter call with a standard method-name and any number of arguments. eg `x.m(y)=z`. OR just a simple assignment.
# Note: because the parser cannot distinguish a variable write with a setter call with an implicit receiver and no arguments. it always returns a ACallAssignExpr.
# Semantic analysis have to transform them to instance of `AVarAssignExpr`.
class ACallAssignExpr
	super ACallFormExpr
	super AAssignFormExpr
end

# A complex setter call with a standard method-name and any number of arguments. eg `x.m(y)+=z`. OR just a simple complex assignment.
# Note: because the parser cannot distinguish a variable write with a compex setter call with an implicit receiver and no arguments. it always returns a ACallReassignExpr.
# Semantic analysis have to transform them to instance of `AVarReassignExpr`.
class ACallReassignExpr
	super ACallFormExpr
	super ASendReassignFormExpr
end

# A call to `super`. OR a call of a super-constructor
class ASuperExpr
	super AExpr
	readable writable var _n_qualified: nullable AQualified = null
	readable writable var _n_kwsuper: TKwsuper
	readable writable var _n_args: AExprs
end

# A call to the `init` constructor.
# Note: because `init` is a keyword and not a `TId`, the explicit call to init cannot be a ACallFormExpr
class AInitExpr
	super ASendExpr
	readable writable var _n_kwinit: TKwinit
	readable writable var _n_args: AExprs
end

# Whatever looks-like a call of the brackets `[]` operator.
abstract class ABraFormExpr
	super ASendExpr
	readable writable var _n_args: AExprs
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
	readable writable var _n_id: TId
end

# A complex setter call of the bracket operator. eg `x[y,z]+=t`
class ABraReassignExpr
	super ABraFormExpr
	super ASendReassignFormExpr
end

class AClosureCallExpr
	super AExpr
	readable writable var _n_id: TId
	readable writable var _n_args: AExprs
	readable var _n_closure_defs: ANodes[AClosureDef] = new ANodes[AClosureDef](self)
end

# A local variable read access.
# The parser cannot instantiate them, see `ACallExpr`.
class AVarExpr
	super AVarFormExpr
end

# A local variable simple assigment access
# The parser cannot instantiate them, see `ACallAssingExpr`.
class AVarAssignExpr
	super AVarFormExpr
	super AAssignFormExpr
end

# A local variable complex assignment access
# The parser cannot instantiate them, see `ACallReassingExpr`.
class AVarReassignExpr
	super AVarFormExpr
	super AReassignFormExpr
end

# A literal range, open or closed
abstract class ARangeExpr
	super AExpr
	readable writable var _n_expr: AExpr
	readable writable var _n_expr2: AExpr
end

# A closed literal range. eg `[x..y]`
class ACrangeExpr
	super ARangeExpr
	readable writable var _n_obra: TObra
	readable writable var _n_cbra: TCbra
end

# An open literal range. eg `[x..y[`
class AOrangeExpr
	super ARangeExpr
	readable writable var _n_obra: TObra
	readable writable var _n_cbra: TObra
end

# A literal array. eg. `[x,y,z]`
class AArrayExpr
	super AExpr
	readable writable var _n_exprs: AExprs
end

# A read of `self` 
class ASelfExpr
	super AExpr
	readable writable var _n_kwself: nullable TKwself
end

# When there is no explicit receiver, `self` is implicit
class AImplicitSelfExpr
	super ASelfExpr
end

# A `true` boolean literal constant
class ATrueExpr
	super ABoolExpr
	readable writable var _n_kwtrue: TKwtrue
end
# A `false` boolean literal constant
class AFalseExpr
	super ABoolExpr
	readable writable var _n_kwfalse: TKwfalse
end
# A `null` literal constant
class ANullExpr
	super AExpr
	readable writable var _n_kwnull: TKwnull
end
# An integer literal
class AIntExpr
	super AExpr
	readable writable var _n_number: TNumber
end
# A float literal
class AFloatExpr
	super AExpr
	readable writable var _n_float: TFloat
end
# A character literal
class ACharExpr
	super AExpr
	readable writable var _n_char: TChar
end
# A string literal
abstract class AStringFormExpr
	super AExpr
	readable writable var _n_string: Token
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

# A superstring literal. eg "a{x}b{y}c"
# Each part is modelized a sequence of expression. eg. ["a{, x, }b{, y, }c"]
class ASuperstringExpr
	super AExpr
	readable var _n_exprs: ANodes[AExpr] = new ANodes[AExpr](self)
end

# A simple parenthesis. eg `(x)`
class AParExpr
	super AProxyExpr
	readable writable var _n_opar: TOpar
	readable writable var _n_cpar: TCpar
end

# Whatevej just contains (and mimic) an other expression
abstract class AProxyExpr
	super AExpr
	readable writable var _n_expr: AExpr
end

# A type cast. eg `x.as(T)`
class AAsCastExpr
	super AExpr
	readable writable var _n_expr: AExpr
	readable writable var _n_kwas: TKwas
	readable writable var _n_opar: TOpar
	readable writable var _n_type: AType
	readable writable var _n_cpar: TCpar
end

# A as-not-null cast. eg `x.as(not null)`
class AAsNotnullExpr
	super AExpr
	readable writable var _n_expr: AExpr
	readable writable var _n_kwas: TKwas
	readable writable var _n_opar: TOpar
	readable writable var _n_kwnot: TKwnot
	readable writable var _n_kwnull: TKwnull
	readable writable var _n_cpar: TCpar
end

# A is-set check of old-style attributes. eg `isset x._a`
class AIssetAttrExpr
	super AAttrFormExpr
	readable writable var _n_kwisset: TKwisset
end

# A list of expression separated with commas (arguments for instance)
abstract class AExprs
	super Prod 
	readable var _n_exprs: ANodes[AExpr] = new ANodes[AExpr](self)
end

class ADebugTypeExpr
	super AExpr
	readable writable var _n_kwdebug: TKwdebug
	readable writable var _n_kwtype: TKwtype
	readable writable var _n_expr: AExpr
	readable writable var _n_type: AType
end

# A simple list of expressions
class AListExprs
	super AExprs
end

# A list of expressions enclosed in parentheses
class AParExprs
	super AExprs
	readable writable var _n_opar: TOpar
	readable writable var _n_cpar: TCpar
end

# A list of expressions enclosed in brackets
class ABraExprs
	super AExprs
	readable writable var _n_obra: TObra
	readable writable var _n_cbra: TCbra
end

# A complex assignment operator. eg `+=`
abstract class AAssignOp
	super Prod
end
class APlusAssignOp
	super AAssignOp
	readable writable var _n_pluseq: TPluseq
end
class AMinusAssignOp
	super AAssignOp
	readable writable var _n_minuseq: TMinuseq
end

class AClosureDef
	super ALabelable
	readable writable var _n_bang: TBang
	readable writable var _n_id: AClosureId
	readable var _n_ids: ANodes[TId] = new ANodes[TId](self)
	readable writable var _n_kwdo: nullable TKwdo = null
	readable writable var _n_expr: nullable AExpr = null
	redef fun hot_location do return n_id.location
end
abstract class AClosureId
	super Prod
end
class ASimpleClosureId
	super AClosureId
	readable writable var _n_id: TId
end
class ABreakClosureId
	super AClosureId
	readable writable var _n_kwbreak: TKwbreak
end
class AModuleName
	super Prod
	readable writable var _n_quad: nullable TQuad = null
	readable var _n_path: ANodes[TId] = new ANodes[TId](self)
	readable writable var _n_id: TId
end
class AInLanguage
	super Prod
	readable writable var _n_kwin: TKwin
	readable writable var _n_string: TString
end
class AExternCodeBlock
	super Prod
	readable writable var _n_in_language: nullable AInLanguage = null
	readable writable var _n_extern_code_segment: TExternCodeSegment
end
class AQualified
	super Prod
	readable writable var _n_quad: nullable TQuad = null
	readable var _n_id: ANodes[TId] = new ANodes[TId](self)
	readable writable var _n_classid: nullable TClassid = null
end

# A documentation of a definition
# It contains the block of comments just above the declaration
class ADoc
	super Prod
	readable var _n_comment: ANodes[TComment] = new ANodes[TComment](self)
end

class AAnnotations
	super Prod
	readable writable var _n_at: nullable TAt = null
	readable writable var _n_opar: nullable TOpar = null
	readable var _n_items: ANodes[AAnnotation] = new ANodes[AAnnotation](self)
	readable writable var _n_cpar: nullable TCpar = null
end
class AAnnotation
	super Prod
	readable writable var _n_atid: AAtid
	readable writable var _n_opar: nullable TOpar = null
	readable var _n_args: ANodes[AAtArg] = new ANodes[AAtArg](self)
	readable writable var _n_cpar: nullable TCpar = null
end
abstract class AAtArg
	super Prod
end
class ATypeAtArg
	super AAtArg
	readable writable var _n_type: AType
end
class AExprAtArg
	super AAtArg
	readable writable var _n_expr: AExpr
end
class AAtAtArg
	super AAtArg
end
abstract class AAtid
	super Prod
	readable writable var _n_id: Token
end
class AIdAtid
	super AAtid
end
class AKwexternAtid
	super AAtid
end
class AKwinternAtid
	super AAtid
end
class AKwreadableAtid
	super AAtid
end
class AKwwritableAtid
	super AAtid
end
class AKwimportAtid
	super AAtid
end

# The root of the AST
class Start
	super Prod
	readable writable var _n_base: nullable AModule
	readable writable var _n_eof: EOF
	init(n_base: nullable AModule, n_eof: EOF)
	do
		self._n_base = n_base
		self._n_eof = n_eof
	end
end
