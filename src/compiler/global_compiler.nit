# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Global compilation of a Nit program
#
# Techniques used are:
#   * heterogeneous generics
#   * customization
#   * switch dispatch
#   * inlining
module global_compiler

import abstract_compiler
import rapid_type_analysis

redef class ToolContext
	# option --global
	var opt_global = new OptionBool("Use global compilation", "--global")

	var global_compiler_phase = new GlobalCompilerPhase(self, [contracts_phase])

	redef init do
		super
		option_context.add_option(opt_global)
	end
end

class GlobalCompilerPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules) do
		if not toolcontext.opt_global.value then return

		var modelbuilder = toolcontext.modelbuilder
		var analysis = modelbuilder.do_rapid_type_analysis(mainmodule)
		modelbuilder.run_global_compiler(mainmodule, analysis)
	end
end

redef class ModelBuilder
	# Entry point to performs a global compilation on the AST of a complete program.
	# `mainmodule` is the main module of the program
	# `runtime_type_analysis` is a already computer type analysis.
	fun run_global_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** GENERATING C ***", 1)

		var compiler = new GlobalCompiler(mainmodule, self, runtime_type_analysis)
		compiler.do_compilation
		compiler.display_stats

		var time1 = get_time
		self.toolcontext.info("*** END GENERATING C: {time1-time0} ***", 2)
		write_and_make(compiler)
	end
end

