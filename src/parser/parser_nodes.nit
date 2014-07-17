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
	var _location: nullable Location = null

	# Location is set during AST building. Once built, location cannon be null.
	# However, manual instantiated nodes may need more care.
	fun location: Location do return _location.as(not null)

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

	# Protect from invalid instantiation of nodes
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

	fun location=(l: Location) do _location = l

	# All the annotations attached directly to the node
	var _n_annotations: nullable AAnnotations = null
	fun n_annotations: nullable AAnnotations do return _n_annotations
	fun n_annotations=(n_annotations: nullable AAnnotations) do _n_annotations = n_annotations

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
	var _current_node: nullable ANode = null
	fun current_node: nullable ANode do return _current_node
	fun current_node=(current_node: nullable ANode) do _current_node = current_node
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

	var _n_moduledecl: nullable AModuledecl = null
	fun n_moduledecl: nullable AModuledecl do return _n_moduledecl
	fun n_moduledecl=(n_moduledecl: nullable AModuledecl) do _n_moduledecl = n_moduledecl
	var n_imports: ANodes[AImport] = new ANodes[AImport](self)
	var n_extern_code_blocks: ANodes[AExternCodeBlock] = new ANodes[AExternCodeBlock](self)
	var n_classdefs: ANodes[AClassdef] = new ANodes[AClassdef](self)
	init do end
end

# The declaration of the module with the documentation, name, and annotations
class AModuledecl
	super Prod
	var _n_doc: nullable ADoc = null
	fun n_doc: nullable ADoc do return _n_doc
	fun n_doc=(n_doc: nullable ADoc) do _n_doc = n_doc
	var _n_kwredef: nullable TKwredef = null
	fun n_kwredef: nullable TKwredef do return _n_kwredef
	fun n_kwredef=(n_kwredef: nullable TKwredef) do _n_kwredef = n_kwredef
	var _n_visibility: AVisibility
	fun n_visibility: AVisibility do return _n_visibility
	fun n_visibility=(n_visibility: AVisibility) do _n_visibility = n_visibility
	var _n_kwmodule: TKwmodule
	fun n_kwmodule: TKwmodule do return _n_kwmodule
	fun n_kwmodule=(n_kwmodule: TKwmodule) do _n_kwmodule = n_kwmodule
	var _n_name: AModuleName
	fun n_name: AModuleName do return _n_name
	fun n_name=(n_name: AModuleName) do _n_name = n_name
	init do end
end

# A import clause of a module
abstract class AImport
	super Prod
end

# A standard import clause. eg `import x`
class AStdImport
	super AImport
	var _n_visibility: AVisibility
	fun n_visibility: AVisibility do return _n_visibility
	fun n_visibility=(n_visibility: AVisibility) do _n_visibility = n_visibility
	var _n_kwimport: TKwimport
	fun n_kwimport: TKwimport do return _n_kwimport
	fun n_kwimport=(n_kwimport: TKwimport) do _n_kwimport = n_kwimport
	var _n_name: AModuleName
	fun n_name: AModuleName do return _n_name
	fun n_name=(n_name: AModuleName) do _n_name = n_name
	init do end
end

# The special import clause of the kernel module. eg `import end`
class ANoImport
	super AImport
	var _n_visibility: AVisibility
	fun n_visibility: AVisibility do return _n_visibility
	fun n_visibility=(n_visibility: AVisibility) do _n_visibility = n_visibility
	var _n_kwimport: TKwimport
	fun n_kwimport: TKwimport do return _n_kwimport
	fun n_kwimport=(n_kwimport: TKwimport) do _n_kwimport = n_kwimport
	var _n_kwend: TKwend
	fun n_kwend: TKwend do return _n_kwend
	fun n_kwend=(n_kwend: TKwend) do _n_kwend = n_kwend
	init do end
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
	var _n_kwpublic: nullable TKwpublic
	fun n_kwpublic: nullable TKwpublic do return _n_kwpublic
	fun n_kwpublic=(n_kwpublic: nullable TKwpublic) do _n_kwpublic = n_kwpublic
	init do end
end
class APrivateVisibility
	super AVisibility
	var _n_kwprivate: TKwprivate
	fun n_kwprivate: TKwprivate do return _n_kwprivate
	fun n_kwprivate=(n_kwprivate: TKwprivate) do _n_kwprivate = n_kwprivate
	init do end
end
class AProtectedVisibility
	super AVisibility
	var _n_kwprotected: TKwprotected
	fun n_kwprotected: TKwprotected do return _n_kwprotected
	fun n_kwprotected=(n_kwprotected: TKwprotected) do _n_kwprotected = n_kwprotected
	init do end
end
class AIntrudeVisibility
	super AVisibility
	var _n_kwintrude: TKwintrude
	fun n_kwintrude: TKwintrude do return _n_kwintrude
	fun n_kwintrude=(n_kwintrude: TKwintrude) do _n_kwintrude = n_kwintrude
	init do end
end

# A class definition
# While most definition are `AStdClassdef`
# There is tow special case of class definition
abstract class AClassdef
	super Prod
	var n_propdefs: ANodes[APropdef] = new ANodes[APropdef](self)
	init do end
end

# A standard class definition with a name, superclasses and properties
class AStdClassdef
	super AClassdef
	var _n_doc: nullable ADoc = null
	fun n_doc: nullable ADoc do return _n_doc
	fun n_doc=(n_doc: nullable ADoc) do _n_doc = n_doc
	var _n_kwredef: nullable TKwredef = null
	fun n_kwredef: nullable TKwredef do return _n_kwredef
	fun n_kwredef=(n_kwredef: nullable TKwredef) do _n_kwredef = n_kwredef
	var _n_visibility: AVisibility
	fun n_visibility: AVisibility do return _n_visibility
	fun n_visibility=(n_visibility: AVisibility) do _n_visibility = n_visibility
	var _n_classkind: AClasskind
	fun n_classkind: AClasskind do return _n_classkind
	fun n_classkind=(n_classkind: AClasskind) do _n_classkind = n_classkind
	var _n_id: nullable TClassid = null
	fun n_id: nullable TClassid do return _n_id
	fun n_id=(n_id: nullable TClassid) do _n_id = n_id
	var n_formaldefs: ANodes[AFormaldef] = new ANodes[AFormaldef](self)
	var _n_extern_code_block: nullable AExternCodeBlock = null
	fun n_extern_code_block: nullable AExternCodeBlock do return _n_extern_code_block
	fun n_extern_code_block=(n_extern_code_block: nullable AExternCodeBlock) do _n_extern_code_block = n_extern_code_block
	var n_superclasses: ANodes[ASuperclass] = new ANodes[ASuperclass](self)
	var _n_kwend: TKwend
	fun n_kwend: TKwend do return _n_kwend
	fun n_kwend=(n_kwend: TKwend) do _n_kwend = n_kwend
	redef fun hot_location do return n_id.location
	init do end
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
	var _n_kwclass: TKwclass
	fun n_kwclass: TKwclass do return _n_kwclass
	fun n_kwclass=(n_kwclass: TKwclass) do _n_kwclass = n_kwclass
	init do end
