module objc_visitor

import objc_model
import objc_parser

class Interpretor
	super Visitor

	var is_variable = false
	var is_method = false
	var is_parameter_name = false
	var class_objc: nullable ObjcClass = null
	var method_objc: ObjcMethod is noinit
	var attribute_objc: ObjcAttribute is noinit
	var param: Param is noinit
	var model = new ObjcModel

	redef fun visit(n) do n.accept_objc(self)
end

redef class Node
	fun accept_objc(v: Interpretor) do visit_children(v)
end

redef class Nlines
	redef fun accept_objc(v) do
	end
end

redef class Nlines_interface
	redef fun accept_objc(v) do
		var interface_block = n_interface_block
		var inheritance_block = n_inheritance
		v.class_objc = null
		if interface_block != null then
			for class_objc in v.model.classes do
				if class_objc.name == n_class.text then
					v.class_objc = class_objc
				end
			end
			if v.class_objc == null then
				v.class_objc = new ObjcClass(n_class.text)
				v.model.classes.add(v.class_objc)
			end
			if inheritance_block != null then v.enter_visit(inheritance_block)
			v.enter_visit(interface_block)
		end
	end
end

redef class Ninheritance_add
	redef fun accept_objc(v) do
		var additional = n_additional
		v.enter_visit(n_classe)
		if additional != null then v.enter_visit(additional)
	end
end

redef class Nclasse_class
	redef fun accept_objc(v) do
		v.class_objc.super_names.add(n_class.text)
	end
end

redef class Nadditional_add
	redef fun accept_objc(v) do
		v.enter_visit(n_classe)
	end
end

redef class Ninterface_block_instance
	redef fun accept_objc(v) do
		v.enter_visit(n_instance_declaration)
	end
end

redef class Ninstance_declaration_signature
	redef fun accept_objc(v) do
		v.enter_visit(n_signature_block)
	end
end

redef class Ninstance_declaration_property
	redef fun accept_objc(v) do
		v.enter_visit(n_property_declaration)
	end
end

redef class Nproperty_declaration_property
	redef fun accept_objc(v) do
		v.enter_visit(n_property)
	end
end

redef class Nsignature_block_signature
	redef fun accept_objc(v) do
		if n_signature.children.to_s.has("signature_named") or n_signature.children.to_s.has("signature_single") then
			v.method_objc = new ObjcMethod

			v.enter_visit(n_scope)
			v.is_method = true
			var signature_return_type = n_signature_return_type
			if signature_return_type != null then v.enter_visit(signature_return_type)
			v.is_method = false
			v.enter_visit(n_signature)

			v.class_objc.methods.add(v.method_objc)
		end
	end
end

redef class Nscope_instance
	redef fun accept_objc(v) do
		v.method_objc.scope = '-'
	end
end

redef class Nscope_class
	redef fun accept_objc(v) do
		v.method_objc.scope = '+'
	end
end

redef class Nsignature_return_type_return
	redef fun accept_objc(v) do
		v.enter_visit(n_type)
	end
end

redef class Nsignature_named
	redef fun accept_objc(v) do
		v.param = new Param

		v.enter_visit(n_left)
		v.is_parameter_name = true
		v.enter_visit(n_right)
		v.is_parameter_name = false
		v.enter_visit(n_signature_type)

		v.method_objc.params.add(v.param)
	end
end

redef class Nsignature_single
	redef fun accept_objc(v) do
		v.param = new Param
		v.param.is_single = true
		v.enter_visit(n_term)
		v.method_objc.params.add(v.param)
	end
end

redef class Nsignature_type_anonymous
	redef fun accept_objc(v) do
		v.enter_visit(n_type)
		v.method_objc.is_commented = true
	end
end

redef class Nsignature_type_table
	redef fun accept_objc(v) do
		v.enter_visit(n_type)
		v.param.is_table = true
	end
end

redef class Nsignature_type_pointer
	redef fun accept_objc(v) do
		v.enter_visit(n_type)
		v.param.is_pointer = true
	end
end

redef class Nsignature_type_unsigned
	redef fun accept_objc(v) do
		v.method_objc.is_commented = true
		v.param.is_pointer = true
	end
end

redef class Nsignature_type_protocol
	redef fun accept_objc(v) do
		v.enter_visit(n_type)
		v.method_objc.is_commented = true
	end
end

redef class Nsignature_type_normal
	redef fun accept_objc(v) do
		v.enter_visit(n_type)
	end
end

redef class Nterm_private
	redef fun accept_objc(v) do
		if v.is_parameter_name then
			v.param.variable_name = n_private.text
		else if v.is_variable then
			v.attribute_objc.name = n_private.text
		else
			v.param.name = n_private.text
		end
	end
end

redef class Nterm_class
	redef fun accept_objc(v) do
		if v.is_parameter_name then
			v.param.variable_name = n_class.text
		else if v.is_variable then
			v.attribute_objc.name = n_class.text
		else
			v.param.name = n_class.text
		end
	end
end

redef class Nterm_var
	redef fun accept_objc(v) do
		if v.is_parameter_name then
			v.param.variable_name = n_id.text
		else if v.is_variable then
			v.attribute_objc.name = n_id.text
		else
			v.param.name = n_id.text
		end
	end
end

redef class Nproperty_property
	redef fun accept_objc(v) do
		var protocol = n_protocols
		if protocol == null then
			v.is_variable = true
			v.attribute_objc = new ObjcAttribute
			v.enter_visit(n_left)
			v.enter_visit(n_type)
			v.class_objc.attributes.add(v.attribute_objc)
			v.is_variable = false
		end
	end
