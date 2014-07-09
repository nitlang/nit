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

module json_serialization

import serialization
import json::static

class JsonSerializer
	super Serializer

	# Target writing stream
	var stream: OStream

	init(stream: OStream) do self.stream = stream

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

	# Map of references to already serialized objects
	var refs_map = new HashMap[Serializable,Int]

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

# Deserializer from a Json string
class JsonDeserializer
	super Deserializer

	var root: nullable Object
	var path = new Array[HashMap[String, nullable Object]]
	var id_to_object = new HashMap[Int, Object]

	var just_opened_id: nullable Int = null

	init(text: Text)
	do
		var root = text.json_to_nit_object
		if root isa HashMap[String, nullable Object] then path.add(root)
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
		if object isa HashMap[String, nullable Object] then
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

				assert not id_to_object.keys.has(id) else print "Error: Object with id '{id}' is deserialized twice."

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
	redef fun serialize_to_json(v) do v.stream.write "\{\"__kind\": \"char\", \"__val\": \"{to_s.to_json_s}\"\}"
end

redef class String
	redef fun serialize_to_json(v) do v.stream.write("\"{to_json_s}\"")

	private fun to_json_s: String do return self.replace("\\", "\\\\").
		replace("\"", "\\\"").replace("/", "\\/").
		replace("\n", "\\n").replace("\r", "\\r").replace("\t", "\\t")
		# FIXME add support for unicode char when supported by Nit strings
		# FIXME add support for \f! # .replace("\f", "\\f")
		# FIXME add support for \b .replace("\b", "\\b")
end

redef class NativeString
	redef fun serialize_to_json(v) do to_s.serialize_to_json(v)
end

redef class Array[E]
	redef fun serialize_to_json(v) do
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
	end
end
