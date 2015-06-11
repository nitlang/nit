# This file is part of NIT ( http://www.nitlanguage.org ).
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
# var client = new MongoClient("mongodb://localhost:27017/")
#
# # Retrieve a collection.
# var col = client.database("test").collection("test")
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
#
# TODO Get last Object_ID
module mongodb

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
	super Finalizable

	# Native instance pointer.
	var native: NativeBSON

	# Is the native instance valid?
	#
	# This is set to false if the `native` is destroyed.
	var is_alive = true

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
		assert is_alive
		var ns = native.to_native_string
		var res = ns.to_s_with_copy
		ns.free # manual free of gc allocated NativeString
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
		assert is_alive
		return to_s.parse_json.as(JsonObject)
	end

	redef fun finalize do
		if is_alive then
			native.destroy
			is_alive = false
		end
	end
end

redef class JsonObject
	# Inits `self` from a BSON object.
	private init from_bson(bson: BSON) do recover_with(bson.to_json)

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

	# Is the native instance valid?
	#
	# This is set to false if the `native` is destroyed.
	private var is_alive = true

	# Logical domain within a library that created the error.
	fun domain: Int do
		assert is_alive
		return native.domain
	end

	# Domain specific error code.
	fun code: Int do
		assert is_alive
		return native.code
	end

	# Human readable error message.
	fun message: String do
		assert is_alive
		var ns = native.message
		var res = ns.to_s_with_copy
		ns.free
		return res
	end

	redef fun to_s do return "{message} (code: {code})"
end

# The MongoClient is used to connect to the mongo server and send queries.
#
# Usage:
#
# ~~~
# var uri = "mongodb://localhost:27017/"
# var client = new MongoClient(uri)
# assert client.server_uri == uri
# ~~~
class MongoClient
	super Finalizable

	# Server URI.
	var server_uri: String

	private var native: NativeMongoClient is noinit

	# Is the native instance valid?
	#
	# This is set to false if the `native` is destroyed.
	private var is_alive = true

	init do
		native = new NativeMongoClient(server_uri.to_cstring)
	end

	# Gets server data.
	#
	# Returns `null` if an error occured. See `last_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# assert client.server_status["process"] == "mongod"
	# ~~~
	fun server_status: nullable JsonObject do
		assert is_alive
		var nbson = native.server_status
		if nbson == null then return null
		var bson = new BSON(nbson)
		var res = new JsonObject.from_bson(bson)
		return res
	end

	# Lists available database names.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var db = client.database("test")
	# db.collection("test").insert(new JsonObject)
	# assert client.database_names.has("test")
	# ~~~
	fun database_names: Array[String] do
		assert is_alive
		var res = new Array[String]
		var nas = native.database_names
		var i = 0
		var name = nas[i]
		while not name.address_is_null do
			res.add name.to_s_with_copy
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
	# var client = new MongoClient("mongodb://localhost:27017/")
	# assert client.database("test").name == "test"
	# ~~~
	fun database(name: String): MongoDb do
		assert is_alive
		return new MongoDb(self, name)
	end

	# Close the connexion and destroy the instance.
	#
	# The reference should not be used beyond this point!
	fun close do
		assert is_alive
		finalize
	end

	redef fun finalize do
		if is_alive then
			native.destroy
			is_alive = false
		end
	end

	# Last error raised by mongoc.
	fun last_error: nullable MongoError do
		var last_error = sys.last_mongoc_error
		if last_error == null then return null
		return new MongoError(last_error)
	end
end

# A MongoDb database.
#
# Database are automatically created on the MongoDB server upon insertion of the
# first document into a collection.
# There is no need to create a database manually.
class MongoDb
	super Finalizable

	# `MongoClient` used to load this database.
	var client: MongoClient

	# The database name.
	var name: String

	private var native: NativeMongoDb is noinit

	# Is the native instance valid?
	#
	# This is set to false if the `native` is destroyed.
	private var is_alive = true

	init do
		native = new NativeMongoDb(client.native, name.to_cstring)
	end

	# Lists available collection names.
	#
	# Returns `null` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var db = client.database("test")
	# db.collection("test").insert(new JsonObject)
	# assert db.collection_names.has("test")
	# ~~~
	fun collection_names: Array[String] do
		assert is_alive
		var res = new Array[String]
		var nas = native.collection_names
		var i = 0
		var name = nas[i]
		while not name.address_is_null do
			res.add name.to_s_with_copy
			name.free
			i += 1
			name = nas[i]
		end
		return res
	end

	# Loads or creates a collection by its `name`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var db = client.database("test")
	# var col = db.collection("test")
	# assert col.name == "test"
	# ~~~
	fun collection(name: String): MongoCollection do
		assert is_alive
		return new MongoCollection(self, name)
	end

	# Checks if a collection named `name` exists.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var db = client.database("test")
	# assert not db.has_collection("qwerty")
	# ~~~
	fun has_collection(name: String): Bool do
		assert is_alive
		# TODO handle error
		return native.has_collection(name.to_cstring)
	end

	# Drop `self`, returns false if an error occured.
	fun drop: Bool do
		assert is_alive
		return native.drop
	end

	redef fun finalize do
		if is_alive then
			native.destroy
			is_alive = false
		end
	end
end

