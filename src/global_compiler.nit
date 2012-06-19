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

import literal
import typing
import auto_super_init
import rapid_type_analysis

redef class ToolContext
	# --output
	var opt_output: OptionString = new OptionString("Output file", "-o", "--output")

	# --no-cc
	var opt_no_cc: OptionBool = new OptionBool("Do not invoke C compiler", "--no-cc")

	redef init
	do
		super
		self.option_context.add_option(self.opt_output, self.opt_no_cc)
	end
end

redef class ModelBuilder
	fun run_global_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis)
	do
		var time0 = get_time
		self.toolcontext.info("*** COMPILING TO C ***", 1)

		var compiler = new GlobalCompiler(mainmodule, runtime_type_analysis, self)
		var v = new GlobalCompilerVisitor(compiler)

		v.add_decl("#include <stdlib.h>")
		v.add_decl("#include <stdio.h>")
		v.add_decl("#include <string.h>")

		# TODO: Better way to activate the GC
		#v.add_decl("#include <gc/gc.h>")
		v.add_decl("#define GC_MALLOC(x) calloc(1, (x))")

		# Declare structure for each live type

		v.add_decl("typedef struct \{int classid;\} val;")
		for t in runtime_type_analysis.live_types do
			compiler.declare_runtimeclass(v, t)
		end

		v.add_decl("extern int glob_argc;")
		v.add_decl("extern char **glob_argv;")
		v.add_decl("extern val *glob_sys;")

		# Class names (for the class_name and output_class_name methods)

		v.add_decl("extern const char const * class_names[];")
		v.add("const char const * class_names[] = \{")
		for t in runtime_type_analysis.live_types do
			v.add("\"{t}\", /* {compiler.classid(t)} */")
		end
		v.add("\};")
		compiler.header = v

		# Init instance code (allocate and init-arguments)

		for t in runtime_type_analysis.live_types do
			if t.ctype != "val*" then continue
			compiler.generate_init_instance(t)
		end

		# The main function of the C

		v = new GlobalCompilerVisitor(compiler)
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

		# Compile until all runtime_functions are visited

		while not compiler.todos.is_empty do
			var m = compiler.todos.shift
			self.toolcontext.info("Compile {m.mmethoddef} for {m.recv} ({compiler.seen.length-compiler.todos.length}/{compiler.seen.length})", 3)
			m.mmethoddef.compile_to_c(compiler, self, m.recv)
		end
		self.toolcontext.info("Total methods to compile to C: {compiler.visitors.length}", 2)

		# Generate the .h and .c files

		var outname = self.toolcontext.opt_output.value
		if outname == null then
			outname = "{mainmodule.name}.bin"
		end

		var hfilename = ".nit_compile/{mainmodule.name}.1.h"
		var h = new OFStream.open(hfilename)
		for l in compiler.header.decl_lines do
			h.write l
			h.write "\n"
		end
		h.close

		var cfiles = new Array[String]

		var file: nullable OFStream = null
		var count = 0

		".nit_compile".mkdir
		var i = 0
		for vis in compiler.visitors do
			count += vis.lines.length
			if file == null or count > 10000 then
				i += 1
				if file != null then file.close
				var cfilename = ".nit_compile/{mainmodule.name}.{i}.c"
				cfiles.add(cfilename)
				file = new OFStream.open(cfilename)
				file.write "#include \"{mainmodule.name}.1.h\"\n"
				count = vis.lines.length
			end
			if vis != compiler.header then
				for l in vis.decl_lines do
					file.write l
					file.write "\n"
				end
			end
			for l in vis.lines do
				file.write l
				file.write "\n"
			end
		end
		if file != null then file.close

		self.toolcontext.info("Total C source files to compile: {cfiles.length}", 2)

		# Generate the Makefile

		var makename = ".nit_compile/{mainmodule.name}.mk"
		var makefile = new OFStream.open(makename)

		makefile.write("CC = ccache cc\nCFLAGS = -g -O2\nLDFLAGS ?= \nLDLIBS  ?= -lm -lgc\n\n")
		makefile.write("all: {outname}\n\n")

		var ofiles = new Array[String]
		for f in cfiles do
			var o = f.strip_extension(".c") + ".o"
			makefile.write("{o}: {f}\n\t$(CC) $(CFLAGS) -I .nit_compile -I ../clib -c -o {o} {f}\n\n")
			ofiles.add(o)
		end

		makefile.write("{outname}: {ofiles.join(" ")} {compiler.extern_bodies.join(" ")}\n\t$(CC) -Wl,--warn-unresolved-symbols $(CFLAGS) $(LDFLAGS) $(LDLIBS) -I .nit_compile -I ../clib -o {outname} {ofiles.join(" ")} {compiler.extern_bodies.join(" ")}\n\n")
		makefile.close
		self.toolcontext.info("Generated makefile: {makename}", 2)

		var time1 = get_time
		self.toolcontext.info("*** END COMPILING TO C: {time1-time0} ***", 2)

		# Execute the Makefile

		if self.toolcontext.opt_no_cc.value then return

		time0 = time1
		self.toolcontext.info("*** COMPILING C ***", 1)
		self.toolcontext.info("make -f {makename} -j 4", 2)

		var res
		if self.toolcontext.verbose_level >= 3 then
			res = sys.system("make -f {makename} -j 4 2>&1")
		else
			res = sys.system("make -f {makename} -j 4 2>&1 >/dev/null")
		end
		if res != 0 then
			toolcontext.error(null, "make failed! Error code: {res}.")
		end

		time1 = get_time
		self.toolcontext.info("*** END COMPILING C: {time1-time0} ***", 2)
	end
end

# Singleton that store the knowledge about the compilation process
private class GlobalCompiler
	# The main module of the program
	var mainmodule: MModule

	# The result of the RTA (used to know live types and methods)
	var runtime_type_analysis: RapidTypeAnalysis

	# The modeulbuilder used to know the model and the AST
	var modelbuilder: ModelBuilder

	init(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis, modelbuilder: ModelBuilder)
	do
		self.mainmodule = mainmodule
		self.runtime_type_analysis = runtime_type_analysis
		self.modelbuilder = modelbuilder
		self.live_primitive_types = new Array[MClassType]
		for t in runtime_type_analysis.live_types do
			if t.ctype != "val*" then
				self.live_primitive_types.add(t)
			end
		end
	end

	# Subset of runtime_type_analysis.live_types that contains only primitive types
	var live_primitive_types: Array[MClassType]

	# runtime_functions that need to be compiled
	private var todos: List[RuntimeFunction] = new List[RuntimeFunction]

	# runtime_functions already seen (todo or done)
	private var seen: HashSet[RuntimeFunction] = new HashSet[RuntimeFunction]
	fun todo(m: RuntimeFunction)
	do
		if seen.has(m) then return
		todos.add(m)
		seen.add(m)
	end

	# Where global declaration are stored (the main .h)
	#
	# FIXME: should not be a vistor but just somewhere to store lines
	# FIXME: should not have a global .h since its does no helps recompilation
	var header: nullable GlobalCompilerVisitor = null

	# The list of all associated visitors
	# Used to generate .c files
	private var visitors: List[GlobalCompilerVisitor] = new List[GlobalCompilerVisitor]

	# List of additional .c files required to compile (native interface)
	var extern_bodies = new ArraySet[String]

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

	# Cache for classid (computed by declare_runtimeclass)
	private var classids: HashMap[MClassType, String] = new HashMap[MClassType, String]

	# Declare C structures and identifiers for a runtime class
	fun declare_runtimeclass(v: GlobalCompilerVisitor, mtype: MClassType)
	do
		assert self.runtime_type_analysis.live_types.has(mtype)
		v.add_decl("/* runtime class {mtype} */")
		var idnum = classids.length
		var idname = "ID_" + mtype.c_name
		self.classids[mtype] = idname
		v.add_decl("#define {idname} {idnum} /* {mtype} */")
		v.add_decl("struct {mtype.c_name} \{")
		v.add_decl("int classid; /* must be {idname} */")
		if mtype.ctype != "val*" then
			v.add_decl("{mtype.ctype} value;")
		end
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
		var v = new GlobalCompilerVisitor(self)

		self.header.add_decl("{mtype.ctype} NEW_{mtype.c_name}(void);")
		v.add_decl("/* allocate {mtype} */")
		v.add_decl("{mtype.ctype} NEW_{mtype.c_name}(void) \{")
		var res = v.new_var(mtype)
		v.add("{res} = GC_MALLOC(sizeof(struct {mtype.c_name}));")
		v.add("{res}->classid = {self.classid(mtype)};")

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

	# look for a needed .h and .c file for a given .nit source-file
	# FIXME: bad API, parameter should be a MModule, not its source-file
	fun add_extern(file: String)
	do
		file = file.strip_extension(".nit")
		var tryfile = file + ".nit.h"
		if tryfile.file_exists then
			self.header.add_decl("#include \"{"..".join_path(tryfile)}\"")
		end
		tryfile = file + "_nit.h"
		if tryfile.file_exists then
			self.header.add_decl("#include \"{"..".join_path(tryfile)}\"")
		end
		tryfile = file + ".nit.c"
		if tryfile.file_exists then
			self.extern_bodies.add(tryfile)
		end
		tryfile = file + "_nit.c"
		if tryfile.file_exists then
			self.extern_bodies.add(tryfile)
		end
		#(new OFStream.open("{file.basename("")}._nitni.h")).close
	end
