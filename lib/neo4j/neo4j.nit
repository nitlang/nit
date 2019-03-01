# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Neo4j connector through its JSON REST API using curl.
#
# In order to connect to Neo4j you need a connector:
#
#     # Create new Neo4j client
#     var client = new Neo4jClient("http://neo4j:7474")
#     assert client.is_ok
#
# The fundamental units that form a graph are nodes and relationships.
#
# Nodes are used to represent entities stored in base:
#
#     # Create a disconnected node
#     var andres = new NeoNode
#     andres["name"] = "Andres"
#     # Connect the node to Neo4j
#     client.save_node(andres)
#     assert andres.is_linked
#
#     # Create a second node
#     var kate = new NeoNode
#     kate["name"] = "Kate"
#     client.save_node(kate)
#     assert kate.is_linked
#
# Relationships between nodes are a key part of a graph database.
# They allow for finding related data. Just like nodes, relationships can have properties.
#
#     # Create a relationship
#     var loves = new NeoEdge(andres, "LOVES", kate)
#     client.save_edge(loves)
#     assert loves.is_linked
#
# Nodes can also be loaded fron Neo4j:
#
#     # Get a node from DB and explore edges
#     var url = andres.url.to_s
#     var from = client.load_node(url)
#     assert from["name"].to_s == "Andres"
#     var to = from.out_nodes("LOVES").first		# follow the first LOVES relationship
#     assert to["name"].to_s == "Kate"
#
# For more details, see http://docs.neo4j.org/chunked/milestone/rest-api.html
module neo4j

import curl_json
import error

