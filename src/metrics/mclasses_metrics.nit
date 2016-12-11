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

import metrics_base
import model::model_collect

redef class ToolContext

	# --mclassses
	var opt_mclasses = new OptionBool("Compute metrics about mclasses", "--mclasses")

	# MClass related metrics phase
	var mclasses_metrics_phase: Phase = new MClassesMetricsPhase(self, null)

	redef init do
		super
		self.option_context.add_option(opt_mclasses)
	end
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
		var model_view = model.private_view

		print toolcontext.format_h1("\n# MClasses metrics")

		var metrics = new MetricSet
		metrics.register(new CNOA(mainmodule, model_view))
		metrics.register(new CNOP(mainmodule, model_view))
		metrics.register(new CNOC(mainmodule, model_view))
		metrics.register(new CNOD(mainmodule, model_view))
		metrics.register(new CDIT(mainmodule, model_view))
		metrics.register(new CNBAP(mainmodule, model_view))
		metrics.register(new CNBAPA(mainmodule, model_view))
		metrics.register(new CNBAPI(mainmodule, model_view))
		metrics.register(new CNBAPM(mainmodule, model_view))
		metrics.register(new CNBAPVT(mainmodule, model_view))
		metrics.register(new CNBIP(mainmodule, model_view))
		metrics.register(new CNBIPA(mainmodule, model_view))
		metrics.register(new CNBIPI(mainmodule, model_view))
		metrics.register(new CNBIPM(mainmodule, model_view))
		metrics.register(new CNBIPVT(mainmodule, model_view))
		metrics.register(new CNBRP(mainmodule, model_view))
		metrics.register(new CNBHP(mainmodule, model_view))

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

	# Main module used for class linearization
	var mainmodule: MModule

	# Model view used to collect and filter entities
	var model_view: ModelView
end

# Class Metric: Number of Ancestors
class CNOA
	super MClassMetric
	super IntMetric
	redef fun name do return "CNOA"
	redef fun desc do return "Class Number Of Ancestors"

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
	redef fun name do return "CNOP"
	redef fun desc do return "Class Number Of Parents"

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
	redef fun name do return "CNOC"
	redef fun desc do return "Class Number Of Children"

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
	redef fun name do return "CNOD"
	redef fun desc do return "Class Number Of Descendants"

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
	redef fun name do return "CDIT"
	redef fun desc do return "Class Depth in Inheritance Tree"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.in_hierarchy(mainmodule).depth
		end
	end
end

# Class Metric: Number of Accessible Properties
class CNBAP
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBAP"
	redef fun desc do return "Number of Accessible Properties (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_mproperties(model_view).length
		end
	end
end

# Class Metric: Number of Accessible Attributes
class CNBAPA
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBAPA"
	redef fun desc do return "Number of Accessible Attributes (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_mattributes(model_view).length
		end
	end
end

# Class Metric: Number of Accessible Methods
class CNBAPM
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBAPM"
	redef fun desc do return "Number of Accessible Methods (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_mmethods(model_view).length
		end
	end
end

# Class Metric: Number of Accesible Inits
class CNBAPI
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBAPI"
	redef fun desc do return "Number of Accessible Inits (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_inits(model_view).length
		end
	end
end

# Class Metric: Number of Accessible Virtual Types
class CNBAPVT
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBAPVT"
	redef fun desc do return "Number of Accessible Virtual Types (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_accessible_vts(model_view).length
		end
	end
end

# Class Metric: Number of Introduced Properties
class CNBIP
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBIP"
	redef fun desc do return "Number of Introduced Properties"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_intro_mproperties(model_view).length
		end
	end
end

# Class Metric: Number of Introduced Attributes
class CNBIPA
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBIPA"
	redef fun desc do return "Number of Introduced Attributes (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_intro_mattributes(model_view).length
		end
	end
end

# Class Metric: Number of Introduced Methods
class CNBIPM
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBIPM"
	redef fun desc do return "Number of Introduced Methods (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_intro_mmethods(model_view).length
		end
	end
end

# Class Metric: Number of Introduced Inits
class CNBIPI
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBIPI"
	redef fun desc do return "Number of Introduced Inits (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_intro_inits(model_view).length
		end
	end
end

# Class Metric: Number of Introduced Virtual Types
class CNBIPVT
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBIPVT"
	redef fun desc do return "Number of Introduced Virtual Types (inherited + local)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_intro_vts(model_view).length
		end
	end
end


# Class Metric: Number of Refined Properties
class CNBRP
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBRP"
	redef fun desc do return "Number of Redefined Properties"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_redef_mproperties(model_view).length
		end
	end
end

# Class Metric: Number of inHerited Properties
class CNBHP
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBHP"
	redef fun desc do return "Number of inHerited Properties"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_inherited_mproperties(model_view).length
		end
	end
end

# Class Metric: Number of Local Properties (Intro + Redef)
class CNBLP
	super MClassMetric
	super IntMetric
	redef fun name do return "CNBLP"
	redef fun desc do return "Number of Local Properties (intro + redef)"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.collect_local_mproperties(model_view).length
		end
	end
end