end

redef class String
	# Mangle a string to be a unique valid C identifier
	fun to_cmangle: String
	do
		var res = new Buffer
		var underscore = false
		for c in self do
			if (c >= 'a' and c <= 'z') or (c >='A' and c <= 'Z') then
				res.add(c)
				underscore = false
				continue
			end
			if underscore then
				res.append('_'.ascii.to_s)
				res.add('d')
			end
			if c >= '0' and c <= '9' then
				res.add(c)
				underscore = false
			else if c == '_' then
				res.add(c)
				underscore = true
			else
				res.add('_')
				res.append(c.ascii.to_s)
				res.add('d')
				underscore = false
			end
		end
		return res.to_s
	end

	# Escape " \ ' and non printable characters for literal C strings or characters
	fun escape_to_c: String
	do
		var b = new Buffer
		for c in self do
			if c == '\n' then
				b.append("\\n")
			else if c == '\0' then
				b.append("\\0")
			else if c == '"' then
				b.append("\\\"")
			else if c == '\'' then
				b.append("\\\'")
			else if c == '\\' then
				b.append("\\\\")
			else if c.ascii < 32 then
				b.append("\\{c.ascii.to_base(8, false)}")
			else
				b.add(c)
			end
		end
		return b.to_s
	end
end

redef class MType
	# Return the C type associated to a given Nit static type
	fun ctype: String
	do
		return "val*"
	end

	# Return the name of the C structure associated to a Nit live type
	# FIXME: move to GlobalCompiler so we can check that self is a live type
	fun c_name: String is abstract
	private var c_name_cache: nullable String
end

redef class MClassType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "{mclass.intro_mmodule.name.to_cmangle}__{mclass.name.to_cmangle}"
		self.c_name_cache = res
		return res
	end

	redef fun ctype: String
	do
		if mclass.name == "Int" then
			return "long"
		else if mclass.name == "Bool" then
			return "short int"
		else if mclass.name == "Char" then
			return "char"
		else if mclass.name == "Float" then
			return "double"
		else if mclass.name == "NativeString" then
			return "char*"
		else if mclass.name == "NativeArray" then
			assert self isa MGenericType
			return "{self.arguments.first.ctype}*"
		else if mclass.kind == extern_kind then
			return "void*"
		else
			return "val*"
		end
	end
end

redef class MGenericType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = super
		for t in self.arguments do
			res = res + t.c_name
		end
		self.c_name_cache = res
		return res
	end
end

redef class MNullableType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "nullable_{self.mtype.c_name}"
		self.c_name_cache = res
		return res
	end
end

