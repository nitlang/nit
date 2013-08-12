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

# Abstract compiler
module abstract_compiler

import literal
import typing
import auto_super_init
import frontend

# Add compiling options
redef class ToolContext
	# --output
	var opt_output: OptionString = new OptionString("Output file", "-o", "--output")
	# --no-cc
	var opt_no_cc: OptionBool = new OptionBool("Do not invoke C compiler", "--no-cc")
	# --cc-paths
	var opt_cc_path: OptionArray = new OptionArray("Set include path for C header files (may be used more than once)", "--cc-path")
	# --make-flags
	var opt_make_flags: OptionString = new OptionString("Additional options to make", "--make-flags")
	# --hardening
	var opt_hardening: OptionBool = new OptionBool("Generate contracts in the C code against bugs in the compiler", "--hardening")
	# --no-shortcut-range
	var opt_no_shortcut_range: OptionBool = new OptionBool("Always insantiate a range and its iterator on 'for' loops", "--no-shortcut-range")
	# --no-check-covariance
	var opt_no_check_covariance: OptionBool = new OptionBool("Disable type tests of covariant parameters (dangerous)", "--no-check-covariance")
	# --no-check-initialization
	var opt_no_check_initialization: OptionBool = new OptionBool("Disable isset tests at the end of constructors (dangerous)", "--no-check-initialization")
	# --no-check-assert
	var opt_no_check_assert: OptionBool = new OptionBool("Disable the evaluation of explicit 'assert' and 'as' (dangerous)", "--no-check-assert")
	# --no-check-autocast
	var opt_no_check_autocast: OptionBool = new OptionBool("Disable implicit casts on unsafe expression usage (dangerous)", "--no-check-autocast")
	# --no-check-other
	var opt_no_check_other: OptionBool = new OptionBool("Disable implicit tests: unset attribute, null receiver (dangerous)", "--no-check-other")
	# --typing-test-metrics
	var opt_typing_test_metrics: OptionBool = new OptionBool("Enable static and dynamic count of all type tests", "--typing-test-metrics")

	redef init
	do
		super
		self.option_context.add_option(self.opt_output, self.opt_no_cc, self.opt_make_flags, self.opt_hardening, self.opt_no_shortcut_range)
		self.option_context.add_option(self.opt_no_check_covariance, self.opt_no_check_initialization, self.opt_no_check_assert, self.opt_no_check_autocast, self.opt_no_check_other)
		self.option_context.add_option(self.opt_typing_test_metrics)
	end
end

redef class ModelBuilder
	# The list of directories to search for included C headers (-I for C compilers)
	# The list is initially set with :
	#   * the toolcontext --cc-path option
	#   * the NIT_CC_PATH environment variable
	#   * some heuristics including the NIT_DIR environment variable and the progname of the process
	# Path can be added (or removed) by the client
	var cc_paths = new Array[String]

	redef init(model, toolcontext)
	do
		super

		# Look for the the Nit clib path
		var path_env = "NIT_DIR".environ
		if not path_env.is_empty then
			var libname = "{path_env}/clib"
			if libname.file_exists then cc_paths.add(libname)
		end

		var libname = "{sys.program_name.dirname}/../clib"
		if libname.file_exists then cc_paths.add(libname.simplify_path)

		if cc_paths.is_empty then
			toolcontext.error(null, "Cannot determine the nit clib path. define envvar NIT_DIR.")
		end

		# Add user defined cc_paths
		cc_paths.append(toolcontext.opt_cc_path.value)

		path_env = "NIT_CC_PATH".environ
		if not path_env.is_empty then
			cc_paths.append(path_env.split_with(':'))
		end

	end

	protected fun write_and_make(compiler: AbstractCompiler)
	do
		var mainmodule = compiler.mainmodule

		# Generate the .h and .c files
		# A single C file regroups many compiled rumtime functions
		# Note that we do not try to be clever an a small change in a Nit source file may change the content of all the generated .c files
		var time0 = get_time
		self.toolcontext.info("*** WRITING C ***", 1)

		".nit_compile".mkdir

		var outname = self.toolcontext.opt_output.value
		if outname == null then
			outname = "{mainmodule.name}"
		end

		var hfilename = compiler.header.file.name + ".h"
		var hfilepath = ".nit_compile/{hfilename}"
		var h = new OFStream.open(hfilepath)
		for l in compiler.header.decl_lines do
			h.write l
			h.write "\n"
		end
		for l in compiler.header.lines do
			h.write l
			h.write "\n"
		end
		h.close

		var cfiles = new Array[String]

		for f in compiler.files do
			var i = 0
			var hfile: nullable OFStream = null
			var count = 0
			var cfilename = ".nit_compile/{f.name}.0.h"
			hfile = new OFStream.open(cfilename)
			hfile.write "#include \"{hfilename}\"\n"
			for key in f.required_declarations do
				if not compiler.provided_declarations.has_key(key) then
					print "No provided declaration for {key}"
					abort
				end
				hfile.write compiler.provided_declarations[key]
				hfile.write "\n"
			end
			hfile.close
			var file: nullable OFStream = null
			for vis in f.writers do
				if vis == compiler.header then continue
				var total_lines = vis.lines.length + vis.decl_lines.length
				if total_lines == 0 then continue
				count += total_lines
				if file == null or count > 10000  then
					i += 1
					if file != null then file.close
					cfilename = ".nit_compile/{f.name}.{i}.c"
					self.toolcontext.info("new C source files to compile: {cfilename}", 3)
					cfiles.add(cfilename)
					file = new OFStream.open(cfilename)
					file.write "#include \"{f.name}.0.h\"\n"
					count = total_lines
				end
				for l in vis.decl_lines do
					file.write l
					file.write "\n"
				end
				for l in vis.lines do
					file.write l
					file.write "\n"
				end
			end
			if file != null then file.close
		end

		self.toolcontext.info("Total C source files to compile: {cfiles.length}", 2)

		# Generate the Makefile

		var makename = ".nit_compile/{mainmodule.name}.mk"
		var makefile = new OFStream.open(makename)

		var cc_includes = ""
		for p in cc_paths do
			#p = "..".join_path(p)
			cc_includes += " -I \"" + p + "\""
		end
		makefile.write("CC = ccache cc\nCFLAGS = -g -O2\nCINCL = {cc_includes}\nLDFLAGS ?= \nLDLIBS  ?= -lm -lgc\n\n")
		makefile.write("all: {outname}\n\n")

		var ofiles = new Array[String]
		# Compile each generated file
		for f in cfiles do
			var o = f.strip_extension(".c") + ".o"
			makefile.write("{o}: {f}\n\t$(CC) $(CFLAGS) $(CINCL) -D NONITCNI -c -o {o} {f}\n\n")
			ofiles.add(o)
		end

		# Add gc_choser.h to aditionnal bodies
		var gc_chooser = new ExternCFile("{cc_paths.first}/gc_chooser.c", "-DWITH_LIBGC")
		compiler.extern_bodies.add(gc_chooser)

		# Compile each required extern body into a specific .o
		for f in compiler.extern_bodies do
			var basename = f.filename.basename(".c")
			var o = ".nit_compile/{basename}.extern.o"
			makefile.write("{o}: {f.filename}\n\t$(CC) $(CFLAGS) -D NONITCNI {f.cflags} -c -o {o} {f.filename}\n\n")
			ofiles.add(o)
		end

		# Link edition
		makefile.write("{outname}: {ofiles.join(" ")}\n\t$(CC) $(LDFLAGS) -o {outname} {ofiles.join(" ")} $(LDLIBS)\n\n")
		# Clean
		makefile.write("clean:\n\trm {ofiles.join(" ")} 2>/dev/null\n\n")
		makefile.close
		self.toolcontext.info("Generated makefile: {makename}", 2)

		var time1 = get_time
		self.toolcontext.info("*** END WRITING C: {time1-time0} ***", 2)

		# Execute the Makefile

		if self.toolcontext.opt_no_cc.value then return

		time0 = time1
		self.toolcontext.info("*** COMPILING C ***", 1)
		var makeflags = self.toolcontext.opt_make_flags.value
		if makeflags == null then makeflags = ""
		self.toolcontext.info("make -B -f {makename} -j 4 {makeflags}", 2)

		var res
		if self.toolcontext.verbose_level >= 3 then
			res = sys.system("make -B -f {makename} -j 4 {makeflags} 2>&1")
		else
			res = sys.system("make -B -f {makename} -j 4 {makeflags} 2>&1 >/dev/null")
		end
		if res != 0 then
			toolcontext.error(null, "make failed! Error code: {res}.")
		end

		time1 = get_time
		self.toolcontext.info("*** END COMPILING C: {time1-time0} ***", 2)
	end
