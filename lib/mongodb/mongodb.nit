# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2015 Alexandre Terrasa <alexandre@moz-code.org>
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

# MongoDB Nit Driver.
#
# This is actually a wrapper around the [MongoDB C Driver](http://api.mongodb.org/c/1.1.4/index.html).
#
# Usage:
#
# ~~~
# # Opens the connexion with the Mongo server.
# var client = new MongoClient("mongodb://mongo:27017/")
#
# # Select the database.
# var db_suffix = "NIT_TESTING_ID".environ
# var db_name = "test_{db_suffix}"
# var db = client.database(db_name)
#
# # Retrieve a collection.
# var col = db.collection("test")
#
# # Insert a document in the collection.
# var doc = new JsonObject
# doc["foo"] = 10
# doc["bar"] = "bar"
# doc["baz"] = new JsonArray
# assert col.insert(doc)
#
# # Retrieve a document from the collection.
# var query = new JsonObject
# query["foo"] = 10
# var res = col.find(query)
# assert res["bar"] == "bar"
# ~~~
module mongodb

import json::static
import json
private import native_mongodb

in "C header" `{
	#include <mongoc.h>
`}

# Everything inside MongoDB is manipulated as BSON Objects.
#
# See:
# * [Binary JSON spec](http://bsonspec.org/)
# * [Libbson](http://api.mongodb.org/libbson/1.1.4/)#
private class BSON
	super FinalizableOnce

	# Native instance pointer.
	var native: NativeBSON

	# Returns a new BSON object initialized from the content of `json`.
	#
	# ~~~
	# intrude import mongodb
	# var obj = new JsonObject
	# obj["age"] = 10
	# obj["name"] = "Rick"
	# obj["ELS"] = new JsonArray
	# var bson = new BSON.from_json(obj)
	# assert bson.to_s == """{ "age" : 10, "name" : "Rick", "ELS" : [  ] }"""
	# ~~~
	init from_json(json: JsonObject) do
		init(new NativeBSON.from_json_string(json.to_json.to_cstring))
	end

	# Returns a new BSON object parsed from `json_string`.
	#
	# If `json_string` is not a valid JSON string, this initializer returns NULL.
	#
	# ~~~
	# intrude import mongodb
	# var str = """{ "age" : 10, "name" : "Rick", "ELS" : [  ] }"""
	# var bson = new BSON.from_json_string(str)
	# assert bson.to_s == str
	# ~~~
	init from_json_string(json_string: String) do
		init(new NativeBSON.from_json_string(json_string.to_cstring))
	end

	redef fun to_s do
		var ns = native.to_c_string
		var res = ns.to_s
		ns.free # manual free of gc allocated CString
		return res
	end

	# Returns a new JsonObject from `self`.
	#
	# ~~~
	# intrude import mongodb
	# var str = """{ "age" : 10, "name" : "Rick", "ELS" : [  ] }"""
	# var bson = new BSON.from_json_string(str)
	# var json = bson.to_json
	# assert json["age"] == 10
	# assert json["name"] == "Rick"
	# assert json["ELS"].as(JsonArray).is_empty
	# ~~~
	fun to_json: JsonObject do
		var json = to_s.parse_json
		if json isa JsonParseError then
			print json.message
			sys.exit 1
		end
		return json.as(JsonObject)
	end

	redef fun finalize_once do native.destroy
end

redef class JsonObject
	# Inits `self` from a BSON object.
	private init from_bson(bson: BSON) do add_all(bson.to_json)

	# Returns a new BSON object from `self`.
	private fun to_bson: BSON do return new BSON.from_json(self)
end

# An error returned by the mongoc client.
#
# Within the client, if a method returns `false` or `null` it's more likely that
# an error occured during the execution.
#
# See `MongoClient::last_error`.
class MongoError

	private var native: BSONError

	# Logical domain within a library that created the error.
	fun domain: Int do return native.domain

	# Domain specific error code.
	fun code: Int do return native.code

	# Human readable error message.
	fun message: String do
		var ns = native.message
		var res = ns.to_s
		ns.free
		return res
	end

	redef fun to_s do return "{message} (code: {code})"
end

