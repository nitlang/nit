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
# ## Writing JSON with metadata
#
# `JsonSerializer` write Nit objects that subclass `Serializable` to JSON,
# and `JsonDeserializer` can read them. They both use metadata added to the
# generated JSON to recreate the Nit instances with the exact original type.
#
# For more information on Nit serialization, see: ../serialization/README.md
#
# ## Writing plain JSON
#
# The attribute `JsonSerializer::plain_json` triggers generating plain and
# clean JSON. This format is easier to read for an human and a non-Nit program,
# but it cannot be fully deserialized. It can still be read by services from
# `json::static` and `json::dynamic`.
#
# A shortcut to these writing services is provided by `Serializable::serialize_to_json`.
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
# assert bob.serialize_to_json(pretty=true, plain=true) == """
#{
#	"name": "Bob",
#	"year_of_birth": 1986,
#	"next_of_kin": null
#}"""
#
# assert alice.serialize_to_json(pretty=true, plain=true) == """
#{
#	"name": "Alice",
#	"year_of_birth": 1978,
#	"next_of_kin": {
#		"name": "Bob",
#		"year_of_birth": 1986,
#		"next_of_kin": null
#	}
#}"""
# ~~~
#
# ## JSON to Nit objects
#
# The `JsonDeserializer` support reading JSON code with minimal metadata
# to easily create Nit object from client-side code or configuration files.
# Each JSON object must define the `__class` attribute with the corresponding
# Nit class and the expected attributes with its name in Nit followed by its value.
#
# ### Usage Example
#
# ~~~nitish
# import json::serialization
#
# class MeetupConfig
#     serialize
#
#     var description: String
#     var max_participants: nullable Int
#     var answers: Array[FlatString]
# end
#
# var json_code = """
# {"__class": "MeetupConfig", "description": "My Awesome Meetup", "max_participants": null, "answers": ["Pepperoni", "Chicken"]}"""
# var deserializer = new JsonDeserializer(json_code)
#
# var meet = deserializer.deserialize
#
# # Check for errors
# assert deserializer.errors.is_empty
#
# assert meet isa MeetupConfig
# assert meet.description == "My Awesome Meetup"
# assert meet.max_participants == null
# assert meet.answers == ["Pepperoni", "Chicken"]
# ~~~
module serialization

import ::serialization::caching
private import ::serialization::engine_tools
private import static
private import string_parser

# Serializer of Nit objects to Json string.
class JsonSerializer
	super CachingSerializer

	# Target writing stream
	var stream: Writer

	# Write plain JSON? Standard JSON without metadata for deserialization
	#
	# If `false`, the default, serialize to support deserialization:
	#
	# * Write metadata, including the types of the serialized objects so they can
	#   be deserialized to their original form using `JsonDeserializer`.
	# * Use references when an object has already been serialized so to not duplicate it.
	# * Support cycles in references.
	# * Preserve the Nit `Char` type as an object because it does not exist in JSON.
	# * The generated JSON is standard and can be read by non-Nit programs.
	#   However, some Nit types are not represented by the simplest possible JSON representation.
	#   With the added metadata, it can be complex to read.
	#
	# If `true`, serialize for other programs:
	#
	# * Nit objects are serialized to pure and standard JSON so they can
	#   be easily read by non-Nit programs and humans.
	# * Nit objects are serialized for every references, so they can be duplicated.
	#   It is easier to read but it creates a larger output.
	# * Does not support cycles, will replace the problematic references by `null`.
	# * Does not serialize the metadata needed to deserialize the objects
	#   back to regular Nit objects.
	# * Keys of Nit `HashMap` are converted to their string representation using `to_s`.
	var plain_json = false is writable

	# Write pretty JSON for human eyes?
	#
	# Toggles skipping lines between attributes of an object and
	# properly indent the written JSON.
	var pretty_json = false is writable

	# Current indentation level used for writing `pretty_json`
	private var indent_level = 0

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
						# Cycle, can't be managed in plain json
						warn "Cycle detected in serialized object, replacing reference with 'null'."
						stream.write "null"
						return
					end
				end

				open_objects.add object
			end

			first_attribute = true
			object.accept_json_serializer self
			first_attribute = false

			if plain_json then open_objects.pop
		end
	end

	redef fun serialize_attribute(name, value)
	do
		if not plain_json or not first_attribute then
			stream.write ","
			first_attribute = false
		end

		new_line_and_indent
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
			stream.write "\{"
			indent_level += 1
			new_line_and_indent
			stream.write "\"__kind\": \"ref\", \"__id\": "
			stream.write id.to_s
			indent_level -= 1
			new_line_and_indent
			stream.write "\}"
		else
			# serialize here
			serialize object
		end
	end

	# Write a new line and indent it, only if `pretty_json`
	private fun new_line_and_indent
	do
		if pretty_json then
			stream.write "\n"
			for i in indent_level.times do stream.write "\t"
		end
	end