end

# Singleton that store the knowledge about the compilation process
abstract class AbstractCompiler
	type VISITOR: AbstractCompilerVisitor

	# The main module of the program currently compiled
	# Is assigned during the separate compilation
	var mainmodule: MModule writable

	# The real main module of the program
	var realmainmodule: MModule

	# The modeulbuilder used to know the model and the AST
	var modelbuilder: ModelBuilder protected writable

	# Is hardening asked? (see --hardening)
	fun hardening: Bool do return self.modelbuilder.toolcontext.opt_hardening.value

	init(mainmodule: MModule, modelbuilder: ModelBuilder)
	do
		self.mainmodule = mainmodule
		self.realmainmodule = mainmodule
		self.modelbuilder = modelbuilder
	end

	# Force the creation of a new file
	# The point is to avoid contamination between must-be-compiled-separately files
	fun new_file(name: String): CodeFile
	do
		var f = new CodeFile(name)
		self.files.add(f)
		return f
	end

	# The list of all associated files
	# Used to generate .c files
	var files: List[CodeFile] = new List[CodeFile]

	# Initialize a visitor specific for a compiler engine
	fun new_visitor: VISITOR is abstract

	# Where global declaration are stored (the main .h)
	var header: CodeWriter writable

	# Provide a declaration that can be requested (before or latter) by a visitor
	fun provide_declaration(key: String, s: String)
	do
		if self.provided_declarations.has_key(key) then
			assert self.provided_declarations[key] == s
		end
		self.provided_declarations[key] = s
	end

	private var provided_declarations = new HashMap[String, String]

	# Compile C headers
	# This method call compile_header_strucs method that has to be refined
	fun compile_header do
		var v = self.header
		self.header.add_decl("#include <stdlib.h>")
		self.header.add_decl("#include <stdio.h>")
		self.header.add_decl("#include <string.h>")
		self.header.add_decl("#include <gc_chooser.h>")

		compile_header_structs

		# Global variable used by the legacy native interface
		self.header.add_decl("extern int glob_argc;")
		self.header.add_decl("extern char **glob_argv;")
		self.header.add_decl("extern val *glob_sys;")
	end

	# Declaration of structures the live Nit types
	protected fun compile_header_structs is abstract

	# Generate the main C function.
	# This function:
	# 	* allocate the Sys object if it exists
	# 	* call init if is exists
	# 	* call main if it exists
	fun compile_main_function
	do
		var v = self.new_visitor
		v.add_decl("int glob_argc;")
		v.add_decl("char **glob_argv;")
		v.add_decl("val *glob_sys;")

		if self.modelbuilder.toolcontext.opt_typing_test_metrics.value then
			for tag in count_type_test_tags do
				v.add_decl("long count_type_test_resolved_{tag};")
				v.add_decl("long count_type_test_unresolved_{tag};")
				v.add_decl("long count_type_test_skipped_{tag};")
				v.compiler.header.add_decl("extern long count_type_test_resolved_{tag};")
				v.compiler.header.add_decl("extern long count_type_test_unresolved_{tag};")
				v.compiler.header.add_decl("extern long count_type_test_skipped_{tag};")
			end
		end
		v.add_decl("int main(int argc, char** argv) \{")
		v.add("glob_argc = argc; glob_argv = argv;")
		v.add("initialize_gc_option();")
		var main_type = mainmodule.sys_type
		if main_type != null then
			var mainmodule = v.compiler.mainmodule
			var glob_sys = v.init_instance(main_type)
			v.add("glob_sys = {glob_sys};")
			var main_init = mainmodule.try_get_primitive_method("init", main_type.mclass)
			if main_init != null then
				v.send(main_init, [glob_sys])
			end
			var main_method = mainmodule.try_get_primitive_method("main", main_type.mclass)
			if main_method != null then
				v.send(main_method, [glob_sys])
			end
		end

		if self.modelbuilder.toolcontext.opt_typing_test_metrics.value then
			v.add_decl("long count_type_test_resolved_total = 0;")
			v.add_decl("long count_type_test_unresolved_total = 0;")
			v.add_decl("long count_type_test_skipped_total = 0;")
			v.add_decl("long count_type_test_total_total = 0;")
			for tag in count_type_test_tags do
				v.add_decl("long count_type_test_total_{tag};")
				v.add("count_type_test_total_{tag} = count_type_test_resolved_{tag} + count_type_test_unresolved_{tag} + count_type_test_skipped_{tag};")
				v.add("count_type_test_resolved_total += count_type_test_resolved_{tag};")
				v.add("count_type_test_unresolved_total += count_type_test_unresolved_{tag};")
				v.add("count_type_test_skipped_total += count_type_test_skipped_{tag};")
				v.add("count_type_test_total_total += count_type_test_total_{tag};")
			end
			v.add("printf(\"# dynamic count_type_test: total %l\\n\");")
			v.add("printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");")
			var tags = count_type_test_tags.to_a
			tags.add("total")
			for tag in tags do
				v.add("printf(\"{tag}\");")
				v.add("printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_{tag}, 100.0*count_type_test_resolved_{tag}/count_type_test_total_total);")
				v.add("printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_{tag}, 100.0*count_type_test_unresolved_{tag}/count_type_test_total_total);")
				v.add("printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_{tag}, 100.0*count_type_test_skipped_{tag}/count_type_test_total_total);")
				v.add("printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_{tag}, 100.0*count_type_test_total_{tag}/count_type_test_total_total);")
			end
		end
		v.add("return 0;")
		v.add("\}")
	end

	# List of additional .c files required to compile (native interface)
	var extern_bodies = new Array[ExternCFile]

	# This is used to avoid adding an extern file more than once
	private var seen_extern = new ArraySet[String]

	# Generate code that check if an instance is correctly initialized
	fun generate_check_init_instance(mtype: MClassType) is abstract

	# Generate code that initialize the attributes on a new instance
	fun generate_init_attr(v: VISITOR, recv: RuntimeVariable, mtype: MClassType)
	do
		var cds = mtype.collect_mclassdefs(self.mainmodule).to_a
		self.mainmodule.linearize_mclassdefs(cds)
		for cd in cds do
			var n = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in n.n_propdefs do
				if npropdef isa AAttrPropdef then
					npropdef.init_expr(v, recv)
				end
			end
		end
	end

	# Generate code that check if an attribute is correctly initialized
	fun generate_check_attr(v: VISITOR, recv: RuntimeVariable, mtype: MClassType)
	do
		var cds = mtype.collect_mclassdefs(self.mainmodule).to_a
		self.mainmodule.linearize_mclassdefs(cds)
		for cd in cds do
			var n = self.modelbuilder.mclassdef2nclassdef[cd]
			for npropdef in n.n_propdefs do
				if npropdef isa AAttrPropdef then
					npropdef.check_expr(v, recv)
				end
			end
		end
	end

	# stats

	var count_type_test_tags: Array[String] = ["isa", "as", "auto", "covariance", "erasure"]
	var count_type_test_resolved: HashMap[String, Int] = init_count_type_test_tags
	var count_type_test_unresolved: HashMap[String, Int] = init_count_type_test_tags
	var count_type_test_skipped: HashMap[String, Int] = init_count_type_test_tags

	protected fun init_count_type_test_tags: HashMap[String, Int]
	do
		var res = new HashMap[String, Int]
		for tag in count_type_test_tags do
			res[tag] = 0
		end
		return res
	end

	# Display stats about compilation process
	# Metrics used:
	#	* type tests against resolved types (x isa Collection[Animal])
	#	* type tests against unresolved types (x isa Collection[E])
	#	* type tests skipped
	#	* type tests total
	# 	*
	fun display_stats
	do
		if self.modelbuilder.toolcontext.opt_typing_test_metrics.value then
			print "# static count_type_test"
			print "\tresolved:\tunresolved\tskipped\ttotal"
			var count_type_test_total = init_count_type_test_tags
			count_type_test_resolved["total"] = 0
			count_type_test_unresolved["total"] = 0
			count_type_test_skipped["total"] = 0
			count_type_test_total["total"] = 0
			for tag in count_type_test_tags do
				count_type_test_total[tag] = count_type_test_resolved[tag] + count_type_test_unresolved[tag] + count_type_test_skipped[tag]
				count_type_test_resolved["total"] += count_type_test_resolved[tag]
				count_type_test_unresolved["total"] += count_type_test_unresolved[tag]
				count_type_test_skipped["total"] += count_type_test_skipped[tag]
				count_type_test_total["total"] += count_type_test_total[tag]
			end
			var count_type_test = count_type_test_total["total"]
			var tags = count_type_test_tags.to_a
			tags.add("total")
			for tag in tags do
				printn tag
				printn "\t{count_type_test_resolved[tag]} ({div(count_type_test_resolved[tag],count_type_test)}%)"
				printn "\t{count_type_test_unresolved[tag]} ({div(count_type_test_unresolved[tag],count_type_test)}%)"
				printn "\t{count_type_test_skipped[tag]} ({div(count_type_test_skipped[tag],count_type_test)}%)"
				printn "\t{count_type_test_total[tag]} ({div(count_type_test_total[tag],count_type_test)}%)"
				print ""
			end
		end
	end

	# Division facility
	# Avoid division by zero by returning the string "n/a"
	fun div(a,b:Int):String
	do
		if b == 0 then return "n/a"
		return ((a*10000/b).to_f / 100.0).to_precision(2)
	end
