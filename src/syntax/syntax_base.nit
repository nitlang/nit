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
	readable attr _node: AModule

	# Concrete NIT source local classs by name
	readable attr _src_local_classes: Map[Symbol, MMSrcLocalClass]

	init(c: MMContext, source: AModule, dir: MMDirectory, name: Symbol, filename: String)
	do
		super(name, dir, c, filename)
		_node = source
		_src_local_classes = new HashMap[Symbol, MMSrcLocalClass]
	end
end

redef class MMGlobalClass
	# Check that a module can access a class
	meth check_visibility(v: AbsSyntaxVisitor, n: PNode, cm: MMSrcModule): Bool do
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
	readable attr _nodes: Array[PClassdef]

	# Concrete NIT source generic formal parameter by name
	readable writable attr _formal_dict: Map[Symbol, MMTypeFormalParameter]

	# Concrete NIT source properties by name
	readable attr _src_local_properties: Map[Symbol, MMLocalProperty] 

	init(mod: MMSrcModule, n: Symbol, cla: PClassdef, a: Int)
	do
		super(mod, n, a)
		_nodes = [cla]
		_src_local_properties = new HashMap[Symbol, MMLocalProperty]
	end
end

redef class MMGlobalProperty
	# Check that a module can access a property
	meth check_visibility(v: AbsSyntaxVisitor, n: PNode, cm: MMSrcModule, allows_protected: Bool): Bool do
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
	meth node: PNode do return null

	# Is the concrete method defined as init
	meth is_init: Bool do return false
end

# Concrete NIT source attribute
class MMSrcAttribute
special MMAttribute
	redef readable attr _node: AAttrPropdef
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla)
		_node = n
	end
end

# Concrete NIT source method
class MMSrcMethod
special MMMethod
end

# Concrete NIT source method for an automatic accesor
class MMAttrImplementationMethod
special MMSrcMethod
	redef readable attr _node: AAttrPropdef
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
	redef meth is_init do return _node isa AConcreteInitPropdef
	redef readable attr _node: AMethPropdef
	init(name: Symbol, cla: MMLocalClass, n: AMethPropdef)
	do
		super(name, cla)
		_node = n
	end
end

# Concrete NIT source virtual type
class MMSrcTypeProperty
special MMLocalProperty
special MMTypeProperty
	redef readable attr _node: ATypePropdef
	init(name: Symbol, cla: MMLocalClass, n: ATypePropdef)
	do
		super(name, cla)
		_node = n
	end
end

# Concrete NIT implicit constructor
class MMImplicitInit
special MMMethSrcMethod
	redef meth is_init do return true
	readable attr _unassigned_attributes: Array[MMSrcAttribute]
	readable attr _super_inits: Array[MMLocalProperty]
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
	readable attr _name: Symbol 

	# Declaration AST node
	readable attr _decl: PNode

	# Static type
	readable writable attr _stype: MMType 

	redef meth to_s do return _name.to_s

	meth kind: String is abstract

	init(n: Symbol, d: PNode)
	do
		#assert n != null
		#assert d != null
		_name = n
		_decl = d
	end
end

# Variable declared with 'var'
class VarVariable
special Variable
	redef meth kind do return once "variable"
	init(n: Symbol, d: PNode) do super
end

# Parameter of method (declared in signature)
class ParamVariable
special Variable
	redef meth kind do return once "parameter"
	init(n: Symbol, d: PNode) do super
end

# Automatic variable (like in the 'for' statement)
class AutoVariable
special Variable
	redef meth kind do return once "automatic variable"
	init(n: Symbol, d: PNode) do super
end

