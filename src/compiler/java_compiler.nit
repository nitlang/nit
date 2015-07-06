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
import frontend

redef class ToolContext

	# Where to output the generated binary
	var opt_output = new OptionString("Output file", "-o", "--output")

	# Where to output tmp files
	var opt_compile_dir = new OptionString("Directory used to generate temporary files", "--compile-dir")

	redef init do
		super
		option_context.add_option(opt_output, opt_compile_dir)
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

		build_with_make(compiler, jfiles)
		write_shell_script(compiler)

		time1 = get_time
		toolcontext.info("*** END COMPILING JAVA: {time1-time0} ***", 2)
	end

	# Write files managed by `compiler` into concrete files
	fun write_java_files(compiler: JavaCompiler): Array[String] do
		var jfiles = new Array[String]
		for f in compiler.files do
			var file = new FileWriter.open("{compiler.compile_dir}/{f.filename}")
			for line in f.lines do file.write(line)
			file.close
			jfiles.add(f.filename)
		end
		return jfiles
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

		# compile class structures
		compile_mclasses_to_java

		# compile method structures
		compile_mmethods_to_java

		# TODO compile main
		modelbuilder.toolcontext.info("NOT YET IMPLEMENTED", 0)
	end

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
			# TODO mtype = self.anchor(mtype)
			var res = decl_var(name, mtype)
			variables[variable] = res
			return res
		end
	end

	# Return a new uninitialized local RuntimeVariable with `name`
	fun decl_var(name: String, mtype: MType): RuntimeVariable do
		var res = new RuntimeVariable(name, mtype, mtype)
		add("{mtype.java_type} {name} /* : {mtype} */;")
		return res
	end

	# Return a new uninitialized local RuntimeVariable
	fun new_var(mtype: MType): RuntimeVariable do
		# TODO mtype = self.anchor(mtype)
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

	# Code generation

	# Add a line (will be suffixed by `\n`)
	fun add(line: String) do file.lines.add("{line}\n")

	# Add a new partial line (no `\n` suffix)
	fun addn(line: String) do file.lines.add(line)

	# Compile a statement (if any)
	fun stmt(nexpr: nullable AExpr) do
		if nexpr == null then return
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
		assert res != null
		current_node = old
		return res
	end

	# Correctly assign a left and a right value
	# Boxing and unboxing is performed if required
	fun assign(left, right: RuntimeVariable) do
		# TODO right = autobox(right, left.mtype)
		add("{left} = {right};")
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
		var node = current_node
		if node != null then
			add("System.err.print(\" ({node.location.short_location})\");")
		end
		add("System.err.println(\"\");")
		add("System.exit(1);")
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
	# ENSURE `result == (java_type != "Object")`
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
		else if mclass.name == "NativeString" then
			return "String"
		else if mclass.name == "NativeArray" then
			return "Array"
		end
		return "RTVal"
	end
end

redef class MClass

	# Runtime name
	private fun rt_name: String do return "RTClass_{intro.mmodule.jname}_{jname}"

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

redef class MMethodDef

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

		if is_abstract then
			# TODO compile abstract
			v.info("NOT YET IMPLEMENTED call to abstract method")
			v.add("return null;")
			return
		end

		if node isa APropdef then
			node.compile_to_java(v, self)
		else if node isa AClassdef then
			# TODO compile attributes
			v.info("NOT YET IMPLEMENTED attribute handling")
			v.add("return null;")
		else
			abort
		end
	end
end

redef class APropdef

	# Compile that property definition to java code
	fun compile_to_java(v: JavaCompilerVisitor, mpropdef: MMethodDef) do
		v.info("NOT YET IMPLEMENTED {class_name}::compile_to_java")
	end
end

redef class AMethPropdef
	redef fun compile_to_java(v, mpropdef) do
		# TODO Call the implicit super-init

		# Compile intern methods
		if mpropdef.is_intern then
			v.info("NOT YET IMPLEMENTED {class_name}::compile_intern")
			# TODO if compile_intern_to_java(v, mpropdef, arguments) then return
			v.add("return null;")
			return
		end

		# Compile block if any
		var n_block = n_block
		if n_block != null then
			v.stmt(n_block)
			return
		end
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

redef class ASelfExpr
	redef fun expr(v) do return v.frame.as(not null).arguments.first
end

redef class AImplicitSelfExpr
	redef fun expr(v) do return v.frame.as(not null).arguments.first
end

redef class AIntExpr
	redef fun expr(v) do return v.int_instance(self.value.as(not null))
end

redef class AByteExpr
	redef fun expr(v) do return v.byte_instance(self.value.as(not null))
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

redef class AAbortExpr
	redef fun stmt(v) do v.add_abort("Aborted")
end

redef class ADebugTypeExpr
	redef fun stmt(v) do end # do nothing
end
