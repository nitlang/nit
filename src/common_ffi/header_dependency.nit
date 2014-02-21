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

# Tracks which modules has public header code that must be imported
# by user modules.
module header_dependency

import ffi_base
import c

redef class ToolContext
	var header_dependancy_phase: Phase = new HeaderDependancyPhase(self, [ffi_language_assignation_phase, modelize_class_phase])
end

redef class AModule
	private fun has_public_c_header: Bool do
		for code_block in n_extern_code_blocks do if code_block.is_c_header then return true
		return false
	end
end

redef class MModule
	private var header_dependencies_cache: nullable Array[MModule] = null
	fun header_dependencies: Array[MModule]
	do
		var cache = header_dependencies_cache
		assert cache != null
		return cache
	end

	private fun compute_header_dependencies(v: HeaderDependancyPhase)
	do
		if header_dependencies_cache != null then return

		var header_dependencies = new Array[MModule]

		# gather from importation
		for m in in_importation.direct_greaters do
			m.compute_header_dependencies(v)

			# does the super module has inherited dependancies?
			var hd = m.header_dependencies
			if not hd.is_empty then 
				header_dependencies.add_all(hd)
			end

			# does the super module itself has extern dependancies?
			var amodule = v.toolcontext.modelbuilder.mmodule2nmodule[m]
			if amodule.has_public_c_header then header_dependencies.add(m)
		end

		header_dependencies_cache = header_dependencies
	end
end

private class HeaderDependancyPhase
	super Phase

	redef fun process_nmodule(nmodule)
	do
		var mmodule = nmodule.mmodule
		mmodule.compute_header_dependencies(self)
	end
end
