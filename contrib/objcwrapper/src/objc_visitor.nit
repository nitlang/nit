# This file is part of NIT ( https://nitlanguage.org ).
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

# AST visitor
module objc_visitor

import objc_model
import objc_parser

# AST visitor building `model` from the parsed class headers
class ObjcVisitor
	super Visitor

	# `ObjcModel` in construction
	var model = new ObjcModel

	# `ObjcClass` in construction, if any
	private var objc_class: nullable ObjcClass = null

	redef fun visit(n) do n.accept_objc(self)
end

redef class Node
	private fun accept_objc(v: ObjcVisitor) do visit_children(v)
end

# ---
# Main nodes

# Class declaration
redef class Nlines_interface
	redef fun accept_objc(v)
	do
		var interface_block = n_interface_block
		if interface_block == null then return

		# If reopening a class, continue with the existing one
		var c = null
		for objc_class in v.model.classes do
			if objc_class.name == n_class.text then
				c = objc_class
			end
		end

		# New class
		if c == null then
			c = new ObjcClass(n_class.text)
			v.model.classes.add c
		end
		v.objc_class = c

		# Visit superclass declarations
		var inheritance_block = n_inheritance
		if inheritance_block != null then v.enter_visit(inheritance_block)

		# Visit main body
		v.enter_visit(interface_block)
	end
end

# Method or function declaration
redef class Nsignature_block_signature
	redef fun accept_objc(v)
	do
		var c = v.objc_class
		assert c != null

		var method = new ObjcMethod(c)
		method.return_type = n_signature_return_type.to_type
		method.is_class_property = n_scope.is_class_property

		for n_param in n_parameter.children do
			var param = n_param.to_param
			if param == null then

				# Unsupported parameter format
				method.is_commented = true

				# Use a placeholder for easier debugging
				param = new ObjcParam
				param.name = "UNKNOWN"
				param.return_type = "UNKNOWN"
				param.variable_name = "UNKNOWN"
			end

			method.params.add param
		end

		c.methods.add method
	end
end

# Class variable/attribute declaration (inside alternative node)
redef class Nproperty_property
	redef fun accept_objc(v)
	do
		var c = v.objc_class
		assert c != null

		var attr = new ObjcAttribute(c)
		attr.return_type = n_type.to_type
		attr.name = n_left.collect_text

		c.attributes.add attr
	end
end

# Class variable/attribute declaration (outside with @property)
redef class Nproperty_declaration_property
	redef fun accept_objc(v)
	do
		# TODO property attribute readonly, copy, etc.
		super
	end
end

# ---
# Support nodes

redef class NProd
	# Append all tokens under this node in a `String`
	private fun collect_text: String
	do
		var buf = new FlatBuffer
		for node in depth do if node isa NToken then buf.append node.text
		return buf.to_s
	end
end

redef class Nlines
	# Do not visit other lines, they are only to be eaten
	redef fun accept_objc(v) do end
end

redef class Nscope
	# Does this mark a class property (+)? Otherwise it's an instance property (-).
	private fun is_class_property: Bool do return false
end

redef class Nscope_class
	redef fun is_class_property do return true
end

redef class Nsignature_return_type
	# Get type from this node TODO return an ObjcType
	private fun to_type: String do return collect_text
end

redef class Nsignature_return_type_return
	redef fun to_type do return n_type.to_type
end

redef class Nparameter
	# Return null if type is not yet unsupported
	private fun to_param: nullable ObjcParam do return null
end

# Parameters with both a public and an internal name
redef class Nparameter_named
	redef fun to_param
	do
		var param = new ObjcParam
		param.variable_name = n_right.collect_text
		param.name = n_left.collect_text

		var n_type = n_parameter_type_in_par
		param.return_type = if n_type != null then
			n_type.n_parameter_type.to_type
		else  "NSObject"

		return param
	end
end

# Usually the name of a method without parameters
redef class Nparameter_single
	redef fun to_param
	do
		var param = new ObjcParam
		param.name = n_term.collect_text
		param.is_single = true
		return param
	end
end

redef class Nparameter_type
	# Get type from this node TODO return an ObjcType
	private fun to_type: String
	do
		# FIXME taking the first token skips pointers
		for child in children do
			if child isa Ntype then
				return child.to_type
			end
		end

		return collect_text
	end
end

redef class Ntype
	# Get type from this node TODO return an ObjcType
	private fun to_type: String do return collect_text
end
