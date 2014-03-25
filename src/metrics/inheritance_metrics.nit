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

# Collect metrics about inheritance usage
module inheritance_metrics

import model
import mmodules_metrics
import mclasses_metrics
import phase
import frontend

redef class ToolContext
	var inheritance_metrics_phase: Phase = new InheritanceMetricsPhase(self, null)
end

# Extract metrics about inheritance from model.
private class InheritanceMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule, given_mmodules)
	do
		if not toolcontext.opt_inheritance.value and not toolcontext.opt_all.value then return
		var csv = toolcontext.opt_csv.value
		var out = "{toolcontext.opt_dir.value or else "metrics"}/inheritance"
		out.mkdir

		print toolcontext.format_h1("\n# Inheritance metrics")

		var hmetrics = new MetricSet
		hmetrics.register(new MDUI(mainmodule))
		hmetrics.register(new MDUIC(mainmodule))
		hmetrics.register(new MDUII(mainmodule))
		hmetrics.register(new MIF(mainmodule))
		hmetrics.register(new MIFC(mainmodule))
		hmetrics.register(new MIFI(mainmodule))

		var cmetrics = new MetricSet
		cmetrics.register(new CNOAC(mainmodule))
		cmetrics.register(new CNOPC(mainmodule))
		cmetrics.register(new CNOCC(mainmodule))
		cmetrics.register(new CNODC(mainmodule))
		cmetrics.register(new CNOPI(mainmodule))
		cmetrics.register(new CNOCI(mainmodule))
		cmetrics.register(new CNODI(mainmodule))
		cmetrics.register(new CDITC(mainmodule))
		cmetrics.register(new CDITI(mainmodule))

		var model = toolcontext.modelbuilder.model
		var mmodules = new HashSet[MModule]
		var mclasses = new HashSet[MClass]
		for mproject in model.mprojects do

			print toolcontext.format_h2("\n ## project {mproject}")

			for mgroup in mproject.mgroups do
				if mgroup.mmodules.is_empty then continue

				# Scalar metrics
				print toolcontext.format_h3("  `- group {mgroup.full_name}")

				var mod_mclasses = new HashSet[MClass]
				for mmodule in mgroup.mmodules do mod_mclasses.add_all(mmodule.intro_mclasses)
				if mod_mclasses.is_empty then continue
				mmodules.add_all(mgroup.mmodules)
				mclasses.add_all(mod_mclasses)
				cmetrics.clear
				cmetrics.collect(new HashSet[MClass].from(mod_mclasses))
				cmetrics.to_console(1, not toolcontext.opt_nocolors.value)
				if csv then cmetrics.to_csv.save("{out}/{mgroup}_classes.csv")
				hmetrics.clear
				hmetrics.collect(new HashSet[MModule].from(mgroup.mmodules))
				hmetrics.to_console(1, not toolcontext.opt_nocolors.value)
				if csv then hmetrics.to_csv.save("{out}/{mgroup}_inheritance.csv")
			end
		end
		if not mclasses.is_empty then
			# Global metrics
			print toolcontext.format_h2("\n ## global metrics")
			cmetrics.clear
			cmetrics.collect(mclasses)
			cmetrics.to_console(1, not toolcontext.opt_nocolors.value)
			if csv then cmetrics.to_csv.save("{out}/summary_classes.csv")
			hmetrics.clear
			hmetrics.collect(mmodules)
			hmetrics.to_console(1, not toolcontext.opt_nocolors.value)
			if csv then hmetrics.to_csv.save("{out}/summary_inheritance.csv")
		end
	end
end

# Module metric: proportion of MClasses Defined Using Inheritance
#
# Count MClasses that have another parents than Object
class MDUI
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mdui"
	redef fun desc do return "proportion of mclass defined using inheritance (has other parent than Object)"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var count = 0
			for mclass in mmodule.intro_mclasses do
				if mclass.in_hierarchy(mainmodule).greaters.length > 2 then count += 1
			end
			if mmodule.intro_mclasses.is_empty then
				values[mmodule] = 0.0
			else
				values[mmodule] = count.to_f / mmodule.intro_mclasses.length.to_f
			end
		end
	end
