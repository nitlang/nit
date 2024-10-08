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

# Services to read JSON: `deserialize_json` and `JsonDeserializer`
module serialization_read

import serialization::caching
private import serialization::engine_tools
import serialization::safe

private import static
import poset

# Deserializer from a Json string.
class JsonDeserializer
	super CachingDeserializer
	super SafeDeserializer

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
		if path.is_empty then
			# The was a parsing error or the root is not an object
			if not root isa Error then
				errors.add new Error("Deserialization Error: parsed JSON value is not an object.")
			end
			deserialize_attribute_missing = false
			return null
		end

		var current = path.last

		if not current.keys.has(name) then
			# Let the generated code / caller of `deserialize_attribute` raise the missing attribute error
			deserialize_attribute_missing = true
			return null
		end

		var value = current[name]

		attributes_path.add name
		var res = convert_object(value, static_type)
		attributes_path.pop

		deserialize_attribute_missing = false
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
					errors.add new Error("Deserialization Error: JSON object reference does not declare a `__id`.")
					return object
				end

				var id = object["__id"]
				if not id isa Int then
					errors.add new Error("Deserialization Error: JSON object reference declares a non-integer `__id`.")
					return object
				end

				if not cache.has_id(id) then
					errors.add new Error("Deserialization Error: JSON object reference has an unknown `__id`.")
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
						errors.add new Error("Deserialization Error: JSON object declaration declares a non-integer `__id`.")
						return object
					end

					if cache.has_id(id) then
						errors.add new Error("Deserialization Error: JSON object with `__id` {id} is deserialized twice.")
						# Keep going
					end
				end

				var class_name = object.get_or_null("__class")
				if class_name == null then
					# Fallback to custom heuristic
					class_name = class_name_heuristic(object)

					if class_name == null and static_type != null then
						# Fallack to the static type, strip the `nullable` prefix
						class_name = static_type.strip_nullable
					end
				end

				if class_name == null then
					errors.add new Error("Deserialization Error: JSON object declaration does not declare a `__class`.")
					return object
				end

				if not class_name isa String then
					errors.add new Error("Deserialization Error: JSON object declaration declares a non-string `__class`.")
					return object
				end

				if not accept(class_name, static_type) then return null

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
					errors.add new Error("Deserialization Error: JSON `char` object does not declare a `__val`.")
					return object
				end

				var val = object["__val"]

				if not val isa String or val.is_empty then
					errors.add new Error("Deserialization Error: JSON `char` object does not declare a single char in `__val`.")
					return object
				end

				return val.chars.first
			end

			# byte?
			if kind == "byte" then
				var val = object.get_or_null("__val")
				if not val isa Int then
					errors.add new Error("Serialization Error: JSON `byte` object does not declare an integer `__val`.")
					return object
				end

				return val.to_b
			end

			errors.add new Error("Deserialization Error: JSON object has an unknown `__kind`.")
			return object
		end

		# Simple JSON array without serialization metadata
		if object isa Array[nullable Object] then
			# Can we use the static type?
			if static_type != null then
				opened_array = object
				var value = deserialize_class(static_type.strip_nullable)
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

			# Uninferrable type, return as `Array[nullable Object]`
			return array
		end

		if object isa String and object.length == 1 and static_type == "Char" then
			# Char serialized as a JSON string
			return object.chars.first
		end

		if object isa Int and static_type == "Byte" then
			# Byte serialized as an integer
			return object.to_b
		end

		return object
	end

	# Current array open for deserialization, used by `SimpleCollection::from_deserializer`
	private var opened_array: nullable Array[nullable Object] = null

	redef fun deserialize(static_type)
	do
		errors.clear
		return convert_object(root, static_type)
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
	# ~~~
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
	# assert deserializer.errors.is_empty
	# assert deserialized isa MyData
	#
	# json = """{"error": "some error message",
	#            "related_data": {"data": "some other data"}}"""
	# deserializer = new MyJsonDeserializer(json)
	# deserialized = deserializer.deserialize
	# assert deserializer.errors.is_empty
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
	# If a `static_type` is given, only subtypes of the `static_type` are accepted.
	#
	# Warning: Deserialization errors are reported with `print_error` and
	# may be returned as a partial object or as `null`.
	#
	# This method is not appropriate when errors need to be handled programmatically,
	# manually use a `JsonDeserializer` in such cases.
	fun deserialize_json(static_type: nullable String): nullable Object
	do
		var deserializer = new JsonDeserializer(self)
		var res = deserializer.deserialize(static_type)
		if deserializer.errors.not_empty then
			print_error "Deserialization Errors: {deserializer.errors.join(", ")}"
		end
		return res
	end
end

redef class SimpleCollection[E]
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

			# Name of the dynamic name of E
			var items_type_name = (new GetName[E]).to_s

			# Fill array
			for o in open_array do
				var obj = v.convert_object(o, items_type_name)
				if obj isa E then
					add obj
				else v.errors.add new AttributeTypeError(self, "items", obj, items_type_name)
			end
		end
	end
end

redef class Map[K, V]
	redef init from_deserializer(v)
	do
		super

		if v isa JsonDeserializer then
			v.notify_of_creation self
			init

			var keys_type_name = (new GetName[K]).to_s
			var values_type_name = (new GetName[V]).to_s

			var length = v.deserialize_attribute("__length")
			var keys = v.path.last.get_or_null("__keys")
			var values = v.path.last.get_or_null("__values")

			if keys == null and values == null then
				# Fallback to a plain object
				for key, value_src in v.path.last do

					var value = v.convert_object(value_src, values_type_name)

					if not key isa K then
						v.errors.add new AttributeTypeError(self, "keys", key, keys_type_name)
						continue
					end

					if not value isa V then
						v.errors.add new AttributeTypeError(self, "values", value, values_type_name)
						continue
					end

					self[key] = value
				end
				return
			end

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

			# First, convert all keys to follow the order of the serialization
			var converted_keys = new Array[K]
			for i in length.times do
				var key = v.convert_object(keys[i], keys_type_name)

				if not key isa K then
					v.errors.add new AttributeTypeError(self, "keys", key, keys_type_name)
					continue
				end

				converted_keys.add key
			end

			# Then convert the values and build the map
			for i in length.times do
				var key = converted_keys[i]
				var value = v.convert_object(values[i], values_type_name)

				if not value isa V then
					v.errors.add new AttributeTypeError(self, "values", value, values_type_name)
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

# ---
# Metamodel

# Class inheritance graph as a `POSet[String]` serialized to JSON
private fun class_inheritance_metamodel_json: CString is intern

redef class Sys
	redef var class_inheritance_metamodel is lazy do
		var engine = new JsonDeserializer(class_inheritance_metamodel_json.to_s)
		engine.check_subtypes = false
		engine.whitelist.add_all(
			["String", "POSet[String]", "POSetElement[String]",
			 "HashSet[String]", "HashMap[String, POSetElement[String]]"])

		var poset = engine.deserialize
		if engine.errors.not_empty then
			print_error "Deserialization errors in class_inheritance_metamodel:"
			print_error engine.errors.join("\n* ")
			return new POSet[String]
		end

		if poset isa POSet[String] then return poset
		return new POSet[String]
	end
end
