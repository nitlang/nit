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

import metrics_base
import mclasses_metrics
import semantize

redef class ToolContext

	# Nullable types related metrics
	var nullables_metrics_phase: Phase = new NullablesMetricsPhase(self, null)
end

private class NullablesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_nullables.value and not toolcontext.opt_all.value then return

		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/nullables"
		out.mkdir

		print toolcontext.format_h1("\n# Nullable metrics")

		var model = toolcontext.modelbuilder.model
		var filter = new ModelFilter(private_visibility)

		var metrics = new MetricSet
		metrics.register(new CNBA(model, mainmodule, filter))
		metrics.register(new CNBNA(model, mainmodule, filter))

		var mclasses = new HashSet[MClass]
		for mpackage in model.mpackages do

			print toolcontext.format_h2("\n ## package {mpackage}")

			for mgroup in mpackage.mgroups do
				if mgroup.mmodules.is_empty then continue
				metrics.clear

				# Scalar metrics
				print toolcontext.format_h3("  `- group {mgroup.full_name}")
				var mod_mclasses = new HashSet[MClass]
				for mmodule in mgroup.mmodules do mod_mclasses.add_all(mmodule.intro_mclasses)
				if mod_mclasses.is_empty then continue
				mclasses.add_all(mod_mclasses)
				metrics.collect(new HashSet[MClass].from(mod_mclasses))
				metrics.to_console(1, not toolcontext.opt_nocolors.value)
				if csv then metrics.to_csv.write_to_file("{out}/{mgroup}.csv")
			end
		end
		if not mclasses.is_empty then
			metrics.clear
			# Global metrics
			print toolcontext.format_h2("\n ## global metrics")
			metrics.collect(mclasses)
			metrics.to_console(1, not toolcontext.opt_nocolors.value)
			if csv then metrics.to_csv.write_to_file("{out}/summary.csv")
		end

		compute_nullables_metrics(toolcontext.modelbuilder)
	end
end

# Class Metric: Number of nullables MAttributes
class CNBNA
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbna"
	redef fun desc do return "number of accessible nullable attributes (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var all = mclass.collect_accessible_mattributes(mainmodule, filter)
			for mattr in all do
				if mattr.is_nullable then values.inc(mclass)
			end
		end
	end
end

redef class MAttribute
	# Is this attribute nullable for sure?
	#
	# This mean that its introduction is declarred with a nullable static type
	# since attributes are invariant this will work on most cases
	# attributes with static type anchored with a virtual type are not "nullable for-sure"
	# because this type can be redefined in subclasses
	private fun is_nullable: Bool do return intro.static_mtype isa MNullableType
end

private class NullableSends
	super Visitor
	var nclassdef: AClassdef

	var total_sends: Int = 0
	var nullable_sends: Int = 0
	var nullable_eq_sends: Int = 0
	var buggy_sends: Int = 0

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
				var p = n.callsite.mproperty
				if p.is_null_safe then
					self.nullable_eq_sends += 1
				else
					self.nullable_sends += 1
				end
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
	var nullable_eq_sends = 0
	var buggy_sends = 0

	# Visit all the source code to collect data
	for nmodule in modelbuilder.nmodules do
		for nclassdef in nmodule.n_classdefs do
			var visitor = new NullableSends(nclassdef)
			visitor.enter_visit(nclassdef)
			total_sends += visitor.total_sends
			nullable_sends += visitor.nullable_sends
			nullable_eq_sends += visitor.nullable_eq_sends
			buggy_sends += visitor.buggy_sends
		end
	end
	print "Total number of sends: {total_sends}"
	print "Number of sends on a unsafe nullable receiver: {nullable_sends} ({div(nullable_sends*100,total_sends)}%)"
	print "Number of sends on a safe nullable receiver: {nullable_eq_sends} ({div(nullable_eq_sends*100,total_sends)}%)"
	print "Number of buggy sends (cannot determine the type of the receiver): {buggy_sends} ({div(buggy_sends*100,total_sends)}%)"
end
