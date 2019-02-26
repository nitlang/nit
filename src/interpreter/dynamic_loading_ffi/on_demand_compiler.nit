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

# Compiles extern code within a module to a static library, as needed
module on_demand_compiler

import modelbuilder
import c_tools
import nitni
import ffi
import naive_interpreter
import pkgconfig

redef class ToolContext

	# --compile-dir
	var opt_compile_dir = new OptionString("Directory used to generate temporary files", "--compile-dir")

	init do option_context.add_option opt_compile_dir
end

redef class AMethPropdef
	# Does this method definition use the FFI and is it supported by the interpreter?
	#
	# * Must use the nested foreign code block of the FFI.
	# * Must not have callbacks.
	# * Must be implemented in C.
	# * Must not have a parameter or return typed with a Nit standard class.
	fun supported_by_dynamic_ffi: Bool
	do
		# If the user specfied `is light_ffi`, it must be supported
		var nats = get_annotations("light_ffi")
		if nats.not_empty then return true

		var n_extern_code_block = n_extern_code_block
		if not (n_extern_calls == null and n_extern_code_block != null and
		        n_extern_code_block.is_c) then return false

		for mparam in mpropdef.msignature.mparameters do
			if not mparam.mtype.is_cprimitive then
				return false
			end
		end

		var return_mtype = mpropdef.msignature.return_mtype
		if return_mtype != null and not return_mtype.is_cprimitive then
			return false
		end

		return true
	end
end

redef class NaiveInterpreter
	redef fun start(mainmodule)
	do
		super

		# Delete temporary files
		var compile_dir = compile_dir
		if compile_dir.file_exists then compile_dir.rmdir
	end

	# Where to store generated C and extracted code
	private var compile_dir: String is lazy do
		# Prioritize the user supplied directory
		var opt = modelbuilder.toolcontext.opt_compile_dir.value
		if opt != null then return opt
		return "/tmp/niti_ffi_{process_id}"
	end

	# Identifier for this process, unique between running interpreters
	private fun process_id: Int `{ return getpid(); `}

	# Path of the compiled foreign code library
	#
	# TODO change the ".so" extension per platform.
	fun foreign_code_lib_path(mmodule: MModule): String
	do
		return compile_dir / mmodule.c_name + ".so"
	end

	# External compiler used to generate the foreign code library
	private var c_compiler = "cc"
end

