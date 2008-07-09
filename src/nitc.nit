# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Nit compiler main module
package nitc

import abstracttool
private import compiling

# The main class of the nitcompiler program
class NitCompiler
special AbstractCompiler
	readable attr _opt_output: OptionString = new OptionString("Output file", "-o", "--output")
	readable attr _opt_boost: OptionBool = new OptionBool("Optimize compilation", "-O", "--boost")
	readable attr _opt_no_cc: OptionBool = new OptionBool("Do not invoke C compiler", "--no_cc")
	readable attr _opt_attr_sim: OptionBool = new OptionBool("Use attribute simulation", "--attr-sim")
	readable attr _opt_global: OptionBool = new OptionBool("Use global compilation", "--global")
	readable attr _opt_clibdir: OptionString = new OptionString("NIT C library directory", "--clibdir")
	readable attr _opt_bindir: OptionString = new OptionString("NIT tools directory", "--bindir")
	readable attr _opt_extension_prefix: OptionString = new OptionString("Append prefix to file extension", "-p", "--extension-prefix")

	init
	do
		super
		option_context.add_option(opt_output, opt_boost, opt_no_cc, opt_attr_sim, opt_global, opt_clibdir, opt_bindir, opt_extension_prefix)
	end

	redef meth process_options
	do
		super
		tc = new ToolContext
		tc.output_file = opt_output.value
		tc.boost = opt_boost.value
		tc.no_cc = opt_no_cc.value
		tc.ext_prefix = opt_extension_prefix.value
		if tc.ext_prefix == null then tc.ext_prefix = ""
		tc.attr_sim = opt_attr_sim.value
		tc.global = opt_global.value
		tc.base_dir = ".nit_compile"
		tc.clibdir = opt_clibdir.value
		if tc.clibdir == null then
			var dir = once ("NIT_DIR".to_symbol).environ
			if dir.is_empty then 
				var dir = "{sys.program_name.dirname}/../lib"
				if dir.file_exists then tc.clibdir = dir
			else
				dir = "{dir}/lib"
				if dir.file_exists then tc.clibdir = dir
			end
			if tc.clibdir == null then
				error("Error: Cannot locate NIT C library directory. Uses --clibdir or envvar NIT_DIR.")
				exit(1)
			end
		end
		tc.bindir = opt_bindir.value
		if tc.bindir == null then
			var dir = once ("NIT_DIR".to_symbol).environ
			if dir.is_empty then 
				var dir = "{sys.program_name.dirname}/../bin"
				if dir.file_exists then tc.bindir = dir
			else
				dir = "{dir}/bin"
				if dir.file_exists then tc.bindir = dir
			end
			if tc.bindir == null then
				error("Error: Cannot locate NIT tools directory. Uses --bindir or envvar NIT_DIR.")
				exit(1)
			end
		end
	end

	redef meth perform_work(mods)
	do
		for mod in mods do
			assert mod isa MMSrcModule
			mod.compile_prog_to_c(tc)
		end

	end
end

var c = new NitCompiler
c.exec_cmd_line
