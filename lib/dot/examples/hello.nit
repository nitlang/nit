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

# Example from http://www.graphviz.org/content/hello
module hello is example

import dot

var graph = new DotGraph("G", "digraph")

var hello = graph.add_node("hello")
var world = graph.add_node("world")
graph.add_edge(hello, world)

if args.is_empty then
	print graph.to_dot
else
	graph.to_dot.write_to_file args.first
end
