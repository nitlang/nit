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
# For ease of use and testing this module provide a wrapper to the `neo4j` command:
#
#     # Start the Neo4j server
#     var srv = new Neo4jServer
#     assert srv.start
#
# In order to connect to Neo4j you need a connector:
#
#    # Create new Neo4j client
#    var client = new Neo4jClient("http://localhost:7474")
#    assert client.base_url == "http://localhost:7474"
#
# The fundamental units that form a graph are nodes and relationships.
#
# Nodes are used to represent entities stored in base:
#
#    # Create a disconnected node
#    var andres = new NeoNode
#    andres["name"] = "Andres"
#    andres.create(client)
#    assert andres.is_linked
#    #
#    # Connect the node to Neo4j
#    andres.create(client)	# create the node in Neo4j
#    assert andres.is_linked
#    #
#    # Create a second node
#    var kate = new NeoNode
#    kate["name"] = "Kate"
#    kate.create(client)
#    assert kate.is_linked
#
# Relationships between nodes are a key part of a graph database.
# They allow for finding related data. Just like nodes, relationships can have properties.
#
#    # Create a relationship
#    var loves = new NeoEdge(andres, "LOVES", kate)
#    loves.create(client)	# create the edge in Neo4j
#    assert loves.is_linked
#
# Nodes can be loaded fron Neo4j
#
#    # Get a node from DB and explore edges
#    var url = andres.url.to_s
#    var from = new NeoNode.from_neo(client, url)
#    assert from["name"].to_s == "Andres"
#    var to = from.out("LOVES").first		# follow the first LOVES relationship
#    assert to["name"].to_s == "Kate"
#
# For more details, see http://docs.neo4j.org/chunked/milestone/rest-api.html
module neo4j

import curl

# Handles Neo4j server start and stop command
#
# `neo4j` binary must be in `PATH` in order to work
class Neo4jServer
	fun start: Bool do
		sys.system("neo4j start console")
		return true
	end

	fun stop: Bool do
		sys.system("neo4j stop")
		return true
	end
end

# Neo4j connector to REST API
class Neo4jClient

	# Neo4j service base url
	var base_url: String

	private var node_url: String
	private var batch_url: String
	private var label_url: String
	private var cypher_url: String

	private var curl = new Curl

	init(base_url: String) do
		self.base_url = base_url
		self.node_url = "{base_url}/db/data/node"
		self.batch_url = "{base_url}/db/data/batch"
		self.label_url = "{base_url}/db/data/label"
		self.cypher_url = "{base_url}/db/data/cypher"
	end

	# Empty the graph DB
	fun clear_graph do
		cypher(new CypherQuery.from_string("START r=relationship(*) DELETE r"))
		cypher(new CypherQuery.from_string("START n=node(*) DELETE n"))
	end

	# Retrieve all nodes with the specified label
	fun nodes_with_label(lbl: String): Array[NeoNode] do
		var res = get("{label_url}/{lbl}/nodes")
		var nodes = new Array[NeoNode]
		for obj in res.as(JsonArray) do
			nodes.add new NeoNode.from_json(self, obj.as(JsonObject))
		end
		return nodes
	end

	# Perform a `CypherQuery`
	# see: CypherQuery
	fun cypher(query: CypherQuery): Jsonable do
		return post("{cypher_url}", query.to_json)
	end

	# GET JSON data from `url`
	fun get(url: String): Jsonable do
		var request = new JsonGET(url, curl)
		var response = request.execute
		return parse_response(response)
	end

	# POST `params` to `url`
	fun post(url: String, params: Jsonable): Jsonable do
		var request = new JsonPOST(url, curl)
		request.data = params
		var response = request.execute
		return parse_response(response)
	end

	# PUT `params` at `url`
	fun put(url: String, params: Jsonable): Jsonable do
		var request = new JsonPUT(url, curl)
		request.data = params
		var response = request.execute
		return parse_response(response)
	end

	# DELETE `url`
	fun delete(url: String): Jsonable do
		var request = new JsonDELETE(url, curl)
		var response = request.execute
		return parse_response(response)
	end

	# Parse the cURL `response` as a JSON string
	private fun parse_response(response: CurlResponse): Jsonable do
		if response isa CurlResponseSuccess then
			if response.body_str.is_empty then
				return new JsonObject
			else
				var str = response.body_str
				var res = str.json_to_nit_object
				if res == null then
					# empty response wrap it in empty object
					return new JsonObject
				else if res isa JsonObject and res.has_key("exception") then
					var error = "Neo4jError::{res["exception"] or else "null"}"
					var msg = ""
					if res.has_key("message") then
						msg = res["message"].to_s
					end
					return new JsonError(error, msg.to_json)
				else
					return res
				end
			end
		else if response isa CurlResponseFailed then
			return new JsonError("Curl error", "{response.error_msg} ({response.error_code})")
		else
			return new JsonError("Curl error", "Unexpected response '{response}'")
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
#    var client = new Neo4jClient("http://localhost:7474")
#    var query = new CypherQuery
#    query.nmatch("(n)-[r:LOVES]->(m)")
#    query.nwhere("n.name=\"Andres\"")
#    query.nreturn("m.name")
#    var res = client.cypher(query).as(JsonObject)
#    assert res["data"].as(JsonArray).first.as(JsonArray).first == "Kate"
#
# For more details, see: http://docs.neo4j.org/chunked/milestone/rest-api-cypher.html
class CypherQuery
	# Query string to perform
	private var query: String

	# `params` to embed in the query like in prepared statements
	var params = new JsonObject

	init do
		self.query = ""
	end

	# init the query from a query string
	init from_string(query: String) do
		self.query = query
	end

	# init the query with parameters
	init with_params(params: JsonObject) do
		self.params = params
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

	# Translate the query to JSON
	fun to_json: JsonObject do
		var obj = new JsonObject
		obj["query"] = query
		if not params.is_empty then
			obj["params"] = params
		end
		return obj
	end

	redef fun to_s do return to_json.to_s
