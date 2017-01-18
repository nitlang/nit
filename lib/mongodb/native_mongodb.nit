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

# Native wrapper for the MongoDB C Driver
#
# See [mongoc](http://api.mongodb.org/c/1.1.4/index.html).
module native_mongodb is pkgconfig "libmongoc-1.0"

import c

in "C header" `{
	#include <mongoc.h>
`}

# Wrapper for `bson_t`.
#
# All data manipulated by `mongoc` are BSON formated.
#
# The `bson_t` structure represents a BSON document.
# This structure manages the underlying BSON encoded buffer.
# For mutable documents, it can append new data to the document.
#
# See [`bson_t`](http://api.mongodb.org/libbson/current/bson_t.html).
extern class NativeBSON `{ bson_t * `}

	# Wrapper for `bson_new()`.
	#
	# The `bson_new()` function shall create a new `bson_t` structure on the heap.
	# It should be freed with `bson_destroy()` when it is no longer in use.
	new `{ return bson_new(); `}

	# Wrapper for `bson_new_from_json()`.
	#
	# The `bson_new_from_json()` function allocates and initialize a new `bson_t`
	# by parsing the JSON found in `data`.
	# Only a single JSON object may exist in data or an error will be set and
	# `NULL` returned.
	new from_json_string(data: CString) import set_mongoc_error `{
		bson_error_t error;
		bson_t *bson;
		bson = bson_new_from_json((uint8_t *)data, -1, &error);
		if(!bson) {
			NativeBSON_set_mongoc_error(bson, &error);
			return NULL;
		}
		return bson;
	`}

	# Wrapper for `bson_as_json()`.
	#
	# The `bson_as_json()` function shall encode bson as a JSON encoded UTF-8 string.
	# The caller is responsible for freeing the resulting UTF-8 encoded string
	# by calling `bson_free()` with the result.
	fun to_c_string: CString `{ return bson_as_json(self, NULL); `}

	# Wrapper for `bson_destroy()`.
	#
	# The `bson_destroy()` function shall free an allocated `bson_t` structure.
	# This function should always be called when you are done with a `bson_t`
	# unless otherwise specified.
	#
	# This instance should not be used beyond this point!
	fun destroy `{ bson_destroy(self); `}

	# Utility method to set `Sys.last_mongoc_error`.
	fun set_mongoc_error(err: BSONError) do sys.last_mongoc_error = err
end

# Wrapper for `bson_error_t`.
#
# The `bson_error_t` structure is used to encapsulate information about an error.
#
# See [`bson_error_t`](http://api.mongodb.org/libbson/current/bson_error_t.html).
extern class BSONError `{ bson_error_t * `}

	# Wrapper for `error.domain`.
	#
	# The `error.domain` field contains the logical domain within a library that
	# created the error.
	fun domain: Int `{ return self->domain; `}

	# Wrapper for `error.code`.
	#
	# The `error.code` field contains the domain specific error code.
	fun code: Int `{ return self->code; `}

	# Wrapper for `error.message`.
	#
	# The `error.message` field contains a human printable error message.
	fun message: CString `{ return self->message; `}
end

# Wrapper for `bson_oid_t`.
#
# The `bson_oid_t` structure contains the 12-byte ObjectId notation defined by the
# [BSON ObjectID specificiation](http://docs.mongodb.org/manual/reference/object-id/).
#
# ObjectId is a 12-byte BSON type, constructed using:
# * a 4-byte value representing the seconds since the Unix epoch (in Big Endian)
# * a 3-byte machine identifier
# * a 2-byte process id (Big Endian), and
# * a 3-byte counter (Big Endian), starting with a random value.
extern class BSONObjectId `{ bson_oid_t * `}

	# Generates a new `bson_oid_t`.
	new `{
		bson_oid_t *self = malloc(sizeof(bson_oid_t));
		bson_oid_init(self, NULL);
		return self;
	`}

	# Object id.
	fun id: String import CString.to_s `{
		char str[25];
		bson_oid_to_string(self, str);
		return CString_to_s(str);
	`}

	# Destroy `self`.
	fun destroy `{ free(self); `}
end

redef class Sys
	# Last error raised by `monogdb::MongoClient`.
	#
	# See `MongoClient::last_error`.
	var last_mongoc_error: nullable BSONError = null

	# Last auto generated id if any.
	#
	# See `MongoCollection::insert`.
	var last_mongoc_id: nullable BSONObjectId = null is writable
end

# Wrapper for `char**`.
#
# Used to handle array of CString returned by MongoDB.
redef class NativeCStringArray
	# Frees `self`.
	#
	# This instance should not be used beyond this point!
	fun destroy `{ free(self); `}
end

