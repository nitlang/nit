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

# FFI support for the compilers
module compiler_ffi

intrude import abstract_compiler
intrude import common_ffi
import nitni

redef class MModule
	private var foreign_callbacks = new ForeignCallbackSet
	var nitni_ccu: nullable CCompilationUnit = null

	private fun nmodule(v: AbstractCompilerVisitor): nullable AModule
	do
		var m2n = v.compiler.modelbuilder.mmodule2nmodule
		return m2n.get_or_null(self)
	end

	redef fun finalize_ffi(compiler: AbstractCompiler)
	do
		if not uses_ffi then return

		var v = compiler.new_visitor
		var n = nmodule(v)
		if n == null then return
		n.ensure_compile_ffi_wrapper
		finalize_ffi_wrapper(v.compiler.modelbuilder.compile_dir, v.compiler.mainmodule)
		for file in ffi_files do v.compiler.extern_bodies.add(file)

		ensure_compile_nitni_base(v)

		nitni_ccu.header_c_types.add("#include \"{name}._ffi.h\"\n")
		nitni_ccu.header_c_types.add """
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
"""

		nitni_ccu.write_as_nitni(self, v.compiler.modelbuilder.compile_dir)

		for file in nitni_ccu.files do
			v.compiler.extern_bodies.add(new ExternCFile(file, c_compiler_options))
		end

		# reset FFI things so the next compilation job, if any, starts with a clean context
		# FIXME clean and rationalize this
		nitni_ccu = null
		compiled_ffi_methods.clear
		ffi_ccu = null
		ffi_files.clear
		compiled_callbacks.clear
		#Do not reset `foreign_callbacks` and `ffi_callbacks` because they are computed in previous phases
	end

	private fun ensure_compile_nitni_base(v: AbstractCompilerVisitor)
	do
		if nitni_ccu != null then return

		nitni_ccu = new CCompilationUnit
	end

	redef fun collect_linker_libs
	do
		var s = c_linker_options
		if s.is_empty then return null
		var res = new ArraySet[String]
		res.add s
		return res
	end

	private var compiled_callbacks: Array[NitniCallback] = new Array[NitniCallback]

	# Returns true if callbacks has yet to be generated and register it as being generated
	private fun check_callback_compilation(cb: NitniCallback): Bool
	do
		var compiled = compiled_callbacks.has(cb)
		if not compiled then compiled_callbacks.add(cb)
		return not compiled
	end
end

redef class AMethPropdef
	private fun compile_ffi_support_to_c(v: AbstractCompilerVisitor)
	do
		var mmodule = mpropdef.mclassdef.mmodule
		var mainmodule = v.compiler.mainmodule
		var amainmodule = v.compiler.modelbuilder.mmodule2nmodule[mainmodule]
		var amodule = v.compiler.modelbuilder.mmodule2nmodule[mmodule]
		var mclass_type = mpropdef.mclassdef.bound_mtype

		# Declare as extern
		var csignature = mpropdef.mproperty.build_csignature(mclass_type, mmodule, "___impl", long_signature, internal_call_context)
		v.declare_once("{csignature};")

		# FFI part
		amodule.ensure_compile_ffi_wrapper
		compile_ffi_method(mmodule)

		assert self isa AExternPropdef

		# nitni - Compile missing callbacks
		mmodule.ensure_compile_nitni_base(v)
		var ccu = mmodule.nitni_ccu.as(not null)

		for mtype in foreign_callbacks.types do
			if not mtype.is_cprimitive then
				mtype.compile_extern_type(v, ccu)

				# has callbacks already been compiled? (this may very well happen with global compilation)
				if mmodule.check_callback_compilation(mtype) then mtype.compile_extern_helper_functions(v, ccu)
			end
		end

		# compile callbacks
		for cb in foreign_callbacks.callbacks do if mainmodule.check_callback_compilation(cb) then
			cb.compile_extern_callback(v, ccu)
		end

		for cb in foreign_callbacks.supers do if mainmodule.check_callback_compilation(cb) then
			cb.compile_extern_callback(v, ccu)
		end

		for cb in foreign_callbacks.casts do if mainmodule.check_callback_compilation(cb) then
			cb.compile_extern_callbacks(v, ccu)
		end

		# manage nitni callback set
		mmodule.foreign_callbacks.join(foreign_callbacks)
	end

	redef fun compile_externmeth_to_c(v, mpropdef, arguments)
	do
		var mmodule = mpropdef.mclassdef.mmodule

		# if using the old native interface fallback on previous implementation
		var nextern = self.n_extern
		if nextern != null then
			super
			return
		end

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
			v.ret(recv_var)
		end

		compile_ffi_support_to_c(v)
	end

	redef fun compile_externinit_to_c(v, mpropdef, arguments)
	do
		var mmodule = mpropdef.mclassdef.mmodule

		# if using the old native interface fallback on previous implementation
		var nextern = self.n_extern
		if nextern != null then
			super
			return
		end

		mmodule.uses_ffi = true

		var mclass_type = mpropdef.mclassdef.bound_mtype

		var externname = mpropdef.mproperty.build_cname(mpropdef.mclassdef.bound_mtype, mmodule, "___impl", long_signature)
		var return_mtype = arguments.first.mtype
		var recv_var = v.new_var(return_mtype)

		v.adapt_signature(mpropdef, arguments)

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
		v.ret(recv_var)

		compile_ffi_support_to_c(v)
	end
