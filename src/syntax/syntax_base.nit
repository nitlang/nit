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
special MMModule
	# The related AST node
	readable var _node: AModule

	# Concrete NIT source local classs by name
	readable var _src_local_classes: Map[Symbol, MMSrcLocalClass]

	init(c: MMContext, source: AModule, dir: MMDirectory, name: Symbol, filename: String)
	do
		super(name, dir, c, filename)
		_node = source
		_src_local_classes = new HashMap[Symbol, MMSrcLocalClass]
	end
end

redef class MMGlobalClass
	# Check that a module can access a class
	fun check_visibility(v: AbsSyntaxVisitor, n: PNode, cm: MMSrcModule): Bool do
		var pm = intro.module
		assert pm isa MMSrcModule
		var vpm = cm.visibility_for(pm)
		if vpm == 3 then
			return true
		else if vpm == 0 then
			v.error(n, "Visibility error: Class {self} comes from the hidden module {cm}.") # TODO: should not occur
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
special MMConcreteClass
	# The related AST nodes
	readable var _nodes: Array[PClassdef]

	# Concrete NIT source generic formal parameter by name
	readable var _formal_dict: Map[Symbol, MMTypeFormalParameter] = new HashMap[Symbol, MMTypeFormalParameter]

	# Concrete NIT source properties by name
	readable var _src_local_properties: Map[Symbol, MMLocalProperty]

	init(mod: MMSrcModule, n: Symbol, cla: nullable PClassdef, a: Int)
	do
		super(mod, n, a)
		if cla == null then
			_nodes = new Array[PClassdef]
		else
			_nodes = [cla]
		end
		_src_local_properties = new HashMap[Symbol, MMLocalProperty]
	end
end

redef class MMGlobalProperty
	# Check that a module can access a property
	fun check_visibility(v: AbsSyntaxVisitor, n: PNode, cm: MMSrcModule, allows_protected: Bool): Bool do
		var pm = local_class.module
		assert pm isa MMSrcModule
		var vpm = cm.visibility_for(pm)
		if vpm == 3 then
			return true
		else if vpm == 0 then
			# TODO: should not occurs 
			v.error(n, "Visibility error: Property {self} comes from the hidden module {cm}.")
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
	fun node: nullable PNode do return null

	# Is the concrete method defined as init
	fun is_init: Bool do return false
end

# Concrete NIT source attribute
class MMSrcAttribute
special MMAttribute
	redef readable var _node: AAttrPropdef
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla)
		_node = n
	end
end

# Concrete NIT source method
class MMSrcMethod
special MMMethod
	redef fun is_intern do return false
	redef fun is_abstract do return false
end

# Concrete NIT source method for an automatic accesor
class MMAttrImplementationMethod
special MMSrcMethod
	redef readable var _node: AAttrPropdef
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla)
		_node = n
	end
end

# Concrete NIT source method for an automatic read accesor
class MMReadImplementationMethod
special MMAttrImplementationMethod
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla, n)
	end
end

# Concrete NIT source method for an automatic write accesor
class MMWriteImplementationMethod
special MMAttrImplementationMethod
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla, n)
	end
end

# Concrete NIT source method for an explicit method
class MMMethSrcMethod
special MMSrcMethod
	redef readable var _is_init: Bool
	redef readable var _is_intern: Bool
	redef readable var _is_abstract: Bool
	redef readable var _node: nullable AMethPropdef
	init(name: Symbol, cla: MMLocalClass, n: nullable AMethPropdef)
	do
		super(name, cla)
		_node = n
		_is_init = node isa AConcreteInitPropdef
		_is_intern = node isa AInternMethPropdef
		_is_abstract = node isa ADeferredMethPropdef
	end
end

# Concrete NIT source virtual type
class MMSrcTypeProperty
special MMLocalProperty
special MMTypeProperty
	redef readable var _node: ATypePropdef
	init(name: Symbol, cla: MMLocalClass, n: ATypePropdef)
	do
		super(name, cla)
		_node = n
	end
end

# Concrete NIT implicit constructor
class MMImplicitInit
special MMMethSrcMethod
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
	readable var _decl: nullable PNode

	# Static type
	readable writable var _stype: nullable MMType

	redef fun to_s do return _name.to_s

	fun kind: String is abstract

	init(n: Symbol, d: nullable PNode)
	do
		_name = n
		_decl = d
	end
end

# Variable declared with 'var'
class VarVariable
special Variable
	redef fun kind do return once "variable"
	init(n: Symbol, d: PNode) do super
end

# Parameter of method (declared in signature)
class ParamVariable
special Variable
	redef fun kind do return once "parameter"
	init(n: Symbol, d: nullable PNode) do super
end

# Automatic variable (like in the 'for' statement)
class AutoVariable
special Variable
	redef fun kind do return once "automatic variable"
	init(n: Symbol, d: PNode) do super
end

