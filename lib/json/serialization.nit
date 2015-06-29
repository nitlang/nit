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

# Handles serialization and deserialization of objects to/from JSON
#
# ## Nity JSON
#
# `JsonSerializer` write Nit objects that subclass `Serializable` to JSON,
# and `JsonDeserializer` can read them. They both use meta-data added to the
# generated JSON to recreate the Nit instances with the exact original type.
#
# For more information on Nit serialization, see: ../serialization/README.md
#
# ## Plain JSON
#
# The attribute `JsonSerializer::plain_json` triggers generating plain and
# clean JSON. This format is easier to read for an human and a non-Nit program,
# but it cannot be fully deserialized. It can still be read by services from
# `json::static` and `json::dynamic`.
#
# A shortcut to this service is provided by `Serializable::to_plain_json`.
#
# ### Usage Example
#
# ~~~nitish
# import json::serialization
#
# class Person
#     serialize
#
#     var name: String
#     var year_of_birth: Int
#     var next_of_kin: nullable Person
# end
#
# var bob = new Person("Bob", 1986)
# var alice = new Person("Alice", 1978, bob)
#
# assert bob.to_plain_json == """
# {"name": "Bob", "year_of_birth": 1986, "next_of_kin": null}"""
#
# assert alice.to_plain_json == """
# {"name": "Alice", "year_of_birth": 1978, "next_of_kin": {"name": "Bob", "year_of_birth": 1986, "next_of_kin": null}}"""
# ~~~
module serialization

import ::serialization::caching
private import ::serialization::engine_tools
private import static

# Serializer of Nit objects to Json string.
class JsonSerializer
	super CachingSerializer

	# Target writing stream
	var stream: Writer

	# Write plain JSON? easier to read but does not support Nit deserialization
	#
	# If `false`, the default, serialize to support deserialization:
	#
	# * Write meta-data, including the types of the serialized objects so they can
	#   be deserialized to their original form using `JsonDeserializer`.
	# * Use references when an object has already been serialized so to not duplicate it.
	# * Support cycles in references.
	# * Preserve the Nit `Char` type as an object because it does not exist in JSON.
	# * The generated JSON is standard and can be read by non-Nit programs.
	#   However, some Nit types are not represented by the simplest possible JSON representation.
	#   With the added meta-data, it can be complex to read.
	#
	# If `true`, serialize for other programs:
	#
	# * Nit objects are serialized to pure and standard JSON so they can
	#   be easily read by non-Nit programs and humans.
	# * Nit objects are serialized for every references, so they can be duplicated.
	#   It is easier to read but it creates a larger output.
	# * Does not support cycles, will replace the problematic references by `null`.
	# * Does not serialize the meta-data needed to deserialize the objects
	#   back to regular Nit objects.
	# * Keys of Nit `HashMap` are converted to their string reprensentation using `to_s`.
	var plain_json = false is writable

	# List of the current open objects, the first is the main target of the serialization
	#
	# Used only when `plain_json == true` to detect cycles in serialization.
	private var open_objects = new Array[Object]

	# Has the first attribute of the current object already been serialized?
	#
	# Used only when `plain_json == true`.
	private var first_attribute = false

	redef fun serialize(object)
	do
		if object == null then
			stream.write "null"
		else
			if plain_json then
				for o in open_objects do
					if object.is_same_serialized(o) then
						# Cycle detected
						stream.write "null"
						return
					end
				end

				open_objects.add object
			end

			first_attribute = true
			object.serialize_to_json self
			first_attribute = false

			if plain_json then open_objects.pop
		end
	end

	redef fun serialize_attribute(name, value)
	do
		if not plain_json or not first_attribute then
			stream.write ", "
			first_attribute = false
		end

		stream.write "\""
		stream.write name
		stream.write "\": "
		super
	end

	redef fun serialize_reference(object)
	do
		if not plain_json and cache.has_object(object) then
			# if already serialized, add local reference
			var id = cache.id_for(object)
			stream.write "\{\"__kind\": \"ref\", \"__id\": "
			stream.write id.to_s
			stream.write "\}"
		else
			# serialize here
			serialize object
		end
	end
