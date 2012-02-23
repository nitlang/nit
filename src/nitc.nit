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
import analysis
import global
import program
import compiling
import syntax
import native_interface
import separate_options

# The main class of the nitcompiler program
class NitCompiler
	super AbstractCompiler
	readable var _opt_output: OptionString = new OptionString("Output file", "-o", "--output")
	readable var _opt_boost: OptionBool = new OptionBool("Optimize compilation", "-O", "--boost")
	readable var _opt_no_cc: OptionBool = new OptionBool("Do not invoke C compiler", "--no-cc")
	readable var _opt_cc_no_link: OptionBool = new OptionBool("Do not invoke C linker", "--cc-no-link")
	readable var _opt_global: OptionBool = new OptionBool("Use global compilation", "--global")
	readable var _opt_global_no_STF_opt: OptionBool = new OptionBool("Do not use SFT optimization", "--no-global-SFT-optimization")
	readable var _opt_global_no_DMR_opt: OptionBool = new OptionBool("Do not use dead method removal optimization", "--no-global-DMR-optimization")
	readable var _opt_global_no_inline_get_set: OptionBool = new OptionBool("Do not automatically inline getters/setters", "--no-global-get-set-inlining")
	readable var _opt_global_no_out_of_init_get_test_opt: OptionBool = new OptionBool("Do not remove get tests outside object initialization", "--no-global-OOIT-optimization")
	readable var _opt_global_no_RFIMA: OptionBool = new OptionBool("Do not use a specialized algorithm to find reachable methods from initializers", "--no-global-RFIM-analysis")
	readable var _opt_global_callgraph: OptionEnum = new OptionEnum(["none", "cha", "rta"], "The algorithm to use to build the callgraph", 2, "--global-callgraph")
	readable var _opt_clibdir: OptionString = new OptionString("NIT C library directory", "--clibdir")
	readable var _opt_bindir: OptionString = new OptionString("NIT tools directory", "--bindir")
	readable var _opt_compdir: OptionString = new OptionString("Intermediate compilation directory", "--compdir")
	readable var _opt_extension_prefix: OptionString = new OptionString("Append prefix to file extension", "-p", "--extension-prefix")
	readable var _opt_output_format: OptionEnum = new OptionEnum(["none", "C", "icode"], "The type of code we want to be generated", 1, "--output-format")

	init
	do
		super("nitc")
		option_context.add_option(opt_output, opt_boost, opt_no_cc, opt_cc_no_link, opt_cc_libs, opt_cc_lib_paths, opt_cc_include_paths, opt_global, opt_clibdir, opt_bindir, opt_compdir, opt_extension_prefix, opt_global_no_STF_opt, opt_global_no_DMR_opt, opt_global_callgraph, opt_global_no_inline_get_set, opt_global_no_RFIMA, opt_global_no_out_of_init_get_test_opt, opt_output_format)
	end

	redef fun process_options
	do
		super
		output_file = opt_output.value
		boost = opt_boost.value
		no_cc = opt_no_cc.value
		cc_link = not opt_cc_no_link.value
		cc_lib_paths = opt_cc_lib_paths.value
		cc_libs = opt_cc_libs.value
		cc_include_paths = opt_cc_include_paths.value
		var ext = opt_extension_prefix.value
		if ext != null then ext_prefix = ext else ext_prefix = ""
		global = opt_global.value
		use_SFT_optimization = not opt_global_no_STF_opt.value
		no_dead_method_removal = opt_global_no_DMR_opt.value
		no_inline_get_set = opt_global_no_inline_get_set.value
		no_callgraph_from_init = opt_global_no_RFIMA.value
		no_out_of_init_get_test_removal = opt_global_no_out_of_init_get_test_opt.value
		global_callgraph = opt_global_callgraph.value_name
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
		compdir = compdir.simplify_path

		clibdir = opt_clibdir.value
		if clibdir == null then
			var dir = once ("NIT_DIR".to_symbol).environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../clib"
				if dir.file_exists then clibdir = dir
			else
				dir = "{dir}/clib"
				if dir.file_exists then clibdir = dir
			end
			if clibdir == null then
				fatal_error(null, "Error: Cannot locate NIT C library directory. Uses --clibdir or envvar NIT_DIR.")
			end
		end
		clibdir = clibdir.simplify_path

		bindir = opt_bindir.value
		if bindir == null then
			var dir = once ("NIT_DIR".to_symbol).environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../bin"
				if dir.file_exists then bindir = dir
			else
				dir = "{dir}/bin"
				if dir.file_exists then bindir = dir
			end
			if bindir == null then
				fatal_error(null, "Error: Cannot locate NIT tools directory. Uses --bindir or envvar NIT_DIR.")
			end
		end
		bindir = bindir.simplify_path
	end

	redef fun perform_work(mods)
	do
		for mod in mods do
			var p = new Program(mod, self)
			p.output_format = opt_output_format.value_name
			p.compute_main_method
			p.generate_allocation_iroutines
			if global then
				p.do_global_pre_analysis_optimizations
				p.do_global_analysis
				p.do_global_post_analysis_optimizations
				if opt_log.value then
					p.dump_global_optimizations_information(log_directory)
					p.dump_global_analysis_information(log_directory)
				end
			end
			p.do_table_computation
			p.compile_prog
		end
	end
end

var c = new NitCompiler
c.exec_cmd_line
