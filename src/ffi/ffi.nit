# This file is part of NIT ( https://nitlanguage.org ).
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

# Full FFI support, independent of the compiler
#
# The full FFI support all the features of the light FFI and more:
#
# * More foreign languages: **C++, Java and Objective-C**.
# * **Callbacks** to Nit from foreign codes.
#   The callbacks are declared in Nit using the `import` annotation on extern methods.
#   They are then generated on demand for the target foreign language.
# * **Static Nit types** in C for precise typing and static typing errors in C.
# * **Propagating public code blocks** at the module level (C Header).
#   This allows to use extern classes in foreign code in other modules
#   without having to import the related headers.
#   This is optional in C as it is easy to find the correct importation.
#   However it is important in Java and other complex FFIs.
# * **Reference pinning** of Nit objects from foreign code.
#   This ensure that objects referenced from foreign code are not liberated by the GC.
# * FFI **annotations**:
#   * `cflags`, `ldflags` and `cppflags` pass arguments to the C and C++
# compilers and linker.
#   * `pkgconfig` calls the `pkg-config` program to get the arguments
# to pass to the C copiler and linker.
#   * `extra_java_files` adds Java source file to the compilation chain.
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
intrude import light_ffi

redef class MModule
	# Complete the compilation of the FFI code
	redef fun finalize_ffi_wrapper(compdir, mainmodule)
	do
		for language in ffi_callbacks.keys do
			for callback in ffi_callbacks[language] do
				language.compile_callback(callback, self, mainmodule, ffi_ccu.as(not null))
			end

			language.compile_to_files(self, compdir)
		end

		# include dependancies FFI
		for mod in header_dependencies do
			if mod.uses_ffi then ffi_ccu.header_custom.add("#include \"{mod.c_name}._ffi.h\"\n")
		end

		super
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