end

# Deserializer from a Json string.
class JsonDeserializer
	super CachingDeserializer

	# Json text to deserialize from.
	private var text: Text

	# Root json object parsed from input text.
	private var root: nullable Jsonable is noinit

	# Depth-first path in the serialized object tree.
	private var path = new Array[JsonObject]

	# Last encountered object reference id.
	#
	# See `id_to_object`.
	var just_opened_id: nullable Int = null

	init do
		var root = text.parse_json
		if root isa JsonObject then path.add(root)
		self.root = root
	end

	redef fun deserialize_attribute(name)
	do
		assert not path.is_empty # This is an internal error, abort
		var current = path.last

		if not current.keys.has(name) then
			errors.add new Error("Deserialization Error: JSON object has not attribute '{name}'.")
			return null
		end

		var value = current[name]

		return convert_object(value)
	end

	# This may be called multiple times by the same object from constructors
	# in different nclassdef
	redef fun notify_of_creation(new_object)
	do
		var id = just_opened_id
		if id == null then return # Register `new_object` only once
		cache[id] = new_object
	end

	# Convert from simple Json object to Nit object
	private fun convert_object(object: nullable Object): nullable Object
	do
		if object isa JsonParseError then
			errors.add object
			return null
		end

		if object isa JsonObject then
			var kind = null
			if object.keys.has("__kind") then
				kind = object["__kind"]
			end

			# ref?
			if kind == "ref" then
				if not object.keys.has("__id") then
					errors.add new Error("Serialization Error: JSON object reference does not declare a `__id`.")
					return object
				end

				var id = object["__id"]
				if not id isa Int then
					errors.add new Error("Serialization Error: JSON object reference declares a non-integer `__id`.")
					return object
				end

				if not cache.has_id(id) then
					errors.add new Error("Serialization Error: JSON object reference has an unknown `__id`.")
					return object
				end

				return cache.object_for(id)
			end

			# obj?
			if kind == "obj" or kind == null then
				var id = null
				if object.keys.has("__id") then
					id = object["__id"]

					if not id isa Int then
						errors.add new Error("Serialization Error: JSON object declaration declares a non-integer `__id`.")
						return object
					end

					if cache.has_id(id) then
						errors.add new Error("Serialization Error: JSON object with `__id` {id} is deserialized twice.")
						# Keep going
					end
				end

				if not object.keys.has("__class") then
					errors.add new Error("Serialization Error: JSON object declaration does not declare a `__class`.")
					return object
				end

				var class_name = object["__class"]
				if not class_name isa String then
					errors.add new Error("Serialization Error: JSON object declaration declares a non-string `__class`.")
					return object
				end

				# advance on path
				path.push object

				just_opened_id = id
				var value = deserialize_class(class_name)
				just_opened_id = null

				# revert on path
				path.pop

				return value
			end

			# char?
			if kind == "char" then
				if not object.keys.has("__val") then
					errors.add new Error("Serialization Error: JSON `char` object does not declare a `__val`.")
					return object
				end

				var val = object["__val"]

				if not val isa String or val.is_empty then
					errors.add new Error("Serialization Error: JSON `char` object does not declare a single char in `__val`.")
					return object
				end

				return val.chars.first
			end

			errors.add new Error("Serialization Error: JSON object has an unknown `__kind`.")
			return object
		end

		if object isa Array[nullable Object] then
			# special case, isa Array[nullable Serializable]
			var array = new Array[nullable Serializable]
			for e in object do array.add e.as(nullable Serializable)
			return array
		end

		return object
	end

	redef fun deserialize
	do
		errors.clear
		return convert_object(root)
	end
end