end

# A file unit (may be more than one file if
# A file unit aim to be autonomous and is made or one or more `CodeWriter`s
class CodeFile
	var name: String
	var writers = new Array[CodeWriter]
	var required_declarations = new HashSet[String]
end

# Where to store generated lines
class CodeWriter
	var file: CodeFile
	var lines: List[String] = new List[String]
	var decl_lines: List[String] = new List[String]

	# Add a line in the main part of the generated C
	fun add(s: String) do self.lines.add(s)

	# Add a line in the
	# (used for local or global declaration)
	fun add_decl(s: String) do self.decl_lines.add(s)

	init(file: CodeFile)
	do
		self.file = file
		file.writers.add(self)
	end
end

# A visitor on the AST of property definition that generate the C code.
abstract class AbstractCompilerVisitor

	type COMPILER: AbstractCompiler

	# The associated compiler
	var compiler: COMPILER

	# The current visited AST node
	var current_node: nullable ANode writable = null

	# The current Frame
	var frame: nullable Frame writable

	# Alias for self.compiler.mainmodule.object_type
	fun object_type: MClassType do return self.compiler.mainmodule.object_type

	# Alias for self.compiler.mainmodule.bool_type
	fun bool_type: MClassType do return self.compiler.mainmodule.bool_type

	var writer: CodeWriter

	init(compiler: COMPILER)
	do
		self.compiler = compiler
		self.writer = new CodeWriter(compiler.files.last)
	end

	# Force to get the primitive class named `name' or abort
	fun get_class(name: String): MClass do return self.compiler.mainmodule.get_primitive_class(name)

	# Force to get the primitive property named `name' in the instance `recv' or abort
	fun get_property(name: String, recv: MType): MMethod
	do
		assert recv isa MClassType
		return self.compiler.modelbuilder.force_get_primitive_method(self.current_node.as(not null), name, recv.mclass, self.compiler.mainmodule)
	end

	fun compile_callsite(callsite: CallSite, args: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		return self.send(callsite.mproperty, args)
	end

	fun calloc_array(ret_type: MType, arguments: Array[RuntimeVariable]) is abstract

	fun native_array_def(pname: String, ret_type: nullable MType, arguments: Array[RuntimeVariable]) is abstract

	# Transform varargs, in raw arguments, into a single argument of type Array
	# Note: this method modify the given `args`
	# If there is no vararg, then `args` is not modified.
	fun varargize(mpropdef: MPropDef, msignature: MSignature, args: Array[RuntimeVariable])
	do
		var recv = args.first
		var vararg_rank = msignature.vararg_rank
		if vararg_rank >= 0 then
			assert args.length >= msignature.arity + 1 # because of self
			var rawargs = args
			args = new Array[RuntimeVariable]

			args.add(rawargs.first) # recv

			for i in [0..vararg_rank[ do
				args.add(rawargs[i+1])
			end

			var vararg_lastrank = vararg_rank + rawargs.length-1-msignature.arity
			var vararg = new Array[RuntimeVariable]
			for i in [vararg_rank..vararg_lastrank] do
				vararg.add(rawargs[i+1])
			end

			var elttype = msignature.mparameters[vararg_rank].mtype
			args.add(self.vararg_instance(mpropdef, recv, vararg, elttype))

			for i in [vararg_lastrank+1..rawargs.length-1[ do
				args.add(rawargs[i+1])
			end
			rawargs.clear
			rawargs.add_all(args)
		end
	end

	# Type handling

	# Anchor a type to the main module and the current receiver
	fun anchor(mtype: MType): MType
	do
		if not mtype.need_anchor then return mtype
		return mtype.anchor_to(self.compiler.mainmodule, self.frame.receiver)
	end

	fun resolve_for(mtype: MType, recv: RuntimeVariable): MType
	do
		if not mtype.need_anchor then return mtype
		return mtype.resolve_for(recv.mcasttype, self.frame.receiver, self.compiler.mainmodule, true)
	end

	# Unsafely cast a value to a new type
	# ie the result share the same C variable but my have a different mcasttype
	# NOTE: if the adaptation is useless then `value' is returned as it.
	# ENSURE: return.name == value.name
	fun autoadapt(value: RuntimeVariable, mtype: MType): RuntimeVariable
	do
		mtype = self.anchor(mtype)
		var valmtype = value.mcasttype
		if valmtype.is_subtype(self.compiler.mainmodule, null, mtype) then
			return value
		end

		if valmtype isa MNullableType and valmtype.mtype.is_subtype(self.compiler.mainmodule, null, mtype) then
			var res = new RuntimeVariable(value.name, valmtype, valmtype.mtype)
			return res
		else
			var res = new RuntimeVariable(value.name, valmtype, mtype)
			return res
		end
	end

	# Generate a super call from a method definition
	fun supercall(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable is abstract

	fun adapt_signature(m: MMethodDef, args: Array[RuntimeVariable]) is abstract

	# Box or unbox a value to another type iff a C type conversion is needed
 	# ENSURE: result.mtype.ctype == mtype.ctype
	fun autobox(value: RuntimeVariable, mtype: MType): RuntimeVariable is abstract

	#  Generate a polymorphic subtype test
	fun type_test(value: RuntimeVariable, mtype: MType, tag: String): RuntimeVariable is abstract

	#  Generate the code required to dynamically check if 2 objects share the same runtime type
	fun is_same_type_test(value1, value2: RuntimeVariable): RuntimeVariable is abstract

	#  Generate a Nit "is" for two runtime_variables
	fun equal_test(value1, value2: RuntimeVariable): RuntimeVariable is abstract

	# Sends

	#  Generate a static call on a method definition
	fun call(m: MMethodDef, recvtype: MClassType, args: Array[RuntimeVariable]): nullable RuntimeVariable is abstract

	#  Generate a polymorphic send for the method `m' and the arguments `args'
	fun send(m: MMethod, args: Array[RuntimeVariable]): nullable RuntimeVariable is abstract

	# Generate a monomorphic send for the method `m', the type `t' and the arguments `args'
	fun monomorphic_send(m: MMethod, t: MType, args: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		assert t isa MClassType
		var propdef = m.lookup_first_definition(self.compiler.mainmodule, t)
		return self.call(propdef, t, args)
	end

	# Attributes handling

	# Generate a polymorphic attribute is_set test
	fun isset_attribute(a: MAttribute, recv: RuntimeVariable): RuntimeVariable is abstract

	# Generate a polymorphic attribute read
	fun read_attribute(a: MAttribute, recv: RuntimeVariable): RuntimeVariable is abstract

	# Generate a polymorphic attribute write
	fun write_attribute(a: MAttribute, recv: RuntimeVariable, value: RuntimeVariable) is abstract

	# Checks

	# Add a check and an abort for a null reciever if needed
	fun check_recv_notnull(recv: RuntimeVariable)
	do
		if self.compiler.modelbuilder.toolcontext.opt_no_check_other.value then return

		var maybenull = recv.mcasttype isa MNullableType or recv.mcasttype isa MNullType
		if maybenull then
			self.add("if ({recv} == NULL) \{")
			self.add_abort("Reciever is null")
			self.add("\}")
		end
	end

	# Generate a check-init-instance
	fun check_init_instance(recv: RuntimeVariable, mtype: MClassType) is abstract

	# Names handling

	private var names: HashSet[String] = new HashSet[String]
	private var last: Int = 0

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

	# Return an unique and stable identifier associated with an escapemark
	fun escapemark_name(e: nullable EscapeMark): String
	do
		assert e != null
		if escapemark_names.has_key(e) then return escapemark_names[e]
		var name = e.name
		if name == null then name = "label"
		name = get_name(name)
		escapemark_names[e] = name
		return name
	end

	private var escapemark_names = new HashMap[EscapeMark, String]

	# Return a "const char*" variable associated to the classname of the dynamic type of an object
 	# NOTE: we do not return a RuntimeVariable "NativeString" as the class may not exist in the module/program
	fun class_name_string(value: RuntimeVariable): String is abstract

	# Variables handling

	protected var variables: HashMap[Variable, RuntimeVariable] = new HashMap[Variable, RuntimeVariable]

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

	# Return a new uninitialized local runtime_variable
	fun new_var(mtype: MType): RuntimeVariable
	do
		mtype = self.anchor(mtype)
		var name = self.get_name("var")
		var res = new RuntimeVariable(name, mtype, mtype)
		self.add_decl("{mtype.ctype} {name} /* : {mtype} */;")
		return res
	end

	# Return a new uninitialized named runtime_variable
	fun new_named_var(mtype: MType, name: String): RuntimeVariable
	do
		mtype = self.anchor(mtype)
		var res = new RuntimeVariable(name, mtype, mtype)
		self.add_decl("{mtype.ctype} {name} /* : {mtype} */;")
		return res
	end

	# Correctly assign a left and a right value
	# Boxing and unboxing is performed if required
	fun assign(left, right: RuntimeVariable)
	do
		right = self.autobox(right, left.mtype)
		self.add("{left} = {right};")
	end

	# Generate instances

	# Generate a alloc-instance + init-attributes
	fun init_instance(mtype: MClassType): RuntimeVariable is abstract

	# Generate an integer value
	fun int_instance(value: Int): RuntimeVariable
	do
		var res = self.new_var(self.get_class("Int").mclass_type)
		self.add("{res} = {value};")
		return res
	end

	# Generate a string value
	fun string_instance(string: String): RuntimeVariable
	do
		var mtype = self.get_class("String").mclass_type
		var name = self.get_name("varonce")
		self.add_decl("static {mtype.ctype} {name};")
		var res = self.new_var(mtype)
		self.add("if ({name}) \{")
		self.add("{res} = {name};")
		self.add("\} else \{")
		var nat = self.new_var(self.get_class("NativeString").mclass_type)
		self.add("{nat} = \"{string.escape_to_c}\";")
		var res2 = self.init_instance(mtype)
		self.add("{res} = {res2};")
		var length = self.int_instance(string.length)
		self.send(self.get_property("with_native", mtype), [res, nat, length])
		self.check_init_instance(res, mtype)
		self.add("{name} = {res};")
		self.add("\}")
		return res
	end

	# Generate an array value
	fun array_instance(array: Array[RuntimeVariable], elttype: MType): RuntimeVariable is abstract

	# Get an instance of a array for a vararg
	fun vararg_instance(mpropdef: MPropDef, recv: RuntimeVariable, varargs: Array[RuntimeVariable], elttype: MType): RuntimeVariable is abstract

	# Code generation

	# Add a line in the main part of the generated C
	fun add(s: String) do self.writer.lines.add(s)

	# Add a line in the
	# (used for local or global declaration)
	fun add_decl(s: String) do self.writer.decl_lines.add(s)

	# Request the presence of a global declaration
	fun require_declaration(key: String)
	do
		self.writer.file.required_declarations.add(key)
	end

	# Add a declaration in the local-header
	# The declaration is ensured to be present once
	fun declare_once(s: String)
	do
		self.compiler.provide_declaration(s, s)
		self.require_declaration(s)
	end

	# look for a needed .h and .c file for a given .nit source-file
	# FIXME: bad API, parameter should be a MModule, not its source-file
	fun add_extern(file: String)
	do
		file = file.strip_extension(".nit")
		var tryfile = file + ".nit.h"
		if tryfile.file_exists then
			self.declare_once("#include \"{"..".join_path(tryfile)}\"")
		end
		tryfile = file + "_nit.h"
		if tryfile.file_exists then
			self.declare_once("#include \"{"..".join_path(tryfile)}\"")
		end

		if self.compiler.seen_extern.has(file) then return
		self.compiler.seen_extern.add(file)
		tryfile = file + ".nit.c"
		if not tryfile.file_exists then
			tryfile = file + "_nit.c"
			if not tryfile.file_exists then return
		end
		var f = new ExternCFile(tryfile, "")
		self.compiler.extern_bodies.add(f)
	end

	# Return a new local runtime_variable initialized with the C expression `cexpr'.
	fun new_expr(cexpr: String, mtype: MType): RuntimeVariable
	do
		var res = new_var(mtype)
		self.add("{res} = {cexpr};")
		return res
	end

	# Generate generic abort
	# used by aborts, asserts, casts, etc.
	fun add_abort(message: String)
	do
		if self.current_node != null and self.current_node.location.file != null then
			self.add("fprintf(stderr, \"Runtime error: %s (%s:%d)\\n\", \"{message.escape_to_c}\", \"{self.current_node.location.file.filename.escape_to_c}\", {current_node.location.line_start});")
		else
			self.add("fprintf(stderr, \"Runtime error: %s\\n\", \"{message.escape_to_c}\");")
		end
		self.add("exit(1);")
	end

	# Generate a return with the value `s'
	fun ret(s: RuntimeVariable)
	do
		self.assign(self.frame.returnvar.as(not null), s)
		self.add("goto {self.frame.returnlabel.as(not null)};")
	end

	# Compile a statement (if any)
	fun stmt(nexpr: nullable AExpr)
	do
		if nexpr == null then return
		var old = self.current_node
		self.current_node = nexpr
		nexpr.stmt(self)
		self.current_node = old
	end

	# Compile an expression an return its result
	# `mtype` is the expected return type, pass null if no specific type is expected.
	fun expr(nexpr: AExpr, mtype: nullable MType): RuntimeVariable
	do
		var old = self.current_node
		self.current_node = nexpr
		var res = nexpr.expr(self).as(not null)
		if mtype != null then
			mtype = self.anchor(mtype)
			res = self.autobox(res, mtype)
		end
		res = autoadapt(res, nexpr.mtype.as(not null))
		var implicit_cast_to = nexpr.implicit_cast_to
		if implicit_cast_to != null and not self.compiler.modelbuilder.toolcontext.opt_no_check_autocast.value then
			var castres = self.type_test(res, implicit_cast_to, "auto")
			self.add("if (!{castres}) \{")
			self.add_abort("Cast failed")
			self.add("\}")
			res = autoadapt(res, implicit_cast_to)
		end
		self.current_node = old
		return res
	end

	# Alias for `self.expr(nexpr, self.bool_type)'
	fun expr_bool(nexpr: AExpr): RuntimeVariable do return expr(nexpr, bool_type)

	# Safely show a debug message on the current node and repeat the message in the C code as a comment
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
end

# A C function associated to a Nit method
# Because of customization, a given Nit method can be compiler more that once
abstract class AbstractRuntimeFunction

	type COMPILER: AbstractCompiler
	type VISITOR: AbstractCompilerVisitor

	# The associated Nit method
	var mmethoddef: MMethodDef

	# The mangled c name of the runtime_function
	# Subclasses should redefine `build_c_name` instead
	fun c_name: String
	do
		var res = self.c_name_cache
		if res != null then return res
		res = self.build_c_name
		self.c_name_cache = res
		return res
	end

	# Non cached version of `c_name`
	protected fun build_c_name: String is abstract

	protected var c_name_cache: nullable String writable = null

	# Implements a call of the runtime_function
	# May inline the body or generate a C function call
	fun call(v: VISITOR, arguments: Array[RuntimeVariable]): nullable RuntimeVariable is abstract

	# Generate the code for the RuntimeFunction
	# Warning: compile more than once compilation makes CC unhappy
	fun compile_to_c(compiler: COMPILER) is abstract
end

# A runtime variable hold a runtime value in C.
# Runtime variables are associated to Nit local variables and intermediate results in Nit expressions.
#
# The tricky point is that a single C variable can be associated to more than one RuntimeVariable because the static knowledge of the type of an expression can vary in the C code.
class RuntimeVariable
	# The name of the variable in the C code
	var name: String

	# The static type of the variable (as declard in C)
	var mtype: MType

	# The current casted type of the variable (as known in Nit)
	var mcasttype: MType writable

	# If the variable exaclty a mcasttype?
	# false (usual value) means that the variable is a mcasttype or a subtype.
	var is_exact: Bool writable = false

	init(name: String, mtype: MType, mcasttype: MType)
	do
		self.name = name
		self.mtype = mtype
		self.mcasttype = mcasttype
		assert not mtype.need_anchor
		assert not mcasttype.need_anchor
	end

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

# A frame correspond to a visited property in a GlobalCompilerVisitor
class Frame

	type VISITOR: AbstractCompilerVisitor

	# The associated visitor
	var visitor: VISITOR

	# The executed property.
	# A Method in case of a call, an attribute in case of a default initialization.
	var mpropdef: MPropDef

	# The static type of the receiver
	var receiver: MClassType

	# Arguments of the method (the first is the receiver)
	var arguments: Array[RuntimeVariable]

	# The runtime_variable associated to the return (in a function)
	var returnvar: nullable RuntimeVariable writable = null

	# The label at the end of the property
	var returnlabel: nullable String writable = null
end

# An extern C file to compile
class ExternCFile
	# The filename of the file
	var filename: String
	# Additionnal specific CC compiler -c flags
	var cflags: String
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
	fun ctype: String do return "val*"

	fun ctypename: String do return "val"

	# Return the name of the C structure associated to a Nit live type
	fun c_name: String is abstract
	protected var c_name_cache: nullable String protected writable
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
			return "val*"
		else if mclass.kind == extern_kind then
			return "void*"
		else
			return "val*"
		end
	end

	redef fun ctypename: String
	do
		if mclass.name == "Int" then
			return "l"
		else if mclass.name == "Bool" then
			return "s"
		else if mclass.name == "Char" then
			return "c"
		else if mclass.name == "Float" then
			return "d"
		else if mclass.name == "NativeString" then
			return "str"
		else if mclass.name == "NativeArray" then
			#return "{self.arguments.first.ctype}*"
			return "val"
		else if mclass.kind == extern_kind then
			return "ptr"
		else
			return "val"
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

redef class MParameterType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "{self.mclass.c_name}_FT{self.rank}"
		self.c_name_cache = res
		return res
	end
end

redef class MVirtualType
	redef fun c_name
	do
		var res = self.c_name_cache
		if res != null then return res
		res = "{self.mproperty.intro.mclassdef.mclass.c_name}_VT{self.mproperty.name}"
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

redef class MClass
	# Return the name of the C structure associated to a Nit class
	fun c_name: String do
		var res = self.c_name_cache
		if res != null then return res
		res = "{intro_mmodule.name.to_cmangle}__{name.to_cmangle}"
		self.c_name_cache = res
		return res
	end
	private var c_name_cache: nullable String
end

redef class MProperty
	fun c_name: String do
		var res = self.c_name_cache
		if res != null then return res
		res = "{self.intro.c_name}"
		self.c_name_cache = res
		return res
	end
	private var c_name_cache: nullable String
end

redef class MPropDef
	type VISITOR: AbstractCompilerVisitor

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
	fun can_inline(v: VISITOR): Bool
	do
		var modelbuilder = v.compiler.modelbuilder
		if modelbuilder.mpropdef2npropdef.has_key(self) then
			var npropdef = modelbuilder.mpropdef2npropdef[self]
			return npropdef.can_inline
		else if self.mproperty.name == "init" then
			# Automatic free init is always inlined since it is empty or contains only attribtes assigments
			return true
		else
			abort
		end
	end

	# Inline the body in another visitor
	fun compile_inside_to_c(v: VISITOR, arguments: Array[RuntimeVariable]): nullable RuntimeVariable
	do
		var modelbuilder = v.compiler.modelbuilder
		if modelbuilder.mpropdef2npropdef.has_key(self) then
			var npropdef = modelbuilder.mpropdef2npropdef[self]
			var oldnode = v.current_node
			v.current_node = npropdef
			self.compile_parameter_check(v, arguments)
			npropdef.compile_to_c(v, self, arguments)
			v.current_node = oldnode
		else if self.mproperty.name == "init" then
			var nclassdef = modelbuilder.mclassdef2nclassdef[self.mclassdef]
			var oldnode = v.current_node
			v.current_node = nclassdef
			self.compile_parameter_check(v, arguments)
			nclassdef.compile_to_c(v, self, arguments)
			v.current_node = oldnode
		else
			abort
		end
		return null
	end

	# Generate type checks in the C code to check covariant parameters
	fun compile_parameter_check(v: VISITOR, arguments: Array[RuntimeVariable])
	do
		if v.compiler.modelbuilder.toolcontext.opt_no_check_covariance.value then return

		for i in [0..msignature.arity[ do
			# skip test for vararg since the array is instantiated with the correct polymorphic type
			if msignature.vararg_rank == i then continue

			# skip if the cast is not required
			var origmtype =  self.mproperty.intro.msignature.mparameters[i].mtype
			if not origmtype.need_anchor then continue

			# get the parameter type
			var mtype = self.msignature.mparameters[i].mtype

			# generate the cast
			# note that v decides if and how to implements the cast
			v.add("/* Covariant cast for argument {i} ({self.msignature.mparameters[i].name}) {arguments[i+1].inspect} isa {mtype} */")
			var cond = v.type_test(arguments[i+1], mtype, "covariance")
			v.add("if (!{cond}) \{")
			v.add_abort("Cast failed")
			v.add("\}")
		end
	end
end

# Node visit

redef class APropdef
	fun compile_to_c(v: AbstractCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable])
	do
		v.add("printf(\"NOT YET IMPLEMENTED {class_name} {mpropdef} at {location.to_s}\\n\");")
		debug("Not yet implemented")
	end

	fun can_inline: Bool do return true
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
		if (mpropdef.mproperty.name == "==" or mpropdef.mproperty.name == "!=") and mpropdef.mclassdef.mclass.name == "Object" then return true
		if nblock isa ABlockExpr and nblock.n_expr.length == 0 then return true
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
		if pname != "==" and pname != "!=" then
			v.adapt_signature(mpropdef, arguments)
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
			else if pname == "+" then
				v.ret(v.new_expr("{arguments[0]} + {arguments[1]}", ret.as(not null)))
				return
			else if pname == "-" then
				v.ret(v.new_expr("{arguments[0]} - {arguments[1]}", ret.as(not null)))
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
			v.native_array_def(pname, ret, arguments)
			return
		end
		if pname == "exit" then
			v.add("exit({arguments[1]});")
			return
		else if pname == "sys" then
			v.ret(v.new_expr("glob_sys", ret.as(not null)))
			return
		else if pname == "calloc_string" then
			v.ret(v.new_expr("(char*)nit_alloc({arguments[1]})", ret.as(not null)))
			return
		else if pname == "calloc_array" then
			v.calloc_array(ret.as(not null), arguments)
			return
		else if pname == "object_id" then
			v.ret(v.new_expr("(long){arguments.first}", ret.as(not null)))
			return
		else if pname == "is_same_type" then
			v.ret(v.is_same_type_test(arguments[0], arguments[1]))
			return
		else if pname == "output_class_name" then
			var nat = v.class_name_string(arguments.first)
			v.add("printf(\"%s\\n\", {nat});")
			return
		else if pname == "native_class_name" then
			var nat = v.class_name_string(arguments.first)
			v.ret(v.new_expr("(char*){nat}", ret.as(not null)))
			return
		else if pname == "force_garbage_collection" then
			v.add("nit_gcollect();")
			return
		else if pname == "native_argc" then
			v.ret(v.new_expr("glob_argc", ret.as(not null)))
			return
		else if pname == "native_argv" then
			v.ret(v.new_expr("glob_argv[{arguments[1]}]", ret.as(not null)))
			return
		end
		v.add("printf(\"NOT YET IMPLEMENTED {class_name}:{mpropdef} at {location.to_s}\\n\");")
		debug("Not implemented {mpropdef}")
	end
end

redef class AExternMethPropdef
	redef fun compile_to_c(v, mpropdef, arguments)
	do
		var externname
		var nextern = self.n_extern
		if nextern == null then
			v.add("fprintf(stderr, \"NOT YET IMPLEMENTED nitni for {mpropdef} at {location.to_s}\\n\");")
			v.add("exit(1);")
			return
		end
		externname = nextern.text.substring(1, nextern.text.length-2)
		if location.file != null then
			var file = location.file.filename
			v.add_extern(file)
		end
		var res: nullable RuntimeVariable = null
		var ret = mpropdef.msignature.return_mtype
		if ret != null then
			ret = v.resolve_for(ret, arguments.first)
			res = v.new_var(ret)
		end
		v.adapt_signature(mpropdef, arguments)

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
			v.add("printf(\"NOT YET IMPLEMENTED nitni for {mpropdef} at {location.to_s}\\n\");")
			v.add("exit(1);")
			return
		end
		externname = nextern.text.substring(1, nextern.text.length-2)
		if location.file != null then
			var file = location.file.filename
			v.add_extern(file)
		end
		v.adapt_signature(mpropdef, arguments)
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

	fun init_expr(v: AbstractCompilerVisitor, recv: RuntimeVariable)
	do
		var nexpr = self.n_expr
		if nexpr != null then
			var oldnode = v.current_node
			v.current_node = self
			var old_frame = v.frame
			var frame = new Frame(v, self.mpropdef.as(not null), recv.mtype.as(MClassType), [recv])
			v.frame = frame
			var value = v.expr(nexpr, self.mpropdef.static_mtype)
			v.write_attribute(self.mpropdef.mproperty, recv, value)
			v.frame = old_frame
			v.current_node = oldnode
		end
	end

	fun check_expr(v: AbstractCompilerVisitor, recv: RuntimeVariable)
	do
		var nexpr = self.n_expr
		if nexpr != null then return

		var oldnode = v.current_node
		v.current_node = self
		var old_frame = v.frame
		var frame = new Frame(v, self.mpropdef.as(not null), recv.mtype.as(MClassType), [recv])
		v.frame = frame
		# Force read to check the initialization
		v.read_attribute(self.mpropdef.mproperty, recv)
		v.frame = old_frame
		v.current_node = oldnode
	end
end

redef class AClassdef
	private fun compile_to_c(v: AbstractCompilerVisitor, mpropdef: MMethodDef, arguments: Array[RuntimeVariable])
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

redef class ADeferredMethPropdef
	redef fun compile_to_c(v, mpropdef, arguments) do v.add_abort("Deferred method called")
	redef fun can_inline do return true
end

redef class AExpr
	# Try to compile self as an expression
	# Do not call this method directly, use `v.expr' instead
	private fun expr(v: AbstractCompilerVisitor): nullable RuntimeVariable
	do
		v.add("printf(\"NOT YET IMPLEMENTED {class_name}:{location.to_s}\\n\");")
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
	private fun stmt(v: AbstractCompilerVisitor)
	do
		var res = expr(v)
		if res != null then v.add("{res};")
	end
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
	redef fun expr(v)
	do
		var variable = self.variable.as(not null)
		var i = v.expr(self.n_value, variable.declared_type)
		v.assign(v.variable(variable), i)
		return i
	end
end

redef class AVarReassignExpr
	redef fun stmt(v)
	do
		var variable = self.variable.as(not null)
		var vari = v.variable(variable)
		var value = v.expr(self.n_value, variable.declared_type)
		var res = v.compile_callsite(self.reassign_callsite.as(not null), [vari, value])
		assert res != null
		v.assign(v.variable(variable), res)
	end
end

redef class ASelfExpr
	redef fun expr(v) do return v.frame.arguments.first
end

redef class AContinueExpr
	redef fun stmt(v) do v.add("goto CONTINUE_{v.escapemark_name(self.escapemark)};")
end

redef class ABreakExpr
	redef fun stmt(v) do v.add("goto BREAK_{v.escapemark_name(self.escapemark)};")
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
	redef fun stmt(v) do v.add_abort("Aborted")
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

	redef fun expr(v)
	do
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
			v.add("BREAK_{v.escapemark_name(escapemark)}: (void)0;")
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
		v.add("CONTINUE_{v.escapemark_name(escapemark)}: (void)0;")
		v.add("\}")
		v.add("BREAK_{v.escapemark_name(escapemark)}: (void)0;")
	end
end

redef class ALoopExpr
	redef fun stmt(v)
	do
		v.add("for(;;) \{")
		v.stmt(self.n_block)
		v.add("CONTINUE_{v.escapemark_name(escapemark)}: (void)0;")
		v.add("\}")
		v.add("BREAK_{v.escapemark_name(escapemark)}: (void)0;")
	end
end

redef class AForExpr
	redef fun stmt(v)
	do
		# Shortcut on explicit range
		# Avoid the instantiation of the range and the iterator
		var nexpr = self.n_expr
		if self.variables.length == 1 and nexpr isa AOrangeExpr and not v.compiler.modelbuilder.toolcontext.opt_no_shortcut_range.value then
			var from = v.expr(nexpr.n_expr, null)
			var to = v.expr(nexpr.n_expr2, null)
			var variable = v.variable(variables.first)

			v.assign(variable, from)
			v.add("for(;;) \{ /* shortcut range */")

			var ok = v.send(v.get_property("<", variable.mtype), [variable, to])
			assert ok != null
			v.add("if(!{ok}) break;")

			v.stmt(self.n_block)

			v.add("CONTINUE_{v.escapemark_name(escapemark)}: (void)0;")
			var succ = v.send(v.get_property("succ", variable.mtype), [variable])
			assert succ != null
			v.assign(variable, succ)
			v.add("\}")
			v.add("BREAK_{v.escapemark_name(escapemark)}: (void)0;")
			return
		end

		var cl = v.expr(self.n_expr, null)
		var it_meth = self.method_iterator
		assert it_meth != null
		var it = v.send(it_meth, [cl])
		assert it != null
		v.add("for(;;) \{")
		var isok_meth = self.method_is_ok
		assert isok_meth != null
		var ok = v.send(isok_meth, [it])
		assert ok != null
		v.add("if(!{ok}) break;")
		if self.variables.length == 1 then
			var item_meth = self.method_item
			assert item_meth != null
			var i = v.send(item_meth, [it])
			assert i != null
			v.assign(v.variable(variables.first), i)
		else if self.variables.length == 2 then
			var key_meth = self.method_key
			assert key_meth != null
			var i = v.send(key_meth, [it])
			assert i != null
			v.assign(v.variable(variables[0]), i)
			var item_meth = self.method_item
			assert item_meth != null
			i = v.send(item_meth, [it])
			assert i != null
			v.assign(v.variable(variables[1]), i)
		else
			abort
		end
		v.stmt(self.n_block)
		v.add("CONTINUE_{v.escapemark_name(escapemark)}: (void)0;")
		var next_meth = self.method_next
		assert next_meth != null
		v.send(next_meth, [it])
		v.add("\}")
		v.add("BREAK_{v.escapemark_name(escapemark)}: (void)0;")
	end
end

redef class AAssertExpr
	redef fun stmt(v)
	do
		if v.compiler.modelbuilder.toolcontext.opt_no_check_assert.value then return

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
	redef fun expr(v) do return v.new_expr("{self.value.to_s}", self.mtype.as(not null))
end

redef class AFloatExpr
	redef fun expr(v) do return v.new_expr("{self.n_float.text}", self.mtype.as(not null)) # FIXME use value, not n_float
end

redef class ACharExpr
	redef fun expr(v) do return v.new_expr("'{self.value.to_s.escape_to_c}'", self.mtype.as(not null))
end

redef class AArrayExpr
	redef fun expr(v)
	do
		var mtype = self.mtype.as(MClassType).arguments.first
		var array = new Array[RuntimeVariable]
		for nexpr in self.n_exprs.n_exprs do
			var i = v.expr(nexpr, mtype)
			array.add(i)
		end
		return v.array_instance(array, mtype)
	end
end

redef class AStringFormExpr
	redef fun expr(v) do return v.string_instance(self.value.as(not null))
end

redef class ASuperstringExpr
	redef fun expr(v)
	do
		var array = new Array[RuntimeVariable]
		for ne in self.n_exprs do
			if ne isa AStringFormExpr and ne.value == "" then continue # skip empty sub-strings
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
		var mtype = self.mtype.as(MClassType)
		var res = v.init_instance(mtype)
		var it = v.send(v.get_property("init", res.mtype), [res, i1, i2])
		v.check_init_instance(res, mtype)
		return res
	end
end

redef class AOrangeExpr
	redef fun expr(v)
	do
		var i1 = v.expr(self.n_expr, null)
		var i2 = v.expr(self.n_expr2, null)
		var mtype = self.mtype.as(MClassType)
		var res = v.init_instance(mtype)
		var it = v.send(v.get_property("without_last", res.mtype), [res, i1, i2])
		v.check_init_instance(res, mtype)
		return res
	end
end

redef class ATrueExpr
	redef fun expr(v) do return v.new_expr("1", self.mtype.as(not null))
end

redef class AFalseExpr
	redef fun expr(v) do return v.new_expr("0", self.mtype.as(not null))
end

redef class ANullExpr
	redef fun expr(v) do return v.new_expr("NULL", self.mtype.as(not null))
end

redef class AIsaExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr, null)
		return v.type_test(i, self.cast_type.as(not null), "isa")
	end
end

redef class AAsCastExpr
	redef fun expr(v)
	do
		var i = v.expr(self.n_expr, null)
		if v.compiler.modelbuilder.toolcontext.opt_no_check_assert.value then return i

		var cond = v.type_test(i, self.mtype.as(not null), "as")
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
		if v.compiler.modelbuilder.toolcontext.opt_no_check_assert.value then return i

		v.add("if ({i} == NULL) \{")
		v.add_abort("Cast failed")
		v.add("\}")
		return i
	end
end

redef class AParExpr
	redef fun expr(v) do return v.expr(self.n_expr, null)
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
		for a in self.raw_arguments.as(not null) do
			args.add(v.expr(a, null))
		end
		return v.compile_callsite(self.callsite.as(not null), args)
	end
end

redef class ASendReassignFormExpr
	redef fun stmt(v)
	do
		var recv = v.expr(self.n_expr, null)
		var args = [recv]
		for a in self.raw_arguments.as(not null) do
			args.add(v.expr(a, null))
		end
		var value = v.expr(self.n_value, null)

		var left = v.compile_callsite(self.callsite.as(not null), args)
		assert left != null

		var res = v.compile_callsite(self.reassign_callsite.as(not null), [left, value])
		assert res != null

		args.add(res)
		v.compile_callsite(self.write_callsite.as(not null), args)
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
		return v.supercall(v.frame.mpropdef.as(MMethodDef), recv.mtype.as(MClassType), args)
	end
end

redef class ANewExpr
	redef fun expr(v)
	do
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
		var res2 = v.compile_callsite(self.callsite.as(not null), args)
		if res2 != null then
			#self.debug("got {res2} from {mproperty}. drop {recv}")
			return res2
		end
		v.check_init_instance(recv, mtype)
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
		var res = v.compile_callsite(self.reassign_callsite.as(not null), [attr, value])
		assert res != null
		v.write_attribute(mproperty, recv, res)
	end
end

redef class AIssetAttrExpr
	redef fun expr(v)
	do
		var recv = v.expr(self.n_expr, null)
		var mproperty = self.mproperty.as(not null)
		return v.isset_attribute(mproperty, recv)
	end
end

redef class ADebugTypeExpr
	redef fun stmt(v)
	do
		# do nothing
	end
end

# Utils

redef class Array[E]
	# Return a new Array with the elements only contened in 'self' and not in 'o'
	fun -(o: Array[E]): Array[E] do
		var res = new Array[E]
		for e in self do if not o.has(e) then res.add(e)
		return res
	end
end

redef class MModule
	# All 'mproperties' associated to all 'mclassdefs' of `mclass`
	fun properties(mclass: MClass): Set[MProperty] do
		if not self.properties_cache.has_key(mclass) then
			var properties = new HashSet[MProperty]
			var parents = new Array[MClass]
			if self.flatten_mclass_hierarchy.has(mclass) then
				parents.add_all(mclass.in_hierarchy(self).direct_greaters)
			end
			for parent in parents do
				properties.add_all(self.properties(parent))
			end
			for mclassdef in mclass.mclassdefs do
				for mprop in mclassdef.intro_mproperties do
					properties.add(mprop)
				end
			end
			self.properties_cache[mclass] = properties
		end
		return properties_cache[mclass]
	end
	private var properties_cache: Map[MClass, Set[MProperty]] = new HashMap[MClass, Set[MProperty]]
end
