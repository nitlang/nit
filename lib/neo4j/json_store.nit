# This file is part of NIT ( http://www.nitlanguage.org ).
#
# This file is free software, which comes along with NIT. This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. You can modify it is you want, provided this header
# is kept unaltered, and a notification of the changes is added.
# You are allowed to redistribute it and sell it, alone or is a part of
# another product.

# Uses JSON as a storage medium for a Neo4j subgraph.
module neo4j::json_store

import neo4j
private import template

# A Neo4j graph that uses as a storage medium.
#
# The graph is stored as a JSON object with the following properties:
#
# * `"nodes"`: An array with all nodes. Each node is an object with the
# following properties:
# 	* `"id"`: The ID (`Int`) that uniquely identifies the node in the current
# 	graph.
# 	* `"labels"`: An array of all applied labels.
# 	* `"properties"`: An object mapping each defined property to its value.
# * `"links"`: An array with all relationships. Each relationship is an object
# with the following properties:
# 	* `"type"`: The type (`String`) of the relationship.
# 	* `"properties"`: An object mapping each defined property to its value.
# 	* `"from"`: The ID (`Int`) of the source node.
# 	* `"to"`: The ID (`Int`) of the destination node.
#
# TODO Refine the graph API instead when it will be available.
class JsonGraph
	super Jsonable

	# All nodes in the graph.
	var nodes: SimpleCollection[NeoNode] = new Array[NeoNode]

	# All relationships in the graph.
	var links: SimpleCollection[NeoEdge] = new Array[NeoEdge]

	# Create an empty graph.
	init do end

	# Retrieve the graph from the specified JSON value.
	#
	#     var graph = new JsonGraph
	#     var a = new NeoNode
	#     a.labels.add "Foo"
	#     a["answer"] = 42
	#     a["Ultimate question of"] = new JsonArray.from(["life",
	#     		"the Universe", "and Everything."])
	#     graph.nodes.add a
	#     var b = new NeoNode
	#     b.labels.add "Foo"
	#     b.labels.add "Bar"
	#     graph.nodes.add b
	#     graph.links.add new NeoEdge(a, "BAZ", b)
	#     #
	#     graph = new JsonGraph.from_json(graph.to_json)
	#     assert 1 == graph.links.length
	#     for link in graph.links do
	#     	assert "BAZ" == link.rel_type
	#     	assert a.labels == link.from.labels
	#     	for k, v in a.properties do assert v == link.from.properties[k]
	#     	assert b.labels == link.to.labels
	#     	for k, v in b.properties do assert v == link.to.properties[k]
	#     end
	#     assert 2 == graph.nodes.length
	init from_json(t: Text) do
		from_json_object(t.parse_json.as(JsonObject))
	end

	# Retrieve the graph from the specified JSON object.
	init from_json_object(o: JsonObject) do
		var node_by_id = new HashMap[Int, NeoNode]
		var nodes = o["nodes"].as(JsonArray)
		for json_node in nodes do
			assert json_node isa JsonObject
			var node = new NeoNode.from_json_object(json_node)
			node_by_id[json_node["id"].as(Int)] = node
			self.nodes.add node
		end
		var links = o["links"].as(JsonArray)
		for json_link in links do
			assert json_link isa JsonObject
			var from = node_by_id[json_link["from"].as(Int)]
			var to = node_by_id[json_link["to"].as(Int)]
			var rel_type = json_link["type"].as(String)
			var json_properties = json_link["properties"].as(JsonObject)
			var link = new NeoEdge(from, rel_type, to)
			link.properties.recover_with(json_properties)
			self.links.add link
		end
	end

	redef fun to_json do
		var t = new Template
		t.add "\{\"nodes\":["
		var i = 0
		for n in nodes do
			if i > 0 then t.add ","
			t.add n.to_json
			i += 1
		end
		t.add "],\"links\":["
		i = 0
		for link in links do
			if i > 0 then t.add ","
			t.add link.to_json
			i += 1
		end
		t.add "]\}"
		return t.write_to_string
	end
end

# Make `NeoNode` `Jsonable`.
redef class NeoNode
	super Jsonable

	# Retrieve the node from the specified JSON value.
	#
	# Note: Here, the `"id"` is optional and ignored.
	#
	# SEE: `JsonGraph`
	#
	#     var node = new NeoNode.from_json("""
	#     {
	#     	"labels": ["foo", "Bar"],
	#     	"properties": {
	#     		"baz": 42
	#     	}
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
		properties.recover_with(json_properties)
	end

	# Get the JSON representation of `self`.
	#
	# SEE: `JsonGraph`
	redef fun to_json do
		var t = new Template
		t.add "\{\"id\":"
		t.add object_id.to_json
		t.add ",\"labels\":["
		var i = 0
		for lab in labels do
			if i > 0 then t.add ","
			t.add lab.to_json
			i += 1
		end
		t.add "],\"properties\":"
		t.add properties.to_json
		t.add "}"
		return t.write_to_string
	end

	redef fun to_s do return to_json
end

# Make `NeoEdge` `Jsonable`.
redef class NeoEdge
	super Jsonable

	redef fun to_json do
		var t = new Template
		t.add "\{\"type\":"
		t.add rel_type.to_json
		t.add ",\"properties\":"
		t.add properties.to_json
		t.add ",\"from\":"
		t.add from.object_id.to_json
		t.add ",\"to\":"
		t.add to.object_id.to_json
		t.add "}"
		return t.write_to_string
	end

	redef fun to_s do return to_json
end