redef class AModule

	# Compile user FFI code and a standardized API into a `.so` file
	#
	# Returns `true` on success.
	fun compile_foreign_lib(v: NaiveInterpreter): Bool
	do
		var mmodule = mmodule
		assert mmodule != null

		var compile_dir = v.compile_dir
		var foreign_code_lib_path = v.foreign_code_lib_path(mmodule)

		if not compile_dir.file_exists then compile_dir.mkdir(0o700)

		# Compile the common FFI part
		ensure_compile_ffi_wrapper
		for mclassdef in mmodule.mclassdefs do for mpropdef in mclassdef.mpropdefs do
			var anode = v.modelbuilder.mpropdef2node(mpropdef)
			if mpropdef isa MMethodDef and anode isa AMethPropdef and anode.supported_by_dynamic_ffi then
				anode.compile_ffi_method(mmodule)
			end
		end
		mmodule.finalize_ffi_wrapper(compile_dir, mmodule)

		# Compile the standard API and its implementation for the .so file
		var ccu = compile_foreign_lib_api(compile_dir)

		var srcs = [for file in ccu.files do new ExternCFile(file, ""): ExternFile]
		srcs.add_all mmodule.ffi_files

		# Compiler options specific to this module
		var ldflags_array = mmodule.ldflags[""]
		if ldflags_array.has("-lrt") and system("sh -c 'uname -s 2>/dev/null || echo not' | grep Darwin >/dev/null") == 0 then
			# Remove -lrt on OS X
			ldflags_array.remove "-lrt"
		end
		var ldflags = ldflags_array.join(" ")

		# Protect pkg-config
		var pkgconfigs = mmodule.pkgconfigs
		var pkg_cflags = ""
		if not pkgconfigs.is_empty then

			# Check if the pkgconfig packages are available
			v.modelbuilder.toolcontext.check_pkgconfig_packages pkgconfigs
			if not v.modelbuilder.toolcontext.check_errors then return false

			pkg_cflags = "`pkg-config --cflags {pkgconfigs.join(" ")}`"
			ldflags += " `pkg-config --libs {pkgconfigs.join(" ")}`"
		end

		# Compile each source file to an object file (or equivalent)
		var object_files = new Array[String]
		for f in srcs do
			f.compile(v, mmodule, object_files, pkg_cflags)
		end

		# Link everything in a shared library
		var cmd = "{v.c_compiler} -Wall -shared -o {foreign_code_lib_path} {object_files.join(" ")} {ldflags}"
		if system(cmd) != 0 then
			v.fatal "FFI Error: Failed to link native code using `{cmd}`"
			return false
		end

		return true
	end

	# Compile the standard API of the `.so` file
	#
	# * The shared structure `nit_call_arg`.
	# * Standardized implementation functions entrypoints that relay calls
	#   to the FFI implementation functions.
	private fun compile_foreign_lib_api(compdir: String): CCompilationUnit
	do
		var mmodule = mmodule
		assert mmodule != null

		# ready extern code compiler
		var ecc = new CCompilationUnit

		ecc.body_decl.add """

#include <string.h>
#include <stdio.h>
#include <inttypes.h>

// C structure behind `CallArg` from the interpreter
typedef union nit_call_arg {
	long value_Int;
	int value_Bool;
	uint32_t value_Char;
	uint8_t value_Byte;
	int8_t value_Int8;
	int16_t value_Int16;
	uint16_t value_UInt16;
	int32_t value_Int32;
	uint32_t value_UInt32;
	double value_Float;
	void* value_Pointer;
} nit_call_arg;

"""

		# types
		var used_types = collect_mtypes
		for t in used_types do
			if not t.is_cprimitive then
				ecc.header_c_types.add "typedef void* {t.cname};\n"
			end
		end

		# TODO callbacks & casts

		for nclassdef in n_classdefs do for npropdef in nclassdef.n_propdefs do
			if npropdef isa AMethPropdef and npropdef.supported_by_dynamic_ffi then
				npropdef.mpropdef.compile_foreign_code_entry ecc
			end
		end

		ecc.write_as_foreign_lib_api(mmodule, compdir)

		return ecc
	end

	# Collect all `MType` use in extern methods within this module
	private fun collect_mtypes: Set[MType]
	do
		var used_types = new HashSet[MType]

		# collect callbacks
		for nclassdef in n_classdefs do for npropdef in nclassdef.n_propdefs do
			if npropdef isa AMethPropdef and npropdef.supported_by_dynamic_ffi then
				var fcs = npropdef.foreign_callbacks
				used_types.add_all fcs.types
			end
		end

		return used_types
	end
end

redef class CCompilationUnit
	# Write this compilation unit as the API of a foreign code library
	private fun write_as_foreign_lib_api(mmodule: MModule, compdir: String)
	do
		# The FFI expects the support header to end with `._nitni.h`
		var base_name = mmodule.c_name + "._nitni"
		var guard = mmodule.c_name.to_s.to_upper + "_API_H"
		var header_comment = """
/*
	Public API to foreign code of the Nit module {{{mmodule.name}}}
*/
"""

		# Header file
		var h_file = base_name+".h"
		var stream = new FileWriter.open(compdir/h_file)
		stream.write header_comment
		stream.write """
#ifndef {{{guard}}}
#define {{{guard}}}
"""
		compile_header_core stream
		stream.write """

#endif
"""
		stream.close

		# Body file
		var c_file = base_name+".c"
		stream = new FileWriter.open(compdir/c_file)
		stream.write header_comment
		stream.write """
#include "{{{h_file}}}"
"""
		compile_body_core stream
		stream.close

		# Only the C files needs compiling
		files.add compdir / c_file
	end
end

