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

# Dynamic interface to read Json strings.
#
# `String::to_json_value` returns a `JsonValue` which can be queried
# to get the underlying Json data. It can also be used as any Json types.
module dynamic

private import static
import standard

class JsonValue
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
	#     assert "1.234".to_json_value.to_numeric = 1.234
	#     assert "1234".to_json_value.to_numeric = 1234
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
	#
	#     assert """["a", "b", "c"]""".to_json_value[0].to_s == "a"
	fun [](key: Object): JsonValue
	do
		var value = value
		if value isa MapRead[String, nullable Object] then
			return new JsonValue(value[key.to_s])
		else if value isa SequenceRead[nullable Object] then
			assert key isa Int
			return new JsonValue(value[key])
		else abort
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
	#     assert """{"a": {"b": {"c": {"d": 123}}}}""".to_json_value.get("a.b.c.d").to_i == 123
	fun get(query: String): JsonValue
	do
		var keys = query.split(".")
		var value = value
		for key in keys do
			assert value isa MapRead[String, nullable Object]
			value = value[key]
		end
		return new JsonValue(value)
	end
end

redef class Text
	# Parse `self` to obtain a `JsonValue`
	fun to_json_value: JsonValue do
		var value = parse_json
		return new JsonValue(value)
	end
end
