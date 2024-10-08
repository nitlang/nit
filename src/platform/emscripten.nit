# This file is part of NIT ( https://nitlanguage.org )
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Compile to JavaScript using the Emscripten SDK
module emscripten

import platform
import compiler::abstract_compiler

redef class ToolContext
	redef fun platform_from_name(name)
	do
		if name == "emscripten" then return new EmscriptenPlatform
		return super
	end
end

class EmscriptenPlatform
	super Platform

	redef fun name do return "emscripten"
	redef fun supports_libunwind do return false
	redef fun supports_libgc do return false
	redef fun supports_linker_script do return false
	redef fun toolchain(toolcontext, compiler) do return new EnscriptenToolchain(toolcontext, compiler)
end

class EnscriptenToolchain
	super MakefileToolchain

	redef fun makefile_name do return "{super}.js.mk"

	redef fun default_outname do return "{super}.js"

	redef fun write_makefile(compile_dir, cfiles)
	do
		super

		var emcc_make_flags = "CC=emcc CXX=em++ CFLAGS='-Wno-unused-value -Wno-switch -Qunused-arguments -s ALLOW_MEMORY_GROWTH=1"

		var release = toolcontext.opt_release.value
		if release then
			emcc_make_flags += "' LDFLAGS='--minify 1'"
		else emcc_make_flags += " -g'"

		var make_flags = self.toolcontext.opt_make_flags.value or else ""
		make_flags += emcc_make_flags
		self.toolcontext.opt_make_flags.value = make_flags
	end
end