end

# Deserializer from a Json string.
class JsonDeserializer
	super CachingDeserializer

	# Json text to deserialize from.
	private var text: Text

	# Root json object parsed from input text.
	private var root: nullable Object is noinit

	# Depth-first path in the serialized object tree.
	private var path = new Array[Map[String, nullable Object]]

	# Names of the attributes from the root to the object currently being deserialized
	var attributes_path = new Array[String]

	# Last encountered object reference id.
	#
	# See `id_to_object`.
	var just_opened_id: nullable Int = null

	init do
		var root = text.parse_json
		if root isa Map[String, nullable Object] then path.add(root)
		self.root = root
	end

	redef fun deserialize_attribute(name, static_type)
	do
		assert not path.is_empty # This is an internal error, abort
		var current = path.last

		if not current.keys.has(name) then
			errors.add new Error("Deserialization Error: JSON object has not attribute '{name}'.")
			return null
		end

		var value = current[name]

		attributes_path.add name
		var res = convert_object(value, static_type)
		attributes_path.pop
		return res
	end

	# This may be called multiple times by the same object from constructors
	# in different nclassdef
	redef fun notify_of_creation(new_object)
	do
		var id = just_opened_id
		if id == null then return # Register `new_object` only once
		cache[id] = new_object
	end

	# Convert the simple JSON `object` to a Nit object
	private fun convert_object(object: nullable Object, static_type: nullable String): nullable Object
	do
		if object isa JsonParseError then
			errors.add object
			return null
		end

		if object isa Map[String, nullable Object] then
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

				var class_name = object.get_or_null("__class")
				if class_name == null then
					# Fallback to custom heuristic
					class_name = class_name_heuristic(object)

					if class_name == null and static_type != null then
						# Fallack to the static type, strip the `nullable` prefix
						var prefix = "nullable "
						if static_type.has(prefix) then
							class_name = static_type.substring_from(prefix.length)
						else class_name = static_type
					end
				end

				if class_name == null then
					errors.add new Error("Serialization Error: JSON object declaration does not declare a `__class`.")
					return object
				end

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

		# Simple JSON array without serialization metadata
		if object isa Array[nullable Object] then
			# Can we use the static type?
			if static_type != null then
				var prefix = "nullable "
				var class_name = if static_type.has(prefix) then
						static_type.substring_from(prefix.length)
					else static_type

				opened_array = object
				var value = deserialize_class(class_name)
				opened_array = null
				return value
			end

			# This branch should rarely be used:
			# when an array is the root object which is accepted but illegal in standard JSON,
			# or in strange custom deserialization hacks.

			var array = new Array[nullable Object]
			var types = new HashSet[String]
			var has_nullable = false
			for e in object do
				var res = convert_object(e)
				array.add res

				if res != null then
					types.add res.class_name
				else has_nullable = true
			end

			if types.length == 1 then
				var array_type = types.first

				var typed_array
				if array_type == "ASCIIFlatString" or array_type == "UnicodeFlatString" then
					if has_nullable then
						typed_array = new Array[nullable FlatString]
					else typed_array = new Array[FlatString]
				else if array_type == "Int" then
					if has_nullable then
						typed_array = new Array[nullable Int]
					else typed_array = new Array[Int]
				else if array_type == "Float" then
					if has_nullable then
						typed_array = new Array[nullable Float]
					else typed_array = new Array[Float]
				else
					# TODO support all array types when we separate the constructor
					# `from_deserializer` from the filling of the items.

					if not has_nullable then
						typed_array = new Array[Object]
					else
						# Unsupported array type, return as `Array[nullable Object]`
						return array
					end
				end

				assert typed_array isa Array[nullable Object]

				# Copy item to the new array
				for e in array do typed_array.add e
				return typed_array
			end

			# Uninferable type, return as `Array[nullable Object]`
			return array
		end

		return object
	end

	# Current array open for deserialization, used by `SimpleCollection::from_deserializer`
	private var opened_array: nullable Array[nullable Object] = null

	redef fun deserialize
	do
		errors.clear
		return convert_object(root)
	end

	# User customizable heuristic to infer the name of the Nit class to deserialize `json_object`
	#
	# This method is called only when deserializing an object without the metadata `__class`.
	# Use the content of `json_object` to identify what Nit class it should be deserialized into.
	# Or use `self.attributes_path` indicating where the deserialized object will be stored,
	# is is less reliable as some objects don't have an associated attribute:
	# the root/first deserialized object and collection elements.
	#
	# Return the class name as a `String` when it can be inferred,
	# or `null` when the class name cannot be found.
	#
	# If a valid class name is returned, `json_object` will then be deserialized normally.
	# So it must contain the attributes of the corresponding class, as usual.
	#
	# ~~~nitish
	# class MyData
	#     serialize
	#
	#     var data: String
	# end
	#
	# class MyError
	#     serialize
	#
	#     var error: String
	#     var related_data: MyData
	# end
	#
	# class MyJsonDeserializer
	#     super JsonDeserializer
	#
	#     redef fun class_name_heuristic(json_object)
	#     do
	#         # Infer the Nit class from the content of the JSON object.
	#         if json_object.keys.has("error") then return "MyError"
	#         if json_object.keys.has("data") then return "MyData"
	#
	#         # Infer the Nit class from the attribute where it will be stored.
	#         # This line duplicates a previous line, and would only apply when
	#         # `MyData` is within a `MyError`.
	#         if attributes_path.not_empty and attributes_path.last == "related_data" then return "MyData"
	#
	#         return null
	#     end
	# end
	#
	# var json = """{"data": "some data"}"""
	# var deserializer = new MyJsonDeserializer(json)
	# var deserialized = deserializer.deserialize
	# assert deserialized isa MyData
	#
	# json = """{"error": "some error message",
	#            "related_data": {"data": "some other data"}"""
	# deserializer = new MyJsonDeserializer(json)
	# deserialized = deserializer.deserialize
	# assert deserialized isa MyError
	# ~~~
	protected fun class_name_heuristic(json_object: Map[String, nullable Object]): nullable String
	do
		return null
	end
