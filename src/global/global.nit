# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# Intermediate code global analysis and optimizations
package global

# Global imports
import icode
import program
import abstracttool

# Global Analysis types
private import instantiated_type_analysis
private import reachable_method_analysis
private import reachable_as_init
private import reachable_from_init_method_analysis

# Global Analysis implementation
private import cha_analysis
private import rta_analysis
private import reachable_as_init_impl
private import reachable_from_init_method_analysis_impl

# Global Optimizations
private import dead_method_removal
private import inline_get_and_set
private import remove_out_of_init_get_test

redef class ToolContext
	readable writable var _global_callgraph: String = "rta"

	readable var _opt_global: OptionBool = new OptionBool("Use global compilation", "--global")
	readable var _opt_global_no_STF_opt: OptionBool = new OptionBool("Do not use SFT optimization", "--no-global-SFT-optimization")
	readable var _opt_global_no_DMR_opt: OptionBool = new OptionBool("Do not use dead method removal optimization", "--no-global-DMR-optimization")
	readable var _opt_global_no_inline_get_set: OptionBool = new OptionBool("Do not automatically inline getters/setters", "--no-global-get-set-inlining")
	readable var _opt_global_no_out_of_init_get_test_opt: OptionBool = new OptionBool("Do not remove get tests outside object initialization", "--no-global-OOIT-optimization")
	readable var _opt_global_no_RFIMA: OptionBool = new OptionBool("Do not use a specialized algorithm to find reachable methods from initializers", "--no-global-RFIM-analysis")
	readable var _opt_global_callgraph: OptionEnum = new OptionEnum(["none", "cha", "rta"], "The algorithm to use to build the callgraph", 2, "--global-callgraph")

	redef init
	do
		super
		option_context.add_option(opt_global, opt_global_no_STF_opt, opt_global_no_DMR_opt, opt_global_callgraph, opt_global_no_inline_get_set, opt_global_no_RFIMA, opt_global_no_out_of_init_get_test_opt)
	end
end

redef class AbstractCompiler
	redef fun process_options
	do
		# FIXME: for some reason (a bug in the metamodel obviously) redefining process_options in ToolContext does not work: the compilation goes fine but the caal-mext-method skips it.
		super
		global = opt_global.value
		use_SFT_optimization = not opt_global_no_STF_opt.value
		global_callgraph = opt_global_callgraph.value_name
	end
end

redef class Program
	# This method will analyse the program and store results (in global compilation only)
	fun do_global_analysis do
		assert tc.global
		# Pre optimizations:
		if not tc.opt_global_no_inline_get_set.value then inline_get_set

		if tc.global_callgraph == "cha" then
			var cha = new ChaBuilder(self)
			cha.work
			rma = cha.context
		else if tc.global_callgraph == "rta" then
			var rta = new RtaBuilder(self)
			rta.work
			rma = rta.context
			ita = rta.context
		end

		# Ensure we have all analysis created
		if rma == null then rma = new DefaultReachableMethodAnalysis
		if ita == null then ita = new DefaultInstantiatedTypeAnalysis

		var rai_builder = new ReachableAsInitBuilder(self)
		rai_builder.work
		rai = rai_builder.context

		if not tc.opt_global_no_RFIMA.value then
			var b = new RFIMABuilder(self)
			b.work
			rfima = b.context
		end

		if rfima == null then rfima = new DefaultReachableFromInitMethodAnalysis

		# Post optimizations
		if not tc.opt_global_no_DMR_opt.value then optimize_dead_methods
		if not tc.opt_global_no_out_of_init_get_test_opt.value then optimize_out_of_init_getters

		# LOG
		if tc.opt_log.value then
			dump_global_optimizations_information(tc.log_directory)
			dump_global_analysis_information(tc.log_directory)
		end
	end

	fun dump_global_optimizations_information(directory_name: String) do
		dump_out_of_init_information(directory_name)
		dump_dead_method_optimization(directory_name)
		dump_inline_get_set(directory_name)
	end

	# This method will create log files storing analysis information
	fun dump_global_analysis_information(directory_name: String) do
		dump_reachable_methods(directory_name, tc.global_callgraph)
		dump_unreachable_methods(directory_name, tc.global_callgraph)
		dump_instantiated_types(directory_name)
		dump_not_instantiated_types(directory_name)
		dump_reachable_as_init_methods(directory_name)
		dump_reachable_methods_from_init(directory_name)
		dump_unreachable_methods_from_init(directory_name)
	end
end
