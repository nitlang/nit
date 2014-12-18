# This file is part of NIT ( http://www.nitlanguage.org ).
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
# Create a new JsonStore or reuse an existing one.
# ~~~
# var store = new JsonStore("store_dir")
# ~~~
#
# JsonStore can store json of type JsonObject and JsonArray.
# ~~~
# var red = "red"
# var obj = new JsonObject
# obj["color"] = red
# obj["code"] = "FF0000"
# ~~~
#
# Data are stored under a key.
# ~~~
# var key = "colors/{red}"
# ~~~
#
# Store the object.
# ~~~
# store.store_object(key, obj)
# assert store.has_key(key)
# ~~~
#
# Load the object.
# ~~~
# var res = store.load_object(key)
# assert res["name"] == red
# ~~~
#
# Clear all stored data.
# ~~~
# store.clear
# ~~~
module store

import static

# A JsonStore can save and load json data from file system.
#
# Json files are stored under a `key`.
# This key represents the path to the json file from `store_dir`
# without the `.json` extension.
#
# Examples:
#
# * key `document` will store data under `store_dir / "document.json"`
# * key `collection/data` will store data under `store_dir / "collection/data.json"`
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
		return (store_dir / "{key}.json").file_exists
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
	private fun store_json(key: String, json: Jsonable) do
		var path = store_dir / "{key}.json"
		path.dirname.mkdir
		var file = new OFStream.open(path)
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
	private fun load_json(key: String): nullable Jsonable do
		assert has_key(key)
		var path = store_dir / "{key}.json"
		var file = new IFStream.open(path)
		var text = file.read_all
		file.close
		return text.parse_json
	end
end