end

# Module metric: proportion of abstract, concrete and extern Classes Defined Using Inheritance
#
# Count classes that have another parents than Object
class MDUIC
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mduic"
	redef fun desc do return "proportion of class_kind defined using inheritance"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var count = 0
			var nb = 0
			for mclass in mmodule.intro_mclasses do
				if mclass.kind == abstract_kind or mclass.kind == concrete_kind or mclass.kind == extern_kind then
					if mclass.in_hierarchy(mainmodule).greaters.length > 2 then count += 1
				end
				nb += 1
			end
			if mmodule.intro_mclasses.is_empty then
				values[mmodule] = 0.0
			else
				values[mmodule] = count.to_f / nb.to_f
			end
		end
	end
end

# Module metric: proportion of Interface Defined Using Inheritance
#
# Count interface that have another parents than Object
class MDUII
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mduii"
	redef fun desc do return "proportion of interface_kind defined using inheritance"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var count = 0
			var nb = 0
			for mclass in mmodule.intro_mclasses do
				if mclass.kind == interface_kind then
					if mclass.in_hierarchy(mainmodule).greaters.length > 2 then count += 1
				end
				nb += 1
			end
			if mmodule.intro_mclasses.is_empty then
				values[mmodule] = 0.0
			else
				values[mmodule] = count.to_f / nb.to_f
			end
		end
	end
end

# Module metric: proportion of MClass Inherited From
#
# Count classes that have at least a child
class MIF
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mif"
	redef fun desc do return "proportion of mclass inherited from"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var count = 0
			for mclass in mmodule.intro_mclasses do
				if mclass.in_hierarchy(mainmodule).direct_smallers.length > 0 then count += 1
			end
			if mmodule.intro_mclasses.is_empty then
				values[mmodule] = 0.0
			else
				values[mmodule] = count.to_f / mmodule.intro_mclasses.length.to_f
			end
		end
	end
end

# Module metric: proportion of abstract, concrete and extern Class Inherited From
#
# Count classes that have at least a child
class MIFC
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mifc"
	redef fun desc do return "proportion of class_kind inherited from"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var count = 0
			var nb = 0
			for mclass in mmodule.intro_mclasses do
				if mclass.kind == abstract_kind or mclass.kind == concrete_kind or mclass.kind == extern_kind then
					if mclass.in_hierarchy(mainmodule).direct_smallers.length > 0 then count += 1
				end
				nb += 1
			end
			if mmodule.intro_mclasses.is_empty then
				values[mmodule] = 0.0
			else
				values[mmodule] = count.to_f / nb.to_f
			end
		end
	end
end

# Module metric: proportion of Interface Inherited From
#
# Count interfaces that have at least a child
class MIFI
	super MModuleMetric
	super FloatMetric
	redef fun name do return "mifi"
	redef fun desc do return "proportion of interface_kind inherited from"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mmodules) do
		for mmodule in mmodules do
			var count = 0
			var nb = 0
			for mclass in mmodule.intro_mclasses do
				if mclass.kind == interface_kind then
					if mclass.in_hierarchy(mainmodule).direct_smallers.length > 0 then count += 1
				end
				nb += 1
			end
			if mmodule.intro_mclasses.is_empty then
				values[mmodule] = 0.0
			else
				values[mmodule] = count.to_f / nb.to_f
			end
		end
	end
end

# MClass metric: Number of Class Ancestors
#
# Count only absrtract, concrete and extern classes
class CNOAC
	super MClassMetric
	super IntMetric
	redef fun name do return "cnoac"
	redef fun desc do return "number of class_kind ancestor"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).greaters do
				if parent == mclass then continue
				if parent.kind == abstract_kind or parent.kind == concrete_kind or parent.kind == extern_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Number of Class Parents
#
# Count only absrtract, concrete and extern classes
class CNOPC
	super MClassMetric
	super IntMetric
	redef fun name do return "cnopc"
	redef fun desc do return "number of class_kind parent"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).direct_greaters do
				if parent == mclass then continue
				if parent.kind == abstract_kind or parent.kind == concrete_kind or parent.kind == extern_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Number of Class Children
