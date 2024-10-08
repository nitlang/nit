# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Provides JSON as a mean to store graphs.
module neo4j::graph::json_graph_store

import graph

# Save or load a graph using a JSON document.
#
# The graph (or the specified part of it) is stored as a JSON object with the
# following properties:
#
# * `"nodes"`: An array with all nodes. Each node is an object with the
# following properties:
#	* `"labels"`: An array of all applied labels.
#	* `"properties"`: An object mapping each defined property to its value.
# * `"edges"`: An array with all relationships. Each relationship is an object
# with the following properties:
#	* `"type"`: The type (`String`) of the relationship.
#	* `"properties"`: An object mapping each defined property to its value.
#	* `"from"`: The local ID of the source node.
#	* `"to"`: The local ID of the destination node.
#
# ~~~nit
# import neo4j::graph::sequential_id
#
# var graph = new NeoGraph(new SequentialNodeCollection("nid"))
# var a = new NeoNode
# a.labels.add "Foo"
# a["answer"] = 42
# a["Ultimate question of"] = new JsonArray.from(["life",
#		"the Universe", "and Everything."])
# graph.nodes.register a
# var b = graph.create_node
# b.labels.add "Foo"
# b.labels.add "Bar"
# graph.edges.add new NeoEdge(a, "BAZ", b)
#
# var ostream = new StringWriter
# var store = new JsonGraphStore(graph)
# store.ostream = ostream
# store.save
# assert ostream.to_s == """{"nodes":[""" + """
# {"labels":["Foo"],"properties":{"answer":42,""" + """
# "Ultimate question of":["life","the Universe","and Everything."],""" + """
# "nid":1}},""" + """
# {"labels":["Foo","Bar"],"properties":{"nid":2}}],""" + """
# "edges":[{"type":"BAZ","properties":{},"from":1,"to":2}]}"""
#
# graph.nodes.clear
# graph.edges.clear
# store.istream = new StringReader(ostream.to_s)
# store.load
# assert 1 == graph.edges.length
# for edge in graph.edges do
#	assert "BAZ" == edge.rel_type
#	assert a.labels == edge.from.labels
#	for k, v in a.properties do assert v == edge.from.properties[k]
#	assert b.labels == edge.to.labels
#	for k, v in b.properties do assert v == edge.to.properties[k]
# end
# assert 2 == graph.nodes.length
# ~~~
class JsonGraphStore
	super GraphStore

	# The stream to use for `load`.
	var istream: nullable Reader = null is writable

	# The stream to use for `save` and `save_part`.
	var ostream: nullable Writer = null is writable

	# Use the specified `Duplex`.
	init from_io(graph: NeoGraph, iostream: Duplex) do
		init(graph)
		istream = iostream
		ostream = iostream
	end

	# Use the specified string to load the graph.
	init from_string(graph: NeoGraph, string: String) do
		init(graph)
		istream = new StringReader(string)
	end

	redef fun isolated_save do return true

	redef fun load do
		var istream = self.istream
		assert istream isa Reader
		fire_started
		graph.load_json(istream.read_all)
		fire_done
	end

	redef fun save_part(nodes, edges) do
		var ostream = self.ostream
		assert ostream isa Writer
		fire_started
		ostream.write(graph.to_json)
		fire_done
	end
end

