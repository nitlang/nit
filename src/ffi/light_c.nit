# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Support for nesting C code within a Nit program using its FFI
module light_c

import modelize::modelize_property

import light_ffi_base

redef class FFILanguageAssignationPhase
	var c_language: FFILanguage = new CLanguage(self)
end

class CLanguage
	super FFILanguage

	redef fun identify_language(n) do return n.is_c

	redef fun compile_module_block(block, ecc, mmodule)
	do
		if block.is_c_header then
			ecc.header_custom.add block.location.as_line_pragma
			ecc.header_custom.add "\n"
			ecc.header_custom.add block.code
		else if block.is_c_body then
			ecc.body_impl.add block.location.as_line_pragma
			ecc.body_impl.add "\n"
			ecc.body_impl.add block.code
		end
	end

	redef fun compile_extern_method(block, m, ecc, mmodule)
	do
		var fc = new ExternCFunction(m, mmodule)
		fc.decls.add( block.location.as_line_pragma )
		fc.exprs.add( block.code )
		ecc.body_impl.add fc.to_writer
	end

	redef fun compile_extern_class(block, m, ecc, mmodule) do end

	redef fun get_ftype(block, m) do return new ForeignCType(block.code)
end

redef class AExternCodeBlock
	fun is_c: Bool do return language_name == null or
		language_name_lowered == "c" or language_name_lowered.has_prefix( "c " )

	fun is_c_body: Bool do return language_name == null or
		language_name_lowered == "c" or language_name_lowered ==  "c body"

	fun is_c_header: Bool do return language_name_lowered == "c header"
end

redef class Location
	fun as_line_pragma: String do return "#line {line_start-1} \"{file.filename}\"\n"
end

redef class MModule
	# FIXME make nullable the key of `cflags`, `ldflags` and `cppflags` when
	# supported by the bootstrap

	# Custom options for the C compiler (CFLAGS)
	var cflags = new MultiHashMap[String, String]

	# Custom options for the C linker (LDFLAGS)
	var ldflags = new MultiHashMap[String, String]

	# Additional libraries needed for the compilation
	# Will be used with pkg-config
	var pkgconfigs = new Array[String]
end

class ForeignCType
	super ForeignType

	redef var ctype: String
end

# Context when calling user C code from generated code
fun to_c_call_context: ToCCallContext do return once new ToCCallContext

# Context when calling generated code from user C code
fun from_c_call_context: FromCCallContext do return once new FromCCallContext

# Context when calling user C code from generated code
class ToCCallContext
	super CallContext

	# TODO: private init because singleton instance (see `to_c_call_context`)

	redef fun name_mtype(mtype)
	do
		if mtype isa MClassType and mtype.mclass.kind == extern_kind then return "void *"
		return mtype.cname
	end
end

# Context when calling generated code from user C code
class FromCCallContext
	super CallContext

	# TODO: private init because singleton instance (see `from_c_call_context`)

	redef fun name_mtype(mtype) do return mtype.cname
end

class ExternCFunction
	super CFunction

	var method: AMethPropdef

	init (method: AMethPropdef, mmodule: MModule)
	do
		self.method = method

		var recv_mtype = method.mpropdef.mclassdef.bound_mtype
		var csignature = method.mpropdef.mproperty.build_csignature(recv_mtype, mmodule, "___impl", long_signature, from_c_call_context)

		super( csignature )
	end
end
