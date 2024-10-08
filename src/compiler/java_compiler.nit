# This file is part of NIT ( https://nitlanguage.org ).
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

# Compile Nit code to Java code
#
# 3 runtime structures are used to represent Nit instance in Java generated code:
# * `RTClass` to represent a class, it's super-type table and its VFT
# * `RTMethod` to reprensent a compiled method definition
# * `RTVal` to reprensent a Nit instance, the null value or a native value
#
# More details are given in the documentation of these 3 classes.
#
# TODO Factorize with `abstract_compiler`
module java_compiler

import rapid_type_analysis
import transform
import frontend

redef class ToolContext

	# Where to output the generated binary
	var opt_output = new OptionString("Output file", "-o", "--output")

	# Where to output tmp files
	var opt_compile_dir = new OptionString("Directory used to generate temporary files", "--compile-dir")

	# Compile using ant instead of make (faster, but no error display)
	var opt_ant = new OptionBool("Batch with ant (faster, but no error display)", "--ant")

	redef init do
		super
		option_context.add_option(opt_output, opt_compile_dir, opt_ant)
	end
end

redef class ModelBuilder

	# Start the Java compiler
	fun run_java_compiler(mainmodule: MModule, runtime_type_analysis: RapidTypeAnalysis) do
		var time0 = get_time
		toolcontext.info("*** GENERATING JAVA ***", 1)

		var compiler = new JavaCompiler(mainmodule, self, runtime_type_analysis)
		compiler.do_compilation

		var time1 = get_time
		toolcontext.info("*** END GENERATING JAVA: {time1-time0} ***", 2)
		write_and_make(compiler)
	end

	# Write Java code and compile it into an executable jar
	fun write_and_make(compiler: JavaCompiler) do
		var time0 = get_time
		toolcontext.info("*** WRITING JAVA ***", 1)

		compiler.compile_dir.mkdir

		var jfiles = write_java_files(compiler)

		var time1 = get_time
		toolcontext.info("*** END WRITING JAVA: {time1-time0} ***", 2)

		time0 = time1
		toolcontext.info("*** COMPILING JAVA ***", 1)

		if toolcontext.opt_ant.value then
			build_with_ant(compiler, jfiles)
		else
			build_with_make(compiler, jfiles)
		end
		write_shell_script(compiler)

		time1 = get_time
		toolcontext.info("*** END COMPILING JAVA: {time1-time0} ***", 2)
	end

	# Write files managed by `compiler` into concrete files
	fun write_java_files(compiler: JavaCompiler): Array[String] do
		var jfiles = new Array[String]
		for f in compiler.files do
			var filepath = "{compiler.compile_dir}/{f.filename}"
			var file = cache_file(filepath)
			for line in f.lines do file.write(line)
			close_cache(filepath, file)
			jfiles.add(f.filename)
		end
		return jfiles
	end

	# Cache a file as `{filepath}.tmp` and replace the original if different
	private fun cache_file(filepath: String): FileWriter do
		if toolcontext.opt_ant.value and filepath.file_exists then
			return new FileWriter.open("{filepath}.tmp")
		else
			return new FileWriter.open(filepath)
		end
	end

	# Close the writer and move tmp file to original if modified
	private fun close_cache(filepath: String, file: FileWriter) do
		file.close
		if "{filepath}.tmp".file_exists then
			sys.system("if ! diff {filepath}.tmp {filepath} > /dev/null; then mv {filepath}.tmp {filepath}; else rm {filepath}.tmp; fi")
		end
	end

	# Compile Java generated files using `make`
	fun build_with_make(compiler: JavaCompiler, jfiles: Array[String]) do
		write_manifest(compiler)
		write_makefile(compiler, jfiles)
		var compile_dir = compiler.compile_dir
		var outname = compiler.outname.to_path.filename
		toolcontext.info("make -N -C {compile_dir} -f {outname}.mk", 2)
		var res
		if toolcontext.verbose_level >= 3 then
			res = sys.system("make -B -C {compile_dir} -f {outname}.mk 2>&1")
		else
			res = sys.system("make -B -C {compile_dir} -f {outname}.mk 2>&1 > /dev/null")
		end
		if res != 0 then toolcontext.error(null, "make failed! Error code: {res}.")
	end

	# Compile Java sources using `ant`
	fun build_with_ant(compiler: JavaCompiler, jfiles: Array[String]) do
		compile_antfile(compiler, jfiles)
		var outname = compiler.outname.to_path.filename
		var antpath = "{compiler.compile_dir}/{outname}.xml"
		self.toolcontext.info("ant jar -f {antpath}", 2)
		var res
		if self.toolcontext.verbose_level >= 3 then
			res = sys.system("ant jar -f {antpath} 2>&1")
		else
			res = sys.system("ant jar -f {antpath} 2>&1 > /dev/null")
		end
		if res != 0 then
			toolcontext.error(null, "ant compile failed! Error code: {res}.")
		end
	end

	# Write the Makefile used to compile Java generated files into an executable jar
	fun write_makefile(compiler: JavaCompiler, jfiles: Array[String]) do
		# list class files from jfiles
		var ofiles = new List[String]
		for f in jfiles do ofiles.add(f.strip_extension(".java") + ".class")

		var compile_dir = compiler.compile_dir
		var outname = compiler.outname.to_path.filename
		var outpath = (sys.getcwd / compiler.outname).simplify_path
		var makename = "{compile_dir}/{outname}.mk"
		var makefile = new FileWriter.open(makename)

		makefile.write("JC = javac\n")
		makefile.write("JAR = jar\n\n")

		makefile.write("all: {outpath}.jar\n\n")

		makefile.write("{outpath}.jar: {compiler.mainmodule.jname}_Main.class\n")
		makefile.write("\t$(JAR) cfm {outpath}.jar {outname}.mf {ofiles.join(" ")}\n\n")

		makefile.write("{compiler.mainmodule.jname}_Main.class:\n")
		makefile.write("\t$(JC) {jfiles.join(" ")}\n\n")

		makefile.write("clean:\n")
		makefile.write("\trm {ofiles.join(" ")} 2>/dev/null\n\n")

		makefile.close
		toolcontext.info("Generated makefile: {makename}", 2)
	end

	# The Ant `build.xml` script used to compile build the final jar
	fun compile_antfile(compiler: JavaCompiler, jfiles: Array[String]) do
		var compile_dir = compiler.compile_dir
		var outname = compiler.outname.to_path.filename
		var outpath = (sys.getcwd / compiler.outname).simplify_path
		var antname = "{compile_dir}/{outname}.xml"
		var antfile = new FileWriter.open(antname)
		var jname = compiler.mainmodule.jname
		antfile.write("<project>")
		antfile.write(" <target name=\"compile\">")
		antfile.write("  <mkdir dir=\"classes\"/>")
		antfile.write("  <javac includes=\"{compiler.mainmodule.jname}_Main.java {jfiles.join(" ")}\" srcdir=\".\" destdir=\"classes\"/>")
		antfile.write(" </target>")
		antfile.write(" <target name=\"jar\" depends=\"compile\">")
		antfile.write("  <jar destfile=\"{outpath}.jar\" basedir=\"classes\">")
		antfile.write("   <manifest>")
		antfile.write("    <attribute name=\"Main-Class\" value=\"{jname}_Main\"/>")
		antfile.write("   </manifest>")
		antfile.write("  </jar>")
		antfile.write(" </target>")
		antfile.write("</project>")
		antfile.close
		toolcontext.info("Generated antfile: {antname}", 2)
	end

	# Write the Java manifest file
	private fun write_manifest(compiler: JavaCompiler) do
		var compile_dir = compiler.compile_dir
		var outname = compiler.outname.to_path.filename
		var maniffile = new FileWriter.open("{compile_dir}/{outname}.mf")
		maniffile.write("Manifest-Version: 1.0\n")
		maniffile.write("Main-Class: {compiler.mainmodule.jname}_Main\n")
		maniffile.close
	end

	# Write a simple bash script that runs the jar like it was a binary generated by nitc
	private fun write_shell_script(compiler: JavaCompiler) do
		var outname = compiler.outname
		var shfile = new FileWriter.open(outname)
		shfile.write("#!/bin/bash\n")
		shfile.write("java -jar {outname}.jar \"$@\"\n")
		shfile.close
		sys.system("chmod +x {outname}")
	end
end