# False variable corresponding to closures declared in signatures
# Lives in the same namespace than variables
class ClosureVariable
special Variable
	redef fun kind do return once "closure"

	# The signature of the closure
	readable var _closure: MMClosure

	init(n: Symbol, d: PNode, c: MMClosure)
	do
		super(n, d)
		_closure = c
	end
end

###############################################################################

# Visitor used during the syntax analysis
class AbsSyntaxVisitor
special Visitor
	# The root type Object
	fun type_object: MMType
	do
		return _module.class_by_name(once ("Object".to_symbol)).get_type
	end

	# The primitive type Bool
	fun type_bool: MMType
	do
		return _module.class_by_name(once ("Bool".to_symbol)).get_type
	end
	
	# The primitive type Int 
	fun type_int: MMType
	do
		return _module.class_by_name(once ("Int".to_symbol)).get_type
	end

	# The primitive type Float
	fun type_float: MMType
	do
		return _module.class_by_name(once ("Float".to_symbol)).get_type
	end

	# The primitive type Char
	fun type_char: MMType
	do
		return _module.class_by_name(once ("Char".to_symbol)).get_type
	end

	# The primitive type String
	fun type_string: MMType
	do
		return _module.class_by_name(once ("String".to_symbol)).get_type
	end

	# The primitive type Collection[nullable Object]
	fun type_collection: MMType
	do
		return _module.class_by_name(once ("Collection".to_symbol)).get_instantiate_type([type_object.as_nullable])
	end

	# The primitive type NativeString
	fun type_nativestring: MMType
	do
		return _module.class_by_name(once ("NativeString".to_symbol)).get_type
	end

	# The primitive type Array[?]
	fun type_array(stype: MMType): MMType
	do
		return _module.class_by_name(once ("Array".to_symbol)).get_instantiate_type([stype])
	end

	# The primitive type Discrete
	fun type_discrete: MMType
	do
		return _module.class_by_name(once ("Discrete".to_symbol)).get_type
	end

	# The primitive type Range[?]
	fun type_range(stype: MMType): MMType
	do
		return _module.class_by_name(once ("Range".to_symbol)).get_instantiate_type([stype])
	end

	# The primitive type of null
	fun type_none: MMType
	do
		return _module.type_none
	end

	# The current module
	readable var _module: MMSrcModule

	# The current class
	fun local_class: MMSrcLocalClass do return _local_class.as(not null)
	writable var _local_class: nullable MMSrcLocalClass

	# The current property
	fun local_property: MMLocalProperty do return _local_property.as(not null)
	writable var _local_property: nullable MMLocalProperty

	# The current tool configuration/status
	readable var _tc: ToolContext 

	# Display an error for a given syntax node
	fun error(n: nullable PNode, s: String)
	do
		_tc.error("{locate(n)}: {s}")
	end

	# Display a warning for a given syntax node
	fun warning(n: nullable PNode, s: String)
	do
		_tc.warning("{locate(n)}: {s}")
	end

	#
	fun locate(n: nullable PNode): String
	do
		if n != null then return n.locate
		return _module.filename
	end

	# Check conformity and display error
	fun check_conform(n: PNode, subtype: nullable MMType, stype: nullable MMType): Bool
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
	fun check_expr(n: PExpr): Bool
	do
		if not n.is_typed then
			if tc.error_count == 0 then
				print("{n.locate} not typed but not error")
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
	fun check_conform_expr(n: PExpr, stype: nullable MMType): Bool
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
	fun check_conform_multiexpr(stype: nullable MMType, nodes: Collection[PExpr]): nullable MMType
	do
		var node: nullable PExpr = null # candidate node
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
		for n in nodes do
			if not n.stype < stype.as(not null) then
				if node == null then
					error(n, "Type error: no most general type. Got {n.stype} and {stype}.")
				else
					error(n, "Type error: no most general type. Got {n.stype} and {stype} at {node.locate}.")
				end
				return null
			end
		end
		return stype
	end

	protected init(tc: ToolContext, module: MMSrcModule)
	do
		_tc = tc
		_module = module
	end
end

###############################################################################

redef class PNode
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

redef class PClassdef
	# Associated class (MM entity)
	fun local_class: MMSrcLocalClass is abstract
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

	# Associated 'self' variable
	fun self_var: ParamVariable is abstract
end

redef class ATypePropdef
	# Associated formal type (MM entity)
	fun prop: MMSrcTypeProperty is abstract
end

redef class PParam
	# Position in the signature
	fun position: Int is abstract

	# Associated local variable
	fun variable: ParamVariable is abstract 
end

redef class PClosureDecl
	# Position in the signature
	fun position: Int is abstract

	# Associated closure variable
	fun variable: ClosureVariable is abstract
end

