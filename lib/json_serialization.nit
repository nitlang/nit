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

# Handles serialization and deserialization of objects to/from Json.
module json_serialization

import serialization
import json::static

# Serializer of Nit objects to Json string.
class JsonSerializer
	super Serializer

	# Target writing stream
	var stream: Writer

	redef fun serialize(object)
	do
		if object == null then
			stream.write "null"
		else object.serialize_to_json(self)
	end

	redef fun serialize_attribute(name, value)
	do
		stream.write ", \"{name}\": "
		super
	end

	redef fun serialize_reference(object)
	do
		if refs_map.keys.has(object) then
			# if already serialized, add local reference
			var id = ref_id_for(object)
			stream.write "\{\"__kind\": \"ref\", \"__id\": {id}\}"
		else
			# serialize here
			serialize object
		end
	end

	# Map of references to already serialized objects.
	var refs_map = new HashMap[Serializable,Int]

	# Get the internal serialized reference for this `object`.
	private fun ref_id_for(object: Serializable): Int
	do
		if refs_map.keys.has(object) then
			return refs_map[object]
		else
			var id = refs_map.length
			refs_map[object] = id
			return id
		end
	end
end

# Deserializer from a Json string.
class JsonDeserializer
	super Deserializer

	# Json text to deserialize from.
	private var text: Text

	# Root json object parsed from input text.
	var root: nullable Jsonable is noinit

	# Depth-first path in the serialized object tree.
	var path = new Array[JsonObject]

	# Map of refenrences to already deserialized objects.
	var id_to_object = new HashMap[Int, Object]

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
		assert not path.is_empty
		var current = path.last

		assert current.keys.has(name)
		var value = current[name]

		return convert_object(value)
	end

	# This may be called multiple times by the same object from constructors
	# in different nclassdef
	redef fun notify_of_creation(new_object)
	do
		var id = just_opened_id
		assert id != null
		id_to_object[id] = new_object
	end

	# Convert from simple Json object to Nit object
	private fun convert_object(object: nullable Object): nullable Object
	do
		if object isa JsonObject then
			assert object.keys.has("__kind")
			var kind = object["__kind"]

			# ref?
			if kind == "ref" then
				assert object.keys.has("__id")
				var id = object["__id"]
				assert id isa Int

				assert id_to_object.keys.has(id)
				return id_to_object[id]
			end

			# obj?
			if kind == "obj" then
				assert object.keys.has("__id")
				var id = object["__id"]
				assert id isa Int

				assert object.keys.has("__class")
				var class_name = object["__class"]
				assert class_name isa String

				assert not id_to_object.keys.has(id) else print "Error: Object with id '{id}' of {class_name} is deserialized twice."

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
				assert object.keys.has("__val")
				var val = object["__val"]
				assert val isa String

				if val.length != 1 then print "Error: expected a single char when deserializing '{val}'."

				return val.chars.first
			end

			print "Malformed Json string: unexpected Json Object kind '{kind or else "null"}'"
			abort
		end

		if object isa Array[nullable Object] then
			# special case, isa Array[nullable Serializable]
			var array = new Array[nullable Serializable]
			for e in object do array.add e.as(nullable Serializable)
			return array
		end

		return object
	end

	redef fun deserialize do return convert_object(root)
end

redef class Serializable
	private fun serialize_to_json(v: JsonSerializer)
	do
		var id = v.ref_id_for(self)
		v.stream.write "\{\"__kind\": \"obj\", \"__id\": {id}, \"__class\": \"{class_name}\""
		core_serialize_to(v)
		v.stream.write "\}"
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
	redef fun serialize_to_json(v) do v.stream.write "\{\"__kind\": \"char\", \"__val\": {to_s.to_json}\}"
end

redef class String
	redef fun serialize_to_json(v) do v.stream.write(to_json)
end

redef class NativeString
	redef fun serialize_to_json(v) do to_s.serialize_to_json(v)
end

redef class Array[E]
	redef fun serialize_to_json(v)
	do
		if class_name == "Array[nullable Serializable]" then
			# Using class_name to the the exact type
			# We do not want Array[Int] or anything else here
			v.stream.write "["
			var is_first = true
			for e in self do
				if is_first then
					is_first = false
				else v.stream.write(", ")

				if not v.try_to_serialize(e) then
					v.warn("element of type {e.class_name} is not serializable.")
				end
			end
			v.stream.write "]"
		else
			# Register as pseudo object
			var id = v.ref_id_for(self)
			v.stream.write "\{\"__kind\": \"obj\", \"__id\": {id}, \"__class\": \"{class_name}\""
			v.stream.write """, "__length": {{{length}}}, "__items": ["""
			var is_first = true
			for e in self do
				if is_first then
					is_first = false
				else v.stream.write(", ")

				if not v.try_to_serialize(e) then
					v.warn("element of type {e.class_name} is not serializable.")
				end
			end
			v.stream.write "]"
			v.stream.write "\}"
		end
	end

	# Instanciate a new `Array` from its serialized representation.
	redef init from_deserializer(v: Deserializer)
	do
		if v isa JsonDeserializer then
			v.notify_of_creation self

			var length = v.deserialize_attribute("__length").as(Int)
			var arr = v.path.last["__items"].as(SequenceRead[nullable Object])
			for i in length.times do
				var obj = v.convert_object(arr[i])
				self.add obj
			end
		end
	end
end
