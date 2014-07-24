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

# Metrics from RTA
module rta_metrics

import modelbuilder
private import rapid_type_analysis
private import metrics_base
import mmodules_metrics
import mclasses_metrics
import frontend

redef class ToolContext
	var rta_metrics_phase: Phase = new RTAMetricsPhase(self, null)
end

private class RTAMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_rta.value and not toolcontext.opt_all.value then return
		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/rta"
		out.mkdir

		print toolcontext.format_h1("\n# RTA metrics")

		print toolcontext.format_h2("\n ## Live instances by mainmodules")
		var mmetrics = new MetricSet
		mmetrics.register(new MNLC(toolcontext.modelbuilder))
		mmetrics.register(new MNLT(toolcontext.modelbuilder))
		mmetrics.register(new MNCT(toolcontext.modelbuilder))
		mmetrics.register(new MNLI(toolcontext.modelbuilder))
		mmetrics.register(new MNLM(toolcontext.modelbuilder))
		mmetrics.register(new MNLMD(toolcontext.modelbuilder))
		mmetrics.register(new MNLDD(toolcontext.modelbuilder))
		mmetrics.collect(new HashSet[MModule].from([mainmodule]))
		mmetrics.to_console(1, not toolcontext.opt_nocolors.value)
		if csv then mmetrics.to_csv.save("{out}/{mainmodule}.csv")

		var mtypes = new HashSet[MType]
		var analysis = new RapidTypeAnalysis(toolcontext.modelbuilder, mainmodule)
		analysis.run_analysis
		mtypes.add_all(analysis.live_types)
		mtypes.add_all(analysis.live_cast_types)

		print toolcontext.format_h2("\n ## Total live instances by mclasses")
		var cmetrics = new MetricSet
		cmetrics.register(analysis.cnli)
		cmetrics.register(analysis.cnlc)
		cmetrics.to_console(1, not toolcontext.opt_nocolors.value)
		if csv then cmetrics.to_csv.save("{out}/mclasses.csv")

		print toolcontext.format_h2("\n ## Total live instances by mtypes")
		var tmetrics = new MetricSet
		tmetrics.register(analysis.tnli)
		tmetrics.register(analysis.tnlc)
		tmetrics.to_console(1, not toolcontext.opt_nocolors.value)
		if csv then tmetrics.to_csv.save("{out}/mtypes.csv")

		print toolcontext.format_h2("\n ## MType complexity")
		var gmetrics = new MetricSet
		gmetrics.register(new TAGS)
		gmetrics.register(new TDGS)
		gmetrics.collect(mtypes)
		gmetrics.to_console(1, not toolcontext.opt_nocolors.value)
		if csv then gmetrics.to_csv.save("{out}/complexity.csv")

		callsite_info(analysis)

		# dump type and method infos
		if csv then
			analysis.live_types_to_csv.save("{out}/rta_types.csv")
			analysis.live_methods_to_tree.write_to_file("{out}/rta_methods.dat")
		end
	end

	fun callsite_info(rta: RapidTypeAnalysis)
	do
		print toolcontext.format_h2("\n ## Callsites")
		print "* {rta.live_callsites.length} live callsites"

		var csep = new Counter[MPropDef]
		var cglo = new Counter[MPropDef]
		var morphisme = new Counter[Int]
		for cs in rta.live_callsites do
			csep.inc(cs.mpropdef)
			var targets = rta.live_targets(cs)
			for d in targets do
				cglo.inc(d)
			end
			morphisme.inc(targets.length)
		end

		print toolcontext.format_h3("MMethodDef locally designated (by number of CallSites)")
		csep.print_summary
		csep.print_elements(5)

		print toolcontext.format_h3("MMethodDef possibly invoked at runtime (by number of CallSites)")
		cglo.print_summary
		cglo.print_elements(5)
	end
end

# Summary metrics

# MModule Metric: Number of Live Types
class MNLI
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnli"
	redef fun desc do return "number of live instances in a mmodule"

	var modelbuilder: ModelBuilder
	init(modelbuilder: ModelBuilder) do self.modelbuilder = modelbuilder

	redef fun collect(mainmodules) do
		for mainmodule in mainmodules do
			var analysis = new RapidTypeAnalysis(modelbuilder, mainmodule)
			analysis.run_analysis
			values[mainmodule] = analysis.tnli.sum
		end
	end
end

# MModule Metric: Number of Live Types
class MNLT
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnlt"
	redef fun desc do return "number of live mtypes in a mmodule"

	var modelbuilder: ModelBuilder
	init(modelbuilder: ModelBuilder) do self.modelbuilder = modelbuilder

	redef fun collect(mainmodules) do
		for mainmodule in mainmodules do
			var analysis = new RapidTypeAnalysis(modelbuilder, mainmodule)
			analysis.run_analysis
			values[mainmodule] = analysis.live_types.length
		end
	end
end

# MModule Metric: Number of Live Cast Types
class MNCT
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnct"
	redef fun desc do return "number of live cast mtypes in a mmodule"

	var modelbuilder: ModelBuilder
	init(modelbuilder: ModelBuilder) do self.modelbuilder = modelbuilder

	redef fun collect(mainmodules) do
		for mainmodule in mainmodules do
			var analysis = new RapidTypeAnalysis(modelbuilder, mainmodule)
			analysis.run_analysis
			values[mainmodule] = analysis.live_cast_types.length
		end
	end
end

