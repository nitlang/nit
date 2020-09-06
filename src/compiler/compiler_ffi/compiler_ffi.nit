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

# Full FFI support for the compiler
module compiler_ffi

intrude import light
import nitni

redef class MModule
	private var foreign_callbacks = new ForeignCallbackSet

	redef fun finalize_ffi(compiler: AbstractCompiler)
	do
		if not uses_ffi then return

		super

		compiled_callbacks.clear
		#Do not reset `foreign_callbacks` and `ffi_callbacks` because they are computed in previous phases
	end

	private var compiled_callbacks = new Array[NitniCallback]

	# Returns true if callbacks has yet to be generated and register it as being generated
	private fun check_callback_compilation(cb: NitniCallback): Bool
	do
		var compiled = compiled_callbacks.has(cb)
		if not compiled then compiled_callbacks.add(cb)
		return not compiled
	end
end

redef class AMethPropdef
	redef fun compile_ffi_support_to_c(v)
	do
		super

		var mmodule = mpropdef.mclassdef.mmodule
		var mainmodule = v.compiler.mainmodule
		var ccu = mmodule.nitni_ccu.as(not null)

		for mtype in foreign_callbacks.types do
			if not mtype.is_cprimitive then
				mtype.compile_extern_type(v, ccu)

				# has callbacks already been compiled? (this may very well happen with global compilation)
				mtype.compile_extern_helper_functions(v, ccu, mmodule.check_callback_compilation(mtype))
			end
		end

		# compile callbacks
		for cb in foreign_callbacks.callbacks do
			cb.compile_extern_callback(v, ccu, mainmodule.check_callback_compilation(cb))
		end

		for cb in foreign_callbacks.supers do
			cb.compile_extern_callback(v, ccu, mainmodule.check_callback_compilation(cb))
		end

		for cb in foreign_callbacks.casts do
			cb.compile_extern_callbacks(v, ccu, mainmodule.check_callback_compilation(cb))
		end

		# manage nitni callback set
		mmodule.foreign_callbacks.join(foreign_callbacks)
	end
end

redef class MExplicitCall
	private fun compile_extern_callback(v: AbstractCompilerVisitor, ccu: CCompilationUnit, compile_implementation_too: Bool)
	is
		expect(mproperty isa MMethod)
	do
		var mproperty = mproperty.as(MMethod)

		# In nitni files, declare internal function as extern
		var full_friendly_csignature = mproperty.build_csignature(recv_mtype, v.compiler.mainmodule, null, long_signature, internal_call_context)
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		if not compile_implementation_too then return

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
			var recv_mtype = recv_mtype
			recv_var = nitni_visitor.init_instance_or_extern(recv_mtype)
			nitni_visitor.add("{mtype.ctype} self /* var self: {mtype} */;")
			nitni_visitor.add("self = {recv_var};")
		else
			mtype = mtype.anchor_to(v.compiler.mainmodule, recv_mtype)
			recv_var = nitni_visitor.var_from_c("self", mtype)
			recv_var = nitni_visitor.box_extern(recv_var, mtype)
		end

		vars.add(recv_var)

		for p in msignature.mparameters do
			var arg_mtype = p.mtype.anchor_to(v.compiler.mainmodule, recv_mtype)
			var arg = nitni_visitor.var_from_c(p.name, arg_mtype)
			arg = nitni_visitor.box_extern(arg, arg_mtype)
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
			ret_var = nitni_visitor.unbox_extern(ret_var, return_mtype)
			nitni_visitor.ret_to_c(ret_var, return_mtype)
		end
		nitni_visitor.add("\}")
	end
end

redef class MType
	private fun compile_extern_helper_functions(v: AbstractCompilerVisitor, ccu: CCompilationUnit, compile_implementation_too: Bool)
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
	redef fun compile_extern_helper_functions(v, ccu, compile_implementation_too)
	do
		super

		var base_cname = "null_{mtype.mangled_cname}"
		var full_cname = "NIT_NULL___{base_cname}"

		# In nitni files, declare internal function as extern
		var full_friendly_csignature = "{cname_blind} {full_cname}()"
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# In nitni files, #define friendly as extern
		ccu.header_decl.add("#define {base_cname} {full_cname}\n")

		if not compile_implementation_too then return

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

redef class MExplicitSuper
	private fun compile_extern_callback(v: AbstractCompilerVisitor, ccu: CCompilationUnit, compile_implementation_too: Bool)
	is
		expect(from.mproperty isa MMethod)
	do
		var mproperty = from.mproperty.as(MMethod)
		var mclass_type = from.mclassdef.mclass.mclass_type

		# In nitni files, declare internal function as extern
		var internal_csignature = mproperty.build_csignature(mclass_type, v.compiler.mainmodule, "___super", long_signature, internal_call_context)
		ccu.header_decl.add("extern {internal_csignature};\n")

		# In nitni files, #define friendly as extern
		var friendly_cname = mproperty.build_cname(mclass_type, v.compiler.mainmodule, "___super", short_signature)
		var internal_cname = mproperty.build_cname(mclass_type, v.compiler.mainmodule, "___super", long_signature)
		ccu.header_decl.add("#define {friendly_cname} {internal_cname}\n")

		if not compile_implementation_too then return

		# Internally, implement internal function
		var nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame
		var msignature = mproperty.lookup_first_definition(v.compiler.mainmodule, mclass_type).msignature

		var csignature_blind = mproperty.build_csignature(mclass_type, v.compiler.mainmodule, "___super", long_signature, internal_call_context)

		nitni_visitor.add_decl("/* nitni callback to super for {mproperty.full_name} */")
		nitni_visitor.add_decl("{csignature_blind} \{")

		var vars = new Array[RuntimeVariable]

		var recv_var = nitni_visitor.var_from_c("self", mclass_type)
		recv_var = nitni_visitor.box_extern(recv_var, mclass_type)
		vars.add(recv_var)

		for p in msignature.mparameters do
			var arg_mtype = v.anchor(p.mtype)
			var arg = nitni_visitor.var_from_c(p.name, arg_mtype)
			arg = nitni_visitor.box_extern(arg, arg_mtype)
			vars.add(arg)
		end

		var ret_var = nitni_visitor.supercall(from.as(MMethodDef), mclass_type, vars)

		var return_mtype = msignature.return_mtype
		if return_mtype != null then
			assert ret_var != null
			return_mtype = v.anchor(return_mtype)
			ret_var = nitni_visitor.autobox(ret_var, return_mtype)
			ret_var = nitni_visitor.unbox_extern(ret_var, return_mtype)
			nitni_visitor.ret_to_c(ret_var, return_mtype)
		end
		nitni_visitor.add("\}")
	end
