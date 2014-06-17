# This file is part of NIT ( http://www.nitlanguage.org )
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
module emscripten_platform

import platform
import abstract_compiler

redef class ToolContext
	redef fun platform_from_name(name)
	do
		if name == "emscripten" then return new EmscriptenPlatform
		return super
	end
end

class EmscriptenPlatform
	super Platform

	redef fun supports_libunwind do return false
	redef fun supports_libgc do return false
	redef fun toolchain(toolcontext) do return new EnscriptenToolchain(toolcontext)
end

class EnscriptenToolchain
	super MakefileToolchain

	redef fun makefile_name(mainmodule) do return "{mainmodule.name}.js.mk"

	redef fun default_outname(mainmodule) do return "{super}.js"

	redef fun write_makefile(compiler, compile_dir, cfiles)
	do
		super

		var emcc_make_flags = "CC=emcc CFLAGS='-g -Wno-unused-value -Wno-switch -Qunused-arguments'"

		var make_flags = self.toolcontext.opt_make_flags.value or else ""
		make_flags += emcc_make_flags
		self.toolcontext.opt_make_flags.value = make_flags
	end
end
