# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Metrics from RTA
module rta_metrics

import modelbuilder
private import rapid_type_analysis
private import metrics_base
import frontend

redef class ToolContext
	var rta_metrics_phase = new RTAMetricsPhase(self, null)
end

private class RTAMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_rta.value and not toolcontext.opt_all.value then return
		compute_rta_metrics(toolcontext.modelbuilder, mainmodule)
	end
end


redef class MType
	private var nlvt: Int = 0
	private var nlct: Int = 0

	private fun is_user_defined: Bool do
		var mtype = self
		if mtype isa MNullableType then mtype = mtype.mtype
		return self.as(MClassType).mclass.is_user_defined
	end

	private fun get_depth: Int do
		var mtype = self
		if mtype isa MNullableType then mtype = mtype.mtype
		if not mtype isa MGenericType then return 0

		var depth = 0
		for ft in mtype.arguments do
			if ft.get_depth > depth then depth = ft.get_depth
		end
		return depth + 1
	end
end

redef class MClass
	private var nlvt: Int = 0
	private var nlct: Int = 0
	private var live_types: Set[MType] = new HashSet[MType]
	private var cast_types: Set[MType] = new HashSet[MType]
end

# Run a runtime type analysis and print metrics
fun compute_rta_metrics(modelbuilder: ModelBuilder, mainmodule: MModule)
do
	var analysis = modelbuilder.do_rapid_type_analysis(mainmodule)

	var nlvt = 0		# NLVT Number of Live Type
	var nlvtg = 0		# NLVTG Number of Generic Live Type
	var nlvtslud = 0	# NLCTSLUD Number of Live Type defined in SL and init in UD
	var nlvtgslud = 0	# NLVTGSLUD Number of Generic Live Type defined in SL and init in UD
	var nlvtudud = 0	# NLVTUDUD Number of Live Type defined in UD and init in UD
	var nlvtgudud = 0	# NLVTGUDUD Number of Generic Live Type defined in UD and init in UD

	var nlct = 0		# NLCT Number of Live Cast Type
	var nlctg = 0		# NLCTG Number of Generic Live Cast Type
	var nlctslud = 0	# NLCTSLUD Number of Live Cast Type defined in SL and init in UD
	var nlctgslud = 0	# NLCTGSLUD Number of Generic Live Cast Type defined in SL and init in UD
	var nlctudud = 0	# NLCTUDUD Number of Live Cast Type defined in UD and init in UD
	var nlctgudud = 0	# NLCTGUDUD Number of Generic Live Cast Type defined in UD and init in UD

	var mtypes = new HashSet[MClassType]

	for mtype in analysis.live_types do
		mtypes.add(mtype)
		nlvt += 1
		mtype.mclass.nlvt += 1
		mtype.mclass.live_types.add(mtype)
		if mtype isa MGenericType then nlvtg += 1
		if mtype.is_user_defined then
			nlvtudud += 1
			if mtype isa MGenericType then nlvtgudud += 1
		else
			nlvtslud += 1
			if mtype isa MGenericType then nlvtgslud += 1
		end
	end

	for mtype in analysis.live_cast_types do
		mtypes.add(mtype)
		nlct += 1
		mtype.mclass.nlct += 1
		mtype.mclass.cast_types.add(mtype)
		if mtype isa MGenericType then nlctg += 1
		if mtype.is_user_defined then
			nlctudud += 1
			if mtype isa MGenericType then nlctgudud += 1
		else
			nlctslud += 1
			if mtype isa MGenericType then nlctgslud += 1
		end
	end

	# CSV generation
	if modelbuilder.toolcontext.opt_generate_csv.value then
		var summaryCSV = new CSVDocument(modelbuilder.toolcontext.output_dir.join_path("rta_sum_metrics.csv"))
		summaryCSV.set_header("scope", "NLVT", "NLVTG", "NLCT", "NLVCTG")
		summaryCSV.add_line("global", nlvt, nlvtg, nlct, nlctg)
		summaryCSV.add_line("SLUD", nlvtslud, nlvtgslud, nlctslud, nlctgslud)
		summaryCSV.add_line("UDUD", nlvtudud, nlvtgudud, nlctudud, nlctgudud)
		summaryCSV.save

		var scalarCSV = new CSVDocument(modelbuilder.toolcontext.output_dir.join_path("rta_scalar_metrics.csv"))
		var udscalarCSV = new CSVDocument(modelbuilder.toolcontext.output_dir.join_path("rta_ud_scalar_metrics.csv"))
		scalarCSV.set_header("Type", "AGS", "DGS", "NLVT", "NLCT")
		udscalarCSV.set_header("Type", "AGS", "DGS", "NLVT", "NLCT")

		for mtype in mtypes do
			var arity = 0
			if mtype isa MGenericType then arity = mtype.arguments.length
			if mtype.is_user_defined then
				udscalarCSV.add_line(mtype, arity, mtype.get_depth, mtype.nlvt, mtype.nlct)
			end
			scalarCSV.add_line(mtype, arity, mtype.get_depth, mtype.nlvt, mtype.nlct)
		end
		scalarCSV.save
		udscalarCSV.save

		scalarCSV = new CSVDocument(modelbuilder.toolcontext.output_dir.join_path("rta_scalar_class_metrics.csv"))
		udscalarCSV = new CSVDocument(modelbuilder.toolcontext.output_dir.join_path("rta_ud_scalar_class_metrics.csv"))
		scalarCSV.set_header("Class", "AGS", "NLVV", "NLVT")
		udscalarCSV.set_header("Class", "AGS", "NLVV", "inst")

		for mclass in modelbuilder.model.mclasses do
			if not mclass.is_class or mclass.is_abstract then continue
			if mclass.is_user_defined then
				udscalarCSV.add_line(mclass.mclass_type, mclass.arity, mclass.live_types.length, mclass.nlvt)
			end
			scalarCSV.add_line(mclass.mclass_type, mclass.arity, mclass.live_types.length, mclass.nlvt)
		end
		scalarCSV.save
		udscalarCSV.save
	end

	print "--- RTA metrics ---"
	print "Number of live runtime classes: {analysis.live_classes.length}"
	if analysis.live_classes.length < 8 then print "\t{analysis.live_classes.join(" ")}"
	print "Number of live runtime types (instantied resolved type): {analysis.live_types.length}"
	if analysis.live_types.length < 8 then print "\t{analysis.live_types.join(" ")}"
	print "Number of live methods: {analysis.live_methods.length}"
	if analysis.live_methods.length < 8 then print "\t{analysis.live_methods.join(" ")}"
	print "Number of live method definitions: {analysis.live_methoddefs.length}"
	if analysis.live_methoddefs.length < 8 then print "\t{analysis.live_methoddefs.join(" ")}"
	print "Number of live runtime cast types (ie used in as and isa): {analysis.live_cast_types.length}"
	if analysis.live_cast_types.length < 8 then print "\t{analysis.live_cast_types.join(" ")}"

	var x = 0
	for p in analysis.live_methods do
		for d in p.mpropdefs do
			if analysis.live_methoddefs.has(d) or d.is_abstract then continue
			x += 1
		end
	end
	print "Number of dead method definitions of live methods: {x}"
end
