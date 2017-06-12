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

# Collect common metrics about packages
module mpackages_metrics

import metrics_base
import model::model_collect

redef class ToolContext

	# --mpackages
	var opt_mpackages = new OptionBool("Compute metrics about mpackages", "--mpackages")

	# MPackages related metrics phase
	var mpackages_metrics_phase: Phase = new MPackagesMetricsPhase(self, null)

	redef init do
		super
		self.option_context.add_option(opt_mpackages)
	end
end

# Extract metrics about packages from the model.
private class MPackagesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mainmodules)
	do
		if not toolcontext.opt_mpackages.value and not toolcontext.opt_all.value then return
		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/mpackages"
		out.mkdir

		var model = toolcontext.modelbuilder.model
		var model_view = model.private_view

		print toolcontext.format_h1("\n# MPackages metrics")

		var metrics = new MetricSet
		metrics.register(new PNOA(model_view))
		metrics.register(new PNOP(model_view))
		metrics.register(new PNOC(model_view))
		metrics.register(new PNOD(model_view))
		metrics.register(new PDIT(model_view))
		metrics.register(new PNBM(model_view))
		metrics.register(new PNBIC(model_view))
		metrics.register(new PNBRC(model_view))
		metrics.register(new PNBICC(model_view))
		metrics.register(new PNBIAC(model_view))
		metrics.register(new PNBII(model_view))
		metrics.register(new PNBIE(model_view))
		metrics.register(new PNBIP(model_view))
		metrics.register(new PNBRP(model_view))
		metrics.register(new PNBIPA(model_view))
		metrics.register(new PNBIPI(model_view))
		metrics.register(new PNBIPM(model_view))
		metrics.register(new PNBIPVT(model_view))

		var mpackages = model.mpackages
		metrics.clear
		metrics.collect(new HashSet[MPackage].from(mpackages))
		metrics.to_console(1, not toolcontext.opt_nocolors.value)
		if csv then metrics.to_csv.write_to_file("{out}/mpackages.csv")
	end
end

# A metric about MPackage
abstract class MPackageMetric
	super Metric
	redef type ELM: MPackage

	# Model view used to collect and filter entities
	var model_view: ModelView
end

# Package Metric: Number of Ancestors
class PNOA
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNOA"
	redef fun desc do return "Package Number Of Ancestors"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_ancestors(model_view).length
		end
	end
end

# Package Metric: Number of Parents
class PNOP
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNOP"
	redef fun desc do return "Package Number Of Parents"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_parents(model_view).length
		end
	end
end

# Package Metric: Number of Children
class PNOC
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNOC"
	redef fun desc do return "Package Number Of Children"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_children(model_view).length
		end
	end
end

# Package Metric: Number of Descendants
class PNOD
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNOD"
	redef fun desc do return "Package Number Of Descendants"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_descendants(model_view).length
		end
	end
end

# Package Metric: Depth in Tree
class PDIT
	super MPackageMetric
	super IntMetric

	redef fun name do return "PDIT"
	redef fun desc do return "Package Depth In Tree"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.hierarchy_poset(model_view)[mpackage].depth
		end
	end
end

# Package Metric: Number of Modules
class PNBM
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBM"
	redef fun desc do return "Number of Modules"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_mmodules(model_view).length
		end
	end
end


# Package Metric: Number of Introduced classes (of all kind)
class PNBIC
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIC"
	redef fun desc do return "Number of Introduced Classes (of all kind)"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_intro_mclasses(model_view).length
		end
	end
end

# Package Metric: Number of Refined Classes (of all kind)
class PNBRC
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBRC"
	redef fun desc do return "Number of Refined Classes (of all kind)"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_redef_mclasses(model_view).length
		end
	end
end

# Package Metric: Number of Introduced Concrete Classes
class PNBICC
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBICC"
	redef fun desc do return "Number of Introduced Concrete Classes"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			var value = 0
			for mclass in mpackage.collect_intro_mclasses(model_view) do
				if mclass.kind == concrete_kind then value += 1
			end
			values[mpackage] = value
		end
	end
end

# Package Metric: Number of Introduced Abstract Classes
class PNBIAC
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIAC"
	redef fun desc do return "Number of Introduced Abstract Classes"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			var value = 0
			for mclass in mpackage.collect_intro_mclasses(model_view) do
				if mclass.kind == abstract_kind then value += 1
			end
			values[mpackage] = value
		end
	end
end

# Package Metric: Number of Introduced Interfaces
class PNBII
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBII"
	redef fun desc do return "Number of Introduced Interfaces"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			var value = 0
			for mclass in mpackage.collect_intro_mclasses(model_view) do
				if mclass.kind == interface_kind then value += 1
			end
			values[mpackage] = value
		end
	end
end

# Package Metric: Number of Introduced Enums
class PNBIE
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIE"
	redef fun desc do return "Number of Introduced Enums"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			var value = 0
			for mclass in mpackage.collect_intro_mclasses(model_view) do
				if mclass.kind == enum_kind then value += 1
			end
			values[mpackage] = value
		end
	end
end

# Package Metric: Number of Introduced Properties (of all kind)
class PNBIP
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIP"
	redef fun desc do return "Number of Introduced Properties (of all kind)"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_intro_mproperties(model_view).length
		end
	end
end

# Package Metric: Number of Redefined Properties (of all kind)
class PNBRP
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBRP"
	redef fun desc do return "Number of Redefined Properties (of all kind)"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_redef_mproperties(model_view).length
		end
	end
end

# Package Metric: Number of Introduced Attributes
class PNBIPA
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIPA"
	redef fun desc do return "Number of Introduced Property Attribute"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_intro_attributes(model_view).length
		end
	end
end

# Package Metric: Number of Introduced Inits
class PNBIPI
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIPI"
	redef fun desc do return "Number of Introduced Property Inits"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_intro_inits(model_view).length
		end
	end
end

# Package Metric: Number of Introduced Methods
class PNBIPM
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIPM"
	redef fun desc do return "Number of Introduced Property Methods"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_intro_methods(model_view).length
		end
	end
end

# Package Metric: Number of Introduced Virtual Types
class PNBIPVT
	super MPackageMetric
	super IntMetric

	redef fun name do return "PNBIPVT"
	redef fun desc do return "Number of Introduced Property Virtual Types"

	redef fun collect(mpackages) do
		for mpackage in mpackages do
			values[mpackage] = mpackage.collect_intro_vts(model_view).length
		end
	end
end
