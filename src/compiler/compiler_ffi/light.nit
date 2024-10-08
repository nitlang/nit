# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013-2015 Alexis Laferrière <alexis.laf@xymus.net>
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

# Light FFI support for the compiler
module light

intrude import abstract_compiler
intrude import ffi::light_ffi

redef class MModule
	# `CCompilationUnit` used for nitni signatures and code specific to the compiler
	var nitni_ccu: nullable CCompilationUnit = null

	private fun nmodule(v: AbstractCompilerVisitor): nullable AModule
	do
		return v.compiler.modelbuilder.mmodule2node(self)
	end

	redef fun finalize_ffi(compiler)
	do
		if not uses_ffi then return

		var v = compiler.new_visitor
		var n = nmodule(v)
		if n == null then return
		n.ensure_compile_ffi_wrapper
		finalize_ffi_wrapper(v.compiler.toolchain.compile_dir, v.compiler.mainmodule)
		for file in ffi_files do v.compiler.extern_bodies.add(file)

		ensure_compile_nitni_base(v)

		nitni_ccu.header_c_types.add("#include \"{c_name}._ffi.h\"\n")
		nitni_ccu.header_c_types.add("#include <stdint.h>\n")
		nitni_ccu.header_c_types.add """
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
"""

		var cflags = self.cflags[""].join(" ")
		nitni_ccu.write_as_nitni(self, v.compiler.toolchain.compile_dir)

		for file in nitni_ccu.files do
			var f = new ExternCFile(file.basename, cflags)
			f.pkgconfigs.add_all pkgconfigs
			v.compiler.extern_bodies.add(f)
		end

		# reset FFI things so the next compilation job, if any, starts with a clean context
		# FIXME clean and rationalize this
		nitni_ccu = null
		compiled_ffi_methods.clear
		ffi_ccu = null
		ffi_files.clear
	end

	private fun ensure_compile_nitni_base(v: AbstractCompilerVisitor)
	do
		if nitni_ccu != null then return

		nitni_ccu = new CCompilationUnit
	end

	redef fun collect_linker_libs
	do
		if not self.ldflags.keys.has("") then return null
		return self.ldflags[""]
	end
end

