# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Frédéric Vachon <fredvac@gmail.com>
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

class JavaVisitor
	super Visitor

	var converter: JavaTypeConverter

	var java_class = new JavaClass
	var declaration_type: nullable String =  null
	var declaration_element: nullable String = null
	var class_type: JavaType

	var variable_id = ""
	var variable_type: JavaType

	var is_generic_param = false
	var is_generic_id = false
	var generic_id = ""
	var gen_params_index = 0

	# Used to resolve generic return types (T -> foo.faz.Bar)
	var generic_map = new HashMap[String, Array[String]]

	var is_primitive_array = false

	var method_id = ""
	var method_return_type: JavaType
	var method_params = new Array[JavaType]
	var param_index = 0

	redef fun visit(n) do n.accept_visitor(self)

	init(converter: JavaTypeConverter)
	do
		self.converter = converter
		self.class_type = new JavaType(self.converter)
		self.method_return_type = new JavaType(self.converter)
		self.variable_type = new JavaType(self.converter)
		super
	end

	# Add the identifier from `token` to the current context
	fun add_identifier(token: NToken)
	do
		if declaration_type == "variable" then
			if declaration_element == "type" then
				variable_type.identifier.add(token.text)
			end
		else if declaration_type == "method" then
			if declaration_element == "return_type" then
				method_return_type.identifier.add(token.text)
			else if declaration_element == "parameter_list" then
				method_params[param_index].identifier.add(token.text)
			end
		end
	end
end

redef class Node
	fun accept_visitor(v: JavaVisitor) do visit_children(v)
end

redef class Nidentifier
	redef fun accept_visitor(v)
	do
		if v.declaration_type == "class_header" then

			if v.declaration_element == "id" then
				v.class_type.identifier.add(self.text)
			end

		else if v.declaration_type == "variable" then

			if v.declaration_element == "id" then
				v.variable_id += self.text
			else if v.declaration_element == "type" then
				if v.is_generic_param then
					v.variable_type.generic_params[v.gen_params_index].identifier.add(self.text)
				else
					v.variable_type.identifier.add(self.text)
				end
			end

		else if v.declaration_type == "method" then

			if v.declaration_element == "id" then
				v.method_id = self.text
			else if v.declaration_element == "return_type" then
				if self.text == "void" then 
					v.method_return_type.is_void = true
				else if v.is_generic_param then
					v.method_return_type.generic_params[v.gen_params_index].identifier.add(self.text)
				else
					v.method_return_type.identifier.add(self.text)
				end
			else if v.declaration_element == "parameter_list" then
				if v.is_generic_param then
					v.method_params[v.param_index].generic_params[v.gen_params_index].identifier.add(self.text)
				else
					v.method_params[v.param_index].identifier.add(self.text)
				end

			# Creates a map to resolve generic return types
			# Exemple : public **<T extends android/os/Bundle>** T foo();
			else if v.is_generic_param then
				if v.is_generic_id then
					v.generic_id = self.text
					v.generic_map[self.text] = new Array[String]

					if not v.method_return_type.has_unresolved_types then v.method_return_type.has_unresolved_types = true
				else
					v.generic_map[v.generic_id].add(self.text)
				end
			end

		end

		super
	end
end

# Primitive array node
redef class N_39d_91d_93d_39d
	redef fun accept_visitor(v)
	do
		if v.declaration_type == "variable" then
			if v.declaration_element == "type" then
				if v.is_generic_param then
					v.variable_type.generic_params[v.gen_params_index].array_dimension += 1
				else
					v.variable_type.array_dimension += 1
				end
			end

		else if v.declaration_type == "method" then

			if v.declaration_element == "return_type" then
				if v.is_generic_param then
					v.method_return_type.generic_params[v.gen_params_index].array_dimension += 1
				else
					v.method_return_type.array_dimension += 1
				end
			else if v.declaration_element == "parameter_list" then
				if v.is_generic_param then
					v.method_params[v.param_index].generic_params[v.gen_params_index].array_dimension += 1
				else
					v.method_params[v.param_index].array_dimension += 1
				end
			end

		end

		super
	end
end

redef class N_39dchar_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

redef class N_39dboolean_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

redef class N_39dfloat_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

redef class N_39ddouble_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

redef class N_39dbyte_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

redef class N_39dshort_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

redef class N_39dint_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

redef class N_39dlong_39d
	redef fun accept_visitor(v) do v.add_identifier self
end

#                                  #
#    C L A S S     H E A D E R     #
#                                  #

redef class Nclass_declaration
	redef fun accept_visitor(v)
	do
		v.declaration_type = "class_header"
		v.declaration_element = "id"
		super

		# Exit class declaration
		v.declaration_type = null
		v.declaration_element = null

		v.java_class.class_type = v.class_type
	end