# Compiler that use global compilation and perform hard optimisations like:
#   * customization
#   * switch dispatch
#   * inlining
class GlobalCompiler
	super AbstractCompiler

	redef type VISITOR: GlobalCompilerVisitor

	# The result of the RTA (used to know live types and methods)
	var runtime_type_analysis: RapidTypeAnalysis

	init
	do
		var file = new_file("{mainmodule.c_name}.nitgg")
		self.header = new CodeWriter(file)
		self.live_primitive_types = new Array[MClassType]
		for t in runtime_type_analysis.live_types do
			if t.is_c_primitive or t.mclass.name == "Pointer" then
				self.live_primitive_types.add(t)
			end
		end
	end

	redef fun do_compilation
	do
		var compiler = self

		compiler.compile_header

		if mainmodule.model.get_mclasses_by_name("Pointer") != null then
			runtime_type_analysis.live_types.add(mainmodule.pointer_type)
		end
		for t in runtime_type_analysis.live_types do
			compiler.declare_runtimeclass(t)
		end

		compiler.compile_class_names

		# Init instance code (allocate and init-arguments)
		for t in runtime_type_analysis.live_types do
			if not t.is_c_primitive then
				compiler.generate_init_instance(t)
				if t.mclass.kind == extern_kind then
					compiler.generate_box_instance(t)
				end
			else
				compiler.generate_box_instance(t)
			end
		end

		# The main function of the C
		compiler.compile_nitni_global_ref_functions
		compiler.compile_main_function

		# Compile until all runtime_functions are visited
		while not compiler.todos.is_empty do
			var m = compiler.todos.shift
			modelbuilder.toolcontext.info("Compile {m} ({compiler.seen.length-compiler.todos.length}/{compiler.seen.length})", 3)
			m.compile_to_c(compiler)
		end
		modelbuilder.toolcontext.info("Total methods to compile to C: {compiler.seen.length}", 2)

	end

	# Compile class names (for the class_name and output_class_name methods)
	protected fun compile_class_names do
		var v = new_visitor
		self.header.add_decl("extern const char *class_names[];")
		v.add("const char *class_names[] = \{")
		for t in self.runtime_type_analysis.live_types do
			v.add("\"{t}\", /* {self.classid(t)} */")
		end
		v.add("\};")
	end

	# Return the C symbol associated to a live type runtime
	# REQUIRE: self.runtime_type_analysis.live_types.has(mtype)
	fun classid(mtype: MClassType): String
	do
		if self.classids.has_key(mtype) then
			return self.classids[mtype]
		end
		print_error "No classid for {mtype}"
		abort
	end

	# Cache for classid
	protected var classids: HashMap[MClassType, String] = new HashMap[MClassType, String]

	# Declaration of structures the live Nit types
	# Each live type is generated as an independent C `struct` type.
	# They only share a common first field `classid` used to implement the polymorphism.
	# Usualy, all C variables that refers to a Nit object are typed on the abstract struct `val` that contains only the `classid` field.
	redef fun compile_header_structs do
		self.header.add_decl("typedef struct \{int classid;\} val; /* general C type representing a Nit instance. */")
	end

	# Subset of runtime_type_analysis.live_types that contains only primitive types
	# Used to implement the equal test
	var live_primitive_types: Array[MClassType] is noinit

	# Add a new todo task
	fun todo(m: AbstractRuntimeFunction)
	do
		if seen.has(m) then return
		todos.add(m)
		seen.add(m)
	end

	# runtime_functions that need to be compiled
	private var todos: List[AbstractRuntimeFunction] = new List[AbstractRuntimeFunction]

	# runtime_functions already seen (todo or done)
	private var seen: HashSet[AbstractRuntimeFunction] = new HashSet[AbstractRuntimeFunction]

	# Declare C structures and identifiers for a runtime class
	fun declare_runtimeclass(mtype: MClassType)
	do
		var v = self.header
		assert self.runtime_type_analysis.live_types.has(mtype)
		v.add_decl("/* runtime class {mtype} */")
		var idnum = classids.length
		var idname = "ID_" + mtype.c_name
		self.classids[mtype] = idname
		v.add_decl("#define {idname} {idnum} /* {mtype} */")

		v.add_decl("struct {mtype.c_name} \{")
		v.add_decl("int classid; /* must be {idname} */")

		if mtype.mclass.name == "NativeArray" then
			# NativeArrays are just a instance header followed by an array of values
			v.add_decl("int length;")
			v.add_decl("{mtype.arguments.first.ctype} values[1];")
		end

                if all_routine_types_name.has(mtype.mclass.name) then
                        v.add_decl("val* recv;")
                        var c_args = ["val* self"]
                        var c_ret = "void"
                        var k = mtype.arguments.length
                        if mtype.mclass.name.has("Fun") then
                                c_ret = mtype.arguments.last.ctype
                                k -= 1
                        end
                        for i in [0..k[ do
                                var t = mtype.arguments[i]
                                c_args.push("{t.ctype} p{i}")
                        end
                        var c_sig = c_args.join(", ")
                        v.add_decl("{c_ret} (*method)({c_sig});")
                end

		if mtype.ctype_extern != "val*" then
			# Is the Nit type is native then the struct is a box with two fields:
			# * the `classid` to be polymorph
			# * the `value` that contains the native value.
			v.add_decl("{mtype.ctype_extern} value;")
		end

		# Collect all attributes and associate them a field in the structure.
		# Note: we do not try to optimize the order and helps CC to optimize the client code.
		for cd in mtype.collect_mclassdefs(self.mainmodule) do
			for p in cd.intro_mproperties do
				if not p isa MAttribute then continue
				var t = p.intro.static_mtype.as(not null)
				t = t.anchor_to(self.mainmodule, mtype)
				v.add_decl("{t.ctype} {p.intro.c_name}; /* {p}: {t} */")
			end
		end
		v.add_decl("\};")
	end

	# Generate the init-instance of a live type (allocate + init-instance)
	fun generate_init_instance(mtype: MClassType)
	do
		assert self.runtime_type_analysis.live_types.has(mtype)
		assert not mtype.is_c_primitive
		var v = self.new_visitor

		var is_native_array = mtype.mclass.name == "NativeArray"
                var is_routine_ref = all_routine_types_name.has(mtype.mclass.name)
		var sig
		if is_native_array then
			sig = "int length"
		else
			sig = "void"
		end
                if is_routine_ref then
                        var c_args = ["val* self"]
                        var c_ret = "void"
                        var k = mtype.arguments.length
                        if mtype.mclass.name.has("Fun") then
                                c_ret = mtype.arguments.last.ctype
                                k -= 1
                        end
                        for i in [0..k[ do
                                var t = mtype.arguments[i]
                                c_args.push("{t.ctype} p{i}")
                        end
                        # The underlying method signature
                        var method_sig = "{c_ret} (*method)({c_args.join(", ")})"
                        sig = "val* recv, {method_sig}"
                end

		self.header.add_decl("{mtype.ctype} NEW_{mtype.c_name}({sig});")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{mtype.c_name}({sig}) \{")
		var res = v.new_var(mtype)
		res.is_exact = true
		if is_native_array then
			v.add("{res} = nit_alloc(sizeof(struct {mtype.c_name}) + length*sizeof(val*));")
			v.add("((struct {mtype.c_name}*){res})->length = length;")
		else
			v.add("{res} = nit_alloc(sizeof(struct {mtype.c_name}));")
		end
                if is_routine_ref then
			v.add("((struct {mtype.c_name}*){res})->recv = recv;")
                        v.add("((struct {mtype.c_name}*){res})->method = method;")
                end
		v.add("{res}->classid = {self.classid(mtype)};")

		self.generate_init_attr(v, res, mtype)
		v.set_finalizer res
		v.add("return {res};")
		v.add("\}")
	end

	fun generate_box_instance(mtype: MClassType)
	do
		assert self.runtime_type_analysis.live_types.has(mtype)
		var v = self.new_visitor

		self.header.add_decl("val* BOX_{mtype.c_name}({mtype.ctype});")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("val* BOX_{mtype.c_name}({mtype.ctype} value) \{")
		v.add("struct {mtype.c_name}*res = nit_alloc(sizeof(struct {mtype.c_name}));")
		v.add("res->classid = {self.classid(mtype)};")
		v.add("res->value = value;")
		v.add("return (val*)res;")
		v.add("\}")
	end

	redef fun new_visitor do return new GlobalCompilerVisitor(self)

	private var collect_types_cache: HashMap[MType, Array[MClassType]] = new HashMap[MType, Array[MClassType]]

	redef fun compile_nitni_structs
	do
		self.header.add_decl """
struct nitni_instance \{
	struct nitni_instance *next,
		*prev; /* adjacent global references in global list */
	int count; /* number of time this global reference has been marked */
	val *value;
\};"""
		super
	end
end

# A visitor on the AST of property definition that generate the C code.
# Because of inlining, a visitor can visit more than one property.
class GlobalCompilerVisitor
	super AbstractCompilerVisitor

	redef type COMPILER: GlobalCompiler

	redef fun autobox(value, mtype)
	do
		if value.mtype == mtype then
			return value
		else if not value.mtype.is_c_primitive and not mtype.is_c_primitive then
			return value
		else if not value.mtype.is_c_primitive then
			return self.new_expr("((struct {mtype.c_name}*){value})->value; /* autounbox from {value.mtype} to {mtype} */", mtype)
		else if not mtype.is_c_primitive then
			var valtype = value.mtype.as(MClassType)
			var res = self.new_var(mtype)
			if not compiler.runtime_type_analysis.live_types.has(valtype) then
				self.add("/*no autobox from {value.mtype} to {mtype}: {value.mtype} is not live! */")
				self.add("PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);")
				return res
			end
			self.add("{res} = BOX_{valtype.c_name}({value}); /* autobox from {value.mtype} to {mtype} */")
			return res
		else if value.mtype.ctype == "void*" and mtype.ctype == "void*" then
			return value
		else
			# Bad things will appen!
			var res = self.new_var(mtype)
			self.add("/* {res} left unintialized (cannot convert {value.mtype} to {mtype}) */")
			self.add("PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"{value.mtype}\", \"{mtype}\"); fatal_exit(1);")
			return res
		end
	end

	redef fun unbox_extern(value, mtype)
	do
		if mtype isa MClassType and mtype.mclass.kind == extern_kind and
		   mtype.mclass.name != "CString" then
			var res = self.new_var_extern(mtype)
			self.add "{res} = ((struct {mtype.c_name}*){value})->value; /* unboxing {value.mtype} */"
			return res
		else
			return value
		end
	end

	redef fun box_extern(value, mtype)
	do
		if not mtype isa MClassType or mtype.mclass.kind != extern_kind or
			mtype.mclass.name == "CString" then return value

		var valtype = value.mtype.as(MClassType)
		var res = self.new_var(mtype)
		if not compiler.runtime_type_analysis.live_types.has(value.mtype.as(MClassType)) then
			self.add("/*no boxing of {value.mtype}: {value.mtype} is not live! */")
			self.add("PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);")
			return res
		end
		self.add("{res} = BOX_{valtype.c_name}({value}); /* boxing {value.mtype} */")
		return res
	end

	# The runtime types that are acceptable for a given receiver.
	fun collect_types(recv: RuntimeVariable): Array[MClassType]
	do
		var mtype = recv.mcasttype
		if recv.is_exact then
			assert mtype isa MClassType
			assert self.compiler.runtime_type_analysis.live_types.has(mtype)
			var types = [mtype]
			return types
		end
		var cache = self.compiler.collect_types_cache
		if cache.has_key(mtype) then
			return cache[mtype]
		end
		var types = new Array[MClassType]
		var mainmodule = self.compiler.mainmodule
		for t in self.compiler.runtime_type_analysis.live_types do
			if not t.is_subtype(mainmodule, null, mtype) then continue
			types.add(t)
		end
		cache[mtype] = types
		return types
	end

	redef fun native_array_def(pname, ret_type, arguments)
	do
		var elttype = arguments.first.mtype
		var recv = "((struct {arguments[0].mcasttype.c_name}*){arguments[0]})->values"
		if pname == "[]" then
			self.ret(self.new_expr("{recv}[{arguments[1]}]", ret_type.as(not null)))
			return true
		else if pname == "[]=" then
			self.add("{recv}[{arguments[1]}]={arguments[2]};")
			return true
		else if pname == "length" then
			self.ret(self.new_expr("((struct {arguments[0].mcasttype.c_name}*){arguments[0]})->length", ret_type.as(not null)))
			return true
		else if pname == "copy_to" then
			var recv1 = "((struct {arguments[1].mcasttype.c_name}*){arguments[1]})->values"
			self.add("memmove({recv1},{recv},{arguments[2]}*sizeof({elttype.ctype}));")
			return true
		else if pname == "memmove" then
			# fun memmove(start: Int, length: Int, dest: NativeArray[E], dest_start: Int) is intern do
			var recv1 = "((struct {arguments[3].mcasttype.c_name}*){arguments[3]})->values"
			self.add("memmove({recv1}+{arguments[4]}, {recv}+{arguments[1]}, {arguments[2]}*sizeof({elttype.ctype}));")
			return true
		end
		return false
	end

	redef fun native_array_instance(elttype, length)
	do
		var ret_type = mmodule.native_array_type(elttype)
		ret_type = anchor(ret_type).as(MClassType)
		length = autobox(length, compiler.mainmodule.int_type)
		return self.new_expr("NEW_{ret_type.c_name}((int){length})", ret_type)
	end

	redef fun native_array_get(nat, i)
	do
		var recv = "((struct {nat.mcasttype.c_name}*){nat})->values"
		var ret_type = nat.mcasttype.as(MClassType).arguments.first
		return self.new_expr("{recv}[{i}]", ret_type)
	end

	redef fun native_array_set(nat, i, val)
	do
		var recv = "((struct {nat.mcasttype.c_name}*){nat})->values"
		self.add("{recv}[{i}]={val};")
	end

        redef fun routine_ref_instance(routine_mclass_type, recv, callsite)
        do
		var mmethoddef = callsite.mpropdef
                var method = new CustomizedRuntimeFunction(mmethoddef, recv.mcasttype.as(MClassType))
                var my_recv = recv
                if recv.mtype.is_c_primitive then
                        var object_type = mmodule.object_type
                        my_recv = autobox(recv, object_type)
                end
                var thunk = new CustomizedThunkFunction(mmethoddef, my_recv.mtype.as(MClassType))
                thunk.polymorph_call_flag = not my_recv.is_exact
                compiler.todo(method)
                compiler.todo(thunk)
		var ret_type = self.anchor(routine_mclass_type).as(MClassType)
                var res = self.new_expr("NEW_{ret_type.c_name}({my_recv}, &{thunk.c_name})", ret_type)
                return res
        end

        redef fun routine_ref_call(mmethoddef, arguments)
        do
                var routine = arguments.first
                var routine_type = routine.mtype.as(MClassType)
                var routine_class = routine_type.mclass
                var underlying_recv = "((struct {routine.mcasttype.c_name}*){routine})->recv"
                var underlying_method = "((struct {routine.mcasttype.c_name}*){routine})->method"
                adapt_signature(mmethoddef, arguments)
                arguments.shift
                var ss = "{underlying_recv}"
                if arguments.length > 0 then
                        ss = "{ss}, {arguments.join(", ")}"
                end
                arguments.unshift routine

                var ret_mtype = mmethoddef.msignature.return_mtype

                if ret_mtype != null then
                        ret_mtype = resolve_for(ret_mtype, routine)
                end
                var callsite = "{underlying_method}({ss})"
                if ret_mtype != null then
                        var subres = new_expr("{callsite}", ret_mtype)
                        ret(subres)
                else
                        add("{callsite};")
		end
        end

	redef fun send(m, args)
	do
		var types = self.collect_types(args.first)

		var res: nullable RuntimeVariable
		var ret = m.intro.msignature.return_mtype
		if ret == null then
			res = null
		else
			ret = self.resolve_for(ret, args.first)
			res = self.new_var(ret)
		end

		self.add("/* send {m} on {args.first.inspect} */")
		if args.first.mtype.is_c_primitive then
			var mclasstype = args.first.mtype.as(MClassType)
			if not self.compiler.runtime_type_analysis.live_types.has(mclasstype) then
				self.add("/* skip, dead class {mclasstype} */")
				return res
			end
			if not mclasstype.has_mproperty(self.compiler.mainmodule, m) then
				self.add("/* skip, no method {m} */")
				return res
			end
			var propdef = m.lookup_first_definition(self.compiler.mainmodule, mclasstype)
			var res2 = self.call(propdef, mclasstype, args)
			if res != null then self.assign(res, res2.as(not null))
			return res
		end
		var consider_null = not self.compiler.modelbuilder.toolcontext.opt_no_check_null.value or m.name == "==" or m.name == "!="
		if args.first.mcasttype isa MNullableType or args.first.mcasttype isa MNullType and consider_null then
			# The reciever is potentially null, so we have to 3 cases: ==, != or NullPointerException
			self.add("if ({args.first} == NULL) \{ /* Special null case */")
			if m.name == "==" or m.name == "is_same_instance" then
				assert res != null
				if args[1].mcasttype isa MNullableType then
					self.add("{res} = ({args[1]} == NULL);")
				else if args[1].mcasttype isa MNullType then
					self.add("{res} = 1; /* is null */")
				else
					self.add("{res} = 0; /* {args[1].inspect} cannot be null */")
				end
			else if m.name == "!=" then
				assert res != null
				if args[1].mcasttype isa MNullableType then
					self.add("{res} = ({args[1]} != NULL);")
				else if args[1].mcasttype isa MNullType then
					self.add("{res} = 0; /* is null */")
				else
					self.add("{res} = 1; /* {args[1].inspect} cannot be null */")
				end
			else
				self.add_abort("Receiver is null")
			end
			self.add "\} else"
		end
		if types.is_empty then
			self.add("\{")
			self.add("/*BUG: no live types for {args.first.inspect} . {m}*/")
			self.bugtype(args.first)
			self.add("\}")
			return res
		end

		self.add("switch({args.first}->classid) \{")
		var last = types.last
		var defaultpropdef: nullable MMethodDef = null
		for t in types do
			var propdef = m.lookup_first_definition(self.compiler.mainmodule, t)
			if propdef.mclassdef.mclass.name == "Object" and not t.is_c_primitive then
				defaultpropdef = propdef
				continue
			end
			if not self.compiler.hardening and t == last and defaultpropdef == null then
				self.add("default: /* test {t} */")
			else
				self.add("case {self.compiler.classid(t)}: /* test {t} */")
			end
			var res2 = self.call(propdef, t, args)
			if res != null then self.assign(res, res2.as(not null))
			self.add "break;"
		end
		if defaultpropdef != null then
			self.add("default: /* default is Object */")
			var res2 = self.call(defaultpropdef, defaultpropdef.mclassdef.bound_mtype, args)
			if res != null then self.assign(res, res2.as(not null))
		else if self.compiler.hardening then
			self.add("default: /* bug */")
			self.bugtype(args.first)
		end
		self.add("\}")
		return res
	end

	fun check_valid_reciever(recvtype: MClassType)
	do
		if self.compiler.runtime_type_analysis.live_types.has(recvtype) or recvtype.mclass.name == "Object" then return
		print_error "{recvtype} is not a live type"
		abort
	end

	# Subpart of old call function
	#
	# Checks if the type of the receiver is valid and corrects it if necessary
	private fun get_recvtype(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): MClassType
	do
		check_valid_reciever(recvtype)
		return recvtype
	end

	redef fun call(m, recvtype, args)
	do
		var recv_type = get_recvtype(m, recvtype, args)
		var recv = self.autoadapt(self.autobox(args.first, recvtype), recvtype)
		if m.is_extern then recv = unbox_extern(recv, recv_type)

		args = args.to_a
		args.first = recv

		assert args.length == m.msignature.arity + 1 else debug("Invalid arity for {m}. {args.length} arguments given.")

		var rm = new CustomizedRuntimeFunction(m, recvtype)
		return rm.call(self, args)
	end

	redef fun supercall(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		var types = self.collect_types(args.first)

		var res: nullable RuntimeVariable
		var ret = m.mproperty.intro.msignature.return_mtype
		if ret == null then
			res = null
		else
			ret = self.resolve_for(ret, args.first)
			res = self.new_var(ret)
		end

		self.add("/* super {m} on {args.first.inspect} */")
		if args.first.mtype.is_c_primitive then
			var mclasstype = args.first.mtype.as(MClassType)
			if not self.compiler.runtime_type_analysis.live_types.has(mclasstype) then
				self.add("/* skip, no method {m} */")
				return res
			end
			var propdef = m.lookup_next_definition(self.compiler.mainmodule, mclasstype)
			var res2 = self.call(propdef, mclasstype, args)
			if res != null then self.assign(res, res2.as(not null))
			return res
		end

		if types.is_empty then
			self.add("\{")
			self.add("/*BUG: no live types for {args.first.inspect} . {m}*/")
			self.bugtype(args.first)
			self.add("\}")
			return res
		end

		self.add("switch({args.first}->classid) \{")
		var last = types.last
		for t in types do
			var propdef = m.lookup_next_definition(self.compiler.mainmodule, t)
			if not self.compiler.hardening and t == last then
				self.add("default: /* test {t} */")
			else
				self.add("case {self.compiler.classid(t)}: /* test {t} */")
			end
			var res2 = self.call(propdef, t, args)
			if res != null then self.assign(res, res2.as(not null))
			self.add "break;"
		end
		if self.compiler.hardening then
			self.add("default: /* bug */")
			self.bugtype(args.first)
		end
		self.add("\}")
		return res
	end

	redef fun adapt_signature(m, args)
	do
		var recv = args.first
		for i in [0..m.msignature.arity[ do
			var mp = m.msignature.mparameters[i]
			var t = mp.mtype
			if mp.is_vararg then
				t = args[i+1].mtype
			end
			t = self.resolve_for(t, recv)
			args[i+1] = self.autobox(args[i+1], t)
		end
	end

	redef fun unbox_signature_extern(m, args)
	do
		var recv = args.first
		for i in [0..m.msignature.arity[ do
			var mp = m.msignature.mparameters[i]
			var t = mp.mtype
			if mp.is_vararg then
				t = args[i+1].mtype
			end
			t = self.resolve_for(t, recv)
			if m.is_extern then args[i+1] = self.unbox_extern(args[i+1], t)
		end
	end

	# FIXME: this is currently buggy since recv is not exact
	redef fun vararg_instance(mpropdef, recv, varargs, elttype)
	do
		elttype = self.resolve_for(elttype, recv)
		return self.array_instance(varargs, elttype)
	end

	fun bugtype(recv: RuntimeVariable)
	do
		if recv.mtype.is_c_primitive then return
		self.add("PRINT_ERROR(\"BTD BUG: Dynamic type is %s, static type is %s\\n\", class_names[{recv}->classid], \"{recv.mcasttype}\");")
		self.add("fatal_exit(1);")
	end

	redef fun isset_attribute(a, recv)
	do
		check_recv_notnull(recv)

		var types = self.collect_types(recv)
		var res = self.new_var(bool_type)

		if types.is_empty then
			self.add("/*BUG: no live types for {recv.inspect} . {a}*/")
			self.bugtype(recv)
			return res
		end
		self.add("/* isset {a} on {recv.inspect} */")
		self.add("switch({recv}->classid) \{")
		var last = types.last
		for t in types do
			if not self.compiler.hardening and t == last then
				self.add("default: /*{self.compiler.classid(t)}*/")
			else
				self.add("case {self.compiler.classid(t)}:")
			end
			var recv2 = self.autoadapt(recv, t)
			var ta = a.intro.static_mtype.as(not null)
			ta = self.resolve_for(ta, recv2)
			var attr = self.new_expr("((struct {t.c_name}*){recv})->{a.intro.c_name}", ta)
			if not ta isa MNullableType then
				if not ta.is_c_primitive then
					self.add("{res} = ({attr} != NULL);")
				else
					self.add("{res} = 1; /*NOTYET isset on primitive attributes*/")
				end
			end
			self.add("break;")
		end
		if self.compiler.hardening then
			self.add("default: /* Bug */")
			self.bugtype(recv)
		end
		self.add("\}")

		return res
	end

	redef fun read_attribute(a, recv)
	do
		check_recv_notnull(recv)

		var types = self.collect_types(recv)

		var ret = a.intro.static_mtype.as(not null)
		ret = self.resolve_for(ret, recv)
		var res = self.new_var(ret)

		if types.is_empty then
			self.add("/*BUG: no live types for {recv.inspect} . {a}*/")
			self.bugtype(recv)
			return res
		end
		self.add("/* read {a} on {recv.inspect} */")
		self.add("switch({recv}->classid) \{")
		var last = types.last
		for t in types do
			if not self.compiler.hardening and t == last then
				self.add("default: /*{self.compiler.classid(t)}*/")
			else
				self.add("case {self.compiler.classid(t)}:")
			end
			var recv2 = self.autoadapt(recv, t)
			var ta = a.intro.static_mtype.as(not null)
			ta = self.resolve_for(ta, recv2)
			var res2 = self.new_expr("((struct {t.c_name}*){recv})->{a.intro.c_name}", ta)
			if not ta isa MNullableType and not self.compiler.modelbuilder.toolcontext.opt_no_check_attr_isset.value then
				if not ta.is_c_primitive then
					self.add("if ({res2} == NULL) \{")
					self.add_abort("Uninitialized attribute {a.name}")
					self.add("\}")
				else
					self.add("/*NOTYET isset on primitive attributes*/")
				end
			end
			self.assign(res, res2)
			self.add("break;")
		end
		if self.compiler.hardening then
			self.add("default: /* Bug */")
			self.bugtype(recv)
		end
		self.add("\}")

		return res
	end

	redef fun write_attribute(a, recv, value)
	do
		check_recv_notnull(recv)

		var types = self.collect_types(recv)

		if types.is_empty then
			self.add("/*BUG: no live types for {recv.inspect} . {a}*/")
			self.bugtype(recv)
			return
		end
		self.add("/* write {a} on {recv.inspect} */")
		self.add("switch({recv}->classid) \{")
		var last = types.last
		for t in types do
			if not self.compiler.hardening and t == last then
				self.add("default: /*{self.compiler.classid(t)}*/")
			else
				self.add("case {self.compiler.classid(t)}:")
			end
			var recv2 = self.autoadapt(recv, t)
			var ta = a.intro.static_mtype.as(not null)
			ta = self.resolve_for(ta, recv2)
			self.add("((struct {t.c_name}*){recv})->{a.intro.c_name} = {self.autobox(value, ta)};")
			self.add("break;")
		end
		if self.compiler.hardening then
			self.add("default: /* Bug*/")
			self.bugtype(recv)
		end
		self.add("\}")
	end

	redef fun init_instance(mtype)
	do
		mtype = self.anchor(mtype).as(MClassType)
		if not self.compiler.runtime_type_analysis.live_types.has(mtype) then
			debug "problem: {mtype} was detected dead"
		end
		var res = self.new_expr("NEW_{mtype.c_name}()", mtype)
		res.is_exact = true
		return res
	end

	redef fun type_test(value, mtype, tag)
	do
		mtype = self.anchor(mtype)
		if not self.compiler.runtime_type_analysis.live_cast_types.has(mtype) then
			debug "problem: {mtype} was detected cast-dead"
			abort
		end

		var types = self.collect_types(value)
		var res = self.new_var(bool_type)

		self.add("/* isa {mtype} on {value.inspect} */")
		if value.mtype.is_c_primitive then
			if value.mtype.is_subtype(self.compiler.mainmodule, null, mtype) then
				self.add("{res} = 1;")
			else
				self.add("{res} = 0;")
			end
			return res
		end
		if value.mcasttype isa MNullableType or value.mcasttype isa MNullType then
			self.add("if ({value} == NULL) \{")
			if mtype isa MNullableType then
				self.add("{res} = 1; /* isa {mtype} */")
			else
				self.add("{res} = 0; /* not isa {mtype} */")
			end
			self.add("\} else ")
		end
		self.add("switch({value}->classid) \{")
		for t in types do
			if t.is_subtype(self.compiler.mainmodule, null, mtype) then
				self.add("case {self.compiler.classid(t)}: /* {t} */")
			end
		end
		self.add("{res} = 1;")
		self.add("break;")
		self.add("default:")
		self.add("{res} = 0;")
		self.add("\}")

		return res
	end

	redef fun is_same_type_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		if not value2.mtype.is_c_primitive then
			if not value1.mtype.is_c_primitive then
				self.add "{res} = {value1}->classid == {value2}->classid;"
			else
				self.add "{res} = {self.compiler.classid(value1.mtype.as(MClassType))} == {value2}->classid;"
			end
		else
			if not value1.mtype.is_c_primitive then
				self.add "{res} = {value1}->classid == {self.compiler.classid(value2.mtype.as(MClassType))};"
			else if value1.mcasttype == value2.mcasttype then
				self.add "{res} = 1;"
			else
				self.add "{res} = 0;"
			end
		end
		return res
	end

	redef fun class_name_string(value)
	do
		var res = self.get_name("var_class_name")
		self.add_decl("const char* {res};")
		if not value.mtype.is_c_primitive then
			self.add "{res} = class_names[{value}->classid];"
		else
			self.add "{res} = class_names[{self.compiler.classid(value.mtype.as(MClassType))}];"
		end
		return res
	end

	redef fun equal_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		if value2.mtype.is_c_primitive and not value1.mtype.is_c_primitive then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.is_c_primitive then
			if value2.mtype == value1.mtype then
				self.add("{res} = {value1} == {value2};")
			else if value2.mtype.is_c_primitive then
				self.add("{res} = 0; /* incompatible types {value1.mtype} vs. {value2.mtype}*/")
			else
				var mtype1 = value1.mtype.as(MClassType)
				self.add("{res} = ({value2} != NULL) && ({value2}->classid == {self.compiler.classid(mtype1)});")
				self.add("if ({res}) \{")
				self.add("{res} = ({self.autobox(value2, value1.mtype)} == {value1});")
				self.add("\}")
			end
		else
			var s = new Array[String]
			for t in self.compiler.live_primitive_types do
				if not t.is_subtype(self.compiler.mainmodule, null, value1.mcasttype) then continue
				if not t.is_subtype(self.compiler.mainmodule, null, value2.mcasttype) then continue
				s.add "({value1}->classid == {self.compiler.classid(t)} && ((struct {t.c_name}*){value1})->value == ((struct {t.c_name}*){value2})->value)"
			end

			if self.compiler.mainmodule.model.get_mclasses_by_name("Pointer") != null then
				var pointer_type = self.compiler.mainmodule.pointer_type
				if value1.mcasttype.is_subtype(self.compiler.mainmodule, null, pointer_type) or
					value2.mcasttype.is_subtype(self.compiler.mainmodule, null, pointer_type) then
					s.add "(((struct {pointer_type.c_name}*){value1})->value == ((struct {pointer_type.c_name}*){value2})->value)"
				end
			end

			if s.is_empty then
				self.add("{res} = {value1} == {value2};")
			else
				self.add("{res} = {value1} == {value2} || ({value1} != NULL && {value2} != NULL && {value1}->classid == {value2}->classid && ({s.join(" || ")}));")
			end
		end
		return res
	end

	redef fun array_instance(array, elttype)
	do
		elttype = self.anchor(elttype)
		var arraytype = mmodule.array_type(elttype)
		var res = self.init_instance(arraytype)
		self.add("\{ /* {res} = array_instance Array[{elttype}] */")
		var nat = self.new_var(mmodule.native_array_type(elttype))
		nat.is_exact = true
		self.add("{nat} = NEW_{nat.mtype.c_name}({array.length});")
		for i in [0..array.length[ do
			var r = self.autobox(array[i], elttype)
			self.add("((struct {nat.mtype.c_name}*) {nat})->values[{i}] = {r};")
		end
		var length = self.int_instance(array.length)
		self.send(self.get_property("with_native", arraytype), [res, nat, length])
		self.add("\}")
		return res
	end
end

# A runtime function customized on a specific monomorph receiver type
private class CustomizedRuntimeFunction
	super AbstractRuntimeFunction

	redef type COMPILER: GlobalCompiler
	redef type VISITOR: GlobalCompilerVisitor

	# The considered reciever
	# (usually is a live type but no strong guarantee)
	var recv: MClassType

	redef fun build_c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		if self.mmethoddef.mclassdef.bound_mtype == self.recv then
			res = self.mmethoddef.c_name
		else
			res = "{mmethoddef.c_name}__{recv.c_name}"
		end
		self.c_name_cache = res
		return res
	end

	# used in the compiler worklist
	redef fun ==(o)
	do
		if not o isa CustomizedRuntimeFunction then return false
		if self.mmethoddef != o.mmethoddef then return false
		if self.recv != o.recv then return false
		return true
	end

	# used in the compiler work-list
	redef fun hash do return self.mmethoddef.hash + self.recv.hash

	redef fun to_s
	do
		if self.mmethoddef.mclassdef.bound_mtype == self.recv then
			return self.mmethoddef.to_s
		else
			return "{self.mmethoddef}@{self.recv}"
		end
	end

        redef fun recv_mtype
        do
                return recv
        end

        redef var return_mtype

        redef fun resolve_receiver(v)
        do
                var selfvar = new RuntimeVariable("self", recv, recv)
		if v.compiler.runtime_type_analysis.live_types.has(recv) then
			selfvar.is_exact = true
		end
                return selfvar
        end

        redef fun resolve_return_mtype(v)
        do
                var selfvar = v.frame.selfvar
                if has_return then
                        var ret = msignature.return_mtype.as(not null)
                        return_mtype = v.resolve_for(ret, selfvar)
                end
        end
        redef fun resolve_ith_parameter(v, i)
        do
                var selfvar = v.frame.selfvar
                var mp = msignature.mparameters[i]
                var mtype = mp.mtype
                if mp.is_vararg then
                        mtype = v.mmodule.array_type(mtype)
                end
                mtype = v.resolve_for(mtype, selfvar)
                return new RuntimeVariable("p{i}", mtype, mtype)
        end

        redef fun declare_signature(v, sig)
        do
                v.compiler.header.add_decl("{sig};")
        end

        redef fun end_compile_to_c(v)
        do
	        if not self.c_name.has_substring("VIRTUAL", 0) then v.compiler.names[self.c_name] = "{mmethoddef.mclassdef.mmodule.name}::{mmethoddef.mclassdef.mclass.name}::{mmethoddef.mproperty.name} ({mmethoddef.location.file.filename}:{mmethoddef.location.line_start})"
        end

	redef fun call(v: VISITOR, arguments: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		var ret = self.mmethoddef.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, arguments.first)
		end

                # TODO: remove this guard when gcc warning issue (#2781) is resolved
                # WARNING: the next two lines of code is used to prevent inlining.
                # Inlining of a callref seems to work all the time. However,
                # it will produce some deadcode in certain scenarios (when using nullable type).
                #
                # ~~~~nitish
                # class A[E]
                #       fun toto(x: E)
                #       do
                #               # ...do something with x...
                #       end
                # end
                # end
                # var a = new A[nullable Int]
                # var f = &a.toto
                # f.call(null)  # Will produce a proper C callsite, but it will
                #               # produce unreachable (dead code) for type checking
                #               # and covariance. Thus, creating warnings when
                #               # compiling in global. However, if you ignore
                #               # those warnings, the binary works perfectly fine.
                # ~~~~
                var intromclassdef = self.mmethoddef.mproperty.intro_mclassdef
                var is_callref = v.compiler.all_routine_types_name.has(intromclassdef.name)

                if self.mmethoddef.can_inline(v) and not is_callref then
			var frame = new StaticFrame(v, self.mmethoddef, self.recv, arguments)
			frame.returnlabel = v.get_name("RET_LABEL")
			if ret != null then
				frame.returnvar = v.new_var(ret)
			end
			var old_frame = v.frame
			v.frame = frame
			v.add("\{ /* Inline {self} ({arguments.join(",")}) */")
			self.mmethoddef.compile_inside_to_c(v, arguments)
			v.add("{frame.returnlabel.as(not null)}:(void)0;")
			v.add("\}")
			v.frame = old_frame
			return frame.returnvar
		end
		v.adapt_signature(self.mmethoddef, arguments)
		v.compiler.todo(self)
		if ret == null then
			v.add("{self.c_name}({arguments.join(",")});")
			return null
		else
			var res = v.new_var(ret)
			v.add("{res} = {self.c_name}({arguments.join(",")});")
			return res
		end
	end
end

# Thunk implementation for global compiler.
# For more detail see `abstract_compiler::ThunkFunction` documentation.
class CustomizedThunkFunction
        super ThunkFunction
        super CustomizedRuntimeFunction

        redef fun c_name
        do
                return "THUNK_" + super
        end

        redef fun hash
        do
                return super + c_name.hash
        end

        redef fun resolve_receiver(v)
        do
                var res = super(v)
                if res.is_exact then res.is_exact = not polymorph_call_flag
                return res
        end

        redef fun target_recv
        do
                # If the targeted method was introduced by a primitive type,
                # then target_recv must be set to it. Otherwise, there will
                # be a missing cast. Here's an example:
                #
                # ~~~~nitish
                # class Int
                #       fun mult_by(x:Int):Int do return x * self
                # end
                #
                # var f = &10.mult_by
                # ~~~~
                # Here the thunk `f` must box the receiver `10` into an object.
                # This is due to the memory representation of a call ref which
                # has a pointer to an opaque type `val*`:
                #
                # ```C
                # struct Mult_by_callref_struct {
                #       classid;
                #       // The receiver `10` would be here
                #       val* recv;
                #       // the targeted receiver is a `long`
                #       long (*pointer_to_mult_by)(long, long);
                # }
                # ```
                #
                # Thus, every primitive type must be boxed into an `Object` when
                # instantiating a callref.
                #
                # However, if the underlying method was introduced by a primitive
                # type then a cast must be invoked to convert our boxed receiver
                # to its original primitive type.
                var intro_recv = mmethoddef.mproperty.intro_mclassdef.bound_mtype
                if intro_recv.is_c_primitive then
                        return intro_recv
                end
                return recv_mtype
        end
end
