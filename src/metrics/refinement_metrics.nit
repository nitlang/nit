# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Collect metrics about refinement usage
module refinement_metrics

import model
import metrics_base

redef class ToolContext
	var refinement_metrics_phase: Phase = new RefinementMetricsPhase(self, null)
end

private class RefinementMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_refinement.value and not toolcontext.opt_all.value then return
		compute_refinement_metrics(toolcontext.modelbuilder.model)
	end
end

# Print refinement usage metrics
fun compute_refinement_metrics(model: Model)
do
	print "--- Metrics of refinement usage ---"
	var nbmod = model.mmodules.length
	print "Number of modules: {nbmod}"

	print ""

	var nbcla = model.mclasses.length
	var nbcladef = model.mclassdef_hierarchy.length
	print "Number of classes: {nbcla}"

	# determine the distribution of:
	#  * class kinds (interface, abstract class, etc.)
	#  * refinex classes (vs. unrefined ones)
	var kinds = new Counter[MClassKind]
	var refined = 0
	for c in model.mclasses do
		kinds.inc(c.kind)
		if c.mclassdefs.length > 1 then
			refined += 1
		end
	end
	for k in kinds.sort do
		var v = kinds[k]
		print "  Number of {k} kind: {v} ({div(v*100,nbcla)}%)"
	end


	print ""

	print "Number of class definitions: {nbcladef}"
	print "Number of refined classes: {refined} ({div(refined*100,nbcla)}%)"
	print "Average number of class refinments by classes: {div(nbcladef-nbcla,nbcla)}"
	print "Average number of class refinments by refined classes: {div(nbcladef-nbcla,refined)}"

	print ""

	var nbprop = model.mproperties.length
	var nbpropdef = 0
	var redefined = 0
	print "Number of properties: {model.mproperties.length}"
	var pkinds = new Counter[String]
	for p in model.mproperties do
		nbpropdef += p.mpropdefs.length
		if p.mpropdefs.length > 1 then
			redefined += 1
		end
		pkinds.inc(p.class_name)
	end
	for k in pkinds.sort do
		var v = pkinds[k]
		print "  Number of {k}: {v} ({div(v*100,nbprop)}%)"
	end

	print ""

	print "Number of property definitions: {nbpropdef}"
	print "Number of redefined properties: {redefined} ({div(redefined*100,nbprop)}%)"
	print "Average number of property redefinitions by property: {div(nbpropdef-nbprop,nbprop)}"
	print "Average number of property redefinitions by redefined property: {div(nbpropdef-nbprop,redefined)}"
end
