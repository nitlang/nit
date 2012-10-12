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

# Separate compilation of a Nit program
module separate_compiler

intrude import global_vft_computation # TODO better separation of concerns

redef class ToolContext
	# --separate
	var opt_separate: OptionBool = new OptionBool("Use separate compilation", "--separate")

	redef init
	do
		super
		self.option_context.add_option(self.opt_separate)
	end
end

redef class ModelBuilder
	redef fun run_global_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		# Hijack the run_global_compiler to run the separate one if requested.
		if self.toolcontext.opt_separate.value then
			build_vft(mainmodule)
			run_separate_compiler(mainmodule, runtime_type_analysis)
		else
			super
		end
	end

	fun run_separate_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var compiler = new SeparateCompiler(mainmodule, runtime_type_analysis, self)
		var v = new SeparateCompilerVisitor(compiler)
		compiler.header = v
		v.add_decl("#include <stdlib.h>")
		v.add_decl("#include <stdio.h>")
		v.add_decl("#include <string.h>")

		v.add_decl("typedef struct \{ void (**vft)(void); \} val; /* general C type representing a Nit instance. */")

		# The main function of the C

		v = new SeparateCompilerVisitor(compiler)
		v.add_decl("int glob_argc;")
		v.add_decl("char **glob_argv;")
		v.add_decl("val *glob_sys;")
		v.add_decl("int main(int argc, char** argv) \{")
		v.add("glob_argc = argc; glob_argv = argv;")
		var main_type = mainmodule.sys_type
		if main_type == null then return # Nothing to compile
		var glob_sys = v.init_instance(main_type)
		v.add("glob_sys = {glob_sys};")
		var main_init = mainmodule.try_get_primitive_method("init", main_type)
		if main_init != null then
			v.send(main_init, [glob_sys])
		end
		var main_method = mainmodule.try_get_primitive_method("main", main_type)
		if main_method != null then
			v.send(main_method, [glob_sys])
		end
		v.add("\}")


		for m in mainmodule.in_importation.greaters do
			compiler.compile_module_to_c(m)
			for mclass in m.intro_mclasses do
				compiler.compile_class_to_c(mclass)
			end
		end

		write_and_make(compiler)
	end
end

# Singleton that store the knowledge about the separate compilation process
class SeparateCompiler
	super GlobalCompiler # TODO better separation of concerns

	# Separately compile all the method definitions of the module
	fun compile_module_to_c(mmodule: MModule)
	do
		for cd in mmodule.mclassdefs do
			for pd in cd.mpropdefs do
				if not pd isa MMethodDef then continue
				print "compile {pd} @ {cd} @ {mmodule}"
				var r = new SeparateRuntimeFunction(pd)
				r.compile_to_c(self)
			end
		end
	end

	# Globally compile the table of the class mclass
	# In a link-time optimisation compiler, tables are globally computed
	# In a true separate compiler (a with dynamic loading) you cannot do this unfortnally
	fun compile_class_to_c(mclass: MClass)
	do
		var mtype = mclass.mclassdefs.first.bound_mtype
		var c_name = mclass.name

		var v = new SeparateCompilerVisitor(self)

		v.add_decl("/* runtime class {mtype} */")
		var idnum = classids.length
		var idname = "ID_" + c_name
		self.classids[mtype] = idname
		v.add_decl("#define {idname} {idnum} /* {mtype} */")

		v.add_decl("struct {c_name} \{")
		v.add_decl("void (**vft)(void); /* must be ??? */")

		if mtype.ctype != "val*" then
			# Is the Nit type is native then the struct is a box with two fields:
			# * the `vft` to be polymorph
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

		if mtype.ctype != "val*" then return

		self.header.add_decl("{mtype.ctype} NEW_{c_name}(void);")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{c_name}(void) \{")
		var res = v.new_var(mtype)
		res.is_exact = true
		v.add("{res} = calloc(sizeof(struct {c_name}), 1);")
		v.add("{res}->vft = NULL;") #TODO

		for cd in mtype.collect_mclassdefs(self.mainmodule)
		do
			var n = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in n.n_propdefs do
				if npropdef isa AAttrPropdef then
					npropdef.init_expr(v, res)
				end
			end
		end
		v.add("return {res};")
		v.add("\}")
	end
end

# The C function associated to a methoddef separately compiled
class SeparateRuntimeFunction
	super RuntimeFunction

	# The mangled c name of the runtime_function
	redef fun c_name: String
	do
		var res = self.c_name_cache
		if res != null then return res
		res = mmethoddef.c_name
		self.c_name_cache = res
		return res
	end

	private var c_name_cache: nullable String = null

	redef fun to_s do return self.mmethoddef.to_s

	redef fun compile_to_c(compiler)
	do
		var mmethoddef = self.mmethoddef

		var recv = self.mmethoddef.mclassdef.bound_mtype
		var v = new SeparateCompilerVisitor(compiler)
		var selfvar = new RuntimeVariable("self", recv, recv)
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, mmethoddef, recv, arguments)
		v.frame = frame

		var sig = new Buffer
		var comment = new Buffer
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
		sig.append("({recv.ctype} self")
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
		if ret != null then
			frame.returnvar = v.new_var(ret)
		end
		frame.returnlabel = v.get_name("RET_LABEL")

		if recv != arguments.first.mtype then
			print "{self} {recv} {arguments.first}"
		end
		mmethoddef.compile_inside_to_c(v, arguments)

		v.add("{frame.returnlabel.as(not null)}:;")
		if ret != null then
			v.add("return {frame.returnvar.as(not null)};")
		end
		v.add("\}")
	end

	redef fun call(v, arguments)
	do
		abort
		# TODO ?
	end
