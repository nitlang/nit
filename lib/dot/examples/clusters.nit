# This file is part of NIT ( https://nitlanguage.org ).
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

# Example from http://www.graphviz.org/content/cluster
module clusters is example

import dot

var graph = new DotGraph("G", "digraph")

var cl0 = new DotGraph("cluster_0", "subgraph")
cl0["label"] = "process #1"
cl0["style"] = "filled"
cl0["color"] = "lightgrey"
cl0.nodes_attrs["style"] = "filled"
cl0.nodes_attrs["color"] = "white"

var a0 = cl0.add_node("a0")
var a1 = cl0.add_node("a1")
var a2 = cl0.add_node("a2")
var a3 = cl0.add_node("a3")
cl0.add_edge(a0, a1)
cl0.add_edge(a1, a2)
cl0.add_edge(a2, a3)

graph.add cl0

var cl1 = new DotGraph("cluster_1", "subgraph")
cl1["label"] = "process #2"
cl1["color"] = "blue"
cl1.nodes_attrs["style"] = "filled"

var b0 = cl1.add_node("b0")
var b1 = cl1.add_node("b1")
var b2 = cl1.add_node("b2")
var b3 = cl1.add_node("b3")
cl1.add_edge(b0, b1)
cl1.add_edge(b1, b2)
cl1.add_edge(b2, b3)

graph.add cl1

var start = graph.add_node("start")
start["shape"] = "Mdiamond"

var nend = graph.add_node("end")
nend["shape"] = "Msquare"

graph.add_edge(start, a0)
graph.add_edge(start, b0)
graph.add_edge(a1, b3)
graph.add_edge(b2, a3)
graph.add_edge(a3, a0)
graph.add_edge(a3, nend)
graph.add_edge(b3, nend)

if args.is_empty then
	print graph.to_dot
	# graph.show
else
	graph.to_dot.write_to_file args.first
end
