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

# Common syntax structures for syntax analysis of NIT AST.
package syntax_base

import parser
import mmloader

# Concrete NIT source module
class MMSrcModule
	super MMModule
	# A source module can locate AST nodes of related MM entities
	# Once a source module AST is no more needed, _nodes is set to null
	# See ToolContext::keep_ast property in syntax.nit for details
	var _nodes: nullable HashMap[Object, nullable ANode] = new HashMap[Object, nullable ANode]

	# Release the AST
	fun clear_ast do _nodes = null

	# The related AST node
	fun node: AModule do return nodes(self).as(AModule)

	# Concrete NIT source local classs by name
	readable var _src_local_classes: Map[Symbol, MMSrcLocalClass]

	init(c: MMContext, source: AModule, dir: MMDirectory, name: Symbol, loc: Location)
	do
		super(name, dir, c, loc)
		nodes(self) = source
		_src_local_classes = new HashMap[Symbol, MMSrcLocalClass]
	end

	redef fun nodes(o: Object): nullable ANode
	do
		if _nodes != null and _nodes.has_key(o) then return _nodes[o] else return null
	end
	redef fun nodes=(o: Object, n: nullable ANode)
	do
		assert not _nodes.has_key(o)
		_nodes[o] = n
	end
end

redef class MMModule
	# The AST node of some entity
	private fun nodes(o: Object): nullable ANode do return null
	# The AST node of some entity
	private fun nodes=(o: Object, n: nullable ANode) do abort
end

redef class MMGlobalClass
	# Check that a module can access a class
	fun check_visibility(v: AbsSyntaxVisitor, n: ANode, cm: MMSrcModule): Bool do
		var pm = intro.mmmodule
		assert pm isa MMSrcModule
		var vpm = cm.visibility_for(pm)
		if vpm == 3 then
			return true
		else if vpm == 0 then
			v.error(n, "Visibility error: Class {self} comes from the hidden module {pm}.") # TODO: should not occur
			return false
		else if visibility_level >= 3 then
			v.error(n, "Visibility error: Class {self} is private.")
			return false
		end
		return true
	end
end

# Concrete NIT source local classes
class MMSrcLocalClass
	super MMConcreteClass
	# The first related AST node (if any)
	fun node: nullable AClassdef do return mmmodule.nodes(self).as(nullable AClassdef)

	# Concrete NIT source generic formal parameter by name
	readable var _formal_dict: Map[Symbol, MMTypeFormalParameter] = new HashMap[Symbol, MMTypeFormalParameter]

	# Concrete NIT source properties by name
	readable var _src_local_properties: Map[Symbol, MMLocalProperty]

	init(mod: MMSrcModule, n: Symbol, cla: nullable AClassdef, a: Int)
	do
		super(mod, n, a)
		mod.nodes(self) = cla
		_src_local_properties = new HashMap[Symbol, MMLocalProperty]
	end
end

redef class MMGlobalProperty
	# Check that a module can access a property
	fun check_visibility(v: AbsSyntaxVisitor, n: ANode, cm: MMSrcModule, allows_protected: Bool): Bool do
		var pm = local_class.mmmodule
		assert pm isa MMSrcModule
		var vpm = cm.visibility_for(pm)
		if vpm == 3 then
			return true
		else if vpm == 0 then
			# TODO: should not occurs 
			v.error(n, "Visibility error: Property {self} comes from the hidden module {pm}.")
			return false
		else if visibility_level >= 3 then
			v.error(n, "Visibility error: Property {self} is private.")
			return false
		else if visibility_level >= 2 and not allows_protected then
			v.error(n, "Visibility error: Property {self} is protected and can only acceded by self.")
			return false
		end
		return true
	end
end

redef class MMLocalProperty
	# The attached node (if any)
	fun node: nullable ANode do return null

	# Is the concrete method defined as init
	fun is_init: Bool do return false
end

