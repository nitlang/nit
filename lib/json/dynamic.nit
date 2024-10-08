# This file is part of NIT ( https://nitlanguage.org ).
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

# Dynamic interface to read values from JSON strings
#
# Most services are in `JsonValue`, which is created by `Text::to_json_value`.
module dynamic

import error
private import static

redef class Text
	# Parse `self` to a `JsonValue`
	fun to_json_value: JsonValue do return new JsonValue(parse_json)
end

# Dynamic wrapper of a JSON value, created by `Text::to_json_value`
#
# Provides high-level services to explore JSON objects with minimal overhead
# dealing with static types. Use this class to manipulate the JSON data first
# and check for errors only before using the resulting data.
#
# For example, given:
# ~~~
# var json_src = """
# {
#   "i": 123,
#   "m": {
#          "t": true,
#          "f": false
#        },
#   "a": ["zero", "one", "two"]
# }"""
# var json_value = json_src.to_json_value # Parse src to a `JsonValue`
# ~~~
#
# Access array or map values using their indices.
# ~~~
# var target_int = json_value["i"]
# assert target_int.is_int # Check for error and expected type
# assert target_int.to_i == 123 # Use the value
# ~~~
#
# Use `get` to reach a value nested in multiple objects.
# ~~~
# var target_str = json_value.get("a.0")
# assert target_str.is_string # Check for error and expected type
# assert target_str.to_s == "zero" # Use the value
# ~~~
#
# This API is useful for scripts and when you need only a few values from a
# JSON object. To access many values or check the conformity of the JSON
# beforehand, use the `json` serialization services.
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
	# require: `self.is_numeric`
	#
	#     assert "-10".to_json_value.to_i == -10
	#     assert "123".to_json_value.to_i == 123
	#     assert "123.456".to_json_value.to_i == 123
	fun to_i: Int
	do
		var value = value
		assert value isa Numeric
		return value.to_i
	end

	# Is this value a float?
	#
	#     assert "0.0".to_json_value.is_float
	#     assert "123.456".to_json_value.is_float
	#     assert not "123".to_json_value.is_float
	fun is_float: Bool do return value isa Float

	# Get this value as a `Float`
	#
	# require: `self.is_numeric`
	#
	#     assert "0.0".to_json_value.to_f == 0.0
	#     assert "123.456".to_json_value.to_f == 123.456
	#     assert "123".to_json_value.to_f == 123.0
	fun to_f: Float
	do
		var value = value
		assert value isa Numeric
		return value.to_f
	end

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
	#     assert "[1, 2, 3]".to_json_value.to_s == "[1,2,3]"
	redef fun to_s do return (value or else "null").to_s

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
	#     assert """{"John Smith": 1980}""".to_json_value["John Smith"].to_i == 1980
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

	# Get the value at `query`, a string of map keys and array indices
	#
	# The `query` is composed of map keys and array indices separated by "." (by default).
	# The separator can be set with `sep` to any string.
	#
	# Given the following JSON object parsed as a `JsonValue`.
	# ~~~
	# var jvalue = """
	# {
	#   "a": {
	#          "i": 123,
	#          "b": true
	#        },
	#   "b": ["zero", "one", "two"]
	# }""".to_json_value
	# ~~~
	#
	# Access a value in maps by its key, starting from the key in the root object.
	# ~~~
	# assert jvalue.get("a").is_map
	# assert jvalue.get("a.i").to_i == 123
	# assert jvalue.get("a.b").to_bool
	# ~~~
	#
	# Access an item in an array by its index.
	# ~~~
	# assert jvalue.get("b.1").to_s == "one"
	# ~~~
	#
	# Any error at any depth of a query is reported. The client should usually
	# check for errors before using the returned value.
	# ~~~
	# assert jvalue.get("a.b.c").to_error.to_s == "Value at `a.b` is not a map. Got a `map`"
	# assert jvalue.get("b.3").to_error.to_s == "Index `3` out of bounds at `b`"
	# ~~~
	#
	# Set `sep` to a custom string to access keys containing a dot.
	# ~~~
	# jvalue = """
	# {
	#   "a.b": { "i": 123 },
	#   "c/d": [ 456 ]
	# }""".to_json_value
	#
	# assert jvalue.get("a.b/i", sep="/").to_i == 123
	# assert jvalue.get("c/d:0", sep=":").to_i == 456
	# ~~~
	fun get(query: Text, sep: nullable Text): JsonValue
	do
		if is_error then return self

		sep = sep or else "."
		var keys = query.split(sep)
		var value = value
		for i in [0..keys.length[ do
			var key = keys[i]
			if value isa MapRead[String, nullable Object] then
				if value.has_key(key) then
					value = value[key]
				else
					var sub_query = sub_query_to_s(keys, i, sep)
					value = new JsonKeyError("Key `{key}` not found.",
							self, sub_query)
					break
				end
			else if value isa Sequence[nullable Object] then
				if key.is_int then
					var index = key.to_i
					if index < value.length then
						value = value[index]
					else
						var sub_query = sub_query_to_s(keys, i, sep)
						value = new JsonKeyError("Index `{key}` out of bounds at `{sub_query}`",
								self, sub_query)
						break
					end
				end
			else
				var sub_query = sub_query_to_s(keys, i, sep)
				value = new JsonKeyError("Value at `{sub_query}` is not a map. Got a `{json_type}`",
						self, sub_query)
				break
			end
		end
		return new JsonValue(value)
	end

	# Concatenate all keys up to `last` for error reports
	private fun sub_query_to_s(keys: Array[String], last: Int, sep: Text): String
	do
		return [for i in [0..last[ do keys[i]].join(sep)
	end

	# Return a human-readable description of the type.
	#
	# For debugging purpose only.
	private fun json_type: String
	do
		if is_array then return "array"
		if is_bool then return "bool"
		if is_float then return "float"
		if is_int then return "int"
		if is_null then return "null"
		if is_map then return "map"
		if is_string then return "string"
		if is_error then return "error"
		return "undefined"
	end
end

# Key access error
class JsonKeyError
	super Error

	# The value on which the access was requested
	var json_value: JsonValue

	# The requested key
	#
	# In the case of `JsonValue::get`, the sub-query that failed.
	var key: Object
end