end

# The fundamental units that form a graph are nodes and relationships.
#
# Entities can have two states:
#
# * linked: the NeoEntity references an existing node or edge in Neo4j
# * unlinked: the NeoEntity is not yet created in Neo4j
#
# If the entity is initialized without `from_neo` it stays unlinked from neo4j:
#
#    # Create a disconnected node
#    var andres = new NeoNode
#    andres["name"] = "Andres"
#    # At this point, the node is not linked
#    assert not andres.is_linked
#
# Then we can link the entity to the base:
#
#     # Init client
#     var client = new Neo4jClient("http://localhost:7474")
#     # Create the node in Neo4j
#     andres.create(client)
#     # The node is now linked
#     assert andres.is_linked
#
# Entities can also be loaded from Neo4j:
#
#     # Get a node from Neo4j
#     var url = andres.url.to_s
#     var node = new NeoNode.from_neo(client, url)
#     assert node.is_linked
#
# When working in connected mode, all reading operations are executed lazily on the base:
#
#     # Get the node `name` property
#     assert node["name"] == "Andres"	# loaded lazily from base
abstract class NeoEntity
	# Neo4j client connector
	private var neo: Neo4jClient

	# Entity unique URL in Neo4j REST API
	var url: nullable String

	# Temp id used in batch mode to update the entity
	private var batch_id: nullable Int = null

	# Load the entity from base
	init from_neo(neo: Neo4jClient, url: String) do
		self.neo = neo
		self.url = url
	end

	# Init entity from JSON representation
	#
	#     var client = new Neo4jClient("http://localhost:7474")
	#     #
	#     var json = new JsonObject
	#     json["self"] = "http://localhost:7474/db/data/node/171"
	#     json["data"] = new JsonObject
	#     #
	#     var node = new NeoNode.from_json(client, json)
	#     assert node.url == "http://localhost:7474/db/data/node/171"
	#     assert node.properties.is_empty
	init from_json(neo: Neo4jClient, obj: JsonObject) do
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
		var obj = neo.get("{url.to_s}/properties").as(JsonObject)
		internal_properties = obj
		return obj
	end

	# Create the entity in base
	#
	#     # Init client
	#     var client = new Neo4jClient("http://localhost:7474")
	#     #
	#     # Create a node
	#     var andres = new NeoNode
	#     andres["name"] = "Andres"
	#     andres.create(client)	# create the node in Neo4j
	#     assert andres.is_linked
	#
	# Once linked, entities cannot be created twice:
	#
	#     var oldurl = andres.url
	#     andres.create(client)	# do nothing
	#     assert andres.url == oldurl
	fun create(neo: Neo4jClient) is abstract

	# Remove the entity in base and unlink it
	# REQUIRE: `self.is_linked`
	fun delete do
		assert self.is_linked
		neo.delete(url.to_s)
		url = null
	end

	# Get the entity `id` if connected to base
	fun id: nullable Int do
		if url == null then return null
		return url.split("/").last.to_i
	end

	# Get the entity property at `key`
	fun [](key: String): nullable Jsonable do
		if not properties.has_key(key) then return null
		return properties[key]
	end

	# Set the entity property `value` at `key`
	fun []=(key: String, value: nullable Jsonable) do properties[key] = value

	# Is the property `key` set?
	fun has_key(key: String): Bool do return properties.has_key(key)

	# Translate `self` to JSON
	fun to_json: JsonObject do return properties
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
#    var client = new Neo4jClient("http://localhost:7474")
#    #
#    var andres = new NeoNode
#    andres.labels.add "Person"
#    andres["name"] = "Andres"
#    andres["age"] = 22
#    andres.create(client)	# link node to Neo4j
#    assert andres.is_linked
#
# Get nodes from Neo4j:
#
#    var url = andres.url.to_s
#    var node = new NeoNode.from_neo(client, url)
#    assert node["name"] == "Andres"
#    assert node["age"].to_s.to_i	== 22
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
		var tpl = new Template
		tpl.add "\{"
		tpl.add "labels: [{labels.join(", ")}],"
		tpl.add "data: {to_json}"
		tpl.add "\}"
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
		var res = neo.get("{url.to_s}/labels")
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
		var res = neo.get("{url.to_s}/relationships/in").as(JsonArray)
		for obj in res do
			edges.add(new NeoEdge.from_json(neo.as(not null), obj.as(JsonObject)))
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
		var res = neo.get("{url.to_s}/relationships/out").as(JsonArray)
		for obj in res do
			edges.add(new NeoEdge.from_json(neo, obj.as(JsonObject)))
		end
		internal_out_edges = edges
		return edges
	end

	# Get nodes pointed by `self` following a `rel_type` edge
	fun out(rel_type: String): Array[NeoNode] do
		var res = new Array[NeoNode]
		for edge in out_edges do
			if edge.rel_type == rel_type then res.add edge.to
		end
		return res
	end

	redef fun create(neo) do
		if is_linked then return
		self.neo = neo
		var batch = new NeoBatch(neo)
		batch.create_node(self)
		batch.create_edges(self.out_edges)
		batch.execute
	end
