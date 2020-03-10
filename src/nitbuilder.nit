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

# Instantiation and transformation of language entities in AST and model. NitBuilder know how to associate a model and ast representation.
module nitbuilder

import modelbuilder
intrude import astbuilder
intrude import modelize_property
intrude import scope
intrude import typing

# Provides the construction of model entities and their associated ast.
class NitBuilder

	# The toolcontext instance
	var toolcontext: ToolContext

	# Instance of the AST constructor
	var ast_builder: ASTBuilder

	# Try to get MMethod property if exist in the given mclassdef. return new MMethod if not exist.
	private fun get_mmethod(name: String, mclassdef: MClassDef, visibility: nullable MVisibility): MMethod do
		if visibility == null then visibility = public_visibility
		var mproperty = toolcontext.modelbuilder.try_get_mproperty_by_name(null, mclassdef, name).as(nullable MMethod)
		if mproperty == null then mproperty = new MMethod(mclassdef, name, mclassdef.location, visibility)
		return mproperty
	end

	# Creation of a new method (AST and model representation) with the given name.
	# See `create_method_from_property` for more information.
	fun create_method_from_name(name: String, mclassdef: MClassDef, msignature: nullable MSignature, visibility: nullable MVisibility): AMethPropdef do
		var mproperty = get_mmethod(name, mclassdef, visibility)
		return create_method_from_property(mproperty, mclassdef, msignature)
	end

	# Same as `create_method_from_name` except the returned AMethPropdef is abstract.
	# See `create_abstract_method_from_property` for more information.
	fun create_abstract_method_from_name(name: String, mclassdef: MClassDef, msignature: nullable MSignature, visibility: nullable MVisibility): AMethPropdef do
		var mproperty = get_mmethod(name, mclassdef, visibility)
		return create_abstract_method_from_property(mproperty, mclassdef, msignature)
	end

	# Creation of a new method (AST and model representation) with the given MMethod.
	# See `create_abstract_method_from_property` for more information.
	# Take care, the AMethPropdef returned has an empty body (potential error if the signature given has a return type).
	fun create_method_from_property(mproperty: MMethod,  mclassdef: MClassDef, msignature: nullable MSignature): AMethPropdef do
		var n_def = create_abstract_method_from_property(mproperty, mclassdef, msignature)
		n_def.mpropdef.is_abstract = false
		n_def.n_block = ast_builder.make_block
		return n_def
	end

	# Creation of a new abstract method (AST and model representation) with the given MMethod
	fun create_abstract_method_from_property(mproperty: MMethod,  mclassdef: MClassDef, msignature: nullable MSignature): AMethPropdef do
		# new methoddef definition
		var m_def = new MMethodDef(mclassdef, mproperty, mclassdef.location)
		if msignature == null then msignature = new MSignature(new Array[MParameter])
		# set the signature
		m_def.msignature = msignature
		# set the abstract flag
		m_def.is_abstract = true
		# Build ast representation of the method
		var n_def = m_def.create_ast_representation(ast_builder)
		# Association new npropdef to mpropdef
		toolcontext.modelbuilder.unsafe_add_mpropdef2npropdef(m_def,n_def)
		return n_def
	end

	# Creation of a new attribute (AST and model representation) with the given name.
	# See `create_attribute_from_property` for more information.
	fun create_attribute_from_name(name: String, mclassdef: MClassDef, mtype: MType, visibility: nullable MVisibility, is_writable: nullable Bool, default_value: nullable AExpr): AAttrPropdef do
		if visibility == null then visibility = public_visibility
		# Try to get the attribut.
		var mattribute = toolcontext.modelbuilder.try_get_mproperty_by_name(null, mclassdef, name)
		if mattribute == null then mattribute = new MAttribute(mclassdef, name, mclassdef.location, visibility)
		return create_attribute_from_property(mattribute.as(MAttribute), mclassdef, mtype, is_writable, default_value)
	end

	# Creation of a new attribute (AST and model representation) with the given MAttribute.
	# See `create_attribute_from_propdef` for more information.
	fun create_attribute_from_property(mattribute: MAttribute, mclassdef: MClassDef, mtype: MType, is_writable: nullable Bool, default_value: nullable AExpr): AAttrPropdef do
		var attribut_def = new MAttributeDef(mclassdef, mattribute, mclassdef.location)
		attribut_def.static_mtype = mtype
		return create_attribute_from_propdef(attribut_def, is_writable, default_value)
	end

	# Creation of a new attribute (AST representation) with the given MAttributeDef.
	# See `create_attribute_from_propdef` for more information.
	fun create_attribute_from_propdef(mattribut_def: MAttributeDef, is_writable: nullable Bool, default_value: nullable AExpr): AAttrPropdef
	is
		expect(toolcontext.modelbuilder.mclassdef2node(mattribut_def.mclassdef) != null)
	do
		var n_attribute = mattribut_def.create_ast_representation(ast_builder)
		n_attribute.n_expr = default_value
		if default_value != null then n_attribute.has_value = true

		var nclass = toolcontext.modelbuilder.mclassdef2node(mattribut_def.mclassdef)

		n_attribute.location = mattribut_def.location
		n_attribute.validate

		nclass.n_propdefs.unsafe_add_all([n_attribute])
		nclass.validate

		n_attribute.build_read_property(toolcontext.modelbuilder, mattribut_def.mclassdef)
		n_attribute.build_read_signature

		if is_writable == null or is_writable then
			n_attribute.build_write_property(toolcontext.modelbuilder, mattribut_def.mclassdef, true)
			n_attribute.build_write_signature
		end

		toolcontext.modelbuilder.mpropdef2npropdef[mattribut_def] = n_attribute
		return n_attribute
	end

	# Creation of a new class (AST and model representation) with the given name.
	# See `create_class_from_mclass` for more information.
	fun create_class_from_name(name: String, super_type: Array[MClassType], mmodule: MModule, visibility: nullable MVisibility): AStdClassdef do
		if visibility == null then visibility = public_visibility
		var mclass = toolcontext.modelbuilder.try_get_mclass_by_name(null, mmodule, name)
		if mclass == null then mclass = new MClass(mmodule, name, mmodule.location, new Array[String], concrete_kind, visibility)
		return create_class_from_mclass(mclass, super_type, mmodule)
	end

	# Creation of a new class (AST and model representation) with the given MClass.
	# This method creates a new concrete class definition `MClassDef`, and adds it to the class hierarchy.
	# See `create_class_from_mclassdef` for more information.
	fun create_class_from_mclass(mclass: MClass, super_type: Array[MClassType], mmodule: MModule): AStdClassdef do
		var mclassdef = new MClassDef(mmodule, mclass.mclass_type, mmodule.location)
		mclassdef.set_supertypes(super_type)
		mclassdef.add_in_hierarchy

		return create_class_from_mclassdef(mclassdef, mmodule)
	end

	# Creation of a new class (AST representation) with the given MClassDef.
	# Note all the properties of our MClassDef will also generate an AST representation.
	# Make an error if the attribute already has already representation in the modelbuilder.
	fun create_class_from_mclassdef(mclassdef: MClassDef, mmodule: MModule): AStdClassdef do
		var n_classdef = mclassdef.create_ast_representation
		n_classdef.location = mclassdef.location
		n_classdef.validate

		for n_propdef in n_classdef.n_propdefs do
			var mpropdef = n_propdef.mpropdef
			assert mpropdef != null

			var p_npropdef = toolcontext.modelbuilder.mpropdef2node(mpropdef)
			if  p_npropdef != null then toolcontext.modelbuilder.error(null, "The property `{mpropdef.name}` already has a representation in the AST.")
			toolcontext.modelbuilder.unsafe_add_mpropdef2npropdef(mpropdef, n_propdef)
		end

		toolcontext.modelbuilder.process_default_constructors(n_classdef)

		toolcontext.modelbuilder.unsafe_add_mclassdef2nclassdef(mclassdef, n_classdef)
		return n_classdef
	end

	# Build a callsite to call the `mproperty` in the current method `caller`.
	# `is_self_call` indicate if the called method is a property of `self`
	#
	# This method provides a safe entry point to create a callsite. See `build_callsite_by_property` in TypeVisitor.
	fun create_callsite(caller: APropdef, mproperty: MMethod, is_self_call: Bool): CallSite
	do
		var type_visitor = new TypeVisitor(toolcontext.modelbuilder, caller.mpropdef.as(not null))
		var callsite = type_visitor.build_callsite_by_property(caller, mproperty.intro_mclassdef.bound_mtype, mproperty, is_self_call)
		assert callsite != null
		return callsite
	end
