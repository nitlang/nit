# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Services for safer deserialization engines
module safe

import poset

import serialization
private import engine_tools

# Deserialization engine limiting which types can be deserialized
class SafeDeserializer
	super Deserializer

	# Accepted parameterized classes to deserialize
	#
	# If `whitelist.empty`, all types are accepted.
	#
	# ~~~
	# import json
	#
	# class MyClass
	#     serialize
	# end
	#
	# var json_string = """
	# {"__class": "MyClass"}
	# """
	#
	# var deserializer = new JsonDeserializer(json_string)
	# var obj = deserializer.deserialize
	# assert deserializer.errors.is_empty
	# assert obj isa MyClass
	#
	# deserializer = new JsonDeserializer(json_string)
	# deserializer.whitelist.add "Array[String]"
	# deserializer.whitelist.add "AnotherAcceptedClass"
	# obj = deserializer.deserialize
	# assert deserializer.errors.length == 1
	# assert obj == null
	# ~~~
	var whitelist = new Array[Text]

	# Should objects be checked if they a subtype of the static type before deserialization?
	#
	# Defaults to `true`, as it should always be activated.
	# It can be turned off to implement the subtype check itself.
	var check_subtypes = true is writable

	# Should `self` accept to deserialize an instance of `dynamic_type` for an attribute wuth `static_type`?
	#
	# Uses `whitelist` if not empty...
	# Check correct inheritance if `check_subtypes`...
	fun accept(dynamic_type: Text, static_type: nullable Text): Bool
	do
		if whitelist.not_empty and not whitelist.has(dynamic_type) then
			errors.add new Error("Deserialization Error: '{dynamic_type}' not in whitelist")
			return false
		end

		if static_type != null and check_subtypes then
			var static_class = static_type.strip_nullable_and_params.to_s
			var dynamic_class = dynamic_type.strip_nullable_and_params.to_s
			if not class_inheritance_metamodel.has_edge(dynamic_class, static_class) then
				errors.add new Error("Deserialization Error: `{dynamic_type}` is not a subtype of the static type `{static_type}`")
				return false
			end
		end

		return true
	end
end

redef class Sys
	# Class inheritance graph, implemented by the `json` package
	#
	# ~~~
	# import json
	#
	# var hierarchy = class_inheritance_metamodel
	# assert hierarchy.has_edge("String", "Object")
	# assert not hierarchy.has_edge("Object", "String")
	# ~~~
	fun class_inheritance_metamodel: POSet[String] is abstract
end

redef class Deserializer
	redef fun deserialize_class(name)
	do
		if name == "POSet[String]" then return new POSet[String].from_deserializer(self)
		if name == "POSetElement[String]" then return new POSetElement[String].from_deserializer(self)
		if name == "HashSet[String]" then return new HashSet[String].from_deserializer(self)
		if name == "HashMap[String, POSetElement[String]]" then return new HashMap[String, POSetElement[String]].from_deserializer(self)

		return super
	end
end