redef class Serializable
	private fun serialize_to_json(v: JsonSerializer)
	do
		var id = v.cache.new_id_for(self)
		v.stream.write "\{"
		if not v.plain_json then
			v.stream.write "\"__kind\": \"obj\", \"__id\": "
			v.stream.write id.to_s
			v.stream.write ", \"__class\": \""
			v.stream.write class_name
			v.stream.write "\""
		end
		core_serialize_to(v)
		v.stream.write "\}"
	end

	# Serialize this object to plain JSON
	#
	# This is a shortcut using `JsonSerializer::plain_json`,
	# see its documentation for more information.
	fun to_plain_json: String
	do
		var stream = new StringWriter
		var serializer = new JsonSerializer(stream)
		serializer.plain_json = true
		serializer.serialize self
		stream.close
		return stream.to_s
	end
end

redef class Int
	redef fun serialize_to_json(v) do v.stream.write(to_s)
end

redef class Float
	redef fun serialize_to_json(v) do v.stream.write(to_s)
end

redef class Bool
	redef fun serialize_to_json(v) do v.stream.write(to_s)
end

redef class Char
	redef fun serialize_to_json(v)
	do
		if v.plain_json then
			v.stream.write to_s.to_json
		else
			v.stream.write "\{\"__kind\": \"char\", \"__val\": "
			v.stream.write to_s.to_json
			v.stream.write "\}"
		end
	end
end

redef class String
	redef fun serialize_to_json(v) do v.stream.write(to_json)
end

redef class NativeString
	redef fun serialize_to_json(v) do to_s.serialize_to_json(v)
end

redef class Collection[E]
	# Utility to serialize a normal Json array
	private fun serialize_to_pure_json(v: JsonSerializer)
	do
			v.stream.write "["
			var is_first = true
			for e in self do
				if is_first then
					is_first = false
				else v.stream.write ", "

				if not v.try_to_serialize(e) then
					v.warn("element of type {e.class_name} is not serializable.")
				end
			end
			v.stream.write "]"
	end
end

redef class SimpleCollection[E]
	redef fun serialize_to_json(v)
	do
		# Register as pseudo object
		if not v.plain_json then
			var id = v.cache.new_id_for(self)
			v.stream.write """{"__kind": "obj", "__id": """
			v.stream.write id.to_s
			v.stream.write """, "__class": """"
			v.stream.write class_name
			v.stream.write """", "__items": """
		end

		serialize_to_pure_json v

		if not v.plain_json then
			v.stream.write "\}"
		end
	end

	redef init from_deserializer(v: Deserializer)
	do
		super
		if v isa JsonDeserializer then
			v.notify_of_creation self
			init

			var arr = v.path.last["__items"].as(SequenceRead[nullable Object])
			for o in arr do
				var obj = v.convert_object(o)
				self.add obj
			end
		end
	end
end

redef class Map[K, V]
	redef fun serialize_to_json(v)
	do
		# Register as pseudo object
		var id = v.cache.new_id_for(self)

		if v.plain_json then
			v.stream.write "\{"
			var first = true
			for key, val in self do
				if not first then
					v.stream.write ", "
				else first = false

				if key == null then key = "null"

				v.stream.write key.to_s.to_json
				v.stream.write ": "
				if not v.try_to_serialize(val) then
					v.warn("element of type {val.class_name} is not serializable.")
					v.stream.write "null"
				end
			end
			v.stream.write "\}"
		else
			v.stream.write """{"__kind": "obj", "__id": """
			v.stream.write id.to_s
			v.stream.write """, "__class": """"
			v.stream.write class_name
			v.stream.write """", "__length": """
			v.stream.write length.to_s

			v.stream.write """, "__keys": """
			keys.serialize_to_pure_json v

			v.stream.write """, "__values": """
			values.serialize_to_pure_json v

			v.stream.write "\}"
		end
	end

	# Instantiate a new `Array` from its serialized representation.
	redef init from_deserializer(v: Deserializer)
	do
		super

		if v isa JsonDeserializer then
			v.notify_of_creation self
			init

			var length = v.deserialize_attribute("__length").as(Int)
			var keys = v.path.last["__keys"].as(SequenceRead[nullable Object])
			var values = v.path.last["__values"].as(SequenceRead[nullable Object])
			for i in length.times do
				var key = v.convert_object(keys[i])
				var value = v.convert_object(values[i])
				self[key] = value
			end
		end
	end
end
