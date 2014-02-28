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

# Collect common metrics about mclasses
module mclasses_metrics

import model
import metrics_base
import phase
import frontend

redef class ToolContext
	var mclasses_metrics_phase = new MClassesMetricsPhase(self, null)
end

# Extract metrics about mclasses from model.
private class MClassesMetricsPhase
	super Phase
	redef fun process_mainmodule(mainmodule)
	do
		if not toolcontext.opt_mclasses.value and not toolcontext.opt_all.value then return

		print toolcontext.format_h1("\n# MClasses metrics")

		var metrics = new MClassMetricSet
		metrics.register(new CNOA, new CNOP, new CNOC, new CNOD, new CDIT)
		metrics.register(new CNBIP, new CNBRP, new CNBHP)
		#TODO metrics.register(new CNBI) # nb init
		#TODO metrics.register(new CNBA) # nb attrs
		#TODO metrics.register(new CNBM) # nb methods
		#TODO metrics.register(new CNBV) # nb vtypes

		var model = toolcontext.modelbuilder.model
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
				mclasses.add_all(mod_mclasses)
				metrics.collect(new HashSet[MClass].from(mod_mclasses), mainmodule)
				for name, metric in metrics.metrics do
					print toolcontext.format_h4("\t{name}: {metric.desc}")
					print toolcontext.format_p("\t    avg: {metric.avg}")
					var max = metric.max
					print toolcontext.format_p("\t    max: {max.first} ({max.second})")
					var min = metric.min
					print toolcontext.format_p("\t    min: {min.first} ({min.second})")
				end
			end
		end
		if not mclasses.is_empty then
			# Global metrics
			print toolcontext.format_h2("\n ## global metrics")

			metrics.collect(mclasses, mainmodule)
			for name, metric in metrics.metrics do
				print toolcontext.format_h4("\t{name}: {metric.desc}")
				print toolcontext.format_p("\t    avg: {metric.avg}")
				var max = metric.max
				print toolcontext.format_p("\t    max: {max.first} ({max.second})")
				var min = metric.min
				print toolcontext.format_p("\t    min: {min.first} ({min.second})")
			end
		end
	end
end

# An MetricSet for MClasses metrics
class MClassMetricSet
	super MetricSet
	redef type METRIC: MClassMetric

	# Collect all the metrics on the set of MClasses
	fun collect(mclasses: Set[MClass], mainmodule: MModule) do
		clear
		for metric in metrics.values do
			for mclass in mclasses do
				metric.collect(mclass, mainmodule)
			end
		end
	end
end

# An abstract metric about MClass
abstract class MClassMetric
	super IntMetric[MClass]
	# Collect the metric value for this mclass
	fun collect(mclass: MClass, mainmodule: MModule) is abstract
end

# Class Metric: Number of Ancestors
class CNOA
	super MClassMetric
	redef fun name do return "cnoa"
	redef fun desc do return "number of ancestor classes"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.in_hierarchy(mainmodule).greaters.length - 1
	end
end

# Class Metric: Number of Parents
class CNOP
	super MClassMetric
	redef fun name do return "cnop"
	redef fun desc do return "number of parent classes"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.in_hierarchy(mainmodule).direct_greaters.length
	end
end

# Class Metric: Number of Children
class CNOC
	super MClassMetric
	redef fun name do return "cnoc"
	redef fun desc do return "number of child classes"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.in_hierarchy(mainmodule).direct_smallers.length
	end
end

# Class Metric: Number of Descendants
class CNOD
	super MClassMetric
	redef fun name do return "cnod"
	redef fun desc do return "number of descendant classes"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.in_hierarchy(mainmodule).smallers.length - 1
	end
end

# Class Metric: Depth in Inheritance Tree
class CDIT
	super MClassMetric
	redef fun name do return "cdit"
	redef fun desc do return "depth in class tree"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.in_hierarchy(mainmodule).depth
	end
end

# Class Metric: Number of Introduced MProperties
class CNBIP
	super MClassMetric
	redef fun name do return "cnbip"
	redef fun desc do return "number of introduced properties"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.intro_mproperties.length
	end
end

# Class Metric: Number of Refined MProperties
class CNBRP
	super MClassMetric
	redef fun name do return "cnbrp"
	redef fun desc do return "number of redefined properties"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.redef_mproperties.length
	end
end

# Class Metric: Number of Inherited MProperties
class CNBHP
	super MClassMetric
	redef fun name do return "cnbhp"
	redef fun desc do return "number of inherited properties"

	redef fun collect(mclass, mainmodule) do
		values[mclass] = mclass.inherited_mproperties2(mainmodule).length
	end
end

redef class MClass
	# FIXME wait for cleaning in model_utils
	redef fun intro_mproperties: Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			set.add_all(mclassdef.intro_mproperties)
		end
		return set
	end

	# FIXME wait for cleaning in model_utils
	redef fun redef_mproperties: Set[MProperty] do
		var set = new HashSet[MProperty]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty.intro_mclassdef.mclass != self then set.add(mpropdef.mproperty)
			end
		end
		return set
	end

	# FIXME wait for cleaning in model_utils
	fun inherited_mproperties2(mainmodule: MModule): Set[MProperty] do
		var set = new HashSet[MProperty]
		for parent in in_hierarchy(mainmodule).direct_greaters do
			set.add_all(parent.intro_mproperties)
			set.add_all(parent.inherited_mproperties2(mainmodule))
		end
		return set
	end
end
