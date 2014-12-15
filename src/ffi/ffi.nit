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
module ffi

import modelbuilder

import nitni

intrude import ffi_base
import extern_classes
import header_dependency
import pkgconfig
import c_compiler_options
import c
import cpp
import java
import extra_java_files
import objc

redef class MModule
	# Does this module uses the FFI?
	var uses_ffi: Bool = false

	# C compilation unit for the FFI files
	private var ffi_ccu: nullable CCompilationUnit = null

	# Foreign language used in this AModule
	private var present_languages = new HashSet[FFILanguage]

	# Complete the compilation of the FFI code
	fun finalize_ffi_wrapper(compdir: String, mainmodule: MModule)
	do
		for language in ffi_callbacks.keys do
			for callback in ffi_callbacks[language] do
				language.compile_callback(callback, self, mainmodule, ffi_ccu.as(not null))
			end

			language.compile_to_files(self, compdir)
		end

		# include dependancies FFI
		for mod in header_dependencies do
			if mod.uses_ffi then ffi_ccu.header_custom.add("#include \"{mod.name}._ffi.h\"\n")
		end

		ffi_ccu.write_as_impl(self, compdir)
		for filename in ffi_ccu.files do
			var f = new ExternCFile(filename, c_compiler_options)
			f.pkgconfigs.add_all pkgconfigs
			ffi_files.add(f)
		end
	end

	# Avoid the compile a ffi propdef more than once
	# See `AMethPropdef::compile_ffi_method`
	# FIXME find a better way
	private var compiled_ffi_methods = new HashSet[AMethPropdef]
end

redef class AModule

	# Ensures all of the general foreign code of the module has been analyzed.
	# Manages header blocks, extern class types and foreign dependancies between modules
	fun ensure_compile_ffi_wrapper
	do
		var mmodule = mmodule
		if mmodule == null or mmodule.ffi_ccu != null then return

		# ready extern code compiler
		var ffi_ccu = new CCompilationUnit
		mmodule.ffi_ccu = ffi_ccu

		# generate code
		for block in n_extern_code_blocks do
			var language = block.language
			assert language != null
			mmodule.present_languages.add(language)
			language.compile_module_block(block, ffi_ccu, mmodule)
		end

		ffi_ccu.header_c_base.add( "#include \"{mmodule.name}._nitni.h\"\n" )

		ffi_ccu.body_decl.add("#ifdef ANDROID\n")
		ffi_ccu.body_decl.add("	#include <android/log.h>\n")
		ffi_ccu.body_decl.add("	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)\n")
		ffi_ccu.body_decl.add("#else\n")
		ffi_ccu.body_decl.add("	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)\n")
		ffi_ccu.body_decl.add("#endif\n")

		for nclassdef in n_classdefs do
			# Does it declares an extern type?
			if nclassdef isa AStdClassdef and nclassdef.n_extern_code_block != null then
				mmodule.uses_ffi = true
				var language = nclassdef.n_extern_code_block.language
				assert language != null
				mmodule.present_languages.add(language)
				nclassdef.n_extern_code_block.language.compile_extern_class(
					nclassdef.n_extern_code_block.as(not null), nclassdef, ffi_ccu, mmodule)
			end
		end
	end
end

redef class AMethPropdef
	# Compile the necessary wrapper around this extern method or constructor
	fun compile_ffi_method(mmodule: MModule)
	do
		assert n_extern_code_block != null

		if mmodule.compiled_ffi_methods.has(self) then return
		mmodule.compiled_ffi_methods.add self

		var language = n_extern_code_block.language
		assert language != null
		mmodule.present_languages.add(language)
		n_extern_code_block.language.compile_extern_method(
			n_extern_code_block.as(not null), self, mmodule.ffi_ccu.as(not null), mmodule)
	end
end

redef class VerifyNitniCallbacksPhase
	redef fun process_npropdef(npropdef)
	do
		super

		if not npropdef isa AMethPropdef then return

		var code_block = npropdef.n_extern_code_block
		if code_block == null then return

		var lang = code_block.language
		assert lang != null

		# Associate callbacks used by an extern method to its foreign language
		for callback in npropdef.foreign_callbacks.all do
			var map = npropdef.mpropdef.mclassdef.mmodule.ffi_callbacks
			if not map.keys.has(lang) then map[lang] = new HashSet[NitniCallback]
			map[lang].add(callback)
		end
	end
end