# Concrete NIT source attribute
class MMSrcAttribute
	super MMAttribute
	redef fun node: nullable AAttrPropdef do return mmmodule.nodes(self).as(nullable AAttrPropdef)
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla)
		cla.mmmodule.nodes(self) = n
	end
end

# Concrete NIT source method
abstract class MMSrcMethod
	super MMMethod
	redef fun is_intern do return false
	redef fun is_extern do return false
	redef fun is_abstract do return false
	redef fun extern_name do return null
end

# Concrete NIT source method for an automatic accesor
abstract class MMAttrImplementationMethod
	super MMSrcMethod
	redef fun node: nullable AAttrPropdef do return mmmodule.nodes(self).as(nullable AAttrPropdef)
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla)
		cla.mmmodule.nodes(self) = n
	end
end

# Concrete NIT source method for an automatic read accesor
class MMReadImplementationMethod
	super MMAttrImplementationMethod
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla, n)
	end
end

# Concrete NIT source method for an automatic write accesor
class MMWriteImplementationMethod
	super MMAttrImplementationMethod
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla, n)
	end
end

# Concrete NIT source method for an explicit method
class MMMethSrcMethod
	super MMSrcMethod
	redef readable var _is_init: Bool
	redef readable var _is_intern: Bool
	redef readable var _is_extern: Bool
	redef readable var _is_abstract: Bool
	redef readable writable var _extern_name: nullable String # Will be computed during MMBuilder
	redef readable var _explicit_casts : Set[MMImportedCast] = new HashSet[MMImportedCast]
	redef readable var _explicit_imports : Set[MMExplicitImport] = new HashSet[MMExplicitImport]
	redef fun node: nullable AMethPropdef do return mmmodule.nodes(self).as(nullable AMethPropdef)
	init(name: Symbol, cla: MMLocalClass, n: nullable AMethPropdef)
	do
		super(name, cla)
		cla.mmmodule.nodes(self) = n
		_is_init = node isa AInitPropdef
		_is_intern = node isa AInternMethPropdef
		_is_extern = node isa AExternPropdef
		_is_abstract = node isa ADeferredMethPropdef
		_extern_name = null

		if is_extern then
			mmmodule.is_extern_hybrid = true
		end
	end
end

# Concrete NIT source virtual type
class MMSrcTypeProperty
	super MMLocalProperty
	super MMTypeProperty
	init(name: Symbol, cla: MMLocalClass, n: ATypePropdef)
	do
		super(name, cla)
	end
end

# Concrete NIT implicit constructor
class MMImplicitInit
	super MMMethSrcMethod
	fun super_init: nullable MMLocalProperty is abstract
	redef fun is_init do return true
	readable var _unassigned_attributes: Array[MMSrcAttribute]
	readable var _super_inits: Array[MMLocalProperty]
	init(cla: MMLocalClass, unassigned_attributes: Array[MMSrcAttribute], super_inits: Array[MMLocalProperty])
	do
		super(once "init".to_symbol, cla, null)
		_unassigned_attributes = unassigned_attributes
		_super_inits = super_inits
	end
end

# Local variables
abstract class Variable
	# Name of the variable
	readable var _name: Symbol

	# Declaration AST node
	readable var _decl: nullable ANode

	# Static type
	readable writable var _stype: nullable MMType

	redef fun to_s do return _name.to_s

	fun kind: String is abstract

	init(n: Symbol, d: nullable ANode)
	do
		_name = n
		_decl = d
	end
end

# Variable declared with 'var'
class VarVariable
	super Variable
	redef fun kind do return once "variable"
	init(n: Symbol, d: ANode) do super
end

# Parameter of method (declared in signature)
class ParamVariable
	super Variable
	redef fun kind do return once "parameter"
	init(n: Symbol, d: nullable ANode) do super
end

# Automatic variable (like in the 'for' statement)
class AutoVariable
	super Variable
	redef fun kind do return once "automatic variable"
	init(n: Symbol, d: ANode) do super