end
class AAbstractClasskind
	super AClasskind
	var _n_kwabstract: TKwabstract
	fun n_kwabstract: TKwabstract do return _n_kwabstract
	fun n_kwabstract=(n_kwabstract: TKwabstract) do _n_kwabstract = n_kwabstract
	var _n_kwclass: TKwclass
	fun n_kwclass: TKwclass do return _n_kwclass
	fun n_kwclass=(n_kwclass: TKwclass) do _n_kwclass = n_kwclass
	init do end
end
class AInterfaceClasskind
	super AClasskind
	var _n_kwinterface: TKwinterface
	fun n_kwinterface: TKwinterface do return _n_kwinterface
	fun n_kwinterface=(n_kwinterface: TKwinterface) do _n_kwinterface = n_kwinterface
	init do end
end
class AEnumClasskind
	super AClasskind
	var _n_kwenum: TKwenum
	fun n_kwenum: TKwenum do return _n_kwenum
	fun n_kwenum=(n_kwenum: TKwenum) do _n_kwenum = n_kwenum
	init do end
end
class AExternClasskind
	super AClasskind
	var _n_kwextern: TKwextern
	fun n_kwextern: TKwextern do return _n_kwextern
	fun n_kwextern=(n_kwextern: TKwextern) do _n_kwextern = n_kwextern
	var _n_kwclass: nullable TKwclass = null
	fun n_kwclass: nullable TKwclass do return _n_kwclass
	fun n_kwclass=(n_kwclass: nullable TKwclass) do _n_kwclass = n_kwclass
	init do end
end

# The definition of a formal generic parameter type. eg `X: Y`
class AFormaldef
	super Prod
	var _n_id: TClassid
	fun n_id: TClassid do return _n_id
	fun n_id=(n_id: TClassid) do _n_id = n_id
	# The bound of the parameter type
	var _n_type: nullable AType = null
	fun n_type: nullable AType do return _n_type
	fun n_type=(n_type: nullable AType) do _n_type = n_type
	init do end
end

# A super-class. eg `super X`
class ASuperclass
	super Prod
	var _n_kwsuper: TKwsuper
	fun n_kwsuper: TKwsuper do return _n_kwsuper
	fun n_kwsuper=(n_kwsuper: TKwsuper) do _n_kwsuper = n_kwsuper
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	init do end
end

# The definition of a property
abstract class APropdef
	super Prod
	var _n_doc: nullable ADoc = null
	fun n_doc: nullable ADoc do return _n_doc
	fun n_doc=(n_doc: nullable ADoc) do _n_doc = n_doc
	var _n_kwredef: nullable TKwredef = null
	fun n_kwredef: nullable TKwredef do return _n_kwredef
	fun n_kwredef=(n_kwredef: nullable TKwredef) do _n_kwredef = n_kwredef
	var _n_visibility: nullable AVisibility = null
	fun n_visibility: nullable AVisibility do return _n_visibility
	fun n_visibility=(n_visibility: nullable AVisibility) do _n_visibility = n_visibility
end

# A definition of an attribute
# For historical reason, old-syle and new-style attributes use the same `ANode` sub-class
class AAttrPropdef
	super APropdef
	var _n_kwvar: TKwvar
	fun n_kwvar: TKwvar do return _n_kwvar
	fun n_kwvar=(n_kwvar: TKwvar) do _n_kwvar = n_kwvar

	# The identifier for an old-style attribute (null if new-style)
	var _n_id: nullable TAttrid
	fun n_id: nullable TAttrid do return _n_id
	fun n_id=(n_id: nullable TAttrid) do _n_id = n_id

	# The identifier for a new-style attribute (null if old-style)
	var _n_id2: nullable TId
	fun n_id2: nullable TId do return _n_id2
	fun n_id2=(n_id2: nullable TId) do _n_id2 = n_id2

	var _n_type: nullable AType = null
	fun n_type: nullable AType do return _n_type
	fun n_type=(n_type: nullable AType) do _n_type = n_type
	var _n_readable: nullable AAble = null
	fun n_readable: nullable AAble do return _n_readable
	fun n_readable=(n_readable: nullable AAble) do _n_readable = n_readable
	var _n_writable: nullable AAble = null
	fun n_writable: nullable AAble do return _n_writable
	fun n_writable=(n_writable: nullable AAble) do _n_writable = n_writable

	# The initial value, if any
	var _n_expr: nullable AExpr = null
	fun n_expr: nullable AExpr do return _n_expr
	fun n_expr=(n_expr: nullable AExpr) do _n_expr = n_expr
	redef fun hot_location
	do
		if n_id != null then return n_id.location else return n_id2.location
	end
	init do end
end

# A definition of all kind of method (including constructors)
abstract class AMethPropdef
	super APropdef
	var _n_kwmeth: nullable TKwmeth = null
	fun n_kwmeth: nullable TKwmeth do return _n_kwmeth
	fun n_kwmeth=(n_kwmeth: nullable TKwmeth) do _n_kwmeth = n_kwmeth
	var _n_kwinit: nullable TKwinit = null
	fun n_kwinit: nullable TKwinit do return _n_kwinit
	fun n_kwinit=(n_kwinit: nullable TKwinit) do _n_kwinit = n_kwinit
	var _n_kwnew: nullable TKwnew = null
	fun n_kwnew: nullable TKwnew do return _n_kwnew
	fun n_kwnew=(n_kwnew: nullable TKwnew) do _n_kwnew = n_kwnew
	var _n_methid: nullable AMethid = null
	fun n_methid: nullable AMethid do return _n_methid
	fun n_methid=(n_methid: nullable AMethid) do _n_methid = n_methid
	var _n_signature: nullable ASignature = null
	fun n_signature: nullable ASignature do return _n_signature
	fun n_signature=(n_signature: nullable ASignature) do _n_signature = n_signature
	var _n_block: nullable AExpr = null
	fun n_block: nullable AExpr do return _n_block
	fun n_block=(n_block: nullable AExpr) do _n_block = n_block
	var _n_extern: nullable TString = null
	fun n_extern: nullable TString do return _n_extern
	fun n_extern=(n_extern: nullable TString) do _n_extern = n_extern
	var _n_extern_calls: nullable AExternCalls = null
	fun n_extern_calls: nullable AExternCalls do return _n_extern_calls
	fun n_extern_calls=(n_extern_calls: nullable AExternCalls) do _n_extern_calls = n_extern_calls
	var _n_extern_code_block: nullable AExternCodeBlock = null
	fun n_extern_code_block: nullable AExternCodeBlock do return _n_extern_code_block
	fun n_extern_code_block=(n_extern_code_block: nullable AExternCodeBlock) do _n_extern_code_block = n_extern_code_block
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

