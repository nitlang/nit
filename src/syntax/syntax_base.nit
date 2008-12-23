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

	init(c: MMContext, source: AModule, dir: MMDirectory, name: Symbol)
	do
		super(name, dir, c)
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
	readable attr _src_local_properties: Map[Symbol, MMConcreteProperty] 

	init(n: Symbol, cla: PClassdef, a: Int)
	do
		super(n, a)
		_nodes = [cla]
		_src_local_properties = new HashMap[Symbol, MMConcreteProperty]
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

redef class MMConcreteProperty
	# The attached node (if any)
	meth node: PNode do return null
end

# Concrete NIT source attribute
class MMSrcAttribute
special MMConcreteProperty
special MMAttribute
	redef readable attr _node: AAttrPropdef
	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla, self)
		_node = n
	end
end

# Concrete NIT source method
class MMSrcMethod
special MMConcreteProperty
special MMMethod
end

# Concrete NIT source method for an automatic accesor
class MMAttrImplementationMethod
special MMSrcMethod
	redef readable attr _node: AAttrPropdef
end

# Concrete NIT source method for an automatic read accesor
class MMReadImplementationMethod
special MMAttrImplementationMethod

	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla, self)
		_node = n
	end
end

# Concrete NIT source method for an automatic write accesor
class MMWriteImplementationMethod
special MMAttrImplementationMethod

	init(name: Symbol, cla: MMLocalClass, n: AAttrPropdef)
	do
		super(name, cla, self)
		_node = n
	end
end

# Concrete NIT source method for an explicit method
class MMMethSrcMethod
special MMSrcMethod
	redef readable attr _node: AMethPropdef
	init(name: Symbol, cla: MMLocalClass, n: AMethPropdef)
	do
		super(name, cla, self)
		_node = n
	end
end

# Concrete NIT source virtual type
class MMSrcTypeProperty
special MMConcreteProperty
special MMTypeProperty
	redef readable attr _node: ATypePropdef
	init(name: Symbol, cla: MMLocalClass, n: ATypePropdef)
	do
		super(name, cla, self)
		_node = n
	end
end


# Local variable and method parameter
class Variable
	# Name of the variable
	readable attr _name: Symbol 

	# Declaration AST node
	readable attr _decl: PNode

	# Static type
	readable writable attr _stype: MMType 

	redef meth to_s do return _name.to_s

	init(n: Symbol, d: PNode)
	do
		assert n != null
		assert d != null
		_name = n
		_decl = d
	end
end

###############################################################################

# Visitor used during the syntax analysis
class AbsSyntaxVisitor
special Visitor
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
	readable writable attr _local_property: MMConcreteProperty

	# The current tool configuration/status
	readable attr _tc: ToolContext 

	# Display an error for a given syntax node
	meth error(n: PNode, s: String)
	do
		_tc.error("{n.locate}: {s}")
	end

	# Display a warning for a given syntax node
	meth warning(n: PNode, s: String)
	do
		_tc.warning("{n.locate}: {s}")
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
end

redef class ATypePropdef
	# Associated formal type (MM entity)
	meth prop: MMSrcTypeProperty is abstract
end

redef class PParam
	# Position in the signature
	meth position: Int is abstract

	# Associated local variable
	meth variable: Variable is abstract 
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
	attr _stype_cached: Bool

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
			var t = cla.get_type.select_virtual_type(name).stype_for(cla.get_type)
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
		if t != null then check_conform(v)
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
				var bt = local_class.get_formal(i).bound
				if bt == null then return
				bt = bt.adapt_to(st) # We need to abapt because of F-genericity
				v.check_conform(p, pt, bt)
			end
		end
	end
end

redef class PExpr
	# Static type
	# Is null for statement and for erronus expression
	meth stype: MMType is abstract
end

redef class AVardeclExpr
	# Assiociated local variable
	readable writable attr _variable: Variable
end

redef class AForVardeclExpr
	# Associated automatic local variable
	readable writable attr _variable: Variable
end

redef class AVarFormExpr
	# Associated local variable
	readable writable attr _variable: Variable 
end

