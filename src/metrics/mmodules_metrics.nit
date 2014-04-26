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
	var mmodules_metrics_phase: Phase = new MModulesMetricsPhase(self, null)
end

# Extract metrics about modules from the model.
private class MModulesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_mmodules.value and not toolcontext.opt_all.value then return
		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/mmodules"
		out.mkdir

		print toolcontext.format_h1("\n# MModules metrics")

		var metrics = new MetricSet
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
				metrics.clear
				metrics.collect(new HashSet[MModule].from(mgroup.mmodules))
				metrics.to_console(1, not toolcontext.opt_nocolors.value)
				if csv then metrics.to_csv.save("{out}/{mgroup}.csv")
			end
		end
		if not mmodules.is_empty then
			# Global metrics
			print  toolcontext.format_h2("\n ## global metrics")
			metrics.clear
			metrics.collect(mmodules)
			metrics.to_console(1, not toolcontext.opt_nocolors.value)
			if csv then metrics.to_csv.save("{out}/summary.csv")
		end
	end
end

# A metric about MModule
interface MModuleMetric
	super Metric
	redef type ELM: MModule
end

# Module Metric: Number of Ancestors
class MNOA
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnoa"
	redef fun desc do return "number of ancestor modules"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.in_importation.greaters.length - 1
		end
	end
end

# Module Metric: Number of Parents
class MNOP
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnop"
	redef fun desc do return "number of parent modules"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.in_importation.direct_greaters.length
		end
	end
end

# Module Metric: Number of Children
class MNOC
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnoc"
	redef fun desc do return "number of child modules"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.in_importation.direct_smallers.length
		end
	end
end

# Module Metric: Number of Descendants
class MNOD
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnod"
	redef fun desc do return "number of descendant modules"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.in_importation.smallers.length - 1
		end
	end
end

# Module Metric: Depth in Tree
class MDIT
	super MModuleMetric
	super IntMetric
	redef fun name do return "mdit"
	redef fun desc do return "depth in module tree"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.in_importation.depth
		end
	end
end

# Module Metric: Number of Introduction (of all kind)
#
# count all mclasses introduced by the module
class MNBI
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnbi"
	redef fun desc do return "number of introduction in module"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.intro_mclasses.length
		end
	end
end

# Module Metric: Number of Refinement
#
# count all mclasses refined in the module
class MNBR
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnbr"
	redef fun desc do return "number of refinement in module"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclassdef in mmodule.mclassdefs do
				if not mclassdef.is_intro then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Concrete Class in module (intro + redef)
class MNBCC
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnbcc"
	redef fun desc do return "number of concrete class in module (intro + redef)"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.mclass.kind == concrete_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Abstract Class in module (intro + redef)
class MNBAC
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnbac"
	redef fun desc do return "number of abstract class in module (intro + redef)"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.mclass.kind == abstract_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Interface in module (intro + redef)
class MNBIC
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnbic"
	redef fun desc do return "number of interface in module (intro + redef)"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.mclass.kind == interface_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Enum in module (intro + redef)
class MNBEC
	super MModuleMetric
	super IntMetric
	redef fun name do return "mnbec"
	redef fun desc do return "number of enum in module (intro + redef)"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.mclass.kind == enum_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end