# A method marked abstract
# *deferred* is a old synonynmous of *abstract* that comes from PRM, that comes from Eiffel.
class ADeferredMethPropdef
	super AMethPropdef
end

# A method marked intern
class AInternMethPropdef
	super AMethPropdef
end

# A method of a constructor marked extern
abstract class AExternPropdef
	super AMethPropdef
end

# A method marked extern
class AExternMethPropdef
	super AExternPropdef
end

# A method with a body
class AConcreteMethPropdef
	super AMethPropdef
end

# A constructor
abstract class AInitPropdef
	super AMethPropdef
end

# A constructor with a body
class AConcreteInitPropdef
	super AConcreteMethPropdef
	super AInitPropdef
end

class AInternNewPropdef
	super AInternMethPropdef
	super AInitPropdef
end

# A constructor marked extern (defined with the `new` keyword)
class AExternInitPropdef
	super AExternPropdef
	super AInitPropdef
end

# The implicit main method
class AMainMethPropdef
	super AConcreteMethPropdef
end

# Declaration of callbacks for extern methods
class AExternCalls
	super Prod
	var _n_kwimport: TKwimport
	fun n_kwimport: TKwimport do return _n_kwimport
	fun n_kwimport=(n_kwimport: TKwimport) do _n_kwimport = n_kwimport
	var n_extern_calls: ANodes[AExternCall] = new ANodes[AExternCall](self)
	init do end
end
abstract class AExternCall
	super Prod
end
abstract class APropExternCall
	super AExternCall
end
class ALocalPropExternCall
	super APropExternCall
	var _n_methid: AMethid
	fun n_methid: AMethid do return _n_methid
	fun n_methid=(n_methid: AMethid) do _n_methid = n_methid
	init do end
end
class AFullPropExternCall
	super APropExternCall
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	var _n_dot: nullable TDot = null
	fun n_dot: nullable TDot do return _n_dot
	fun n_dot=(n_dot: nullable TDot) do _n_dot = n_dot
	var _n_methid: AMethid
	fun n_methid: AMethid do return _n_methid
	fun n_methid=(n_methid: AMethid) do _n_methid = n_methid
	init do end
end
class AInitPropExternCall
	super APropExternCall
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	init do end
end
class ASuperExternCall
	super AExternCall
	var _n_kwsuper: TKwsuper
	fun n_kwsuper: TKwsuper do return _n_kwsuper
	fun n_kwsuper=(n_kwsuper: TKwsuper) do _n_kwsuper = n_kwsuper
	init do end
end
abstract class ACastExternCall
	super AExternCall
end
class ACastAsExternCall
	super ACastExternCall
	var _n_from_type: AType
	fun n_from_type: AType do return _n_from_type
	fun n_from_type=(n_from_type: AType) do _n_from_type = n_from_type
	var _n_dot: nullable TDot = null
	fun n_dot: nullable TDot do return _n_dot
	fun n_dot=(n_dot: nullable TDot) do _n_dot = n_dot
	var _n_kwas: TKwas
	fun n_kwas: TKwas do return _n_kwas
	fun n_kwas=(n_kwas: TKwas) do _n_kwas = n_kwas
	var _n_to_type: AType
	fun n_to_type: AType do return _n_to_type
	fun n_to_type=(n_to_type: AType) do _n_to_type = n_to_type
	init do end
end
class AAsNullableExternCall
	super ACastExternCall
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	var _n_kwas: TKwas
	fun n_kwas: TKwas do return _n_kwas
	fun n_kwas=(n_kwas: TKwas) do _n_kwas = n_kwas
	var _n_kwnullable: TKwnullable
	fun n_kwnullable: TKwnullable do return _n_kwnullable
	fun n_kwnullable=(n_kwnullable: TKwnullable) do _n_kwnullable = n_kwnullable
	init do end
end
class AAsNotNullableExternCall
	super ACastExternCall
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	var _n_kwas: TKwas
	fun n_kwas: TKwas do return _n_kwas
	fun n_kwas=(n_kwas: TKwas) do _n_kwas = n_kwas
	var _n_kwnot: TKwnot
	fun n_kwnot: TKwnot do return _n_kwnot
	fun n_kwnot=(n_kwnot: TKwnot) do _n_kwnot = n_kwnot
	var _n_kwnullable: TKwnullable
	fun n_kwnullable: TKwnullable do return _n_kwnullable
	fun n_kwnullable=(n_kwnullable: TKwnullable) do _n_kwnullable = n_kwnullable
	init do end
end

# A definition of a virtual type
class ATypePropdef
	super APropdef
	var _n_kwtype: TKwtype
	fun n_kwtype: TKwtype do return _n_kwtype
	fun n_kwtype=(n_kwtype: TKwtype) do _n_kwtype = n_kwtype
	var _n_id: TClassid
	fun n_id: TClassid do return _n_id
	fun n_id=(n_id: TClassid) do _n_id = n_id
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	init do end
end

# A `writable` or `readable` modifier
abstract class AAble
	super Prod
	var _n_visibility: nullable AVisibility = null
	fun n_visibility: nullable AVisibility do return _n_visibility
	fun n_visibility=(n_visibility: nullable AVisibility) do _n_visibility = n_visibility
	var _n_kwredef: nullable TKwredef = null
	fun n_kwredef: nullable TKwredef do return _n_kwredef
	fun n_kwredef=(n_kwredef: nullable TKwredef) do _n_kwredef = n_kwredef
	init do end
end

# A `readable` modifier
class AReadAble
	super AAble
	var _n_kwreadable: TKwreadable
	fun n_kwreadable: TKwreadable do return _n_kwreadable
	fun n_kwreadable=(n_kwreadable: TKwreadable) do _n_kwreadable = n_kwreadable
	init do end
end

# A `writable` modifier
class AWriteAble
	super AAble
	var _n_kwwritable: TKwwritable
	fun n_kwwritable: TKwwritable do return _n_kwwritable
	fun n_kwwritable=(n_kwwritable: TKwwritable) do _n_kwwritable = n_kwwritable
	init do end
end

# The identifier of a method in a method declaration.
# There is a specific class because of operator and setters.
abstract class AMethid
	super Prod
end
class AIdMethid
	super AMethid
	var _n_id: TId
	fun n_id: TId do return _n_id
	fun n_id=(n_id: TId) do _n_id = n_id
	init do end
end
class APlusMethid
	super AMethid
	var _n_plus: TPlus
	fun n_plus: TPlus do return _n_plus
	fun n_plus=(n_plus: TPlus) do _n_plus = n_plus
	init do end
end
class AMinusMethid
	super AMethid
	var _n_minus: TMinus
	fun n_minus: TMinus do return _n_minus
	fun n_minus=(n_minus: TMinus) do _n_minus = n_minus
	init do end
end
class AStarMethid
	super AMethid
	var _n_star: TStar
	fun n_star: TStar do return _n_star
	fun n_star=(n_star: TStar) do _n_star = n_star
	init do end
