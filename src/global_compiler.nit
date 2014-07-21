# This file is part of NIT ( http://www.nitlanguage.org ).
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

	var global_compiler_phase = new GlobalCompilerPhase(self, null)

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
		compiler.compile_header

		for t in runtime_type_analysis.live_types do
			compiler.declare_runtimeclass(t)
		end

		compiler.compile_class_names

		# Init instance code (allocate and init-arguments)
		for t in runtime_type_analysis.live_types do
			if t.ctype == "val*" then
				compiler.generate_init_instance(t)
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
			self.toolcontext.info("Compile {m} ({compiler.seen.length-compiler.todos.length}/{compiler.seen.length})", 3)
			m.compile_to_c(compiler)
		end
		self.toolcontext.info("Total methods to compile to C: {compiler.seen.length}", 2)

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

	init(mainmodule: MModule, modelbuilder: ModelBuilder, runtime_type_analysis: RapidTypeAnalysis)
	do
		super(mainmodule, modelbuilder)
		var file = new_file("{mainmodule.name}.nitgg")
		self.header = new CodeWriter(file)
		self.runtime_type_analysis = runtime_type_analysis
		self.live_primitive_types = new Array[MClassType]
		for t in runtime_type_analysis.live_types do
			if t.ctype != "val*" then
				self.live_primitive_types.add(t)
			end
		end
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
		print "No classid for {mtype}"
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
	var live_primitive_types: Array[MClassType]

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

		if mtype.ctype != "val*" then
			# Is the Nit type is native then the struct is a box with two fields:
			# * the `classid` to be polymorph
			# * the `value` that contains the native value.
			v.add_decl("{mtype.ctype} value;")
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
		assert mtype.ctype == "val*"
		var v = self.new_visitor

		var is_native_array = mtype.mclass.name == "NativeArray"

		var sig
		if is_native_array then
			sig = "int length"
		else
			sig = "void"
		end

		self.header.add_decl("{mtype.ctype} NEW_{mtype.c_name}({sig});")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{mtype.c_name}({sig}) \{")
		var res = v.new_var(mtype)
		res.is_exact = true
		if is_native_array then
			var mtype_elt = mtype.arguments.first
			v.add("{res} = nit_alloc(sizeof(struct {mtype.c_name}) + length*sizeof({mtype_elt.ctype}));")
			v.add("((struct {mtype.c_name}*){res})->length = length;")
		else
			v.add("{res} = nit_alloc(sizeof(struct {mtype.c_name}));")
		end
		v.add("{res}->classid = {self.classid(mtype)};")

		self.generate_init_attr(v, res, mtype)
		v.add("return {res};")
		v.add("\}")
	end

	fun generate_box_instance(mtype: MClassType)
	do
		assert self.runtime_type_analysis.live_types.has(mtype)
		assert mtype.ctype != "val*"
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
		else if value.mtype.ctype == "val*" and mtype.ctype == "val*" then
			return value
		else if value.mtype.ctype == "val*" then
			return self.new_expr("((struct {mtype.c_name}*){value})->value; /* autounbox from {value.mtype} to {mtype} */", mtype)
		else if mtype.ctype == "val*" then
			var valtype = value.mtype.as(MClassType)
			var res = self.new_var(mtype)
			if not compiler.runtime_type_analysis.live_types.has(valtype) then
				self.add("/*no autobox from {value.mtype} to {mtype}: {value.mtype} is not live! */")
				self.add("PRINT_ERROR(\"Dead code executed!\\n\"); show_backtrace(1);")
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
			self.add("PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"{value.mtype}\", \"{mtype}\"); show_backtrace(1);")
			return res
		end
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
			return
		else if pname == "[]=" then
			self.add("{recv}[{arguments[1]}]={arguments[2]};")
			return
		else if pname == "length" then
			self.ret(self.new_expr("((struct {arguments[0].mcasttype.c_name}*){arguments[0]})->length", ret_type.as(not null)))
			return
		else if pname == "copy_to" then
			var recv1 = "((struct {arguments[1].mcasttype.c_name}*){arguments[1]})->values"
			self.add("memcpy({recv1},{recv},{arguments[2]}*sizeof({elttype.ctype}));")
			return
		end
	end

	redef fun native_array_instance(elttype: MType, length: RuntimeVariable): RuntimeVariable
	do
		var ret_type = self.get_class("NativeArray").get_mtype([elttype])
		return self.new_expr("NEW_{ret_type.c_name}({length})", ret_type)
	end

	redef fun calloc_array(ret_type, arguments)
	do
		self.ret(self.new_expr("NEW_{ret_type.c_name}({arguments[1]})", ret_type))
	end

	redef fun send(m, args)
	do
		var types = self.collect_types(args.first)

		var res: nullable RuntimeVariable
		var ret = m.intro.msignature.return_mtype
		if m.is_new then
			ret = args.first.mtype
			res = self.new_var(ret)
		else if ret == null then
			res = null
		else
			ret = self.resolve_for(ret, args.first)
			res = self.new_var(ret)
		end

		self.add("/* send {m} on {args.first.inspect} */")
		if args.first.mtype.ctype != "val*" then
			var mclasstype = args.first.mtype.as(MClassType)
			if not self.compiler.runtime_type_analysis.live_types.has(mclasstype) then
				self.add("/* skip, no method {m} */")
				return res
			end
			var propdef = m.lookup_first_definition(self.compiler.mainmodule, mclasstype)
			var res2 = self.call(propdef, mclasstype, args)
			if res != null then self.assign(res, res2.as(not null))
			return res
		end
		var consider_null = not self.compiler.modelbuilder.toolcontext.opt_no_check_other.value or m.name == "==" or m.name == "!="
		if args.first.mcasttype isa MNullableType or args.first.mcasttype isa MNullType and consider_null then
			# The reciever is potentially null, so we have to 3 cases: ==, != or NullPointerException
			self.add("if ({args.first} == NULL) \{ /* Special null case */")
			if m.name == "==" then
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
			if propdef.mclassdef.mclass.name == "Object" and t.ctype == "val*" then
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
		print "{recvtype} is not a live type"
		abort
	end

	# Subpart of old call function
	#
	# Checks if the type of the receiver is valid and corrects it if necessary
	private fun get_recvtype(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): MClassType
	do
		check_valid_reciever(recvtype)
		#debug("call {m} on {recvtype} on {args.first}:{args.first.mtype}")
		if m.mclassdef.mclass.name == "Object" and recvtype.ctype == "val*" then
			recvtype = m.mclassdef.bound_mtype
		end
		return recvtype
	end

	# Subpart of old call function
	# Gets the receiver boxed and casted if necessary
	private fun get_recv(recvtype: MClassType, args: Array[RuntimeVariable]): RuntimeVariable
	do
		return self.autoadapt(self.autobox(args.first, recvtype), recvtype)
	end

	# Finalizes a call to a method ´m´ on type ´recvtype´ with arguments ´args´
	private fun finalize_call(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		assert args.length == m.msignature.arity + 1 else debug("Invalid arity for {m}. {args.length} arguments given.")

		var rm = new CustomizedRuntimeFunction(m, recvtype)
		return rm.call(self, args)
	end

	redef fun call(m, recvtype, args)
	do
		var recv_type = get_recvtype(m, recvtype, args)
		var recv = get_recv(recv_type, args)
		var new_args = args.to_a
		self.varargize(m, m.msignature.as(not null), new_args)
		new_args.first = recv
		return finalize_call(m, recv_type, new_args)
	end

	# Does a call without encapsulating varargs into an array
	# Avoids multiple encapsulation when calling a super in a variadic function
	fun call_without_varargize(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		var recv_type = get_recvtype(m, recvtype, args)
		var recv = get_recv(recv_type, args)
		var new_args = args.to_a
		new_args.first = recv
		return finalize_call(m, recv_type, new_args)
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
		if args.first.mtype.ctype != "val*" then
			var mclasstype = args.first.mtype.as(MClassType)
			if not self.compiler.runtime_type_analysis.live_types.has(mclasstype) then
				self.add("/* skip, no method {m} */")
				return res
			end
			var propdef = m.lookup_next_definition(self.compiler.mainmodule, mclasstype)
			var res2 = self.call_without_varargize(propdef, mclasstype, args)
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
			var res2 = self.call_without_varargize(propdef, t, args)
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
			var t = m.msignature.mparameters[i].mtype
			if i == m.msignature.vararg_rank then
				t = args[i+1].mtype
			end
			t = self.resolve_for(t, recv)
			args[i+1] = self.autobox(args[i+1], t)
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
		if recv.mtype.ctype != "val*" then return
		self.add("PRINT_ERROR(\"BTD BUG: Dynamic type is %s, static type is %s\\n\", class_names[{recv}->classid], \"{recv.mcasttype}\");")
		self.add("show_backtrace(1);")
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
				if ta.ctype == "val*" then
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
			if not ta isa MNullableType and not self.compiler.modelbuilder.toolcontext.opt_no_check_other.value then
				if ta.ctype == "val*" then
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
		if value.mtype.ctype != "val*" then
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
		if value2.mtype.ctype == "val*" then
			if value1.mtype.ctype == "val*" then
				self.add "{res} = {value1}->classid == {value2}->classid;"
			else
				self.add "{res} = {self.compiler.classid(value1.mtype.as(MClassType))} == {value2}->classid;"
			end
		else
			if value1.mtype.ctype == "val*" then
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
		if value.mtype.ctype == "val*" then
			self.add "{res} = class_names[{value}->classid];"
		else
			self.add "{res} = class_names[{self.compiler.classid(value.mtype.as(MClassType))}];"
		end
		return res
	end

	redef fun equal_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		if value2.mtype.ctype != "val*" and value1.mtype.ctype == "val*" then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.ctype != "val*" then
			if value2.mtype == value1.mtype then
				self.add("{res} = {value1} == {value2};")
			else if value2.mtype.ctype != "val*" then
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
		var arraytype = self.get_class("Array").get_mtype([elttype])
		var res = self.init_instance(arraytype)
		self.add("\{ /* {res} = array_instance Array[{elttype}] */")
		var nat = self.new_var(self.get_class("NativeArray").get_mtype([elttype]))
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

# A runtime function customized on a specific monomrph receiver type
private class CustomizedRuntimeFunction
	super AbstractRuntimeFunction

	redef type COMPILER: GlobalCompiler
	redef type VISITOR: GlobalCompilerVisitor

	# The considered reciever
	# (usually is a live type but no strong guarantee)
	var recv: MClassType

	init(mmethoddef: MMethodDef, recv: MClassType)
	do
		super(mmethoddef)
		self.recv = recv
	end

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

	# compile the code customized for the reciever
	redef fun compile_to_c(compiler)
	do
		var recv = self.recv
		var mmethoddef = self.mmethoddef
		if not recv.is_subtype(compiler.mainmodule, null, mmethoddef.mclassdef.bound_mtype) then
			print("problem: why do we compile {self} for {recv}?")
			abort
		end

		var v = compiler.new_visitor
		var selfvar = new RuntimeVariable("self", recv, recv)
		if compiler.runtime_type_analysis.live_types.has(recv) then
			selfvar.is_exact = true
		end
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, mmethoddef, recv, arguments)
		v.frame = frame

		var sig = new FlatBuffer
		var comment = new FlatBuffer
		var ret = mmethoddef.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, selfvar)
			sig.append("{ret.ctype} ")
		else if mmethoddef.mproperty.is_new then
			ret = recv
			sig.append("{ret.ctype} ")
		else
			sig.append("void ")
		end
		sig.append(self.c_name)
		sig.append("({recv.ctype} {selfvar}")
		comment.append("(self: {recv}")
		arguments.add(selfvar)
		for i in [0..mmethoddef.msignature.arity[ do
			var mtype = mmethoddef.msignature.mparameters[i].mtype
			if i == mmethoddef.msignature.vararg_rank then
				mtype = v.get_class("Array").get_mtype([mtype])
			end
			mtype = v.resolve_for(mtype, selfvar)
			comment.append(", {mtype}")
			sig.append(", {mtype.ctype} p{i}")
			var argvar = new RuntimeVariable("p{i}", mtype, mtype)
			arguments.add(argvar)
		end
		sig.append(")")
		comment.append(")")
		if ret != null then
			comment.append(": {ret}")
		end
		compiler.header.add_decl("{sig};")

		v.add_decl("/* method {self} for {comment} */")
		v.add_decl("{sig} \{")
		#v.add("printf(\"method {self} for {comment}\\n\");")
		if ret != null then
			frame.returnvar = v.new_var(ret)
		end
		frame.returnlabel = v.get_name("RET_LABEL")

		mmethoddef.compile_inside_to_c(v, arguments)

		v.add("{frame.returnlabel.as(not null)}:;")
		if ret != null then
			v.add("return {frame.returnvar.as(not null)};")
		end
		v.add("\}")
		if not self.c_name.has_substring("VIRTUAL", 0) then compiler.names[self.c_name] = "{mmethoddef.mclassdef.mmodule.name}::{mmethoddef.mclassdef.mclass.name}::{mmethoddef.mproperty.name} ({mmethoddef.location.file.filename}:{mmethoddef.location.line_start})"
	end

	redef fun call(v: VISITOR, arguments: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		var ret = self.mmethoddef.msignature.return_mtype
		if self.mmethoddef.mproperty.is_new then
			ret = recv
		end
		if ret != null then
			ret = v.resolve_for(ret, arguments.first)
		end
		if self.mmethoddef.can_inline(v) then
			var frame = new Frame(v, self.mmethoddef, self.recv, arguments)
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
