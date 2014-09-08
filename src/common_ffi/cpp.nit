# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Supports the use of the C++ language through the FFI
module cpp

import extern_classes
import c

redef class FFILanguageAssignationPhase
	var cpp_language: FFILanguage = new CPPLanguage(self)
end

redef class MModule
	private var cpp_file: nullable CPPCompilationUnit = null

	var cpp_compiler_options = "" is writable
end

class CPPLanguage
	super FFILanguage

	redef fun identify_language(n) do return n.is_cpp

	redef fun compile_module_block(block, ecc, mmodule)
	do
		if mmodule.cpp_file == null then mmodule.cpp_file = new CPPCompilationUnit

		if block.is_cpp_header then
			mmodule.cpp_file.header_custom.add(block.location.as_line_pragma)
			mmodule.cpp_file.header_custom.add(block.code)
		else if block.is_cpp_body then
			mmodule.cpp_file.body_custom.add( block.location.as_line_pragma )
			mmodule.cpp_file.body_custom.add( block.code )
		end
	end

	# We call C++ from C using 2 more files (_ffi.c and _ffi.cpp) and multiple generated functions:
	# 1. The standard C implementation function (___impl) expected by the common FFI
	# 2. The indirection function (___cpp_impl_mid) is a C function, called from C but implemented as `extern "C"` in C++
	# 3. The actual C++ implementation function (___cpp_impl)
	redef fun compile_extern_method(block, m, ecc, mmodule)
	do
		if mmodule.cpp_file == null then mmodule.cpp_file = new CPPCompilationUnit

		var mclass_type = m.parent.as(AClassdef).mclass.mclass_type
		var mproperty = m.mpropdef.mproperty

		# Signature of the indirection function implemented as `extern "C"` in C++
		var indirection_sig = mproperty.build_csignature(mclass_type, mmodule, "___cpp_impl_mid", long_signature, internal_call_context)

		## In C file (__ffi.c)
		
		# Declare the indirection function in C
		ecc.body_decl.add("{indirection_sig};\n")

		# Call the indirection function from C (___impl)
		var fc: CFunction = new ExternCFunction(m, mmodule)
		fc.exprs.add(mproperty.build_ccall(mclass_type, mmodule, "___cpp_impl_mid", long_signature, cpp_call_context, null))
		fc.exprs.add("\n")
		ecc.add_exported_function( fc )

		## In C++ file (__ffi.cpp)

		# Declare the indirection function in C++
		mmodule.cpp_file.header_decl.add("extern \"C\" \{\n")
		mmodule.cpp_file.header_decl.add("{indirection_sig};\n")
		mmodule.cpp_file.header_decl.add("\}\n")

		# Implement the indirection function as extern in C++
		# Will convert C arguments to C++ and call the C++ implementation function.
		fc = new CFunction(indirection_sig)
		if not mproperty.is_init then
			var param_name = "recv"
			var type_name = to_cpp_call_context.name_mtype(mclass_type)
			if mclass_type.mclass.ftype isa ForeignCppType then
				fc.exprs.add("{type_name} {param_name}_for_cpp = static_cast<{type_name}>({param_name});\n")
			else
				fc.exprs.add("{type_name} {param_name}_for_cpp = {param_name};\n")
			end
		end
		for param in m.mpropdef.msignature.mparameters do
			var param_name = param.name
			var type_name = to_cpp_call_context.name_mtype(param.mtype)
			if mclass_type.mclass.ftype isa ForeignCppType then
				fc.exprs.add("{type_name} {param_name}_for_cpp = static_cast<{type_name}>({param_name});\n")
			else
				fc.exprs.add("{type_name} {param_name}_for_cpp = {param_name};\n")
			end
		end
		fc.exprs.add(mproperty.build_ccall(mclass_type, mmodule, "___cpp_impl", long_signature, cpp_call_context, "_for_cpp"))
		fc.exprs.add("\n")
		mmodule.cpp_file.add_local_function(fc)

		# Custom C++, the body of the Nit C++ method is copied to its own C++ function
		var cpp_signature = mproperty.build_csignature(mclass_type, mmodule, "___cpp_impl", long_signature, cpp_call_context)
		fc = new CFunction(cpp_signature)
		fc.decls.add( block.location.as_line_pragma )
		fc.exprs.add( block.code )
		mmodule.cpp_file.add_local_function( fc )
	end

	redef fun compile_extern_class(block, m, ecc, mmodule) do end

	redef fun get_ftype(block, m) do return new ForeignCppType(block.code)

	redef fun compile_to_files(mmodule, compdir)
	do
		var cpp_file = mmodule.cpp_file
		assert cpp_file != null

		# write .cpp and .hpp file
		cpp_file.header_custom.add("extern \"C\" \{\n")
		cpp_file.header_custom.add("#include \"{mmodule.name}._ffi.h\"\n")
		cpp_file.header_custom.add("\}\n")

		var file = cpp_file.write_to_files(mmodule, compdir)

		# add complation to makefile
		mmodule.ffi_files.add(file)

		# add linked option to support C++
		mmodule.c_linker_options = "{mmodule.c_linker_options} -lstdc++"
	end

	redef fun compile_callback(callback, mmodule, mainmodule, ecc)
	do
		callback.compile_callback_to_cpp(mmodule, mainmodule)
	end
