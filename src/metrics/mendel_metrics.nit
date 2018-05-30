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

# The Mendel model helps to understand class hierarchies.
#
# It provides metrics to extract interesting classes:
#
# * Large classes that have a lot of local mproperties
# * Budding classes that provide more mproperties than their superclasses
# * Blooming classes that are both large and budding
#
# Also, this model helps to understand inheritance behviours between classes.
# It provide metrics to categorize classes as:
#
# * pure overriders that contain only redefinitions
# * overriders that contain more definitions than introductions
# * pure extenders that contain only introductions
# * extenders that contain more introduction than redefinitions
#
# Finally, this model can characterize overriding behaviors
#
# * pure specializers that always call to super in its redefinitions
# * specializers that have more redefinitions that call super than not calling it
# * pure replacers that never call to super in its redefinitions
# * replacers that have less redefinitions that call super than not calling it
#
# For more details see
# “Mendel: A Model, Metrics and Rules to Understand Class Hierarchies,”
# by S. Denier and Y. Gueheneuc,
# in *Proceedings of the 16th IEEE International Conference on Program Comprehension* (OCPC'08).
module mendel_metrics

import metrics_base
import mclasses_metrics
import mmodules_metrics
import modelize

redef class ToolContext
	# Compute MENDEL metrics.
	#
	# See `mendel_metrics` module documentation.
	var mendel_metrics_phase: Phase = new MendelMetricsPhase(self, null)
end

private class MendelMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_mendel.value and not toolcontext.opt_all.value then return
		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/mendel"
		out.mkdir

		print toolcontext.format_h1("\n# Mendel metrics")

		var model = toolcontext.modelbuilder.model
		var filter = new ModelFilter(min_visibility = protected_visibility)

		var mclasses = new HashSet[MClass]
		for mclass in model.collect_mclasses(filter) do
			if mclass.is_interface then continue
			mclasses.add(mclass)
		end

		var cnblp = new CNBLP(model, mainmodule, filter)
		var cnvi = new CNVI(model, mainmodule, filter)
		var cnvs = new CNVS(model, mainmodule, filter)

		var metrics = new MetricSet
		metrics.register(cnblp, cnvi, cnvs)
		metrics.collect(mclasses)
		if csv then metrics.to_csv.write_to_file("{out}/mendel.csv")

		var threshold = cnblp.threshold
		print toolcontext.format_h4("\tlarge mclasses (threshold: {threshold})")
		for mclass in cnblp.sort do
			var val = cnblp.values[mclass]
			if val.to_f < threshold then break
			print toolcontext.format_p("\t   {mclass.name}: {val}")
		end

		threshold = cnvi.threshold
		print toolcontext.format_h4("\tbudding mclasses (threshold: {threshold})")
		for mclass in cnvi.sort do
			var val = cnvi.values[mclass]
			if val.to_f < threshold then break
			print toolcontext.format_p("\t   {mclass.name}: {val}")
		end

		threshold = cnvs.threshold
		print toolcontext.format_h4("\tblooming mclasses (threshold: {threshold})")
		for mclass in cnvs.sort do
			var val = cnvs.values[mclass]
			if val.to_f < threshold then break
			print toolcontext.format_p("\t   {mclass.name}: {val}")
		end

		if csv then
			var csvh = new CsvDocument
			csvh.separator = ';'
			csvh.header = ["povr", "ovr", "pext", "ext", "pspe", "spe", "prep", "rep", "eq"]
			for mclass in mclasses do
				var povr = mclass.is_pure_overrider(filter).object_id
				var ovr = mclass.is_overrider(filter).object_id
				var pext = mclass.is_pure_extender(filter).object_id
				var ext = mclass.is_extender(filter).object_id
				var pspe = mclass.is_pure_specializer(filter).object_id
				var spe = mclass.is_pure_specializer(filter).object_id
				var prep = mclass.is_pure_replacer(filter).object_id
				var rep = mclass.is_replacer(filter).object_id
				var eq = mclass.is_equal(filter).object_id
				csvh.add_record(povr, ovr, pext, ext, pspe, spe, prep, rep, eq)
			end
			csvh.write_to_file("{out}/inheritance_behaviour.csv")
		end
	end
end

# Class Branch Mean Size
# cbms(class) = |TotS(class)| / (DIT(class) + 1)
class CBMS
	super MClassMetric
	super FloatMetric
	redef fun name do return "cbms"
	redef fun desc do return "branch mean size, mean number of introduction available among ancestors"

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var totc = mclass.collect_accessible_mproperties(mainmodule, filter).length
			var ditc = mclass.in_hierarchy(mainmodule).depth
			values[mclass] = totc.to_f / (ditc + 1).to_f
		end
	end
end

# Module Branch Mean Size
# mbms(module) = |mclassdefs(module)| / (DIT(module) + 1)
class MBMS
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mbms"
	redef fun desc do return "branch mean size, mean number of class definition available among ancestors"

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var totc = mmodule.collect_intro_mclassdefs(filter).length
			totc += mmodule.collect_redef_mclassdefs(filter).length
			var ditc = mmodule.in_importation.depth
			values[mmodule] = totc.to_f / (ditc + 1).to_f
		end
	end
end

# Class Novelty Index
# cnvi = |LocS(class)| / cbms(parents(class))
class CNVI
	super MClassMetric
	super FloatMetric
	redef fun name do return "cnvi"
	redef fun desc do return "class novelty index, contribution of the class to its branch in term of introductions"

	redef fun collect(mclasses) do
		var cbms = new CBMS(model, mainmodule, filter)
		for mclass in mclasses do
			# compute branch mean size
			var parents = mclass.in_hierarchy(mainmodule).direct_greaters
			if parents.length > 0 then
				cbms.clear
				cbms.collect(new HashSet[MClass].from(parents))
				# compute class novelty index
				var locc = mclass.collect_accessible_mproperties(mainmodule, filter).length
				values[mclass] = locc.to_f / cbms.avg
			else
				values[mclass] = 0.0
			end
		end
	end