end

redef class MEntity
	# Return a ast representation of self model entity.
	fun create_ast_representation(astbuilder: nullable ASTBuilder): ANode is abstract
end

redef class MPropDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): APropdef is abstract
end

redef class MClassDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AStdClassdef do
		if astbuilder == null then astbuilder = new ASTBuilder(mmodule)
		var n_propdefs = new Array[APropdef]
		for mpropdef in self.mpropdefs do
			n_propdefs.add(mpropdef.create_ast_representation(astbuilder))
		end
		var n_formaldefs = new Array[AFormaldef]
		return astbuilder.make_class(self, visibility.create_ast_representation(astbuilder), n_formaldefs, null, n_propdefs, null)
	end
end

redef class MAttributeDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AAttrPropdef do
		if astbuilder == null then astbuilder = new ASTBuilder(mclassdef.mmodule)
		var ntype = null
		if self.static_mtype != null then ntype = static_mtype.create_ast_representation(astbuilder)
		return astbuilder.make_attribute("_" + self.name, ntype, self.visibility.create_ast_representation(astbuilder), null, null, self, null, null)
	end
end

redef class MMethodDef
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AMethPropdef do
		if astbuilder == null then astbuilder = new ASTBuilder(mclassdef.mmodule)
		var tk_redef = null
		if self.mproperty.intro != self then tk_redef = new TKwredef
		var n_signature = new ASignature
		if self.msignature != null then n_signature = self.msignature.create_ast_representation(astbuilder)
		return astbuilder.make_method(visibility.create_ast_representation(astbuilder) , tk_redef, self, n_signature)
	end