end
class ASlashMethid
	super AMethid
	var _n_slash: TSlash
	fun n_slash: TSlash do return _n_slash
	fun n_slash=(n_slash: TSlash) do _n_slash = n_slash
	init do end
end
class APercentMethid
	super AMethid
	var _n_percent: TPercent
	fun n_percent: TPercent do return _n_percent
	fun n_percent=(n_percent: TPercent) do _n_percent = n_percent
	init do end
end
class AEqMethid
	super AMethid
	var _n_eq: TEq
	fun n_eq: TEq do return _n_eq
	fun n_eq=(n_eq: TEq) do _n_eq = n_eq
	init do end
end
class ANeMethid
	super AMethid
	var _n_ne: TNe
	fun n_ne: TNe do return _n_ne
	fun n_ne=(n_ne: TNe) do _n_ne = n_ne
	init do end
end
class ALeMethid
	super AMethid
	var _n_le: TLe
	fun n_le: TLe do return _n_le
	fun n_le=(n_le: TLe) do _n_le = n_le
	init do end
end
class AGeMethid
	super AMethid
	var _n_ge: TGe
	fun n_ge: TGe do return _n_ge
	fun n_ge=(n_ge: TGe) do _n_ge = n_ge
	init do end
end
class ALtMethid
	super AMethid
	var _n_lt: TLt
	fun n_lt: TLt do return _n_lt
	fun n_lt=(n_lt: TLt) do _n_lt = n_lt
	init do end
end
class AGtMethid
	super AMethid
	var _n_gt: TGt
	fun n_gt: TGt do return _n_gt
	fun n_gt=(n_gt: TGt) do _n_gt = n_gt
	init do end
end
class ALlMethid
	super AMethid
	var _n_ll: TLl
	fun n_ll: TLl do return _n_ll
	fun n_ll=(n_ll: TLl) do _n_ll = n_ll
	init do end
end
class AGgMethid
	super AMethid
	var _n_gg: TGg
	fun n_gg: TGg do return _n_gg
	fun n_gg=(n_gg: TGg) do _n_gg = n_gg
	init do end
end
class ABraMethid
	super AMethid
	var _n_obra: TObra
	fun n_obra: TObra do return _n_obra
	fun n_obra=(n_obra: TObra) do _n_obra = n_obra
	var _n_cbra: TCbra
	fun n_cbra: TCbra do return _n_cbra
	fun n_cbra=(n_cbra: TCbra) do _n_cbra = n_cbra
	init do end
end
class AStarshipMethid
	super AMethid
	var _n_starship: TStarship
	fun n_starship: TStarship do return _n_starship
	fun n_starship=(n_starship: TStarship) do _n_starship = n_starship
	init do end
end
class AAssignMethid
	super AMethid
	var _n_id: TId
	fun n_id: TId do return _n_id
	fun n_id=(n_id: TId) do _n_id = n_id
	var _n_assign: TAssign
	fun n_assign: TAssign do return _n_assign
	fun n_assign=(n_assign: TAssign) do _n_assign = n_assign
	init do end
end
class ABraassignMethid
	super AMethid
	var _n_obra: TObra
	fun n_obra: TObra do return _n_obra
	fun n_obra=(n_obra: TObra) do _n_obra = n_obra
	var _n_cbra: TCbra
	fun n_cbra: TCbra do return _n_cbra
	fun n_cbra=(n_cbra: TCbra) do _n_cbra = n_cbra
	var _n_assign: TAssign
	fun n_assign: TAssign do return _n_assign
	fun n_assign=(n_assign: TAssign) do _n_assign = n_assign
	init do end
end

# A signature in a method definition. eg `(x,y:X,z:Z):T`
class ASignature
	super Prod
	var _n_opar: nullable TOpar = null
	fun n_opar: nullable TOpar do return _n_opar
	fun n_opar=(n_opar: nullable TOpar) do _n_opar = n_opar
	var n_params: ANodes[AParam] = new ANodes[AParam](self)
	var _n_cpar: nullable TCpar = null
	fun n_cpar: nullable TCpar do return _n_cpar
	fun n_cpar=(n_cpar: nullable TCpar) do _n_cpar = n_cpar
	var _n_type: nullable AType = null
	fun n_type: nullable AType do return _n_type
	fun n_type=(n_type: nullable AType) do _n_type = n_type
	init do end
end

# A parameter definition in a signature. eg `x:X`
class AParam
	super Prod
	var _n_id: TId
	fun n_id: TId do return _n_id
	fun n_id=(n_id: TId) do _n_id = n_id
	var _n_type: nullable AType = null
	fun n_type: nullable AType do return _n_type
	fun n_type=(n_type: nullable AType) do _n_type = n_type
	var _n_dotdotdot: nullable TDotdotdot = null
	fun n_dotdotdot: nullable TDotdotdot do return _n_dotdotdot
	fun n_dotdotdot=(n_dotdotdot: nullable TDotdotdot) do _n_dotdotdot = n_dotdotdot
	init do end
end

# A static type. eg `nullable X[Y]`
class AType
	super Prod
	var _n_kwnullable: nullable TKwnullable = null
	fun n_kwnullable: nullable TKwnullable do return _n_kwnullable
	fun n_kwnullable=(n_kwnullable: nullable TKwnullable) do _n_kwnullable = n_kwnullable

	# The name of the class or of the formal type
	var _n_id: TClassid
	fun n_id: TClassid do return _n_id
	fun n_id=(n_id: TClassid) do _n_id = n_id

	# Type arguments for a generic type
	var n_types: ANodes[AType] = new ANodes[AType](self)
	init do end
end

# A label at the end of a block or in a break/continue statement. eg `label x`
class ALabel
	super Prod
	var _n_kwlabel: TKwlabel
	fun n_kwlabel: TKwlabel do return _n_kwlabel
	fun n_kwlabel=(n_kwlabel: TKwlabel) do _n_kwlabel = n_kwlabel
	var _n_id: nullable TId
	fun n_id: nullable TId do return _n_id
	fun n_id=(n_id: nullable TId) do _n_id = n_id
	init do end
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
	var _n_kwend: nullable TKwend = null
	fun n_kwend: nullable TKwend do return _n_kwend
	fun n_kwend=(n_kwend: nullable TKwend) do _n_kwend = n_kwend
	init do end
end

# A declaration of a local variable. eg `var x: X = y`
class AVardeclExpr
	super AExpr
	var _n_kwvar: TKwvar
	fun n_kwvar: TKwvar do return _n_kwvar
	fun n_kwvar=(n_kwvar: TKwvar) do _n_kwvar = n_kwvar
	var _n_id: TId
	fun n_id: TId do return _n_id
	fun n_id=(n_id: TId) do _n_id = n_id
	var _n_type: nullable AType = null
	fun n_type: nullable AType do return _n_type
	fun n_type=(n_type: nullable AType) do _n_type = n_type
	var _n_assign: nullable TAssign = null
	fun n_assign: nullable TAssign do return _n_assign
	fun n_assign=(n_assign: nullable TAssign) do _n_assign = n_assign

	# The initial value, if any
	var _n_expr: nullable AExpr = null
	fun n_expr: nullable AExpr do return _n_expr
	fun n_expr=(n_expr: nullable AExpr) do _n_expr = n_expr
	init do end
