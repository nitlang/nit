# This file is part of NIT ( https://nitlanguage.org ).
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

import neo4j

# key used to loosely assume unicity and prevent conflicting db accesses
var key = "NIT_TESTING_ID".environ.to_i

var andres = new NeoNode
andres.labels.add_all(["PERSON", "MALE"])
andres["name"] = "Andres"
andres["age"] = 24
andres["status"] = true
andres["groups"] = new JsonArray.from([1, 2, 3])
andres["key"] = key

var kate = new NeoNode
kate.labels.add_all(["PERSON", "FEMALE"])
kate["name"] = "Kate"
kate["age"] = 25
kate["status"] = false

var loves = new NeoEdge(andres, "LOVES", kate)
loves["since"] = 1999

var client = new Neo4jClient("http://neo4j:7474")
assert client.is_ok

# Clear the previous objects, if any
client.cypher(
	new CypherQuery.from_string(
		"MATCH (n) WHERE n.key = \{key\} OPTIONAL MATCH n-[r]-() DELETE r, n"
	).set("key", key)
)

print "# Save batch\n"

var batch = new NeoBatch(client)
batch.save_node(andres)
batch.save_node(kate)
batch.save_edge(loves)
var errors = batch.execute

assert errors.is_empty
assert andres.is_linked
assert kate.is_linked
assert loves.is_linked

var andres_url = andres.url.to_s
var kate_url = kate.url.to_s
var loves_url = loves.url.to_s

client = new Neo4jClient("http://neo4j:7474")
assert client.is_ok

# Read Andres
var res4 = client.load_node(andres_url)
assert res4.is_linked
print res4["name"].to_s
print res4["age"].to_s
print res4["status"].to_s
print res4["groups"].to_json
print res4.labels.join(" ")
assert res4.in_edges.is_empty
assert not res4.out_edges.is_empty

# Read Kate
var res5 = client.load_node(kate_url)
assert res5.is_linked
print res5["name"].to_s
print res5["age"].to_s
print res5["status"].to_s
print res5.labels.join(" ")
assert not res5.in_edges.is_empty
assert res5.out_edges.is_empty

# Read LOVES
var res6 = client.load_edge(loves_url)
assert res6.is_linked
print res6.rel_type.to_s
print res6["since"].to_s
print "{res4["name"].to_s} LOVES {res4.out_nodes("LOVES").first["name"].to_s}"
print "{res5["name"].to_s} IS LOVED BY {res5.in_nodes("LOVES").first["name"].to_s}"

# Test Cypher
var query = (new CypherQuery).
	nmatch("(n: MALE)-[r: LOVES]->(m)").
	nwhere("n.name = 'Andres'").
	nand("n.key = \{key\}").
	nreturn("n, r, m").
	set("key", key)
var res7 = client.cypher(query)
assert res7.as(JsonObject)["data"].as(JsonArray).length == 1

