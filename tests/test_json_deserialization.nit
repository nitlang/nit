# This file is part of NIT ( https://nitlanguage.org ).
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

import json

import test_deserialization
import test_deserialization_serial

var entities = new TestEntities

var tests = entities.without_generics#alt1##alt2##alt3##alt4#
#alt1#var tests = entities.with_generics
#alt2#var tests = entities.with_generics
#alt3#var tests = entities.with_generics
#alt4#var tests = entities.with_generics

for o in tests do
	var stream = new StringWriter
	var serializer = new JsonSerializer(stream)
	#alt2#serializer.plain_json = true
	#alt3#serializer.pretty_json = true
	#alt4#serializer.plain_json = true
	#alt4#serializer.pretty_json = true
	serializer.serialize(o)

	var type_name: nullable String = o.class_name
	type_name = null #alt2##alt4#
	var deserializer = new JsonDeserializer(stream.to_s)
	var deserialized = deserializer.deserialize(type_name)

	print "# Nit:\n{o}\n"
	print "# Json:\n{stream}\n"
	print "# Back in Nit:\n{deserialized or else "null"}\n"
	if deserializer.errors.not_empty then print deserializer.errors.join("\n")
end
