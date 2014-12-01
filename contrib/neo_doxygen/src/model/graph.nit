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

# Graphs and basic entities.
module model::graph

import neo4j
import more_collections
import location

# A Neo4j graph.
class NeoGraph
	# All the nodes in the graph.
	var all_nodes: SimpleCollection[NeoNode] = new Array[NeoNode]

	# All the edges in the graph.
	var all_edges: SimpleCollection[NeoEdge] = new Array[NeoEdge]

	# Add a relationship between two nodes.
	#
	# Parameters are the same than for the constructor of `NeoEdge`.
	fun add_edge(from: NeoNode, rel_type: String, to: NeoNode) do
		all_edges.add(new NeoEdge(from, rel_type, to))
	end
end

# A project’s graph.
#
# Here is the usual steps to build a project graph:
#
# <ul>
# <li>Instantiate `ProjectGraph` by giving the name that will label the project.</li>
# <li>For each compound:
# <ul>
# <li>Instantiate the compound.</li>
# <li>Provide all the related data.</li>
# <li>Call the `put_in_graph` method of the compound.</li>
# </ul></li>
# <li>Call the `add_global_modules` method of the project’s graph (defined in
# the `module_compound` module). This permits to take global classes into
# account correctly.</li>
# <li>Call the `put_edges` method of the project’s graph.</li>
# </ul>
class ProjectGraph
	super NeoGraph

	# The project’s name.
	var project_name: String

	# The node reperesenting the project.
	#
	# Once the project’s graph is initialized, this node must not be edited.
	var project = new NeoNode

	# Entities by `model_id`.
	var by_id: Map[String, Entity] = new HashMap[String, Entity]

	# Namespaces by `full_name`.
	var namespaces: Map[String, Namespace] = new HashMap[String, Namespace]

	# For each `ClassCompound` in the graph, the mapping between its `model_id` and its namespace.
	#
	# Defaults to the root namespace. An entry is added each time
	# `Namespace.declare_class` is called.
	#
	# Note: In the graph, there is no direct link between a namespace and a
	# class. It is the role of a module (created internally by a `FileCompound`)
	# to link a class with its namespace. So, this collection is used by modules
	# to know which class in a file belong to their related namespace. It is
	# also used by `FileCompound` to detect classes in the root namespace.
	var class_to_ns: Map[String, Namespace] is noinit

	# Initialize a new project graph using the specified project name.
	#
	# The specified name will label all nodes of the project’s graph.
	init do
		project.labels.add(project_name)
		project.labels.add("MEntity")
		project.labels.add("MProject")
		project["name"] = project_name
		all_nodes.add(project)

		var root = new RootNamespace(self)
		root.put_in_graph
		by_id[""] = root
		class_to_ns = new DefaultMap[String, Namespace](root)
	end

	# Request to all nodes in the graph to add their related edges.
	#
	# Note: For the rare cases where a node need to wait the `put_edges` to add
	# an implicit node, this method makes sure to call the `put_edges` method
	# of the newly added nodes only after processing all the nodes that was
	# already there.
	fun put_edges do
		all_edges.clear
		add_edge(project, "ROOT", by_id[""])
		for n in all_nodes do
			if n isa Entity then
				n.put_edges
			end
		end
	end
end

# A model’s entity.
#
# In practice, this is the base class of every node in a `ProjectGraph`.
abstract class Entity
	super NeoNode

	# Graph that will embed the entity.
	var graph: ProjectGraph

	# ID of the entity in the model.
	#
	# Is empty for entities without an ID.
	var model_id: String = "" is writable

	# Associated documentation.
	var doc = new JsonArray is writable

	init do
		self.labels.add(graph.project_name)
		self.labels.add("MEntity")
	end

	# The short (unqualified) name.
	#
	# May be also set by `full_name=`.
	fun name=(name: String) do
		self["name"] = name
	end

	# The short (unqualified) name.
	fun name: String do
		var name = self["name"]
		assert name isa String
		return name
	end

	# Include the documentation of `self` in the graph.
	protected fun set_mdoc do
		self["mdoc"] = doc
	end

	# The namespace separator of Nit/C++.
	fun ns_separator: String do return "::"

	# The name separator used when calling `full_name=`.
	fun name_separator: String do return ns_separator

	# The full (qualified) name.
	#
	# Also set `name` using `name_separator`.
	fun full_name=(full_name: String) do
		var m: nullable Match = full_name.search_last(name_separator)

		self["full_name"] = full_name
		if m == null then
			name = full_name
		else
			name = full_name.substring_from(m.after)
		end
	end

	# The full (qualified) name.
	fun full_name: String do
		var full_name = self["full_name"]
		assert full_name isa String
		return full_name
	end

	# Set the full name using the current name and the specified parent name.
	fun parent_name=(parent_name: String) do
		if parent_name.is_empty then
			self["full_name"] = name
		else
			self["full_name"] = parent_name + name_separator + name
		end
	end

	# Set the location of the entity in the source code.
	fun location=(location: nullable Location) do
		self["location"] = location
	end

	# Put the entity in the graph.
	#
	# Called by the loader when it has finished to read the entity.
	fun put_in_graph do
		if doc.length > 0 then
			set_mdoc
		end
		graph.all_nodes.add(self)
		if model_id != "" then graph.by_id[model_id] = self
	end

	# Put the related edges in the graph.
	#
	# This method is called on each node by `ProjectGraph.put_edges`.
	#
	# Note: Even at this step, the entity may modify its own attributes and
	# inner entities’ ones because some values are only known once the entity
	# know its relationships with the rest of the graph.
	fun put_edges do end