# Compiler that translates Nit code to Java code
class JavaCompiler
	# The main module of the program currently compiled
	var mainmodule: MModule

	# Modelbuilder used to know the model and the AST
	var modelbuilder: ModelBuilder

	# The result of the RTA (used to know live types and methods)
	var runtime_type_analysis: RapidTypeAnalysis

	# Where to generate tmp files
	var compile_dir: String is lazy do
		var dir = modelbuilder.toolcontext.opt_compile_dir.value
		if dir == null then dir = "nitj_compile"
		return dir
	end

	# Name of the generated executable
	var outname: String is lazy do
		var name = modelbuilder.toolcontext.opt_output.value
		if name == null then name = mainmodule.jname
		return name
	end

	# The list of all associated files
	# Used to generate .java files
	var files: Array[JavaCodeFile] = new Array[JavaCodeFile]

	# Force the creation of a new file
	# The point is to avoid contamination between must-be-compiled-separately files
	fun new_file(name: String): JavaCodeFile do
		var file = new JavaCodeFile(name)
		files.add(file)
		return file
	end

	# Kind of visitor to use
	type VISITOR: JavaCompilerVisitor

	# Initialize a visitor specific for the compiler engine
	fun new_visitor(filename: String): VISITOR do
		return new JavaCompilerVisitor(self, new_file(filename))
	end

	# RuntimeModel representation
	private var rt_model: JavaRuntimeModel is lazy do return new JavaRuntimeModel

	# Compile Nit code to Java
	fun do_compilation do
		# compile java classes used to represents the runtime model of the program
		rt_model.compile_rtmodel(self)
		compile_box_kinds

		# compile class structures
		compile_mclasses_to_java

		# compile method structures
		compile_mmethods_to_java

		# compile main
		compile_main_function
	end

	# Prepare the boxes used to represent Java primitive types
	fun compile_box_kinds do
		# Collect all bas box class
		# FIXME: this is not completely fine with a separate compilation scheme
		for classname in ["Int", "Bool", "Byte", "Char", "Float"] do
			var classes = mainmodule.model.get_mclasses_by_name(classname)
			if classes == null then continue
			assert classes.length == 1 else print classes.join(", ")
			box_kinds.add(classes.first.mclass_type)
		end
	end

	# Types of boxes used to represent Java primitive types
	var box_kinds = new Array[MClassType]

	# Generate a `RTClass` for each `MClass` found in model
	#
	# This is a global phase because we need to know all the program to build
	# attributes, fill vft and type table.
	fun compile_mclasses_to_java do
		for mclass in mainmodule.model.mclasses do
			mclass.compile_to_java(new_visitor("{mclass.rt_name}.java"))
		end
	end

	# Generate a `RTMethod` for each `MMethodDef` found in model
	#
	# This is a separate phase.
	fun compile_mmethods_to_java do
		for mmodule in mainmodule.in_importation.greaters do
			for mclassdef in mmodule.mclassdefs do
				for mdef in mclassdef.mpropdefs do
					if mdef isa MMethodDef then
						mdef.compile_to_java(new_visitor("{mdef.rt_name}.java"))
					end
				end
			end
		end
	end

	# Generate Java main that call Sys.main
	fun compile_main_function do
		var v = new_visitor("{mainmodule.jname}_Main.java")
		v.add("public class {mainmodule.jname}_Main \{")
		v.add("  public static void main(String[] args) \{")

		var main_type = mainmodule.sys_type
		if main_type != null then
			var mainmodule = v.compiler.mainmodule
			var glob_sys = v.init_instance(main_type)
			var main_init = mainmodule.try_get_primitive_method("init", main_type.mclass)
			if main_init != null then
				v.send(main_init, [glob_sys])
			end
			var main_method = mainmodule.try_get_primitive_method("run", main_type.mclass) or else
				mainmodule.try_get_primitive_method("main", main_type.mclass)
			if main_method != null then
				v.send(main_method, [glob_sys])
			end
		end
		v.add("  \}")
		v.add("\}")
	end
end

