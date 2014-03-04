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

redef class AModule
	private var foreign_callbacks = new ForeignCallbackSet
	var nitni_ccu: nullable CCompilationUnit = null

	redef var uses_legacy_ni: Bool = false

	redef fun finalize_ffi(v: AbstractCompilerVisitor, modelbuilder: ModelBuilder)
	do
		finalize_ffi_wrapper(v.compiler.modelbuilder.compile_dir, v.compiler.mainmodule)
		for file in ffi_files do v.compiler.extern_bodies.add(file)
	end

	fun ensure_compile_nitni_base(v: AbstractCompilerVisitor)
	do
		if nitni_ccu != null then return

		nitni_ccu = new CCompilationUnit
	end

	redef fun finalize_nitni(v: AbstractCompilerVisitor)
	do
		ensure_compile_nitni_base(v)

		nitni_ccu.header_c_types.add("#include \"{mmodule.name}._ffi.h\"\n")

		nitni_ccu.write_as_nitni(self, v.compiler.modelbuilder.compile_dir)

		for file in nitni_ccu.files do
			v.compiler.extern_bodies.add(new ExternCFile(file, c_compiler_options))
		end
	end

	var compiled_callbacks: Array[NitniCallback] = new Array[NitniCallback]

	# Returns true if callbacks has yet to be generated and register it as being generated
	fun check_callback_compilation(cb: NitniCallback): Bool
	do
		var compiled = compiled_callbacks.has(cb)
		if not compiled then compiled_callbacks.add(cb)
		return not compiled
	end
end

redef class AExternPropdef
	fun compile_ffi_support_to_c(v: AbstractCompilerVisitor)
	do
		var mmodule = mpropdef.mclassdef.mmodule
		var amainmodule = v.compiler.modelbuilder.mmodule2nmodule[v.compiler.mainmodule]
		var amodule = v.compiler.modelbuilder.mmodule2nmodule[mmodule]
		var mclass_type = mpropdef.mclassdef.bound_mtype

		# Declare as extern
		var csignature = mpropdef.mproperty.build_csignature(mclass_type, mmodule, "___impl", long_signature, internal_call_context)
		v.declare_once("{csignature};")

		# FFI part
		compile_ffi_method(amodule)

		# nitni - Compile missing callbacks
		amodule.ensure_compile_nitni_base(v)
		var ccu = amodule.nitni_ccu.as(not null)

		for mtype in foreign_callbacks.types do
			if not mtype.is_cprimitive then
				mtype.compile_extern_type(v, ccu)

				# has callbacks already been compiled? (this may very well happen with global compilation)
				if amodule.check_callback_compilation(mtype) then mtype.compile_extern_helper_functions(v, ccu)
			end
		end

		# compile callbacks
		for cb in foreign_callbacks.callbacks do if amainmodule.check_callback_compilation(cb) then
			cb.compile_extern_callback(v, ccu)
		end

		for cb in foreign_callbacks.supers do if amainmodule.check_callback_compilation(cb) then
			cb.compile_extern_callback(v, ccu)
		end

		for cb in foreign_callbacks.casts do if amainmodule.check_callback_compilation(cb) then
			cb.compile_extern_callbacks(v, ccu)
		end

		# manage nitni callback set
		amodule.foreign_callbacks.join(foreign_callbacks)
	end
end

redef class AExternMethPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		var mmodule = mpropdef.mclassdef.mmodule
		var amodule = v.compiler.modelbuilder.mmodule2nmodule[mmodule]

		# if using the old native interface fallback on previous implementation
		var nextern = self.n_extern
		if nextern != null then
			amodule.uses_legacy_ni = true
			super
			return
		end

		if not v.compiler.supports_ffi then
			super
			return
		end

		amodule.mmodule.uses_ffi = true

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
				v.add("var_for_c_{a} = malloc(sizeof(struct nitni_instance));")
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
end

