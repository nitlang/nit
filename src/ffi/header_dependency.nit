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
	# Modules with public foreign code blocks (C header)
	var header_dependencies: nullable HashSet[MModule] = null

	private fun compute_header_dependencies(v: HeaderDependancyPhase)
	do
		if header_dependencies != null then return

		var header_dependencies = new HashSet[MModule]

		# gather from importation
		for m in in_importation.direct_greaters do
			m.compute_header_dependencies v

			# does the super module has inherited dependencies?
			var hd = m.header_dependencies
			assert hd != null
			if not hd.is_empty then
				header_dependencies.add_all hd
			end

			# does the super module itself has extern dependencies?
			var amodule = v.toolcontext.modelbuilder.mmodule2node(m)
			if amodule != null and amodule.has_public_c_header then header_dependencies.add(m)
		end

		self.header_dependencies = header_dependencies
	end
end

private class HeaderDependancyPhase
	super Phase

	redef fun process_nmodule(nmodule)
	do
		var mmodule = nmodule.mmodule
		if mmodule == null then return # Skip error
		mmodule.compute_header_dependencies(self)
	end
end