end

# A visitor on the AST of property definition that generate the C code of a separate compilation process.
class SeparateCompilerVisitor
	super GlobalCompilerVisitor # TODO better separation of concerns

	redef fun autobox(value, mtype)
	do
		# TODO?
		return value
	end

	redef fun send(mmethod, arguments)
	do
		if arguments.first.mtype.ctype != "val*" then
			assert arguments.first.mtype == arguments.first.mcasttype
			return self.monomorphic_send(mmethod, arguments.first.mtype, arguments)
		end


		var res: nullable RuntimeVariable
		var ret = mmethod.intro.msignature.return_mtype
		if mmethod.is_new then
			ret = arguments.first.mtype
			res = self.new_var(ret)
		else if ret == null then
			res = null
		else
			ret = self.resolve_for(ret, arguments.first)
			res = self.new_var(ret)
		end

		var s = new Buffer
		var ss = new Buffer
		for a in arguments do
			if a != arguments.first then
				s.append(", ")
				ss.append(", ")
			end
			s.append("{a.mtype.ctype}")
			ss.append("{a}")
		end

		var color = 1 # TODO
		var r
		if ret == null then r = "void" else r = ret.ctype
		var call = "(({r} (*)({s}))({arguments.first}->vft[{color}]))({ss})"

		if res != null then
			self.add("{res} = {call};")
		else
			self.add("{call};")
		end

		return res
	end

	redef fun call(mmethoddef, recvtype, arguments)
	do
		var res: nullable RuntimeVariable
		var ret = mmethoddef.msignature.return_mtype
		if mmethoddef.mproperty.is_new then
			ret = arguments.first.mtype
			res = self.new_var(ret)
		else if ret == null then
			res = null
		else
			ret = self.resolve_for(ret, arguments.first)
			res = self.new_var(ret)
		end

		if res == null then
			self.add("{mmethoddef.c_name}({arguments.join(",")});")
			return null
		else
			self.add("{res} = {mmethoddef.c_name}({arguments.join(",")});")
		end

		return res
	end

	redef fun read_attribute(a, recv)
	do
		var ret = a.intro.static_mtype.as(not null)
		ret = self.resolve_for(ret, recv)
		var res = self.new_var(ret)
		# TODO
		return res
	end

	redef fun write_attribute(a, recv, value)
	do
		# TODO
	end

	redef fun init_instance(mtype)
	do
		mtype = self.anchor(mtype).as(MClassType)
		var res = self.new_expr("NEW_{mtype.mclass.name}()", mtype)
		return res
	end

	redef fun type_test(value, mtype)
	do
		var res = self.new_var(bool_type)
		# TODO
		return res
	end

	redef fun equal_test(value1, value2)
	do
		var res = self.new_var(bool_type)
		# TODO
		return res
	end
end

