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

import tests
import model

var graph = new ProjectGraph("foo")
var file = new FileCompound(graph)
var root_ns = graph.by_id[""].as(Namespace)
var ns = new Namespace(graph)
var member = new Attribute(graph)
var buffer = new RopeBuffer

file.name = "foo.py"
file.model_id = "_foo_8py"
file.declare_namespace("namespacefoo", "foo")
file.put_in_graph

member.name = "bar"
member.put_in_graph

ns.model_id = "namespacefoo"
ns.name = "foo"
ns.declare_member(member)
ns.doc.brief_description = "A documented namespace."
ns.put_in_graph

root_ns.declare_namespace("namespacefoo", "")

graph.add_global_modules
graph.put_edges
graph.debug buffer
print buffer
