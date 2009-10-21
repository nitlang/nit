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

# Intermediate code analysis and optimizations
package analysis

# Global imports
import icode
import icode_dump
import program

# Local Analysis/Optimization
import allocate_iregister_slots
import inline_methods

# Global Analysis types
import instantiated_type_analysis
import reachable_method_analysis
import reachable_as_init
import reachable_from_init_method_analysis

# Global Analysis implementation
import cha_analysis
import rta_analysis
import reachable_as_init_impl
import reachable_from_init_method_analysis_impl

# Global Optimizations
import dead_method_removal
import inline_get_and_set

redef class ToolContext
	readable writable var _global_callgraph: String = "rta"
	readable writable var _no_dead_method_removal: Bool = false
	readable writable var _no_inline_get_set: Bool = false
	readable writable var _no_callgraph_from_init: Bool = false
end

redef class Program
	# This method will analyse the program and store results (in global compilation only)
	fun do_global_analysis do
		assert tc.global

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

		if not tc.no_callgraph_from_init then
			var b = new RFIMABuilder(self)
			b.work
			rfima = b.context
		end

		if rfima == null then rfima = new DefaultReachableFromInitMethodAnalysis
	end

	# This method will optimize the program (in global compilation only)
	# Those are done before analysis
	fun do_global_pre_analysis_optimizations do
		assert tc.global
		if not tc.no_inline_get_set then inline_get_set
	end

	# This method will optimize the program (in global compilation only)
	# Those are done after analysis
	fun do_global_post_analysis_optimizations do
		assert tc.global
		if not tc.no_dead_method_removal then optimize_dead_methods
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

redef class IRoutine
	# Perfom all optimizations
	fun optimize(m: MMModule)
	do
		inline_methods(m)
		allocate_iregister_slots
	end
end
