# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module api_metrics

import web_base
import metrics

redef class APIRouter
	redef init do
		super
		use("/metrics/structural/:id", new APIStructuralMetrics(config))
	end
end

class APIStructuralMetrics
	super APIHandler

	private fun mclasses_metrics: MetricSet do
		var mainmodule = config.mainmodule
		var metrics = new MetricSet
		metrics.register(new CNOA(mainmodule, view))
		metrics.register(new CNOP(mainmodule, view))
		metrics.register(new CNOC(mainmodule, view))
		metrics.register(new CNOD(mainmodule, view))
		metrics.register(new CNOAC(mainmodule, view))
		metrics.register(new CNOAA(mainmodule, view))
		metrics.register(new CNOAI(mainmodule, view))
		metrics.register(new CDIT(mainmodule, view))
		metrics.register(new CNBP(mainmodule, view))
		metrics.register(new CNBA(mainmodule, view))
		metrics.register(new CNBM(mainmodule, view))
		metrics.register(new CNBI(mainmodule, view))
		metrics.register(new CNBV(mainmodule, view))
		metrics.register(new CNBIP(mainmodule, view))
		metrics.register(new CNBRP(mainmodule, view))
		metrics.register(new CNBHP(mainmodule, view))
		metrics.register(new CNBLP(mainmodule, view))
		return metrics
	end

	private fun mmodules_metrics: MetricSet do
		var mainmodule = config.mainmodule
		var metrics = new MetricSet
		metrics.register(new MNOA(mainmodule, view))
		metrics.register(new MNOP(mainmodule, view))
		metrics.register(new MNOC(mainmodule, view))
		metrics.register(new MNOD(mainmodule, view))
		metrics.register(new MDIT(mainmodule, view))
		metrics.register(new MNBD(mainmodule, view))
		metrics.register(new MNBI(mainmodule, view))
		metrics.register(new MNBR(mainmodule, view))
		metrics.register(new MNBCC(mainmodule, view))
		metrics.register(new MNBAC(mainmodule, view))
		metrics.register(new MNBIC(mainmodule, view))
		return metrics
	end

	redef fun get(req, res) do
		var mentity = mentity_from_uri(req, res)
		if mentity == null then return
		var metrics = mentity.collect_metrics(self)
		if metrics == null then
			res.api_error(404, "No metric for mentity `{mentity.full_name}`")
			return
		end
		res.json metrics
	end
end

redef class MEntity
	private fun collect_metrics(h: APIStructuralMetrics): nullable JsonObject do return null
end

redef class MPackage
	redef fun collect_metrics(h) do
		var mclasses = new HashSet[MClass]
		for mgroup in self.mgroups do
			for mmodule in mgroup.mmodules do mclasses.add_all mmodule.intro_mclasses
		end

		var mclasses_metrics = h.mclasses_metrics
		mclasses_metrics.collect(new HashSet[MClass].from(mclasses))

		var mmodules = new HashSet[MModule]
		for mgroup in self.mgroups do
			mmodules.add_all mgroup.mmodules
		end

		var mmodules_metrics = h.mmodules_metrics
		mmodules_metrics.collect(new HashSet[MModule].from(mmodules))

		var metrics = new JsonObject
		metrics["mclasses"] = mclasses_metrics
		metrics["mmodules"] = mmodules_metrics
		return metrics
	end
end

redef class MGroup
	redef fun collect_metrics(h) do
		var mclasses = new HashSet[MClass]
		for mmodule in self.mmodules do mclasses.add_all mmodule.intro_mclasses

		var mclasses_metrics = h.mclasses_metrics
		mclasses_metrics.collect(new HashSet[MClass].from(mclasses))

		var mmodules_metrics = h.mmodules_metrics
		mmodules_metrics.collect(new HashSet[MModule].from(mmodules))

		var metrics = new JsonObject
		metrics["mclasses"] = mclasses_metrics
		metrics["mmodules"] = mmodules_metrics
		return metrics
	end
end

redef class MModule
	redef fun collect_metrics(h) do
		var mclasses_metrics = h.mclasses_metrics
		mclasses_metrics.collect(new HashSet[MClass].from(intro_mclasses))

		var mmodule_metrics = h.mmodules_metrics
		mmodule_metrics.collect(new HashSet[MModule].from([self]))

		var metrics = new JsonObject
		metrics["mclasses"] = mclasses_metrics
		metrics["mmodule"] = mmodule_metrics
		return metrics
	end
end

redef class MClass
	redef fun collect_metrics(h) do
		var mclass_metrics = h.mclasses_metrics
		mclass_metrics.collect(new HashSet[MClass].from([self]))

		var metrics = new JsonObject
		metrics["mclass"] = mclass_metrics
		return metrics
	end
end

redef class MetricSet
	super Jsonable

	fun json: JsonObject do
		var obj = new JsonObject
		for metric in metrics do
			obj[metric.name] = metric
		end
		return obj
	end

	redef fun to_json do return json.to_json
end

redef class Metric
	super Jsonable

	fun json: JsonObject do
		var obj = new JsonObject
		obj["name"] = name
		obj["desc"] = desc
		obj["empty"] = values.is_empty
		if values.not_empty then obj["avg"] = avg
		if values.not_empty then obj["std_dev"] = std_dev
		if values.not_empty then obj["threshold"] = threshold
		return obj
	end

	redef fun to_json do return json.to_json
end

redef class IntMetric
	redef fun json do
		var obj = super
		if values.not_empty then obj["sum"] = sum
		return obj
	end
end

redef class FloatMetric
	redef fun json do
		var obj = super
		if values.not_empty then obj["sum"] = sum
		return obj
	end
end

redef class MModuleMetric
	redef fun json do
		var obj = super
		if values.not_empty then obj["min"] = min
		if values.not_empty then obj["max"] = max
		var values = new JsonObject
		for value in sort do
			var v = self[value]
			var vobj = new JsonObject
			vobj["mentity"] = value
			vobj["value"] = if v isa Jsonable then v else v.to_s
			values[value.full_name] = vobj
		end
		obj["values"] = values
		return obj
	end
end

redef class MClassMetric
	redef fun json do
		var obj = super
		if values.not_empty then obj["min"] = min
		if values.not_empty then obj["max"] = max
		var values = new JsonObject
		for value in sort do
			var v = self[value]
			var vobj = new JsonObject
			vobj["mentity"] = value
			vobj["value"] = if v isa Jsonable then v else v.to_s
			values[value.full_name] = vobj
		end
		obj["values"] = values
		return obj
	end
end