end

redef class MVisibility
	fun create_ast_representation(astbuilder: nullable ASTBuilder): AVisibility do
		if self.to_s == "public" then
			return new APublicVisibility
		else if self.to_s == "private" then
			return new APrivateVisibility
		else if self.to_s == "protected" then
			return new AProtectedVisibility
		else
			return new AIntrudeVisibility
		end
	end
end

redef class MSignature
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): ASignature do
		var nparams = new Array[AParam]
		for mparam in mparameters do nparams.add(mparam.create_ast_representation(astbuilder))
		var return_type = null
		if self.return_mtype != null then return_type = self.return_mtype.create_ast_representation(astbuilder)
		return new ASignature.init_asignature(null, nparams, null, return_type)
	end
end

redef class MParameter
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AParam do
		var variable = new Variable(self.name)
		variable.declared_type = self.mtype
		return new AParam.make(variable, self.mtype.create_ast_representation(astbuilder))
	end
end

redef class MType
	redef fun create_ast_representation(astbuilder: nullable ASTBuilder): AType do
		return new AType.make(self)
	end
end

redef class AMethPropdef
	# Execute all method verification scope flow and typing.
	# It also execute an ast validation to define all parents and all locations
	fun do_all(toolcontext: ToolContext)
	do
		self.validate
		# FIXME: The `do_` usage it is maybe to much (verification...). Solution: Cut the `do_` methods into simpler parts
		self.do_scope(toolcontext)
		self.do_flow(toolcontext)
		self.do_typing(toolcontext.modelbuilder, true)
	end
end