end

# A `return` statement. eg `return x`
class AReturnExpr
	super AExpr
	var _n_kwreturn: nullable TKwreturn = null
	fun n_kwreturn: nullable TKwreturn do return _n_kwreturn
	fun n_kwreturn=(n_kwreturn: nullable TKwreturn) do _n_kwreturn = n_kwreturn
	var _n_expr: nullable AExpr = null
	fun n_expr: nullable AExpr do return _n_expr
	fun n_expr=(n_expr: nullable AExpr) do _n_expr = n_expr
	init do end
end

# Something that has a label.
abstract class ALabelable
	super Prod
	var _n_label: nullable ALabel = null
	fun n_label: nullable ALabel do return _n_label
	fun n_label=(n_label: nullable ALabel) do _n_label = n_label
	init do end
end

# A `break` statement.
class ABreakExpr
	super AExpr
	super ALabelable
	var _n_kwbreak: TKwbreak
	fun n_kwbreak: TKwbreak do return _n_kwbreak
	fun n_kwbreak=(n_kwbreak: TKwbreak) do _n_kwbreak = n_kwbreak
	var _n_expr: nullable AExpr = null
	fun n_expr: nullable AExpr do return _n_expr
	fun n_expr=(n_expr: nullable AExpr) do _n_expr = n_expr
	init do end
end

# An `abort` statement
class AAbortExpr
	super AExpr
	var _n_kwabort: TKwabort
	fun n_kwabort: TKwabort do return _n_kwabort
	fun n_kwabort=(n_kwabort: TKwabort) do _n_kwabort = n_kwabort
	init do end
end

# A `continue` statement
class AContinueExpr
	super AExpr
	super ALabelable
	var _n_kwcontinue: nullable TKwcontinue = null
	fun n_kwcontinue: nullable TKwcontinue do return _n_kwcontinue
	fun n_kwcontinue=(n_kwcontinue: nullable TKwcontinue) do _n_kwcontinue = n_kwcontinue
	var _n_expr: nullable AExpr = null
	fun n_expr: nullable AExpr do return _n_expr
	fun n_expr=(n_expr: nullable AExpr) do _n_expr = n_expr
	init do end
end

# A `do` statement
class ADoExpr
	super AExpr
	super ALabelable
	var _n_kwdo: TKwdo
	fun n_kwdo: TKwdo do return _n_kwdo
	fun n_kwdo=(n_kwdo: TKwdo) do _n_kwdo = n_kwdo
	var _n_block: nullable AExpr = null
	fun n_block: nullable AExpr do return _n_block
	fun n_block=(n_block: nullable AExpr) do _n_block = n_block
	init do end
end

# A `if` statement
class AIfExpr
	super AExpr
	var _n_kwif: TKwif
	fun n_kwif: TKwif do return _n_kwif
	fun n_kwif=(n_kwif: TKwif) do _n_kwif = n_kwif
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_then: nullable AExpr = null
	fun n_then: nullable AExpr do return _n_then
	fun n_then=(n_then: nullable AExpr) do _n_then = n_then
	var _n_else: nullable AExpr = null
	fun n_else: nullable AExpr do return _n_else
	fun n_else=(n_else: nullable AExpr) do _n_else = n_else
	init do end
end

# A `if` expression
class AIfexprExpr
	super AExpr
	var _n_kwif: TKwif
	fun n_kwif: TKwif do return _n_kwif
	fun n_kwif=(n_kwif: TKwif) do _n_kwif = n_kwif
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_kwthen: TKwthen
	fun n_kwthen: TKwthen do return _n_kwthen
	fun n_kwthen=(n_kwthen: TKwthen) do _n_kwthen = n_kwthen
	var _n_then: AExpr
	fun n_then: AExpr do return _n_then
	fun n_then=(n_then: AExpr) do _n_then = n_then
	var _n_kwelse: TKwelse
	fun n_kwelse: TKwelse do return _n_kwelse
	fun n_kwelse=(n_kwelse: TKwelse) do _n_kwelse = n_kwelse
	var _n_else: AExpr
	fun n_else: AExpr do return _n_else
	fun n_else=(n_else: AExpr) do _n_else = n_else
	init do end
end

# A `while` statement
class AWhileExpr
	super AExpr
	super ALabelable
	var _n_kwwhile:  TKwwhile
	fun n_kwwhile:  TKwwhile do return _n_kwwhile
	fun n_kwwhile=(n_kwwhile:  TKwwhile) do _n_kwwhile = n_kwwhile
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_kwdo: TKwdo
	fun n_kwdo: TKwdo do return _n_kwdo
	fun n_kwdo=(n_kwdo: TKwdo) do _n_kwdo = n_kwdo
	var _n_block: nullable AExpr = null
	fun n_block: nullable AExpr do return _n_block
	fun n_block=(n_block: nullable AExpr) do _n_block = n_block
	init do end
end

# A `loop` statement
class ALoopExpr
	super AExpr
	super ALabelable
	var _n_kwloop: TKwloop
	fun n_kwloop: TKwloop do return _n_kwloop
	fun n_kwloop=(n_kwloop: TKwloop) do _n_kwloop = n_kwloop
	var _n_block: nullable AExpr = null
	fun n_block: nullable AExpr do return _n_block
	fun n_block=(n_block: nullable AExpr) do _n_block = n_block
	init do end
end

# A `for` statement
class AForExpr
	super AExpr
	super ALabelable
	var _n_kwfor: TKwfor
	fun n_kwfor: TKwfor do return _n_kwfor
	fun n_kwfor=(n_kwfor: TKwfor) do _n_kwfor = n_kwfor
	var n_ids: ANodes[TId] = new ANodes[TId](self)
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_kwdo: TKwdo
	fun n_kwdo: TKwdo do return _n_kwdo
	fun n_kwdo=(n_kwdo: TKwdo) do _n_kwdo = n_kwdo
	var _n_block: nullable AExpr = null
	fun n_block: nullable AExpr do return _n_block
	fun n_block=(n_block: nullable AExpr) do _n_block = n_block
	init do end
end

# An `assert` statement
class AAssertExpr
	super AExpr
	var _n_kwassert: TKwassert
	fun n_kwassert: TKwassert do return _n_kwassert
	fun n_kwassert=(n_kwassert: TKwassert) do _n_kwassert = n_kwassert
	var _n_id: nullable TId = null
	fun n_id: nullable TId do return _n_id
	fun n_id=(n_id: nullable TId) do _n_id = n_id
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_else: nullable AExpr = null
	fun n_else: nullable AExpr do return _n_else
	fun n_else=(n_else: nullable AExpr) do _n_else = n_else
	init do end
