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
	readable var _opt_output: OptionString = new OptionString("Output file", "-o", "--output")
	readable var _opt_boost: OptionBool = new OptionBool("Optimize compilation", "-O", "--boost")
	readable var _opt_no_cc: OptionBool = new OptionBool("Do not invoke C compiler", "--no_cc")
	readable var _opt_global: OptionBool = new OptionBool("Use global compilation", "--global")
	readable var _opt_clibdir: OptionString = new OptionString("NIT C library directory", "--clibdir")
	readable var _opt_bindir: OptionString = new OptionString("NIT tools directory", "--bindir")
	readable var _opt_compdir: OptionString = new OptionString("Intermediate compilation directory", "--compdir")
	readable var _opt_extension_prefix: OptionString = new OptionString("Append prefix to file extension", "-p", "--extension-prefix")

	init
	do
		super("nitc")
		option_context.add_option(opt_output, opt_boost, opt_no_cc, opt_global, opt_clibdir, opt_bindir, opt_compdir, opt_extension_prefix)
	end

	redef fun process_options
	do
		super
		output_file = opt_output.value
		boost = opt_boost.value
		no_cc = opt_no_cc.value
		var ext = opt_extension_prefix.value
		if ext != null then ext_prefix = ext else ext_prefix = ""
		global = opt_global.value
		compdir = opt_compdir.value
		if compdir == null then
			var dir = once ("NIT_COMPDIR".to_symbol).environ
			if not dir.is_empty then 
				compdir = dir
			end
			if compdir == null then
				compdir = ".nit_compile"
			end
		end
		compdir += ext_prefix

		clibdir = opt_clibdir.value
		if clibdir == null then
			var dir = once ("NIT_DIR".to_symbol).environ
			if dir.is_empty then 
				var dir = "{sys.program_name.dirname}/../lib"
				if dir.file_exists then clibdir = dir
			else
				dir = "{dir}/lib"
				if dir.file_exists then clibdir = dir
			end
			if clibdir == null then
				fatal_error(null, "Error: Cannot locate NIT C library directory. Uses --clibdir or envvar NIT_DIR.")
			end
		end
		bindir = opt_bindir.value

		if bindir == null then
			var dir = once ("NIT_DIR".to_symbol).environ
			if dir.is_empty then 
				var dir = "{sys.program_name.dirname}/../bin"
				if dir.file_exists then bindir = dir
			else
				dir = "{dir}/bin"
				if dir.file_exists then bindir = dir
			end
			if bindir == null then
				fatal_error(null, "Error: Cannot locate NIT tools directory. Uses --bindir or envvar NIT_DIR.")
			end
		end
	end

	redef fun perform_work(mods)
	do
		for mod in mods do
			mod.compile_prog_to_c(self)
		end

	end
end

var c = new NitCompiler
c.exec_cmd_line
