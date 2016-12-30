# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
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

# Native interface related services (used underneath the FFI)
#
# All nitni properties may not be visible to the user but they are
# shared between engines
module nitni_base

import parser
import modelbuilder # builder only for externcalls

redef class MMethod
	# Short name of this method in C (without the class name)
	fun short_cname: String do
		var nit_name = name

		if nit_name == "+" then return "_plus"
		if nit_name == "-" then return "_minus"
		if nit_name == "unary -" then return "_unary_minus"
		if nit_name == "unary +" then return "_unary_plus"
		if nit_name == "unary ~" then return "_unary_tilde"
		if nit_name == "*" then return "_star"
		if nit_name == "/" then return "_slash"
		if nit_name == "%" then return "_percent"
		if nit_name == "[]" then return "_index"
		if nit_name == "[]=" then return "_index_assign"
		if nit_name == "==" then return "_equal"
		if nit_name == "<" then return "_less"
		if nit_name == ">" then return "_greater"
		if nit_name == "<=" then return "_less_or_equal"
		if nit_name == ">=" then return "_greater_or_equal"
		if nit_name == "!=" then return "_not_equal"
		if nit_name == "<<" then return "_left"
		if nit_name == ">>" then return "_right"
		if nit_name == "<=>" then return "_starship"
		if nit_name == "|" then return "_pipe"
		if nit_name == "^" then return "_caret"
		if nit_name == "&" then return "_amp"
		if nit_name == "~" then return "_tilde"

		if nit_name.chars.last == '=' then return "{nit_name.substring(0, nit_name.length-1)}__assign"
		return nit_name
	end
end

redef class MMethodDef
	# Name of the function to callback this method from C,
	# also used in other functions names used for this method.
	fun cname: String do return "{mclassdef.mclass.name}_{mproperty.short_cname}"
end

redef class MType
	# Representation of this type in pure C on the FFI extern side
	#   Object -> Object
	#   Pointer -> void*
	fun cname: String do return cname_normal_class

	# Representation of this type in C for the internal of the system
	# Hides extern types.
	fun cname_blind: String do return "struct nitni_instance *"

	# Representation of this type in mangled C
	#   Object -> Object
	#   Pointer -> Pointer
	fun mangled_cname: String is abstract

	# Does this type have a primitive representation?
	#
	#   type Object is_primitive? false
	#   type Pointer is_primitive? true
	fun is_cprimitive: Bool do return false

	# Name of this type in C for normal classes (not extern and not primitive)
	protected fun cname_normal_class: String do return mangled_cname
end

redef class MClassType
	redef fun cname
	do
		var name = mclass.name
		if name == "Bool" then return "int"
		if name == "Char" then return "uint32_t"
		if name == "Float" then return "double"
		if name == "Int" then return "long"
		if name == "Byte" then return "unsigned char"
		if name == "Int8" then return "int8_t"
		if name == "Int16" then return "int16_t"
		if name == "UInt16" then return "uint16_t"
		if name == "Int32" then return "int32_t"
		if name == "UInt32" then return "uint32_t"
		if name == "CString" then return "char*"
		if mclass.kind == extern_kind then
			var ctype = mclass.ctype
			assert ctype != null
			return ctype
		end
		return cname_normal_class
	end

	redef fun cname_blind do
		var name = mclass.name
		if name == "Bool" then return "int"
		if name == "Char" then return "uint32_t"
		if name == "Float" then return "double"
		if name == "Int" then return "long"
		if name == "Byte" then return "unsigned char"
		if name == "Int8" then return "int8_t"
		if name == "Int16" then return "int16_t"
		if name == "UInt16" then return "uint16_t"
		if name == "Int32" then return "int32_t"
		if name == "UInt32" then return "uint32_t"
		if name == "CString" then return "char*"
		if mclass.kind == extern_kind then return "void*"
		return super
	end

	redef fun mangled_cname do return mclass.name

	redef fun is_cprimitive do return mclass.kind == extern_kind or
			(once ["Bool", "Char", "Float", "Int", "CString",
			       "Byte", "Int8", "Int16", "UInt16", "Int32", "UInt32"]).has(mclass.name)
end

redef class MNullableType
	redef fun mangled_cname do return "nullable_{mtype.mangled_cname}"
end

redef class MFormalType
	redef fun mangled_cname do return to_s
end

redef class MGenericType
	redef fun mangled_cname
	do
		var base = super

		var params = new Array[String]
		for arg in arguments do params.add(arg.mangled_cname)

		return "{base}_of_{params.join("_")}"
	end
end

redef class MClass
	fun ctype: nullable String
	do
		assert kind == extern_kind
		return "void*"
	end
end