redef class MMethodDef
	# Name of the entry point to the implementation function in the foreign lib
	fun foreign_lib_entry_cname: String do return "entry__{cname}"

	# Compile the standardized entry point as part of the foreign lib API
	private fun compile_foreign_code_entry(ecc: CCompilationUnit)
	do
		var msignature = msignature
		if msignature == null then return

		# Return type
		var return_mtype = msignature.return_mtype
		if mproperty.is_init then return_mtype = mclassdef.mclass.mclass_type

		var c_return_type
		if return_mtype != null then
			c_return_type = return_mtype.cname_blind
		else c_return_type = "void"

		var is_init = mproperty.is_init

		# Params
		var params = new Array[String]
		if not is_init then params.add mclassdef.mclass.mclass_type.cname_blind
		for param in msignature.mparameters do params.add param.mtype.cname_blind

		# Declare the implementation function as extern
		var impl_cname = mproperty.build_cname(mclassdef.bound_mtype,
			mclassdef.mmodule, "___impl", long_signature)
		ecc.body_decl.add "extern {c_return_type} {impl_cname}({params.join(", ")});\n"

		# Declare the entry function
		var foreign_lib_entry_cname = "int {foreign_lib_entry_cname}(int argc, nit_call_arg *argv, nit_call_arg *result)"
		var fc = new CFunction(foreign_lib_entry_cname)

		# Check argument count on the library side
		#
		# This may detect inconsistencies between the interpreter and the generated code.
		var expected_argc = msignature.arity
		if not is_init then expected_argc += 1

		fc.exprs.add """
	if (argc != {{{expected_argc}}}) {
		printf("Invalid argument count in `{{{mproperty.full_name}}}`, expected %d, got %d.\\n",
			argc, {{{expected_argc}}});
		return 1;
	}
"""

		# Unpack and prepare args for the user code
		var k = 0
		var args_for_call = new Array[String]
		if not is_init then
			var mtype = mclassdef.mclass.mclass_type
			var arg_name = "arg___self"

			fc.decls.add "	{mtype.cname_blind} {arg_name};\n"
			fc.exprs.add "	{arg_name} = argv[{k}].{mtype.call_arg_field};\n"
			args_for_call.add arg_name

			k += 1
		end
		for param in msignature.mparameters do
			var mtype = param.mtype
			var arg_name = "arg__"+param.name

			fc.decls.add "	{mtype.cname_blind} {arg_name};\n"
			fc.exprs.add "	{arg_name} = argv[{k}].{mtype.call_arg_field};\n"
			args_for_call.add arg_name

			k += 1
		end

		# Call implementation function
		var args_compressed = args_for_call.join(", ")
		var method_call = "{impl_cname}({args_compressed})"
		if return_mtype != null then
			fc.decls.add """
	{{{return_mtype.cname_blind}}} return_value;
"""
			fc.exprs.add """
	return_value = {{{method_call}}};
	result->{{{return_mtype.call_arg_field}}} = return_value;
"""
		else
			fc.exprs.add "	{method_call};\n"
		end

		fc.exprs.add "	return 0;\n"

		ecc.add_exported_function fc
	end
end

redef class MType
	# The interpreter FFI use `void*` to represent intern data types
	redef fun cname_blind do return "void*"

	# Field to store this type in the C structure `nit_call_arg`
	private fun call_arg_field: String do return "value_Pointer"
end

redef class MClassType
	redef fun call_arg_field
	do
		if is_cprimitive and mclass.kind != extern_kind then
			return "value_{name}"
		else return super
	end
end

redef class ExternFile
	# Compile this source file
	private fun compile(v: NaiveInterpreter, mmodule: MModule,
		object_files: Array[String], pkg_cflags: String): Bool is abstract
end

redef class ExternCFile
	redef fun compile(v, mmodule, object_files, pkg_cflags)
	do
		var compile_dir = v.compile_dir
		var cflags = mmodule.cflags[""].join(" ") + " " + pkg_cflags
		var obj = compile_dir / filename.basename(".c") + ".o"

		var cmd = "{v.c_compiler} -Wall -c -fPIC -I {compile_dir} -g -o {obj} {compile_dir / filename} {cflags}"
		if sys.system(cmd) != 0 then
			 v.fatal "FFI Error: Failed to compile C code using `{cmd}`"
			 return false
		end

		object_files.add obj
		return true
	end
end