# False variable corresponding to closures declared in signatures
# Lives in the same namespace than variables
class ClosureVariable
special Variable
	redef meth kind do return once "closure"

	# The signature of the closure
	readable attr _closure: MMClosure

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
	meth type_object: MMType
	do
		return _module.class_by_name(once ("Object".to_symbol)).get_type
	end

	# The primitive type Bool
	meth type_bool: MMType
	do
		return _module.class_by_name(once ("Bool".to_symbol)).get_type
	end
	
	# The primitive type Int 
	meth type_int: MMType
	do
		return _module.class_by_name(once ("Int".to_symbol)).get_type
	end

	# The primitive type Float
	meth type_float: MMType
	do
		return _module.class_by_name(once ("Float".to_symbol)).get_type
	end

	# The primitive type Char
	meth type_char: MMType
	do
		return _module.class_by_name(once ("Char".to_symbol)).get_type
	end

	# The primitive type String
	meth type_string: MMType
	do
		return _module.class_by_name(once ("String".to_symbol)).get_type
	end

	# The primitive type Collection[Object]
	meth type_collection: MMType
	do
		return _module.class_by_name(once ("Collection".to_symbol)).get_type
	end

	# The primitive type Array[?]
	meth type_array(stype: MMType): MMType
	do
		return _module.class_by_name(once ("Array".to_symbol)).get_instantiate_type([stype])
	end

	# The primitive type Discrete
	meth type_discrete: MMType
	do
		return _module.class_by_name(once ("Discrete".to_symbol)).get_type
	end

	# The primitive type Range[?]
	meth type_range(stype: MMType): MMType
	do
		return _module.class_by_name(once ("Range".to_symbol)).get_instantiate_type([stype])
	end

	# The primitive type of null
	meth type_none: MMType
	do
		return _module.type_none
	end

	# The current module
	readable writable attr _module: MMSrcModule 

	# The current class
	readable writable attr _local_class: MMSrcLocalClass 

	# The current property
	readable writable attr _local_property: MMLocalProperty

	# The current tool configuration/status
	readable attr _tc: ToolContext 

	# Display an error for a given syntax node
	meth error(n: PNode, s: String)
	do
		_tc.error("{locate(n)}: {s}")
	end

	# Display a warning for a given syntax node
	meth warning(n: PNode, s: String)
	do
		_tc.warning("{locate(n)}: {s}")
	end

	#
	meth locate(n: PNode): String
	do
		if n != null then return n.locate
		return _module.filename
	end

	# Check conformity and display error
	meth check_conform(n: PNode, subtype: MMType, stype: MMType): Bool
	do
		if stype == null or subtype == null then
			return false
		end
		if subtype < stype then
			return true
		end
		#error(n, "Type error: expected {stype}'{stype.module}, got {subtype}'{subtype.module}")
		#abort
		error(n, "Type error: expected {stype}, got {subtype}")
		return false
	end
	
	# Check that an expression has a static type and that 
	# Display an error and return false if n is a statement
	# Require that the static type of n is known
	meth check_expr(n: PExpr): Bool
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
	meth check_conform_expr(n: PExpr, stype: MMType): Bool
	do
		if check_expr(n) then return check_conform(n, n.stype, stype) else return false
	end

	# Check conformance between multiple expressions and a static type
	# Conformance is granted if among them there is a most general type
	# Return the most general type if a conformance is found
	# Display an error and return null if no conformance is found
	# @param stype is a possible additional type (without node)
	# Examples:
	#   Int, Int, Object => return Object
	#   Int, Float => display error, return null
	meth check_conform_multiexpr(stype: MMType, nodes: Collection[PExpr]): MMType
	do
		var node: PExpr = null # candidate node
		for n in nodes do
			if not check_expr(n) then return null
			var ntype = n.stype
			if stype == null or (ntype != null and stype < ntype) then
				stype = ntype
				node = n
			end
		end
		for n in nodes do
			if not n.stype < stype then
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
	protected meth accept_abs_syntax_visitor(v: AbsSyntaxVisitor) do visit_all(v)
end

redef class Token
	attr _symbol: Symbol

	# Symbol associated with the text
	# Lazily computed
	meth to_symbol: Symbol
	do
		var s = _symbol
		if s == null then
			s = text.to_symbol
			_symbol = s
		end
		return s
	end
end

redef class PClassdef
	# Associated class (MM entity)
	meth local_class: MMSrcLocalClass is abstract
end

redef class AAttrPropdef
	# Associated attribute (MM entity)
	meth prop: MMSrcAttribute is abstract

	# Associated read accessor (MM entity)
	meth readmethod: MMSrcMethod is abstract

	# Associated write accessor (MM entity)
	meth writemethod: MMSrcMethod is abstract
end

redef class AMethPropdef
	# Associated method (MM entity)
	meth method: MMMethSrcMethod is abstract

	# Associated 'self' variable
	meth self_var: ParamVariable is abstract
end

