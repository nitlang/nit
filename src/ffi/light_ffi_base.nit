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

# Tools and utilities for implement FFI with different languages
module light_ffi_base

import c_tools
import parser
import modelbuilder
import nitni::nitni_utilities

redef class ToolContext
	# Phase that assign a `FFILanguage` to all `AExternCodeBlock`
	var ffi_language_assignation_phase: Phase = new FFILanguageAssignationPhase(self, null)
end

# Phase that assign a `FFILanguage` to all `AExternCodeBlock`
#
# It will also report errors when using an unknown foreign langages.
class FFILanguageAssignationPhase
	super Phase

	# All supported languages
	var languages = new Array[FFILanguage]

	redef fun process_nmodule(nmodule)
	do
		for block in nmodule.n_extern_code_blocks do
			verify_foreign_code_on_node( block )
		end
	end

	redef fun process_npropdef(npropdef)
	do
		if npropdef isa AMethPropdef then
			var code_block = npropdef.n_extern_code_block
			if code_block != null then
				verify_foreign_code_on_node( code_block )
			end
		end
	end

	redef fun process_nclassdef(nclassdef)
	do
		if nclassdef isa AStdClassdef and nclassdef.n_extern_code_block != null then
			verify_foreign_code_on_node( nclassdef.n_extern_code_block.as(not null) )
		end
	end

	private fun verify_foreign_code_on_node(n: AExternCodeBlock)
	do
		var found = false
		for v in languages do
			var identified = v.identify_language(n)
			if identified then
				if found and identified then
					toolcontext.error(n.location, "FFI Error: two languages identified as possible handlers.")
				end
				n.language = v
				found = true
			end
		end

		if not found then toolcontext.error(n.location, "FFI Error: unsupported language.")
	end
end

redef class MModule
	# All FFI files linked to this module
	var ffi_files = new Array[ExternFile]
end

redef class AExternCodeBlock
	# User entered name for the language of this block
	fun language_name: nullable String do
		if n_in_language == null then return null
		return n_in_language.n_string.without_quotes
	end

	# `language_name`, in lower case
	protected fun language_name_lowered: nullable String do
		if language_name == null then return null
		return language_name.to_lower
	end

	# User entered foreign code in the block
	fun code: String do return n_extern_code_segment.without_guard

	# `FFILanguage` assigned to this block
	var language: nullable FFILanguage = null
end

# Visitor for a specific languages. Works kinda like a `Phase` and is executed
# by a `Phase`.
class FFILanguage
	# `FFILanguageAssignationPhase` assigning `self` to `AExternCodeBlock`s
	var ffi_language_assignation_phase: FFILanguageAssignationPhase

	init
	do
		ffi_language_assignation_phase.languages.add(self)
	end

	# Is this `block` written in this language?
	fun identify_language(block: AExternCodeBlock ): Bool is abstract

	# Generate wrapper code for this module/header code block
	fun compile_module_block(block: AExternCodeBlock, ecc: CCompilationUnit, mmodule: MModule) is abstract

	# Generate wrapper code for this extern method
	fun compile_extern_method(block: AExternCodeBlock, m: AMethPropdef,
		ecc: CCompilationUnit, nmodule: MModule) is abstract

	# Generate wrapper code for this extern class
	fun compile_extern_class(block: AExternCodeBlock, m: AClassdef,
		ecc: CCompilationUnit, mmodule: MModule) is abstract

	# Get the foreign type of this extern class definition
	fun get_ftype(block: AExternCodeBlock, m: AClassdef): ForeignType is abstract

	# Complete compilation of generated code
	fun compile_to_files(mmodule: MModule, directory: String) do end
end

redef class TString
	# Returns the content of this node without both of the surrounding "
	fun without_quotes: String
	do
		assert text.length >= 2
		return text.substring(1, text.length-2)
	end
end

redef class TExternCodeSegment
	# Returns the content of this node without the surrounding `{ and `}
	fun without_guard: String
	do
		assert text.length >= 4
		return text.substring(2, text.length-4)
	end
end

redef class CCompilationUnit
	# Compile as `_ffi` files which contains the implementation of extern methods
	fun write_as_impl(mmodule: MModule, compdir: String)
	do
		var base_name = "{mmodule.c_name}._ffi"

		var h_file = "{base_name}.h"
		var guard = "{mmodule.c_name.to_upper}_NIT_H"
		write_header_to_file(mmodule, "{compdir}/{h_file}", ["<stdint.h>"], guard)

		var c_file = "{base_name}.c"
		write_body_to_file(mmodule, "{compdir}/{c_file}", ["<stdlib.h>", "<stdio.h>", "<stdint.h>", "\"{h_file}\""])

		files.add( "{compdir}/{c_file}" )
	end

	# Write the header part to `file` including all `includes` using the `guard`
	fun write_header_to_file(mmodule: MModule, file: String, includes: Array[String], guard: String)
	do
		var stream = new FileWriter.open( file )

		# header comments
		var module_info = "/*\n\tExtern implementation of Nit module {mmodule.name}\n*/\n"

		stream.write( module_info )

		stream.write( "#ifndef {guard}\n" )
		stream.write( "#define {guard}\n\n" )

		for incl in includes do stream.write( "#include {incl}\n" )

		compile_header_core( stream )

		# header file guard close
		stream.write( "#endif\n" )
		stream.close
	end

	# Write the body part to `file` including all `includes`
	fun write_body_to_file(mmodule: MModule, file: String, includes: Array[String])
	do
		var stream = new FileWriter.open(file)

		var module_info = "/*\n\tExtern implementation of Nit module {mmodule.name}\n*/\n"

		stream.write( module_info )
		for incl in includes do stream.write( "#include {incl}\n" )

		compile_body_core( stream )

		stream.close
	end
end

# Foreign equivalent types of extern classes
class ForeignType
	# C type of `self`, by default it is `void*`
	fun ctype: String do return "void*"
end
