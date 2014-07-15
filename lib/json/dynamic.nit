# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
# Copyright 2014 Alexantre Terrasa <alexandre@moz-code.org>
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

import static

redef interface Jsonable

	# Is this value an integer?
	#
	#     assert "123".to_jsonable.is_int
	#     assert not "1.23".to_jsonable.is_int
	#     assert not "\"str\"".to_jsonable.is_int
	fun is_int: Bool do return self isa Int

	# Get this value as a `Int`
	#
	# require: `self.is_int`
	#
	#     assert "-10".to_jsonable.to_int == -10
	#     assert "123".to_jsonable.to_int == 123
	fun to_int: Int do return self.as(Int)

	# Is this value a float?
	#
	#     assert "0.0".to_jsonable.is_float
	#     assert "123.456".to_jsonable.is_float
	#     assert not "123".to_jsonable.is_float
	fun is_float: Bool do return self isa Float

	# Get this value as a `Float`
	#
	# require: `self.is_float`
	#
	#     assert "0.0".to_jsonable.to_float == 0.0
	#     assert "123.456".to_jsonable.to_float == 123.456
	fun to_float: Float do return self.as(Float)

	# Is the value numeric?
	#
	#     assert "1.234".to_jsonable.is_numeric
	#     assert "1234".to_jsonable.is_numeric
	#     assert not "\"str\"".to_jsonable.is_numeric
	#     assert not "1.2.3.4".to_jsonable.is_numeric
	fun is_numeric: Bool do return is_int or is_float

	# Get this value as a `Numeric`
	#
	# require: `self.is_numeric`
	#
	#     assert "1.234".to_jsonable.to_numeric = 1.234
	#     assert "1234".to_jsonable.to_numeric = 1234
	fun to_numeric: Numeric
	do
		if is_int then return to_int
		return to_float
	end

	# Is this value a boolean?
	#
	#     assert "true".to_jsonable.is_bool
	#     assert "false".to_jsonable.is_bool
	fun is_bool: Bool do return self isa Bool

	# Get this value as a `Bool`
	#
	# require: `self.is_bool`
	#
	#     assert "true".to_jsonable.to_bool
	#     assert not "false".to_jsonable.to_bool
	fun to_bool: Bool do return self.as(Bool)

	# Is this value a string?
	#
	#     assert "\"str\"".to_jsonable.is_string
	#     assert not "123".to_jsonable.is_string
	fun is_string: Bool do return self isa String

	# Get this value as a `String`
	#
	#     assert "\"str\"".to_jsonable.to_string == "str"
	#     assert "123".to_jsonable.to_string == "123"
	#     assert "true".to_jsonable.to_string == "true"
	#     assert "[1, 2, 3]".to_jsonable.to_string == "[1,2,3]"
	fun to_string: String do return self.to_s

	# Is this value a Json object (a map)?
	#
	#     assert """{"a": 123}""".to_jsonable.is_json_object
	#     assert not "123".to_jsonable.is_json_object
	fun is_json_object: Bool do return self isa JsonObject

	# Get this value as a `Map[String, JsonValue]`
	#
	# require: `self.is_json_object`
	fun to_json_object: JsonObject do return self.as(JsonObject)

	# Is this value a JsonArray?
	#
	#     assert "[]".to_jsonable.is_json_array
	#     assert "[1, 2, 3, 4, 5]".to_jsonable.is_json_array
	#     assert "[null, true, false, 0.0, 1, \"str\"]".to_jsonable.is_json_array
	#     assert """["a", "b", "c"]""".to_jsonable.is_json_array
	fun is_json_array: Bool do return self isa JsonArray

	# Get this value as an `Array[JsonValue]`
	#
	# require: `self.is_json_array`
	#
	#     assert """["a", "b", "c"]""".to_jsonable.to_json_array.join(", ") == "a, b, c"
	fun to_json_array: JsonArray do return self.as(JsonArray)
end

redef class JsonObject
	# Advanced query to get a value within `self` or it's children.

	# A query is composed of the keys to each object seperated by '.'.

	#     var json = """{"a": {"t": true, "f": false}}"""
	#     assert json.to_jsonable.to_json_object.get("a").is_json_object
	#     assert json.to_jsonable.to_json_object.get("a.t").to_bool
	#     assert not json.to_jsonable.to_json_object.get("a.f").to_bool
	#     json = """{"a": {"b": {"c": {"d": 123}}}}"""
	#     assert json.to_jsonable.to_json_object.get("a.b.c.d").to_int == 123
	fun get(query: String): nullable Jsonable
	do
		var keys = query.split(".").reversed
		var key = keys.pop

		assert has_key(key)
		var node = self[key]

		while not keys.is_empty do
			key = keys.pop
			assert node isa JsonObject and node.has_key(key)
			node = node[key]
		end
		return node
	end
end
