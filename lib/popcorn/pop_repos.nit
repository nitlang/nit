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
# ~~~
# # First we declare the `Book` class. It has to be serializable so it can be used
# # within a `Repository`.
#
# import popcorn
# import popcorn::pop_repos
#
# # Serializable book representation.
# class Book
#	serialize
#	super Jsonable
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
#	redef fun to_json do return serialize_to_json
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
# var mongo = new MongoClient("mongodb://localhost:27017/")
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

import serialization
import json::serialization
import mongodb

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
	fun find_all(query: nullable QUERY): Array[E] is abstract

	# Save an `instance`
	fun save(instance: E): Bool is abstract

	# Remove the instance with `id`
	fun remove_by_id(id: String): Bool is abstract

	# Remove the instance based on `query`
	fun remove(query: nullable QUERY): Bool is abstract

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
interface JsonRepository[E: Serializable]
	super Repository[E]

	redef fun serialize(item) do
		if item == null then return null
		return item.serialize_to_json
	end

	redef fun deserialize(string) do
		if string == null then return null
		var deserializer = new JsonDeserializer(string)
		return deserializer.deserialize.as(E)
	end
end

# A Repository that uses MongoDB as backend.
#
# ~~~
# import popcorn
# import popcorn::pop_routes
#
# # First, let's create a User abstraction:
#
# # Serializable user representation.
# class User
#	serialize
#	super Jsonable
#
#	# User uniq ID
#	var id: String = (new MongoObjectId).id is serialize_as "_id"
#
#	# User login
#	var login: String
#
#	# User password
#	var password: String is writable
#
#	redef fun to_s do return login
#	redef fun ==(o) do return o isa SELF and id == o.id
#	redef fun hash do return id.hash
#	redef fun to_json do return serialize_to_json
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
# var mongo = new MongoClient("mongodb://localhost:27017/")
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

	redef fun find_all(query) do
		var res = new Array[E]
		for e in collection.find_all(query or else new JsonObject) do
			res.add deserialize(e.to_json).as(E)
		end
		return res
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

	redef fun clear do return collection.drop
end

# JsonObject can be used as a `RepositoryQuery`.
#
# See `mongodb` lib.
redef class JsonObject
	super RepositoryQuery
end