end

# False variable corresponding to closures declared in signatures
# Lives in the same namespace than variables
class ClosureVariable
	super Variable
	redef fun kind do return once "closure"

	# The signature of the closure
	readable var _closure: MMClosure

	init(n: Symbol, d: ANode, c: MMClosure)
	do
		super(n, d)
		_closure = c
	end
end

###############################################################################

# Visitor used during the syntax analysis
abstract class AbsSyntaxVisitor
	super Visitor
	fun get_type_by_name(clsname: Symbol): MMType
	do
		if not _mmmodule.has_global_class_named(clsname) then _tc.fatal_error(_mmmodule.location, "Missing necessary class: \"{clsname}\"")
		var cls = _mmmodule.class_by_name(clsname)
		return cls.get_type
	end

	fun get_instantiated_type_by_name(clsname: Symbol, vtype: Array[MMType]): MMType
	do
		if not _mmmodule.has_global_class_named(clsname) then _tc.fatal_error(_mmmodule.location, "Missing necessary class: \"{clsname}\"")
		var cls = _mmmodule.class_by_name(clsname)
		return cls.get_instantiate_type(vtype)
	end

	# The root type Object
	fun type_object: MMType
	do
		return get_type_by_name(once ("Object".to_symbol))
	end

	# The primitive type Bool
	fun type_bool: MMType
	do
		return get_type_by_name(once ("Bool".to_symbol))
	end
	
	# The primitive type Int 
	fun type_int: MMType
	do
		return get_type_by_name(once ("Int".to_symbol))
	end

	# The primitive type Float
	fun type_float: MMType
	do
		return get_type_by_name(once ("Float".to_symbol))
	end

	# The primitive type Char
	fun type_char: MMType
	do
		return get_type_by_name(once ("Char".to_symbol))
	end

	# The primitive type String
	fun type_string: MMType
	do
		return get_type_by_name(once ("String".to_symbol))
	end

	# The primitive type NativeString
	fun type_nativestring: MMType
	do
		return get_type_by_name(once ("NativeString".to_symbol))
	end

	# The primitive type Array[?]
	fun type_array(stype: MMType): MMType
	do
		return get_instantiated_type_by_name(once ("Array".to_symbol), [stype])
	end

	# The primitive type Discrete
	fun type_discrete: MMType
	do
		return get_type_by_name(once ("Discrete".to_symbol))
	end

	# The primitive type Range[?]
	fun type_range(stype: MMType): MMType
	do
		return get_instantiated_type_by_name(once ("Range".to_symbol), [stype])
	end

	# The primitive type of null
	fun type_none: MMType
	do
		return _mmmodule.type_none
	end

	fun get_method(recv: MMType, name: Symbol): MMMethod
	do
		if not recv.local_class.has_global_property_by_name(name) then
			fatal_error(current_node, "Fatal Error: {recv} must have a property named {name}.")
		end
		return recv.local_class.select_method(name)
	end

	# The current module
	readable var _mmmodule: MMSrcModule

	# The current class
	fun local_class: MMSrcLocalClass do return _local_class.as(not null)
	writable var _local_class: nullable MMSrcLocalClass

	# The current property
	fun local_property: MMLocalProperty do return _local_property.as(not null)
	writable var _local_property: nullable MMLocalProperty

	# The current tool configuration/status
	readable var _tc: ToolContext 

	# Display an error for a given syntax node
	fun error(n: nullable ANode, s: String)
	do
		_tc.error(if n == null then null else n.hot_location, s)
	end

	# Add an error, show errors and quit
	fun fatal_error(n: nullable ANode, s: String)
	do
		_tc.fatal_error(if n == null then null else n.hot_location, s)
	end

	# Display a warning for a given syntax node
	fun warning(n: nullable ANode, s: String)
	do
		_tc.warning(if n == null then null else n.hot_location, s)
	end

	# Check conformity and display error
	fun check_conform(n: ANode, subtype: nullable MMType, stype: nullable MMType): Bool
	do
		if stype == null or subtype == null then
			return false
		end
		if subtype < stype  then
			return true
		end
		error(n, "Type error: expected {stype}, got {subtype}")
		return false
	end

	# Check that an expression has a static type and that 
	# Display an error and return false if n is a statement
	# Require that the static type of n is known
	fun check_expr(n: AExpr): Bool
	do
		if not n.is_typed then
			if tc.error_count == 0 then
				print("{n.location} not typed but not error")
				abort
			end
			# An error occured in a sub node,
			# sillently cascade fail
			return false
		else if n.is_statement then
			error(n, "Type error: expected expression.")
			return false
		end
		return true
	end

	# Combine check_conform and check_expr
	fun check_conform_expr(n: AExpr, stype: nullable MMType): Bool
	do
		if stype == null then return false
		if check_expr(n) then return check_conform(n, n.stype, stype) else return false
	end

	# Check conformance between multiple expressions and a static type
	# Conformance is granted if among them there is a most general type
	# Return the most general type if a conformance is found
	# Display an error and return null if no conformance is found
	# The only allowed combinaison is with the nullable marker
	# @param stype is a possible additional type (without node)
	# Examples:
	#   Int, Int, Object => return Object
	#   Int, Float => display error, return null
	#   nullable Int, Object => return nullable Object
	fun check_conform_multiexpr(stype: nullable MMType, nodes: Collection[AExpr]): nullable MMType
	do
		var node: nullable AExpr = null # candidate node
		for n in nodes do
			if not check_expr(n) then return null
			var ntype = n.stype
			if stype != null and stype.is_nullable != ntype.is_nullable then
				# nullable combinaison: if one of them is nulable, considers that both are
				stype = stype.as_nullable
				ntype = ntype.as_nullable
			end
			if stype == null or stype < ntype then
				stype = ntype
				node = n
			end
		end
		assert stype != null
		for n in nodes do
			if not n.stype < stype then
				if node == null then
					error(n, "Type error: no most general type. Got {n.stype} and {stype}.")
				else
					error(n, "Type error: no most general type. Got {n.stype} and {stype} at {node.location.relative_to(n.location)}.")
				end
				return null
			end
		end
		return stype
	end

	protected init(tc: ToolContext, mmmodule: MMSrcModule)
	do
		_tc = tc
		_mmmodule = mmmodule
	end