# `Neo4jClient` is needed to communicate through the REST API
#
#     var client = new Neo4jClient("http://neo4j:7474")
#     assert client.is_ok
class Neo4jClient

	# Neo4j REST services baseurl
	var base_url: String
	# REST service to get node data
	private var node_url: String
	# REST service to batch
	private var batch_url: String
	# REST service to send cypher requests
	private var cypher_url: String

	init(base_url: String) do
		self.base_url = base_url
		var root = service_root
		assert root isa JsonObject else
			sys.stderr.write "Neo4jClientError: cannot connect to server at <{base_url}>.\n"
		end
		self.node_url = root["node"].to_s
		self.batch_url = root["batch"].to_s
		self.cypher_url = root["cypher"].to_s
	end

	fun service_root: Serializable do return get(base_url / "db/data")

	# Is the connection with the Neo4j server ok?
	fun is_ok: Bool do return service_root isa JsonObject

	# Empty the graph
	fun clear_graph do
		cypher(new CypherQuery.from_string("MATCH (n) OPTIONAL MATCH n-[r]-() DELETE r, n"))
	end

	# Last errors
	var errors = new Array[String]

	# Nodes view stored locally
	private var local_nodes = new HashMap[String, nullable NeoNode]

	# Save the node in base
	#
	#     var client = new Neo4jClient("http://neo4j:7474")
	#
	#     # Create a node
	#     var andres = new NeoNode
	#     andres["name"] = "Andres"
	#     client.save_node(andres)
	#     assert andres.is_linked
	#
	# Once linked, nodes cannot be created twice:
	#
	#     var oldurl = andres.url
	#     client.save_node(andres) # do nothing
	#     assert andres.url == oldurl
	fun save_node(node: NeoNode): Bool do
		if node.is_linked then return true
		node.neo = self
		var batch = new NeoBatch(self)
		batch.save_node(node)
		# batch.create_edges(node.out_edges)
		var errors = batch.execute
		if not errors.is_empty then
			errors.add_all errors
			return false
		end
		local_nodes[node.url.to_s] = node
		return true
	end

	# Load a node from base
	# Data, labels and edges will be loaded lazily.
	fun load_node(url: String): NeoNode do
		if local_nodes.has_key(url) then
			var node = local_nodes[url]
			if node != null then return node
		end
		var node = new NeoNode.from_neo(self, url)
		local_nodes[url] = node
		return node
	end

	# Remove the entity from base
	fun delete_node(node: NeoNode): Bool do
		if not node.is_linked then return false
		var url = node.url.to_s
		delete(url)
		local_nodes[url] = null
		node.url = null
		return true
	end

	# Edges view stored locally
	private var local_edges = new HashMap[String, nullable NeoEdge]

	# Save the edge in base
	# From and to nodes will be created.
	#
	#     var client = new Neo4jClient("http://neo4j:7474")
	#
	#     var andres = new NeoNode
	#     var kate = new NeoNode
	#     var edge = new NeoEdge(andres, "LOVES", kate)
	#     client.save_edge(edge)
	#     assert andres.is_linked
	#     assert kate.is_linked
	#     assert edge.is_linked
	fun save_edge(edge: NeoEdge): Bool do
		if edge.is_linked then return true
		edge.neo = self
		edge.from.out_edges.add edge
		edge.to.in_edges.add edge
		var batch = new NeoBatch(self)
		batch.save_edge(edge)
		var errors = batch.execute
		if not errors.is_empty then
			errors.add_all errors
			return false
		end
		local_edges[edge.url.to_s] = edge
		return true
	end

	# Load a edge from base
	# Data will be loaded lazily.
	fun load_edge(url: String): NeoEdge do
		if local_edges.has_key(url) then
			var node = local_edges[url]
			if node != null then return node
		end
		var edge = new NeoEdge.from_neo(self, url)
		local_edges[url] = edge
		return edge
	end

	# Remove the edge from base
	fun delete_edge(edge: NeoEdge): Bool do
		if not edge.is_linked then return false
		var url = edge.url.to_s
		delete(url)
		local_edges[url] = null
		edge.url = null
		return true
	end

	# Retrieve all nodes with specified `lbl`
	#
	#     var client = new Neo4jClient("http://neo4j:7474")
	#
	#     var andres = new NeoNode
	#     andres.labels.add_all(["Human", "Male"])
	#     client.save_node(andres)
	#     var kate = new NeoNode
	#     kate.labels.add_all(["Human", "Female"])
	#     client.save_node(kate)
	#
	#     var nodes = client.nodes_with_label("Human")
	#     assert nodes.has(andres)
	#     assert nodes.has(kate)
	fun nodes_with_label(lbl: String): Array[NeoNode] do
		var res = get(base_url / "db/data/label/{lbl.to_percent_encoding}/nodes")
		var nodes = new Array[NeoNode]
		for json in res.as(JsonArray) do
			var obj = json.as(JsonObject)
			var node = load_node(obj["self"].to_s)
			node.internal_properties = obj["data"].as(JsonObject)
			nodes.add node
		end
		return nodes
	end

	# Retrieve nodes belonging to all the specified `labels`.
	#
	#     var client = new Neo4jClient("http://neo4j:7474")
	#
	#     var andres = new NeoNode
	#     andres.labels.add_all(["Human", "Male"])
	#     client.save_node(andres)
	#     var kate = new NeoNode
	#     kate.labels.add_all(["Human", "Female"])
	#     client.save_node(kate)
	#
	#     var nodes = client.nodes_with_labels(["Human", "Male"])
	#     assert nodes.has(andres)
	#     assert not nodes.has(kate)
	fun nodes_with_labels(labels: Array[String]): Array[NeoNode] do
		assert not labels.is_empty

		# Build the query.
		var buffer = new Buffer
		buffer.append "match (n) where \{label_0\} in labels(n)"
		for i in [1..labels.length[ do
			buffer.append " and \{label_{i}\} in labels(n)"
		end
		buffer.append " return n"
		var query = new CypherQuery.from_string(buffer.write_to_string)
		for i in [0..labels.length[ do
			query.params["label_{i}"] = labels[i]
		end

		# Retrieve the answer.
		var res = cypher(query)
		var nodes = new Array[NeoNode]
		for json in res.as(JsonObject)["data"].as(JsonArray) do
			var obj = json.as(JsonArray).first.as(JsonObject)
			var node = load_node(obj["self"].to_s)
			node.internal_properties = obj["data"].as(JsonObject)
			nodes.add node
		end
		return nodes
	end

	# Perform a `CypherQuery`
	# see: CypherQuery
	fun cypher(query: CypherQuery): Serializable do
		return post("{cypher_url}", query.to_rest)
	end

	# GET JSON data from `url`
	fun get(url: String): Serializable do
		var request = new JsonGET(url)
		var response = request.execute
		return parse_response(response)
	end

	# POST `params` to `url`
	fun post(url: String, params: Serializable): Serializable do
		var request = new JsonPOST(url)
		request.json_data = params
		var response = request.execute
		return parse_response(response)
	end

	# PUT `params` at `url`
	fun put(url: String, params: Serializable): Serializable do
		var request = new JsonPUT(url)
		request.json_data = params
		var response = request.execute
		return parse_response(response)
	end

	# DELETE `url`
	fun delete(url: String): Serializable do
		var request = new JsonDELETE(url)
		var response = request.execute
		return parse_response(response)
	end

	# Parse the cURL `response` as a JSON string
	private fun parse_response(response: CurlResponse): Serializable do
		if response isa CurlResponseSuccess then
			var str = response.body_str
			if str.is_empty then return new JsonObject
			var res = str.parse_json
			if res isa JsonParseError then
				var e = new NeoError(res.to_s, "JsonParseError")
				e.cause = res
				return e
			end
			if res == null then
				# empty response wrap it in empty object
				return new JsonObject
			else if res isa JsonObject and res.has_key("exception") then
				var error = "Neo4jError::{res["exception"] or else "null"}"
				var msg = ""
				if res.has_key("message") then
					msg = res["message"].to_s
				end
				return new NeoError(msg, error)
			else
				return res
			end
		else if response isa CurlResponseFailed then
			return new NeoError("{response.error_msg} ({response.error_code})", "CurlError")
		else
			return new NeoError("Unexpected response \"{response}\".", "CurlError")
		end
	end
end

# A Cypher query for Neo4j REST API
#
# The Neo4j REST API allows querying with Cypher.
# The results are returned as a list of string headers (columns), and a data part,
# consisting of a list of all rows, every row consisting of a list of REST representations
# of the field value - Node, Relationship, Path or any simple value like String.
#
# Example:
#
#     var client = new Neo4jClient("http://neo4j:7474")
#     var query = new CypherQuery
#     query.nmatch("(n)-[r:LOVES]->(m)")
#     query.nwhere("n.name=\"Andres\"")
#     query.nreturn("m.name")
#     var res = client.cypher(query).as(JsonObject)
#     assert res["data"].as(JsonArray).first.as(JsonArray).first == "Kate"
#
# For more details, see: http://docs.neo4j.org/chunked/milestone/rest-api-cypher.html
class CypherQuery
	# Query string to perform
	private var query: String = ""

	# `params` to embed in the query like in prepared statements
	var params = new JsonObject

	# init the query from a query string
	init from_string(query: String) do
		self.query = query
	end

	# init the query with parameters
	init with_params(params: JsonObject) do
		self.params = params
	end

	# Pass the argument `value` as the parameter `key`.
	#
	# SEE: `set`
	fun []=(key: String, value: nullable Serializable) do
		params[key] = value
	end

	# Add a `CREATE` statement to the query
	fun ncreate(query: String): CypherQuery do
		self.query = "{self.query}CREATE {query} "
		return self
	end

	# Add a `START` statement to the query
	fun nstart(query: String): CypherQuery do
		self.query = "{self.query}START {query} "
		return self
	end

	# Add a `MATCH` statement to the query
	fun nmatch(query: String): CypherQuery do
		self.query = "{self.query}MATCH {query} "
		return self
	end

	# Add a `WHERE` statement to the query
	fun nwhere(query: String): CypherQuery do
		self.query = "{self.query}WHERE {query} "
		return self
	end

	# Add a `AND` statement to the query
	fun nand(query: String): CypherQuery do
		self.query = "{self.query}AND {query} "
		return self
	end

	# Add a `RETURN` statement to the query
	fun nreturn(query: String): CypherQuery do
		self.query = "{self.query}RETURN {query} "
		return self
	end

	# Pass the argument `value` as the parameter `key`.
	#
	# Return `self`.
	#
	# ```
	# var query = (new CypherQuery).
	# 		nmatch("(n)").
	# 		nwhere("n.key = \{key\}").
	#		set("key", "foo")
	#
	# assert query.params["key"] == "foo"
	# ```
	#
	# SEE: `[]=`
	fun set(key: String, value: nullable Serializable): SELF do
		self[key] = value
		return self
	end

	# Translate the query to the body of a corresponding Neo4j REST request.
	fun to_rest: JsonObject do
		var obj = new JsonObject
		obj["query"] = query
		if not params.is_empty then
			obj["params"] = params
		end
		return obj
	end

	redef fun to_s do return to_rest.to_s
end

# The fundamental units that form a graph are nodes and relationships.
#
# Entities can have two states:
#
# * linked: the NeoEntity references an existing node or edge in Neo4j
# * unlinked: the NeoEntity is not yet created in Neo4j
#
# If the entity is initialized unlinked from neo4j:
#
#     # Create a disconnected node
#     var andres = new NeoNode
#     andres["name"] = "Andres"
#     # At this point, the node is not linked
#     assert not andres.is_linked
#
# Then we can link the entity to the base:
#
#     # Init client
#     var client = new Neo4jClient("http://neo4j:7474")
#     client.save_node(andres)
#     # The node is now linked
#     assert andres.is_linked
#
# Entities can also be loaded from Neo4j:
#
#     # Get a node from Neo4j
#     var url = andres.url.to_s
#     var node = client.load_node(url)
#     assert node.is_linked
#
# When working in connected mode, all reading operations are executed lazily on the base:
#
#     # Get the node `name` property
#     assert node["name"] == "Andres"	# loaded lazily from base
abstract class NeoEntity
	# Neo4j client connector
	private var neo: Neo4jClient is noinit

	# Entity unique URL in Neo4j REST API
	var url: nullable String = null

	# Temp id used in batch mode to update the entity
	private var batch_id: nullable Int = null

	# Load the entity from base
	private init from_neo(neo: Neo4jClient, url: String) is nosuper do
		self.neo = neo
		self.url = url
	end

	# Init entity from JSON representation
	private init from_json(neo: Neo4jClient, obj: JsonObject) is nosuper do
		self.neo = neo
		self.url = obj["self"].to_s
		self.internal_properties = obj["data"].as(JsonObject)
	end

	# Create a empty (and not-connected) entity
	init do
		self.internal_properties = new JsonObject
	end

	# Is the entity linked to a Neo4j database?
	fun is_linked: Bool do return url != null

	# In Neo4j, both nodes and relationships can contain properties.
	# Properties are key-value pairs where the key is a string.
	# Property values are JSON formatted.
	#
	# Properties are loaded lazily
	fun properties: JsonObject do return internal_properties or else load_properties

	private var internal_properties: nullable JsonObject = null

	private fun load_properties: JsonObject do
		var obj = neo.get(url.to_s / "properties").as(JsonObject)
		internal_properties = obj
		return obj
	end

	# Get the entity `id` if connected to base
	fun id: nullable Int do
		if url == null then return null
		return url.split("/").last.to_i
	end

	# Get the entity property at `key`
	fun [](key: String): nullable Serializable do
		if not properties.has_key(key) then return null
		return properties[key]
	end

	# Set the entity property `value` at `key`
	fun []=(key: String, value: nullable Serializable) do properties[key] = value

	# Is the property `key` set?
	fun has_key(key: String): Bool do return properties.has_key(key)
end

# Nodes are used to represent entities stored in base.
# Apart from properties and relationships (edges),
# nodes can also be labeled with zero or more labels.
#
# A label is a `String` that is used to group nodes into sets.
# All nodes labeled with the same label belongs to the same set.
# A node may be labeled with any number of labels, including none,
# making labels an optional addition to the graph.
#
# Creating new nodes:
#
#     var client = new Neo4jClient("http://neo4j:7474")
#
#     var andres = new NeoNode
#     andres.labels.add "Person"
#     andres["name"] = "Andres"
#     andres["age"] = 22
#     client.save_node(andres)
#     assert andres.is_linked
#
# Get nodes from Neo4j:
#
#     var url = andres.url.to_s
#     var node = client.load_node(url)
#     assert node["name"] == "Andres"
#     assert node["age"].to_s.to_i	== 22
class NeoNode
	super NeoEntity

	private var internal_labels: nullable Array[String] = null
	private var internal_in_edges: nullable List[NeoEdge] = null
	private var internal_out_edges: nullable List[NeoEdge] = null

	init do
		super
		self.internal_labels = new Array[String]
		self.internal_in_edges = new List[NeoEdge]
		self.internal_out_edges = new List[NeoEdge]
	end

	redef fun to_s do
		var tpl = new FlatBuffer
		tpl.append "\{"
		tpl.append "labels: [{labels.join(", ")}],"
		tpl.append "data: {properties.to_json}"
		tpl.append "\}"
		return tpl.write_to_string
	end

	# A label is a `String` that is used to group nodes into sets.
	# A node may be labeled with any number of labels, including none.
	# All nodes labeled with the same label belongs to the same set.
	#
	# Many database queries can work with these sets instead of the whole graph,
	# making queries easier to write and more efficient.
	#
	# Labels are loaded lazily
	fun labels: Array[String] do return internal_labels or else load_labels

	private fun load_labels: Array[String] do
		var labels = new Array[String]
		var res = neo.get(url.to_s / "labels")
		if res isa JsonArray then
			for val in res do labels.add val.to_s
		end
		internal_labels = labels
		return labels
	end

	# Get the list of `NeoEdge` pointing to `self`
	#
	# Edges are loaded lazily
	fun in_edges: List[NeoEdge] do return internal_in_edges or else load_in_edges

	private fun load_in_edges: List[NeoEdge] do
		var edges = new List[NeoEdge]
		var res = neo.get(url.to_s / "relationships/in").as(JsonArray)
		for obj in res do
			edges.add(new NeoEdge.from_json(neo, obj.as(JsonObject)))
		end
		internal_in_edges = edges
		return edges
	end

	# Get the list of `NeoEdge` pointing from `self`
	#
	# Edges are loaded lazily
	fun out_edges: List[NeoEdge] do return internal_out_edges or else load_out_edges

	private fun load_out_edges: List[NeoEdge] do
		var edges = new List[NeoEdge]
		var res = neo.get(url.to_s / "relationships/out")
		for obj in res.as(JsonArray) do
			edges.add(new NeoEdge.from_json(neo, obj.as(JsonObject)))
		end
		internal_out_edges = edges
		return edges
	end

	# Get nodes pointed by `self` following a `rel_type` edge
	fun out_nodes(rel_type: String): Array[NeoNode] do
		var res = new Array[NeoNode]
		for edge in out_edges do
			if edge.rel_type == rel_type then res.add edge.to
		end
		return res
	end

	# Get nodes pointing to `self` following a `rel_type` edge
	fun in_nodes(rel_type: String): Array[NeoNode] do
		var res = new Array[NeoNode]
		for edge in in_edges do
			if edge.rel_type == rel_type then res.add edge.from
		end
		return res
	end
end

# A relationship between two nodes.
# Relationships between nodes are a key part of a graph database.
# They allow for finding related data. Just like nodes, relationships can have properties.
#
# Create a relationship:
#
#     var client = new Neo4jClient("http://neo4j:7474")
#     # Create nodes
#     var andres = new NeoNode
#     andres["name"] = "Andres"
#     var kate = new NeoNode
#     kate["name"] = "Kate"
#     # Create a relationship of type `LOVES`
#     var loves = new NeoEdge(andres, "LOVES", kate)
#     client.save_edge(loves)
#     assert loves.is_linked
#
# Get an edge from DB:
#
#     var url = loves.url.to_s
#     var edge = client.load_edge(url)
#     assert edge.from["name"].to_s == "Andres"
#     assert edge.to["name"].to_s == "Kate"
class NeoEdge
	super NeoEntity

	private var internal_from: nullable NeoNode
	private var internal_to: nullable NeoNode
	private var internal_type: nullable String
	private var internal_from_url: nullable String
	private var internal_to_url: nullable String

	init(from: NeoNode, rel_type: String, to: NeoNode) do
		self.internal_from = from
		self.internal_to = to
		self.internal_type = rel_type
	end

	redef init from_neo(neo, url) do
		super
		var obj = neo.get(url).as(JsonObject)
		self.internal_type = obj["type"].to_s
		self.internal_from_url = obj["start"].to_s
		self.internal_to_url = obj["end"].to_s
	end

	redef init from_json(neo, obj) do
		super
		self.internal_type = obj["type"].to_s
		self.internal_from_url = obj["start"].to_s
		self.internal_to_url = obj["end"].to_s
	end

	# Get `from` node
	fun from: NeoNode do return internal_from or else load_from

	private fun load_from: NeoNode do
		var node = neo.load_node(internal_from_url.to_s)
		internal_from = node
		return node
	end

	# Get `to` node
	fun to: NeoNode do return internal_to or else load_to

	private fun load_to: NeoNode do
		var node = neo.load_node(internal_to_url.to_s)
		internal_to = node
		return node
	end

	# Get edge type
	fun rel_type: nullable String do return internal_type

	# Get the JSON body of a REST request that create the relationship.
	private fun to_rest: JsonObject do
		var obj = new JsonObject
		if to.is_linked then
			obj["to"] = to.url
		else
			obj["to"] = "\{{to.batch_id.to_s}\}"
		end
		obj["type"] = rel_type
		obj["data"] = properties
		return obj
	end
end

# Batches are used to perform multiple operations on the REST API in one cURL request.
# This can significantly improve performance for large insert and update operations.
#
# see: http://docs.neo4j.org/chunked/milestone/rest-api-batch-ops.html
#
# This service is transactional.
# If any of the operations performed fails (returns a non-2xx HTTP status code),
# the transaction will be rolled back and all changes will be undone.
#
# Example:
#
#     var client = new Neo4jClient("http://neo4j:7474")
#
#     var node1 = new NeoNode
#     var node2 = new NeoNode
#     var edge = new NeoEdge(node1, "TO", node2)
#
#     var batch = new NeoBatch(client)
#     batch.save_node(node1)
#     batch.save_node(node2)
#     batch.save_edge(edge)
#     batch.execute
#
#     assert node1.is_linked
#     assert node2.is_linked
#     assert edge.is_linked
class NeoBatch

	# Neo4j client connector
	var client: Neo4jClient

	# Jobs to perform in this batch
	#
	# The batch service expects an array of job descriptions as input,
	# each job description describing an action to be performed via the normal server API.
	var jobs = new HashMap[Int, NeoJob]

	# Append a new job to the batch in JSON Format
	# see `NeoJob`
	fun new_job(nentity: NeoEntity): NeoJob do
		var id = jobs.length
		var job = new NeoJob(id, nentity)
		jobs[id] = job
		return job
	end

	# Load a node in batch mode also load labels, data and edges
	fun load_node(node: NeoNode) do
		var job = new_job(node)
		job.action = load_node_data_action
		job.method = "GET"
		if node.id != null then
			job.to = "/node/{node.id.to_s}"
		else
			job.to = "\{{node.batch_id.to_s}\}"
		end
		job = new_job(node)
		job.action = load_node_labels_action
		job.method = "GET"
		if node.id != null then
			job.to = "/node/{node.id.to_s}/labels"
		else
			job.to = "\{{node.batch_id.to_s}\}/labels"
		end
	end

	# Load in and out edges into node
	fun load_node_edges(node: NeoNode) do
		var job = new_job(node)
		job.action = load_node_in_edges_action
		job.method = "GET"
		if node.id != null then
			job.to = "/node/{node.id.to_s}/relationships/in"
		else
			job.to = "\{{node.batch_id.to_s}\}/relationships/in"
		end
		job = new_job(node)
		job.action = load_node_out_edges_action
		job.method = "GET"
		if node.id != null then
			job.to = "/node/{node.id.to_s}/relationships/out"
		else
			job.to = "\{{node.batch_id.to_s}\}/relationships/out"
		end
	end

	# Create a `NeoNode` or a `NeoEdge` in batch mode.
	fun save_entity(nentity: NeoEntity) do
		if nentity isa NeoNode then
			save_node(nentity)
		else if nentity isa NeoEdge then
			save_edge(nentity)
		else abort
	end

	# Create a node in batch mode also create labels and edges
	fun save_node(node: NeoNode) do
		if node.id != null or node.batch_id != null then return
		# create node
		var job = new_job(node)
		node.batch_id = job.id
		job.action = create_node_action
		job.method = "POST"
		job.to = "/node"
		job.body = node.properties
		# add labels
		job = new_job(node)
		job.method = "POST"
		job.to = "\{{node.batch_id.to_s}\}/labels"
		job.body = new JsonArray.from(node.labels)
		# add edges
		#save_edges(node.out_edges)
	end

	# Create multiple nodes
	# also create labels and edges
	fun save_nodes(nodes: Collection[NeoNode]) do for node in nodes do save_node(node)

	# Create an edge
	# nodes `edge.from` and `edge.to` will be created if not in base
	fun save_edge(edge: NeoEdge) do
		if edge.id != null or edge.batch_id != null then return
		# create nodes
		save_node(edge.from)
		save_node(edge.to)
		# create edge
		var job = new_job(edge)
		edge.batch_id = job.id
		job.action = create_edge_action
		job.method = "POST"
		if edge.from.id != null then
			job.to = "/node/{edge.from.id.to_s}/relationships"
		else
			job.to = "\{{edge.from.batch_id.to_s}\}/relationships"
		end
		job.body = edge.to_rest
	end

	# Create multiple edges
	fun save_edges(edges: Collection[NeoEdge]) do for edge in edges do save_edge(edge)

	# Execute the batch and update local nodes
	fun execute: List[NeoError] do
		var request = new JsonPOST(client.batch_url)
		# request.headers["X-Stream"] = "true"
		var json_jobs = new JsonArray
		for job in jobs.values do json_jobs.add job.to_rest
		request.json_data = json_jobs
		var response = request.execute
		var res = client.parse_response(response)
		return finalize_batch(res)
	end

	# Associate data from response in original nodes and edges
	private fun finalize_batch(response: Serializable): List[NeoError] do
		var errors = new List[NeoError]
		if not response isa JsonArray then
			errors.add(new NeoError("Unexpected batch response format.", "Neo4jError"))
			return errors
		end
		# print " {res.length} jobs executed"
		for res in response do
			if not res isa JsonObject then
				errors.add(new NeoError("Unexpected job format in batch response.", "Neo4jError"))
				continue
			end
			var id = res["id"].as(Int)
			var job = jobs[id]
			if job.action == create_node_action then
				var node = job.entity.as(NeoNode)
				node.batch_id = null
				node.url = res["location"].to_s
			else if job.action == create_edge_action then
				var edge = job.entity.as(NeoEdge)
				edge.batch_id = null
				edge.url = res["location"].to_s
			else if job.action == load_node_data_action then
				var node = job.entity.as(NeoNode)
				node.internal_properties = res["body"].as(JsonObject)["data"].as(JsonObject)
			else if job.action == load_node_labels_action then
				var node = job.entity.as(NeoNode)
				var labels = new Array[String]
				for l in res["body"].as(JsonArray) do labels.add l.to_s
				node.internal_labels = labels
			else if job.action == load_node_in_edges_action then
				var node = job.entity.as(NeoNode)
				var edges = res["body"].as(JsonArray)
				node.internal_in_edges = new List[NeoEdge]
				for edge in edges do
					node.internal_in_edges.add client.load_edge(edge.as(JsonObject)["self"].to_s)
				end
			else if job.action == load_node_out_edges_action then
				var node = job.entity.as(NeoNode)
				var edges = res["body"].as(JsonArray)
				node.internal_out_edges = new List[NeoEdge]
				for edge in edges do
					node.internal_out_edges.add client.load_edge(edge.as(JsonObject)["self"].to_s)
				end
			end
		end
		return errors
	end

	# JobActions
	# TODO replace with enum

	private fun create_node_action: Int do return 1
	private fun create_edge_action: Int do return 2
	private fun load_node_data_action: Int do return 3
	private fun load_node_labels_action: Int do return 4
	private fun load_node_in_edges_action: Int do return 5
	private fun load_node_out_edges_action: Int do return 6
end

# A job that can be executed in a `NeoBatch`
# This is a representation of a neo job in JSON Format
#
# Each job description should contain a `to` attribute, with a value relative to the data API root
# (so http://neo4j:7474/db/data/node becomes just /node), and a `method` attribute containing
# HTTP verb to use.
#
# Optionally you may provide a `body` attribute, and an `id` attribute to help you keep track
# of responses, although responses are guaranteed to be returned in the same order the job
# descriptions are received.
class NeoJob
	# The job uniq `id`
	var id: Int
	# Entity targeted by the job
	var entity: NeoEntity

	init(id: Int, entity: NeoEntity) do
		self.id = id
		self.entity = entity
	end

	# What kind of action do the job
	# used to attach responses to original Neo objets
	private var action: nullable Int = null

	# Job HTTP method: `GET`, `POST`, `PUT`, `DELETE`...
	var method: String
	# Job service target: `/node`, `/labels` etc...
	var to: String
	# Body to send with the job service request
	var body: nullable Serializable = null

	# JSON formated job
	fun to_rest: JsonObject do
		var job = new JsonObject
		job["id"] = id
		job["method"] = method
		job["to"] = to
		if not body == null then
			job["body"] = body
		end
		return job
	end
end
