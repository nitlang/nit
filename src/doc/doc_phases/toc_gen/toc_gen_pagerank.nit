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

# TOC generation approaches based on PageRank algorithm.
module toc_gen_pagerank

import toc_gen_base
import graphs::pagerank
import modelbuilder

# Weight concerns based on the number of usage inside the concern.
class PageRankWeighter
	super ConcernsWeighter

	# Modelbuilder used to access AST.
	var modelbuilder: ModelBuilder

	# Main module used to resolve class hierarchy
	var mainmodule: MModule

	private var graph: HashDigraph[MConcern] is noinit

	private var values: PRMap[MConcern] is noinit

	# TODO fix with ctx.ingore
	init do
		graph = new HashDigraph[MConcern]
		var mods = modelbuilder.model.mmodules.to_a
		for mmodule in mods do
			for greater in mmodule.in_importation.direct_greaters do
				graph.add_arc(mmodule, greater)
				for mclassdef in mmodule.mclassdefs do
					if mclassdef.mclass.visibility == private_visibility then continue
					for superclass in mclassdef.in_hierarchy.direct_greaters do
						if superclass == mclassdef then continue
						if superclass.mclass.visibility == private_visibility then continue
						graph.add_arc(mclassdef, superclass)
					end
				end
			end
		end
		values = graph.pagerank
	end

	redef fun weight_concern(mconcern) do
		mconcern.weight = values.get_or_default(mconcern, 0.0)
	end
end