end

# An entity whose the location is mandatory.
abstract class CodeBlock
	super Entity

	init do
		self["location"] = new Location
	end

	redef fun location=(location: nullable Location) do
		if location == null then
			super(new Location)
		else
			super
		end
	end
end

# A compound.
#
# Usually corresponds to a `<compounddef>` element in of the XML output of
# Doxygen.
abstract class Compound
	super Entity

	# Set the declared visibility (the proctection) of the compound.
	fun visibility=(visibility: String) do
		self["visibility"] = visibility
	end

	# Set the specific kind of the compound.
	fun kind=(kind: String) do
		self["kind"] = kind
	end

	# Declare an inner namespace.
	#
	# Note: Althought Doxygen indicates that the name is optional,
	# declarations with an empty name are not supported yet, except for the root
	# namespace. For the root namespace, both arguments are empty.
	#
	# Parameters:
	#
	# * `id`: `model_id` of the inner namespace. May be empty.
	# * `full_name`: qualified name of the inner namespace. Use an empty name
	# for the root namespace.
	fun declare_namespace(id: String, full_name: String) do end

	# Declare an inner class.
	#
	# Note: Althought Doxygen indicates that both arguments are optional,
	# declarations with an empty ID are not supported yet.
	#
	# Parameters:
	#
	# * `id`: `model_id` of the inner class.
	# * `full_name`: qualified name of the inner class. Ignored in practice.
	# * `prot`: visibility (proctection).
	#
	# TODO: Handle cases where only the `full_name` is available.
	fun declare_class(id: String, full_name: String, prot: String) do end

	# Declare a base compound (usually, a base class).
	#
	# Parameters:
	#
	# * `id`: `model_id` of the base compound. May be empty.
	# * `full_name`: qualified name of the base compound. May be empty.
	# * `prot`: visibility (proctection) of the relationship.
	# * `virt`: level of virtuality of the relationship.
	fun declare_super(id: String, full_name: String, prot: String,
			virt: String) do end
end

# An unrecognized compound.
#
# Used to simplify the handling of ignored entities.
class UnknownCompound
	super Compound

	redef fun put_in_graph do end
	redef fun put_edges do end
end

# A namespace.
#
# Corresponds to a group in Nit.
class Namespace
	super Compound

	# The inner namespaces.
	#
	# Left empty for the root namespace.
	var inner_namespaces: SimpleCollection[NamespaceRef] = new Array[NamespaceRef]

	init do
		super
		self.labels.add("MGroup")
	end

	redef fun declare_namespace(id: String, full_name: String) do
		inner_namespaces.add new NamespaceRef(id, full_name)
	end

	redef fun declare_class(id: String, full_name: String, prot: String) do
		graph.class_to_ns[id] = self
	end

	redef fun put_in_graph do
		super
		var full_name = self["full_name"]
		if full_name isa String then graph.namespaces[full_name] = self
	end

	redef fun put_edges do
		super
		graph.add_edge(self, "PROJECT", graph.project)
		if self["name"] == self["full_name"] and self["full_name"] != "" then
			# The root namespace does not know its children.
			var root = graph.by_id[""]
			graph.add_edge(self, "PARENT", root)
			graph.add_edge(root, "NESTS", self)
		end
		for ns in inner_namespaces do
			var node = ns.seek_in(graph)
			graph.add_edge(node, "PARENT", self)
			graph.add_edge(self, "NESTS", node)
		end
	end
end

# A reference to a namespace.
class NamespaceRef
	# The `model_id` of the target.
	#
	# Empty when unknown or for the root namespace.
	var model_id: String

	# The `full_name` of the target.
	#
	# Empty only for the root namespace.
	var full_name: String

	# Look for the targeted namespace in the specified graph.
	fun seek_in(graph: ProjectGraph): Namespace do
		var ns_compound: Namespace

		if model_id.is_empty and not full_name.is_empty then
			# ID unspecified. => We have to look by name
			assert graph.namespaces.has_key(full_name) else
				sys.stderr.write "Namespace `{full_name}` not found."
			end
			ns_compound = graph.namespaces[full_name]
		else
			ns_compound = graph.by_id[model_id].as(Namespace)
		end
		return ns_compound
	end
end

# The root namespace of a `ProjectGraph`.
#
# This the only entity in the graph whose `model_id` is really `""`.
# Added automatically at the initialization of a `ProjectGraph`.
class RootNamespace
	super Namespace

	init do
		super
		self["full_name"] = ""
		self["name"] = graph.project["name"]
	end

	redef fun declare_namespace(id: String, name: String) do end
end
