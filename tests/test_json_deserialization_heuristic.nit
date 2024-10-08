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
import json::static

class MyData
	serialize

	var data: String

	redef fun to_s do return "<MyData {data}>"
end

class MyError
	serialize

	var error: String

	redef fun to_s do return "<MyError {error}>"
end

class MyJsonDeserializer
	super JsonDeserializer

	redef fun class_name_heuristic(json_object)
	do
		if json_object.keys.has("error") then return "MyError"
		if json_object.keys.has("data") then return "MyData"
		return null
	end
end

var tests = new Array[String]

# Object with meta data, does not need the heuristic
tests.add """
{"__class": "MyData", "data": "some data"}"""

# Objects without meta data
tests.add """
{"data": "some other data"}"""
tests.add """
{"error": "some error message"}"""

for o in tests do
	var deserializer = new MyJsonDeserializer(o)
	var deserialized = deserializer.deserialize

	print "# JSON: {o}"
	if deserializer.errors.not_empty then print "# Errors: '{deserializer.errors.join("', '")}'"
	print "# Nit: {deserialized or else "null"}\n"
end