end

redef class Ntype_type
	redef fun accept_objc(v) do
		v.enter_visit(n_data_type)
	end
end

redef class Ndata_type_more
	redef fun accept_objc(v) do
		v.enter_visit(n_more_type)
	end
end

redef class Ndata_type_otype
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = n_class.text
		else if v.is_method then
			v.method_objc.return_type = n_class.text
		else
			v.param.return_type = n_class.text
		end
	end
end

redef class Nmore_type_stype
	redef fun accept_objc(v) do
		v.enter_visit(n_specific_type)
	end
end

redef class Nmore_type_ptype
	redef fun accept_objc(v) do
		v.enter_visit(n_primitive_type)
	end
end

redef class Nspecific_type_i
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "id"
		else if v.is_method then
			v.method_objc.return_type = "id"
		else
			v.param.return_type = "id"
		end
	end
end

redef class Nspecific_type_b
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "Bool"
		else if v.is_method then
			v.method_objc.return_type = "Bool"
		else
			v.param.return_type = "Bool"
		end
	end
end

redef class Nspecific_type_val
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "va_list"
		else if v.is_method then
			v.method_objc.return_type = "va_list"
		else
			v.param.return_type = "va_list"
		end
	end
end

redef class Nspecific_type_v
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "void"
		else if v.is_method then
			v.method_objc.return_type = "void"
		else
			v.param.return_type = "void"
		end
	end
end

redef class Nprimitive_type_ui8
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "uint8_t"
		else if v.is_method then
			v.method_objc.return_type = "uint8_t"
		else
			v.param.return_type = "uint8_t"
		end
	end
end

redef class Nprimitive_type_ui16
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "uint16_t"
		else if v.is_method then
			v.method_objc.return_type = "uint16_t"
		else
			v.param.return_type = "uint16_t"
		end
	end
end

redef class Nprimitive_type_ui32
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "uint32_t"
		else if v.is_method then
			v.method_objc.return_type = "uint32_t"
		else
			v.param.return_type = "uint32_t"
		end
	end
end

redef class Nprimitive_type_ui64
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "uint64_t"
		else if v.is_method then
			v.method_objc.return_type = "uint64_t"
		else
			v.param.return_type = "uint64_t"
		end
	end
end

redef class Nprimitive_type_i8
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "int8_t"
		else if v.is_method then
			v.method_objc.return_type = "int8_t"
		else
			v.param.return_type = "int8_t"
		end
	end
end

redef class Nprimitive_type_i16
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "int16_t"
		else if v.is_method then
			v.method_objc.return_type = "int16_t"
		else
			v.param.return_type = "int16_t"
		end
	end
end

redef class Nprimitive_type_i32
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "int32_t"
		else if v.is_method then
			v.method_objc.return_type = "int32_t"
		else
			v.param.return_type = "int32_t"
		end
	end
end

redef class Nprimitive_type_i64
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "int64_t"
		else if v.is_method then
			v.method_objc.return_type = "int64_t"
		else
			v.param.return_type = "int64_t"
		end
	end
end

redef class Nprimitive_type_uc
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "unichar"
		else if v.is_method then
			v.method_objc.return_type = "unichar"
		else
			v.param.return_type = "unichar"
		end
	end
end

redef class Nprimitive_type_c
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "char"
		else if v.is_method then
			v.method_objc.return_type = "char"
		else
			v.param.return_type = "char"
		end
	end
end

redef class Nprimitive_type_s
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "short"
		else if v.is_method then
			v.method_objc.return_type = "short"
		else
			v.param.return_type = "short"
		end
	end
end

redef class Nprimitive_type_si
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "short int"
		else if v.is_method then
			v.method_objc.return_type = "short int"
		else
			v.param.return_type = "short int"
		end
	end
end

redef class Nprimitive_type_i
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "int"
		else if v.is_method then
			v.method_objc.return_type = "int"
		else
			v.param.return_type = "int"
		end
	end
end

redef class Nprimitive_type_l
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "long"
		else if v.is_method then
			v.method_objc.return_type = "long"
		else
			v.param.return_type = "long"
		end
	end
end

redef class Nprimitive_type_li
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "long int"
		else if v.is_method then
			v.method_objc.return_type = "long int"
		else
			v.param.return_type = "long int"
		end
	end
end

redef class Nprimitive_type_ll
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "long long"
		else if v.is_method then
			v.method_objc.return_type = "long long"
		else
			v.param.return_type = "long long"
		end
	end
end

redef class Nprimitive_type_lli
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "long long int"
		else if v.is_method then
			v.method_objc.return_type = "long long int"
		else
			v.param.return_type = "long long int"
		end
	end
end

redef class Nprimitive_type_f
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "float"
		else if v.is_method then
			v.method_objc.return_type = "float"
		else
			v.param.return_type = "float"
		end
	end
end

redef class Nprimitive_type_d
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "double"
		else if v.is_method then
			v.method_objc.return_type = "double"
		else
			v.param.return_type = "double"
		end
	end
end

redef class Nprimitive_type_ld
	redef fun accept_objc(v) do
		if v.is_variable then
			v.attribute_objc.return_type = "long double"
		else if v.is_method then
			v.method_objc.return_type = "long double"
		else
			v.param.return_type = "long double"
		end
	end
end