end

# A relationship between two nodes.
# Relationships between nodes are a key part of a graph database.
# They allow for finding related data. Just like nodes, relationships can have properties.
#
# Create a relationship:
#
#    var client = new Neo4jClient("http://localhost:7474")
#    # Create nodes
#    var andres = new NeoNode
#    andres["name"] = "Andres"
#    var kate = new NeoNode
#    kate["name"] = "Kate"
#    # Create a relationship of type `LOVES`
#    var loves = new NeoEdge(andres, "LOVES", kate)
#    loves.create(client)	# create the edge in Neo4j
#    assert loves.is_linked
#
# Get an edge from DB:
#
#    var url = loves.url.to_s
#    var edge = new NeoEdge.from_neo(client, url)
#    assert edge.from["name"].to_s == "Andres"
#    assert edge.to["name"].to_s == "Kate"
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

	init from_neo(neo, url) do
		super
		var obj = neo.get(url.as(not null)).as(JsonObject)
		self.internal_type = obj["type"].to_s
		self.internal_from_url = obj["start"].to_s
		self.internal_to_url = obj["end"].to_s
	end

	init from_json(neo, obj) do
		super
		self.internal_type = obj["type"].to_s
		self.internal_from_url = obj["start"].to_s
		self.internal_to_url = obj["end"].to_s
	end

	# Get `from` node
	fun from: NeoNode do return internal_from or else load_from

	private fun load_from: NeoNode do
		var node = new NeoNode.from_neo(neo, internal_from_url.to_s)
		internal_from = node
		return node
	end

	# Get `to` node
	fun to: NeoNode do return internal_to or else load_to

	private fun load_to: NeoNode do
		var node = new NeoNode.from_neo(neo, internal_to_url.to_s)
		internal_to = node
		return node
	end

	# Get edge type
	fun rel_type: nullable String do return internal_type

	redef fun create(neo) do
		self.neo = neo
		if from.url == null then from.create(neo)
		from.out_edges.add self
		if to.url == null then to.create(neo)
		to.in_edges.add self
		var res = neo.post("{from.url.to_s}/relationships", to_json)
		self.url = res.as(JsonObject)["self"].to_s
	end

	redef fun to_json do
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
#    var client = new Neo4jClient("http://localhost:7474")
#    #
#    var node1 = new NeoNode
#    var node2 = new NeoNode
#    var edge = new NeoEdge(node1, "TO", node2)
#    #
#    var batch = new NeoBatch(client)
#    batch.create_node(node1)
#    batch.create_node(node2)
#    batch.create_edge(edge)
#    batch.execute
#    #
#    assert node1.is_linked
#    assert node2.is_linked
#    assert edge.is_linked
#
# Don't forget to shutdown the server when finished:
#
#    var srv = new Neo4jServer
#    assert srv.stop
class NeoBatch

	# Neo4j client connector
	var client: Neo4jClient

	# Jobs to perform in this batch
	#
	# The batch service expects an array of job descriptions as input,
	# each job description describing an action to be performed via the normal server API.
	var jobs = new JsonArray

	# Append a new job to the batch in JSON Format
	#
	# Each job description should contain a `to` attribute, with a value relative to the data API root
	# (so http://localhost:7474/db/data/node becomes just /node), and a `method` attribute containing
	# HTTP verb to use.
	#
	# Optionally you may provide a `body` attribute, and an `id` attribute to help you keep track
	# of responses, although responses are guaranteed to be returned in the same order the job
	# descriptions are received.
	fun add_job(job: JsonObject) do jobs.add job

	private var nodes = new HashMap[Int, NeoNode]

	# Create a node in batch mode
	# also create labels and edges
	fun create_node(node: NeoNode) do
		if node.id != null or node.batch_id != null then return
		var id = jobs.length
		node.batch_id = id
		nodes[id] = node
		# create node
		var job = new JsonObject
		job["id"] = id
		job["method"] = "POST"
		job["to"] = "/node"
		job["body"] = node.properties
		add_job job
		# add labels
		job = new JsonObject
		job["id"] = jobs.length
		job["method"] = "POST"
		job["to"] = "\{{id}\}/labels"
		job["body"] = new JsonArray.from(node.labels)
		add_job job
		# add edges
		create_edges(node.out_edges)
	end

	# Create multiple nodes
	# also create labels and edges
	fun create_nodes(nodes: Collection[NeoNode]) do
		for node in nodes do create_node(node)
	end

	private var edges = new HashMap[Int, NeoEdge]

	# Create an edge
	# nodes `edge.from` and `edge.to` will be created if not in base
	fun create_edge(edge: NeoEdge) do
		if edge.from.id == null and edge.from.batch_id == null then
			# print "create unexisting `from` node:"
			# print edge.from
			create_node(edge.from)
		end
		if edge.to.id == null and edge.to.batch_id == null then
			# print "create unexisting `to` node:"
			# print edge.to
			create_node(edge.to)
		end

		var id = jobs.length
		edges[id] = edge
		var job = new JsonObject
		job["id"] = id
		job["method"] = "POST"
		if edge.from.id != null then
			job["to"] = "/node/{edge.from.id.to_s}/relationships"
		else
			job["to"] = "\{{edge.from.batch_id.to_s}\}/relationships"
		end
		job["body"] = edge.to_json
		add_job job
	end

	# Create multiple edges
	fun create_edges(edges: Collection[NeoEdge]) do
		for edge in edges do create_edge(edge)
	end

	# Execute the batch and update local nodes
	fun execute: Jsonable do
		var request = new JsonPOST(client.batch_url, client.curl)
		# request.headers["X-Stream"] = "true"
		request.data = jobs
		var response = request.execute
		var res = client.parse_response(response)
		finalize_batch(res)
		return res
	end

	private fun finalize_batch(res: Jsonable): List[JsonError] do
		var errors = new List[JsonError]
		if not res isa JsonArray then
			errors.add(new JsonError("Neo4jError", "Unexpected batch response format"))
			return errors
		end
		# print " {res.length} jobs executed"
		for job in res do
			if not job isa JsonObject then
				errors.add(new JsonError("Neo4jError", "Unexpected job format in batch response"))
				continue
			end
			var id = job["id"].as(Int)
			if job["from"] == "/node" then
				var node = nodes[id]
				node.batch_id = null
				node.url = job["location"].to_s
				# print " ({id}) new node {node.url.to_s}"
			# else if job["from"].to_s.has_suffix("/labels") then
				# print " ({id}) add label to {job["from"].to_s}"
			else if job["from"].to_s.has_suffix("/relationships") then
				var edge = edges[id]
				edge.batch_id = null
				edge.url = job["location"].to_s
				# print " ({id}) add edge from {edge.from.id} to {edge.to.id}"
			end
		end
		return errors
	end
end

