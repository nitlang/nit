# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Provides an interface for services on a Neo4j graphs.
module neo4j::graph::graph

import neo4j
import progression

# A Neo4j graph with a local identification scheme for its nodes.
#
# An identification scheme can be defined by subclassing `NeoNodeCollection`.
#
# `GraphStore` can be subclassed to add ways to save or load a graph. The
# storing mechanisms may use `nodes.id_of` to identify the nodes in the graph
# while encoding the relationships.
class NeoGraph
	# All the nodes in the graph.
	var nodes: NeoNodeCollection

	# All the relationships in the graph.
	var edges: SimpleCollection[NeoEdge] = new Array[NeoEdge]

	# Add a new node to the graph and return it.
	#
	# Set the local ID of the node before returning it.
	#
	# SEE: `NeoNodeCollection.add`
	# SEE: `NeoNodeCollection.create_node`
	# SEE: `NeoNodeCollection.register`
	fun create_node: NeoNode do return nodes.create_node
end

# All the nodes in a `NeoGraph`.
#
# An identification scheme can be defined throught the `register` and `add`
# methods. The `id_property` attribute defines where the local ID (that is the
# ID managed by the collection) is stored in each node.
abstract class NeoNodeCollection
	super SimpleCollection[NeoNode]

	# The type of the local IDs.
	type ID_TYPE: Jsonable

	# The property of the nodes that hold the local ID.
	var id_property: String

	# Retrieve the node that has the specified local id.
	#
	# Note: The default implementation uses `get_or_null`.
	fun [](id: ID_TYPE): NeoNode do
		var n = get_or_null(id)
		assert n isa NeoNode
		return n
	end

	# Retrieve the node that has the specified local id, or return `null`.
	#
	# Note: The default implementation uses `iterator`.
	fun get_or_null(id: ID_TYPE): nullable NeoNode do
		for n in self do
			if id_of(n) == id then return n
		end
		return null
	end

	# There is a node that has the specified local id?
	#
	# Note: The default implementation uses `get_or_null`.
	fun has_id(id: ID_TYPE): Bool do return get_or_null(id) isa NeoNode

	# Return the local ID of the node.
	fun id_of(node: NeoNode): ID_TYPE do return node[id_property].as(ID_TYPE)

	# Set the local ID of the specified node.
	#
	# Just update the property at `property_id`. Do not check anything.
	protected fun id_of=(node: NeoNode, id: ID_TYPE) do
		node[id_property] = id
	end

	# Add the specified node to the graph and set its local ID.
	#
	# SEE: `add`
	# SEE: `create_node`
	fun register(node: NeoNode) is abstract

	# Add the specified node to the graph assuming that its local ID is already set.
	#
	# SEE: `create_node`
	# SEE: `register`
	redef fun add(node: NeoNode) is abstract

	# Add a new node to the graph and return it.
	#
	# Set the local ID of the node before returning it.
	#
	# SEE: `add`
	# SEE: `register`
	fun create_node: NeoNode do
		var node = new NeoNode
		register(node)
		return node
	end

	# Remove the node with the specified local ID.
	fun remove_at(id: ID_TYPE) is abstract

	# Remove the specified node.
	#
	# The local ID is used instead of `==` to seek the node.
	fun remove_node(node: NeoNode) do
		remove_at(id_of(node))
	end

	redef fun clear do
		for node in self do remove_node(node)
	end

	redef fun remove(node: NeoNode) do
		for n in self do
			if node == n then
				remove_node(n)
				return
			end
		end
	end

	redef fun remove_all(node: NeoNode) do
		for n in self do
			if node == n then remove_node(n)
		end
	end
end

# A mean to save and load a Neo4j graph.
abstract class GraphStore
	super Trackable

	# The graph to save or load.
	var graph: NeoGraph

	# Can we save the graph without conflict?
	fun isolated_save: Bool is abstract

	# Load the graph (or a part of it).
	#
	# Do not reset the graph.
	fun load is abstract

	# Save the graph.
	fun save do save_part(graph.nodes, graph.edges)

	# Save the specified part of the graph.
	#
	# Assume that for each relationship specified, both ends are already saved
	# or are specified in the same call to this method.
	fun save_part(nodes: Collection[NeoNode],
			edges: Collection[NeoEdge]) is abstract
end