end

redef class MExplicitCast
	private fun compile_extern_callbacks(v: AbstractCompilerVisitor, ccu: CCompilationUnit, compile_implementation_too: Bool)
	do
		var from = from
		var to = to

		#
		## check type
		#

		# In nitni files, declare internal function as extern
		var full_friendly_csignature = "int {v.compiler.mainmodule.c_name }___{from.mangled_cname}_is_a_{to.mangled_cname}({from.cname_blind})"
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# In nitni files, #define friendly as extern
		ccu.header_decl.add "#ifndef {check_cname}\n"
		ccu.header_decl.add "#define {check_cname} {v.compiler.mainmodule.c_name}___{check_cname}\n"
		ccu.header_decl.add "#endif\n"

		if compile_implementation_too then
			# Internally, implement internal function
			var nitni_visitor = v.compiler.new_visitor
			nitni_visitor.frame = v.frame

			var full_internal_csignature = "int {v.compiler.mainmodule.c_name }___{from.mangled_cname}_is_a_{to.mangled_cname}({internal_call_context.name_mtype(from)} from)"

			nitni_visitor.add_decl("/* nitni check for {from} to {to} */")
			nitni_visitor.add_decl("{full_internal_csignature} \{")

			var from_var = nitni_visitor.var_from_c("from", from)
			from_var = nitni_visitor.box_extern(from_var, from)
			var recv_var = nitni_visitor.type_test(from_var, to, "isa")
			nitni_visitor.add("return {recv_var};")

			nitni_visitor.add("\}")
		end

		# special checks
		if from == to.as_nullable then
			# format A_is_null
			ccu.header_decl.add "#ifndef {from.mangled_cname}_is_null\n"
			ccu.header_decl.add "#define {from.mangled_cname}_is_null !{from.mangled_cname}_is_a_{to.mangled_cname}\n"
			ccu.header_decl.add "#endif\n"
		end

		#
		## cast
		#

		# In nitni files, declare internal function as extern
		full_friendly_csignature = "{to.cname_blind} {v.compiler.mainmodule.c_name }___{from.mangled_cname}_as_{to.mangled_cname}({from.cname_blind})"
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# In nitni files, #define friendly as extern
		ccu.header_decl.add "#ifndef {cast_cname}\n"
		ccu.header_decl.add "#define {cast_cname} {v.compiler.mainmodule.c_name}___{cast_cname}\n"
		ccu.header_decl.add "#endif\n"

		if compile_implementation_too then
			# Internally, implement internal function
			var nitni_visitor = v.compiler.new_visitor
			nitni_visitor.frame = v.frame

			var full_internal_csignature = "{to.cname_blind} {v.compiler.mainmodule.c_name }___{from.mangled_cname}_as_{to.mangled_cname}({internal_call_context.name_mtype(from)} from)"
			nitni_visitor.add_decl("/* nitni cast for {from} to {to} */")
			nitni_visitor.add_decl("{full_internal_csignature} \{")

			var from_var = nitni_visitor.var_from_c("from", from)
			from_var = nitni_visitor.box_extern(from_var, from)

			## test type
			var check = nitni_visitor.type_test(from_var, to, "as")
			nitni_visitor.add("if (!{check}) \{")
			nitni_visitor.add_abort("FFI cast failed")
			nitni_visitor.add("\}")

			## internal cast
			var recv_var = nitni_visitor.autobox(from_var, to)
			recv_var = nitni_visitor.unbox_extern(recv_var, to)

			nitni_visitor.ret_to_c(recv_var, to)

			nitni_visitor.add("\}")
		end

		# special casts
		if from.as_nullable == to then
			# format A_as_nullable
			ccu.header_decl.add "#ifndef {from.mangled_cname}_as_nullable\n"
			ccu.header_decl.add "#define {from.mangled_cname}_as_nullable {from.mangled_cname}_as_{to.mangled_cname}\n"
			ccu.header_decl.add "#endif\n"
		end

		if from == to.as_nullable then
			# format A_as_nullable
			ccu.header_decl.add "#ifndef {to.mangled_cname}_as_not_nullable\n"
			ccu.header_decl.add "#define {to.mangled_cname}_as_not_nullable {from.mangled_cname}_as_{to.mangled_cname}\n"
			ccu.header_decl.add "#endif\n"
		end
	end
end