end

# Module Novelty Index
# mnvi = |LocS(module)| / mbms(parents(module))
class MNVI
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mnvi"
	redef fun desc do return "module novelty index, contribution of the module to its branch in term of introductions"

	redef fun collect(mmodules) do
		var mbms = new MBMS(model, mainmodule, filter)
		for mmodule in mmodules do
			# compute branch mean size
			var parents = mmodule.in_importation.direct_greaters
			if parents.length > 0 then
				mbms.clear
				mbms.collect(new HashSet[MModule].from(parents))
				# compute module novelty index
				var locc = mmodule.collect_intro_mclassdefs(filter).length
				locc += mmodule.collect_redef_mclassdefs(filter).length
				values[mmodule] = locc.to_f / mbms.avg
			else
				values[mmodule] = 0.0
			end
		end
	end
end

# Class Novelty Score
# cnvs = |LocS(class)| x nvi
class CNVS
	super MClassMetric
	super FloatMetric
	redef fun name do return "cnvs"
	redef fun desc do return "class novelty score, importance of the contribution of the class to its branch"

	redef fun collect(mclasses) do
		var cnvi = new CNVI(model, mainmodule, filter)
		cnvi.collect(mclasses)
		for mclass in mclasses do
			var locc = mclass.collect_local_mproperties(filter).length
			values[mclass] = cnvi.values[mclass] * locc.to_f
		end
	end
end

# Module Novelty Score
# mnvs = |LocS(module)| x nvi
class MNVS
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mnvs"
	redef fun desc do return "module novelty score, importance of the contribution of the module to its branch"

	redef fun collect(mmodules) do
		var mnvi = new MNVI(model, mainmodule, filter)
		mnvi.collect(mmodules)
		for mmodule in mmodules do
			var locc = mmodule.collect_intro_mclassdefs(filter).length
			locc += mmodule.collect_redef_mclassdefs(filter).length
			values[mmodule] = mnvi.values[mmodule] * locc.to_f
		end
	end
end

redef class MClass
	# the set of redefition that call to super
	fun extended_mproperties(filter: ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if not filter.accept_mentity(mpropdef) then continue
				if not mpropdef.has_supercall then continue
				if mpropdef.mproperty.intro_mclassdef.mclass != self then set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	# the set of redefition that do not call to super
	fun overriden_mproperties(filter: ModelFilter): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if not filter.accept_mentity(mpropdef) then continue
				if mpropdef.has_supercall then continue
				if mpropdef.mproperty.intro_mclassdef.mclass != self then set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	# pure overriders contain only redefinitions
	private fun is_pure_overrider(filter: ModelFilter): Bool do
		var news = collect_intro_mproperties(filter).length
		var locs = collect_local_mproperties(filter).length
		if news == 0 and locs > 0 then return true
		return false
	end

	# overriders contain more definitions than introductions
	private fun is_overrider(filter: ModelFilter): Bool do
		var rdfs = collect_redef_mproperties(filter).length
		var news = collect_intro_mproperties(filter).length
		var locs = collect_local_mproperties(filter).length
		if rdfs >= news and locs > 0 then return true
		return false
	end

	# pure extenders contain only introductions
	private fun is_pure_extender(filter: ModelFilter): Bool do
		var rdfs = collect_redef_mproperties(filter).length
		var locs = collect_local_mproperties(filter).length
		if rdfs == 0 and locs > 0 then return true
		return false
	end

	# extenders contain more introduction than redefinitions
	private fun is_extender(filter: ModelFilter): Bool do
		var rdfs = collect_redef_mproperties(filter).length
		var news = collect_intro_mproperties(filter).length
		var locs = collect_local_mproperties(filter).length
		if news > rdfs and locs > 0 then return true
		return false
	end

	# pure specializers always call to super in its redefinitions
	private fun is_pure_specializer(filter: ModelFilter): Bool do
		var ovrs = overriden_mproperties(filter).length
		var rdfs = collect_redef_mproperties(filter).length
		if ovrs == 0 and rdfs > 0 then return true
		return false
	end

	# specializers have more redefinitions that call super than not calling it
	private fun is_specializer(filter: ModelFilter): Bool do
		var spcs = extended_mproperties(filter).length
		var ovrs = overriden_mproperties(filter).length
		var rdfs = collect_redef_mproperties(filter).length
		if spcs > ovrs and rdfs > 0 then return true
		return false
	end

	# pure replacers never call to super in its redefinitions
	private fun is_pure_replacer(filter: ModelFilter): Bool do
		var spcs = extended_mproperties(filter).length
		var rdfs = collect_redef_mproperties(filter).length
		if spcs == 0 and rdfs > 0 then return true
		return false
	end

	# replacers have less redefinitions that call super than not calling it
	private fun is_replacer(filter: ModelFilter): Bool do
		var spcs = extended_mproperties(filter).length
		var ovrs = overriden_mproperties(filter).length
		var rdfs = collect_redef_mproperties(filter).length
		if ovrs > spcs and rdfs > 0 then return true
		return false
	end

	# equals contain as redifinition than introduction
	private fun is_equal(filter: ModelFilter): Bool do
		var spcs = extended_mproperties(filter).length
		var ovrs = overriden_mproperties(filter).length
		var rdfs = collect_redef_mproperties(filter).length
		if spcs == ovrs and rdfs > 0 then return true
		return false
	end
end