redef class ATypePropdef
	# Associated formal type (MM entity)
	meth prop: MMSrcTypeProperty is abstract
end

redef class PParam
	# Position in the signature
	meth position: Int is abstract

	# Associated local variable
	meth variable: ParamVariable is abstract 
end

redef class PClosureDecl
	# Associated closure variable
	meth variable: ClosureVariable is abstract
end

redef class PType
	# Retrieve the local class corresponding to the type.
	# Display an error and return null if there is no class
	# Display an error and return null if the type is not class based (formal one)
	meth get_local_class(v: AbsSyntaxVisitor): MMLocalClass is abstract

	# Retrieve corresponding static type.
	# Display an error and return null if there is a problem
	meth get_stype(v: AbsSyntaxVisitor): MMType is abstract

	# Retrieve corresponding static type.
	# Display an error and return null if there is a problem
	# But do not performs any subtype check.
	# get_unchecked_stype should be called to check that the static type is fully valid
	meth get_unchecked_stype(v: AbsSyntaxVisitor): MMType is abstract

	# Check that a static definition type is conform with regard to formal types
	# Useful with get_unchecked_stype
	# Remember that conformance check need that ancestors are totaly computed
	meth check_conform(v: AbsSyntaxVisitor) is abstract
end

redef class AType
	attr _stype_cache: MMType
	attr _stype_cached: Bool = false

	redef meth get_local_class(v)
	do
		var name = n_id.to_symbol
		var mod = v.module
		var cla = v.local_class

		if (cla.formal_dict != null and cla.formal_dict.has_key(name)) or (cla.global_properties != null and cla.has_global_property_by_name(name)) then
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

	redef meth get_unchecked_stype(v)
	do
		if _stype_cached then return _stype_cache
		_stype_cached = true

		var name = n_id.to_symbol
		var mod = v.module
		var cla = v.local_class

		if cla.formal_dict.has_key(name) then
			if n_types.length > 0 then
				v.error(self, "Type error: formal type {name} cannot have formal parameters.")
				return null
			end
			var formal = cla.formal_dict[name]
			_stype_cache = formal
			return formal
		end

		if cla.global_properties != null and cla.has_global_property_by_name(name) then
			if n_types.length > 0 then
				v.error(self, "Type error: formal type {name} cannot have formal parameters.")
				return null
			end
			var t = cla.get_type.local_class.select_virtual_type(name).stype_for(cla.get_type)
			if t == null then
				v.error(self, "Type error: circular definition in formal type {name}.")
				return null
			end
			_stype_cache = t
			return t
		end

		var local_class = get_local_class(v)
		if local_class == null then return null

		var arity = n_types.length 
		if local_class.arity != arity then
			v.error(self, "Type error: '{local_class}' has {local_class.arity} parameters which differs from the {arity} params.")
			return null
		end

		if arity > 0 then
			var tab = new Array[MMType]
			for p in n_types do
				tab.add(p.get_unchecked_stype(v))
			end
			var t = local_class.get_instantiate_type(tab)
			_stype_cache = t
			return t
		else
			var t = local_class.get_type
			_stype_cache = t
			return t
		end
	end
	
	redef meth get_stype(v)
	do
		var t = get_unchecked_stype(v)
		if t == null then return null
		if not t.is_valid then return null
		check_conform(v)
		return t
	end

	redef meth check_conform(v)
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
	meth is_typed: Bool is abstract

	# Is the expression node a statement? (ie has no return value)
	# require: is_typed
	meth is_statement: Bool is abstract

	# The static type of the expression
	# require: is_typed and not is_statement
	meth stype: MMType is abstract
end

redef class AVardeclExpr
	# Assiociated local variable
	readable writable attr _variable: VarVariable
end

redef class AForExpr
	# Associated automatic local variable
	readable writable attr _variable: AutoVariable
end

redef class ASelfExpr
	# Associated local variable
	readable writable attr _variable: ParamVariable 
end

redef class AVarFormExpr
	# Associated local variable
	readable writable attr _variable: Variable 
end

redef class AClosureCallExpr
	# Associated closure variable
	readable writable attr _variable: ClosureVariable
end

redef class PClosureDef
	# Associated closure
	readable writable attr _closure: MMClosure

	# Automatic variables
	readable writable attr _variables: Array[AutoVariable]
end
