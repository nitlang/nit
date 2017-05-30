# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Injection of the `subset` class kind.
#
# TODO: Will become useless (and wrong) once the `subset` annotation is replaced
# by a keyword.
module modelize_subset

import phase
import subset_visitor

redef class ToolContext
	# The phase that injects `isa` method definitions.
	var modelize_subset_phase: Phase = new ModelizeSubsetPhase(self, null)
end

private class ModelizeSubsetPhase
	super Phase

	redef fun process_npropdef(npropdef: APropdef)
	do
		var v = new ModelizeSubsetVisitor
		v.enter_visit(npropdef)
	end
end

private class ModelizeSubsetVisitor
	super SubsetVisitor

	redef fun visit_subset(n_classdef, annotation) do
		# Replace the class kind.

		var n_id = annotation.n_atid.n_id

		var keyword = new TKwsubset
		keyword.location = n_classdef.n_classkind.location
		keyword.text = n_id.text

		var kind = new ASubsetClasskind
		kind.n_kwsubset = keyword

		n_classdef.n_classkind = kind
	end
end