# A C function associated to a Nit method
# Because of customization, a given Nit method can be compiler more that once
private class RuntimeFunction
	# The associated Nit method
	var mmethoddef: MMethodDef

	# The considered reciever
	# (usually is a live type but no strong guarantee)
	var recv: MClassType

	# The mangled c name of the runtime_function
	fun c_name: String
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

	private var c_name_cache: nullable String = null

	redef fun ==(o)
	# used in the compiler worklist
	do
		if not o isa RuntimeFunction then return false
		if self.mmethoddef != o.mmethoddef then return false
		if self.recv != o.recv then return false
		return true
	end

	redef fun hash
	# used in the compiler work-list
	do
		var res = self.mmethoddef.hash + self.recv.hash
		return res
	end

	redef fun to_s
	do
		if self.mmethoddef.mclassdef.bound_mtype == self.recv then
			return self.mmethoddef.to_s
		else
			return "{self.mmethoddef}@{self.recv}"
		end
	end

	# Implements a call of the runtime_function
	# May inline the body
	fun call(v: GlobalCompilerVisitor, arguments: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		var ret = self.mmethoddef.msignature.return_mtype
		if self.mmethoddef.mproperty.is_new then
			ret = arguments.first.mtype
		end
		if ret != null then
			ret = v.resolve_for(ret, arguments.first)
		end
		if self.mmethoddef.can_inline(v) and arguments.first.mtype == self.recv then
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

# A runtime variable hold a runtime value in C
# Runtime variables are associated to local variables and intermediate results
private class RuntimeVariable
	# The name of the variable in the C code
	var name: String

	# The static type of the variable (as declard in C)
	var mtype: MType

	# The current casted type of the variable (as known in Nit)
	var mcasttype: MType

	redef fun to_s do return name

	redef fun inspect do return "<{inspect_head} {name}:{mtype}({mcasttype})>"
end

# Visit the AST to generate the C code.
# Because of inlining, a visitor can visit more than one property.
private class GlobalCompilerVisitor
	# The associated compiler
	var compiler: GlobalCompiler

	init(compiler: GlobalCompiler)
	do
		self.compiler = compiler
		compiler.visitors.add(self)
	end

	# Alias for self.compiler.mainmodule.object_type
	fun object_type: MClassType do return self.compiler.mainmodule.object_type

	# Alias for self.compiler.mainmodule.bool_type
	fun bool_type: MClassType do return self.compiler.mainmodule.bool_type

	# Force to get the primitive class named `name' or abort
	fun get_class(name: String): MClass
	do
		return self.compiler.mainmodule.get_primitive_class(name)
	end

	# Force to get the primitive property named `name' in the instance `recv' or abort
	fun get_property(name: String, recv: MType): MMethod
	do
		return self.compiler.mainmodule.force_get_primitive_method(name, recv)
	end

	# The current Frame
	var frame: nullable Frame

	# Anchor a type to the main module and the current receiver
	fun anchor(mtype: MType): MType
	do
		if not mtype.need_anchor then return mtype
		#debug("anchor {mtype} to {self.reciever.as(not null)}:{self.reciever.mtype}")
		return mtype.anchor_to(self.compiler.mainmodule, self.frame.receiver)
	end

	# Add a line in the main part of the generated C
	fun add(s: String)
	do
		self.lines.add(s)
	end

	# Add a line in the
	# (used for local or global declaration)
	fun add_decl(s: String)
	do
		self.decl_lines.add(s)
	end

	private var lines: List[String] = new List[String]
	private var decl_lines: List[String] = new List[String]

	# The current visited AST node
	var current_node: nullable AExpr = null

	# Compile an expression an return its
	fun expr(nexpr: AExpr, mtype: nullable MType): RuntimeVariable
	do
		var old = self.current_node
		self.current_node = nexpr
		var res = nexpr.expr(self).as(not null)
		if mtype != null then
			mtype = self.anchor(mtype)
			res = self.autobox(res, mtype)
		end
		self.current_node = old
		return res
	end

	# Unsafely cast a value to a new type
	# ENSURE: return.name == value.name
	fun autoadapt(value: RuntimeVariable, mtype: MType): RuntimeVariable
	do
		mtype = self.anchor(mtype)
		if value.mtype.is_subtype(self.compiler.mainmodule, null, mtype) then
			return value
		end

		var valmtype = value.mtype
		if valmtype isa MNullableType and valmtype.mtype.is_subtype(self.compiler.mainmodule, null, mtype) then
			var res = new RuntimeVariable(value.name, value.mtype, valmtype.mtype)
			return res
		else
			var res = new RuntimeVariable(value.name, value.mtype, mtype)
			return res
		end
	end

	# Box or unbox a value to another type iff a C type conversion is needed
	# ENSURE: result.mtype.ctype == mtype.ctype
	fun autobox(value: RuntimeVariable, mtype: MType): RuntimeVariable
	do
		if value.mtype.ctype == mtype.ctype then
			return value
		else if value.mtype.ctype == "val*" then
			return self.new_expr("((struct {mtype.c_name}*){value})->value /* autounbox from {value.mtype} to {mtype} */", mtype)
		else if mtype.ctype == "val*" then
			var valtype = value.mtype.as(MClassType)
			var res = self.new_var(mtype)
			if not compiler.runtime_type_analysis.live_types.has(valtype) then
				self.add("/*no autobox from {value.mtype} to {mtype}: {value.mtype} is not live! */")
				self.add("printf(\"Dead code executed!\\n\"); exit(1);")
				return res
			end
			self.add("{res} = GC_MALLOC(sizeof(struct {valtype.c_name})); /* autobox from {value.mtype} to {mtype} */")
			self.add("{res}->classid = {self.compiler.classid(valtype)};")
			self.add("((struct {valtype.c_name}*){res})->value = {value};")
			return res
		else
			# Bad things will append!
			var res = self.new_var(mtype)
			self.add("/* {res} left unintialized (cannot convert {value.mtype} to {mtype}) */")
			self.add("printf(\"Cast error: Cannot cast %s to %s.\\n\", \"{value.mtype}\", \"{mtype}\"); exit(1);")
			return res
		end
	end

	# Correctly assign a left and a right value
	# Boxing and unboxing is performed if required
	fun assign(left, right: RuntimeVariable)
	do
		right = self.autobox(right, left.mtype)
		self.add("{left} = {right};")
	end


	# Alias for `self.expr(nexpr, self.bool_type)'
	fun expr_bool(nexpr: AExpr): RuntimeVariable
	do
		return expr(nexpr, bool_type)
	end

	# Compile statement
	fun stmt(nexpr: nullable AExpr)
	do
		if nexpr == null then return
		var old = self.current_node
		self.current_node = nexpr
		nexpr.stmt(self)
		self.current_node = old
	end

	# Safely show a debug message on the current node and repeat the message in the C code
	fun debug(message: String)
	do
		var node = self.current_node
		if node == null then
			print "?: {message}"
		else
			node.debug(message)
		end
		self.add("/* DEBUG: {message} */")
	end

	# Return a new uninitialized local runtime_variable
	fun new_var(mtype: MType): RuntimeVariable
	do
		if mtype isa MNullType then
			mtype = self.object_type
		else
			mtype = self.anchor(mtype)
		end
		var name = self.get_name("var")
		var res = new RuntimeVariable(name, mtype, mtype)
		self.add_decl("{mtype.ctype} {name} /* : {mtype} */;")
		return res
	end

	# Return a new local runtime_variable initialized with the C expression `cexpr'.
	fun new_expr(cexpr: String, mtype: MType): RuntimeVariable
	do
		var res = new_var(mtype)
		self.add("{res} = {cexpr};")
		return res
	end

	# Return the local runtime_variable associated to a Nit local variable
	fun variable(variable: Variable): RuntimeVariable
	do
		if self.variables.has_key(variable) then
			return self.variables[variable]
		else
			var name = self.get_name("var_{variable.name}")
			var mtype = variable.declared_type.as(not null)
			mtype = self.anchor(mtype)
			var res = new RuntimeVariable(name, mtype, mtype)
			self.add_decl("{mtype.ctype} {name} /* var {variable}: {mtype} */;")
			self.variables[variable] = res
			return res
		end
	end

	private var variables: HashMap[Variable, RuntimeVariable] = new HashMap[Variable, RuntimeVariable]

	# Return a new name based on `s' and unique in the visitor
	fun get_name(s: String): String
	do
		if not self.names.has(s) then
			self.names.add(s)
			return s
		end
		var i = self.last + 1
		loop
			var s2 = s + i.to_s
			if not self.names.has(s2) then
				self.last = i
				self.names.add(s2)
				return s2
			end
			i = i + 1
		end
	end

	private var last: Int = 0

	private var names: HashSet[String] = new HashSet[String]

	# Generate a return with the value `s'
	fun ret(s: RuntimeVariable)
	do
		self.assign(self.frame.returnvar.as(not null), s)
		self.add("goto {self.frame.returnlabel.as(not null)};")
	end

	# The runtime types that are acceptable for a given receiver.
	fun collect_types(recv: RuntimeVariable): Array[MClassType]
	do
		var mtype = recv.mcasttype
		var cache = self.collect_types_cache
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

	private var collect_types_cache: HashMap[MType, Array[MClassType]] = new HashMap[MType, Array[MClassType]]

	fun resolve_for(mtype: MType, recv: RuntimeVariable): MType
	do
		if not mtype.need_anchor then return mtype
		#debug("resolve for {mtype} to {recv}:{recv.mcasttype}(declared as {recv.mtype}) (in {self.reciever.to_s}:{self.reciever.mtype})")
		var res = mtype.resolve_for(recv.mcasttype, self.frame.receiver, self.compiler.mainmodule, true)
		return res
	end

	# Generate a polymorphic send for the method `m' and the arguments `args'
	fun send(m: MMethod, args: Array[RuntimeVariable]): nullable RuntimeVariable
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

		if types.is_empty then
			self.add("/*BUG: no live types for {args.first.mtype} . {m}*/")
			return res
		end
		self.add("/* send {m} on {args.first}: {args.first.mcasttype} (declared {args.first.mtype}) */")
		if args.first.mtype.ctype != "val*" then
			var propdefs = m.lookup_definitions(self.compiler.mainmodule, args.first.mtype)
			if propdefs.length == 0 then
				self.add("/* skip {args.first.mcasttype}, no method {m} */")
				return res
			end
			assert propdefs.length == 1
			var propdef = propdefs.first
			var res2 = self.call(propdef, args.first.mtype.as(MClassType), args)
			if res != null then self.assign(res, res2.as(not null))
			return res
		end
		if args.first.mcasttype isa MNullableType then
			self.add("if ({args.first} == NULL) \{ /* Special null case */")
			if m.name == "==" then
				assert res != null
				if args[1].mcasttype.ctype == "val*" then
					self.add("{res} = ({args[1]} == NULL);")
				else
					self.add("{res} = 0; /* {args[1]}: {args[1].mcasttype}  cannot be null */")
				end
			else if m.name == "!=" then
				assert res != null
				if args[1].mcasttype.ctype == "val*" then
					self.add("{res} = ({args[1]} != NULL);")
				else
					self.add("{res} = 1; /* {args[1]}: {args[1].mcasttype} cannot be null */")
				end
			else
				self.add_abort("Reciever is null")
			end
			self.add "\} else"
		end
		self.add("switch({args.first}->classid) \{")
		var defaultpropdef: nullable MMethodDef = null
		for t in types do
			var propdefs = m.lookup_definitions(self.compiler.mainmodule, t)
			if propdefs.length == 0 then
				self.add("/* skip {t}, no method {m} */")
				continue
			end
			var propdef = propdefs.first
			if propdef.mclassdef.mclass.name == "Object" and t.ctype == "val*" then
				defaultpropdef = propdef
				continue
			end
			self.add("case {self.compiler.classid(t)}: /* test {t} */")
			var res2 = self.call(propdef, t, args)
			if res != null then self.assign(res, res2.as(not null))
			self.add "break;"
		end
		if defaultpropdef != null then
			self.add("default: /* default is Object */")
			var res2 = self.call(defaultpropdef, defaultpropdef.mclassdef.bound_mtype, args)
			if res != null then self.assign(res, res2.as(not null))
		else
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

	fun call(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		check_valid_reciever(recvtype)
		#debug("call {m} on {recvtype} on {args.first}:{args.first.mtype}")
		if m.mclassdef.mclass.name == "Object" and recvtype.ctype == "val*" then
			recvtype = m.mclassdef.bound_mtype
		end
		var recv = self.autobox(args.first, recvtype)
		recv = self.autoadapt(recv, recvtype)

		var vararg_rank = m.msignature.vararg_rank
		if vararg_rank >= 0 then
			assert args.length >= m.msignature.arity + 1 # because of self
			var rawargs = args
			args = new Array[RuntimeVariable]

			args.add(rawargs.first) # recv

			for i in [0..vararg_rank[ do
				args.add(rawargs[i+1])
			end

			var vararg_lastrank = vararg_rank + rawargs.length-1-m.msignature.arity
			var vararg = new Array[RuntimeVariable]
			for i in [vararg_rank..vararg_lastrank] do
				vararg.add(rawargs[i+1])
			end
			# FIXME: its it to late to determine the vararg type, this should have been done during a previous analysis
			var elttype = m.msignature.parameter_mtypes[vararg_rank]
			elttype = self.resolve_for(elttype, recv)
			args.add(self.array_instance(vararg, elttype))

			for i in [vararg_lastrank+1..rawargs.length-1[ do
				args.add(rawargs[i+1])
			end
		else
			args = args.to_a
		end
		assert args.length == m.msignature.arity + 1 # because of self

		args.first = recv
		self.adapt_signature(m, args)
		var rm = new RuntimeFunction(m, recvtype)
		return rm.call(self, args)
	end

	fun adapt_signature(m: MMethodDef, args: Array[RuntimeVariable])
	do
		var recv = args.first
		for i in [0..m.msignature.arity[ do
			var t = m.msignature.parameter_mtypes[i]
			if i == m.msignature.vararg_rank then
				t = args[i+1].mtype
			end
			t = self.resolve_for(t, recv)
			args[i+1] = self.autobox(args[i+1], t)
		end
	end

	fun bugtype(recv: RuntimeVariable)
	do
		if recv.mtype.ctype != "val*" then return
		self.add("fprintf(stderr, \"BTD BUG: Dynamic type is %s, static type is %s\\n\", class_names[{recv}->classid], \"{recv.mcasttype}\");")
	end

	# Generate a polymorphic attribute read
	fun read_attribute(a: MAttribute, recv: RuntimeVariable): RuntimeVariable
	do
		var types = self.collect_types(recv)

		var ret = a.intro.static_mtype.as(not null)
		ret = self.resolve_for(ret, recv)
		var res = self.new_var(ret)

		if types.is_empty then
			self.add("/*BUG: no live types for {recv.mtype} . {a}*/")
			return res
		end
		self.add("/* read {a} on {recv.mcasttype} */")
		self.add("switch({recv}->classid) \{")
		for t in types do
			self.add("case {self.compiler.classid(t)}:")
			var recv2 = self.autoadapt(recv, t)
			var ta = a.intro.static_mtype.as(not null)
			ta = self.resolve_for(ta, recv2)
			var res2 = self.new_expr("((struct {t.c_name}*){recv})->{a.intro.c_name}", ta)
			if not ta isa MNullableType then
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
		self.add("default: /* Bug */")
		self.bugtype(recv)
		self.add("\}")

		return res
	end

	# Generate a polymorphic attribute write
	fun write_attribute(a: MAttribute, recv: RuntimeVariable, value: RuntimeVariable)
	do
		var types = self.collect_types(recv)

		if types.is_empty then
			self.add("/*BUG: no live types for {recv.mtype} . {a}*/")
			return
		end
		self.add("/* write {a} on {recv.mcasttype} */")
		self.add("switch({recv}->classid) \{")
		for t in types do
			self.add("case {self.compiler.classid(t)}:")
			var recv2 = self.autoadapt(recv, t)
			var ta = a.intro.static_mtype.as(not null)
			ta = self.resolve_for(ta, recv2)
			self.add("((struct {t.c_name}*){recv})->{a.intro.c_name} = {self.autobox(value, ta)};")
			self.add("break;")
		end
		self.add("default: /* Bug*/")
		self.bugtype(recv)
		self.add("\}")
	end

	# Generate a alloc-instance + init-attributes
	fun init_instance(mtype: MClassType): RuntimeVariable
	do
		mtype = self.anchor(mtype).as(MClassType)
		if not self.compiler.runtime_type_analysis.live_types.has(mtype) then
			debug "problem: {mtype} was detected dead"
		end
		var res = self.new_expr("NEW_{mtype.c_name}()", mtype)
		return res
	end

	# Generate a polymorphic subtype test
	fun type_test(value: RuntimeVariable, mtype: MType): RuntimeVariable
	do
		mtype = self.anchor(mtype)
		var types = self.collect_types(value)

		var res = self.new_var(bool_type)

		self.add("/* isa {mtype} on {value.mcasttype} */")
		if value.mcasttype isa MNullableType then
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

	# Generate a Nit "is" for two runtime_variables
	fun equal_test(value1, value2: RuntimeVariable): RuntimeVariable
	do
		var res = self.new_var(bool_type)
		if value2.mtype.ctype != "val*" and value1.mtype.ctype == "val*" then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.ctype != "val*" then
			if value2.mtype.ctype == value1.mtype.ctype then
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

	# Generate a check-init-instance
	# TODO: is an empty stub currently
	fun check_init_instance(recv: RuntimeVariable)
	do
	end

	# Generate an integer value
	fun int_instance(value: Int): RuntimeVariable
	do
		var res = self.new_var(self.get_class("Int").mclass_type)
		self.add("{res} = {value};")
		return res
	end

	# Generate an array value
	fun array_instance(array: Array[RuntimeVariable], elttype: MType): RuntimeVariable
	do
		elttype = self.anchor(elttype)
		var res = self.init_instance(self.get_class("Array").get_mtype([elttype]))
		self.add("\{ /* {res} = array_instance Array[{elttype}] */")
		var nat = self.new_var(self.get_class("NativeArray").get_mtype([elttype]))
		self.add("{nat} = GC_MALLOC({array.length} * sizeof({elttype.ctype}));")
		for i in [0..array.length[ do
			var r = self.autobox(array[i], elttype)
			self.add("{nat}[{i}] = {r};")
		end
		var length = self.int_instance(array.length)
		self.send(self.get_property("with_native", res.mtype), [res, nat, length])
		self.check_init_instance(res)
		self.add("\}")
		return res
	end

	# Generate a string value
	fun string_instance(string: String): RuntimeVariable
	do
		var nat = self.new_var(self.get_class("NativeString").mclass_type)
		self.add("{nat} = \"{string.escape_to_c}\";")
		var res = self.init_instance(self.get_class("String").mclass_type)
		var length = self.int_instance(string.length)
		self.send(self.get_property("with_native", res.mtype), [res, nat, length])
		self.check_init_instance(res)
		return res
	end

	# Generate generic abort
	# used by aborts, asserts, casts, etc.
	fun add_abort(message: String)
	do
		if self.current_node != null and self.current_node.location.file != null then
			self.add("fprintf(stderr, \"%s (%s:%d)\\n\", \"{message.escape_to_c}\", \"{self.current_node.location.file.filename.escape_to_c}\", {current_node.location.line_start});")
		else
			self.add("fprintf(stderr, \"%s\\n\", \"{message.escape_to_c}\");")
		end
		self.add("exit(1);")
	end
end

# A frame correspond to a visited property in a GlobalCompilerVisitor
private class Frame
	# The associated visitor

	var visitor: GlobalCompilerVisitor

	# The executed property.
	# A Method in case of a call, an attribute in case of a default initialization.
	var mpropdef: MPropDef

	# The static type of the receiver
	var receiver: MClassType

	# Arguments of the method (the first is the receiver)
	var arguments: Array[RuntimeVariable]

	# The runtime_variable associated to the return (in a function)
	var returnvar: nullable RuntimeVariable = null

	# The label at the end of the property
	var returnlabel: nullable String = null
end

redef class MPropDef
	private var c_name_cache: nullable String

	# The mangled name associated to the property
	fun c_name: String
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "{self.mclassdef.mmodule.name.to_cmangle}__{self.mclassdef.mclass.name.to_cmangle}__{self.mproperty.name.to_cmangle}"
		self.c_name_cache = res
		return res
	end
end

redef class MMethodDef
	# Can the body be inlined?
	private fun can_inline(v: GlobalCompilerVisitor): Bool
	do
		var modelbuilder = v.compiler.modelbuilder
		if modelbuilder.mpropdef2npropdef.has_key(self) then
			var npropdef = modelbuilder.mpropdef2npropdef[self]
			return npropdef.can_inline
		else if self.mproperty.name == "init" then
			return false
		else
			abort
		end
	end

	# Inline the body in another visitor
	private fun compile_inside_to_c(v: GlobalCompilerVisitor, arguments: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		var modelbuilder = v.compiler.modelbuilder
		if modelbuilder.mpropdef2npropdef.has_key(self) then
			var npropdef = modelbuilder.mpropdef2npropdef[self]
			npropdef.compile_to_c(v, self, arguments)
		else if self.mproperty.name == "init" then
			var nclassdef = modelbuilder.mclassdef2nclassdef[self.mclassdef]
			nclassdef.compile_to_c(v, self, arguments)
		else
			abort
		end
		return null
	end

	# Compile the body in a new visitor
	private fun compile_to_c(compiler: GlobalCompiler, modelbuilder: ModelBuilder, recv: MClassType)
	do
		if not recv.is_subtype(compiler.mainmodule, null, self.mclassdef.bound_mtype) then
			print("problem: why do we compile {self} for {recv}?")
			abort
		end

		var v = new GlobalCompilerVisitor(compiler)
		var selfvar = new RuntimeVariable("self", recv, recv)
		var arguments = new Array[RuntimeVariable]
		var frame = new Frame(v, self, recv, arguments)
		v.frame = frame

		var sig = new Buffer
		var comment = new Buffer
		var ret = self.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, selfvar)
			sig.append("{ret.ctype} ")
		else if self.mproperty.is_new then
			ret = recv
			sig.append("{ret.ctype} ")
		else
			sig.append("void ")
		end
		sig.append(self.c_name)
		if recv != self.mclassdef.bound_mtype then
			sig.append("__{recv.c_name}")
		end
		sig.append("({recv.ctype} self")
		comment.append("(self: {recv}")
		arguments.add(selfvar)
		for i in [0..self.msignature.arity[ do
			var mtype = self.msignature.parameter_mtypes[i]
			if i == self.msignature.vararg_rank then
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

		if modelbuilder.mpropdef2npropdef.has_key(self) then
			var npropdef = modelbuilder.mpropdef2npropdef[self]
			npropdef.compile_to_c(v, self, arguments)
		else if self.mproperty.name == "init" then
			var nclassdef = modelbuilder.mclassdef2nclassdef[self.mclassdef]
			nclassdef.compile_to_c(v, self, arguments)
		else
			abort
		end

		v.add("{frame.returnlabel.as(not null)}:;")
		if ret != null then
			v.add("return {frame.returnvar.as(not null)};")
		end
		v.add("\}")
	end
end

redef class APropdef
	private fun compile_to_c(v: GlobalCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable])
	do
		v.add("printf(\"Not implemented {class_name} {mpropdef} at {location.to_s}\\n\");")
		debug("Not yet implemented")
	end

	private fun can_inline: Bool do return true
end

redef class AConcreteMethPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		for i in [0..mpropdef.msignature.arity[ do
			var variable = self.n_signature.n_params[i].variable.as(not null)
			v.assign(v.variable(variable), arguments[i+1])
		end
		# Call the implicit super-init
		var auto_super_inits = self.auto_super_inits
		if auto_super_inits != null then
			var selfarg = [arguments.first]
			for auto_super_init in auto_super_inits do
				if auto_super_init.intro.msignature.arity == 0 then
					v.send(auto_super_init, selfarg)
				else
					v.send(auto_super_init, arguments)
				end
			end
		end

		v.stmt(self.n_block)
	end

	redef fun can_inline
	do
		if self.auto_super_inits != null then return false
		var nblock = self.n_block
		if nblock == null then return true
		#if nblock isa ABlockExpr and nblock.n_expr.length == 1 then return true
		return false
	end
end

redef class AInternMethPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		var pname = mpropdef.mproperty.name
		var cname = mpropdef.mclassdef.mclass.name
		var ret = mpropdef.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, arguments.first)
		end
		if cname == "Int" then
			if pname == "output" then
				v.add("printf(\"%ld\\n\", {arguments.first});")
				return
			else if pname == "object_id" then
				v.ret(arguments.first)
				return
			else if pname == "+" then
				v.ret(v.new_expr("{arguments[0]} + {arguments[1]}", ret.as(not null)))
				return
			else if pname == "-" then
				v.ret(v.new_expr("{arguments[0]} - {arguments[1]}", ret.as(not null)))
				return
			else if pname == "unary -" then
				v.ret(v.new_expr("-{arguments[0]}", ret.as(not null)))
				return
			else if pname == "succ" then
				v.ret(v.new_expr("{arguments[0]}+1", ret.as(not null)))
				return
			else if pname == "prec" then
				v.ret(v.new_expr("{arguments[0]}-1", ret.as(not null)))
				return
			else if pname == "*" then
				v.ret(v.new_expr("{arguments[0]} * {arguments[1]}", ret.as(not null)))
				return
			else if pname == "/" then
				v.ret(v.new_expr("{arguments[0]} / {arguments[1]}", ret.as(not null)))
				return
			else if pname == "%" then
				v.ret(v.new_expr("{arguments[0]} % {arguments[1]}", ret.as(not null)))
				return
			else if pname == "lshift" then
				v.ret(v.new_expr("{arguments[0]} << {arguments[1]}", ret.as(not null)))
				return
			else if pname == "rshift" then
				v.ret(v.new_expr("{arguments[0]} >> {arguments[1]}", ret.as(not null)))
				return
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return
			else if pname == "<" then
				v.ret(v.new_expr("{arguments[0]} < {arguments[1]}", ret.as(not null)))
				return
			else if pname == ">" then
				v.ret(v.new_expr("{arguments[0]} > {arguments[1]}", ret.as(not null)))
				return
			else if pname == "<=" then
				v.ret(v.new_expr("{arguments[0]} <= {arguments[1]}", ret.as(not null)))
				return
			else if pname == ">=" then
				v.ret(v.new_expr("{arguments[0]} >= {arguments[1]}", ret.as(not null)))
				return
			else if pname == "to_f" then
				v.ret(v.new_expr("(double){arguments[0]}", ret.as(not null)))
				return
			else if pname == "ascii" then
				v.ret(v.new_expr("{arguments[0]}", ret.as(not null)))
				return
			end
		else if cname == "Char" then
			if pname == "output" then
				v.add("printf(\"%c\", {arguments.first});")
				return
			else if pname == "object_id" then
				v.ret(arguments.first)
				return
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return
			else if pname == "succ" then
				v.ret(v.new_expr("{arguments[0]}+1", ret.as(not null)))
				return
			else if pname == "prec" then
				v.ret(v.new_expr("{arguments[0]}-1", ret.as(not null)))
				return
			else if pname == "<" then
				v.ret(v.new_expr("{arguments[0]} < {arguments[1]}", ret.as(not null)))
				return
			else if pname == ">" then
				v.ret(v.new_expr("{arguments[0]} > {arguments[1]}", ret.as(not null)))
				return
			else if pname == "<=" then
				v.ret(v.new_expr("{arguments[0]} <= {arguments[1]}", ret.as(not null)))
				return
			else if pname == ">=" then
				v.ret(v.new_expr("{arguments[0]} >= {arguments[1]}", ret.as(not null)))
				return
			else if pname == "to_i" then
				v.ret(v.new_expr("{arguments[0]}-'0'", ret.as(not null)))
				return
			else if pname == "ascii" then
				v.ret(v.new_expr("(unsigned char){arguments[0]}", ret.as(not null)))
				return
			end
		else if cname == "Bool" then
			if pname == "output" then
				v.add("printf({arguments.first}?\"true\\n\":\"false\\n\");")
				return
			else if pname == "object_id" then
				v.ret(arguments.first)
				return
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return
			end
		else if cname == "Float" then
			if pname == "output" then
				v.add("printf(\"%f\\n\", {arguments.first});")
				return
			else if pname == "object_id" then
				v.ret(v.new_expr("(double){arguments.first}", ret.as(not null)))
				return
			else if pname == "+" then
				v.ret(v.new_expr("{arguments[0]} + {arguments[1]}", ret.as(not null)))
				return
			else if pname == "-" then
				v.ret(v.new_expr("{arguments[0]} - {arguments[1]}", ret.as(not null)))
				return
			else if pname == "unary -" then
				v.ret(v.new_expr("-{arguments[0]}", ret.as(not null)))
				return
			else if pname == "succ" then
				v.ret(v.new_expr("{arguments[0]}+1", ret.as(not null)))
				return
			else if pname == "prec" then
				v.ret(v.new_expr("{arguments[0]}-1", ret.as(not null)))
				return
			else if pname == "*" then
				v.ret(v.new_expr("{arguments[0]} * {arguments[1]}", ret.as(not null)))
				return
			else if pname == "/" then
				v.ret(v.new_expr("{arguments[0]} / {arguments[1]}", ret.as(not null)))
				return
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return
			else if pname == "<" then
				v.ret(v.new_expr("{arguments[0]} < {arguments[1]}", ret.as(not null)))
				return
			else if pname == ">" then
				v.ret(v.new_expr("{arguments[0]} > {arguments[1]}", ret.as(not null)))
				return
			else if pname == "<=" then
				v.ret(v.new_expr("{arguments[0]} <= {arguments[1]}", ret.as(not null)))
				return
			else if pname == ">=" then
				v.ret(v.new_expr("{arguments[0]} >= {arguments[1]}", ret.as(not null)))
				return
			else if pname == "to_i" then
				v.ret(v.new_expr("(long){arguments[0]}", ret.as(not null)))
				return
			end
		else if cname == "Char" then
			if pname == "output" then
				v.add("printf(\"%c\", {arguments.first});")
				return
			else if pname == "object_id" then
				v.ret(arguments.first)
				return
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return
			else if pname == "ascii" then
				v.ret(v.new_expr("{arguments[0]}", ret.as(not null)))
				return
			end
		else if cname == "NativeString" then
			if pname == "[]" then
				v.ret(v.new_expr("{arguments[0]}[{arguments[1]}]", ret.as(not null)))
				return
			else if pname == "[]=" then
				v.add("{arguments[0]}[{arguments[1]}]={arguments[2]};")
				return
			else if pname == "copy_to" then
				v.add("memcpy({arguments[1]}+{arguments[4]},{arguments[0]}+{arguments[3]},{arguments[2]});")
				return
			else if pname == "atoi" then
				v.ret(v.new_expr("atoi({arguments[0]});", ret.as(not null)))
				return
			end
		else if cname == "NativeArray" then
			var elttype = arguments.first.mtype
			if pname == "[]" then
				v.ret(v.new_expr("{arguments[0]}[{arguments[1]}]", ret.as(not null)))
				return
			else if pname == "[]=" then
				v.add("{arguments[0]}[{arguments[1]}]={arguments[2]};")
				return
			else if pname == "copy_to" then
				v.add("memcpy({arguments[1]},{arguments[0]},{arguments[2]}*sizeof({elttype.ctype}));")
				return
			end
		end
		if pname == "exit" then
			v.add("exit({arguments[1]});")
			return
		else if pname == "sys" then
			v.ret(v.new_expr("glob_sys", ret.as(not null)))
			return
		else if pname == "calloc_string" then
			v.ret(v.new_expr("(char*)GC_MALLOC({arguments[1]})", ret.as(not null)))
			return
		else if pname == "calloc_array" then
			var elttype = arguments.first.mtype.supertype_to(v.compiler.mainmodule,arguments.first.mtype.as(MClassType),v.get_class("ArrayCapable")).as(MGenericType).arguments.first
			v.ret(v.new_expr("({elttype.ctype}*)GC_MALLOC({arguments[1]} * sizeof({elttype.ctype}))", ret.as(not null)))
			return
		else if pname == "object_id" then
			v.ret(v.new_expr("(long){arguments.first}", ret.as(not null)))
			return
		else if pname == "is_same_type" then
			if arguments[0].mtype.ctype == "val*" then
				v.ret(v.new_expr("{arguments[0]}->classid == {arguments[1]}->classid", ret.as(not null)))
			else
				v.ret(v.new_expr("{v.compiler.classid(arguments[0].mtype.as(MClassType))} == {arguments[1]}->classid", ret.as(not null)))
			end
			return
		else if pname == "output_class_name" then
			if arguments[0].mtype.ctype == "val*" then
				v.add("printf(\"%s\\n\", class_names[{arguments.first}->classid]);")
			else
				v.add("printf(\"%s\\n\", class_names[{v.compiler.classid(arguments.first.mtype.as(MClassType))}]);")
			end
			return
		else if pname == "native_class_name" then
			if arguments[0].mtype.ctype == "val*" then
				v.ret(v.new_expr("(char*)(void*)class_names[{arguments.first}->classid]", ret.as(not null)))
			else
				v.ret(v.new_expr("(char*)(void*)class_names[{v.compiler.classid(arguments.first.mtype.as(MClassType))}]", ret.as(not null)))
			end
			return
		end
		v.add("printf(\"Not implemented {class_name}:{mpropdef} at {location.to_s}\\n\");")
		debug("Not implemented {mpropdef}")
	end
end

redef class AExternMethPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		var externname
		var nextern = self.n_extern
		if nextern == null then
			debug("{mpropdef} need extern name")
			return
		end
		externname = nextern.text.substring(1, nextern.text.length-2)
		if location.file != null then
			var file = location.file.filename
			v.compiler.add_extern(file)
		end
		var res: nullable RuntimeVariable = null
		var ret = mpropdef.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, arguments.first)
			res = v.new_var(ret)
		end

		if res == null then
			v.add("{externname}({arguments.join(", ")});")
		else
			v.add("{res} = {externname}({arguments.join(", ")});")
			v.ret(res)
		end
	end
end

redef class AExternInitPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		var externname
		var nextern = self.n_extern
		if nextern == null then
			debug("{mpropdef} need extern name")
			return
		end
		externname = nextern.text.substring(1, nextern.text.length-2)
		if location.file != null then
			var file = location.file.filename
			v.compiler.add_extern(file)
		end
		var ret = arguments.first.mtype
		var res = v.new_var(ret)

		arguments.shift

		v.add("{res} = {externname}({arguments.join(", ")});")
		v.ret(res)
	end
end

redef class AAttrPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		if arguments.length == 1 then
			var res = v.read_attribute(self.mpropdef.mproperty, arguments.first)
			v.assign(v.frame.returnvar.as(not null), res)
		else
			v.write_attribute(self.mpropdef.mproperty, arguments.first, arguments[1])
		end
	end

	private fun init_expr(v: GlobalCompilerVisitor, recv: RuntimeVariable)
	do
		var nexpr = self.n_expr
		if nexpr != null then
			var old_frame = v.frame
			var frame = new Frame(v, self.mpropdef.as(not null), recv.mtype.as(MClassType), [recv])
			v.frame = frame
			var value = v.expr(nexpr, self.mpropdef.static_mtype)
			v.write_attribute(self.mpropdef.mproperty, recv, value)
			v.frame = old_frame
		end
	end
end

redef class AClassdef
	private fun compile_to_c(v: GlobalCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable])
	do
		if mpropdef == self.mfree_init then
			var super_inits = self.super_inits
			if super_inits != null then
				assert arguments.length == 1
				for su in super_inits do
					v.send(su, arguments)
				end
				return
			end
			var recv = arguments.first
			var i = 1
			# Collect undefined attributes
			for npropdef in self.n_propdefs do
				if npropdef isa AAttrPropdef and npropdef.n_expr == null then
					v.write_attribute(npropdef.mpropdef.mproperty, recv, arguments[i])
					i += 1
				end
			end
		else
			abort
		end
	end
end

redef class AExpr
	# Try to compile self as an expression
	# Do not call this method directly, use `v.expr' instead
	private fun expr(v: GlobalCompilerVisitor): nullable RuntimeVariable
	do
		debug("Unimplemented expr {class_name}")
		v.add("printf(\"Not implemented {class_name}:{location.to_s}\\n\");")
		var mtype = self.mtype
		if mtype == null then
			return null
		else
			var res = v.new_var(mtype)
			v.add("/* {res} = NOT YET {class_name} */")
			return res
		end
	end

	# Try to compile self as a statement
	# Do not call this method directly, use `v.stmt' instead
	private fun stmt(v: GlobalCompilerVisitor)
	do
		var res = expr(v)
		if res != null then v.add("{res};")
	end

end

redef class ABlockExpr
	redef fun stmt(v)
	do
		for e in self.n_expr do
			v.stmt(e)
		end
	end
end

redef class AVardeclExpr
	redef fun stmt(v)
	do
		var variable = self.variable.as(not null)
		var ne = self.n_expr
		if ne != null then
			var i = v.expr(ne, variable.declared_type)
			v.assign(v.variable(variable), i)
		end
	end
end

redef class AVarExpr
	redef fun expr(v)
	do
		var res = v.variable(self.variable.as(not null))
		var mtype = self.mtype.as(not null)
		return v.autoadapt(res, mtype)
	end
end

redef class AVarAssignExpr
	redef fun stmt(v)
	do
		var variable = self.variable.as(not null)
		var i = v.expr(self.n_value, variable.declared_type)
		v.assign(v.variable(variable), i)
	end
end

redef class AVarReassignExpr
	redef fun stmt(v)
	do
		var variable = self.variable.as(not null)
		var vari = v.variable(variable)
		var value = v.expr(self.n_value, variable.declared_type)
		var res = v.send(reassign_property.mproperty, [vari, value])
		assert res != null
		v.assign(v.variable(variable), res)
	end
end

redef class ASelfExpr
	redef fun expr(v)
	do
		return v.frame.arguments.first
	end
end

redef class AContinueExpr
	redef fun stmt(v)
	do
		v.add("goto CONTINUE_{self.escapemark.object_id};")
	end
end

redef class ABreakExpr
	redef fun stmt(v)
	do
		v.add("goto BREAK_{self.escapemark.object_id};")
	end
end

redef class AReturnExpr
	redef fun stmt(v)
	do
		var nexpr = self.n_expr
		if nexpr != null then
			var returnvar = v.frame.returnvar.as(not null)
			var i = v.expr(nexpr, returnvar.mtype)
			v.assign(returnvar, i)
		end
		v.add("goto {v.frame.returnlabel.as(not null)};")
	end
end

redef class AAbortExpr
	redef fun stmt(v)
	do
		v.add_abort("Aborted")
	end
end

redef class AIfExpr
	redef fun stmt(v)
	do
		var cond = v.expr_bool(self.n_expr)
		v.add("if ({cond})\{")
		v.stmt(self.n_then)
		v.add("\} else \{")
		v.stmt(self.n_else)
		v.add("\}")
	end
end

redef class AIfexprExpr
	redef fun expr(v)
	do
		var res = v.new_var(self.mtype.as(not null))
		var cond = v.expr_bool(self.n_expr)
		v.add("if ({cond})\{")
		v.assign(res, v.expr(self.n_then, null))
		v.add("\} else \{")
		v.assign(res, v.expr(self.n_else, null))
		v.add("\}")
		return res
	end
end

redef class ADoExpr
	redef fun stmt(v)
	do
		v.stmt(self.n_block)
		var escapemark = self.escapemark
		if escapemark != null then
			v.add("BREAK_{escapemark.object_id}: (void)0;")
		end
	end
end

redef class AWhileExpr
	redef fun stmt(v)
	do
		v.add("for(;;) \{")
		var cond = v.expr_bool(self.n_expr)
		v.add("if (!{cond}) break;")
		v.stmt(self.n_block)
		v.add("CONTINUE_{escapemark.object_id}: (void)0;")
		v.add("\}")
		v.add("BREAK_{escapemark.object_id}: (void)0;")
	end
end

redef class ALoopExpr
	redef fun stmt(v)
	do
		v.add("for(;;) \{")
		v.stmt(self.n_block)
		v.add("CONTINUE_{escapemark.object_id}: (void)0;")
		v.add("\}")
		v.add("BREAK_{escapemark.object_id}: (void)0;")
	end
end

redef class AForExpr
	redef fun stmt(v)
	do
		var cl = v.expr(self.n_expr, null)
		var it = v.send(v.get_property("iterator", cl.mtype), [cl])
		assert it != null
		v.add("for(;;) \{")
		var ok = v.send(v.get_property("is_ok", it.mtype), [it])
		assert ok != null
		v.add("if(!{ok}) break;")
		var i = v.send(v.get_property("item", it.mtype), [it])
		assert i != null
		v.assign(v.variable(variables.first), i)
		v.stmt(self.n_block)
		v.add("CONTINUE_{escapemark.object_id}: (void)0;")
		v.send(v.get_property("next", it.mtype), [it])
		v.add("\}")
		v.add("BREAK_{escapemark.object_id}: (void)0;")
	end
end

redef class AAssertExpr
	redef fun stmt(v)
	do
		var cond = v.expr_bool(self.n_expr)
		v.add("if (!{cond}) \{")
		v.stmt(self.n_else)
		var nid = self.n_id
		if nid != null then
			v.add_abort("Assert '{nid.text}' failed")
		else
			v.add_abort("Assert failed")
		end
		v.add("\}")
	end
end

redef class AOrExpr
	redef fun expr(v)
	do
		var res = v.new_var(self.mtype.as(not null))
		var i1 = v.expr_bool(self.n_expr)
		v.add("if ({i1}) \{")
		v.add("{res} = 1;")
		v.add("\} else \{")
		var i2 = v.expr_bool(self.n_expr2)
		v.add("{res} = {i2};")
		v.add("\}")
		return res
	end
end

redef class AAndExpr
	redef fun expr(v)
	do
		var res = v.new_var(self.mtype.as(not null))
		var i1 = v.expr_bool(self.n_expr)
		v.add("if (!{i1}) \{")
		v.add("{res} = 0;")
		v.add("\} else \{")
		var i2 = v.expr_bool(self.n_expr2)
		v.add("{res} = {i2};")
		v.add("\}")
		return res
	end
end

redef class ANotExpr
	redef fun expr(v)
	do
		var cond = v.expr_bool(self.n_expr)
		return v.new_expr("!{cond}", self.mtype.as(not null))
	end
end

redef class AOrElseExpr
	redef fun expr(v)
	do
		var res = v.new_var(self.mtype.as(not null))
		var i1 = v.expr(self.n_expr, null)
		v.add("if ({i1}!=NULL) \{")
		v.assign(res, i1)
		v.add("\} else \{")
		var i2 = v.expr(self.n_expr2, null)
		v.assign(res, i2)
		v.add("\}")
		return res
	end
end

redef class AEeExpr
	redef fun expr(v)
	do
		var value1 = v.expr(self.n_expr, null)
		var value2 = v.expr(self.n_expr2, null)
		return v.equal_test(value1, value2)
	end
end

redef class AIntExpr
	redef fun expr(v)
	do
		return v.new_expr("{self.n_number.text}", self.mtype.as(not null))
	end
end

redef class AFloatExpr
	redef fun expr(v)
	do
		return v.new_expr("{self.n_float.text}", self.mtype.as(not null))
	end
end

redef class ACharExpr
	redef fun expr(v)
	do
		return v.new_expr("{self.n_char.text}", self.mtype.as(not null))
	end
end

redef class AArrayExpr
	redef fun expr(v)
	do
		var mtype = self.mtype.as(MGenericType).arguments.first
		var array = new Array[RuntimeVariable]
		for nexpr in self.n_exprs.n_exprs do
			var i = v.expr(nexpr, mtype)
			array.add(i)
		end
		return v.array_instance(array, mtype)
	end
end

redef class AStringFormExpr
	redef fun expr(v)
	do
		return v.string_instance(self.value.as(not null))
	end
end

redef class ASuperstringExpr
	redef fun expr(v)
	do
		var array = new Array[RuntimeVariable]
		for ne in self.n_exprs do
			var i = v.expr(ne, null)
			array.add(i)
		end
		var a = v.array_instance(array, v.object_type)
		var res = v.send(v.get_property("to_s", a.mtype), [a])
		return res
	end
end

redef class ACrangeExpr
	redef fun expr(v)
	do
		var i1 = v.expr(self.n_expr, null)
		var i2 = v.expr(self.n_expr2, null)
		var res = v.init_instance(self.mtype.as(MClassType))
		var it = v.send(v.get_property("init", res.mtype), [res, i1, i2])
		v.check_init_instance(res)
		return res
	end
end

redef class AOrangeExpr
	redef fun expr(v)
	do
		var i1 = v.expr(self.n_expr, null)
		var i2 = v.expr(self.n_expr2, null)
		var res = v.init_instance(self.mtype.as(MClassType))
		var it = v.send(v.get_property("without_last", res.mtype), [res, i1, i2])
		v.check_init_instance(res)
		return res
	end
end

redef class ATrueExpr
	redef fun expr(v)
	do
		return v.new_expr("1", self.mtype.as(not null))
	end
end

redef class AFalseExpr
	redef fun expr(v)
	do
		return v.new_expr("0", self.mtype.as(not null))
	end
end

redef class ANullExpr
	redef fun expr(v)
	do
		var res = v.new_expr("NULL", self.mtype.as(not null))
		return res
	end
end

redef class AIsaExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr, null)
		return v.type_test(i, self.cast_type.as(not null))
	end
end

redef class AAsCastExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr, null)
		var cond = v.type_test(i, self.mtype.as(not null))
		v.add("if (!{cond}) \{")
		v.add_abort("Cast failed")
		v.add("\}")
		return i
	end
end

redef class AAsNotnullExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr, null)
		v.add("if ({i} == NULL) \{")
		v.add_abort("Cast failed")
		v.add("\}")
		return i
	end
end

redef class AParExpr
	redef fun expr(v)
	do
		return v.expr(self.n_expr, null)
	end
end

redef class AOnceExpr
	redef fun expr(v)
	do
		var mtype = self.mtype.as(not null)
		var name = v.get_name("varonce")
		var guard = v.get_name(name + "_guard")
		v.add_decl("static {mtype.ctype} {name};")
		v.add_decl("static int {guard};")
		var res = v.new_var(mtype)
		v.add("if ({guard}) \{")
		v.add("{res} = {name};")
		v.add("\} else \{")
		var i = v.expr(self.n_expr, mtype)
		v.add("{res} = {i};")
		v.add("{name} = {res};")
		v.add("{guard} = 1;")
		v.add("\}")
		return res
	end
end

redef class ASendExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr, null)
		var args = [recv]
		for a in compute_raw_arguments do
			args.add(v.expr(a, null))
		end
		var mproperty = self.mproperty.as(not null)
		return v.send(mproperty, args)
	end
end

redef class ASendReassignFormExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr, null)
		var args = [recv]
		for a in compute_raw_arguments do
			args.add(v.expr(a, null))
		end
		var value = v.expr(self.n_value, null)

		var mproperty = self.mproperty.as(not null)
		var left = v.send(mproperty, args)
		assert left != null

		var res = v.send(reassign_property.mproperty, [left, value])
		assert res != null

		args.add(res)
		v.send(self.write_mproperty.as(not null), args)
	end
end

redef class ASuperExpr
	redef fun expr(v)
	do
		var recv = v.frame.arguments.first
		var args = [recv]
		for a in self.n_args.n_exprs do
			args.add(v.expr(a, null))
		end
		if args.length == 1 then
			args = v.frame.arguments
		end

		var mproperty = self.mproperty
		if mproperty != null then
			if mproperty.intro.msignature.arity == 0 then
				args = [recv]
			end
			# Super init call
			var res = v.send(mproperty, args)
			return res
		end

		# stantard call-next-method
		var mpropdef = v.frame.mpropdef
		# FIXME: we do not want an ugly static call!
		var mpropdefs = mpropdef.mproperty.lookup_super_definitions(mpropdef.mclassdef.mmodule, mpropdef.mclassdef.bound_mtype)
		if mpropdefs.length != 1 then
			debug("MPRODFEFS for super {mpropdef} for {recv}: {mpropdefs.join(", ")}")
		end
		mpropdef = mpropdefs.first
		assert mpropdef isa MMethodDef
		var res = v.call(mpropdef, recv.mtype.as(MClassType), args)
		return res
	end
end

redef class ANewExpr
	redef fun expr(v)
	do
		var mproperty = self.mproperty.as(not null)
		var mtype = self.mtype.as(MClassType)
		var recv
		var ctype = mtype.ctype
		if ctype == "val*" then
			recv = v.init_instance(mtype)
		else if ctype == "void*" then
			recv = v.new_expr("NULL/*special!*/", mtype)
		else
			debug("cannot new {mtype}")
			abort
		end
		var args = [recv]
		for a in self.n_args.n_exprs do
			args.add(v.expr(a, null))
		end
		var res2 = v.send(mproperty, args)
		if res2 != null then
			#self.debug("got {res2} from {mproperty}. drop {recv}")
			return res2
		end
		v.check_init_instance(recv)
		return recv
	end
end

redef class AAttrExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr, null)
		var mproperty = self.mproperty.as(not null)
		return v.read_attribute(mproperty, recv)
	end
end

redef class AAttrAssignExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr, null)
		var i = v.expr(self.n_value, null)
		var mproperty = self.mproperty.as(not null)
		v.write_attribute(mproperty, recv, i)
	end
end

redef class AAttrReassignExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr, null)
		var value = v.expr(self.n_value, null)
		var mproperty = self.mproperty.as(not null)
		var attr = v.read_attribute(mproperty, recv)
		var res = v.send(reassign_property.mproperty, [attr, value])
		assert res != null
		v.write_attribute(mproperty, recv, res)
	end
end

redef class AIssetAttrExpr
end

redef class ADebugTypeExpr
	redef fun stmt(v)
	do
		# do nothing
	end
end