# Wrapper for `mongoc_client_t`.
#
# `mongoc_client_t` is an opaque type that provides access to a MongoDB node,
# replica-set, or sharded-cluster.
# It maintains management of underlying sockets and routing to individual nodes.
#
# See [`mongoc_client_t`](http://api.mongodb.org/c/current/mongoc_client_t.html).
extern class NativeMongoClient `{ mongoc_client_t * `}

	# Wrapper for `mongoc_client_new()`.
	#
	# Creates a new `mongoc_client_t` using the `uri` string provided.
	new(uri: CString) `{
		mongoc_init();
		return mongoc_client_new(uri);
	`}

	# Wrapper for `mongoc_client_get_server_status()`.
	#
	# Queries the server for the current server status.
	# Returns `null` if an error occured.
	fun server_status: nullable NativeBSON import set_mongoc_error, NativeBSON.as nullable `{
		bson_error_t error;
		bson_t *reply = bson_new();
		if(!mongoc_client_get_server_status(self, NULL, reply, &error)){
			NativeMongoClient_set_mongoc_error(self, &error);
			return null_NativeBSON();
		}
		return NativeBSON_as_nullable(reply);
	`}

	# Wrapper for `mongoc_client_get_database_names()`.
	#
	# This function queries the MongoDB server for a list of known databases.
	# Returns `null` if an error occured.
	fun database_names: nullable NativeCStringArray
		import set_mongoc_error, NativeCStringArray, NativeCStringArray.as nullable `{
		bson_error_t error;
		char **strv;
		if((strv = mongoc_client_get_database_names(self, &error))) {
			return NativeCStringArray_as_nullable(strv);
		}
		NativeMongoClient_set_mongoc_error(self, &error);
		return null_NativeCStringArray();
	`}

	# Wrapper for `mongoc_client_destroy()`.
	#
	# This instance should not be used beyond this point!
	fun destroy `{
		mongoc_client_destroy(self);
		mongoc_cleanup();
	`}

	# Utility method to set `Sys.last_mongoc_error`.
	fun set_mongoc_error(err: BSONError) do sys.last_mongoc_error = err
end

# Wrapper for `mongoc_database_t`.
#
# `mongoc_database_t` provides access to a MongoDB database.
# This handle is useful for actions a particular database object.
# It is not a container for `mongoc_collection_t` structures.
#
# See [`mongoc_database_t`](http://api.mongodb.org/c/current/mongoc_database_t.html).
extern class NativeMongoDb `{ mongoc_database_t * `}

	# Wrapper for `mongoc_client_get_database()`.
	#
	# Get a newly allocated `mongoc_database_t` for the database named name.
	#
	# Database are automatically created on the MongoDB server upon insertion of
	# the first document into a collection.
	# There is no need to create a database manually.
	new(client: NativeMongoClient, db_name: CString) `{
		return mongoc_client_get_database(client, db_name);
	`}

	# Wrapper for `mongoc_database_get_collection_names()`.
	#
	# Fetches a `NULL` terminated array of `NULL-byte` terminated `char*` strings
	# containing the names of all of the collections in database.
	fun collection_names: nullable NativeCStringArray
		import set_mongoc_error, NativeCStringArray, NativeCStringArray.as nullable `{
		bson_error_t error;
		char **strv;
		if((strv = mongoc_database_get_collection_names(self, &error))) {
			return NativeCStringArray_as_nullable(strv);
		}
		NativeMongoDb_set_mongoc_error(self, &error);
		return null_NativeCStringArray();
	`}

	# Wrapper for `mongoc_database_get_collection()`.
	#
	# Allocates a new `mongoc_collection_t` structure for the collection named
	# `name` in database.
	fun collection(name: CString): NativeMongoCollection `{
		return mongoc_database_get_collection(self, name);
	`}

	# Wrapper for `mongoc_database_has_collection()`.
	#
	# This function checks to see if a collection exists on the MongoDB server
	# within database.
	fun has_collection(name: CString): Bool import set_mongoc_error `{
		bson_error_t error;
		if(!mongoc_database_has_collection(self, name, &error)) {
			NativeMongoDb_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_database_drop()`.
	#
	# This function attempts to drop a database on the MongoDB server.
	fun drop: Bool import set_mongoc_error `{
		bson_error_t error;
		if(!mongoc_database_drop(self, &error)) {
			NativeMongoDb_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_database_destroy()`.
	#
	# This instance should not be used beyond this point!
	fun destroy `{ mongoc_database_destroy(self); `}

	# Utility method to set `Sys.last_mongoc_error`.
	fun set_mongoc_error(err: BSONError) do sys.last_mongoc_error = err
end