end

redef class AExternCodeBlock
	fun is_cpp : Bool do return language_name != null and
		(language_name_lowered == "c++" or language_name_lowered.has_prefix("c++ "))

	fun is_cpp_body : Bool do return language_name != null and
		(language_name_lowered == "c++" or language_name_lowered == "c++ body")

	fun is_cpp_header : Bool do return language_name != null and
		(language_name_lowered == "c++ header")
end

class CPPCompilationUnit
	super CCompilationUnit

	fun write_to_files(mmodule: MModule, compdir: String): ExternCppFile
	do
		var base_name = "{mmodule.name}._ffi"

		var h_file = "{base_name}.hpp"
		var guard = "{mmodule.cname.to_s.to_upper}_NIT_HPP"

		write_header_to_file(mmodule, "{compdir}/{h_file}", new Array[String], guard)

		var c_file = "{base_name}.cpp"
		write_body_to_file(mmodule, "{compdir}/{c_file}", ["<string>", "<iostream>", "\"{h_file}\""])

		files.add("{compdir}/{c_file}")

		return new ExternCppFile("{compdir}/{c_file}", mmodule)
	end
end

class ExternCppFile
	super ExternFile

	var mmodule: MModule
	init(path: String, mmodule: MModule)
	do
		super
		self.mmodule = mmodule
	end

	redef fun makefile_rule_name do return "{filename.basename("")}.o"
	redef fun makefile_rule_content do return "$(CXX) $(CFLAGS) {mmodule.cpp_compiler_options} -c {filename.basename("")} -o {filename.basename("")}.o"
	redef fun compiles_to_o_file do return true
end

class ForeignCppType
	super ForeignType

	var cpp_type: String

	init (cpp_type: String)
	do
		self.cpp_type = cpp_type
	end
end

redef class NitniCallback
	fun compile_callback_to_cpp(mmodule: MModule, mainmodule: MModule) do end
end

redef class Object
	private fun cpp_call_context: CppCallContext do return once new CppCallContext
	private fun to_cpp_call_context: ToCppCallContext do return once new ToCppCallContext
	private fun from_cpp_call_context: FromCppCallContext do return once new FromCppCallContext
end

redef class MExplicitCall
	redef fun compile_callback_to_cpp(mmodule, mainmodule)
	do
		var mproperty = mproperty
		assert mproperty isa MMethod

		var cpp_signature = mproperty.build_csignature(recv_mtype, mainmodule, null, short_signature, from_cpp_call_context)
		var ccall = mproperty.build_ccall(recv_mtype, mainmodule, null, long_signature, from_cpp_call_context, null)
		var fc = new CFunction(cpp_signature)
		fc.exprs.add(ccall)
		mmodule.cpp_file.add_local_function( fc )
	end
end

private class CppCallContext
	super CallContext

	redef fun name_mtype(mtype)
	do
		if mtype isa MClassType then
			var ftype = mtype.mclass.ftype
			if ftype isa ForeignCppType then
				return ftype.cpp_type
			end
		end

		return mtype.cname
	end
end

class ToCppCallContext
	super CppCallContext

	redef fun cast_to(mtype, name)
	do
		if mtype isa MClassType and mtype.mclass.ftype isa ForeignCppType then
			return "(void*)({name})"
		else return name
	end
end

private class FromCppCallContext
	super CppCallContext

	redef fun cast_from(mtype, name)
	do
		if mtype isa MClassType and mtype.mclass.ftype isa ForeignCppType then
			return "static_cast<{name_mtype(mtype)}>({name})"
		else return name
	end
end