end

# Extends declaration in the class header
redef class Nextends_declaration
	redef fun accept_visitor(v)
	do
		v.declaration_element = "extends"
		super
		v.declaration_element = null
	end
end

# Implements declaration in the class header
redef class Nimplements_declaration
	redef fun accept_visitor(v)
	do
		v.declaration_element = "implements"
		super
		v.declaration_element = null
	end
end

#                                            #
# P R O P E R T Y    D E C L A R A T I O N S #
#                                            #

# Method declaration
redef class Nmethod_declaration
	redef fun accept_visitor(v)
	do
		v.declaration_type = "method"
		super
		v.declaration_type = null

		if v.method_return_type.has_unresolved_types then v.method_return_type.resolve_types(v.generic_map)
		v.java_class.add_method(v.method_id, v.method_return_type, v.method_params)

		v.method_params.clear
		v.method_id = ""
		v.method_return_type = new JavaType(v.converter)
	end
end

# Constructor declaration
redef class Nconstructor_declaration
	redef fun accept_visitor(v)
	do
		v.declaration_type = "constructor"
		super
		v.declaration_type = null
	end
end

# Variable property declaration
redef class Nvariable_declaration
	redef fun accept_visitor(v)
	do
		v.declaration_type = "variable"
		super
		v.declaration_type = null

		v.java_class.attributes[v.variable_id] = v.variable_type

		v.variable_id = ""
		v.variable_type = new JavaType(v.converter)
	end
end

# Static property declaration
redef class Nstatic_declaration
	redef fun accept_visitor(v)
	do
		v.declaration_type = "static"
		super
		v.declaration_type = null
	end
end

# Identifier of a variable
redef class Nvariable_id
	redef fun accept_visitor(v)
	do
		v.declaration_element = "id"
		super
		v.declaration_element = null
	end
end

# Identifier of the method
redef class Nmethod_id
	redef fun accept_visitor(v)
	do
		v.declaration_element = "id"
		super
		v.declaration_element = null
	end
end

redef class Ntype
	redef fun accept_visitor(v)
	do
		if v.declaration_type == "variable" and v.declaration_element != "id" then
			v.declaration_element = "type"
		end

		if v.declaration_type == "method" and v.declaration_element == null then
			# Makes sure it is not the generic return type definition
			if not (v.method_return_type.identifier.is_empty and v.is_generic_param) then
				v.declaration_element = "return_type"
			end
		end

		super

		if v.declaration_element == "variable" then
			v.declaration_element = null
		end
	end
end

redef class Ngeneric_param
	redef fun accept_visitor(v)
	do
		# Ignore the weird generic return type declaration
		if v.declaration_type == "method" then
			if v.declaration_element == null then
				v.is_generic_param = true
			else
				v.is_generic_param = true
				v.gen_params_index = 0

				if v.declaration_element == "return_type" then
					v.method_return_type.generic_params = new Array[JavaType]
				else if v.declaration_element == "parameter_list" then
					v.method_params[v.param_index].generic_params = new Array[JavaType]
				end
			end
		else if v.declaration_type == "variable" then
			if v.declaration_element == "type" then
				v.is_generic_param = true
				v.gen_params_index = 0
				v.variable_type.generic_params = new Array[JavaType]
			end
		end

		super

		v.declaration_element = null
		v.is_generic_param = false
	end
end

redef class Ngeneric_identifier
	redef fun accept_visitor(v)
	do
		if v.declaration_type == "method" then
			if v.declaration_element == null then
				v.is_generic_id = true
			end
		end

		super

		v.is_generic_id = false

	end
end

redef class Nparameter_list
	redef fun accept_visitor(v)
	do
		v.declaration_element = "parameter_list"
		v.param_index = 0
		super
		v.declaration_element = null
		v.param_index = 0
	end
end

redef class Nparameter
	redef fun accept_visitor(v)
	do
		if v.declaration_type == "method" then
			if v.declaration_element == "parameter_list" then
				if v.is_generic_param then
					v.method_params[v.param_index].generic_params.add(new JavaType(v.converter))

					super

					v.gen_params_index += 1
				else
					v.method_params.add(new JavaType(v.converter))

					super

					v.param_index += 1
				end
			else if v.declaration_element == "return_type" and v.is_generic_param then

				v.method_return_type.generic_params.add(new JavaType(v.converter))

				super

				v.gen_params_index += 1

			# For generic return type definition
			else if v.declaration_element == null then
				super
			end
		else if v.declaration_type == "variable" then
			if v.declaration_element == "type" and v.is_generic_param then
				v.variable_type.generic_params.add(new JavaType(v.converter))

				super

				v.gen_params_index += 1
			end
		else
			super
		end
	end
end
