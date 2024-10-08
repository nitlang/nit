# This file is part of NIT (https://nitlanguage.org).
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

# Add PageRank computation for vertices in Digraph.
module pagerank

import digraph

redef class Digraph[V]

	# Compute PageRank for each vertex
	#
	# Details of the algorithm can be found in:
	# > L. Page, S. Brin, R. Motwani, and T.Winograd.
	# > **The pagerank citation ranking: Bringing order to the web.**
	# > *Technical report, Stanford Digital Library Technologies Project, 1998*
	#
	# Example:
	# ~~~
	# var g = new HashDigraph[String]
	# g.add_arc("A", "B")
	# g.add_arc("A", "C")
	# g.add_arc("B", "C")
	# g.add_arc("C", "A")
	# g.add_arc("D", "C")
	#
	# assert g.pagerank.join(", ", ":") == "A:1.488, B:0.782, C:1.575, D:0.15"
	# ~~~
	fun pagerank: PRMap[V] do
		# `d` constant such as `initial_pagerank(node) == (1 - d) != 0`
		var d = 0.85 # commonly-choosen value
		# Init each node page rank with an initial_value
		var values = new PRMap[V]
		var vertices = self.vertices
		for v in vertices do values[v] = 1.0 - d
		# Compute page rank until convergence
		var prev = new PRMap[V]
		while not values.is_approx(prev, 0.001) do
			prev = new PRMap[V].from(values)
			for v in vertices do
				var in_pr = 0.0
				for o in predecessors(v) do
					in_pr += values[o] / out_degree(o).to_f
				end
				values[v] = (1.0 - d) + d * in_pr
			end
		end
		return values
	end
end

# Map each Vertice of a Digraph to it's PageRank.
#
# See: `Digraph::pagerank`.
class PRMap[V]
	super HashMap[V, Float]

	# Init `self` by copying `other` values.
	init from(other: PRMap[V]) do
		init
		for k, v in other do self[k] = v
	end

	# Is `self` approximately equal to another PRMap?
	#
	# `self` is approximately equal to `o` if `o` contains all the key from `self`
	# with the same values.
	#
	# Values equality is based on `Float::is_approx` with `precision`.
	fun is_approx(o: SELF, precision: Float): Bool do
		for k1, v1 in self do
			if not o.has_key(k1) then return false
			if not v1.is_approx(o[k1], precision) then return false
		end
		return true
	end
end