# The class visiting the AST
#
# A visitor is attached to one JavaCodeFile it writes into.
class JavaCompilerVisitor
	super Visitor

	# JavaCompiler used with this visitor
	type COMPILER: JavaCompiler

	# The associated compiler
	var compiler: JavaCompiler

	# The file to write generated code into
	var file: JavaCodeFile

	# Names handling

	private var names = new HashSet[String]
	private var last: Int = 0

	# Return a new name based on `s` and unique in the visitor
	fun get_name(s: String): String do
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

	# Return an unique and stable identifier associated with an escapemark
	fun escapemark_name(e: nullable EscapeMark): String do
		assert e != null
		var frame = self.frame
		assert frame != null
		if frame.escapemark_names.has_key(e) then return frame.escapemark_names[e]
		var name = e.name
		if name == null then name = "label"
		name = get_name(name)
		frame.escapemark_names[e] = name
		return name
	end

	# Insert a C label for associated with an escapemark
	fun add_escape_label(e: nullable EscapeMark) do
		if e == null then return
		if e.escapes.is_empty then return
		add("BREAK_{escapemark_name(e)}: ")
	end

	# Variables handling

	# Registered variables
	protected var variables = new HashMap[Variable, RuntimeVariable]

	# Return the local RuntimeVariable associated to a Nit local variable
	fun variable(variable: Variable): RuntimeVariable do
		if variables.has_key(variable) then
			return variables[variable]
		else
			var name = get_name("var_{variable.name}")
			var mtype = variable.declared_type.as(not null)
			mtype = anchor(mtype)
			var res = decl_var(name, mtype)
			variables[variable] = res
			return res
		end
	end

	# Return a new uninitialized local RuntimeVariable with `name`
	fun decl_var(name: String, mtype: MType): RuntimeVariable do
		var res = new RuntimeVariable(name, mtype, mtype)
		res.is_boxed = not mtype.is_java_primitive
		add("{mtype.java_type} {name} /* : {mtype} */;")
		return res
	end

	# Return a new uninitialized local RuntimeVariable
	fun new_var(mtype: MType): RuntimeVariable do
		mtype = anchor(mtype)
		var name = self.get_name("var")
		return decl_var(name, mtype)
	end

	# Calls handling

	# The current `JavaStaticFrame`
	var frame: nullable JavaStaticFrame = null is writable

	# Return a new local RuntimeVariable initialized from `args[0]`
	fun new_recv(mtype: MType): RuntimeVariable do
		var res = new_var(mtype)
		add("{res} = args[0];")
		return res
	end

	# Calls handling

	# Compile a call within a callsite
	fun compile_callsite(callsite: CallSite, arguments: Array[RuntimeVariable]): nullable RuntimeVariable do
		var initializers = callsite.mpropdef.initializers
		if not initializers.is_empty then
			var recv = arguments.first

			var i = 1
			for p in initializers do
				if p isa MMethod then
					var args = [recv]
					var msignature = p.intro.msignature
					if msignature != null then
						for x in msignature.mparameters do
							args.add arguments[i]
							i += 1
						end
					end
					send(p, args)
				else if p isa MAttribute then
					info("NOT YET IMPLEMENTED {class_name}::compile_callsite for MAttribute `{p}`")
					#self.write_attribute(p, recv, arguments[i])
					i += 1
				else abort
			end
			assert i == arguments.length

			return send(callsite.mproperty, [recv])
		end

		return send(callsite.mproperty, arguments)
	end

	# Evaluate `args` as expressions in the call of `mpropdef` on `recv`.
	#
	# This method is used to manage varargs in signatures and returns the real array
	# of runtime variables to use in the call.
	fun varargize(mpropdef: MMethodDef, map: nullable SignatureMap, recv: RuntimeVariable, args: SequenceRead[AExpr]): Array[RuntimeVariable] do
		var msignature = mpropdef.msignature.as(not null)
		var res = new Array[RuntimeVariable]
		res.add(recv)

		if msignature.arity == 0 then return res

		if map == null then
			assert args.length == msignature.arity
			for ne in args do
				res.add expr(ne, null)
			end
			return res
		end

		# Eval in order of arguments, not parameters
		var exprs = new Array[RuntimeVariable].with_capacity(args.length)
		for ne in args do
			exprs.add expr(ne, null)
		end

		# Fill `res` with the result of the evaluation according to the mapping
		for i in [0..msignature.arity[ do
			var param = msignature.mparameters[i]
			var j = map.map.get_or_null(i)
			if j == null then
				# default value
				res.add(null_instance)
				continue
			end
			if param.is_vararg and args[i].vararg_decl > 0 then
				var vararg = exprs.sub(j, args[i].vararg_decl)
				var elttype = param.mtype
				var arg = self.vararg_instance(mpropdef, recv, vararg, elttype)
				res.add(arg)
				continue
			end
			res.add exprs[j]
		end
		return res
	end

	#  Generate a static call on a method definition (no receiver needed).
	fun static_call(mmethoddef: MMethodDef, arguments: Array[RuntimeVariable]): nullable RuntimeVariable do
		var res: nullable RuntimeVariable
		var ret = mmethoddef.msignature.as(not null).return_mtype
		if ret == null then
			res = null
		else
			ret = ret.resolve_for(mmethoddef.mclassdef.bound_mtype, mmethoddef.mclassdef.bound_mtype, mmethoddef.mclassdef.mmodule, true)
			res = self.new_var(ret)
		end

		# Autobox arguments
		adapt_signature(mmethoddef, arguments)

		var rt_name = mmethoddef.rt_name
		if res == null then
			add("{rt_name}.get{rt_name}().exec(new RTVal[]\{{arguments.join(",")}\});")
			return null
		end
		var ress = new_expr("{rt_name}.get{rt_name}().exec(new RTVal[]\{{arguments.join(",")}\});", compiler.mainmodule.object_type)
		assign(res, ress)
		return res
	end

	#  Generate a polymorphic send for `method` with `arguments`
	fun send(mmethod: MMethod, arguments: Array[RuntimeVariable]): nullable RuntimeVariable do
		# Shortcut calls on primitives
		if arguments.first.mcasttype.is_java_primitive then
			return monomorphic_send(mmethod, arguments.first.mcasttype, arguments)
		end
		# Polymorphic send
		return table_send(mmethod, arguments)
	end


	# Handle common special cases before doing the effective method invocation
	# This methods handle the `==` and `!=` methods and the case of the null receiver.
	# Note: a { is open in the generated C, that enclose and protect the effective method invocation.
	# Client must not forget to close the } after them.
	#
	# The value returned is the result of the common special cases.
	# If not null, client must compile it with the result of their own effective method invocation.
	#
	# If `before_send` can shortcut the whole message sending, a dummy `if(0){`
	# is generated to cancel the effective method invocation that will follow
	# TODO: find a better approach
	private fun before_send(res: nullable RuntimeVariable, mmethod: MMethodDef, arguments: Array[RuntimeVariable]) do
		var bool_type = compiler.mainmodule.bool_type
		var recv = arguments.first
		var consider_null = mmethod.name == "==" or mmethod.name == "!=" or mmethod.name == "is_same_instance"
		if recv.mcasttype isa MNullableType or recv.mcasttype isa MNullType then
			add("if ({recv} == null || {recv}.is_null()) \{")
			if mmethod.name == "==" or mmethod.name == "is_same_instance" then
				if res == null then res = new_var(bool_type)
				var arg = arguments[1]
				if arg.mcasttype isa MNullableType then
					add("{res} = ({arg} == null || {arg}.is_null());")
				else if arg.mcasttype isa MNullType then
					add("{res} = true; /* is null */")
				else
					add("{res} = false; /* {arg.inspect} cannot be null */")
				end
			else if mmethod.name == "!=" then
				if res == null then res = new_var(bool_type)
				# res = self.new_var(bool_type)
				var arg = arguments[1]
				if arg.mcasttype isa MNullableType then
					add("{res} = ({arg} != null && !{arg}.is_null());")
				else if arg.mcasttype isa MNullType then
					add("{res} = false; /* is null */")
				else
					add("{res} = true; /* {arg.inspect} cannot be null */")
				end
			else
				add_abort("Receiver is null")
				ret(null_instance)
			end
			add("\} else \{")
		else
			add "\{"
			add "/* recv ({recv}) cannot be null since it's a {recv.mcasttype}"
		end
		if consider_null then
			var arg = arguments[1]
			if arg.mcasttype isa MNullType then
				if res == null then res = new_var(bool_type)
				if mmethod.name == "!=" then
					add("{res} = true; /* arg is null and recv is not */")
				else # `==` and `is_same_instance`
					add("{res} = false; /* arg is null but recv is not */")
				end
				add("\}") # closes the null case
				add("if (false) \{") # what follow is useless, Javac will drop it
			end
		end
	end

	# Perform a method call through vft
	private fun table_send(mmethod: TableCallable, arguments: Array[RuntimeVariable]): nullable RuntimeVariable do
		var mdef: MMethodDef
		var name: String
		if mmethod isa MMethod then
			mdef = mmethod.intro
			name = mmethod.full_name
		else if mmethod isa MMethodDef then
			mdef = mmethod
			name = mmethod.full_name
		else
			abort
		end

		var recv = arguments.first
		var rect = mdef.mclassdef.bound_mtype
		var msignature = mdef.msignature.as(not null)
		msignature = msignature.resolve_for(rect, rect, compiler.mainmodule, true)
		adapt_signature(mdef, arguments)

		var res: nullable RuntimeVariable
		var ret = msignature.return_mtype
		if ret == null then
			res = null
		else
			res = self.new_var(ret)
		end

		before_send(res, mdef, arguments)

		add "/* concrete call to {mdef} */"
		if res != null then
			var ress = new_expr("{recv}.rtclass.vft.get(\"{name}\").exec(new RTVal[]\{{arguments.join(",")}\});", compiler.mainmodule.object_type)
			assign(res, ress)
		else
			add("{recv}.rtclass.vft.get(\"{name}\").exec(new RTVal[]\{{arguments.join(",")}\});")
		end

		add("\}") # closes the null case

		return res
	end

	# Generate a super call from a method definition
	fun supercall(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable do
		return table_send(m, args)
	end

	# Generate a monomorphic send for the method `m`, the type `t` and the arguments `args`
	fun monomorphic_send(m: MMethod, t: MType, args: Array[RuntimeVariable]): nullable RuntimeVariable do
		assert t isa MClassType
		var propdef = m.lookup_first_definition(self.compiler.mainmodule, t)
		return self.static_call(propdef, args)
	end

	# Code generation

	# Add a line (will be suffixed by `\n`)
	fun add(line: String) do file.lines.add("{line}\n")

	# Add a new partial line (no `\n` suffix)
	fun addn(line: String) do file.lines.add(line)

	# Compile a statement (if any)
	fun stmt(nexpr: nullable AExpr) do
		if nexpr == null then return
		if nexpr.mtype == null and not nexpr.is_typed then
			# Untyped expression.
			# Might mean dead code or invalid code
			# so aborts
			add_abort("FATAL: bad statement executed.")
			return
		end

		var old = self.current_node
		current_node = nexpr
		nexpr.stmt(self)
		current_node = old
	end

	# Compile an expression an return its result
	# `mtype` is the expected return type, pass null if no specific type is expected.
	fun expr(nexpr: AExpr, mtype: nullable MType): RuntimeVariable do
		var old = current_node
		current_node = nexpr

		var res = null
		if nexpr.mtype != null then
			res = nexpr.expr(self)
		end

		if res == null then
			# Untyped expression.
			# Might mean dead code or invalid code.
			# so aborts
			add_abort("FATAL: bad expression executed.")
			# and return a placebo result to please the C compiler
			if mtype == null then mtype = compiler.mainmodule.object_type
			res = null_instance

			self.current_node = old
			return res
		end

		if mtype != null then
			mtype = anchor(mtype)
			res = autobox(res, mtype)
		end

		current_node = old
		return res
	end

	# Alias for `self.expr(nexpr, self.bool_type)`
	fun expr_bool(nexpr: AExpr): RuntimeVariable do
		return expr(nexpr, compiler.mainmodule.bool_type)
	end

	# Correctly assign a left and a right value
	# Boxing and unboxing is performed if required
	fun assign(left, right: RuntimeVariable) do
		add("{left} = {autobox(right, left.mtype)};")
	end

	# Generate a return with `value`
	fun ret(value: RuntimeVariable) do
		var frame = self.frame
		assert frame != null
		var returnvar = frame.returnvar
		if returnvar != null then
			assign(returnvar, value)
		end
		self.add("break {frame.returnlabel.as(not null)};")
	end

	# Return a new local RuntimeVariable initialized with the Java expression `jexpr`.
	#
	# `mtype` is used for the Java return variable initialization.
	fun new_expr(jexpr: String, mtype: MType): RuntimeVariable do
		var res = new_var(mtype)
		add("{res} = {jexpr};")
		return res
	end

	# Generate generic abort
	#
	# Used by aborts, asserts, casts, etc.
	fun add_abort(message: String) do
		add("System.err.print(\"Runtime error: {message}\");")
		add_raw_abort
	end

	# Abort without displaying the cause.
	#
	# Used to customizable errors.
	private fun add_raw_abort do
		var node = current_node
		if node != null then
			add("System.err.print(\" ({node.location.short_location})\");")
		end
		add("System.err.println(\"\");")
		add("System.exit(1);")
	end

	# Add a dynamic cast
	fun add_cast(value: RuntimeVariable, mtype: MType) do
		var res = type_test(value, mtype)
		add("if (!{res}) \{")
		add("System.err.print(\"Runtime error: Cast failed. Expected `{mtype.to_s.escape_to_c}`, got `\" + {value}.rtclass.class_name + \"`\");")
		add_raw_abort
		add("\}")
	end

	# Types handling

	# Anchor a type to the main module and the current receiver
	fun anchor(mtype: MType): MType do
		if not mtype.need_anchor then return mtype
		return mtype.anchor_to(compiler.mainmodule, frame.as(not null).receiver)
	end

	# Adapt the arguments of a method according to targetted `MMethodDef`
	fun adapt_signature(m: MMethodDef, args: Array[RuntimeVariable]) do
		var msignature = m.msignature.as(not null).resolve_for(
			m.mclassdef.bound_mtype,
			m.mclassdef.bound_mtype,
			m.mclassdef.mmodule, true)
		args.first = autobox(args.first, compiler.mainmodule.object_type)
		for i in [0..msignature.arity[ do
			args[i+1] = autobox(args[i + 1], compiler.mainmodule.object_type)
		end
	end

	# Box primitive `value` to `mtype`.
	private fun box(value: RuntimeVariable, mtype: MType): RuntimeVariable do
		if value.is_boxed then return value
		var obj_type = compiler.mainmodule.object_type
		if value.mtype isa MNullType then
			return new_expr("new RTVal(null, null)", compiler.mainmodule.model.null_type)
		end
		var mbox = value.mtype.as(MClassType).mclass
		return new_expr("new RTVal({mbox.rt_name}.get{mbox.rt_name}(), {value})", obj_type)
	end

	# Unbox primitive `value` to `mtype`.
	private fun unbox(value: RuntimeVariable, mtype: MType): RuntimeVariable do
		if not value.is_boxed then return value
		if not mtype.is_java_primitive then return value
		if compiler.box_kinds.has(mtype) then
			return new_expr("({mtype.java_type}){value}.value", mtype)
		else
			info "NOT YET IMPLEMENTED unbox for {value} ({mtype})"
			abort
		end
	end

	# Box or unbox primitive `value` to `mtype` if needed.
	private fun autobox(value: RuntimeVariable, mtype: MType): RuntimeVariable do
		if mtype.is_java_primitive then return unbox(value, mtype)
		return box(value, mtype)
	end

	# Can this `value` be a primitive Java value?
	private fun can_be_primitive(value: RuntimeVariable): Bool do
		var t = value.mcasttype.undecorate
		if not t isa MClassType then return false
		var k = t.mclass.kind
		return k == interface_kind or t.is_java_primitive
	end

	#  Generate a polymorphic subtype test
	fun type_test(value: RuntimeVariable, mtype: MType): RuntimeVariable do
		add("/* {value.inspect} isa {mtype} */")
		var res = self.new_var(compiler.mainmodule.bool_type)

		# check color is in table
		var maybenull = (value.mcasttype isa MNullableType or value.mcasttype isa MNullType)
		if maybenull then
			add("if({value} == null || {value}.is_null()) \{")
			add("{res} = true && {mtype isa MNullableType};")
			add("\} else \{")
		end
		if mtype isa MNullableType then mtype = mtype.mtype
		var mclass = mtype.as(MClassType).mclass
		add("{res} = {value}.rtclass.supers.get(\"{mclass.jname}\") == {mclass.rt_name}.get{mclass.rt_name}();")
		if maybenull then
			add("\}")
		end
		return res
	end

	# Generate the code required to dynamically check if 2 objects share the same runtime type
	fun is_same_type_test(value1, value2: RuntimeVariable): RuntimeVariable do
		var res = self.new_var(compiler.mainmodule.bool_type)
		add("{res} = {value1}.rtclass == {value2}.rtclass;")
		return res
	end

	# Native instances

	# Generate an integer value
	fun int_instance(value: Int): RuntimeVariable do
		var t = compiler.mainmodule.int_type
		return new RuntimeVariable(value.to_s, t, t)
	end

	# Generate a byte value
	fun byte_instance(value: Byte): RuntimeVariable do
		var t = compiler.mainmodule.byte_type
		return new RuntimeVariable(value.to_s, t, t)
	end

	# Generate a char value
	fun char_instance(value: Char): RuntimeVariable do
		var t = compiler.mainmodule.char_type
		return new RuntimeVariable("'{value.to_s.escape_to_c}'", t, t)
	end

	# Generate a float value
	#
	# FIXME pass a Float, not a string
	fun float_instance(value: String): RuntimeVariable do
		var t = compiler.mainmodule.float_type
		return new RuntimeVariable(value.to_s, t, t)
	end

	# Generate an integer value
	fun bool_instance(value: Bool): RuntimeVariable do
		var t = compiler.mainmodule.bool_type
		return new RuntimeVariable(value.to_s, t, t)
	end

	# Generate the `null` value
	fun null_instance: RuntimeVariable do
		var t = compiler.mainmodule.model.null_type
		return new RuntimeVariable("null", t, t)
	end

	# Get an instance of a array for a vararg
	fun vararg_instance(mpropdef: MPropDef, recv: RuntimeVariable, varargs: Array[RuntimeVariable], elttype: MType): RuntimeVariable do
		# TODO handle dynamic types
		info("NOT YET IMPLEMENTED vararg_instance")
		return null_instance
		# TODO return array_instance(varargs, elttype)
	end

	# Nit instances

	# Generate a alloc-instance + init-attributes
	fun init_instance(mtype: MClassType): RuntimeVariable do
		var rt_name = mtype.mclass.rt_name
		var res = new_expr("new RTVal({rt_name}.get{rt_name}())", mtype)
		generate_init_attr(self, res, mtype)
		return res
	end

	# Generate code that initialize the attributes on a new instance
	fun generate_init_attr(v: JavaCompilerVisitor, recv: RuntimeVariable, mtype: MClassType) do
		var cds = mtype.collect_mclassdefs(v.compiler.mainmodule).to_a
		v.compiler.mainmodule.linearize_mclassdefs(cds)
		for cd in cds do
			for npropdef in v.compiler.modelbuilder.collect_attr_propdef(cd) do
				npropdef.init_expr(v, recv)
			end
		end
	end

	#  Generate a Nit "is" for two runtime_variables
	fun equal_test(value1, value2: RuntimeVariable): RuntimeVariable do
		var res = new_var(compiler.mainmodule.bool_type)
		if value2.mtype.is_java_primitive and not value1.mtype.is_java_primitive then
			var tmp = value1
			value1 = value2
			value2 = tmp
		end
		if value1.mtype.is_java_primitive then
			if value2.mtype == value1.mtype then
				add("{res} = {value1} == {value2}; /* == with two primitives */")
			else if value2.mtype.is_java_primitive then
				add("{res} = true; /* incompatible types {value1.mtype} vs. {value2.mtype}*/")
			# else if value1.mtype.is_tagged then
				# add("{res} = ({value2} != NULL) && ({autobox(value2, value1.mtype)} == {value1});")
			else
				var rt_name = value1.mtype.as(MClassType).mclass.rt_name
				add("{res} = ({value2} != null) && ({value2}.rtclass == {rt_name}.get{rt_name}());")
				add("if ({res}) \{")
				add("{res} = ({self.autobox(value2, value1.mtype)} == {value1});")
				add("\}")
			end
			return res
		end
		var maybe_null = true
		var test = new Array[String]
		var t1 = value1.mcasttype
		if t1 isa MNullableType then
			test.add("{value1} != null && !{value1}.is_null()")
			t1 = t1.mtype
		else
			maybe_null = false
		end
		var t2 = value2.mcasttype
		if t2 isa MNullableType then
			test.add("{value2} != null && !{value2}.is_null()")
			t2 = t2.mtype
		else
			maybe_null = false
		end

		var incompatible = false
		var primitive
		if t1.is_java_primitive then
			primitive = t1
			if t1 == t2 then
				# No need to compare class
			else if t2.is_java_primitive then
				incompatible = true
			else if can_be_primitive(value2) then
				if t1.is_java_primitive then
					self.add("{res} = {value1} == {value2}; /* t1 is primitive and t2 can be */")
					return res
				end
				# if not compiler.modelbuilder.toolcontext.opt_no_tag_primitives.value then
					# test.add("(!{extract_tag(value2)})")
				# end
				test.add("{value1}.rtclass == {value2}.rtclass")
			else
				incompatible = true
			end
		else if t2.is_java_primitive then
			primitive = t2
			if can_be_primitive(value1) then
				if t2.is_java_primitive then
					self.add("{res} = {value1} == {value2}; /* t2 is primitive and t1 can be */")
					return res
				end
				test.add("{value1}.rtclass == {value2}.rtclass")
			else
				incompatible = true
			end
		else
			primitive = null
		end

		if incompatible then
			if maybe_null then
				self.add("{res} = {value1} == {value2}; /* incompatible types {t1} vs. {t2}; but may be NULL*/")
				return res
			else
				self.add("{res} = false; /* incompatible types {t1} vs. {t2}; cannot be NULL */")
				return res
			end
		end
		if primitive != null then
			if primitive.is_java_primitive then
				self.add("{res} = {value1} == {value2};")
				return res
			end
			test.add("({value1}.value == {value2}.value")
		else if can_be_primitive(value1) and can_be_primitive(value2) then
			test.add("{value1}.rtclass == {value2}.rtclass")
			var s = new Array[String]
			for b in compiler.box_kinds do
				var rt_name = b.mclass.rt_name
				s.add "({value1}.rtclass == {rt_name}.get{rt_name}()) && ({value1}.value.equals({value2}.value))"
				if b.mclass.name == "Float" then
					s.add "({value1}.rtclass == RTClass_kernel_Float.getRTClass_kernel_Float() && {value1}.rtclass == {value2}.rtclass && Math.abs((double)({value1}.value)) == 0.0 && Math.abs((double)({value2}.value)) == 0.0)"
				end
			end
			if s.is_empty then
				self.add("{res} = {value1} == {value2}; /* both can be primitive */")
				return res
			end
			test.add("({s.join(" || ")})")
		else
			self.add("{res} = {value1} == {value2}; /* no primitives */")
			return res
		end
		self.add("{res} = {value1} == {value2} || ({test.join(" && ")});")
		return res
	end

	# Attributes

	# Generate a polymorphic attribute is_set test
	fun isset_attribute(a: MAttribute, recv: RuntimeVariable): RuntimeVariable do
		# TODO self.check_recv_notnull(recv)
		var res = new_var(compiler.mainmodule.bool_type)

		# What is the declared type of the attribute?
		var mtype = a.intro.static_mtype.as(not null)
		var intromclassdef = a.intro.mclassdef
		mtype = mtype.resolve_for(intromclassdef.bound_mtype, intromclassdef.bound_mtype, intromclassdef.mmodule, true)

		if mtype isa MNullableType then
			add("{res} = true; /* easy isset: {a} on {recv.inspect} */")
			return res
		end
		add("{res} = {recv}.attrs.get(\"{a.jname}\") != null; /* {a} on {recv.inspect} */")
		return res
	end

	# Generate a polymorphic attribute read
	fun read_attribute(a: MAttribute, recv: RuntimeVariable): RuntimeVariable do
		# TODO check_recv_notnull(recv)
		# TODO compile_check(v)
		# What is the declared type of the attribute?
		var ret = a.intro.static_mtype.as(not null)
		var intromclassdef = a.intro.mclassdef
		ret = ret.resolve_for(intromclassdef.bound_mtype, intromclassdef.bound_mtype, intromclassdef.mmodule, true)

		# Check for Uninitialized attribute
		if not ret isa MNullableType then check_attribute(a, recv)

		return new_expr("{recv}.attrs.get(\"{a.jname}\")", ret)
	end

	# Generate a polymorphic attribute write
	fun write_attribute(a: MAttribute, recv: RuntimeVariable, value: RuntimeVariable) do
		# TODO check_recv_notnull(recv)
		add "{recv}.attrs.put(\"{a.jname}\", {autobox(value, compiler.mainmodule.object_type)});"
	end

	# Check uninitialized attribute
	fun check_attribute(a: MAttribute, recv: RuntimeVariable) do
		add "if({recv}.attrs.get(\"{a.jname}\") == null) \{"
		add_abort "Uninitialized attribute {a.name}"
		add "\}"
	end

	# Utils

	# Display a info message
	fun info(str: String) do compiler.modelbuilder.toolcontext.info(str, 0)
end

# A file containing Java code.
class JavaCodeFile

	# File name
	var filename: String

	# Lines to write
	var lines: List[String] = new List[String]
end

redef class MEntity
	# A Java compatible name for `self`
	private fun jname: String do return name.to_cmangle
end

# Handler for runtime classes generation
#
# We need 3 kinds of runtime structures:
# * `RTClass` to represent a global class
# * `RTMethod` to represent a method definition
# * `RTVal` to represent runtime variables
class JavaRuntimeModel

	# Compile JavaRuntimeModel structures
	fun compile_rtmodel(compiler: JavaCompiler) do
		compile_rtclass(compiler)
		compile_rtmethod(compiler)
		compile_rtval(compiler)
	end

	# Compile the abstract runtime class structure
	#
	# Runtime classes have 3 attributes:
	# * `class_name`: the class name as a String
	# * `vft`: the virtual function table for the class (flattened)
	# * `supers`: the super type table (used for type tests)
	fun compile_rtclass(compiler: JavaCompiler) do
		var v = compiler.new_visitor("RTClass.java")
		v.add("import java.util.HashMap;")
		v.add("public abstract class RTClass \{")
		v.add("  public String class_name;")
		v.add("  public HashMap<String, RTMethod> vft = new HashMap<>();")
		v.add("  public HashMap<String, RTClass> supers = new HashMap<>();")
		v.add("  protected RTClass() \{\}")
		v.add("\}")
	end

	# Compile the abstract runtime method structure
	#
	# Method body is executed through the `exec` method:
	# * `exec` always take an array of RTVal as arg, the first one must be the receiver
	# * `exec` always returns a RTVal (or null if the Nit return type is void)
	fun compile_rtmethod(compiler: JavaCompiler) do
		var v = compiler.new_visitor("RTMethod.java")
		v.add("public abstract class RTMethod \{")
		v.add("  protected RTMethod() \{\}")
		v.add("  public abstract RTVal exec(RTVal[] args);")
		v.add("\}")
	end

	# Compile the runtime value structure
	#
	# RTVal both represents object instances and primitives values:
	# * object instances:
	#   * `rtclass` the class of the RTVal is instance of
	#   * `attrs` contains the attributes of the instance
	# * primitive values:
	#   * `rtclass` represents the class of the primitive value Nit type
	#   * `value` contains the primitive value of the instance
	# * null values:
	#   * they must have both `rtclass` and `value` as null
	fun compile_rtval(compiler: JavaCompiler) do
		var v = compiler.new_visitor("RTVal.java")
		v.add("import java.util.HashMap;")
		v.add("public class RTVal \{")
		v.add("  public RTClass rtclass;")
		v.add("  public HashMap<String, RTVal> attrs = new HashMap<>();")
		v.add("  Object value;")
		v.add("  public RTVal(RTClass rtclass) \{")
		v.add("    this.rtclass = rtclass;")
		v.add("  \}")
		v.add("  public RTVal(RTClass rtclass, Object value) \{")
		v.add("    this.rtclass = rtclass;")
		v.add("    this.value = value;")
		v.add("  \}")
		v.add("  public boolean is_null() \{ return rtclass == null && value == null; \}")
		v.add("\}")
	end
end

# A runtime variable hold a runtime value in Java.
# Runtime variables are associated to Nit local variables and intermediate results in Nit expressions.
class RuntimeVariable

	# The name of the variable in the Java code
	var name: String

	# The static type of the variable (as declard in Java)
	var mtype: MType

	# The current casted type of the variable (as known in Nit)
	var mcasttype: MType is writable

	# If the variable exaclty a mcasttype?
	# false (usual value) means that the variable is a mcasttype or a subtype.
	var is_exact: Bool = false is writable

	# Is this variable declared as a RTVal or a Java primitive one?
	var is_boxed = false

	redef fun to_s do return name

	redef fun inspect
	do
		var exact_str
		if self.is_exact then
			exact_str = " exact"
		else
			exact_str = ""
		end
		var type_str
		if self.mtype == self.mcasttype then
			type_str = "{mtype}{exact_str}"
		else
			type_str = "{mtype}({mcasttype}{exact_str})"
		end
		return "<{name}:{type_str}>"
	end
end

# The static context of a visited property in a `JavaCompilerVisitor`
class JavaStaticFrame
	# The associated visitor
	var visitor: JavaCompilerVisitor

	# The executed property.
	# A Method in case of a call, an attribute in case of a default initialization.
	var mpropdef: MPropDef

	# The static type of the receiver
	var receiver: MClassType

	# Arguments of the method (the first is the receiver)
	var arguments: Array[RuntimeVariable]

	# The runtime_variable associated to the return (in a function)
	var returnvar: nullable RuntimeVariable = null is writable

	# The label at the end of the property
	var returnlabel: nullable String = null is writable

	# Labels associated to a each escapemarks.
	# Because of inlinings, escape-marks must be associated to their context (the frame)
	private var escapemark_names = new HashMap[EscapeMark, String]
end

redef class Location
	# Return a shortened version of the location with `"{file}:{line_start}"`
	fun short_location: String do
		var file = self.file
		if file == null then return "<no file>:{line_start}"
		return "{file.filename.escape_to_c}:{line_start}"
	end
end

redef class MType
	# Return the Java type associated to a given Nit static type
	fun java_type: String do return "RTVal"

	# Is the associated Java type a primitive one?
	#
	# ENSURE `result == (java_type != "RTVal")`
	var is_java_primitive: Bool is lazy do return java_type != "RTVal"
end

redef class MClassType

	redef var java_type is lazy do
		if mclass.name == "Int" then
			return "int"
		else if mclass.name == "Bool" then
			return "boolean"
		else if mclass.name == "Char" then
			return "char"
		else if mclass.name == "Float" then
			return "double"
		else if mclass.name == "Byte" then
			return "byte"
		else if mclass.name == "CString" then
			return "String"
		else if mclass.name == "NativeArray" then
			return "Array"
		end
		return "RTVal"
	end
end

redef class MClass

	# Runtime name
	private fun rt_name: String do return "RTClass_{intro_mmodule.jname}_{jname}"

	# Generate a Java RTClass for a Nit MClass
	fun compile_to_java(v: JavaCompilerVisitor) do
		v.add("public class {rt_name} extends RTClass \{")
		v.add("  protected static RTClass instance;")
		v.add("  private {rt_name}() \{")
		v.add("    this.class_name = \"{name}\";")
		compile_vft(v)
		compile_type_table(v)
		v.add("  \}")
		v.add("  public static RTClass get{rt_name}() \{")
		v.add("    if(instance == null) \{")
		v.add("      instance = new {rt_name}();")
		v.add("    \}")
		v.add("    return instance;")
		v.add("  \}")
		v.add("\}")
	end

	# Compile the virtual function table for the mclass
	private fun compile_vft(v: JavaCompilerVisitor) do
		# TODO handle generics
		if mclass_type.need_anchor then return
		var mclassdefs = mclass_type.collect_mclassdefs(v.compiler.mainmodule).to_a
		v.compiler.mainmodule.linearize_mclassdefs(mclassdefs)

		var mainmodule = v.compiler.mainmodule
		for mclassdef in mclassdefs.reversed do
			for mprop in mclassdef.intro_mproperties do
				var mpropdef = mprop.lookup_first_definition(mainmodule, intro.bound_mtype)
				if not mpropdef isa MMethodDef then continue
				var rt_name = mpropdef.rt_name
				v.add("this.vft.put(\"{mprop.full_name}\", {rt_name}.get{rt_name}());")

				# fill super next definitions
				while mpropdef.has_supercall do
					var prefix = mpropdef.full_name
					mpropdef = mpropdef.lookup_next_definition(mainmodule, intro.bound_mtype)
					rt_name = mpropdef.rt_name
					v.add("this.vft.put(\"{prefix}\", {rt_name}.get{rt_name}());")
				end
			end
		end
	end

	# Compile the type table for the MClass
	fun compile_type_table(v: JavaCompilerVisitor) do
		for pclass in in_hierarchy(v.compiler.mainmodule).greaters do
			if pclass == self then
				v.add("supers.put(\"{pclass.jname}\", this);")
			else
				v.add("supers.put(\"{pclass.jname}\", {pclass.rt_name}.get{pclass.rt_name}());")
			end
		end
	end
end

# Used as a common type between MMethod and MMethodDef for `table_send`
private interface TableCallable
end

redef class MMethod
	super TableCallable
end

redef class MMethodDef
	super TableCallable

	# Runtime name
	private fun rt_name: String do
		return "RTMethod_{mclassdef.mmodule.jname}_{mclassdef.mclass.jname}_{mproperty.jname}"
	end

	# Generate a Java RTMethod for `self`
	fun compile_to_java(v: JavaCompilerVisitor) do
		v.add("public class {rt_name} extends RTMethod \{")
		v.add("  protected static RTMethod instance;")
		v.add("  public static RTMethod get{rt_name}() \{")
		v.add("    if(instance == null) \{")
		v.add("      instance = new {rt_name}();")
		v.add("    \}")
		v.add("    return instance;")
		v.add("  \}")
		v.add("  @Override")
		v.add("  public RTVal exec(RTVal[] args) \{")
		compile_inside_to_java(v)
		v.add("  \}")
		v.add("\}")
	end

	# Compile the body of this function
	fun compile_inside_to_java(v: JavaCompilerVisitor) do

		var modelbuilder = v.compiler.modelbuilder
		var node = modelbuilder.mpropdef2node(self)

		var recv = mclassdef.bound_mtype
		var arguments = new Array[RuntimeVariable]
		var frame = new JavaStaticFrame(v, self, recv, arguments)
		v.frame = frame

		var selfvar = v.decl_var("self", recv)
		arguments.add(selfvar)
		var boxed = v.new_expr("args[0]", v.compiler.mainmodule.object_type)
		v.add "{selfvar} = {v.autobox(boxed, recv)};"

		var msignature = self.msignature
		var ret = null
		if msignature != null then
			ret = msignature.return_mtype
			if ret != null then
				var retvar = v.decl_var("ret", ret)
				if ret.name == "Int" then v.add "{retvar} = 0;"
				if ret.name == "Float" then v.add "{retvar} = 0.0;"
				if ret.name == "Bool" then v.add "{retvar} = false;"
				if ret.name == "Char" then v.add "{retvar} = 0;"
				if ret.name == "Byte" then v.add "{retvar} = 0;"
				frame.returnvar = retvar
			end
		end
		frame.returnlabel = v.get_name("RET_LABEL")

		v.current_node = node
		if is_abstract then
			v.add_abort("Abstract method `{mproperty.name}` called on `\"  + {selfvar}.rtclass.class_name +\"`")
			v.add("return null;")
			return
		end
		v.current_node = null

		v.add("{frame.returnlabel.as(not null)}: \{")

		if node isa APropdef then
			node.compile_to_java(v, self, arguments)
		else if node isa AClassdef then
			node.compile_to_java(v, self, arguments)
		else
			abort
		end

		v.add("\}")
		if ret != null then
			v.add("return {v.autobox(frame.returnvar.as(not null), v.compiler.mainmodule.object_type)};")
		else
			v.add("return null;")
		end
	end
end

redef class AClassdef
	private fun compile_to_java(v: JavaCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable]) do
		if mpropdef.mproperty.is_root_init then
			if not mpropdef.is_intro then
				v.supercall(mpropdef, arguments.first.mtype.as(MClassType), arguments)
			end
		else
			abort
		end
	end
end

redef class APropdef

	# Compile that property definition to java code
	fun compile_to_java(v: JavaCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable]) do
		v.info("NOT YET IMPLEMENTED {class_name}::compile_to_java")
	end
end

redef class AMethPropdef
	redef fun compile_to_java(v, mpropdef, arguments) do
		if mpropdef.msignature != null then
			var i = 0
			for mparam in mpropdef.msignature.as(not null).mparameters do
				var variable = n_signature.as(not null).n_params[i].variable
				if variable == null then continue
				var argvar = v.variable(variable)
				v.assign(argvar, v.new_expr("args[{i + 1}]", v.compiler.mainmodule.object_type))
				arguments.add(argvar)
				i += 1
			end
		end

		# Call the implicit super-init
		var auto_super_inits = self.auto_super_inits
		if auto_super_inits != null then
			var args = [arguments.first]
			for auto_super_init in auto_super_inits do
				assert auto_super_init.mproperty != mpropdef.mproperty
				args.clear
				for i in [0..auto_super_init.msignature.arity+1[ do
					args.add(arguments[i])
				end
				assert auto_super_init.mproperty != mpropdef.mproperty
				v.compile_callsite(auto_super_init, args)
			end
		end
		if auto_super_call then
			v.supercall(mpropdef, arguments.first.mtype.as(MClassType), arguments)
		end

		compile_inside_to_java(v, mpropdef, arguments)
	end

	# Compile the inside of the method body
	private fun compile_inside_to_java(v: JavaCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable]) do
		# Compile intern methods
		if mpropdef.is_intern then
			if compile_intern_to_java(v, mpropdef, arguments) then return
			v.info("NOT YET IMPLEMENTED compile_intern for {mpropdef}")
			v.ret(v.null_instance)
			return
		end

		# Compile block if any
		var n_block = n_block
		if n_block != null then
			v.stmt(n_block)
			return
		end
	end

	# Compile an intern method using Java primitives
	fun compile_intern_to_java(v: JavaCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable]): Bool do
		var pname = mpropdef.mproperty.name
		var cname = mpropdef.mclassdef.mclass.name
		var ret = mpropdef.msignature.as(not null).return_mtype
		if cname == "Int" then
			if pname == "output" then
				v.add("System.out.println({arguments[0]});")
				v.ret(v.null_instance)
				return true
			else if pname == "object_id" then
				v.ret(arguments.first)
				return true
			else if pname == "+" then
				v.ret(v.new_expr("{arguments[0]} + {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "-" then
				v.ret(v.new_expr("{arguments[0]} - {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "unary -" then
				v.ret(v.new_expr("-{arguments[0]}", ret.as(not null)))
				return true
			else if pname == "unary +" then
				v.ret(arguments[0])
				return true
			else if pname == "*" then
				v.ret(v.new_expr("{arguments[0]} * {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "/" then
				v.ret(v.new_expr("{arguments[0]} / {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "%" then
				v.ret(v.new_expr("{arguments[0]} % {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "<<" then
				v.ret(v.new_expr("{arguments[0]} << {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">>" then
				v.ret(v.new_expr("{arguments[0]} >> {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return true
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return true
			else if pname == "<" then
				v.ret(v.new_expr("{arguments[0]} < {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">" then
				v.ret(v.new_expr("{arguments[0]} > {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "<=" then
				v.ret(v.new_expr("{arguments[0]} <= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">=" then
				v.ret(v.new_expr("{arguments[0]} >= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "to_f" then
				v.ret(v.new_expr("(double){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "to_b" then
				v.ret(v.new_expr("(byte){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "ascii" then
				v.ret(v.new_expr("(char){arguments[0]}", ret.as(not null)))
				return true
			end
		else if cname == "Char" then
			if pname == "output" then
				v.add("System.out.print({arguments[0]});")
				v.ret(v.null_instance)
				return true
			else if pname == "object_id" then
				v.ret(v.new_expr("(int){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "successor" then
				v.ret(v.new_expr("(char)({arguments[0]} + {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "predecessor" then
				v.ret(v.new_expr("(char)({arguments[0]} - {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return true
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return true
			else if pname == "<" then
				v.ret(v.new_expr("{arguments[0]} < {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">" then
				v.ret(v.new_expr("{arguments[0]} > {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "<=" then
				v.ret(v.new_expr("{arguments[0]} <= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">=" then
				v.ret(v.new_expr("{arguments[0]} >= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "to_i" then
				v.ret(v.new_expr("(int){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "ascii" then
				v.ret(v.new_expr("(int){arguments[0]}", ret.as(not null)))
				return true
			end
		else if cname == "Byte" then
			if pname == "output" then
				v.add("System.out.println({arguments[0]});")
				v.ret(v.null_instance)
				return true
			else if pname == "object_id" then
				v.ret(v.new_expr("(int){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "+" then
				v.ret(v.new_expr("(byte)({arguments[0]} + {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "-" then
				v.ret(v.new_expr("(byte)({arguments[0]} - {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "unary -" then
				v.ret(v.new_expr("(byte)(-{arguments[0]})", ret.as(not null)))
				return true
			else if pname == "unary +" then
				v.ret(arguments[0])
				return true
			else if pname == "*" then
				v.ret(v.new_expr("(byte)({arguments[0]} * {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "/" then
				v.ret(v.new_expr("(byte)({arguments[0]} / {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "%" then
				v.ret(v.new_expr("(byte)({arguments[0]} % {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "<<" then
				v.ret(v.new_expr("(byte)({arguments[0]} << {arguments[1]})", ret.as(not null)))
				return true
			else if pname == ">>" then
				v.ret(v.new_expr("(byte)({arguments[0]} >> {arguments[1]})", ret.as(not null)))
				return true
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return true
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return true
			else if pname == "<" then
				v.ret(v.new_expr("{arguments[0]} < {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">" then
				v.ret(v.new_expr("{arguments[0]} > {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "<=" then
				v.ret(v.new_expr("{arguments[0]} <= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">=" then
				v.ret(v.new_expr("{arguments[0]} >= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "to_i" then
				v.ret(v.new_expr("(int){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "to_f" then
				v.ret(v.new_expr("(double){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "ascii" then
				v.ret(v.new_expr("{arguments[0]}", ret.as(not null)))
				return true
			end
		else if cname == "Bool" then
			if pname == "output" then
				v.add("System.out.println({arguments[0]});")
				v.ret(v.null_instance)
				return true
			else if pname == "object_id" then
				v.ret(v.new_expr("{arguments[0]}?1:0", ret.as(not null)))
				return true
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return true
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return true
			end
		else if cname == "Float" then
			if pname == "output" then
				v.add "if({arguments[0]} == Double.POSITIVE_INFINITY) \{"
				v.add "System.out.println(\"inf\");"
				v.add "\} else if({arguments[0]} == Double.POSITIVE_INFINITY) \{"
				v.add "System.out.println(\"-inf\");"
				v.add "\} else \{"
				var df = v.get_name("df")
				v.add "java.text.DecimalFormat {df} = new java.text.DecimalFormat(\"0.000000\");"
				v.add "System.out.println({df}.format({arguments[0]}));"
				v.add "\}"
				v.ret(v.null_instance)
				return true
			else if pname == "object_id" then
				v.ret(v.new_expr("(int){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "+" then
				v.ret(v.new_expr("{arguments[0]} + {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "-" then
				v.ret(v.new_expr("{arguments[0]} - {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "unary -" then
				v.ret(v.new_expr("-{arguments[0]}", ret.as(not null)))
				return true
			else if pname == "unary +" then
				v.ret(arguments[0])
				return true
			else if pname == "succ" then
				v.ret(v.new_expr("{arguments[0]} + 1", ret.as(not null)))
				return true
			else if pname == "prec" then
				v.ret(v.new_expr("{arguments[0]} - 1", ret.as(not null)))
				return true
			else if pname == "*" then
				v.ret(v.new_expr("{arguments[0]} * {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "/" then
				v.ret(v.new_expr("{arguments[0]} / {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "==" then
				v.ret(v.equal_test(arguments[0], arguments[1]))
				return true
			else if pname == "!=" then
				var res = v.equal_test(arguments[0], arguments[1])
				v.ret(v.new_expr("!{res}", ret.as(not null)))
				return true
			else if pname == "<" then
				v.ret(v.new_expr("{arguments[0]} < {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">" then
				v.ret(v.new_expr("{arguments[0]} > {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "<=" then
				v.ret(v.new_expr("{arguments[0]} <= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == ">=" then
				v.ret(v.new_expr("{arguments[0]} >= {arguments[1]}", ret.as(not null)))
				return true
			else if pname == "to_i" then
				v.ret(v.new_expr("(int){arguments[0]}", ret.as(not null)))
				return true
			else if pname == "to_b" then
				v.ret(v.new_expr("(byte){arguments[0]}", ret.as(not null)))
				return true
			end
		end
		if pname == "exit" then
			v.add("System.exit({arguments[1]});")
			v.ret(v.null_instance)
			return true
		else if pname == "sys" then
			# TODO singleton
			var main_type = v.compiler.mainmodule.sys_type.as(not null)
			var sys = main_type.mclass
			v.ret(v.new_expr("new RTVal({sys.rt_name}.get{sys.rt_name}())", main_type))
			return true
		else if pname == "object_id" then
			v.ret(v.new_expr("{arguments[0]}.hashCode()", ret.as(not null)))
			return true
		else if pname == "is_same_type" then
			v.ret(v.is_same_type_test(arguments[0], arguments[1]))
			return true
		else if pname == "is_same_instance" then
			v.ret(v.equal_test(arguments[0], arguments[1]))
			return true
		else if pname == "output_class_name" then
			v.add("System.out.println({arguments[0]}.rtclass.class_name);")
			v.ret(v.null_instance)
			return true
		end
		return false
	end
end

redef class AAttrPropdef
	redef fun compile_to_java(v, mpropdef, arguments) do
		v.current_node = self
		if mpropdef == mreadpropdef then
			compile_getter(v, mpropdef, arguments)
		else if mpropdef == mwritepropdef then
			compile_setter(v, mpropdef, arguments)
		else
			abort
		end
		v.current_node = null
	end

	# Compile the setter method
	private fun compile_setter(v: JavaCompilerVisitor, mpropdef: MPropDef, arguments: Array[RuntimeVariable]) do
		var mtype = v.compiler.mainmodule.object_type
		var recv = arguments.first
		var val = v.new_expr("args[1]", mtype)
		v.write_attribute(self.mpropdef.as(not null).mproperty, recv, val)
		v.ret v.null_instance
	end

	# Compile the getter method
	private fun compile_getter(v: JavaCompilerVisitor, mpropdef: MPropDef, arguments: Array[RuntimeVariable]) do
		var recv = arguments.first
		v.ret v.read_attribute(self.mpropdef.as(not null).mproperty, recv)
	end

	private fun init_expr(v: JavaCompilerVisitor, recv: RuntimeVariable) do
		if has_value and not is_lazy and not n_expr isa ANullExpr then evaluate_expr(v, recv)
	end

	# Evaluate, store and return the default value of the attribute
	private fun evaluate_expr(v: JavaCompilerVisitor, recv: RuntimeVariable): RuntimeVariable do
		var old = v.frame
		var frame = new JavaStaticFrame(v, self.mreadpropdef.as(not null), recv.mcasttype.undecorate.as(MClassType), [recv])
		v.frame = frame

		var value
		var mtype = self.mtype
		assert mtype != null

		var nexpr = self.n_expr
		var nblock = self.n_block
		if nexpr != null then
			value = v.expr(nexpr, mtype)
		else if nblock != null then
			value = v.new_var(mtype)
			frame.returnvar = value
			frame.returnlabel = v.get_name("RET_LABEL")
			v.add("{frame.returnlabel.as(not null)}: \{")
			v.stmt(nblock)
			v.add("\}")
		else
			abort
		end

		v.write_attribute(self.mpropdef.as(not null).mproperty, recv, value)
		v.frame = old
		return value
	end
end

redef class AExpr
	# Try to compile self as an expression
	# Do not call this method directly, use `v.expr` instead
	private fun expr(v: JavaCompilerVisitor): nullable RuntimeVariable do
		v.info("NOT YET IMPLEMENTED {class_name}::expr")
		return null
	end

	# Try to compile self as a statement
	# Do not call this method directly, use `v.stmt` instead
	private fun stmt(v: JavaCompilerVisitor) do expr(v)
end

redef class ABlockExpr
	redef fun stmt(v)
	do
		for e in self.n_expr do v.stmt(e)
	end
	redef fun expr(v)
	do
		var last = self.n_expr.last
		for e in self.n_expr do
			if e == last then break
			v.stmt(e)
		end
		return v.expr(last, null)
	end
end

redef class ASendExpr
	redef fun expr(v) do
		var recv = v.expr(n_expr, null)
		var callsite = callsite.as(not null)
		var args = v.varargize(callsite.mpropdef, callsite.signaturemap, recv, raw_arguments)
		return v.compile_callsite(callsite, args)
	end
end

redef class ANewExpr
	redef fun expr(v)
	do
		var mtype = self.recvtype
		assert mtype != null

		if mtype.mclass.name == "NativeArray" then
			# TODO handle native arrays
			v.info("NOT YET IMPLEMENTED new NativeArray")
		end

		var recv = v.init_instance(mtype)

		var callsite = self.callsite
		if callsite == null then return recv

		var args = v.varargize(callsite.mpropdef, callsite.signaturemap, recv, self.n_args.n_exprs)
		var res2 = v.compile_callsite(callsite, args)
		if res2 != null then
			return res2
		end
		return recv
	end
end

redef class ASuperExpr
	redef fun expr(v)
	do
		var frame = v.frame
		assert frame != null
		var recv = frame.arguments.first

		var callsite = self.callsite
		if callsite != null then
			var args

			if self.n_args.n_exprs.is_empty then
				# Add automatic arguments for the super init call
				args = [recv]
				for i in [0..callsite.msignature.arity[ do
					args.add(frame.arguments[i+1])
				end
			else
				args = v.varargize(callsite.mpropdef, callsite.signaturemap, recv, self.n_args.n_exprs)
			end

			# Super init call
			var res = v.compile_callsite(callsite, args)
			return res
		end

		var mpropdef = self.mpropdef.as(not null)

		var args
		if self.n_args.n_exprs.is_empty then
			args = frame.arguments
		else
			args = v.varargize(mpropdef, signaturemap, recv, self.n_args.n_exprs)
		end

		# Standard call-next-method
		return v.supercall(mpropdef, recv.mtype.as(MClassType), args)
	end
end

redef class ASelfExpr
	redef fun expr(v) do return v.frame.as(not null).arguments.first
end

redef class AImplicitSelfExpr
	redef fun expr(v) do return v.frame.as(not null).arguments.first
end

redef class AAttrExpr
	redef fun expr(v) do
		var recv = v.expr(self.n_expr, null)
		var mproperty = self.mproperty.as(not null)
		return v.read_attribute(mproperty, recv)
	end
end

redef class AAttrAssignExpr
	redef fun expr(v) do
		var recv = v.expr(self.n_expr, null)
		var i = v.expr(self.n_value, null)
		var mproperty = self.mproperty.as(not null)
		v.write_attribute(mproperty, recv, i)
		return i
	end
end

redef class AAttrReassignExpr
	redef fun stmt(v) do
		var recv = v.expr(self.n_expr, null)
		var value = v.expr(self.n_value, null)
		var mproperty = self.mproperty.as(not null)
		var attr = v.read_attribute(mproperty, recv)
		var res = v.compile_callsite(self.reassign_callsite.as(not null), [attr, value])
		assert res != null
		v.write_attribute(mproperty, recv, res)
	end
end

redef class AIssetAttrExpr
	redef fun expr(v) do
		var recv = v.expr(self.n_expr, null)
		var mproperty = self.mproperty.as(not null)
		return v.isset_attribute(mproperty, recv)
	end
end

redef class AReturnExpr
	redef fun stmt(v) do
		var nexpr = self.n_expr
		var frame = v.frame
		assert frame != null
		if nexpr != null then
			v.ret(v.expr(nexpr, frame.returnvar.as(not null).mtype))
		else
			v.ret(v.null_instance)
		end
	end
end

redef class AIfExpr
	redef fun stmt(v) do
		var cond = v.expr_bool(self.n_expr)
		v.add("if ({cond})\{")
		v.stmt(self.n_then)
		v.add("\} else \{")
		v.stmt(self.n_else)
		v.add("\}")
	end

	redef fun expr(v) do
		var res = v.new_var(self.mtype.as(not null))
		var cond = v.expr_bool(self.n_expr)
		v.add("if ({cond})\{")
		v.assign(res, v.expr(self.n_then.as(not null), null))
		v.add("\} else \{")
		v.assign(res, v.expr(self.n_else.as(not null), null))
		v.add("\}")
		return res
	end
end

redef class ADoExpr
	redef fun stmt(v)
	do
		v.add_escape_label(break_mark)
		v.add "\{"
		v.stmt(self.n_block)
		v.add "\}"
	end
end

redef class AWhileExpr
	redef fun stmt(v)
	do
		v.add_escape_label(break_mark)
		v.add_escape_label(continue_mark)
		v.add("for(;;) \{")
		var cond = v.expr_bool(self.n_expr)
		v.add("if (!{cond}) break;")
		v.stmt(self.n_block)
		v.add("\}")
	end
end

redef class ALoopExpr
	redef fun stmt(v)
	do
		v.add_escape_label(break_mark)
		v.add_escape_label(continue_mark)
		v.add("for(;;) \{")
		v.stmt(self.n_block)
		v.add("\}")
	end
end

redef class AEscapeExpr
	redef fun stmt(v) do v.add("break BREAK_{v.escapemark_name(escapemark)};")
end

redef class AVardeclExpr
	redef fun stmt(v) do
		var variable = self.variable.as(not null)
		var ne = self.n_expr
		var decl = v.variable(variable)
		if ne != null then
			var i = v.expr(ne, variable.declared_type)
			v.assign(decl, i)
		end
	end
end

redef class AVarExpr
	redef fun expr(v) do
		return v.variable(self.variable.as(not null))
	end
end

redef class AVarAssignExpr
	redef fun expr(v) do
		var variable = self.variable.as(not null)
		var i = v.expr(self.n_value, variable.declared_type)
		v.assign(v.variable(variable), i)
		return i
	end
end


redef class AAssertExpr
	redef fun stmt(v) do
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

redef class AImpliesExpr
	redef fun expr(v) do
		var res = v.new_var(mtype.as(not null))
		var i1 = v.expr_bool(n_expr)
		v.add("if (!{i1}) \{")
		v.add("{res} = true;")
		v.add("\} else \{")
		var i2 = v.expr_bool(n_expr2)
		v.add("{res} = {i2};")
		v.add("\}")
		return res
	end
end

redef class AOrElseExpr
	redef fun expr(v)
	do
		var res = v.new_var(self.mtype.as(not null))
		var i1 = v.expr(self.n_expr, null)
		v.add("if ({i1} != null && !{i1}.is_null()) \{")
		v.assign(res, i1)
		v.add("\} else \{")
		var i2 = v.expr(self.n_expr2, null)
		v.assign(res, i2)
		v.add("\}")
		return res
	end
end

redef class AOrExpr
	redef fun expr(v) do
		var res = v.new_var(self.mtype.as(not null))
		var i1 = v.expr_bool(self.n_expr)
		v.add("if ({i1}) \{")
		v.add("{res} = true;")
		v.add("\} else \{")
		var i2 = v.expr_bool(self.n_expr2)
		v.add("{res} = {i2};")
		v.add("\}")
		return res
	end
end

redef class AAndExpr
	redef fun expr(v) do
		var res = v.new_var(self.mtype.as(not null))
		var i1 = v.expr_bool(self.n_expr)
		v.add("if (!{i1}) \{")
		v.add("{res} = false;")
		v.add("\} else \{")
		var i2 = v.expr_bool(self.n_expr2)
		v.add("{res} = {i2};")
		v.add("\}")
		return res
	end
end

redef class ANotExpr
	redef fun expr(v) do
		var cond = v.expr_bool(self.n_expr)
		return v.new_expr("!{cond}", self.mtype.as(not null))
	end
end

redef class AIntegerExpr
	redef fun expr(v) do
		if value isa Int then
			return v.int_instance(self.value.as(Int))
		else if value isa Byte then
			return v.byte_instance(self.value.as(Byte))
		else
			# Should not happen
			abort
		end
	end
end

redef class AFloatExpr
	redef fun expr(v) do return v.float_instance("{self.n_float.text}") # FIXME use value, not n_float
end

redef class ACharExpr
	redef fun expr(v) do return v.char_instance(self.value.as(not null))
end

redef class ATrueExpr
	redef fun expr(v) do return v.bool_instance(true)
end

redef class AFalseExpr
	redef fun expr(v) do return v.bool_instance(false)
end

redef class ANullExpr
	redef fun expr(v) do return v.null_instance
end

redef class AAsCastExpr
	redef fun expr(v)
	do
		var i = v.expr(n_expr, null)
		v.add_cast(i, mtype.as(not null))
		return i
	end
end

redef class AAsNotnullExpr
	redef fun expr(v) do
		var i = v.expr(n_expr, null)
		if i.mtype.is_java_primitive then return i

		v.add("if ({i} == null || {i}.is_null()) \{")
		v.add_abort("Cast failed")
		v.add("\}")
		return i
	end
end

redef class AIsaExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr, null)
		var cast_type = self.cast_type
		if cast_type == null then return null # no-no on broken node
		return v.type_test(i, cast_type)
	end
end

redef class AParExpr
	redef fun expr(v) do return v.expr(self.n_expr, null)
end

redef class AAbortExpr
	redef fun stmt(v) do v.add_abort("Aborted")
end

redef class ADebugTypeExpr
	redef fun stmt(v) do end # do nothing
end