end

# Whatever is a simple assignment. eg `= something`
abstract class AAssignFormExpr
	super AExpr
	var _n_assign: TAssign
	fun n_assign: TAssign do return _n_assign
	fun n_assign=(n_assign: TAssign) do _n_assign = n_assign
	var _n_value: AExpr
	fun n_value: AExpr do return _n_value
	fun n_value=(n_value: AExpr) do _n_value = n_value
	init do end
end

# Whatever is a combined assignment. eg `+= something`
abstract class AReassignFormExpr
	super AExpr
	var _n_assign_op: AAssignOp
	fun n_assign_op: AAssignOp do return _n_assign_op
	fun n_assign_op=(n_assign_op: AAssignOp) do _n_assign_op = n_assign_op
	var _n_value: AExpr
	fun n_value: AExpr do return _n_value
	fun n_value=(n_value: AExpr) do _n_value = n_value
	init do end
end

# A `once` expression. eg `once x`
class AOnceExpr
	super AProxyExpr
	var _n_kwonce: TKwonce
	fun n_kwonce: TKwonce do return _n_kwonce
	fun n_kwonce=(n_kwonce: TKwonce) do _n_kwonce = n_kwonce
	init do end
end

# A polymorphic invocation of a method
# The form of the invocation (name, arguments, etc) are specific
abstract class ASendExpr
	super AExpr
	# The receiver of the method invocation
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	init do end
end

# A binary operation on a method
abstract class ABinopExpr
	super ASendExpr
	# The second operand of the operation
	# Note: the receiver (`n_expr`) is the first operand
	var _n_expr2: AExpr
	fun n_expr2: AExpr do return _n_expr2
	fun n_expr2=(n_expr2: AExpr) do _n_expr2 = n_expr2
	init do end
end

# Something that is boolean expression
abstract class ABoolExpr
	super AExpr
end

# A `or` expression 
class AOrExpr
	super ABoolExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_expr2: AExpr
	fun n_expr2: AExpr do return _n_expr2
	fun n_expr2=(n_expr2: AExpr) do _n_expr2 = n_expr2
	init do end
end

# A `and` expression
class AAndExpr
	super ABoolExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_expr2: AExpr
	fun n_expr2: AExpr do return _n_expr2
	fun n_expr2=(n_expr2: AExpr) do _n_expr2 = n_expr2
	init do end
end

# A `or else` expression
class AOrElseExpr
	super ABoolExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_expr2: AExpr
	fun n_expr2: AExpr do return _n_expr2
	fun n_expr2=(n_expr2: AExpr) do _n_expr2 = n_expr2
	init do end
end

# A `implies` expression
class AImpliesExpr
	super ABoolExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_expr2: AExpr
	fun n_expr2: AExpr do return _n_expr2
	fun n_expr2=(n_expr2: AExpr) do _n_expr2 = n_expr2
	init do end
end

# A `not` expression
class ANotExpr
	super ABoolExpr
	var _n_kwnot: TKwnot
	fun n_kwnot: TKwnot do return _n_kwnot
	fun n_kwnot=(n_kwnot: TKwnot) do _n_kwnot = n_kwnot
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	init do end
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
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	init do end
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
	var _n_minus: TMinus
	fun n_minus: TMinus do return _n_minus
	fun n_minus=(n_minus: TMinus) do _n_minus = n_minus
	init do end
end

# An explicit instantiation. eg `new T`
class ANewExpr
	super AExpr
	var _n_kwnew: TKwnew
	fun n_kwnew: TKwnew do return _n_kwnew
	fun n_kwnew=(n_kwnew: TKwnew) do _n_kwnew = n_kwnew
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type

	# The name of the named-constructor, if any
	var _n_id: nullable TId = null
	fun n_id: nullable TId do return _n_id
	fun n_id=(n_id: nullable TId) do _n_id = n_id
	var _n_args: AExprs
	fun n_args: AExprs do return _n_args
	fun n_args=(n_args: AExprs) do _n_args = n_args
	init do end
end

# Whatever is a old-style attribute access
abstract class AAttrFormExpr
	super AExpr

	# The receiver of the attribute
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr

	# The name of the attribute
	var _n_id: TAttrid
	fun n_id: TAttrid do return _n_id
	fun n_id=(n_id: TAttrid) do _n_id = n_id

	init do end
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
	var _n_id: TId
	fun n_id: TId do return _n_id
	fun n_id=(n_id: TId) do _n_id = n_id

	# The arguments of the call
	var _n_args: AExprs
	fun n_args: AExprs do return _n_args
	fun n_args=(n_args: AExprs) do _n_args = n_args
	init do end
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
	var _n_qualified: nullable AQualified = null
	fun n_qualified: nullable AQualified do return _n_qualified
	fun n_qualified=(n_qualified: nullable AQualified) do _n_qualified = n_qualified
	var _n_kwsuper: TKwsuper
	fun n_kwsuper: TKwsuper do return _n_kwsuper
	fun n_kwsuper=(n_kwsuper: TKwsuper) do _n_kwsuper = n_kwsuper
	var _n_args: AExprs
	fun n_args: AExprs do return _n_args
	fun n_args=(n_args: AExprs) do _n_args = n_args
	init do end
end

# A call to the `init` constructor.
# Note: because `init` is a keyword and not a `TId`, the explicit call to init cannot be a ACallFormExpr.
class AInitExpr
	super ASendExpr
	var _n_kwinit: TKwinit
	fun n_kwinit: TKwinit do return _n_kwinit
	fun n_kwinit=(n_kwinit: TKwinit) do _n_kwinit = n_kwinit
	var _n_args: AExprs
	fun n_args: AExprs do return _n_args
	fun n_args=(n_args: AExprs) do _n_args = n_args
	init do end
end

# Whatever looks-like a call of the brackets `[]` operator.
abstract class ABraFormExpr
	super ASendExpr
	var _n_args: AExprs
	fun n_args: AExprs do return _n_args
	fun n_args=(n_args: AExprs) do _n_args = n_args
	init do end
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
	var _n_id: TId
	fun n_id: TId do return _n_id
	fun n_id=(n_id: TId) do _n_id = n_id
	init do end
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
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_expr2: AExpr
	fun n_expr2: AExpr do return _n_expr2
	fun n_expr2=(n_expr2: AExpr) do _n_expr2 = n_expr2
	init do end
end

# A closed literal range. eg `[x..y]`
class ACrangeExpr
	super ARangeExpr
	var _n_obra: TObra
	fun n_obra: TObra do return _n_obra
	fun n_obra=(n_obra: TObra) do _n_obra = n_obra
	var _n_cbra: TCbra
	fun n_cbra: TCbra do return _n_cbra
	fun n_cbra=(n_cbra: TCbra) do _n_cbra = n_cbra
	init do end
