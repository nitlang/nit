# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
# Copyright 2015 Alexis Laferrière <alexis.laf@xymus.net>
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

# Uses a visitor to extract data from the javap output AST
# It sends the data to `code_generator` module
module javap_visitor

import javap_test_parser
import code_generator
import jtype_converter
intrude import model

# Visitor of the AST generated from javap output
class JavaVisitor
	super Visitor

	# Model of all the analyzed classes
	var model: JavaModel

	# Java class in construction
	var java_class: JavaClass is noinit

	redef fun visit(n) do n.accept_visitor(self)
end

redef class Node
	private fun accept_visitor(v: JavaVisitor) do visit_children(v)
end

# ---
# Class Header

redef class Nclass_declaration
	redef fun accept_visitor(v)
	do
		var jtype = n_full_class_name.to_java_type

		v.java_class = new JavaClass(jtype)
		v.model.add_class v.java_class

		# Visit all properties
		super
	end
end

# Extends declaration in the class header
redef class Nextends_declaration
	redef fun accept_visitor(v)
	do
		v.java_class.extends.add_all n_types.to_a
	end
end

# Implements declaration in the class header
redef class Nimplements_declaration
	redef fun accept_visitor(v)
	do
		v.java_class.implements.add_all n_types.to_a
	end
end

# ---
# Properties

# Method declaration
redef class Nproperty_declaration_method
	redef fun accept_visitor(v)
	do
		var is_static = false
		var modifiers = n_modifier
		if modifiers != null then is_static = modifiers.has_static

		var id = n_identifier.text
		var return_jtype = n_type.to_java_type

		# Generic parameters
		var n_params = n_generic_parameters
		var generic_params
		if n_params != null then
			generic_params = n_params.n_types.to_a
		else generic_params = new Array[JavaType]

		# Collect parameters
		var n_types = n_types
		var params
		if n_types != null then
			params = n_types.to_a
		else params = new Array[JavaType]

		var method = new JavaMethod(is_static, return_jtype, params, generic_params)
		v.java_class.methods[id].add method
	end
end

# Constructor declaration
redef class Nproperty_declaration_constructor
	redef fun accept_visitor(v)
	do
		# Collect parameters
		var n_types = n_types
		var params
		if n_types != null then
			params = n_types.to_a
		else params = new Array[JavaType]

		# Generic parameters
		var n_params = n_generic_parameters
		var generic_params
		if n_params != null then
			generic_params = n_params.n_types.to_a
		else generic_params = new Array[JavaType]

		var method = new JavaConstructor(params, generic_params)
		v.java_class.constructors.add method
	end
end

# Variable property declaration
redef class Nproperty_declaration_attribute
	redef fun accept_visitor(v)
	do
		var id = n_identifier.text
		var jtype = n_type.to_java_type

		# Manually count the array depth as it is after the id
		var brackets = n_brackets
		if brackets != null then jtype.array_dimension += brackets.children.length

		var is_static = false
		var modifiers = n_modifier
		if modifiers != null then is_static = modifiers.has_static

		v.java_class.attributes[id] = new JavaAttribute(is_static, jtype)
	end
end

# Static property declaration
redef class Nproperty_declaration_static
	redef fun accept_visitor(v)
	do
		# TODO
	end
end

# ---
# Services

redef class Ntype
	private fun to_java_type: JavaType
	do
		var jtype = n_base_type.to_java_type

		var brackets = n_brackets
		if brackets != null then jtype.array_dimension += brackets.children.length

		var dots = n_dots
		if dots != null then jtype.is_vararg = true

		return jtype
	end
end

redef class Nbase_type
	private fun to_java_type: JavaType
	do
		# By default, everything is bound by object
		var jtype = new JavaType
		jtype.identifier.add_all(["java", "lang", "object"])
		return jtype
	end
end

redef class Nbase_type_class
	redef fun to_java_type do return n_full_class_name.to_java_type
end

redef class Nbase_type_primitive
	redef fun to_java_type
	do
		# All the concrete nodes under this production are tokens
		for node in depth do
			if not node isa NToken then continue

			var jtype = new JavaType
			jtype.identifier.add node.text
			return jtype
		end

		abort
	end
end

redef class Nbase_type_void
	redef fun to_java_type
	do
		var jtype = new JavaType
		jtype.is_void = true
		return jtype
	end
end

redef class Nbase_type_extends
	redef fun to_java_type do return n_generic_identifier.to_java_type
end

redef class Nbase_type_super
	redef fun to_java_type
	do
		var bounds = n_type_bound.to_a

		# Java use more than one lower bound,
		# it can't be translated statically to Nit,
		# so we use the only the first one.
		# This may cause problems on complex generic types,
		# but these cases can be handled manually.
		return bounds.first
	end
end

redef class Ngeneric_identifier
	private fun to_java_type: JavaType is abstract
end

redef class Ngeneric_identifier_class
	redef fun to_java_type do return n_full_class_name.to_java_type
end

redef class Ngeneric_identifier_wildcard
	redef fun to_java_type
	do
		var jtype = new JavaType
		jtype.identifier.add_all(["java", "lang", "Object"])
		return jtype
	end
end

redef class Nfull_class_name
	# All the identifiers composing this class name
	private fun to_a: Array[String] is abstract

	# Access `n_class_name` on both alternatives
	private fun n_class_name_common: Nclass_name is abstract

	private fun to_java_type: JavaType
	do
		var jtype = new JavaType
		jtype.identifier = to_a

		# Generic parameters
		var n_params = n_class_name_common.n_generic_parameters
		if n_params != null then jtype.generic_params = n_params.n_types.to_a

		return jtype
	end
end

redef class Nfull_class_name_head
	redef fun n_class_name_common do return n_class_name

	redef fun to_a do return [n_class_name.n_identifier.text]
end

redef class Nfull_class_name_tail
	redef fun n_class_name_common do return n_class_name

	redef fun to_a
	do
		var a = n_full_class_name.to_a
		a.add n_class_name.n_identifier.text
		return a
	end
end

redef class Ntypes
	# Get the types composing this list of parameters
	#
	# This is used both on methods signatures and type parameters.
	private fun to_a: Array[JavaType] is abstract
end

redef class Ntypes_head
	redef fun to_a do return [n_type.to_java_type]
end

redef class Ntypes_tail
	redef fun to_a
	do
		var a = n_types.to_a
		a.add n_type.to_java_type
		return a
	end
end

redef class Nodes
	private fun has_static: Bool
	do
		for modifier in depth do
			if modifier isa NToken and modifier.text == "static" then return true
		end

		return false
	end
end

redef class Ntype_bound
	# Get the types composing this bound
	private fun to_a: Array[JavaType] is abstract
end

redef class Ntype_bound_head
	redef fun to_a do return [n_full_class_name.to_java_type]
end

redef class Ntype_bound_tail
	redef fun to_a
	do
		var a = n_type_bound.to_a
		a.add n_full_class_name.to_java_type
		return a
	end
end