# Wrapper for `mongoc_collection_t`.
#
# `mongoc_collection_t` provides access to a MongoDB collection.
# This handle is useful for actions for most CRUD operations,
# I.e. insert, update, delete, find, etc.
#
# It is an error to call `mongoc_collection_destroy()` on a collection that has
# operations pending.
# It is required that you release `mongoc_cursor_t` structures before calling
# `mongoc_collection_destroy()`.
#
# See [`mongoc_collection_t`](http://api.mongodb.org/c/current/mongoc_collection_t.html).
extern class NativeMongoCollection `{ mongoc_collection_t * `}

	# Wrapper for `mongoc_client_get_collection()`.
	#
	# Get a newly allocated `mongoc_collection_t` for the collection named
	# `collection` in the database named `db`.
	#
	# Collections are automatically created on the MongoDB server upon insertion
	# of the first document.
	# There is no need to create a collection manually.
	new(client: NativeMongoClient, db, collection: CString) `{
		return mongoc_client_get_collection(client, db, collection);
	`}

	# Wrapper for `mongoc_collection_insert()`.
	#
	# This function shall insert `document` into the collection.
	# If no `_id` element is found in document, then a `bson_oid_t` will be
	# generated locally and added to the document.
	#
	# You can retrieve a generated `_id` from `sys.last_mongoc_id`.
	fun insert(document: NativeBSON): Bool import set_mongoc_error, set_mongoc_last_id `{
		bson_oid_t oid;
		if(!bson_has_field(document, "_id")) {
			bson_oid_init (&oid, NULL);
			BSON_APPEND_OID (document, "_id", &oid);
			NativeMongoCollection_set_mongoc_last_id(self, &oid);
		}
		bson_error_t error;
		if(!mongoc_collection_insert(self, MONGOC_INSERT_NONE, document, NULL, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_save()`.
	#
	# This function shall save a document into the collection.
	# If the document has an `_id` field it will be updated.
	# Otherwise it will be inserted.
	#
	# You can retrieve a generated `_id` from `sys.last_mongoc_id`.
	fun save(document: NativeBSON): Bool import set_mongoc_error, set_mongoc_last_id `{
		bson_oid_t oid;
		if(!bson_has_field(document, "_id")) {
			bson_oid_init (&oid, NULL);
			BSON_APPEND_OID (document, "_id", &oid);
			NativeMongoCollection_set_mongoc_last_id(self, &oid);
		}
		bson_error_t error;
		if(!mongoc_collection_save(self, document, NULL, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_remove(MONGOC_REMOVE_SINGLE_REMOVE)`.
	#
	# This function shall remove the first document in the collection that matches
	# `selector`.
	# The bson selector is not validated, simply passed along as appropriate to the server.
	fun remove(selector: NativeBSON): Bool import set_mongoc_error `{
		bson_error_t error;
		if(!mongoc_collection_remove(self, MONGOC_REMOVE_SINGLE_REMOVE, selector, NULL, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_remove(MONGOC_REMOVE_NONE)`.
	#
	# This function shall remove documents in the collection that match `selector`.
	fun remove_all(selector: NativeBSON): Bool import set_mongoc_error `{
		bson_error_t error;
		if(!mongoc_collection_remove(self, MONGOC_REMOVE_NONE, selector, NULL, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_update(MONGOC_UPDATE_NONE)`.
	#
	# This function shall update the first document in the collection that
	# matches `selector`.
	fun update(selector, update: NativeBSON): Bool import set_mongoc_error `{
		bson_error_t error;
		if(!mongoc_collection_update(self, MONGOC_UPDATE_NONE, selector, update, NULL, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_update(MONGOC_UPDATE_MULTI_UPDATE)`.
	#
	# This function shall update documents in the collection that match `selector`.
	fun update_all(selector, update: NativeBSON): Bool import set_mongoc_error `{
		bson_error_t error;
		if(!mongoc_collection_update(self, MONGOC_UPDATE_MULTI_UPDATE, selector, update, NULL, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_count()`.
	#
	# This function shall execute a count `query` on the underlying collection.
	fun count(query: NativeBSON): Int import set_mongoc_error `{
		bson_error_t error;
		int64_t count = mongoc_collection_count(self, MONGOC_QUERY_NONE, query, 0, 0, NULL, &error);
		if(count < 0) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return -1;
		}
		return count;
	`}

	# Wrapper for `mongoc_collection_find()`.
	#
	# This function shall execute a `query` on the underlying collection.
	#
	# If no options are necessary, `query` can simply contain a query such as `{a:1}`.
	#
	# If you would like to specify options such as a sort order,
	# the query must be placed inside of `{"$query": {}}`.
	fun find(query: NativeBSON, skip, limit: Int): nullable NativeMongoCursor import
		NativeMongoCursor.as nullable, set_mongoc_error `{
		bson_error_t error;
		mongoc_cursor_t	*cursor;
		cursor = mongoc_collection_find(self, MONGOC_QUERY_NONE, skip, limit, 0, query, NULL, NULL);
		if (mongoc_cursor_error(cursor, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return null_NativeMongoCursor();
		}
		return NativeMongoCursor_as_nullable(cursor);
	`}

	# Wrapper for `mongoc_collection_aggregate()`.
	#
	# This function shall execute an aggregation `pipeline` on the underlying collection.
	#
	# The `pipeline` parameter should contain a field named `pipeline` containing
	# a BSON array of pipeline stages.
	fun aggregate(pipeline: NativeBSON): nullable NativeMongoCursor import
		NativeMongoCursor.as nullable, set_mongoc_error `{
		bson_error_t error;
		mongoc_cursor_t	*cursor;
		cursor = mongoc_collection_aggregate(self, MONGOC_QUERY_NONE, pipeline, NULL, NULL);
		if (mongoc_cursor_error(cursor, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return null_NativeMongoCursor();
		}
		return NativeMongoCursor_as_nullable(cursor);
	`}

	# Wrapper for `mongoc_collection_stats()`.
	#
	# This function is a helper to retrieve statistics about the collection.
	fun stats: nullable NativeBSON import set_mongoc_error, NativeBSON.as nullable `{
		bson_error_t error;
		bson_t *reply = bson_new();
		if(!mongoc_collection_stats(self, NULL, reply, &error)){
			NativeMongoCollection_set_mongoc_error(self, &error);
			return null_NativeBSON();
		}
		return NativeBSON_as_nullable(reply);
	`}

	# Wrapper for `mongoc_collection_drop()`.
	#
	# This function requests that the `collection` be dropped,
	# including all indexes associated with the collection.
	fun drop: Bool import set_mongoc_error `{
		bson_error_t error;
		if(!mongoc_collection_drop(self, &error)) {
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_rename()`.
	#
	# This function is a helper to rename an existing collection on a MongoDB server.
	# The name of the collection will also be updated internally so it is safe
	# to continue using this collection after the rename.
	# Additional operations will occur on renamed collection.
	fun rename(new_database, new_name: CString): Bool `{
		bson_error_t error;
		if(!mongoc_collection_rename(self, new_database, new_name, false, &error)){
			NativeMongoCollection_set_mongoc_error(self, &error);
			return false;
		}
		return true;
	`}

	# Wrapper for `mongoc_collection_destroy()`.
	#
	# This instance should not be used beyond this point!
	fun destroy `{ mongoc_collection_destroy(self); `}

	# Utility method to set `Sys.last_mongoc_last_id`.
	fun set_mongoc_last_id(id: BSONObjectId) do sys.last_mongoc_id = id

	# Utility method to set `Sys.last_mongoc_error`.
	fun set_mongoc_error(err: BSONError) do sys.last_mongoc_error = err
