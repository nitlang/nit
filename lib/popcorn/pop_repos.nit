# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

# Repositories for data management.
#
# Repositories are used to apply persistence on instances (or **documents**).
# Using repositories one can store and retrieve instance in a clean and maintenable
# way.
#
# This module provides the base interface `Repository` that defines the persistence
# services available in all kind of repos.
# `JsonRepository` factorizes all repositories dedicated to Json data or objects
# serializable to Json.
#
# `MongoRepository` is provided as a concrete example of repository.
# It implements all the services from `Repository` using a Mongo database as backend.
#
# Repositories can be used in Popcorn app to manage your data persistence.
# Here an example with a book management app:
#
# ~~~nitish
# # First we declare the `Book` class. It has to be serializable so it can be used
# # within a `Repository`.
#
# import popcorn
# import popcorn::pop_repos
# import popcorn::pop_json
#
# # Serializable book representation.
# class Book
#	serialize
#
#	# Book uniq ID
#	var id: String = (new MongoObjectId).id is serialize_as "_id"
#
#	# Book title
#	var title: String
#
#	# ... Other fields
#
#	redef fun to_s do return title
#	redef fun ==(o) do return o isa SELF and id == o.id
#	redef fun hash do return id.hash
# end
#
# # We then need to subclass the `MongoRepository` to provide Book specific services.
#
# # Book repository for Mongo
# class BookRepo
#	super MongoRepository[Book]
#
#	# Find books by title
#	fun find_by_title(title: String): Array[Book] do
#		var q = new JsonObject
#		q["title"] = title
#		return find_all(q)
#	end
# end
#
# # The repository can be used in a Handler to manage book in a REST API.
#
# class BookHandler
#	super Handler
#
#	var repo: BookRepo
#
#	# Return a json array of all books
#	#
#	# If the get parameters `title` is provided, returns a json array of books
#	# matching the `title`.
#	redef fun get(req, res) do
#		var title = req.string_arg("title")
#		if title == null then
#			res.json new JsonArray.from(repo.find_all)
#		else
#			res.json new JsonArray.from(repo.find_by_title(title))
#		end
#	end
#
#	# Insert a new Book
#	redef fun post(req, res) do
#		var title = req.string_arg("title")
#		if title == null then
#			res.error 400
#			return
#		end
#		var book = new Book(title)
#		repo.save book
#		res.json book
#	end
# end
#
# # Let's wrap it all together in a Popcorn app:
#
# # Init database
# var mongo = new MongoClient("mongodb://mongo:27017/")
# var db = mongo.database("tests_app_{100000.rand}")
# var coll = db.collection("books")
#
# # Init app
# var app = new App
# var repo = new BookRepo(coll)
# app.use("/books", new BookHandler(repo))
# app.listen("localhost", 3000)
# ~~~
module pop_repos

import popcorn::pop_config
import serialization
import json
import mongodb::queries

redef class AppConfig

	# Default database host string for MongoDb
	var default_db_host = "mongodb://mongo:27017/"

	# Default database hostname
	var default_db_name = "popcorn"

	# MongoDb host name
	var opt_db_host = new OptionString("MongoDb host", "--db-host")

	# MongoDb database name
	var opt_db_name = new OptionString("MongoDb database name", "--db-name")

	# MongoDB server used for data persistence
	fun db_host: String do return opt_db_host.value or else ini["db.host"] or else default_db_host

	# MongoDB DB used for data persistence
	fun db_name: String do return opt_db_name.value or else ini["db.name"] or else default_db_name

	init do
		super
		add_option(opt_db_host, opt_db_name)
	end

	# Mongo db client
	var client = new MongoClient(db_host) is lazy

	# Mongo db instance
	var db: MongoDb = client.database(db_name) is lazy
end

# A Repository is an object that can store serialized instances.
#
# Repository is the base class of all kind of persistance processes. It offers
# the base CRUD services to save (add/update), find and delete instances.
#
# Instances are stored in their serialized form. See the `serialization` package
# for more documentation.
interface Repository[E: Serializable]

	# Kind of queries accepted
	#
	# Can be redefined to accept more precise queries depending on the backend used.
	type QUERY: RepositoryQuery

	# Find an instance by it's `id`
	#
	# `id` is an abstract thing at this stage
	# TODO maybe introduce the `PrimaryKey` concept?
	fun find_by_id(id: String): nullable E is abstract

	# Find an instance based on `query`
	fun find(query: QUERY): nullable E is abstract

	# Find all instances based on `query`
	#
	# Using `query` == null will retrieve all the document in the repository.
	fun find_all(query: nullable QUERY, skip, limit: nullable Int): Array[E] is abstract

	# Count instances that matches `query`
	fun count(query: nullable QUERY): Int is abstract

	# Save an `instance`
	fun save(instance: E): Bool is abstract

	# Remove the instance with `id`
	fun remove_by_id(id: String): Bool is abstract

	# Remove the instance based on `query`
	fun remove(query: nullable QUERY): Bool is abstract

	# Remove all the instances matching on `query`
	fun remove_all(query: nullable QUERY): Bool is abstract

	# Remove all instances
	fun clear: Bool is abstract

	# Serialize an `instance` to a String.
	fun serialize(instance: nullable E): nullable String is abstract

	# Deserialize a `string` to an instance.
	fun deserialize(string: nullable String): nullable E is abstract