end

redef class Text

	# Deserialize a `nullable Object` from this JSON formatted string
	#
	# Warning: Deserialization errors are reported with `print_error` and
	# may be returned as a partial object or as `null`.
	#
	# This method is not appropriate when errors need to be handled programmatically,
	# manually use a `JsonDeserializer` in such cases.
	fun from_json_string: nullable Object
	do
		var deserializer = new JsonDeserializer(self)
		var res = deserializer.deserialize
		if deserializer.errors.not_empty then
			print_error "Deserialization Errors: {deserializer.errors.join(", ")}"
		end
		return res
	end

	redef fun accept_json_serializer(v) do v.stream.write(to_json)
end

redef class Serializable

	# Serialize `self` to JSON
	#
	# Set `plain = true` to generate standard JSON, without deserialization metadata.
	# Use this option if the generated JSON will be read by other programs or humans.
	# Use the default, `plain = false`, if the JSON is to be deserialized by a Nit program.
	#
	# Set `pretty = true` to generate pretty JSON for human eyes.
	# Use the default, `pretty = false`, to generate minified JSON.
	#
	# This method should not be refined by subclasses,
	# instead `accept_json_serializer` can customize the serialization of an object.
	#
	# See: `JsonSerializer`
	fun serialize_to_json(plain, pretty: nullable Bool): String
	do
		var stream = new StringWriter
		var serializer = new JsonSerializer(stream)
		serializer.plain_json = plain or else false
		serializer.pretty_json = pretty or else false
		serializer.serialize self
		stream.close
		return stream.to_s
	end

	# Refinable service to customize the serialization of this class to JSON
	#
	# This method can be refined to customize the serialization by either
	# writing pure JSON directly on the stream `v.stream` or
	# by using other services of `JsonSerializer`.
	#
	# Most of the time, it is preferable to refine the method `core_serialize_to`
	# which is used by all the serialization engines, not just JSON.
	protected fun accept_json_serializer(v: JsonSerializer)
	do
		var id = v.cache.new_id_for(self)
		v.stream.write "\{"
		v.indent_level += 1
		if not v.plain_json then
			v.new_line_and_indent
			v.stream.write "\"__kind\": \"obj\", \"__id\": "
			v.stream.write id.to_s
			v.stream.write ", \"__class\": \""
			v.stream.write class_name
			v.stream.write "\""
		end
		core_serialize_to(v)

		v.indent_level -= 1
		v.new_line_and_indent
		v.stream.write "\}"
	end
