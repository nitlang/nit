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

# TOC generation approaches based on MENDEL metrics
#
# See `metrics::mendel`.
module toc_gen_mendel

import toc_gen_base
# import metrics::mendel_metrics

# Use MENDEL metrics to extract relevant classes from model.
class MendelWeighter
	super ConcernsWeighter

	# Main module of the model to analyze (used for class hierarchy)
	var mainmodule: MModule

	# Internal metric.
	# private var cnvi: CNVI is noinit

	# init do cnvi = new CNVI(mainmodule)

	redef fun weight_mmodule(mmodule) do
		# FIXME What to use here? adapt one from Mendel
		# mmodule.weight = mmodule.in_importation.smallers.length
	end

	redef fun weight_mclass(mclass) do
		# var set = new HashSet[MClass].from([mclass])
		# cnvi.collect(set)
		# mclass.intro.weight = cnvi[mclass]
	end
end