# MongoDB Object ID representation.
#
# For ObjectIDs, MongoDB uses the `ObjectId("hash")` notation.
# This notation is replicated by the `to_s` service.
#
# Since the MongoDB notation is not JSON complient, the mongoc wrapper uses
# a JSON based notation like `{"$oid": "hash"}`.
# This is the notation returned by the `to_json` service.
class MongoObjectId

	private var native: BSONObjectId = new BSONObjectId

	private init with_native(native: BSONObjectId) do
		self.native = native
	end

	# The unique ID as an MongoDB Object ID string.
	fun id: String do return native.id

	# Internal JSON representation of this Object ID.
	#
	# Something like `{"$oid": "5578e5dcf344225cc2378051"}`.
	fun to_json: JsonObject do
		var obj = new JsonObject
		obj["$oid"] = id
		return obj
	end

	# Formatted as `ObjectId("5578e5dcf344225cc2378051")`
	redef fun to_s do return "ObjectId({id})"
end

# The MongoClient is used to connect to the mongo server and send queries.
#
# Usage:
#
# ~~~
# var uri = "mongodb://mongo:27017/"
# var client = new MongoClient(uri)
# assert client.server_uri == uri
# ~~~
class MongoClient
	super FinalizableOnce

	# Server URI.
	var server_uri: String

	private var native: NativeMongoClient is noinit

	init do native = new NativeMongoClient(server_uri.to_cstring)

	# Gets server data.
	#
	# Returns `null` if an error occured. See `last_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# assert client.server_status["process"] == "mongod"
	# ~~~
	fun server_status: nullable JsonObject do
		var nbson = native.server_status
		if nbson == null then return null
		var bson = new BSON(nbson)
		var res = new JsonObject.from_bson(bson)
		return res
	end

	# Lists available database names.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# db.collection("test").insert(new JsonObject)
	# assert client.database_names.has(db_name)
	# ~~~
	fun database_names: Array[String] do
		var res = new Array[String]
		var nas = native.database_names
		if nas == null then return res
		var i = 0
		var name = nas[i]
		while not name.address_is_null do
			res.add name.to_s
			name.free
			i += 1
			name = nas[i]
		end
		return res
	end

	# Loads or creates a database from its `name`.
	#
	# Database are automatically created on the MongoDB server upon insertion of
	# the first document into a collection.
	# There is no need to create a database manually.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# assert db.name == db_name
	# ~~~
	fun database(name: String): MongoDb do return new MongoDb(self, name)

	# Close the connexion and destroy the instance.
	#
	# The reference should not be used beyond this point!
	fun close do finalize_once

	redef fun finalize_once do native.destroy

	# Last error raised by mongoc.
	fun last_error: nullable MongoError do
		var last_error = sys.last_mongoc_error
		if last_error == null then return null
		return new MongoError(last_error)
	end

	# Last auto generated id.
	private fun last_id: nullable MongoObjectId do
		var last_id = sys.last_mongoc_id
		if last_id == null then return null
		return new MongoObjectId.with_native(last_id)
	end

	# Set the last generated id or `null` to unset once used.
	private fun last_id=(id: nullable MongoObjectId) do
		if id == null then
			sys.last_mongoc_id = null
		else
			sys.last_mongoc_id = id.native
		end
	end
end

# A MongoDb database.
#
# Database are automatically created on the MongoDB server upon insertion of the
# first document into a collection.
# There is no need to create a database manually.
class MongoDb
	super FinalizableOnce

	# `MongoClient` used to load this database.
	var client: MongoClient

	# The database name.
	var name: String

	private var native: NativeMongoDb is noinit

	init do native = new NativeMongoDb(client.native, name.to_cstring)

	# Lists available collection names.
	#
	# Returns `null` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# db.collection("test").insert(new JsonObject)
	# assert db.collection_names.has("test")
	# ~~~
	fun collection_names: Array[String] do
		var res = new Array[String]
		var nas = native.collection_names
		if nas == null then return res
		var i = 0
		var name = nas[i]
		while not name.address_is_null do
			res.add name.to_s
			name.free
			i += 1
			name = nas[i]
		end
		return res
	end

	# Loads or creates a collection by its `name`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# assert col.name == "test"
	# ~~~
	fun collection(name: String): MongoCollection do
		return new MongoCollection(self, name)
	end

	# Checks if a collection named `name` exists.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# assert not db.has_collection("qwerty")
	# ~~~
	fun has_collection(name: String): Bool do
		# TODO handle error
		return native.has_collection(name.to_cstring)
	end

	# Drop `self`, returns false if an error occured.
	fun drop: Bool do return native.drop

	redef fun finalize_once do native.destroy