end

redef class Int
	redef fun accept_json_serializer(v) do v.stream.write to_s
end

redef class Float
	redef fun accept_json_serializer(v) do v.stream.write to_s
end

redef class Bool
	redef fun accept_json_serializer(v) do v.stream.write to_s
end

redef class Char
	redef fun accept_json_serializer(v)
	do
		if v.plain_json then
			to_s.accept_json_serializer v
		else
			v.stream.write "\{\"__kind\": \"char\", \"__val\": "
			to_s.accept_json_serializer v
			v.stream.write "\}"
		end
	end
end

redef class NativeString
	redef fun accept_json_serializer(v) do to_s.accept_json_serializer(v)
end

redef class Collection[E]
	# Utility to serialize a normal Json array
	private fun serialize_to_pure_json(v: JsonSerializer)
	do
		v.stream.write "["
		v.indent_level += 1
		var is_first = true
		for e in self do
			if is_first then
				is_first = false
			else v.stream.write ","
			v.new_line_and_indent

			if not v.try_to_serialize(e) then
				assert e != null # null would have been serialized
				v.warn("element of type {e.class_name} is not serializable.")
			end
		end
		v.indent_level -= 1
		v.new_line_and_indent
		v.stream.write "]"
	end
end

redef class SimpleCollection[E]
	redef fun accept_json_serializer(v)
	do
		# Register as pseudo object
		if not v.plain_json then
			var id = v.cache.new_id_for(self)
			v.stream.write """{"""
			v.indent_level += 1
			v.new_line_and_indent
			v.stream.write """"__kind": "obj", "__id": """
			v.stream.write id.to_s
			v.stream.write """, "__class": """"
			v.stream.write class_name
			v.stream.write """","""
			v.new_line_and_indent
			v.stream.write """"__items": """

			core_serialize_to v
		end

		serialize_to_pure_json v

		if not v.plain_json then
			v.indent_level -= 1
			v.new_line_and_indent
			v.stream.write "\}"
		end
	end

	redef init from_deserializer(v)
	do
		super
		if v isa JsonDeserializer then
			v.notify_of_creation self
			init

			var open_array: nullable SequenceRead[nullable Object] = v.opened_array
			if open_array == null then
				# With metadata
				var arr = v.path.last.get_or_null("__items")
				if not arr isa SequenceRead[nullable Object] then
					# If there is nothing, we consider that it is an empty collection.
					if arr != null then v.errors.add new Error("Deserialization Error: invalid format in {self.class_name}")
					return
				end
				open_array = arr
			end

			# Try to get the name of the single parameter type assuming it is E.
			# This does not work in non-generic subclasses,
			# when the first parameter is not E, or
			# when there is more than one parameter. (The last one could be fixed)
			var class_name = class_name
			var items_type = null
			var bracket_index = class_name.index_of('[')
			if bracket_index != -1 then
				var start = bracket_index + 1
				var ending = class_name.last_index_of(']')
				items_type = class_name.substring(start, ending-start)
			end

			# Fill array
			for o in open_array do
				var obj = v.convert_object(o, items_type)
				if obj isa E then
					add obj
				else v.errors.add new AttributeTypeError(self, "items", obj, "E")
			end
		end
	end
