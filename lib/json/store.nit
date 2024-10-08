# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Store and load json data.
#
# This simple system can be used to store and retrieve json data.
#
# ## Usage
#
# ### Initialization
#
# JsonStore use the file system to store and load json files.
#
# For initialization you need to give the directory used in the
# file system to save objects.
#
# ~~~
# var store = new JsonStore("store_dir")
# ~~~
#
# ### Documents
#
# With JsonStore you manage *documents*.
# Documents are simple json files that can be stored and loaded from json store.
#
# JsonStore can store documents of type JsonObject and JsonArray.
# ~~~
# var red = new JsonObject
# red["name"] = "red"
# red["code"] = "FF0000"
# ~~~
#
# Data are stored under a *key*.
# This is the path to the document from `JsonStore::store_dir`
# without the `.json` extension.
#
# Examples:
#
# * key `document` will store data under `store_dir / "document.json"`
# * key `collection/data` will store data under `store_dir / "collection/data.json"`
#
# ~~~
# var key = "colors/red"
# ~~~
#
# Store the object.
# ~~~
# store.store_object(key, red)
# ~~~
#
# Load the object.
# ~~~
# assert store.has_key(key)
# var obj = store.load_object(key)
# assert obj["name"] == obj["name"]
# ~~~
#
# ### Collections
#
# A collection is a set of documents stored under the same path.
#
# ~~~
# var green = new JsonObject
# green["name"] = "green"
# green["code"] = "00FF00"
# store.store_object("colors/green", green)
#
# assert store.has_collection("colors")
#
# var col = store.list_collection("colors")
# assert col.length == 2
# assert col.has("green")
# assert col.has("red")
# ~~~
#
# ### Clearing store
#
# You can delete all the data contained in the `JsonStore::store_dir` with `clear`.
#
# ~~~
# store.clear
# ~~~
module store

import static
import json

# A JsonStore can save and load json data from file system.
class JsonStore

	# Directory where data are stored.
	#
	# Directory is created lazilly at the first write.
	var store_dir: String

	# Delete all stored data.
	#
	# Warning: all `JsonStore` instances sharing the same `store_dir` will
	# be cleared.
	fun clear do
		if not store_dir.file_exists then return
		store_dir.rmdir
	end

	# Is there data are stored under `key`.
	fun has_key(key: String): Bool do
		return ("{store_dir}/{key}.json".simplify_path).file_exists
	end

	# Save `json` object under `key`.
	fun store_object(key: String, json: JsonObject) do
		store_json(key, json)
	end

	# Save `json` array under `key`.
	fun store_array(key: String, json: JsonArray) do
		store_json(key, json)
	end

	# Save `json` data under `key`.
	#
	# Only `JsonObject` and `JsonArray` are allowed in a json file.
	# Use `store_object` or `store_array` instead.
	private fun store_json(key: String, json: Serializable) do
		var path = "{store_dir}/{key}.json".simplify_path
		path.dirname.mkdir
		var file = new FileWriter.open(path)
		file.write(json.to_json)
		file.close
	end

	# Load a JsonObject associated to `key` from store.
	fun load_object(key: String): JsonObject do
		return load_json(key).as(JsonObject)
	end

	# Load a JsonArray associated to `key` from store.
	fun load_array(key: String): JsonArray do
		return load_json(key).as(JsonArray)
	end

	# Load a JsonObject associated to `key` from store.
	#
	# Ensure `has_data(key)`
	private fun load_json(key: String): nullable Serializable do
		assert has_key(key)
		var path = "{store_dir}/{key}.json".simplify_path
		var file = new FileReader.open(path)
		var text = file.read_all
		file.close
		return text.parse_json
	end

	# Get the list of keys stored under the collection `key`.
	fun list_collection(key: String): JsonArray do
		var res = new JsonArray
		var coll = ("{store_dir}/{key}".simplify_path).to_path
		if not coll.exists or not coll.stat.is_dir then return res
		for file in coll.files do
			if file.to_s.has_suffix(".json") then
				res.add(file.to_s.basename(".json"))
			end
		end
		return res
	end

	# Does `key` matches a collection?
	fun has_collection(key: String): Bool do
		var path = ("{store_dir}/{key}".simplify_path).to_path
		return path.exists and path.stat.is_dir
	end
end