end

# A Mongo collection.
#
# Collections are automatically created on the MongoDB server upon insertion of
# the first document.
# There is no need to create a database manually.
class MongoCollection
	super FinalizableOnce

	# Database that collection belongs to.
	var database: MongoDb

	# Name of this collection.
	var name: String

	private var native: NativeMongoCollection is noinit

	# Loads a collection.
	#
	# Call `MongoDb::collection` instead.
	init do
		native = new NativeMongoCollection(
			database.client.native,
			database.name.to_cstring,
			name.to_cstring)
	end

	# Set the autogenerated last id if the `doc` does not contain one already.
	private fun set_id(doc: JsonObject) do
		var last_id = database.client.last_id
		if last_id != null then
			doc["_id"] = last_id.to_json
			database.client.last_id = null
		end
	end

	# Inserts a new document in the collection.
	#
	# If no _id element is found in document, then a new one be generated locally
	# and added to the document.
	#
	# Returns `false` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# var doc = new JsonObject
	# doc["foo"] = 10
	# doc["bar"] = "bar"
	# doc["baz"] = new JsonArray
	# assert col.insert(doc)
	# assert doc.has_key("_id")
	# ~~~
	fun insert(doc: JsonObject): Bool do
		var res = native.insert(doc.to_bson.native)
		if res then set_id(doc)
		return res
	end

	# Inserts multiple documents in the collection.
	#
	# See `insert`.
	fun insert_all(docs: Collection[JsonObject]): Bool do
		var res = true
		for doc in docs do res = insert(doc) and res
		return res
	end

	# Saves a new document in the collection.
	#
	# If the document has an `_id` field it will be updated.
	# Otherwise it will be inserted.
	#
	# Returns `false` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	#
	# var doc = new JsonObject
	# doc["foo"] = 10
	# doc["bar"] = "bar"
	# doc["baz"] = new JsonArray
	#
	# assert col.save(doc) # will be inserted
	# assert doc.has_key("_id")
	#
	# var id = doc["_id"]
	# assert col.save(doc) # will be updated
	# assert doc["_id"] == id
	# ~~~
	fun save(doc: JsonObject): Bool do
		var bson = doc.to_bson
		var nat = bson.native
		var res = native.save(nat)
		if res then set_id(doc)
		assert nat != self #FIXME used to avoid GC crashes
		assert bson != self #FIXME used to avoid GC crashes
		return res
	end

	# Removes the first document that matches `selector`.
	#
	# Returns `false` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# var sel = new JsonObject
	# sel["foo"] = 10
	# assert col.remove(sel)
	# ~~~
	fun remove(selector: JsonObject): Bool do
		return native.remove(selector.to_bson.native)
	end

	# Removes all the document that match `selector`.
	#
	# See `remove`.
	fun remove_all(selector: JsonObject): Bool do
		return native.remove_all(selector.to_bson.native)
	end

	# Updates a document already existing in the collection.
	#
	# No upsert is done, see `save` instead.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# var sel = new JsonObject
	# sel["foo"] = 10
	# var upd = new JsonObject
	# upd["bar"] = "BAR"
	# assert col.update(sel, upd)
	# ~~~
	fun update(selector: JsonObject, update: JsonObject): Bool do
		return native.update(
			selector.to_bson.native,
			update.to_bson.native)
	end

	# Updates all documents matching the `selector`.
	#
	# See `update`.
	fun update_all(selector: JsonObject, update: JsonObject): Bool do
		return native.update_all(
			selector.to_bson.native,
			update.to_bson.native)
	end

	# Counts the document matching `query`.
	#
	# Returns `-1` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# var query = new JsonObject
	# query["foo"] = 10
	# assert col.count(query) > 0
	# ~~~
	fun count(query: JsonObject): Int do
		return native.count(query.to_bson.native)
	end

	# Finds the first document that matches `query`.
	#
	# Params:
	# * `skip` number of documents to skip
	# * `limit` number of documents to return
	#
	# Returns `null` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# var query = new JsonObject
	# query["foo"] = 10
	# var doc = col.find(query)
	# assert doc["foo"] == 10
	# ~~~
	fun find(query: JsonObject, skip, limit: nullable Int): nullable JsonObject do
		var q = new NativeBSON.from_json_string(query.to_json.to_cstring)
		var s = skip or else 0
		var l = limit or else 0
		var c = native.find(q, s, l)
		q.destroy
		if c == null then return null
		var cursor = new MongoCursor(c)
		if not cursor.is_ok then
			return null
		end
		var item = cursor.item
		assert cursor != self
		return item
	end

	# Finds all the documents matching the `query`.
	#
	# Params:
	# * `skip` number of documents to skip
	# * `limit` number of documents to return
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# var query = new JsonObject
	# query["foo"] = 10
	# assert col.find_all(query).length > 0
	# ~~~
	fun find_all(query: JsonObject, skip, limit: nullable Int): Array[JsonObject] do
		var s = skip or else 0
		var l = limit or else 0
		var res = new Array[JsonObject]
		var c = native.find(query.to_bson.native, s, l)
		if c == null then return res
		var cursor = new MongoCursor(c)
		while cursor.is_ok do
			res.add cursor.item
			cursor.next
		end
		return res
	end

	# Applies an aggregation `pipeline` over the collection.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test_aggregate")
	#
	# col.drop
	#
	# col.insert("""{ "cust_id": "A123", "amount": 500, "status": "A"}""".parse_json.as(JsonObject))
	# col.insert("""{ "cust_id": "A123", "amount": 250, "status": "A"}""".parse_json.as(JsonObject))
	# col.insert("""{ "cust_id": "B212", "amount": 200, "status": "A"}""".parse_json.as(JsonObject))
	# col.insert("""{ "cust_id": "A123", "amount": 300, "status": "D"}""".parse_json.as(JsonObject))
	#
	# var res = col.aggregate("""[
	#	{ "$match": { "status": "A" } },
	#	{ "$group": { "_id": "$cust_id", "total": { "$sum": "$amount" } } },
        #       { "$sort" : { "_id": 1 } }
	# ]""".parse_json.as(JsonArray))
	#
        # assert res[0].to_json == """{"_id":"A123","total":750}"""
	# assert res[1].to_json == """{"_id":"B212","total":200}"""
	# ~~~
	fun aggregate(pipeline: JsonArray): Array[JsonObject] do
		var q = new JsonObject
		q["pipeline"] = pipeline
		var res = new Array[JsonObject]
		var c = native.aggregate(q.to_bson.native)
		if c == null then return res
		var cursor = new MongoCursor(c)
		while cursor.is_ok do
			res.add cursor.item
			cursor.next
		end
		return res
	end

	# Retrieves statistics about the collection.
	#
	# Returns `null` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://mongo:27017/")
	# var db_suffix = "NIT_TESTING_ID".environ
	# var db_name = "test_{db_suffix}"
	# var db = client.database(db_name)
	# var col = db.collection("test")
	# assert col.stats["ns"] == "{db_name}.test"
	# ~~~
	fun stats: nullable JsonObject do
		var bson = native.stats
		if bson == null then return null
		return new JsonObject.from_bson(new BSON(bson))
	end

	# Drops `self`, returns false if an error occured.
	fun drop: Bool do return native.drop

	# Moves `self` to another `database`.
	#
	# The database will also be updated internally so it is safe to continue using
	# this collection after the move.
	# Additional operations will occur on moved collection.
	fun move(database: MongoDb): Bool do
		self.database = database
		return native.rename(database.name.to_cstring, name.to_cstring)
	end

	# Renames `self`.
	#
	# The name of the collection will also be updated internally so it is safe
	# to continue using this collection after the rename.
	# Additional operations will occur on renamed collection.
	fun rename(name: String): Bool do
		self.name = name
		return native.rename(database.name.to_cstring, name.to_cstring)
	end

	redef fun finalize_once do native.destroy
end

# A MongoDB query cursor.
#
# It wraps up the wire protocol negotation required to initiate a query and
# retreive an unknown number of documents.
class MongoCursor
	super FinalizableOnce
	super Iterator[JsonObject]

	private var native: NativeMongoCursor

	init do next

	redef var is_ok = true

	redef fun next do is_ok = native.next

	redef fun item do
		return new JsonObject.from_bson(new BSON(native.current))
	end

	redef fun finalize_once do native.destroy
end
