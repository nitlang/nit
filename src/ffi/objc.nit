# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# FFI support for Objective-C
#
# Compiles all Objective-C code with clang. The user module must define
# the framework used.
#
# This module is heavily based on the C++ FFI.
module objc

import extern_classes
import c

redef class FFILanguageAssignationPhase
	# The Objective-C language visitor
	var objc_language: FFILanguage = new ObjCLanguage(self)
end

redef class MModule
	private var objc_file: nullable ObjCCompilationUnit = null

	private var has_public_objc_header = false

	# Imported modules with public Objective-C code blocks
	var objc_imported_headers: HashSet[MModule] is lazy do
		var dep = new HashSet[MModule]

		# gather from importation
		for m in in_importation.direct_greaters do
			# does the super module has inherited dependencies?
			var import_dep = m.objc_imported_headers
			if not import_dep.is_empty then
				dep.add_all import_dep
			end

			# does the super module itself has a public header?
			if m.has_public_objc_header then dep.add(m)
		end

		return dep
	end
end

# The Objective-C langugage visitor
class ObjCLanguage
	super FFILanguage

	redef fun identify_language(n) do return n.is_objc

	redef fun compile_module_block(block, ecc, mmodule)
	do
		if mmodule.objc_file == null then mmodule.objc_file = new ObjCCompilationUnit

		if block.is_objc_header then
			mmodule.objc_file.header_custom.add block.location.as_line_pragma
			mmodule.objc_file.header_custom.add block.code

			mmodule.has_public_objc_header = true
		else if block.is_objc_body then
			mmodule.objc_file.body_custom.add block.location.as_line_pragma
			mmodule.objc_file.body_custom.add block.code
		end
	end

	redef fun compile_extern_method(block, m, ecc, mmodule)
	do
		if mmodule.objc_file == null then mmodule.objc_file = new ObjCCompilationUnit

		var mpropdef = m.mpropdef
		var recv_mtype = mpropdef.mclassdef.bound_mtype
		var csignature = mpropdef.mproperty.build_csignature(
			recv_mtype, mmodule, "___impl", long_signature, from_objc_call_context)

		var fc = new CFunction(csignature)
		fc.decls.add block.location.as_line_pragma
		fc.exprs.add block.code
		mmodule.objc_file.add_exported_function fc
	end

	redef fun compile_extern_class(block, m, ecc, mmodule) do end

	redef fun get_ftype(block, m) do return new ForeignObjCType(block.code)

	redef fun compile_to_files(mmodule, compdir)
	do
		var objc_file = mmodule.objc_file
		assert objc_file != null

		# Import public Objective-C header of imported modules
		var dep = mmodule.objc_imported_headers
		for mod in dep do
			objc_file.header_custom.add "#include \"{mod.c_name}._ffi_m.h\"\n"
		end

		# write .m and _m.h file
		mmodule.objc_file.header_c_types.add """
	#include "{{{mmodule.c_name}}}._ffi.h"
"""

		var file = objc_file.write_to_files(mmodule, compdir)

		# add compilation to makefile
		mmodule.ffi_files.add file
	end

	redef fun compile_callback(callback, mmodule, mainmodule, ecc)
	do
		callback.compile_callback_to_objc(mmodule, mainmodule)
	end
end

redef class AExternCodeBlock
	# Is this Objective-C code?
	fun is_objc : Bool do return language_name != null and
		(language_name_lowered == "objc" or language_name_lowered.has_prefix("objc "))

	# Is this Objective-C code for the body file?
	fun is_objc_body : Bool do return language_name != null and
		(language_name_lowered == "objc" or language_name_lowered == "objc body")

	# Is this Objective-C code for the header file?
	fun is_objc_header : Bool do return language_name != null and
		(language_name_lowered == "objc header")
end

private class ObjCCompilationUnit
	super CCompilationUnit

	# Write this compilation unit to Objective-C source files
	fun write_to_files(mmodule: MModule, compdir: String): ExternObjCFile
	do
		var base_name = "{mmodule.c_name}._ffi"

		var h_file = "{base_name}_m.h"
		var guard = "{mmodule.c_name.to_upper}_NIT_OBJC_H"
		write_header_to_file(mmodule, compdir/h_file, new Array[String], guard)

		var c_file = "{base_name}.m"
		write_body_to_file(mmodule, compdir/c_file, ["\"{h_file}\""])

		files.add compdir/c_file

		mmodule.ldflags.add_one("", "-lobjc")

		return new ExternObjCFile(c_file, mmodule)
	end
end

# A Objective-C file
class ExternObjCFile
	super ExternFile

	# Associated `MModule`
	var mmodule: MModule

	redef fun makefile_rule_name do return "{filename.basename(".m")}_m.o"
	redef fun makefile_rule_content do
		return "clang $(CFLAGS) -c {filename} -o {makefile_rule_name}"
	end
	redef fun compiles_to_o_file do return true
end

# An Objective-C type
class ForeignObjCType
	super ForeignType

	# Type name
	var objc_type: String
end

redef class NitniCallback
	# Compile this callback to be callable from Objective-C
	fun compile_callback_to_objc(mmodule: MModule, mainmodule: MModule) do end
end

redef class MExplicitCall
	redef fun compile_callback_to_objc(mmodule, mainmodule)
	do
		var mproperty = mproperty
		assert mproperty isa MMethod

		var objc_signature = mproperty.build_csignature(recv_mtype, mainmodule, null, short_signature, from_objc_call_context)
		var ccall = mproperty.build_ccall(recv_mtype, mainmodule, null, long_signature, from_objc_call_context, null)
		var fc = new CFunction(objc_signature)
		fc.exprs.add ccall
		mmodule.objc_file.add_local_function fc
	end
end

# Calls withing Objective-C code
private fun objc_call_context: ObjCCallContext do return once new ObjCCallContext

# Calls from C to Objective-C
private fun to_objc_call_context: ToObjCCallContext do return once new ToObjCCallContext

# Calls from Objective-C to C
private fun from_objc_call_context: FromObjCCallContext do return once new FromObjCCallContext

private class ObjCCallContext
	super CallContext

	redef fun name_mtype(mtype)
	do
		if mtype isa MClassType then
			var ftype = mtype.mclass.ftype
			if ftype isa ForeignObjCType then
				return ftype.objc_type
			end
		end

		return mtype.cname
	end
end

private class ToObjCCallContext
	super ObjCCallContext

	redef fun cast_to(mtype, name)
	do
		if mtype isa MClassType and mtype.mclass.ftype isa ForeignObjCType then
			return "(void*)({name})"
		else return name
	end
end

private class FromObjCCallContext
	super ObjCCallContext

	redef fun cast_to(mtype, name)
	do
		if mtype isa MClassType and mtype.mclass.ftype isa ForeignObjCType then
			return "(__bridge void*)({name})"
		else return name
	end

	redef fun cast_from(mtype, name)
	do
		if mtype isa MClassType and mtype.mclass.ftype isa ForeignObjCType then
			return "(__bridge {name_mtype(mtype)})({name})"
		else return name
	end
end
