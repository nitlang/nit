# This file is part of NIT ( https://nitlanguage.org ).
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

import metrics_base
import model::model_collect

redef class ToolContext

	# MClass related metrics phase
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

		var model = toolcontext.modelbuilder.model
		var filter = new ModelFilter(private_visibility)

		print toolcontext.format_h1("\n# MClasses metrics")

		var metrics = new MetricSet
		metrics.register(new CNOA(model, mainmodule, filter))
		metrics.register(new CNOP(model, mainmodule, filter))
		metrics.register(new CNOC(model, mainmodule, filter))
		metrics.register(new CNOD(model, mainmodule, filter))
		metrics.register(new CDIT(model, mainmodule, filter))
		metrics.register(new CNBP(model, mainmodule, filter))
		metrics.register(new CNBA(model, mainmodule, filter))
		metrics.register(new CNBI(model, mainmodule, filter))
		metrics.register(new CNBM(model, mainmodule, filter))
		metrics.register(new CNBV(model, mainmodule, filter))
		metrics.register(new CNBIP(model, mainmodule, filter))
		metrics.register(new CNBRP(model, mainmodule, filter))
		metrics.register(new CNBHP(model, mainmodule, filter))

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
	end
end

# A metric about MClass
abstract class MClassMetric
	super Metric
	redef type ELM: MClass

	# Model used to collect and filter entities
	var model: Model

	# Mainmodule for class linearization
	var mainmodule: MModule

	# Filter to apply
	var filter: nullable ModelFilter
end

# Class Metric: Number of Ancestors
class CNOA
	super MClassMetric
	super IntMetric
	redef fun name do return "cnoa"
	redef fun desc do return "number of ancestor classes"

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

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.in_hierarchy(mainmodule).depth
		end
	end
end

# Class Metric: Number of MProperties
class CNBP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbp"
	redef fun desc do return "number of accessible properties (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_mproperties(mainmodule, filter).length
		end
	end
end

# Class Metric: Number of MAttributes
class CNBA
	super MClassMetric
	super IntMetric
	redef fun name do return "cnba"
	redef fun desc do return "number of accessible attributes (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_mattributes(mainmodule, filter).length
		end
	end
end

# Class Metric: Number of MMethods
class CNBM
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbm"
	redef fun desc do return "number of accessible methods (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_mmethods(mainmodule, filter).length
		end
	end
end

# Class Metric: Number of Constructors
class CNBI
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbi"
	redef fun desc do return "number of accessible constructors (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_inits(mainmodule, filter).length
		end
	end
end

# Class Metric: Number of Virtual Types
class CNBV
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbv"
	redef fun desc do return "number of accessible virtual types (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_vts(mainmodule, filter).length
		end
	end
end

# Class Metric: Number of Introduced MProperties
class CNBIP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbip"
	redef fun desc do return "number of introduced properties"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_intro_mproperties(filter).length
		end
	end
end

# Class Metric: Number of Refined MProperties
class CNBRP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbrp"
	redef fun desc do return "number of redefined properties"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_redef_mproperties(filter).length
		end
	end
end

# Class Metric: Number of Inherited MProperties
class CNBHP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnbhp"
	redef fun desc do return "number of inherited properties"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_inherited_mproperties(mainmodule, filter).length
		end
	end
end

# Class Metric: Number of Local MProperties (Intro + Redef)
class CNBLP
	super MClassMetric
	super IntMetric
	redef fun name do return "cnblp"
	redef fun desc do return "number of local properties (intro + redef)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_local_mproperties(filter).length
		end
	end
end