end

# An open literal range. eg `[x..y[`
class AOrangeExpr
	super ARangeExpr
	var _n_obra: TObra
	fun n_obra: TObra do return _n_obra
	fun n_obra=(n_obra: TObra) do _n_obra = n_obra
	var _n_cbra: TObra
	fun n_cbra: TObra do return _n_cbra
	fun n_cbra=(n_cbra: TObra) do _n_cbra = n_cbra
	init do end
end

# A literal array. eg. `[x,y,z]`
class AArrayExpr
	super AExpr
	var _n_exprs: AExprs
	fun n_exprs: AExprs do return _n_exprs
	fun n_exprs=(n_exprs: AExprs) do _n_exprs = n_exprs
	init do end
end

# A read of `self` 
class ASelfExpr
	super AExpr
	var _n_kwself: nullable TKwself
	fun n_kwself: nullable TKwself do return _n_kwself
	fun n_kwself=(n_kwself: nullable TKwself) do _n_kwself = n_kwself
	init do end
end

# When there is no explicit receiver, `self` is implicit
class AImplicitSelfExpr
	super ASelfExpr
end

# A `true` boolean literal constant
class ATrueExpr
	super ABoolExpr
	var _n_kwtrue: TKwtrue
	fun n_kwtrue: TKwtrue do return _n_kwtrue
	fun n_kwtrue=(n_kwtrue: TKwtrue) do _n_kwtrue = n_kwtrue
	init do end
end
# A `false` boolean literal constant
class AFalseExpr
	super ABoolExpr
	var _n_kwfalse: TKwfalse
	fun n_kwfalse: TKwfalse do return _n_kwfalse
	fun n_kwfalse=(n_kwfalse: TKwfalse) do _n_kwfalse = n_kwfalse
	init do end
end
# A `null` literal constant
class ANullExpr
	super AExpr
	var _n_kwnull: TKwnull
	fun n_kwnull: TKwnull do return _n_kwnull
	fun n_kwnull=(n_kwnull: TKwnull) do _n_kwnull = n_kwnull
	init do end
end
# An integer literal
class AIntExpr
	super AExpr
end
# An integer literal in decimal format
class ADecIntExpr
	super AIntExpr
	var _n_number: TNumber
	fun n_number: TNumber do return _n_number
	fun n_number=(n_number: TNumber) do _n_number = n_number
	init do end
end
# An integer literal in hexadecimal format
class AHexIntExpr
	super AIntExpr
	var _n_hex_number: THexNumber
	fun n_hex_number: THexNumber do return _n_hex_number
	fun n_hex_number=(n_hex_number: THexNumber) do _n_hex_number = n_hex_number
	init do end
end
# A float literal
class AFloatExpr
	super AExpr
	var _n_float: TFloat
	fun n_float: TFloat do return _n_float
	fun n_float=(n_float: TFloat) do _n_float = n_float
	init do end
end
# A character literal
class ACharExpr
	super AExpr
	var _n_char: TChar
	fun n_char: TChar do return _n_char
	fun n_char=(n_char: TChar) do _n_char = n_char
	init do end
end
# A string literal
abstract class AStringFormExpr
	super AExpr
	var _n_string: Token
	fun n_string: Token do return _n_string
	fun n_string=(n_string: Token) do _n_string = n_string
	init do end
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
	init do end
end

# A simple parenthesis. eg `(x)`
class AParExpr
	super AProxyExpr
	var _n_opar: TOpar
	fun n_opar: TOpar do return _n_opar
	fun n_opar=(n_opar: TOpar) do _n_opar = n_opar
	var _n_cpar: TCpar
	fun n_cpar: TCpar do return _n_cpar
	fun n_cpar=(n_cpar: TCpar) do _n_cpar = n_cpar
	init do end
end

# Whatevej just contains (and mimic) an other expression
abstract class AProxyExpr
	super AExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	init do end
end

# A type cast. eg `x.as(T)`
class AAsCastExpr
	super AExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_kwas: TKwas
	fun n_kwas: TKwas do return _n_kwas
	fun n_kwas=(n_kwas: TKwas) do _n_kwas = n_kwas
	var _n_opar: nullable TOpar = null
	fun n_opar: nullable TOpar do return _n_opar
	fun n_opar=(n_opar: nullable TOpar) do _n_opar = n_opar
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	var _n_cpar: nullable TCpar = null
	fun n_cpar: nullable TCpar do return _n_cpar
	fun n_cpar=(n_cpar: nullable TCpar) do _n_cpar = n_cpar
	init do end
end

# A as-not-null cast. eg `x.as(not null)`
class AAsNotnullExpr
	super AExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_kwas: TKwas
	fun n_kwas: TKwas do return _n_kwas
	fun n_kwas=(n_kwas: TKwas) do _n_kwas = n_kwas
	var _n_opar: nullable TOpar = null
	fun n_opar: nullable TOpar do return _n_opar
	fun n_opar=(n_opar: nullable TOpar) do _n_opar = n_opar
	var _n_kwnot: TKwnot
	fun n_kwnot: TKwnot do return _n_kwnot
	fun n_kwnot=(n_kwnot: TKwnot) do _n_kwnot = n_kwnot
	var _n_kwnull: TKwnull
	fun n_kwnull: TKwnull do return _n_kwnull
	fun n_kwnull=(n_kwnull: TKwnull) do _n_kwnull = n_kwnull
	var _n_cpar: nullable TCpar = null
	fun n_cpar: nullable TCpar do return _n_cpar
	fun n_cpar=(n_cpar: nullable TCpar) do _n_cpar = n_cpar
	init do end
end

# A is-set check of old-style attributes. eg `isset x._a`
class AIssetAttrExpr
	super AAttrFormExpr
	var _n_kwisset: TKwisset
	fun n_kwisset: TKwisset do return _n_kwisset
	fun n_kwisset=(n_kwisset: TKwisset) do _n_kwisset = n_kwisset
	init do end
end

# A elyspis notation used to pass an expression as it in a vararg parameter
class AVarargExpr
	super AExpr
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_dotdotdot: TDotdotdot
	fun n_dotdotdot: TDotdotdot do return _n_dotdotdot
	fun n_dotdotdot=(n_dotdotdot: TDotdotdot) do _n_dotdotdot = n_dotdotdot
	init do end
end

# A list of expression separated with commas (arguments for instance)
abstract class AExprs
	super Prod 
	var n_exprs: ANodes[AExpr] = new ANodes[AExpr](self)
	init do end
end


class ADebugTypeExpr
	super AExpr
	var _n_kwdebug: TKwdebug
	fun n_kwdebug: TKwdebug do return _n_kwdebug
	fun n_kwdebug=(n_kwdebug: TKwdebug) do _n_kwdebug = n_kwdebug
	var _n_kwtype: TKwtype
	fun n_kwtype: TKwtype do return _n_kwtype
	fun n_kwtype=(n_kwtype: TKwtype) do _n_kwtype = n_kwtype
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	init do end
end