end

redef class CCompilationUnit
	fun write_as_nitni(mmodule: MModule, compdir: String)
	do
		var base_name = "{mmodule.name}._nitni"

		var h_file = "{base_name}.h"
		write_header_to_file( mmodule, "{compdir}/{h_file}", new Array[String],
			"{mmodule.cname.to_s.to_upper}_NITG_NITNI_H")

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

	private fun compile_extern_helper_functions(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		# actually, we do not need to do anything when using the bohem garbage collector
		var call_context = from_c_call_context

		# incr_ref
		ccu.header_decl.add "#ifndef {mangled_cname}_incr_ref\n"
		ccu.header_decl.add "	#define {mangled_cname}_incr_ref(from) nitni_global_ref_incr(({call_context.name_mtype(self)})(from))\n"
		ccu.header_decl.add "#endif\n"

		# decr_ref
		ccu.header_decl.add "#ifndef {mangled_cname}_decr_ref\n"
		ccu.header_decl.add "	#define {mangled_cname}_decr_ref(from) nitni_global_ref_decr(({call_context.name_mtype(self)})(from))\n"
		ccu.header_decl.add "#endif\n"
	end
end

redef class MNullableType
	redef fun compile_extern_helper_functions(v, ccu)
	do
		super

		var base_cname = "null_{mtype.mangled_cname}"
		var full_cname = "NIT_NULL___{base_cname}"

		# In nitni files, declare internal function as extern 
		var full_friendly_csignature = "{cname_blind} {full_cname}()"
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# In nitni files, #define friendly as extern
		ccu.header_decl.add("#define {base_cname} {full_cname}\n")

		# FIXME: This is ugly an broke the separate compilation principle
		# The real function MUST be compiled only once, #define pragma only protect the compiler, not the loader
		# However, I am not sure of the right approach here (eg. week refs are ugly)
		if v.compiler.compiled_null_types.has(self) then return
		v.compiler.compiled_null_types.add self

		# Internally, implement internal function
		var nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame
		var full_internal_csignature = "{cname_blind} {full_cname}()"
		nitni_visitor.add("{full_internal_csignature} \{")
		nitni_visitor.add("struct nitni_instance* ret_for_c;")
		nitni_visitor.add("ret_for_c = nit_alloc(sizeof(struct nitni_instance));")
		nitni_visitor.add("ret_for_c->value = NULL;")
		nitni_visitor.add("return ret_for_c;")
		nitni_visitor.add("\}")
	end
end

redef class MExplicitCall
	private fun compile_extern_callback(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		var mproperty = mproperty
		assert mproperty isa MMethod

		# In nitni files, declare internal function as extern 
		var full_friendly_csignature = mproperty.build_csignature(recv_mtype, v.compiler.mainmodule, null, long_signature, internal_call_context)
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# Internally, implement internal function
		var nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame
		var msignature = mproperty.lookup_first_definition(v.compiler.mainmodule, recv_mtype).msignature
		var csignature_blind = mproperty.build_csignature(recv_mtype, v.compiler.mainmodule, null, long_signature, internal_call_context)

		nitni_visitor.add_decl("/* nitni callback for {mproperty.full_name} */")
		nitni_visitor.add_decl("{csignature_blind} \{")

		var vars = new Array[RuntimeVariable]
		var mtype: MType = recv_mtype
		var recv_var = null
		if mproperty.is_init then
			if recv_mtype.mclass.kind == extern_kind then
				recv_var = nitni_visitor.new_var(mtype)
			else
				var recv_mtype = recv_mtype
				recv_var = nitni_visitor.init_instance(recv_mtype)
				nitni_visitor.add("{mtype.ctype} recv /* var self: {mtype} */;")
				nitni_visitor.add("recv = {recv_var};")
			end
		else
			mtype = mtype.anchor_to(v.compiler.mainmodule, recv_mtype)
			recv_var = nitni_visitor.var_from_c("recv", mtype)
		end

		vars.add(recv_var)

		for p in msignature.mparameters do
			var arg_mtype = p.mtype.anchor_to(v.compiler.mainmodule, recv_mtype)
			var arg = nitni_visitor.var_from_c(p.name, arg_mtype)
			vars.add(arg)
		end

		var ret_var = nitni_visitor.send(mproperty, vars)

		var return_mtype = msignature.return_mtype
		if mproperty.is_init then
			if recv_mtype.mclass.kind != extern_kind then ret_var = recv_var
			return_mtype = recv_mtype
		end
		if return_mtype != null then
			assert ret_var != null
			return_mtype = return_mtype.anchor_to(v.compiler.mainmodule, recv_mtype)
			ret_var = nitni_visitor.autobox(ret_var, return_mtype)
			nitni_visitor.ret_to_c(ret_var, return_mtype)
		end
		nitni_visitor.add("\}")
	end
end

redef class MExplicitSuper
	private fun compile_extern_callback(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		var mproperty = from.mproperty
		assert mproperty isa MMethod
		var mclass_type = from.mclassdef.mclass.mclass_type
		var mmodule = from.mclassdef.mmodule

		# In nitni files, declare internal function as extern
		var internal_csignature = mproperty.build_csignature(mclass_type, v.compiler.mainmodule, "___super", long_signature, internal_call_context)
		ccu.header_decl.add("extern {internal_csignature};\n")

		# In nitni files, #define friendly as extern
		var friendly_cname = mproperty.build_cname(mclass_type, v.compiler.mainmodule, "___super", short_signature)
		var internal_cname = mproperty.build_cname(mclass_type, v.compiler.mainmodule, "___super", long_signature)
		ccu.header_decl.add("#define {friendly_cname} {internal_cname}\n")

		# Internally, implement internal function
		var nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame
		var msignature = mproperty.lookup_first_definition(v.compiler.mainmodule, mclass_type).msignature

		var csignature_blind = mproperty.build_csignature(mclass_type, v.compiler.mainmodule, "___super", long_signature, internal_call_context)

		nitni_visitor.add_decl("/* nitni callback to super for {mproperty.full_name} */")
		nitni_visitor.add_decl("{csignature_blind} \{")

		var vars = new Array[RuntimeVariable]

		var recv_var = nitni_visitor.var_from_c("recv", mclass_type)
		vars.add(recv_var)

		for p in msignature.mparameters do
			var arg_mtype = v.anchor(p.mtype)
			var arg = nitni_visitor.var_from_c(p.name, arg_mtype)
			vars.add(arg)
		end

		var ret_var = nitni_visitor.supercall(from.as(MMethodDef), mclass_type, vars)

		var return_mtype = msignature.return_mtype
		if return_mtype != null then
			assert ret_var != null
			return_mtype = v.anchor(return_mtype)
			nitni_visitor.ret_to_c(ret_var, return_mtype)
		end
		nitni_visitor.add("\}")
	end
end

redef class MExplicitCast
	private fun compile_extern_callbacks(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		var from = from
		var to = to

		#
		## check type
		#

		# In nitni files, declare internal function as extern 
		var full_friendly_csignature = "int {v.compiler.mainmodule.name }___{from.mangled_cname}_is_a_{to.mangled_cname}({from.cname_blind})"
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# In nitni files, #define friendly as extern
		ccu.header_decl.add("#define {check_cname} {v.compiler.mainmodule.name}___{check_cname}\n")

		# Internally, implement internal function
		var nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame

		var full_internal_csignature = "int {v.compiler.mainmodule.name }___{from.mangled_cname}_is_a_{to.mangled_cname}({from.cname_blind} from)"
		nitni_visitor.add_decl("/* nitni check for {from} to {to} */")
		nitni_visitor.add_decl("{full_internal_csignature} \{")

		var from_var = new RuntimeVariable("from->value", from, from)
		var recv_var = nitni_visitor.type_test(from_var, to, "FFI isa")
		nitni_visitor.add("return {recv_var};")

		nitni_visitor.add("\}")

		# special checks
		if from == to.as_nullable then
			# format A_is_null
			ccu.header_decl.add("#define {from.mangled_cname}_is_null !{from.mangled_cname}_is_a_{to.mangled_cname}\n")
		end

		#
		## cast
		#

		# In nitni files, declare internal function as extern
		full_friendly_csignature = "{to.cname_blind} {v.compiler.mainmodule.name }___{from.mangled_cname}_as_{to.mangled_cname}({from.cname_blind})"
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# In nitni files, #define friendly as extern
		ccu.header_decl.add("#define {cast_cname} {v.compiler.mainmodule.name}___{cast_cname}\n")

		# Internally, implement internal function
		nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame

		full_internal_csignature = "{to.cname_blind} {v.compiler.mainmodule.name }___{from.mangled_cname}_as_{to.mangled_cname}({from.cname_blind} from)"
		nitni_visitor.add_decl("/* nitni cast for {from} to {to} */")
		nitni_visitor.add_decl("{full_internal_csignature} \{")

		from_var = nitni_visitor.var_from_c("from", from)

		## test type
		var check = nitni_visitor.type_test(from_var, to, "FFI cast")
		nitni_visitor.add("if (!{check}) \{")
		nitni_visitor.add_abort("FFI cast failed")
		nitni_visitor.add("\}")

		## internal cast
		recv_var = nitni_visitor.autobox(from_var, to)

		nitni_visitor.ret_to_c(recv_var, to)

		nitni_visitor.add("\}")

		# special casts
		if from.as_nullable == to then
			# format A_as_nullable
			ccu.header_decl.add("#define {from.mangled_cname}_as_nullable {from.mangled_cname}_as_{to.mangled_cname}\n")
		end

		if from == to.as_nullable then
			# format A_as_nullable
			ccu.header_decl.add("#define {to.mangled_cname}_as_not_nullable {from.mangled_cname}_as_{to.mangled_cname}\n")
		end
	end
end
