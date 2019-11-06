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

import api_base
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
		var metrics = new MetricSet
		metrics.register(new CNOA(config.model, config.mainmodule, config.filter))
		metrics.register(new CNOP(config.model, config.mainmodule, config.filter))
		metrics.register(new CNOC(config.model, config.mainmodule, config.filter))
		metrics.register(new CNOD(config.model, config.mainmodule, config.filter))
		metrics.register(new CNOAC(config.model, config.mainmodule, config.filter))
		metrics.register(new CNOAA(config.model, config.mainmodule, config.filter))
		metrics.register(new CNOAI(config.model, config.mainmodule, config.filter))
		metrics.register(new CDIT(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBP(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBA(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBM(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBI(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBV(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBIP(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBRP(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBHP(config.model, config.mainmodule, config.filter))
		metrics.register(new CNBLP(config.model, config.mainmodule, config.filter))
		return metrics
	end

	private fun mmodules_metrics: MetricSet do
		var metrics = new MetricSet
		metrics.register(new MNOA(config.model, config.mainmodule, config.filter))
		metrics.register(new MNOP(config.model, config.mainmodule, config.filter))
		metrics.register(new MNOC(config.model, config.mainmodule, config.filter))
		metrics.register(new MNOD(config.model, config.mainmodule, config.filter))
		metrics.register(new MDIT(config.model, config.mainmodule, config.filter))
		metrics.register(new MNBD(config.model, config.mainmodule, config.filter))
		metrics.register(new MNBI(config.model, config.mainmodule, config.filter))
		metrics.register(new MNBR(config.model, config.mainmodule, config.filter))
		metrics.register(new MNBCC(config.model, config.mainmodule, config.filter))
		metrics.register(new MNBAC(config.model, config.mainmodule, config.filter))
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
		res.api_json(req, metrics)
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
	super Serializable

	redef fun core_serialize_to(v) do
		for metric in metrics do
			v.serialize_attribute(metric.name, metric)
		end
	end
end

redef class Metric
	super Serializable

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
	super Serializable

	var mentity: MEntity
	var value: Object

	redef fun core_serialize_to(v) do
		v.serialize_attribute("mentity", mentity)
		v.serialize_attribute("value", if value isa JsonObject then value else value.to_s)
	end
end
