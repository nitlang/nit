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

# Example from http://www.graphviz.org/Gallery/undirected/fdpclust.html
module undirected_clusters is example

import dot

var graph = new DotGraph("G", "graph")

var a = new DotNode("a")
var b = new DotNode("b")
var c = new DotNode("c")
var d = new DotNode("d")
var e = new DotNode("e")
var f = new DotNode("f")
var g = new DotNode("g")

var clA = new DotGraph("clusterA", "subgraph")
clA.add_edge(a, b).directed = false
graph.add clA

var clB = new DotGraph("clusterB", "subgraph")
clB.add_edge(c, d).directed = false
clA.add clB

var clC = new DotGraph("clusterC", "subgraph")
clC.add_edge(e, g).directed = false
graph.add clC

graph.add_edge(e, d).directed = false
graph.add_edge(f, g).directed = false

if args.is_empty then
	print graph.to_dot
else
	graph.to_dot.write_to_file args.first
end