end

###############################################################################

redef class ANode
	protected fun accept_abs_syntax_visitor(v: AbsSyntaxVisitor) do visit_all(v)
end

redef class Token
	var _symbol_cache: nullable Symbol

	# Symbol associated with the text
	# Lazily computed
	fun to_symbol: Symbol
	do
		var s = _symbol_cache
		if s == null then
			s = text.to_symbol
			_symbol_cache = s
		end
		return s
	end
end

redef class AClassdef
	# Associated class (MM entity)
	fun local_class: MMSrcLocalClass is abstract

	# Next AClassdef of the same class (if any)
	readable writable var _next_node: nullable AClassdef = null
end

redef class APropdef
	# Associated 'self' variable
	fun self_var: ParamVariable is abstract
end

redef class AAttrPropdef
	# Associated attribute (MM entity)
	fun prop: MMSrcAttribute is abstract

	# Associated read accessor (MM entity)
	fun readmethod: nullable MMSrcMethod is abstract

	# Associated write accessor (MM entity)
	fun writemethod: nullable MMSrcMethod is abstract
end

redef class AConcreteInitPropdef
	readable var _super_init_calls: Array[MMMethod] = new Array[MMMethod]
	readable var _explicit_super_init_calls: Array[MMMethod] = new Array[MMMethod]
end

redef class AMethPropdef
	# Associated method (MM entity)
	fun method: MMMethSrcMethod is abstract