redef class AExternInitPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		var mmodule = mpropdef.mclassdef.mmodule
		var amodule = v.compiler.modelbuilder.mmodule2nmodule[mmodule]

		# if using the old native interface fallback on previous implementation
		var nextern = self.n_extern
		if nextern != null then
			amodule.uses_legacy_ni = true
			super
			return
		end

		if not v.compiler.supports_ffi then
			super
			return
		end

		amodule.mmodule.uses_ffi = true

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
				v.add("var_for_c_{a} = malloc(sizeof(struct nitni_instance));")
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
	fun write_as_nitni(amodule: AModule, compdir: String)
	do
		var base_name = "{amodule.mmodule.name}._nitni"

		var h_file = "{base_name}.h"
		write_header_to_file( amodule, "{compdir}/{h_file}", new Array[String],
			"{amodule.cname.to_s.to_upper}_NITG_NITNI_H")

		var c_file = "{base_name}.c"
		write_body_to_file( amodule, "{compdir}/{c_file}", ["\"{h_file}\""] )

		files.add( "{compdir}/{c_file}" )
	end
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
			add("ret_for_c = malloc(sizeof(struct nitni_instance));")
			add("ret_for_c->value = {src};")
			add("return ret_for_c;")
		end
	end
end

redef class MType
	fun compile_extern_type(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		assert not is_cprimitive

		# define friendly type
		ccu.header_c_types.add("#ifndef NIT_TYPE_{cname}\n")
		ccu.header_c_types.add("#define NIT_TYPE_{cname} 1\n")
		ccu.header_c_types.add("typedef struct nitni_instance *{cname};\n")
		ccu.header_c_types.add("#endif\n")
	end

	fun compile_extern_helper_functions(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		# actually, we do not need to do anything when using the bohem garbage collector

		# incr_ref
		var nitni_visitor = v.compiler.new_visitor
		ccu.header_decl.add("#define {mangled_cname}_incr_ref(from) while(0)\{\}\n")

		# incr_ref
		nitni_visitor = v.compiler.new_visitor
		ccu.header_decl.add("#define {mangled_cname}_decr_ref(from) while(0)\{\}\n")
	end
end

redef class MNullableType
	redef fun compile_extern_helper_functions(v, ccu)
	do
		super

		# In nitni files, declare internal function as extern 
		var full_friendly_csignature = "{cname} {v.compiler.mainmodule.name}___null_{mtype.mangled_cname}()"
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# In nitni files, #define friendly as extern
		var base_cname = "null_{mtype.mangled_cname}"
		ccu.header_decl.add("#define {base_cname} {v.compiler.mainmodule.name}___{base_cname}\n")

		# Internally, implement internal function
		var nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame
		var full_internal_csignature = "{cname_blind} {v.compiler.mainmodule.name}___null_{mtype.mangled_cname}()"
		nitni_visitor.add("#ifndef NIT_NULL_null_{mtype.mangled_cname}")
		nitni_visitor.add("#define NIT_NULL_null_{mtype.mangled_cname}")
		nitni_visitor.add("{full_internal_csignature} \{")
		nitni_visitor.add("struct nitni_instance* ret_for_c;")
		nitni_visitor.add("ret_for_c = malloc(sizeof(struct nitni_instance));")
		nitni_visitor.add("ret_for_c->value = NULL;")
		nitni_visitor.add("return ret_for_c;")
		nitni_visitor.add("\}")
		nitni_visitor.add("#endif")
	end
end

redef class MExplicitCall
	fun compile_extern_callback(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
	do
		var mproperty = mproperty
		assert mproperty isa MMethod

		# In nitni files, declare internal function as extern 
		var full_friendly_csignature = mproperty.build_csignature(recv_mtype, v.compiler.mainmodule, null, long_signature, internal_call_context)
		ccu.header_decl.add("extern {full_friendly_csignature};\n")

		# Internally, implement internal function
		var nitni_visitor = v.compiler.new_visitor
		nitni_visitor.frame = v.frame
		var msignature = mproperty.intro.msignature
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
			nitni_visitor.ret_to_c(ret_var, return_mtype)
		end
		nitni_visitor.add("\}")
	end
end

redef class MExplicitSuper
	fun compile_extern_callback(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
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
		var msignature = mproperty.intro.msignature

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
	fun compile_extern_callbacks(v: AbstractCompilerVisitor, ccu: CCompilationUnit)
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