end

# Wrapper for `mongoc_cursor_t`.
#
# `mongoc_cursor_t` provides access to a MongoDB query cursor.
# It wraps up the wire protocol negotation required to initiate a query and
# retreive an unknown number of documents.
#
# Cursors are lazy, meaning that no network traffic occurs until the first call
# to mongoc_cursor_next().
#
# At that point we can:
# * Retreive more records with repeated calls to `mongoc_cursor_next()`.
# * Test for more records with `mongoc_cursor_more()`.
# * Retrieve the document under the cursor with `mongoc_cursor_current()`.
#
# See [`mongoc_cursor_t`](http://api.mongodb.org/c/current/mongoc_cursor_t.html).
extern class NativeMongoCursor `{ mongoc_cursor_t* `}

	# Wrapper for `mongoc_cursor_current()`.
	#
	# Fetches the cursors current document or NULL if there has been an error.
	fun current: NativeBSON `{
		// As said in documentation, BSON objects should not be freed manually.
		bson_t* bson = (bson_t*) mongoc_cursor_current(self);
		// Copy BSON so we can let the GC free it automatically.
		return bson_copy(bson);
	`}

	# Wrapper for `mongoc_cursor_next()`.
	#
	# This function shall iterate the underlying cursor, setting `current` to the next
	# document.
	#
	# This function is a blocking function.
	fun next: Bool `{
		const bson_t *doc;
		return mongoc_cursor_next(self, &doc);
	`}

	# Wrapper for `mongoc_cursor_destroy()`.
	#
	# This instance should not be used beyond this point!
	fun destroy `{ mongoc_cursor_destroy(self); `}
end