end

redef class ATypePropdef
	# Associated formal type (MM entity)
	fun prop: MMSrcTypeProperty is abstract
end

redef class AParam
	# Position in the signature
	fun position: Int is abstract

	# Associated local variable
	fun variable: ParamVariable is abstract 
end

redef class AClosureDecl
	# Position in the signature
	fun position: Int is abstract

	# Associated closure variable
	fun variable: ClosureVariable is abstract
end

redef class AType
	# Is the node correcly typed
	# Return false if typed was not yet computed or
	# if an error occured during the typing computation
	fun is_typed: Bool is abstract

	# Return corresponding static type. (require is_typed)
	fun stype: MMType is abstract

	var _stype_cache: nullable MMType = null
	var _stype_cached: Bool = false

	# Retrieve the local class corresponding to the type.
	# Display an error and return null if there is no class
	# Display an error and return null if the type is not class based (formal one)
	fun get_local_class(v: AbsSyntaxVisitor): nullable MMLocalClass
	do
		var name = n_id.to_symbol
		var mod = v.mmmodule
		var cla = v.local_class

		if cla.formal_dict.has_key(name) or cla.has_global_property_by_name(name) then
			v.error(n_id, "Type error: {name} is a formal type")
			_stype_cached = true
			return null
		end

		if not mod.has_global_class_named(name) then
			v.error(n_id, "Type error: class {name} not found in module {mod}.")
			_stype_cached = true
			return null
		end

		var local_class = mod.class_by_name(name)
		local_class.global.check_visibility(v, self, mod)
		return local_class
	end

	# Retrieve corresponding static type.
	# Display an error and return null if there is a problem
	# But do not performs any subtype check.
	# get_unchecked_stype should be called to check that the static type is fully valid
	fun get_unchecked_stype(v: AbsSyntaxVisitor): nullable MMType
	do
		if _stype_cached then return _stype_cache
		_stype_cached = true

		var name = n_id.to_symbol
		var mod = v.mmmodule
		var cla = v.local_class
		var t: nullable MMType

		if cla.formal_dict.has_key(name) then
			if n_types.length > 0 then
				v.error(self, "Type error: formal type {name} cannot have formal parameters.")
				return null
			end
			t = cla.formal_dict[name]
			if n_kwnullable != null then t = t.as_nullable
			_stype_cache = t
			return t
		end

		if cla.has_global_property_by_name(name) then
			if n_types.length > 0 then
				v.error(self, "Type error: formal type {name} cannot have formal parameters.")
				return null
			end
			t = cla.get_type.local_class.select_virtual_type(name).stype_for(cla.get_type)
			if t == null then
				v.error(self, "Type error: circular definition in formal type {name}.")
				return null
			end
			if n_kwnullable != null then t = t.as_nullable
			_stype_cache = t
			return t
		end

		var local_class = get_local_class(v)
		if local_class == null then return null

		var arity = n_types.length
		if local_class.arity != arity then
			if arity == 0 then
				v.error(self, "Type error: '{local_class}' is a generic class.")
			else if local_class.arity == 0 then
				v.error(self, "Type error: '{local_class}' is not a generic class.")
			else
				v.error(self, "Type error: '{local_class}' has {local_class.arity} parameters ({arity} are provided).")
			end
			return null
		end

		if arity > 0 then
			var tab = new Array[MMType]
			for p in n_types do
				var t2 = p.get_unchecked_stype(v)
				if t2 == null then return null
				tab.add(t2)
			end
			t = local_class.get_instantiate_type(tab)
		else
			t = local_class.get_type
		end
		if n_kwnullable != null then t = t.as_nullable
		_stype_cache = t
		return t
	end

	# Retrieve corresponding static type.
	# Display an error and return null if there is a problem
	fun get_stype(v: AbsSyntaxVisitor): nullable MMType
	do
		var t = get_unchecked_stype(v)
		if t == null then return null
		if not t.is_valid then return null
		check_conform(v)
		return t
	end

	# Check that a static definition type is conform with regard to formal types
	# Useful with get_unchecked_stype
	# Remember that conformance check need that ancestors are totaly computed
	fun check_conform(v: AbsSyntaxVisitor)
	do
		var st = get_unchecked_stype(v)
		if st == null then return 
		var local_class = st.local_class
		var arity = n_types.length
		if arity > 0 then
			for i in [0..arity[ do
				var p = n_types[i]
				var pt = p.get_stype(v)
				var b = local_class.get_formal(i)
				if not b.is_valid then return
				var bt = b.bound
				bt = bt.adapt_to(st) # We need to abapt because of F-genericity
				v.check_conform(p, pt, bt)
			end
		end
	end
end

redef class AExpr
	# Is the expression node correcly typed
	# Return false if typed was not yet computed or
	# if an error occured during the typing computation
	fun is_typed: Bool is abstract

	# Is the expression node a statement? (ie has no return value)
	# require: is_typed
	fun is_statement: Bool is abstract

	# The static type of the expression
	# require: is_typed and not is_statement
	fun stype: MMType is abstract
end

abstract class AAbsAbsSendExpr
	super AExpr
	# The signature of the called property (require is_typed)
	fun prop_signature: MMSignature is abstract

	# The raw arguments used (without vararg transformation) (require is_typed)
	fun raw_arguments: Array[AExpr] is abstract
end

abstract class AAbsSendExpr
	super AAbsAbsSendExpr
	# The invoked method (require is_typed)
	fun prop: MMMethod is abstract

	# The return type (if any) (once computed)
	fun return_type: nullable MMType is abstract
end

abstract class ASuperInitCall
	super AAbsSendExpr
end

redef class ASuperExpr
	super ASuperInitCall
	fun init_in_superclass: nullable MMMethod is abstract
end

redef class ANewExpr
	super AAbsSendExpr
end

redef class ASendExpr
	super ASuperInitCall
	# Closure definitions
	fun closure_defs: nullable Array[AClosureDef] is abstract
end

redef class AReassignFormExpr
	# Method used through the reassigment operator (require is_typed)
	fun assign_method: MMMethod is abstract
end

abstract class ASendReassignExpr
	super ASendExpr
	super AReassignFormExpr
	# The invoked method used to read (require is_typed)
	# prop is the method used to write
	fun read_prop: MMMethod is abstract
end

redef class ACallReassignExpr
	super ASendReassignExpr
end

redef class ABraReassignExpr
	super ASendReassignExpr
end

redef class AAttrFormExpr
	# Attribute accessed (require is_typed)
	fun prop: MMAttribute is abstract

	# Attribute type of the acceded attribute (require is_typed)
	fun attr_type: MMType is abstract
end

redef class ASuperstringExpr
	fun atype: MMType is abstract
end

redef class AVardeclExpr
	# Assiociated local variable
	fun variable: VarVariable is abstract
	#readable writable var _variable: nullable VarVariable
end

redef class AForExpr
	# Associated automatic local variable
	fun variables: Array[AutoVariable] is abstract
end

redef class ASelfExpr
	# Associated local variable
	fun variable: ParamVariable is abstract
end

redef class AVarFormExpr
	# Associated local variable
	fun variable: Variable is abstract
end

redef class AClosureCallExpr
	super AAbsAbsSendExpr
	# Associated closure variable
	fun variable: ClosureVariable is abstract
end

redef class AClosureDef
	# Associated closure
	fun closure: MMClosure is abstract

	# Automatic variables
	readable writable var _variables: nullable Array[AutoVariable]
end

redef class AMethid
	# Name of method
	fun name: nullable Symbol is abstract
end

redef class AExprs
	# Return an array made of each expr
	fun to_a: Array[AExpr] do return self.n_exprs.to_a
end
