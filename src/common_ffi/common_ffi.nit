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

# FFI concers common between the compilers and the interpreter.
# Offers services to compile modules using foreign code. Mainly allows
# to wrap foreign code in Nit methods.
module common_ffi

import parser
import modelbuilder

import nitni

import ffi_base
import extern_classes
import header_dependency
import pkgconfig
import c_compiler_options
import c

redef class MModule
	# Does this module uses the FFI?
	var uses_ffi: Bool = false
end

redef class AModule
	# C compilation unit for the FFI files
	private var ffi_ccu: nullable CCompilationUnit = null

	# Foreign language used in this AModule
	private var present_languages = new HashSet[FFILanguage]

	# Callbacks used locally
	var ffi_callbacks = new HashMap[FFILanguage, Set[NitniCallback]]

	# Ensures all of the general foreign code of the module has been analyzed.
	# Manages header blocks, extern class types and foreign dependancies between modules
	fun ensure_compile_ffi_wrapper
	do
		if ffi_ccu != null then return

		# ready extern code compiler
		var ffi_ccu = new CCompilationUnit
		self.ffi_ccu = ffi_ccu

		# generate code
		for block in n_extern_code_blocks do
			var language = block.language
			assert language != null
			present_languages.add(language)
			language.compile_module_block(block, ffi_ccu, self)
		end

		ffi_ccu.header_c_base.add( "#include \"{mmodule.name}._nitni.h\"\n" )

		# include dependancies FFI
		for mod in mmodule.header_dependencies do
			if mod.uses_ffi then ffi_ccu.header_custom.add("#include \"{mod.name}._ffi.h\"\n")
		end

		for nclassdef in n_classdefs do
			# Does it declares an extern type?
			if nclassdef isa AStdClassdef and nclassdef.n_extern_code_block != null then
				mmodule.uses_ffi = true
				var language = nclassdef.n_extern_code_block.language
				assert language != null
				present_languages.add(language)
				nclassdef.n_extern_code_block.language.compile_extern_class(
					nclassdef.n_extern_code_block.as(not null), nclassdef, ffi_ccu, self)
			end
		end
	end

	# Complete the compilation of the FFI code
	fun finalize_ffi_wrapper(compdir: String, mainmodule: MModule)
	do
		ensure_compile_ffi_wrapper

		for language in present_languages do if ffi_callbacks.keys.has(language) then
			for callback in ffi_callbacks[language] do
				language.compile_callback(callback, self, mainmodule, ffi_ccu.as(not null))
			end

			language.compile_to_files(self, compdir)
		end

		ffi_ccu.write_as_impl(self, compdir)
		for filename in ffi_ccu.files do ffi_files.add(new ExternCFile(filename, self.c_compiler_options))
	end
end

redef class AExternPropdef
	private var ffi_has_been_compiled = false

	# Compile the necessary wrapper around this extern method or constructor
	fun compile_ffi_method(amodule: AModule)
	do
		assert n_extern_code_block != null

		if ffi_has_been_compiled then return
		ffi_has_been_compiled = true

		amodule.ensure_compile_ffi_wrapper

		var language = n_extern_code_block.language
		assert language != null
		amodule.present_languages.add(language)
		n_extern_code_block.language.compile_extern_method(
			n_extern_code_block.as(not null), self, amodule.ffi_ccu.as(not null), amodule)
	end
end

redef class VerifyNitniCallbacksPhase
	redef fun process_npropdef(npropdef)
	do
		super

		if not npropdef isa AExternPropdef then return

		var code_block = npropdef.n_extern_code_block
		if code_block == null then return

		var lang = code_block.language
		assert lang != null

		# Associate callbacks used by an extern method to its foreign language
		for callback in npropdef.foreign_callbacks.all do
			var map = npropdef.parent.parent.as(AModule).ffi_callbacks
			if not map.keys.has(lang) then map[lang] = new HashSet[NitniCallback]
			map[lang].add(callback)
		end
	end
end