# A simple list of expressions
class AListExprs
	super AExprs
end

# A list of expressions enclosed in parentheses
class AParExprs
	super AExprs
	var _n_opar: TOpar
	fun n_opar: TOpar do return _n_opar
	fun n_opar=(n_opar: TOpar) do _n_opar = n_opar
	var _n_cpar: TCpar
	fun n_cpar: TCpar do return _n_cpar
	fun n_cpar=(n_cpar: TCpar) do _n_cpar = n_cpar
	init do end
end

# A list of expressions enclosed in brackets
class ABraExprs
	super AExprs
	var _n_obra: TObra
	fun n_obra: TObra do return _n_obra
	fun n_obra=(n_obra: TObra) do _n_obra = n_obra
	var _n_cbra: TCbra
	fun n_cbra: TCbra do return _n_cbra
	fun n_cbra=(n_cbra: TCbra) do _n_cbra = n_cbra
	init do end
end

# A complex assignment operator. eg `+=`
abstract class AAssignOp
	super Prod
end
class APlusAssignOp
	super AAssignOp
	var _n_pluseq: TPluseq
	fun n_pluseq: TPluseq do return _n_pluseq
	fun n_pluseq=(n_pluseq: TPluseq) do _n_pluseq = n_pluseq
	init do end
end
class AMinusAssignOp
	super AAssignOp
	var _n_minuseq: TMinuseq
	fun n_minuseq: TMinuseq do return _n_minuseq
	fun n_minuseq=(n_minuseq: TMinuseq) do _n_minuseq = n_minuseq
	init do end
end

class AModuleName
	super Prod
	var _n_quad: nullable TQuad = null
	fun n_quad: nullable TQuad do return _n_quad
	fun n_quad=(n_quad: nullable TQuad) do _n_quad = n_quad
	var n_path: ANodes[TId] = new ANodes[TId](self)
	var _n_id: TId
	fun n_id: TId do return _n_id
	fun n_id=(n_id: TId) do _n_id = n_id
	init do end
end
class AInLanguage
	super Prod
	var _n_kwin: TKwin
	fun n_kwin: TKwin do return _n_kwin
	fun n_kwin=(n_kwin: TKwin) do _n_kwin = n_kwin
	var _n_string: TString
	fun n_string: TString do return _n_string
	fun n_string=(n_string: TString) do _n_string = n_string
	init do end
end
class AExternCodeBlock
	super Prod
	var _n_in_language: nullable AInLanguage = null
	fun n_in_language: nullable AInLanguage do return _n_in_language
	fun n_in_language=(n_in_language: nullable AInLanguage) do _n_in_language = n_in_language
	var _n_extern_code_segment: TExternCodeSegment
	fun n_extern_code_segment: TExternCodeSegment do return _n_extern_code_segment
	fun n_extern_code_segment=(n_extern_code_segment: TExternCodeSegment) do _n_extern_code_segment = n_extern_code_segment
	init do end
end
class AQualified
	super Prod
	var _n_quad: nullable TQuad = null
	fun n_quad: nullable TQuad do return _n_quad
	fun n_quad=(n_quad: nullable TQuad) do _n_quad = n_quad
	var n_id: ANodes[TId] = new ANodes[TId](self)
	var _n_classid: nullable TClassid = null
	fun n_classid: nullable TClassid do return _n_classid
	fun n_classid=(n_classid: nullable TClassid) do _n_classid = n_classid
	init do end
end

# A documentation of a definition
# It contains the block of comments just above the declaration
class ADoc
	super Prod
	var n_comment: ANodes[TComment] = new ANodes[TComment](self)
	init do end
end

class AAnnotations
	super Prod
	var _n_at: nullable TAt = null
	fun n_at: nullable TAt do return _n_at
	fun n_at=(n_at: nullable TAt) do _n_at = n_at
	var _n_opar: nullable TOpar = null
	fun n_opar: nullable TOpar do return _n_opar
	fun n_opar=(n_opar: nullable TOpar) do _n_opar = n_opar
	var n_items: ANodes[AAnnotation] = new ANodes[AAnnotation](self)
	var _n_cpar: nullable TCpar = null
	fun n_cpar: nullable TCpar do return _n_cpar
	fun n_cpar=(n_cpar: nullable TCpar) do _n_cpar = n_cpar
	init do end
end
class AAnnotation
	super Prod
	var _n_doc: nullable ADoc = null
	fun n_doc: nullable ADoc do return _n_doc
	fun n_doc=(n_doc: nullable ADoc) do _n_doc = n_doc
	var _n_kwredef: nullable TKwredef = null
	fun n_kwredef: nullable TKwredef do return _n_kwredef
	fun n_kwredef=(n_kwredef: nullable TKwredef) do _n_kwredef = n_kwredef
	var _n_visibility: nullable AVisibility
	fun n_visibility: nullable AVisibility do return _n_visibility
	fun n_visibility=(n_visibility: nullable AVisibility) do _n_visibility = n_visibility
	var _n_atid: AAtid
	fun n_atid: AAtid do return _n_atid
	fun n_atid=(n_atid: AAtid) do _n_atid = n_atid
	var _n_opar: nullable TOpar = null
	fun n_opar: nullable TOpar do return _n_opar
	fun n_opar=(n_opar: nullable TOpar) do _n_opar = n_opar
	var n_args: ANodes[AAtArg] = new ANodes[AAtArg](self)
	var _n_cpar: nullable TCpar = null
	fun n_cpar: nullable TCpar do return _n_cpar
	fun n_cpar=(n_cpar: nullable TCpar) do _n_cpar = n_cpar
	init do end
end
abstract class AAtArg
	super Prod
end
class ATypeAtArg
	super AAtArg
	var _n_type: AType
	fun n_type: AType do return _n_type
	fun n_type=(n_type: AType) do _n_type = n_type
	init do end
end
class AExprAtArg
	super AAtArg
	var _n_expr: AExpr
	fun n_expr: AExpr do return _n_expr
	fun n_expr=(n_expr: AExpr) do _n_expr = n_expr
	init do end
end
class AAtAtArg
	super AAtArg
end
abstract class AAtid
	super Prod
	var _n_id: Token
	fun n_id: Token do return _n_id
	fun n_id=(n_id: Token) do _n_id = n_id
	init do end
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
	var _n_base: nullable AModule
	fun n_base: nullable AModule do return _n_base
	fun n_base=(n_base: nullable AModule) do _n_base = n_base
	var _n_eof: EOF
	fun n_eof: EOF do return _n_eof
	fun n_eof=(n_eof: EOF) do _n_eof = n_eof
	init(n_base: nullable AModule, n_eof: EOF)
	do
		self._n_base = n_base
		self._n_eof = n_eof
	end
end
