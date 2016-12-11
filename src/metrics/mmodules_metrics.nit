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

import metrics_base
import model::model_collect

redef class ToolContext

	# --mmodules
	var opt_mmodules = new OptionBool("Compute metrics about mmodules", "--mmodules")

	# MModules related metrics phase
	var mmodules_metrics_phase: Phase = new MModulesMetricsPhase(self, null)

	redef init do
		super
		self.option_context.add_option(opt_mmodules)
	end
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

		var model = toolcontext.modelbuilder.model
		var model_view = model.private_view

		print toolcontext.format_h1("\n# MModules metrics")

		var metrics = new MetricSet
		metrics.register(new MNOA(mainmodule, model_view))
		metrics.register(new MNOP(mainmodule, model_view))
		metrics.register(new MNOC(mainmodule, model_view))
		metrics.register(new MNOD(mainmodule, model_view))
		metrics.register(new MDIT(mainmodule, model_view))
		metrics.register(new MNBIC(mainmodule, model_view))
		metrics.register(new MNBRC(mainmodule, model_view))
		metrics.register(new MNBICC(mainmodule, model_view))
		metrics.register(new MNBIAC(mainmodule, model_view))
		metrics.register(new MNBII(mainmodule, model_view))
		metrics.register(new MNBIE(mainmodule, model_view))
		metrics.register(new MNBIP(mainmodule, model_view))
		metrics.register(new MNBRP(mainmodule, model_view))
		metrics.register(new MNBIPA(mainmodule, model_view))
		metrics.register(new MNBIPI(mainmodule, model_view))
		metrics.register(new MNBIPM(mainmodule, model_view))
		metrics.register(new MNBIPVT(mainmodule, model_view))

		var mmodules = new HashSet[MModule]
		for mpackage in model.mpackages do

			print  toolcontext.format_h2("\n ## package {mpackage}")
			for mgroup in mpackage.mgroups do
				if mgroup.mmodules.is_empty then continue

				# Scalar metrics
				print  toolcontext.format_h3("  `- group {mgroup.full_name}")
				mmodules.add_all(mgroup.mmodules)
				metrics.clear
				metrics.collect(new HashSet[MModule].from(mgroup.mmodules))
				metrics.to_console(1, not toolcontext.opt_nocolors.value)
				if csv then metrics.to_csv.write_to_file("{out}/{mgroup}.csv")
			end
		end
		if not mmodules.is_empty then
			# Global metrics
			print  toolcontext.format_h2("\n ## global metrics")
			metrics.clear
			metrics.collect(mmodules)
			metrics.to_console(1, not toolcontext.opt_nocolors.value)
			if csv then metrics.to_csv.write_to_file("{out}/summary.csv")
		end
	end
end

# A metric about MModule
abstract class MModuleMetric
	super Metric
	redef type ELM: MModule

	# Main module used for linearization
	var mainmodule: MModule

	# Model view used to collect and filter entities
	var model_view: ModelView
end

# Module Metric: Number of Ancestors
class MNOA
	super MModuleMetric
	super IntMetric
	redef fun name do return "MNOA"
	redef fun desc do return "Module Number Of Ancestors"

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
	redef fun name do return "MNOP"
	redef fun desc do return "Module Number Of Parents"

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
	redef fun name do return "MNOC"
	redef fun desc do return "Module Number Of Children"

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
	redef fun name do return "MNOD"
	redef fun desc do return "Module Number Of Descendants"

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
	redef fun name do return "MDIR"
	redef fun desc do return "Module Depth In Tree"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.in_importation.depth
		end
	end
end

# Module Metric: Number of Introduced Classes (of all kind)
class MNBIC
	super MModuleMetric
	super IntMetric
	redef fun name do return "MNBIC"
	redef fun desc do return "Number of Introduced Classes"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_intro_mclasses(model_view).length
		end
	end
end

# Module Metric: Number of Refined Classes
class MNBRC
	super MModuleMetric
	super IntMetric
	redef fun name do return "MNBRC"
	redef fun desc do return "Number of Refined Classes"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_redef_mclasses(model_view).length
		end
	end
end

# Module Metric: Number of Introduced Concrete Classes
class MNBICC
	super MModuleMetric
	super IntMetric
	redef fun name do return "MNBICC"
	redef fun desc do return "Number of Introduced Concrete Classes"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclass in mmodule.collect_intro_mclasses(model_view) do
				if mclass.kind == concrete_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Introduced Abstract Classes
class MNBIAC
	super MModuleMetric
	super IntMetric
	redef fun name do return "MNBIAC"
	redef fun desc do return "Number of Introduced Abstract Classes"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclass in mmodule.collect_intro_mclasses(model_view) do
				if mclass.kind == abstract_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Introduced Interfaces
class MNBII
	super MModuleMetric
	super IntMetric
	redef fun name do return "MNBII"
	redef fun desc do return "Number of Introduced Interfaces"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclass in mmodule.collect_intro_mclasses(model_view) do
				if mclass.kind == interface_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Introduced Enums
class MNBIE
	super MModuleMetric
	super IntMetric
	redef fun name do return "MNBIE"
	redef fun desc do return "Number of Introduced Enums"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var value = 0
			for mclass in mmodule.collect_intro_mclasses(model_view) do
				if mclass.kind == enum_kind then value += 1
			end
			values[mmodule] = value
		end
	end
end

# Module Metric: Number of Introduced Properties (of all kind)
class MNBIP
	super MModuleMetric
	super IntMetric

	redef fun name do return "MNBIP"
	redef fun desc do return "Number of Introduced Properties (of all kind)"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_intro_mproperties(model_view).length
		end
	end
end

# Module Metric: Number of Redefined Properties (of all kind)
class MNBRP
	super MModuleMetric
	super IntMetric

	redef fun name do return "MNBRP"
	redef fun desc do return "Number of Redefined Properties (of all kind)"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_redef_mproperties(model_view).length
		end
	end
end

# Module Metric: Number of Introduced Attributes
class MNBIPA
	super MModuleMetric
	super IntMetric

	redef fun name do return "MNBIPA"
	redef fun desc do return "Number of Introduced Property Attribute"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_intro_attributes(model_view).length
		end
	end
end

# Module Metric: Number of Introduced Inits
class MNBIPI
	super MModuleMetric
	super IntMetric

	redef fun name do return "MNBIPI"
	redef fun desc do return "Number of Introduced Property Inits"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_intro_inits(model_view).length
		end
	end
end

# Module Metric: Number of Introduced Methods
class MNBIPM
	super MModuleMetric
	super IntMetric

	redef fun name do return "MNBIPM"
	redef fun desc do return "Number of Introduced Property Methods"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_intro_methods(model_view).length
		end
	end
end

# Module Metric: Number of Introduced Virtual Types
class MNBIPVT
	super MModuleMetric
	super IntMetric

	redef fun name do return "MNBIPVT"
	redef fun desc do return "Number of Introduced Property Virtual Types"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			values[mmodule] = mmodule.collect_intro_vts(model_view).length
		end
	end
end
