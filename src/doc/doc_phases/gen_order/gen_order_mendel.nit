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
module gen_order_mendel

import gen_order_base
import metrics::mendel_metrics

# Use MENDEL metrics to extract relevant classes from model.
class MendelWeighter
	super MEntityWeighter

	# Main module of the model to analyze (used for class hierarchy)
	var mainmodule: MModule

	redef fun weight_mgroup(mgroup) do
		var w = 0.0
		for m in mgroup.mmodules do
			weight_mmodule(m)
			w += m.weight
		end
		mgroup.weight = w
	end

	redef fun weight_mmodule(mmodule) do
		var set = new HashSet[MModule].from([mmodule])
		var nvi = new MNVI
		nvi.collect(set)
		mmodule.weight = nvi[mmodule]
	end

	redef fun weight_mclass(mclass) do
		var set = new HashSet[MClass].from([mclass])
		var nvi = new CNVI(mainmodule)
		nvi.collect(set)
		mclass.weight = nvi[mclass]
	end

	redef fun weight_mclassdef(mclassdef) do
		var mclass = mclassdef.mclass
		weight_mclass(mclass)
		mclassdef.weight = mclass.weight
	end
end
