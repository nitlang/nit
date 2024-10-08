# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
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

# provides tools to write C .c and .h files
module c_tools

import template

# Accumulates all C code for a compilation unit
class CCompilationUnit
	## header
	# comments and native interface imports
	var header_c_base = new Template

	# custom C header code or generated for other languages
	var header_custom = new Template

	# types of extern classes and friendly types
	var header_c_types = new Template

	# implementation declaration for extern methods
	var header_decl = new Template

	## body
	# comments, imports, etc
	var body_decl = new Template

	# custom code and generated for ffi
	var body_custom = new Template

	# implementation body of extern methods
	var body_impl = new Template

	# files to compile TODO check is appropriate
	var files = new Array[String]

	# Add a `static` `c_function` to be strictly local to this unit
	fun add_local_function(c_function: CFunction)
	do
		body_decl.add "static {c_function.signature};\n"
		body_impl.add "\n"
		body_impl.add c_function.to_writer
	end

	# Add a public `c_function` accessible from outside this compilation unit
	fun add_exported_function(c_function: CFunction)
	do
		body_decl.add "{c_function.signature};\n"
		body_impl.add "\n"
		body_impl.add c_function.to_writer
	end

	# Write the core of the header to `stream`
	fun compile_header_core(stream: Writer)
	do
		header_c_base.write_to stream
		header_custom.write_to stream
		header_c_types.write_to stream
		header_decl.write_to stream
	end

	# Write the core of the body to `stream`
	fun compile_body_core(stream: Writer)
	do
		body_decl.write_to stream
		body_custom.write_to stream
		body_impl.write_to stream
	end
end

# Accumulates C code related to a specific function
class CFunction
	var signature : String

	var decls = new Template
	var exprs = new Template

	fun to_writer: Template
	do
		var w = new Template

		w.add(signature)
		w.add("\n\{\n")
		w.add(decls)
		w.add("\n")
		w.add(exprs)
		w.add("\}\n")

		return w
	end
end

# An extern file to compile
class ExternFile

	# Filename relative to the nit-compile folder
	var filename: String

	# The name of the target in the Makefile
	# Usually the produced .o file
	fun makefile_rule_name: String is abstract

	# The content of the rule in the make
	# Usually the one-line shell command after the tabulation
	fun makefile_rule_content: String is abstract

	fun compiles_to_o_file: Bool do return false

	# Is `self` a Java file to include in the JAR archive?
	fun add_to_jar: Bool do return false

	# Additional libraries needed for the compilation
	# Will be used with pkg-config
	var pkgconfigs = new Array[String]
end

# An extern C file to compile
class ExternCFile
	super ExternFile

	# Custom options for the C compiler (CFLAGS)
	var cflags: String

	redef fun hash do return filename.hash
	redef fun ==(o) do return o isa ExternCFile and filename == o.filename

	redef fun makefile_rule_name do
		var basename = filename.basename(".c")
		var res = "{basename}.extern.o"
		return res
	end

	redef fun makefile_rule_content do
		var ff = filename.basename
		var o = makefile_rule_name
		var pkg = ""
		if not pkgconfigs.is_empty then
			pkg = "`pkg-config --cflags {pkgconfigs.join(" ")}`"
		end
		return "$(CC) $(CFLAGS) -Wall -Wno-unused-function {self.cflags} {pkg} -c -o {o} {ff}"
	end

	redef fun compiles_to_o_file do return true
end

