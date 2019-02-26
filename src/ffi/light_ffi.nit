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

# Light FFI support, independent of the compiler
#
# The light FFI offers only basic FFI features:
#
# * **Extern methods** implemented in C, nested within the Nit code.
#   The body of these method is copied directly to the generated C files for compilation.
#   Also supports extern `new` factories.
# * Module level **C code blocks**, both "C Body" (the default) and "C Header".
#   They will be copied to the beginning of the generated C files.
# * Automatic transformation of Nit **primitive types** from/to their equivalent in C.
# * **Extern classes** to create a Nit class around a C pointer.
#   Allows to specify the equivalent C type of the Nit extern class.
#
# These limited features should be easy to implement in new/alternative engines
# to quickly achieve a bootstrap. For this reason, core features of the Nit
# standard library should be limited to use the light FFI.
module light_ffi

import modelbuilder

import nitni::nitni_utilities

intrude import light_ffi_base
import extern_classes
import light_c

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
		var cflags = self.cflags[""].join(" ")

		ffi_ccu.write_as_impl(self, compdir)
		for filename in ffi_ccu.files do
			var f = new ExternCFile(filename.basename, cflags)
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

		ffi_ccu.header_c_base.add( "#include \"{mmodule.c_name}._nitni.h\"\n" )

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
