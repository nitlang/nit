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
import model::module_compound

var graph = new ProjectGraph("foo")
var file = new FileCompound(graph)
var file_2 = new FileCompound(graph)
var bar_class = new ClassCompound(graph)
var c_ns = new Namespace(graph)
var buffer = new RopeBuffer

file.full_name = "Bar.java"
file.model_id = "_Bar_8java"
file.declare_class("classa_b_bar", "a::b::Bar")
file.declare_namespace("", "a::b")
file.put_in_graph

file_2.full_name = "Bar.java"
file_2.model_id = "_Bar_8java_2"
file_2.declare_namespace("namespacec", "c")
file_2.declare_namespace("", "d")
file_2.put_in_graph

bar_class.model_id = "classa_b_bar"
bar_class.full_name = "a::b::Bar"
bar_class.put_in_graph

c_ns.model_id = "namespacec"
c_ns.full_name = "c"
c_ns.put_in_graph

graph.put_edges
graph.debug buffer
print buffer
