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

# Collect common metrics about a model
module model_metrics

import metrics_base
import model::model_collect

redef class ToolContext

	# --model
	var opt_model = new OptionBool("Compute metrics about the model", "--model")

	# Model related metrics phase
	var model_metrics_phase: Phase = new ModelMetricsPhase(self, null)

	redef init do
		super
		self.option_context.add_option(opt_model)
	end
end

# Extract metrics about a model
private class ModelMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules) do
		if not toolcontext.opt_model.value and not toolcontext.opt_all.value then return
		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/model"
		out.mkdir

		var model = toolcontext.modelbuilder.model
		var model_view = model.private_view

		print toolcontext.format_h1("\n# Model metrics")

		var metrics = new MetricSet
		metrics.register(new NBP(model_view))
		metrics.register(new NBM(model_view))
		metrics.register(new NBIC(model_view))
		metrics.register(new NBIP(model_view))

		# Scalar metrics
		metrics.collect(new HashSet[Model].from([model]))
		metrics.to_console(1, not toolcontext.opt_nocolors.value)
		if csv then metrics.to_csv.write_to_file("{out}/model.csv")
	end
end

# A metric about a Model
abstract class ModelMetric
	super Metric

	redef type ELM: Model

	# Model view used to collect and filter entities
	var model_view: ModelView
end

# Model Metric: Number of Packages
class NBP
	super ModelMetric
	super IntMetric

	redef fun name do return "NBP"
	redef fun desc do return "Number of Packages"

	redef fun collect(models) do
		for model in models do
			values[model] = model.collect_mpackages(model_view).length
		end
	end
end

# Model Metric: Number of Modules
class NBM
	super ModelMetric
	super IntMetric

	redef fun name do return "NBM"
	redef fun desc do return "Number of Modules"

	redef fun collect(models) do
		for model in models do
			values[model] = model.collect_mmodules(model_view).length
		end
	end
end

# Model Metric: Number of Introduced Classes
class NBIC
	super ModelMetric
	super IntMetric

	redef fun name do return "NBIC"
	redef fun desc do return "Number of Introduced Classes"

	redef fun collect(models) do
		for model in models do
			values[model] = model.collect_intro_mclasses(model_view).length
		end
	end
end

# Model Metric: Number of Introduced Properties
class NBIP
	super ModelMetric
	super IntMetric

	redef fun name do return "NBIP"
	redef fun desc do return "Number of Introduced Properties"

	redef fun collect(models) do
		for model in models do
			values[model] = model.collect_intro_mproperties(model_view).length
		end
	end
end

redef class Model

	# Redef display Model display name for console and csv files
	redef fun to_s do return "Model"
end