end

# An abstract Query representation.
#
# Since the kind of query available depends on the database backend choice or
# implementation, this interface is used to provide a common type to all the
# queries.
#
# Redefine `Repository::QUERY` to use your own kind of query.
interface RepositoryQuery end

# A Repository for JsonObjects.
#
# As for document oriented databases, Repository can be used to store and retrieve
# Json object.
# Serialization from/to Json is used to translate from/to nit instances.
#
# See `MongoRepository` for a concrete implementation example.
abstract class JsonRepository[E: Serializable]
	super Repository[E]

	redef fun serialize(item) do
		if item == null then return null
		var stream = new StringWriter
		var serializer = new RepoSerializer(stream)
		serializer.serialize item
		stream.close
		return stream.to_s
	end

	redef fun deserialize(string) do
		if string == null then return null
		var deserializer = new JsonDeserializer(string)
		return deserializer.deserialize.as(E)
	end
end

private class RepoSerializer
	super JsonSerializer

	# Remove caching when saving refs to db
	redef fun serialize_reference(object) do serialize object
end

# A Repository that uses MongoDB as backend.
#
# ~~~nitish
# import popcorn
# import popcorn::pop_repos
# import popcorn::pop_json
#
# # First, let's create a User abstraction:
#
# # Serializable user representation.
# class User
#	super RepoObject
#	serialize
#
#	# User login
#	var login: String
#
#	# User password
#	var password: String is writable
#
#	redef fun to_s do return login
# end
#
# # We then need to subclass the `MongoRepository` to provide User specific services:
#
# # User repository for Mongo
# class UserRepo
#	super MongoRepository[User]
#
#	# Find a user by its login
#	fun find_by_login(login: String): nullable User do
#		var q = new JsonObject
#		q["login"] = login
#		return find(q)
#	end
# end
#
# # The repository can then be used with User instances:
#
# # Init database
# var mongo = new MongoClient("mongodb://mongo:27017/")
# var db = mongo.database("tests")
# var coll = db.collection("test_pop_repo_{100000.rand}")
#
# # Create a user repo to store User instances
# var repo = new UserRepo(coll)
#
# # Create some users
# repo.save(new User("Morriar", "1234"))
# repo.save(new User("Alex", "password"))
#
# assert repo.find_all.length == 2
# assert repo.find_by_login("Morriar").password == "1234"
# repo.clear
# assert repo.find_all.length == 0
# ~~~
class MongoRepository[E: Serializable]
	super JsonRepository[E]

	redef type QUERY: JsonObject

	# MongoDB collection used to store objects
	var collection: MongoCollection

	redef fun find_by_id(id) do
		var query = new JsonObject
		query["_id"] = id
		return find(query)
	end

	redef fun find(query) do
		var res = collection.find(query)
		if res == null then return null
		return deserialize(res.to_json)
	end

	redef fun find_all(query, skip, limit) do
		var res = new Array[E]
		for e in collection.find_all(query or else new JsonObject, skip, limit) do
			res.add deserialize(e.to_json).as(E)
		end
		return res
	end

	redef fun count(query) do
		return collection.count(query or else new JsonObject)
	end

	redef fun save(item) do
		var json = serialize(item).as(String)
		var obj = json.parse_json.as(JsonObject)
		return collection.save(obj)
	end

	redef fun remove_by_id(id) do
		var query = new JsonObject
		query["_id"] = id
		return remove(query)
	end

	redef fun remove(query) do
		return collection.remove(query or else new JsonObject)
	end

	redef fun remove_all(query) do
		return collection.remove_all(query or else new JsonObject)
	end

	redef fun clear do return collection.drop

	# Perform an aggregation query over the repo.
	fun aggregate(pipeline: JsonArray): Array[E] do
		var res = new Array[E]
		for obj in collection.aggregate(pipeline) do
			var instance = deserialize(obj.to_json)
			if instance == null then continue
			res.add instance
		end
		return res
	end
end

# Base serializable entity that can go into a JsonRepository
#
# Provide boiler plate implementation of all object serializable to json.
#
# `id` is used as a primary key for `find_by_id`.
#
# Subclassing RepoObject makes it easy to create a serializable class:
# ~~~
# import popcorn::pop_repos
#
# class Album
#	super RepoObject
#	serialize
#
#	var title: String
#	var price: Float
# end
# ~~~
#
# Do not forget the `serialize` annotation else the fields will not be serialized.
#
# It is also possible to redefine the `id` primary key to use your own:
# ~~~
# import popcorn::pop_repos
#
# class Order
#	super RepoObject
#	serialize
#
#	redef var id = "order-{get_time}"
#
#	# ...
#
# end
# ~~~
abstract class RepoObject
	serialize

	# `self` unique id.
	#
	# This attribute is serialized under the key `_id` to be used
	# as primary key by MongoDb
	var id: String = (new MongoObjectId).id is writable, serialize_as "_id"

	# Base object comparison on ID
	#
	# Because multiple deserialization can exists of the same instance,
	# we use the ID to determine if two object are the same.
	redef fun ==(o) do return o isa SELF and id == o.id

	redef fun hash do return id.hash
	redef fun to_s do return id
end

# JsonObject can be used as a `RepositoryQuery`.
#
# See `mongodb` lib.
redef class JsonObject
	super RepositoryQuery
end