redef class NeoGraph
	super Serializable

	# Retrieve the graph from the specified JSON document.
	#
	# For the expected format, see `JsonGraphStore`.
	#
	# ~~~nit
	# import neo4j::graph::sequential_id
	#
	# var graph = new NeoGraph(new SequentialNodeCollection("node_id"))
	# var a = new NeoNode
	# a.labels.add "Foo"
	# a["answer"] = 42
	# a["Ultimate question of"] = new JsonArray.from(["life",
	#		"the Universe", "and Everything."])
	# graph.nodes.register a
	# var b = graph.create_node
	# b.labels.add "Foo"
	# b.labels.add "Bar"
	# graph.edges.add new NeoEdge(a, "BAZ", b)
	#
	# graph = new NeoGraph.from_json(
	#		new SequentialNodeCollection("node_id"), graph.to_json)
	# assert 1 == graph.edges.length
	# for edge in graph.edges do
	#	assert "BAZ" == edge.rel_type
	#	assert a.labels == edge.from.labels
	#	for k, v in a.properties do assert v == edge.from.properties[k]
	#	assert b.labels == edge.to.labels
	#	for k, v in b.properties do assert v == edge.to.properties[k]
	# end
	# assert 2 == graph.nodes.length
	# ~~~
	init from_json(nodes: NeoNodeCollection, t: Text) do
		from_json_object(nodes, t.parse_json.as(JsonObject))
	end

	# Retrieve the graph from the specified JSON object.
	#
	# For the expected format, see `JsonGraphStore`.
	init from_json_object(nodes: NeoNodeCollection, o: JsonObject) do
		init(nodes)
		load_json_object(o)
	end

	# Retrieve a part of the graph from the specified JSON document.
	#
	# For the expected format, see `JsonGraphStore`.
	fun load_json(t: Text) do
		load_json_object(t.parse_json.as(JsonObject))
	end

	# Retrieve a part of the graph from the specified JSON object.
	#
	# For the expected format, see `JsonGraphStore`.
	fun load_json_object(o: JsonObject) do
		var json_nodes = o["nodes"].as(JsonArray)
		var nodes = self.nodes
		nodes.enlarge(nodes.length)
		for json_node in json_nodes do
			assert json_node isa JsonObject
			var node = new NeoNode.from_json_object(json_node)
			nodes.add node
		end

		var json_edges = o["edges"].as(JsonArray)
		var edges = self.edges
		if edges isa AbstractArray[NeoEdge] then edges.enlarge(edges.length)
		for json_edge in json_edges do
			assert json_edge isa JsonObject
			var from = nodes[nodes.id_from_jsonable(json_edge["from"])]
			var to = nodes[nodes.id_from_jsonable(json_edge["to"])]
			var rel_type = json_edge["type"].as(String)
			var json_properties = json_edge["properties"].as(JsonObject)
			var edge = new NeoEdge(from, rel_type, to)
			edge.properties.add_all(json_properties)
			edges.add edge
		end
	end

	redef fun accept_json_serializer(v) do
		v.stream.write "\{\"nodes\":["
		append_entities_json(nodes, v)
		v.stream.write "],\"edges\":["
		append_entities_json(edges, v)
		v.stream.write "]\}"
	end

	# Encode `self` in JSON.
	#
	# For a description of the format, see `JsonGraphStore`.
	private fun append_entities_json(entities: Collection[NeoEntity], v: JsonSerializer) do
		var i = entities.iterator
		if i.is_ok then
			i.item.append_json_for(self, v)
			i.next
			for entity in i do
				v.stream.write ","
				entity.append_json_for(self, v)
			end
		end
	end
end

redef class NeoNodeCollection
	# Convert the specified JSON value into a local ID.
	fun id_from_jsonable(id: nullable Serializable): ID_TYPE do return id.as(ID_TYPE)
end

redef class NeoEntity

	# Append the JSON representation of the entity to the specified buffer.
	fun append_json_for(graph: NeoGraph, v: JsonSerializer) is abstract
end

# Make `NeoNode` `Serializable`.
redef class NeoNode
	super Serializable

	# Retrieve the node from the specified JSON value.
	#
	# Note: Here, the `"id"` is optional and ignored.
	#
	# SEE: `JsonGraph`
	#
	#     var node = new NeoNode.from_json("""
	#     {
	#	"labels": ["foo", "Bar"],
	#	"properties": {
	#		"baz": 42
	#	}
	#     }
	#     """)
	#     assert ["foo", "Bar"] == node.labels
	#     assert 42 == node["baz"]
	init from_json(t: Text) do
		from_json_object(t.parse_json.as(JsonObject))
	end

	# Retrieve the node from the specified JSON value.
	#
	# Note: Here, the `"id"` is optional and ignored.
	#
	# SEE: `JsonGraph`
	init from_json_object(o: JsonObject) do
		init
		var labels = o["labels"].as(JsonArray)
		for lab in labels do self.labels.add(lab.as(String))
		var json_properties = o["properties"].as(JsonObject)
		properties.add_all(json_properties)
	end

	redef fun accept_json_serializer(v) do
		v.stream.write "\{\"labels\":["
		var i = labels.iterator
		if i.is_ok then
			i.item.serialize_to v
			i.next
			for lab in i do
				v.stream.write ","
				lab.serialize_to v
			end
		end
		v.stream.write "],\"properties\":"
		properties.serialize_to v
		v.stream.write "}"
	end

	redef fun to_s do return to_json

	# Append the JSON representation of the node to the specified buffer.
	redef fun append_json_for(graph, v) do
		accept_json_serializer v
	end
end

redef class NeoEdge

	# Append the JSON representation of the relationship to the specified buffer.
	#
	# Use the IDs specfied by `graph.nodes`.
	redef fun append_json_for(graph, v) do
		v.stream.write "\{\"type\":"
		rel_type.as(not null).serialize_to(v)
		v.stream.write ",\"properties\":"
		properties.serialize_to(v)
		v.stream.write ",\"from\":"
		graph.nodes.id_of(from).serialize_to(v)
		v.stream.write ",\"to\":"
		graph.nodes.id_of(to).serialize_to(v)
		v.stream.write "}"
	end
end
