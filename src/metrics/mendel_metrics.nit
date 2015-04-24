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

# The mndel model helps to understand class hierarchies
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
#  Mendel: A Model, Metrics and Rules to Understan Class Hierarchies
#  S. Denier and Y. Gueheneuc
#  in Proceedings of the 16th IEEE International Conference on Program Comprehension (OCPC'08)
module mendel_metrics

import metrics_base
import mclasses_metrics
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

		var vis = protected_visibility
		var model = toolcontext.modelbuilder.model

		var mclasses = new HashSet[MClass]
		for mclass in model.mclasses do
			if mclass.visibility < vis then continue
			if mclass.is_interface then continue
			mclasses.add(mclass)
		end

		var cnblp = new CNBLP(mainmodule, vis)
		var cnvi = new CNVI(mainmodule)
		var cnvs = new CNVS(mainmodule)

		var metrics = new MetricSet
		metrics.register(cnblp, cnvi, cnvs)
		metrics.collect(mclasses)
		if csv then metrics.to_csv.save("{out}/mendel.csv")

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
			csvh.format = new CsvFormat('"', ';', "\n")
			csvh.header = ["povr", "ovr", "pext", "ext", "pspe", "spe", "prep", "rep", "eq"]
			for mclass in mclasses do
				var povr = mclass.is_pure_overrider(vis).object_id
				var ovr = mclass.is_overrider(vis).object_id
				var pext = mclass.is_pure_extender(vis).object_id
				var ext = mclass.is_extender(vis).object_id
				var pspe = mclass.is_pure_specializer(vis).object_id
				var spe = mclass.is_pure_specializer(vis).object_id
				var prep = mclass.is_pure_replacer(vis).object_id
				var rep = mclass.is_replacer(vis).object_id
				var eq = mclass.is_equal(vis).object_id
				csvh.add_record(povr, ovr, pext, ext, pspe, spe, prep, rep, eq)
			end
			csvh.save("{out}/inheritance_behaviour.csv")
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

	# Mainmodule used to compute class hierarchy.
	var mainmodule: MModule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var totc = mclass.all_mproperties(mainmodule, protected_visibility).length
			var ditc = mclass.in_hierarchy(mainmodule).depth
			values[mclass] = totc.to_f / (ditc + 1).to_f
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

	# Mainmodule used to compute class hierarchy.
	var mainmodule: MModule

	redef fun collect(mclasses) do
		var cbms = new CBMS(mainmodule)
		for mclass in mclasses do
			# compute branch mean size
			var parents = mclass.in_hierarchy(mainmodule).direct_greaters
			if parents.length > 0 then
				cbms.clear
				cbms.collect(new HashSet[MClass].from(parents))
				# compute class novelty index
				var locc = mclass.local_mproperties(protected_visibility).length
				values[mclass] = locc.to_f / cbms.avg
			else
				values[mclass] = 0.0
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

	# Mainmodule used to compute class hierarchy.
	var mainmodule: MModule

	redef fun collect(mclasses) do
		var cnvi = new CNVI(mainmodule)
		cnvi.collect(mclasses)
		for mclass in mclasses do
			var locc = mclass.local_mproperties(protected_visibility).length
			values[mclass] = cnvi.values[mclass] * locc.to_f
		end
	end
end

redef class MClass
	# the set of redefition that call to super
	fun extended_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.visibility < min_visibility then continue
				if not mpropdef.has_supercall then continue
				if mpropdef.mproperty.intro_mclassdef.mclass != self then set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	# the set of redefition that do not call to super
	fun overriden_mproperties(min_visibility: MVisibility): Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.visibility < min_visibility then continue
				if mpropdef.has_supercall then continue
				if mpropdef.mproperty.intro_mclassdef.mclass != self then set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	# pure overriders contain only redefinitions
	private fun is_pure_overrider(min_visibility: MVisibility): Bool do
		var news = intro_mproperties(min_visibility).length
		var locs = local_mproperties(min_visibility).length
		if news == 0 and locs > 0 then return true
		return false
	end

	# overriders contain more definitions than introductions
	private fun is_overrider(min_visibility: MVisibility): Bool do
		var rdfs = redef_mproperties(min_visibility).length
		var news = intro_mproperties(min_visibility).length
		var locs = local_mproperties(min_visibility).length
		if rdfs >= news and locs > 0 then return true
		return false
	end

	# pure extenders contain only introductions
	private fun is_pure_extender(min_visibility: MVisibility): Bool do
		var rdfs = redef_mproperties(min_visibility).length
		var locs = local_mproperties(min_visibility).length
		if rdfs == 0 and locs > 0 then return true
		return false
	end

	# extenders contain more introduction than redefinitions
	private fun is_extender(min_visibility: MVisibility): Bool do
		var rdfs = redef_mproperties(min_visibility).length
		var news = intro_mproperties(min_visibility).length
		var locs = local_mproperties(min_visibility).length
		if news > rdfs and locs > 0 then return true
		return false
	end

	# pure specializers always call to super in its redefinitions
	private fun is_pure_specializer(min_visibility: MVisibility): Bool do
		var ovrs = overriden_mproperties(min_visibility).length
		var rdfs = redef_mproperties(min_visibility).length
		if ovrs == 0 and rdfs > 0 then return true
		return false
	end

	# specializers have more redefinitions that call super than not calling it
	private fun is_specializer(min_visibility: MVisibility): Bool do
		var spcs = extended_mproperties(min_visibility).length
		var ovrs = overriden_mproperties(min_visibility).length
		var rdfs = redef_mproperties(min_visibility).length
		if spcs > ovrs and rdfs > 0 then return true
		return false
	end

	# pure replacers never call to super in its redefinitions
	private fun is_pure_replacer(min_visibility: MVisibility): Bool do
		var spcs = extended_mproperties(min_visibility).length
		var rdfs = redef_mproperties(min_visibility).length
		if spcs == 0 and rdfs > 0 then return true
		return false
	end

	# replacers have less redefinitions that call super than not calling it
	private fun is_replacer(min_visibility: MVisibility): Bool do
		var spcs = extended_mproperties(min_visibility).length
		var ovrs = overriden_mproperties(min_visibility).length
		var rdfs = redef_mproperties(min_visibility).length
		if ovrs > spcs and rdfs > 0 then return true
		return false
	end

	# equals contain as redifinition than introduction
	private fun is_equal(min_visibility: MVisibility): Bool do
		var spcs = extended_mproperties(min_visibility).length
		var ovrs = overriden_mproperties(min_visibility).length
		var rdfs = redef_mproperties(min_visibility).length
		if spcs == ovrs and rdfs > 0 then return true
		return false
	end
end

