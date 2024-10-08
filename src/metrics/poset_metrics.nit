# This file is part of NIT ( https://nitlanguage.org ).
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

# Metrics about the various posets of the model of a Nit program
module poset_metrics

import metrics_base

redef class ToolContext
	var poset_metrics_phase: Phase = new PosetMetricsPhase(self, null)
end

private class PosetMetricsPhase
	super Phase
	
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_poset.value and not toolcontext.opt_all.value then return

		var model = mainmodule.model
		print "--- Poset metrics ---"
		print "## Module importation hierarchy"
		model.mmodule_importation_hierarchy.print_metrics
		print "## Classdef hierarchy"
		model.mclassdef_hierarchy.print_metrics
		print "## Class hierarchy"
		mainmodule.flatten_mclass_hierarchy.print_metrics
	end
end
