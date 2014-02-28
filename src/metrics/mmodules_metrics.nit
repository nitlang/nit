# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>
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

# Collect common metrics about modules
module mmodules_metrics

import model
import metrics_base
import phase
import frontend

redef class ToolContext
	var mmodules_metrics_phase = new MModulesMetricsPhase(self, null)
end

# Extract metrics about modules from the model.
private class MModulesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_mmodules.value and not toolcontext.opt_all.value then return

		print toolcontext.format_h1("\n# MModules metrics")

		var metrics = new MModuleMetricSet
		metrics.register(new MNOA, new MNOP, new MNOC, new MNOD, new MDIT)
		metrics.register(new MNBI, new MNBR, new MNBCC, new MNBAC, new MNBIC)

		var model = toolcontext.modelbuilder.model
		var mmodules = new HashSet[MModule]
		for mproject in model.mprojects do

			print  toolcontext.format_h2("\n ## project {mproject}")

			for mgroup in mproject.mgroups do
				if mgroup.mmodules.is_empty then continue

				# Scalar metrics
				print  toolcontext.format_h3("  `- group {mgroup.full_name}")

				mmodules.add_all(mgroup.mmodules)
				metrics.collect(new HashSet[MModule].from(mgroup.mmodules), mainmodule)
				for name, metric in metrics.metrics do
					print toolcontext.format_h4("\t{name}: {metric.desc}")
					print toolcontext.format_p("\t    avg: {metric.avg}")
					var max = metric.max
					print  toolcontext.format_p("\t    max: {max.first} ({max.second})")
					var min = metric.min
					print  toolcontext.format_p("\t    min: {min.first} ({min.second})")
				end
			end
		end
		if not mmodules.is_empty then
			# Global metrics
			print  toolcontext.format_h2("\n ## global metrics")

			metrics.collect(mmodules, mainmodule)
			for name, metric in metrics.metrics do
				print toolcontext.format_h4( "\t{name}: {metric.desc}")
				print  toolcontext.format_p("\t    avg: {metric.avg}")
				var max = metric.max
				print  toolcontext.format_p("\t    max: {max.first} ({max.second})")
				var min = metric.min
				print  toolcontext.format_p("\t    min: {min.first} ({min.second})")
			end
		end
	end
end

# A MetricSet for metrics about MModules
class MModuleMetricSet
	super MetricSet
	redef type METRIC: MModuleMetric

	# Collect all the metrics on the set of MModules
	fun collect(mmodules: Set[MModule], mainmodule: MModule) do
		clear
		for metric in metrics.values do
			for mmodule in mmodules do
				metric.collect(mmodule, mainmodule)
			end
		end
	end
end

# An abstract Metric on MModules
abstract class MModuleMetric
	super IntMetric[MModule]
	# Collect the metric on the MModule
	#
	# Results are stored in the property `values`
	fun collect(mmodule: MModule, mainmodule: MModule) is abstract
end

# Module Metric: Number of Ancestors
class MNOA
	super MModuleMetric
	redef fun name do return "mnoa"
	redef fun desc do return "number of ancestor modules"

	redef fun collect(mmodule, main) do
		values[mmodule] = mmodule.in_importation.greaters.length - 1
	end
end

# Module Metric: Number of Parents
class MNOP
	super MModuleMetric
	redef fun name do return "mnop"
	redef fun desc do return "number of parent modules"

	redef fun collect(mmodule, main) do
		values[mmodule] = mmodule.in_importation.direct_greaters.length
	end
end

# Module Metric: Number of Children
class MNOC
	super MModuleMetric
	redef fun name do return "mnoc"
	redef fun desc do return "number of child modules"

	redef fun collect(mmodule, main) do
		values[mmodule] = mmodule.in_importation.direct_smallers.length
	end
end

# Module Metric: Number of Descendants
class MNOD
	super MModuleMetric
	redef fun name do return "mnod"
	redef fun desc do return "number of descendant modules"

	redef fun collect(mmodule, main) do
		values[mmodule] = mmodule.in_importation.smallers.length - 1
	end
end

# Module Metric: Depth in Tree
class MDIT
	super MModuleMetric
	redef fun name do return "mdit"
	redef fun desc do return "depth in module tree"

	redef fun collect(mmodule, main) do
		values[mmodule] = mmodule.in_importation.depth
	end
end

# Module Metric: Number of Introduction (of all kind)
#
# count all mclasses introduced by the module
class MNBI
	super MModuleMetric
	redef fun name do return "mnbi"
	redef fun desc do return "number of introduction in module"

	redef fun collect(mmodule, main) do
		values[mmodule] = mmodule.intro_mclasses.length
	end
end

# Module Metric: Number of Refinement
#
# count all mclasses refined in the module
class MNBR
	super MModuleMetric
	redef fun name do return "mnbr"
	redef fun desc do return "number of refinement in module"

	redef fun collect(mmodule, main) do
		values[mmodule] = 0
		for mclassdef in mmodule.mclassdefs do
			if not mclassdef.is_intro then values.inc(mmodule)
		end
	end
end

# Module Metric: Number of Concrete Class in module (intro + redef)
class MNBCC
	super MModuleMetric
	redef fun name do return "mnbcc"
	redef fun desc do return "number of concrete class in module (intro + redef)"

	redef fun collect(mmodule, main) do
		values[mmodule] = 0
		for mclassdef in mmodule.mclassdefs do
			if mclassdef.mclass.kind == concrete_kind then values.inc(mmodule)
		end
	end
end

# Module Metric: Number of Abstract Class in module (intro + redef)
class MNBAC
	super MModuleMetric
	redef fun name do return "mnbac"
	redef fun desc do return "number of abstract class in module (intro + redef)"

	redef fun collect(mmodule, main) do
		values[mmodule] = 0
		for mclassdef in mmodule.mclassdefs do
			if mclassdef.mclass.kind == abstract_kind then values.inc(mmodule)
		end
	end
end

# Module Metric: Number of Interface in module (intro + redef)
class MNBIC
	super MModuleMetric
	redef fun name do return "mnbic"
	redef fun desc do return "number of interface in module (intro + redef)"

	redef fun collect(mmodule, main) do
		values[mmodule] = 0
		for mclassdef in mmodule.mclassdefs do
			if mclassdef.mclass.kind == interface_kind then values.inc(mmodule)
		end
	end
end

# Module Metric: Number of Enum in module (intro + redef)
class MNBEC
	super MModuleMetric
	redef fun name do return "mnbec"
	redef fun desc do return "number of enum in module (intro + redef)"

	redef fun collect(mmodule, main) do
		values[mmodule] = 0
		for mclassdef in mmodule.mclassdefs do
			if mclassdef.mclass.kind == enum_kind then values.inc(mmodule)
		end
	end
end


