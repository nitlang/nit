# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Metrics on the usage of explicit static types.
module static_types_metrics

import metrics_base
import modelize

redef class ToolContext
	var static_types_metrics_phase: Phase = new StaticTypesMetricsPhase(self, null)
end

private class StaticTypesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_static_types.value and not toolcontext.opt_all.value then return
		compute_static_types_metrics(toolcontext.modelbuilder)
	end
end

# The job of this visitor is to resolve all types found
private class ATypeCounterVisitor
	super Visitor
	var modelbuilder: ModelBuilder
	var nclassdef: AClassdef

	var typecount: Counter[MType]

	redef fun visit(n)
	do
		if n isa AAnnotation then return

		if n isa AType then do
			var mclassdef = self.nclassdef.mclassdef
			if mclassdef == null then break
			var mtype = modelbuilder.resolve_mtype(mclassdef, n)
			if mtype != null then
				self.typecount.inc(mtype)
			end
		end
		n.visit_all(self)
	end
end

# Visit the AST and print metrics on the usage of explicit static types.
fun compute_static_types_metrics(modelbuilder: ModelBuilder)
do
	# Count each occurence of a specific static type
	var typecount = new Counter[MType]

	# Visit all the source code to collect data
	for nmodule in modelbuilder.nmodules do
		for nclassdef in nmodule.n_classdefs do
			var visitor = new ATypeCounterVisitor(modelbuilder, nclassdef, typecount)
			visitor.enter_visit(nclassdef)
		end
	end

	# Display data
	print "--- Metrics of the explitic static types ---"
	print "Total number of explicit static types: {typecount.sum}"
	if typecount.sum == 0 then return

	print "Statistics of type usage:"
	typecount.print_summary
	typecount.print_elements(10)
end