# MModule Metric: Number of Live Classes
class MNLC
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnlc"
	redef fun desc do return "number of live mclasses in a mmodule"

	var modelbuilder: ModelBuilder
	init(modelbuilder: ModelBuilder) do self.modelbuilder = modelbuilder

	redef fun collect(mainmodules) do
		for mainmodule in mainmodules do
			var live = new HashSet[MClass]
			var analysis = new RapidTypeAnalysis(modelbuilder, mainmodule)
			analysis.run_analysis
			for mtype in analysis.live_types do
				live.add(mtype.mclass)
			end
			values[mainmodule] = live.length
		end
	end
end

# MModule Metric: Number of Live Methods
class MNLM
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnlm"
	redef fun desc do return "number of live methods in a mmodule"

	var modelbuilder: ModelBuilder
	init(modelbuilder: ModelBuilder) do self.modelbuilder = modelbuilder

	redef fun collect(mainmodules) do
		for mainmodule in mainmodules do
			var analysis = new RapidTypeAnalysis(modelbuilder, mainmodule)
			analysis.run_analysis
			values[mainmodule] = analysis.live_methods.length
		end
	end
end

# MModule Metric: Number of Live MethodDefs
class MNLMD
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnlmd"
	redef fun desc do return "number of live method definitions in a mmodule"

	var modelbuilder: ModelBuilder
	init(modelbuilder: ModelBuilder) do self.modelbuilder = modelbuilder

	redef fun collect(mainmodules) do
		for mainmodule in mainmodules do
			var analysis = new RapidTypeAnalysis(modelbuilder, mainmodule)
			analysis.run_analysis
			values[mainmodule] = analysis.live_methoddefs.length
		end
	end
end

# MModule Metric: Number of Dead MethodDefs
class MNLDD
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnldd"
	redef fun desc do return "number of dead method definitions in a mmodule"

	var modelbuilder: ModelBuilder
	init(modelbuilder: ModelBuilder) do self.modelbuilder = modelbuilder

	redef fun collect(mainmodules) do
		for mainmodule in mainmodules do
			var dead = 0
			var analysis = new RapidTypeAnalysis(modelbuilder, mainmodule)
			analysis.run_analysis
			for mmethod in analysis.live_methods do
				for mdef in mmethod.mpropdefs do
					if analysis.live_methoddefs.has(mdef) or mdef.is_abstract then continue
					dead += 1
				end
			end
			values[mainmodule] = dead
		end
	end
end

# MClass metrics

# Class Metric: Number of Live Instances
#
# count all the `new` made on each mclass
class CNLI
	super MClassMetric
	super IntMetric
	redef fun name do return "cnli"
	redef fun desc do return "number of live instances for a mclass"

	redef fun collect(mclasses) do end
end

# Class Metric: Number of Live Cast
#
# count all the cast made on each mclass type
class CNLC
	super MClassMetric
	super IntMetric
	redef fun name do return "cnlc"
	redef fun desc do return "number of live cast for a mclass type"

	redef fun collect(mclasses) do end
end

# MType metrics

# A metric about MType
interface MTypeMetric
	super Metric
	redef type ELM: MType
end

# Type Metric: Number of Live Instances
#
# count all the `new` made on each types
class TNLI
	super MTypeMetric
	super IntMetric
	redef fun name do return "tnli"
	redef fun desc do return "number of live instances for a mtype"

	redef fun collect(mtypes) do end
end

# Type Metric: Number of Live Cast
#
# count all the cast made to each types
class TNLC
	super MTypeMetric
	super IntMetric
	redef fun name do return "tnlc"
	redef fun desc do return "number of live casts to a mtype"

	redef fun collect(mtypes) do end
end

# Type Metric: Arity of Generic Signature
#
# tags(List[X]) = 1
# tags(Map[X, Y]) = 2
class TAGS
	super MTypeMetric
	super IntMetric
	redef fun name do return "tags"
	redef fun desc do return "arity of generic signature"

	redef fun collect(mtypes) do
		for mtype in mtypes do
			if mtype isa MGenericType then
				values[mtype] = mtype.arguments.length
			else
				values[mtype] = 0
			end
		end
	end
end

# Type Metric: Depth of Generic Signature
#
# tdgs(List[X]) = 1
# tdgs(Map[X, List[Y]]) = 2
class TDGS
	super MTypeMetric
	super IntMetric
	redef fun name do return "tdos"
	redef fun desc do return "depth of generic signature"

	redef fun collect(mtypes) do
		for mtype in mtypes do
			values[mtype] = mtype.signature_depth
		end
	end
end

# rta redef

redef class RapidTypeAnalysis
	var cnli = new CNLI
	var cnlc = new CNLC
	var tnli = new TNLI
	var tnlc = new TNLC

	redef fun add_new(recv, mtype) do
		super
		tnli.values.inc(mtype)
		cnli.values.inc(mtype.mclass)
	end

	redef fun add_cast(mtype) do
		super
		tnlc.values.inc(mtype)

		mtype = mtype.as_notnullable
		if mtype isa MClassType then
			cnlc.values.inc(mtype.mclass)
		end
	end
end

# model redefs

redef class MType
	private fun signature_depth: Int do
		var mtype = self.as_notnullable
		if not mtype isa MGenericType then return 0

		var depth = 0
		for ft in mtype.arguments do
			var ftd = ft.signature_depth
			if ftd > depth then depth = ftd
		end
		return depth + 1
	end
end

