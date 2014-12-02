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
#
# Note: If a module associated to the root namespace is needed, it is added to
# the graph only when `put_edges` is called.
class FileCompound
	super Compound
	super CodeBlock

	# Modules corresponding to the namespaces defined/redefined in the file.
	private var inner_namespaces = new Array[Module]

	# `model_id` of the classes declared in the file.
	private var inner_classes = new Array[String]

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
		for m in inner_namespaces do m.location = location
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
		for m in inner_namespaces do m.update_name
	end

	redef fun declare_namespace(id: String, full_name: String) do
		var m: Module

		assert not full_name.is_empty or id.is_empty else
			sys.stderr.write "Inner mamespace declarations without name are not yet supported (except for the root namespace).\n"
		end
		m = new Module(graph, self, new NamespaceRef(id, full_name))
		m.location = self["location"].as(nullable Location)
		inner_namespaces.add m
	end

	redef fun declare_class(id, full_name, prot) do
		assert not id.is_empty else
			sys.stderr.write "Inner class declarations without ID are not yet supported.\n"
		end
		inner_classes.add id
	end

	redef fun put_in_graph do
		# Do not add `self` to the Neo4j graph...
		# ... but add its modules...
		for m in inner_namespaces do m.put_in_graph
		# ... and add `self` to the indexes.
		if model_id != "" then graph.by_id[model_id] = self
		graph.files.add self
	end

	# If the file contains some classes in the root namespace, add an implicit
	# module to handle them.
	#
	# This method is called by `ProjectGraph.add_global_modules` and assumes
	# that all the namespaces are already fully set and put in the graph.
	fun declare_root_namespace do
		if has_globals then
			declare_namespace("", "")
			inner_namespaces.last.put_in_graph
		end
	end

	# Does this file contain classes in the root namespace?
	private fun has_globals: Bool do
		var root = graph.by_id[""]
		for c in inner_classes do
			if graph.class_to_ns[c] == root then return true
		end
		return false
	end
end

# A `MModule` node.
#
# For each file, there is one module by inner namespace.
private class Module
	super Compound
	super CodeBlock

	# The file that declares the module.
	var file_compound: FileCompound

	# The namespace defined or redefined by the module.
	var namespace: NamespaceRef

	init do
		super
		self.labels.add("MModule")
		update_name
	end

	# Update the `full_name` and the `name`.
	#
	# Update the short name of the module to the `basename` of the file that
	# declares it.
	fun update_name do
		name = file_compound.basename
		parent_name = namespace.full_name
	end

	redef fun put_edges do
		var ns_compound = namespace.seek_in(graph)
		graph.add_edge(ns_compound, "DECLARES", self)

		for c in file_compound.inner_classes do
			if graph.class_to_ns[c] != ns_compound then continue
			var class_compound = graph.by_id[c].as(ClassCompound)
			graph.add_edge(self, "INTRODUCES", class_compound)
			graph.add_edge(self, "DEFINES", class_compound.class_def)
		end
	end
end

# Adds the `add_global_modules` phase to `ProjectGraph`.
redef class ProjectGraph

	# Project’s source files.
	var files: SimpleCollection[FileCompound] = new Array[FileCompound]

	# Add the modules that define the root namespace.
	#
	# **Must** be called before any call to `put_edges`, and after all the
	# namespaces are fully set and put in the graph.
	#
	# Note: This method is not idempotent so it has to be called only once.
	fun add_global_modules do
		for f in files do f.declare_root_namespace
	end
end