#
# Count only absrtract, concrete and extern classes
class CNOCC
	super MClassMetric
	super IntMetric
	redef fun name do return "cnocc"
	redef fun desc do return "number of class_kind children"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).direct_smallers do
				if parent == mclass then continue
				if parent.kind == abstract_kind or parent.kind == concrete_kind or parent.kind == extern_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Number of Class Descendants
#
# Count only absrtract, concrete and extern classes
class CNODC
	super MClassMetric
	super IntMetric
	redef fun name do return "cnodc"
	redef fun desc do return "number of class_kind descendants"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).smallers do
				if parent == mclass then continue
				if parent.kind == abstract_kind or parent.kind == concrete_kind or parent.kind == extern_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Number of Interface Ancestors
#
# Count only interfaces
class CNOAI
	super MClassMetric
	super IntMetric
	redef fun name do return "cnoai"
	redef fun desc do return "number of interface_kind ancestor"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).greaters do
				if parent == mclass then continue
				if parent.kind == interface_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Number of Interface Parents
#
# Count only interfaces
class CNOPI
	super MClassMetric
	super IntMetric
	redef fun name do return "cnopi"
	redef fun desc do return "number of interface_kind parent"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).direct_greaters do
				if parent == mclass then continue
				if parent.kind == interface_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Number of Interface Children
#
# Count only interfaces
class CNOCI
	super MClassMetric
	super IntMetric
	redef fun name do return "cnoci"
	redef fun desc do return "number of interface_kind children"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).direct_smallers do
				if parent == mclass then continue
				if parent.kind == interface_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Number of Interface Descendants
#
# Count only interfaces
class CNODI
	super MClassMetric
	super IntMetric
	redef fun name do return "cnodi"
	redef fun desc do return "number of interface_kind descendants"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			var count = 0
			for parent in mclass.in_hierarchy(mainmodule).smallers do
				if parent == mclass then continue
				if parent.kind == interface_kind then
					count += 1
				end
			end
			values[mclass] = count
		end
	end
end

# MClass metric: Class Depth in Inheritance Tree
#
# Following the longest path composed only of extends edges from self to Object
class CDITC
	super MClassMetric
	super IntMetric
	redef fun name do return "cditc"
	redef fun desc do return "depth in class tree following only class, abstract, extern kind"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.ditc(mainmodule)
		end
	end
end

# MClass metric: Interface Depth in Inheritance Tree
#
# Following the longest path composed only of implements edges from self to Object
class CDITI
	super MClassMetric
	super IntMetric
	redef fun name do return "cditi"
	redef fun desc do return "depth in class tree following only interface_kind"

	var mainmodule: MModule
	init(mainmodule: MModule) do self.mainmodule = mainmodule

	redef fun collect(mclasses) do
		for mclass in mclasses do
			values[mclass] = mclass.diti(mainmodule)
		end
	end
end

# model redef

redef class MClass
		
	# Class Depth in Inheritance Tree
	#
	# Following the longest path composed only of extends edges from self to Object
	fun ditc(mainmodule: MModule): Int do
		if in_hierarchy(mainmodule).direct_greaters.is_empty then
			return 0
		end
		var min = -1
		for p in in_hierarchy(mainmodule).direct_greaters do
			if p.kind != abstract_kind and p.kind != concrete_kind and p.kind != extern_kind then continue
			var d = p.ditc(mainmodule) + 1
			if min == -1 or d < min then
				min = d
			end
		end
		if min == -1 then min = 0
		return min
	end

	# Interface Depth in Inheritance Tree
	#
	# Following the longest path composed only of implements edges from self to Object
	fun diti(mainmodule: MModule): Int do
		if in_hierarchy(mainmodule).direct_greaters.is_empty then
			return 0
		end
		var min = -1
		for p in in_hierarchy(mainmodule).direct_greaters do
			if p.kind != interface_kind then continue
			var d = p.diti(mainmodule) + 1
			if min == -1 or d < min then
				min = d
			end
		end
		if min == -1 then min = 0
		return min
	end
end