redef class AMethPropdef
	private fun compile_ffi_support_to_c(v: AbstractCompilerVisitor)
	do
		var mmodule = mpropdef.mclassdef.mmodule
		var amodule = v.compiler.modelbuilder.mmodule2node(mmodule)
		var mclass_type = mpropdef.mclassdef.bound_mtype

		# Declare as extern
		var csignature = mpropdef.mproperty.build_csignature(mclass_type, mmodule, "___impl", long_signature, internal_call_context)
		v.declare_once("{csignature};")

		# FFI part
		amodule.ensure_compile_ffi_wrapper
		compile_ffi_method(mmodule)

		# nitni - Compile missing callbacks
		mmodule.ensure_compile_nitni_base(v)
	end

	# Should we compile the extern method `self`?
	#
	# Returns false when restricting to the light FFI on methods using callbacks.
	fun accept_externmeth: Bool do return true

	redef fun compile_externmeth_to_c(v, mpropdef, arguments)
	do
		# if using the old native interface fallback on previous implementation
		if n_extern_code_block == null then return super

		if not accept_externmeth then return false

		var mmodule = mpropdef.mclassdef.mmodule
		mmodule.uses_ffi = true

		var mclass_type = mpropdef.mclassdef.bound_mtype

		# Outgoing code in compiler
		var externname = mpropdef.mproperty.build_cname(mpropdef.mclassdef.bound_mtype, mmodule, "___impl", long_signature)
		var recv_var: nullable RuntimeVariable = null
		var return_mtype = mpropdef.msignature.return_mtype
		if return_mtype != null then
			return_mtype = return_mtype.anchor_to(mmodule, mclass_type)
			recv_var = v.new_var(return_mtype)
		end

		v.adapt_signature(mpropdef, arguments)
		v.unbox_signature_extern(mpropdef, arguments)

		var arguments_for_c = new Array[String]
		for a in [0..arguments.length[ do
			var arg = arguments[a]
			var param_mtype: MType
			if a == 0 then
				param_mtype = mpropdef.mclassdef.mclass.mclass_type
			else param_mtype = mpropdef.msignature.mparameters[a-1].mtype

			param_mtype = param_mtype.anchor_to(mmodule, mclass_type)

			if param_mtype.is_cprimitive then
				arguments_for_c.add(arg.name)
			else
				v.add("struct nitni_instance* var_for_c_{a};")
				v.add("var_for_c_{a} = nit_alloc(sizeof(struct nitni_instance));")
				v.add("var_for_c_{a}->value = {arg.name};")
				arguments_for_c.add("var_for_c_{a}")
			end
		end

		if recv_var == null then
			v.add("{externname}({arguments_for_c.join(", ")});")
		else
			assert return_mtype != null
			if return_mtype.is_cprimitive then
				v.add("{recv_var} = {externname}({arguments_for_c.join(", ")});")
			else
				v.add("struct nitni_instance* ret_var;")
				v.add("ret_var = {externname}({arguments_for_c.join(", ")});")
				v.add("{recv_var} = ret_var->value;")
			end
			recv_var = v.box_extern(recv_var, return_mtype)
			v.ret(recv_var)
		end

		compile_ffi_support_to_c(v)
		return true
	end

	redef fun compile_externinit_to_c(v, mpropdef, arguments)
	do
		# if using the old native interface fallback on previous implementation
		if n_extern_code_block == null then return super

		if not accept_externmeth then return false

		var mmodule = mpropdef.mclassdef.mmodule
		mmodule.uses_ffi = true

		var mclass_type = mpropdef.mclassdef.bound_mtype

		var externname = mpropdef.mproperty.build_cname(mpropdef.mclassdef.bound_mtype, mmodule, "___impl", long_signature)
		var return_mtype = arguments.first.mtype
		var recv_var = v.new_var(return_mtype)

		v.adapt_signature(mpropdef, arguments)
		v.unbox_signature_extern(mpropdef, arguments)

		arguments.shift

		var arguments_for_c = new Array[String]
		for a in [0..arguments.length[ do
			var arg = arguments[a]
			var param_mtype: MType
			param_mtype = mpropdef.msignature.mparameters[a].mtype
			param_mtype = param_mtype.anchor_to(mmodule, mclass_type)

			if param_mtype.is_cprimitive then
				arguments_for_c.add(arg.name)
			else
				v.add("struct nitni_instance* var_for_c_{a};")
				v.add("var_for_c_{a} = nit_alloc(sizeof(struct nitni_instance));")
				v.add("var_for_c_{a}->value = {arg.name};")
				arguments_for_c.add("var_for_c_{a}")
			end
		end

		if return_mtype.is_cprimitive then
			v.add("{recv_var} = {externname}({arguments_for_c.join(", ")});")
		else
			v.add("struct nitni_instance* ret_var;")
			v.add("ret_var = {externname}({arguments_for_c.join(", ")});")
			v.add("{recv_var} = ret_var->value;")
		end
		recv_var = v.box_extern(recv_var, return_mtype)
		v.ret(recv_var)

		compile_ffi_support_to_c(v)
		return true
	end
end

redef class CCompilationUnit
	# Compile a `_nitni` files, used to implement nitni features for the compiler
	fun write_as_nitni(mmodule: MModule, compdir: String)
	do
		var base_name = "{mmodule.c_name}._nitni"

		var h_file = "{base_name}.h"
		write_header_to_file( mmodule, "{compdir}/{h_file}", new Array[String],
			"{mmodule.c_name.to_s.to_upper}_NITG_NITNI_H")

		var c_file = "{base_name}.c"
		write_body_to_file( mmodule, "{compdir}/{c_file}", ["\"{h_file}\""] )

		files.add( "{compdir}/{c_file}" )
	end
end

redef class AbstractCompiler
	# Cache to avoid multiple compilation of NULL values
	# see FIXME in `MNullableType#compile_extern_helper_functions`
	private var compiled_null_types = new Array[MNullableType]
end

redef class AbstractCompilerVisitor
	# Create a `RuntimeVariable` for this C variable originating from C user code
	private fun var_from_c(name: String, mtype: MType): RuntimeVariable
	do
		if mtype.is_cprimitive then
			return new RuntimeVariable(name, mtype, mtype)
		else
			return new RuntimeVariable("{name}->value", mtype, mtype)
		end
	end

	# Return a `RuntimeVarible` to C user code
	private fun ret_to_c(src: RuntimeVariable, mtype: MType)
	do
		if mtype.is_cprimitive then
			add("return {src};")
		else
			add("struct nitni_instance* ret_for_c;")
			add("ret_for_c = nit_alloc(sizeof(struct nitni_instance));")
			add("ret_for_c->value = {src};")
			add("return ret_for_c;")
		end
	end
end

redef class MType
	private fun compile_extern_type(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		assert not is_cprimitive

		# define friendly type
		ccu.header_c_types.add("#ifndef NIT_TYPE_{cname}\n")
		ccu.header_c_types.add("#define NIT_TYPE_{cname} 1\n")
		ccu.header_c_types.add("typedef struct nitni_instance *{cname};\n")
		ccu.header_c_types.add("#endif\n")
	end
end
