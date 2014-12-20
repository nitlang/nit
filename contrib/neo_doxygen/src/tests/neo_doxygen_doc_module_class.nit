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
intrude import model::module_compound

var graph = new ProjectGraph("foo")
var file = new FileCompound(graph)
var bar_class = new ClassCompound(graph)
var a_ns = new Namespace(graph)

file.full_name = "Baz.java"
file.declare_class("classa_bar", "a::Bar", "public")
file.declare_namespace("namespacea", "a")
file.doc.brief_description = "A file."
file.put_in_graph

a_ns.full_name = "a"
a_ns.model_id = "namespacea"
a_ns.declare_class("classa_bar", "a::Bar", "public")
a_ns.doc.brief_description = "A namespace."
a_ns.put_in_graph

bar_class.model_id = "classa_bar"
bar_class.full_name = "a::Bar"
bar_class.doc.brief_description = "A class."
bar_class.put_in_graph

graph.add_global_modules
graph.put_edges

assert file.inner_namespaces[0]["mdoc"] == bar_class.doc