end

redef class Map[K, V]
	redef fun accept_json_serializer(v)
	do
		# Register as pseudo object
		var id = v.cache.new_id_for(self)

		v.stream.write "\{"
		v.indent_level += 1

		if v.plain_json then
			var first = true
			for key, val in self do
				if not first then
					v.stream.write ","
				else first = false
				v.new_line_and_indent

				var k = key or else "null"
				k.to_s.accept_json_serializer v
				v.stream.write ": "
				if not v.try_to_serialize(val) then
					assert val != null # null would have been serialized
					v.warn("element of type {val.class_name} is not serializable.")
					v.stream.write "null"
				end
			end
		else
			v.new_line_and_indent
			v.stream.write """"__kind": "obj", "__id": """
			v.stream.write id.to_s
			v.stream.write """, "__class": """"
			v.stream.write class_name
			v.stream.write """", "__length": """
			v.stream.write length.to_s

			v.stream.write ","
			v.new_line_and_indent
			v.stream.write """"__keys": """
			keys.serialize_to_pure_json v

			v.stream.write ","
			v.new_line_and_indent
			v.stream.write """"__values": """
			values.serialize_to_pure_json v

			core_serialize_to v
		end

		v.indent_level -= 1
		v.new_line_and_indent
		v.stream.write "\}"
	end

	redef init from_deserializer(v)
	do
		super

		if v isa JsonDeserializer then
			v.notify_of_creation self
			init

			var length = v.deserialize_attribute("__length")
			var keys = v.path.last.get_or_null("__keys")
			var values = v.path.last.get_or_null("__values")

			# Length is optional
			if length == null and keys isa SequenceRead[nullable Object] then length = keys.length

			# Consistency check
			if not length isa Int or length < 0 or
			   not keys isa SequenceRead[nullable Object] or
			   not values isa SequenceRead[nullable Object] or
			   keys.length != values.length or length != keys.length then

				# If there is nothing or length == 0, we consider that it is an empty Map.
				if (length != null and length != 0) or keys != null or values != null then
					v.errors.add new Error("Deserialization Error: invalid format in {self.class_name}")
				end
				return
			end

			for i in length.times do
				var key = v.convert_object(keys[i])
				var value = v.convert_object(values[i])

				if not key isa K then
					v.errors.add new AttributeTypeError(self, "keys", key, "K")
					continue
				end

				if not value isa V then
					v.errors.add new AttributeTypeError(self, "values", value, "V")
					continue
				end

				if has_key(key) then
					v.errors.add new Error("Deserialization Error: duplicated key '{key or else "null"}' in {self.class_name}, previous value overwritten")
				end

				self[key] = value
			end
		end
	end
end
