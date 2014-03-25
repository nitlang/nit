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

# Collect common metrics about mclasses
module mclasses_metrics

import model
import metrics_base
import phase
import frontend

redef class ToolContext
	var mclasses_metrics_phase: Phase = new MClassesMetricsPhase(self, null)
end

# Extract metrics about mclasses from model.
private class MClassesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_mclasses.value and not toolcontext.opt_all.value then return
		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/mclasses"
		out.mkdir


		print toolcontext.format_h1("\n# MClasses metrics")

		var metrics = new MetricSet
		var min_vis = private_visibility
		metrics.register(new CNOA(mainmodule))
		metrics.register(new CNOP(mainmodule))
		metrics.register(new CNOC(mainmodule))
		metrics.register(new CNOD(mainmodule))
		metrics.register(new CDIT(mainmodule))
		metrics.register(new CNBIP(mainmodule, min_vis))
		metrics.register(new CNBRP(mainmodule, min_vis))
		metrics.register(new CNBHP(mainmodule, min_vis))
		#TODO metrics.register(new CNBI) # nb init
		#TODO metrics.register(new CNBA) # nb attrs
		#TODO metrics.register(new CNBM) # nb methods
		#TODO metrics.register(new CNBV) # nb vtypes

		var model = toolcontext.modelbuilder.model
		var mclasses = new HashSet[MClass]
		for mproject in model.mprojects do

			print toolcontext.format_h2("\n ## project {mproject}")

			for mgroup in mproject.mgroups do
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
				if csv then metrics.to_csv.save("{out}/{mgroup}.csv")
			end
		end
		if not mclasses.is_empty then
			metrics.clear
			# Global metrics
			print toolcontext.format_h2("\n ## global metrics")
			metrics.collect(mclasses)
			metrics.to_console(1, not toolcontext.opt_nocolors.value)
			if csv then metrics.to_csv.save("{out}/summary.csv")
		end
	end
end

# A metric about MClass
interface MClassMetric
	super Metric
	redef type ELM: MClass
end

# Class Metric: Number of Ancestors
class CNOA
	super MClassMetric
	super IntMetric
	redef fun name do return "cnoa"
	redef fun desc do return "number of ancestor classes"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.in_hierarchy(mainmodule).greaters.length - 1
		end
	end
end

# Class Metric: Number of Parents
class CNOP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnop"
	redef fun desc do return "number of parent classes"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.in_hierarchy(mainmodule).direct_greaters.length
		end
	end
end

# Class Metric: Number of Children
class CNOC
	super MClassMetric
	super IntMetric
	redef fun name do return "cnoc"
	redef fun desc do return "number of child classes"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.in_hierarchy(mainmodule).direct_smallers.length
		end
	end
end

# Class Metric: Number of Descendants
class CNOD
	super MClassMetric
	super IntMetric
	redef fun name do return "cnod"
	redef fun desc do return "number of descendant classes"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.in_hierarchy(mainmodule).smallers.length - 1
		end
	end
end

# Class Metric: Depth in Inheritance Tree
class CDIT
	super MClassMetric
	super IntMetric
	redef fun name do return "cdit"
	redef fun desc do return "depth in class tree"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.in_hierarchy(mainmodule).depth
		end
	end
end

# Class Metric: Number of Introduced MProperties
class CNBIP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbip"
	redef fun desc do return "number of introduced properties"

	var mainmodule: MModule
	var min_visibility: MVisibility

	init(mainmodule: MModule, min_visibility: MVisibility) do
		self.mainmodule = mainmodule
		self.min_visibility = min_visibility
	end

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.intro_mproperties(min_visibility).length
		end
	end
end

# Class Metric: Number of Refined MProperties
class CNBRP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbrp"
	redef fun desc do return "number of redefined properties"

	var mainmodule: MModule
	var min_visibility: MVisibility

	init(mainmodule: MModule, min_visibility: MVisibility) do
		self.mainmodule = mainmodule
		self.min_visibility = min_visibility
	end

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.redef_mproperties(min_visibility).length
		end
	end
end

# Class Metric: Number of Inherited MProperties
class CNBHP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbhp"
	redef fun desc do return "number of inherited properties"

	var mainmodule: MModule
	var min_visibility: MVisibility

	init(mainmodule: MModule, min_visibility: MVisibility) do
		self.mainmodule = mainmodule
		self.min_visibility = min_visibility
	end

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.inherited_mproperties(mainmodule, min_visibility).length
		end
	end
end

# Class Metric: Number of Local MProperties (Intro + Redef)
class CNBLP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnblp"
	redef fun desc do return "number of local properties (intro + redef)"

	var mainmodule: MModule
	var min_visibility: MVisibility

	init(mainmodule: MModule, min_visibility: MVisibility) do
		self.mainmodule = mainmodule
		self.min_visibility = min_visibility
	end

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.local_mproperties(min_visibility).length
		end
	end
end
