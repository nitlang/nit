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
		metrics.register(new CNOA(mainmodule, config.view))
		metrics.register(new CNOP(mainmodule, config.view))
		metrics.register(new CNOC(mainmodule, config.view))
		metrics.register(new CNOD(mainmodule, config.view))
		metrics.register(new CNOAC(mainmodule, config.view))
		metrics.register(new CNOAA(mainmodule, config.view))
		metrics.register(new CNOAI(mainmodule, config.view))
		metrics.register(new CDIT(mainmodule, config.view))
		metrics.register(new CNBP(mainmodule, config.view))
		metrics.register(new CNBA(mainmodule, config.view))
		metrics.register(new CNBM(mainmodule, config.view))
		metrics.register(new CNBI(mainmodule, config.view))
		metrics.register(new CNBV(mainmodule, config.view))
		metrics.register(new CNBIP(mainmodule, config.view))
		metrics.register(new CNBRP(mainmodule, config.view))
		metrics.register(new CNBHP(mainmodule, config.view))
		metrics.register(new CNBLP(mainmodule, config.view))
		return metrics
	end

	private fun mmodules_metrics: MetricSet do
		var mainmodule = config.mainmodule
		var metrics = new MetricSet
		metrics.register(new MNOA(mainmodule, config.view))
		metrics.register(new MNOP(mainmodule, config.view))
		metrics.register(new MNOC(mainmodule, config.view))
		metrics.register(new MNOD(mainmodule, config.view))
		metrics.register(new MDIT(mainmodule, config.view))
		metrics.register(new MNBD(mainmodule, config.view))
		metrics.register(new MNBI(mainmodule, config.view))
		metrics.register(new MNBR(mainmodule, config.view))
		metrics.register(new MNBCC(mainmodule, config.view))
		metrics.register(new MNBAC(mainmodule, config.view))
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

	redef fun core_serialize_to(v) do
		for metric in metrics do
			v.serialize_attribute(metric.name, metric)
		end
	end
end

redef class Metric
	super Jsonable

	redef fun core_serialize_to(v) do
		v.serialize_attribute("name", name)
		v.serialize_attribute("desc", desc)
		v.serialize_attribute("empty", values.is_empty)
		if values.not_empty then v.serialize_attribute("avg", avg)
		if values.not_empty then v.serialize_attribute("std_dev", std_dev)
		if values.not_empty then v.serialize_attribute("threshold", threshold)
	end
end

redef class IntMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("sum", sum)
	end
end

redef class FloatMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("sum", sum)
	end
end

redef class MModuleMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("min", min)
		if values.not_empty then v.serialize_attribute("max", max)
		var values = new JsonObject
		for value in sort do
			values[value.full_name] = new MetricEntry(value, self[value])
		end
		v.serialize_attribute("values", values)
	end
end

redef class MClassMetric
	redef fun core_serialize_to(v) do
		super
		if values.not_empty then v.serialize_attribute("min", min)
		if values.not_empty then v.serialize_attribute("max", max)
		var values = new JsonObject
		for value in sort do
			values[value.full_name] = new MetricEntry(value, self[value])
		end
		v.serialize_attribute("values", values)
	end
end

private class MetricEntry
	super Jsonable

	var mentity: MEntity
	var value: Object

	redef fun core_serialize_to(v) do
		v.serialize_attribute("mentity", mentity)
		v.serialize_attribute("value", if value isa JsonObject then value else value.to_s)
	end
end
