# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Dynamic interface to read JSON strings.
#
# `String::to_json_value` returns a `JsonValue` which can be queried
# to get the underlying JSON data.
module dynamic

import error
private import static

# Wraps a JSON value.
#
# Offer methods to query the type, to dynamicaly cast the underlying value and
# to query elements (in case of a JSON object or a JSON array).
#
# Use `String::to_json_value` to get a `JsonValue` from a string.
class JsonValue

	# The wrapped JSON value.
	var value: nullable Object

	# Is this value null?
	#
	#     assert "null".to_json_value.is_null
	#     assert not "123".to_json_value.is_null
	fun is_null: Bool do return value == null

	# Is this value an integer?
	#
	#     assert "123".to_json_value.is_int
	#     assert not "1.23".to_json_value.is_int
	#     assert not "\"str\"".to_json_value.is_int
	fun is_int: Bool do return value isa Int

	# Get this value as a `Int`
	#
	# require: `self.is_int`
	#
	#     assert "-10".to_json_value.to_i == -10
	#     assert "123".to_json_value.to_i == 123
	fun to_i: Int do return value.as(Int)

	# Is this value a float?
	#
	#     assert "0.0".to_json_value.is_float
	#     assert "123.456".to_json_value.is_float
	#     assert not "123".to_json_value.is_float
	fun is_float: Bool do return value isa Float

	# Get this value as a `Float`
	#
	# require: `self.is_float`
	#
	#     assert "0.0".to_json_value.to_f == 0.0
	#     assert "123.456".to_json_value.to_f == 123.456
	fun to_f: Float do return value.as(Float)

	# Is the value numeric?
	#
	#     assert "1.234".to_json_value.is_numeric
	#     assert "1234".to_json_value.is_numeric
	#     assert not "\"str\"".to_json_value.is_numeric
	#     assert not "1.2.3.4".to_json_value.is_numeric
	fun is_numeric: Bool do return is_int or is_float

	# Get this value as a `Numeric`
	#
	# require: `self.is_numeric`
	#
	#     assert "1.234".to_json_value.to_numeric == 1.234
	#     assert "1234".to_json_value.to_numeric == 1234
	fun to_numeric: Numeric
	do
		if is_int then return to_i
		return to_f
	end

	# Is this value a boolean?
	#
	#     assert "true".to_json_value.is_bool
	#     assert "false".to_json_value.is_bool
	fun is_bool: Bool do return value isa Bool

	# Get this value as a `Bool`
	#
	# require: `self.is_bool`
	#
	#     assert "true".to_json_value.to_bool
	#     assert not "false".to_json_value.to_bool
	fun to_bool: Bool do return value.as(Bool)

	# Is this value a string?
	#
	#     assert "\"str\"".to_json_value.is_string
	#     assert not "123".to_json_value.is_string
	fun is_string: Bool do return value isa String

	# Get this value as a `String`
	#
	# If value is null, return "null", otherwise returns `value.to_s`. It is practical
	# on most types, except maps which does not have a custom `to_s`.
	#
	#     assert "\"str\"".to_json_value.to_s == "str"
	#     assert "123".to_json_value.to_s == "123"
	#     assert "true".to_json_value.to_s == "true"
	#     assert "[1, 2, 3]".to_json_value.to_s == "123"
	redef fun to_s: String
	do
		if value == null then return "null"
		return value.to_s
	end

	### Objects

	# Is this value a Json object (a map)?
	#
	#     assert """{"a": 123}""".to_json_value.is_map
	#     assert not "123".to_json_value.is_map
	fun is_map: Bool do return value isa MapRead[String, nullable Object]

	# Get this value as a `Map[String, JsonValue]`
	#
	# require: `self.is_map`
	fun to_map: Map[String, JsonValue] do
		var value = value
		assert value isa MapRead[String, nullable Object]

		var map = new HashMap[String, JsonValue]
		for k, v in value do map[k] = new JsonValue(v)
		return map
	end

	### Arrays

	# Is this value an array?
	#
	#     assert "[]".to_json_value.is_array
	#     assert "[1, 2, 3, 4, 5]".to_json_value.is_array
	#     assert "[null, true, false, 0.0, 1, \"str\"]".to_json_value.is_array
	#     assert """["a", "b", "c"]""".to_json_value.is_array
	fun is_array: Bool do return value isa SequenceRead[nullable Object]

	# Get this value as an `Array[JsonValue]`
	#
	# require: `self.is_array`
	#
	#     assert """["a", "b", "c"]""".to_json_value.to_a.join(", ") == "a, b, c"
	fun to_a: Array[JsonValue]
	do
		var value = value
		assert value isa SequenceRead[nullable Object]

		var a = new Array[JsonValue]
		for e in value do a.add(new JsonValue(e))
		return a
	end

	### Error

	# Is this value an error?
	#
	#     assert "[]".to_json_value[0].is_error
	#     assert "[".to_json_value.is_error
	#     assert not "[]".to_json_value.is_error
	fun is_error: Bool do return value isa Error

	# Get this value as a `Error`.
	#
	# require: `self.is_error`
	fun to_error: Error do return value.as(Error)

	### JsonParseError

	# Is this value a parse error?
	#
	#     assert "[".to_json_value.is_parse_error
	#     assert not "[]".to_json_value.is_parse_error
	fun is_parse_error: Bool do return value isa JsonParseError

	# Get this value as a `JsonParseError`.
	#
	# require: `self.is_parse_error`
	fun to_parse_error: JsonParseError do return value.as(JsonParseError)

	### Children access

	# Iterator over the values of the array `self`
	#
	# require: `self.is_array`
	#
	#     var a = new Array[String]
	#     for e in """["a", "b", "c"]""".to_json_value do a.add(e.to_s)
	#     assert a[0] == "a"
	#     assert a[1] == "b"
	#     assert a[2] == "c"
	fun iterator: Iterator[JsonValue] do return to_a.iterator

	# Get value at index `key` on the array or map `self`
	#
	# require: `self.is_array or self.is_map`
	# require: `self.is_array implies key isa Int`
	#
	#     assert """{"a": 123}""".to_json_value["a"].to_i == 123
	#     assert """{"123": "a"}""".to_json_value[123].to_s == "a"
	#     assert """{"John Smith": 1980}""".to_json_value[["John ", "Smith"]].to_i == 1980
	#     assert """{"a": 123}""".to_json_value["b"].is_error
	#
	#     assert """["a", "b", "c"]""".to_json_value[0].to_s == "a"
	#     assert """["a", "b", "c"]""".to_json_value[3].is_error
	fun [](key: Object): JsonValue do
		var value = value
		var result: nullable Object
		if is_error then
			return self
		else if value isa MapRead[String, nullable Object] then
			key = key.to_s
			if value.has_key(key) then
				result = value[key]
			else
				result = new JsonKeyError("Key `{key}` not found.", self, key)
			end
		else if value isa SequenceRead[nullable Object] then
			if key isa Int then
				if key < value.length and key >= 0 then
					result = value[key]
				else
					result = new JsonKeyError("Index `{key}` out of bounds.",
							self, key)
				end
			else
				result = new JsonKeyError("Invalid key type. Expecting `Int`. Got `{key.class_name}`.",
						self, key)
			end
		else
			result = new JsonKeyError("Invalid `[]` access on a `{json_type}` JsonValue.",
					self, key)
		end
		return new JsonValue(result)
	end

	# Advanced query to get a value within the map `self` or it's children.
	#
	# A query is composed of the keys to each map seperated by '.'.
	#
	# require: `self.is_map`
	#
	#     assert """{"a": {"t": true, "f": false}}""".to_json_value.get("a").is_map
	#     assert """{"a": {"t": true, "f": false}}""".to_json_value.get("a.t").to_bool
	#     assert not """{"a": {"t": true, "f": false}}""".to_json_value.get("a.f").to_bool
	#     assert """{"a": {"t": true, "f": false}}""".to_json_value.get("a.t.t").is_error
	#     assert """{"a": {"b": {"c": {"d": 123}}}}""".to_json_value.get("a.b.c.d").to_i == 123
	#     assert """{"a": {"b": {"c": {"d": 123}}}}""".to_json_value.get("a.z.c.d").is_error
	fun get(query: String): JsonValue do
		var keys = query.split(".")
		var value = value
		if is_error then return self
		for i in [0..keys.length[ do
			var key = keys[i]
			if value isa MapRead[String, nullable Object] then
				if value.has_key(key) then
					value = value[key]
				else
					var sub_query = sub_query_to_s(keys, i)
					var e = new JsonKeyError("Key `{key}` not found.",
							self, sub_query)
					return new JsonValue(e)
				end
			else
				var sub_query = sub_query_to_s(keys, i)
				var val_type = (new JsonValue(value)).json_type
				var e = new JsonKeyError("Value at `{sub_query}` is not a map. Got type `{val_type}`",
						self, sub_query)
				return new JsonValue(e)
			end
		end
		return new JsonValue(value)
	end

	# Concatenate all keys up to `last` for debugging purposes.
	#
	# Note: This method deletes elements in `keys`.
	private fun sub_query_to_s(keys: Array[String], last: Int): String do
		last += 1
		for j in [last..keys.length[ do keys.pop
		return keys.join(".")
	end

	# Return a human-readable description of the type.
	#
	# For debugging purpose only.
	fun json_type: String do
		if is_array then return "array"
		if is_bool then return "bool"
		if is_float then return "float"
		if is_int then return "int"
		if is_null then return "null"
		if is_map then return "map"
		if is_string then return "string"
		if is_parse_error then return "parse_error"
		if is_error then return "error"
		return "undefined"
	end
end

# Keyed access failed.
class JsonKeyError
	super Error

	# The value on which the access was requested.
	var json_value: JsonValue

	# The requested key.
	#
	# In the case of `JsonValue.get`, the sub-query that failed.
	var key: Object
end

redef class Text
	# Parse `self` to obtain a `JsonValue`
	fun to_json_value: JsonValue do
		var value = parse_json
		return new JsonValue(value)
	end
end
