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

# Nodes for modules and files.
module model::module_compound

import graph
import class_compound

# A source file.
#
# Creates one modules by inner namespace. The full name of the modules begin
# with the namespace’s full name, and end with the unqualified name of the file,
# without the extension.
class FileCompound
	super Compound
	super CodeBlock

	# Mapping between inner namespace’s names and corresponding modules.
	private var inner_namespaces: Map[String, Module] = new HashMap[String, Module]

	# The last component of the path, without the extension.
	#
	# Used as the unqualified name of the modules.
	private var basename: String = ""

	init do
		super
	end

	redef fun name_separator: String do return "/"

	redef fun location=(location: nullable Location) do
		super
		if location != null and location.path != null then
			full_name = location.path.as(not null)
		end
		for m in inner_namespaces.values do m.location = location
	end

	redef fun name=(name: String) do
		# Example: `MyClass.java`
		super
		var match = name.search_last(".")

		if match == null then
			basename = name
		else
			basename = name.substring(0, match.from)
		end
		# Update the modules’ name.
		for ns, m in inner_namespaces do
			m.full_name = "{ns}{ns_separator}{basename}"
		end
	end

	redef fun declare_namespace(id: String, name: String) do
		var m: Module

		if inner_namespaces.keys.has(name) then
			m = inner_namespaces[name]
			m.parent = id
		else
			m = new Module(graph)
			m.full_name = "{name}{ns_separator}{basename}"
			m.parent = id
			m.location = self["location"].as(nullable Location)
			inner_namespaces[name] = m
		end
	end

	redef fun declare_class(id: String, name: String) do
		var match = name.search_last(ns_separator)
		var ns_name: String
		var m: Module

		if match == null then
			ns_name = ""
		else
			ns_name = name.substring(0, match.from)
		end
		if inner_namespaces.keys.has(ns_name) then
			m = inner_namespaces[ns_name]
		else
			declare_namespace("", ns_name)
			m = inner_namespaces[ns_name]
		end
		m.declare_class(id, name)
	end

	redef fun put_in_graph do
		# Do not add `self` to the Neo4j graph...
		# ... but add its modules...
		for m in inner_namespaces.values do m.put_in_graph
		# ... and add `self` to the index.
		if model_id != "" then graph.by_id[model_id] = self
	end
end

# A module.
class Module
	super Compound
	super CodeBlock

	# The `model_id` of the parent namespace.
	var parent: String = "" is writable

	# The classes defined in the module.
	var inner_classes: SimpleCollection[String] = new Array[String]

	init do
		super
		self.labels.add("MModule")
	end

	redef fun declare_class(id: String, name: String) do
		inner_classes.add(id)
	end

	redef fun put_edges do
		graph.add_edge(graph.by_id[parent], "DECLARES", self)
		for c in inner_classes do
			var node = graph.by_id[c].as(ClassCompound)
			graph.add_edge(self, "INTRODUCES", node)
			graph.add_edge(self, "DEFINES", node.class_def)
		end
	end
end
