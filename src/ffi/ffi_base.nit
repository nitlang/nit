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
module ffi_base

import c_tools
import parser
import modelbuilder
import nitni

import light_ffi_base

redef class MModule
	# Callbacks used by this module, classified by language
	var ffi_callbacks = new HashMap[FFILanguage, Set[NitniCallback]]
end

# Visitor for a specific languages. Works kinda like a `Phase` and is executed
# by a `Phase`.
redef class FFILanguage
	# Generate the code to offer this callback if foreign code
	fun compile_callback(callback: NitniCallback, mmodule: MModule,
		mainmmodule: MModule, ecc: CCompilationUnit) is abstract
end