redef class PType
	# Retrieve the local class corresponding to the type.
	# Display an error and return null if there is no class
	# Display an error and return null if the type is not class based (formal one)
	fun get_local_class(v: AbsSyntaxVisitor): nullable MMLocalClass is abstract

	# Retrieve corresponding static type.
	# Display an error and return null if there is a problem
	fun get_stype(v: AbsSyntaxVisitor): nullable MMType is abstract

	# Retrieve corresponding static type.
	# Display an error and return null if there is a problem
	# But do not performs any subtype check.
	# get_unchecked_stype should be called to check that the static type is fully valid
	fun get_unchecked_stype(v: AbsSyntaxVisitor): nullable MMType is abstract

	# Check that a static definition type is conform with regard to formal types
	# Useful with get_unchecked_stype
	# Remember that conformance check need that ancestors are totaly computed
	fun check_conform(v: AbsSyntaxVisitor) is abstract

	# Is the node correcly typed
	# Return false if typed was not yet computed or
	# if an error occured during the typing computation
	fun is_typed: Bool is abstract

	# Return corresponding static type. (require is_typed)
	fun stype: MMType is abstract
end

redef class AType
	var _stype_cache: nullable MMType = null
	var _stype_cached: Bool = false

	redef fun get_local_class(v)
	do
		var name = n_id.to_symbol
		var mod = v.module
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

	redef fun get_unchecked_stype(v)
	do
		if _stype_cached then return _stype_cache
		_stype_cached = true

		var name = n_id.to_symbol
		var mod = v.module
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
	
	redef fun get_stype(v)
	do
		var t = get_unchecked_stype(v)
		if t == null then return null
		if not t.is_valid then return null
		check_conform(v)
		return t
	end

	redef fun check_conform(v)
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

redef class PExpr
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

class AAbsAbsSendExpr
special PExpr
	# The signature of the called property (require is_typed)
	fun prop_signature: MMSignature is abstract

	# The real arguments used (after star transformation) (require is_typed)
	fun arguments: Array[PExpr] is abstract
end

class AAbsSendExpr
special AAbsAbsSendExpr
	# The invoked method (require is_typed)
	fun prop: MMMethod is abstract

	# The return type (if any) (once computed)
	fun return_type: nullable MMType is abstract
end

class ASuperInitCall
special AAbsSendExpr
end

redef class ASuperExpr
special ASuperInitCall
	fun init_in_superclass: nullable MMMethod is abstract
end

redef class ANewExpr
special AAbsSendExpr
end

redef class ASendExpr
special ASuperInitCall
	# Closure definitions
	fun closure_defs: nullable Array[PClosureDef] is abstract
end

redef class AReassignFormExpr
	# Method used through the reassigment operator (require is_typed)
	fun assign_method: MMMethod is abstract
end

class ASendReassignExpr
special ASendExpr
special AReassignFormExpr
	# The invoked method used to read (require is_typed)
	# prop is the method used to write
	fun read_prop: MMMethod is abstract
end

redef class ACallReassignExpr
special ASendReassignExpr
end

redef class ABraReassignExpr
special ASendReassignExpr
end

redef class AAttrFormExpr
	# Attribute accessed (require is_typed)
	fun prop: MMAttribute is abstract

	# Attribute type of the acceded attribute (require is_typed)
	fun attr_type: MMType is abstract
end

redef class AStringFormExpr
	fun meth_with_native: MMMethod is abstract
end

redef class ASuperstringExpr
	fun meth_with_capacity: MMMethod is abstract
	fun meth_add: MMMethod is abstract
	fun meth_to_s: MMMethod is abstract
	fun atype: MMType is abstract
end

redef class AArrayExpr
	fun meth_with_capacity: MMMethod is abstract
	fun meth_add: MMMethod is abstract
end

redef class ARangeExpr
	fun meth_init: MMMethod is abstract
end

redef class AVardeclExpr
	# Assiociated local variable
	fun variable: VarVariable is abstract
	#readable writable var _variable: nullable VarVariable
end

redef class AForExpr
	# Associated automatic local variable
	fun variable: AutoVariable is abstract
	fun meth_iterator: MMMethod is abstract
	fun meth_is_ok: MMMethod is abstract
	fun meth_item: MMMethod is abstract
	fun meth_next: MMMethod is abstract
end

redef class ASelfExpr
	# Associated local variable
	fun variable: ParamVariable is abstract
	#readable writable var _variable: nullable ParamVariable
end

redef class AVarFormExpr
	# Associated local variable
	fun variable: Variable is abstract
	#readable writable var _variable: nullable Variable
end

redef class AClosureCallExpr
special AAbsAbsSendExpr
	# Associated closure variable
	fun variable: ClosureVariable is abstract
	#readable writable var _variable: nullable ClosureVariable
end

redef class PClosureDef
	# Associated closure
	#readable writable var _closure: nullable MMClosure
	fun closure: MMClosure is abstract

	# Automatic variables
	readable writable var _variables: nullable Array[AutoVariable]
end
