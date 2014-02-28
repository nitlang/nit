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

# Statistics about the usage of nullables
module nullables_metrics

import modelbuilder
private import typing
private import metrics_base
import frontend

redef class ToolContext
	var nullables_metrics_phase = new NullablesMetricsPhase(self, null)
end

private class NullablesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_nullables.value and not toolcontext.opt_all.value then return
		compute_nullables_metrics(toolcontext.modelbuilder)
	end
end

private class NullableSends
	super Visitor
	var modelbuilder: ModelBuilder
	var nclassdef: AClassdef

	var total_sends: Int = 0
	var nullable_sends: Int = 0
	var buggy_sends: Int = 0

	# Get a new visitor on a classef to add type count in `typecount`.
	init(modelbuilder: ModelBuilder, nclassdef: AClassdef)
	do
		self.modelbuilder = modelbuilder
		self.nclassdef = nclassdef
	end

	redef fun visit(n)
	do
		n.visit_all(self)
		if n isa ASendExpr then
			self.total_sends += 1
			var t = n.n_expr.mtype
			if t == null then
				self.buggy_sends += 1
				return
			end
			t = t.anchor_to(self.nclassdef.mclassdef.mmodule, self.nclassdef.mclassdef.bound_mtype)
			if t isa MNullableType then
				self.nullable_sends += 1
			else if t isa MClassType then
				# Nothing
			else
				n.debug("Problem: strange receiver type found: {t} ({t.class_name})")
			end
		end
	end
end

# Visit the AST and print metrics about the usage of send on nullable reciever.
fun compute_nullables_metrics(modelbuilder: ModelBuilder)
do
	print "--- Sends on Nullable Receiver ---"
	var total_sends = 0
	var nullable_sends = 0
	var buggy_sends = 0

	# Visit all the source code to collect data
	for nmodule in modelbuilder.nmodules do
		for nclassdef in nmodule.n_classdefs do
			var visitor = new NullableSends(modelbuilder, nclassdef)
			visitor.enter_visit(nclassdef)
			total_sends += visitor.total_sends
			nullable_sends += visitor.nullable_sends
			buggy_sends += visitor.buggy_sends
		end
	end
	print "Total number of sends: {total_sends}"
	print "Number of sends on a nullable receiver: {nullable_sends} ({div(nullable_sends*100,total_sends)}%)"
	print "Number of buggy sends (cannot determine the type of the receiver): {buggy_sends} ({div(buggy_sends*100,total_sends)}%)"
end
