# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Julien Pagès <julien.pages@lirmm.fr>
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

# The compilation module of the VirtualMachine
module compilation

import variables_numbering
import ssa

redef class VirtualMachine

	# The currently analyzed APropdef
	var current_propdef: APropdef

	redef fun new_frame(node, mpropdef, args)
	do
		# Save the current propdef
		if node isa APropdef then self.current_propdef = node

		return super
	end
end

redef class APropdef

	redef fun compile(vm)
	do
		super

		# A new instance of SSA to analyze the self propdef
		var ssa = new SSA(self)

		# Generate basic_blocks and compute SSA-algorithm for this propdef
		compute_ssa(ssa)
	end

	# Redef to add the same position to a new version of a Variable than the original variable
	redef fun generate_name(v, counter, expr, ssa)
	do
		var new_version = super

		# All versions of a variable have the same position in the environment
		new_version.position = v.original_variable.position

		return new_version
	end
end