# A Mongo collection.
#
# Collections are automatically created on the MongoDB server upon insertion of
# the first document.
# There is no need to create a database manually.
class MongoCollection
	super Finalizable

	# Database that collection belongs to.
	var database: MongoDb

	# Name of this collection.
	var name: String

	private var native: NativeMongoCollection is noinit

	# Is the native instance valid?
	#
	# This is set to false if the `native` is destroyed.
	private var is_alive = true

	# Loads a collection.
	#
	# Call `MongoDb::collection` instead.
	init do
		native = new NativeMongoCollection(
			database.client.native,
			database.name.to_cstring,
			name.to_cstring)
	end

	# Inserts a new document in the collection.
	#
	# If no _id element is found in document, then a new one be generated locally
	# and added to the document.
	#
	# Returns `false` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# var doc = new JsonObject
	# doc["foo"] = 10
	# doc["bar"] = "bar"
	# doc["baz"] = new JsonArray
	# assert col.insert(doc)
	# ~~~
	fun insert(doc: JsonObject): Bool do
		assert is_alive
		return native.insert(doc.to_bson.native)
	end

	# Inserts multiple documents in the collection.
	#
	# See `insert`.
	fun insert_all(docs: Collection[JsonObject]): Bool do
		assert is_alive
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
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# var doc = new JsonObject
	# doc["foo"] = 10
	# doc["bar"] = "bar"
	# doc["baz"] = new JsonArray
	# assert col.save(doc) # will be inserted
	# ~~~
	fun save(doc: JsonObject): Bool do
		assert is_alive
		return native.save(doc.to_bson.native)
	end

	# Removes the first document that matches `selector`.
	#
	# Returns `false` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# var sel = new JsonObject
	# sel["foo"] = 10
	# assert col.remove(sel)
	# ~~~
	fun remove(selector: JsonObject): Bool do
		assert is_alive
		return native.remove(selector.to_bson.native)
	end

	# Removes all the document that match `selector`.
	#
	# See `remove`.
	fun remove_all(selector: JsonObject): Bool do
		assert is_alive
		return native.remove_all(selector.to_bson.native)
	end

	# Updates a document already existing in the collection.
	#
	# No upsert is done, see `save` instead.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# var sel = new JsonObject
	# sel["foo"] = 10
	# var upd = new JsonObject
	# upd["bar"] = "BAR"
	# assert col.update(sel, upd)
	# ~~~
	fun update(selector: JsonObject, update: JsonObject): Bool do
		assert is_alive
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
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# var query = new JsonObject
	# query["foo"] = 10
	# assert col.count(query) > 0
	# ~~~
	fun count(query: JsonObject): Int do
		assert is_alive
		return native.count(query.to_bson.native)
	end

	# Finds the first document that matches `query`.
	#
	# Returns `null` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# var query = new JsonObject
	# query["foo"] = 10
	# var doc = col.find(query)
	# assert doc["foo"] == 10
	# ~~~
	fun find(query: JsonObject): nullable JsonObject do
		assert is_alive
		var c = native.find(query.to_bson.native)
		if c == null then return null
		var cursor = new MongoCursor(c)
		if cursor.is_ok then
			cursor.next
			return cursor.item
		end
		return null
	end

	# Finds all the documents matching the `query`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# var query = new JsonObject
	# query["foo"] = 10
	# assert col.find_all(query).length > 0
	# ~~~
	fun find_all(query: JsonObject): Array[JsonObject] do
		assert is_alive
		var res = new Array[JsonObject]
		var c = native.find(query.to_bson.native)
		if c == null then return res
		var cursor = new MongoCursor(c)
		for item in cursor do res.add item
		return res
	end

	# Retrieves statistics about the collection.
	#
	# Returns `null` if an error occured. See `Sys::last_mongoc_error`.
	#
	# ~~~
	# var client = new MongoClient("mongodb://localhost:27017/")
	# var col = client.database("test").collection("test")
	# assert col.stats["ns"] == "test.test"
	# ~~~
	fun stats: nullable JsonObject do
		assert is_alive
		var bson = native.stats
		if bson == null then return null
		return new JsonObject.from_bson(new BSON(bson))
	end

	# Drops `self`, returns false if an error occured.
	fun drop: Bool do
		assert is_alive
		return native.drop
	end

	# Moves `self` to another `database`.
	#
	# The database will also be updated internally so it is safe to continue using
	# this collection after the move.
	# Additional operations will occur on moved collection.
	fun move(database: MongoDb): Bool do
		assert is_alive
		self.database = database
		return native.rename(database.name.to_cstring, name.to_cstring)
	end

	# Renames `self`.
	#
	# The name of the collection will also be updated internally so it is safe
	# to continue using this collection after the rename.
	# Additional operations will occur on renamed collection.
	fun rename(name: String): Bool do
		assert is_alive
		self.name = name
		return native.rename(database.name.to_cstring, name.to_cstring)
	end

	redef fun finalize do
		if is_alive then
			native.destroy
			is_alive = false
		end
	end
end

# A MongoDB query cursor.
#
# It wraps up the wire protocol negotation required to initiate a query and
# retreive an unknown number of documents.
class MongoCursor
	super Finalizable
	super Iterator[JsonObject]

	private var native: NativeMongoCursor

	# Is the native instance valid?
	#
	# This is set to false if the `native` is destroyed.
	private var is_alive = true

	init do next

	redef fun is_ok do
		assert is_alive
		return native.more
	end

	redef fun next do
		assert is_alive
		native.next
	end

	redef fun item do
		assert is_alive
		return new JsonObject.from_bson(new BSON(native.current))
	end

	redef fun finalize do
		if is_alive then
			native.destroy
			is_alive = false
		end
	end
end
