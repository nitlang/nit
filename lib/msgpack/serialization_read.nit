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

# Deserialize full Nit objects from MessagePack format
#
# See the package `msgpack` for more details on the serialization
# of Nit objects.
module serialization_read

import serialization::caching
import serialization::safe
private import json # for class_inheritance_metamodel
private import serialization::engine_tools

import serialization_common
private import read
import ext

# ---
# Easy services

redef class Bytes

	# Deserialize full Nit `nullable Object` from MessagePack formated data
	#
	# The dynamic type of the deserialized object can be limited to `static_type`.
	#
	# Warning: Deserialization errors are reported with `print_error`,
	# the returned object may be partial or fall back on `null`.
	# To handle the errors programmatically, use a `MsgPackDeserializer`.
	fun deserialize_msgpack(static_type: nullable String): nullable Object
	do
		var stream = new BytesReader(self)
		var res = stream.deserialize_msgpack(static_type)
		stream.close
		return res
	end
end

redef class Reader

	# Deserialize full Nit `nullable Object` from MessagePack formated data
	#
	# This method use metadata in the MessagePack source to recreate full
	# Nit objects serialized by `Writer::serialize_msgpack` or
	# `MsgPackSerializer`.
	#
	# The dynamic type of the deserialized object can be limited to `static_type`.
	#
	# Warning: Deserialization errors are reported with `print_error`,
	# the returned object may be partial or fall back on `null`.
	# To handle the errors programmatically, use a `MsgPackDeserializer`.
	fun deserialize_msgpack(static_type: nullable String): nullable Object
	do
		var deserializer = new MsgPackDeserializer(self)
		var res = deserializer.deserialize(static_type)

		if deserializer.errors.length == 1 then
			print_error deserializer.errors.join("")
		else if deserializer.errors.not_empty then
			print_error "Deserialization Errors:\n* {deserializer.errors.join("\n* ")}"
		end

		return res
	end
end

# ---
# Engine

# Deserialize MessagePack format to full Nit objects
class MsgPackDeserializer
	super CachingDeserializer
	super MsgPackEngine
	super SafeDeserializer

	# Source stream
	var stream: Reader

	# Map of attributes from the root deserialized object to the current object
	private var path = new Array[Map[nullable Serializable, nullable Serializable]]

	# Metadata arrays with from the root deserialized object to the current object
	var path_arrays = new Array[nullable Array[nullable Object]]

	# Names of the attributes from the root to the object currently being deserialized
	var attributes_path = new Array[String]

	# Last encountered object reference id.
	#
	# See `id_to_object`.
	private var just_opened_id: nullable Int = null

	redef fun deserialize_attribute(name, static_type)
	do
		if path.is_empty then
			# The was a parsing error or the root is not an object
			deserialize_attribute_missing = false
			return null
		end

		var current = path.last

		var serialized_value = null
		var serialized_value_found = false
		if current.keys.has(name) then
			# Non-cached string
			serialized_value = current[name]
			serialized_value_found = true
		else
			# It may be cached, deserialize all keys until we find it
			for key in current.keys.to_a do
				if key isa Array[nullable Serializable] or key isa MsgPackExt then
					var str = convert_object(key, "String")
					if str isa String then
						var value = current[key]
						current.keys.remove key
						current[str] = value

						if str == name then
							serialized_value = value
							serialized_value_found = true
							break
						end
					end
				end
			end
		end

		if not serialized_value_found then
			# Let the generated code / caller of `deserialize_attribute` raise the missing attribute error
			deserialize_attribute_missing = true
			return null
		end

		attributes_path.add name
		var res = convert_object(serialized_value, static_type)
		attributes_path.pop

		deserialize_attribute_missing = false
		return res
	end

	# This may be called multiple times by the same object from defs of a same constructor
	redef fun notify_of_creation(new_object)
	do
		var id = just_opened_id
		if id == null then return
		cache[id] = new_object
	end

	# Convert the simple JSON `object` to a Nit object
	private fun convert_object(object: nullable Object, static_type: nullable String): nullable Object
	do
		#print "convert_object {if object != null then object.class_name else "null"}"
		if object isa Array[nullable Object] and object.length >= 1 then
			# Serialized object?
			var first = object.first
			if first isa MsgPackExt then
				if first.typ == ext_typ_obj then
					# An array starts with a *ext*, it must be a serialized object

					# New object declaration
					var id = first.data.to_i

					if cache.has_id(id) then
						# FIXME use Warning
						errors.add new Error("Deserialization Error: object with id {id} is deserialized twice.")
						# Keep going
					end

					var type_name = null
					var i = 1

					# Read dynamic type
					if object.length >= 2 then

						# Try to get the type name as a string
						var o = object[i]
						if o isa String and static_type == "String" and object.length == 2 then
							cache[id] = o
							return o
						else
							var typ = convert_object(object[i], "String")
							if typ isa String then
								type_name = typ
								i += 1
							end
						end
					end

					if type_name == null then
						# There was no dynamic type

						# We could use a `class_name_heuristic` here...

						# Fallback to the static type
						if static_type != null then
							type_name = static_type.strip_nullable
						end

						if type_name == null then
							errors.add new Error("Deserialization Error: could not determine dynamic type of `{object}`.")
							return null
						end
					end

					if not accept(type_name, static_type) then return null

					var attributes = null
					if object.length > i then attributes = object[i]
					if not attributes isa Map[nullable Serializable, nullable Serializable] then
						# Some other type (could be an error), or there's no attributes
						attributes = new Map[nullable Serializable, nullable Serializable]
					end

					# advance on path
					path.push attributes
					path_arrays.push object

					just_opened_id = id
					var value = deserialize_class(type_name)
					just_opened_id = null

					# revert on path
					path.pop
					path_arrays.pop

					return value
				else
					errors.add new Error("Deserialization Error: unknown MessagePack ext '{first.typ}'.")
				end
			end

			# Plain array? Try to convert it to the desired static_type
			if static_type != null then
				return deserialize_class(static_type.strip_nullable)
			end
			return object
		end

		if object isa Map[nullable Serializable, nullable Serializable] then
			# Plain map
			# TODO parse it as an instance of `static_type`

			if static_type != null then
				path.push object
				path_arrays.push null

				just_opened_id = null
				var value = deserialize_class(static_type.strip_nullable)

				path.pop
				path_arrays.pop

				return value
			end

			return object
		end

		if object isa MsgPackExt then

			# First try the custom extensions
			var custom = deserialize_ext(object, static_type)
			if custom == null then

				# No custom, go for deser standard references
				if object.typ == ext_typ_ref then
					# Reference to an object
					var id = object.data.to_i
					if not cache.has_id(id) then
						errors.add new Error("Deserialization Error: object reference id unknown.")
						return object
					end
					return cache.object_for(id)

				else if object.typ == ext_typ_char then
					# Char
					return object.data.to_s.first

				else if object.typ == ext_typ_byte then
					# Byte
					return object.data.first
				end
			end
		end

		if object isa String and object.length == 1 and static_type == "Char" then
			# Char serialized as a string
			return object.chars.first
		end

		if object isa Int and static_type == "Byte" then
			# Byte serialized as an integer
			return object.to_b
		end

		return object
	end

	redef fun deserialize(static_type)
	do
		errors.clear

		var root = stream.read_msgpack
		return convert_object(root, static_type)
	end

	# Hook to customize the deserialization of MessagePack extensions
	#
	# Redefine this method in subclasses to return custom Nit objects from
	# an application specific extension.
	#
	# This method is invoked before dealing with the extensions used by the
	# Nit serialization metadata [0x40..0x43]. In general, you should ignore
	# them by returning `null`, but they can also be intercepted to comply to
	# a format from a remote server.
	protected fun deserialize_ext(ext: MsgPackExt, static_type: nullable String): nullable Object
	do
		return null
	end
end

redef class SimpleCollection[E]
	redef init from_deserializer(v)
	do
		super
		if v isa MsgPackDeserializer then
			v.notify_of_creation self
			init

			var open_array = v.path_arrays.last
			var msgpack_items = null
			if open_array != null then msgpack_items = open_array.last

			if not msgpack_items isa Array[nullable Serializable] then
				v.errors.add new Error("Deserialization Error: no items in source of `{class_name}`")
				return
			end

			# Name of the dynamic name of E
			var items_type_name = (new GetName[E]).to_s

			# Fill array
			for o in msgpack_items do
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

		if v isa MsgPackDeserializer then
			v.notify_of_creation self
			init

			var open_object = v.path_arrays.last
			var msgpack_items
			if open_object != null then
				# Metadata available
				msgpack_items = open_object.last
			else
				msgpack_items = v.path.last
			end

			if not msgpack_items isa Map[nullable Object, nullable Object] then
				v.errors.add new Error("Deserialization Error: no key/values in source of `{class_name}`")
				return
			end

			var keys_type_name = (new GetName[K]).to_s
			var values_type_name = (new GetName[V]).to_s

			for key_src, value_src in msgpack_items do
				var key = v.convert_object(key_src, keys_type_name)
				if not key isa K then
					v.errors.add new AttributeTypeError(self, "keys", key, keys_type_name)
					continue
				end

				var value = v.convert_object(value_src, values_type_name)
				if not value isa V then
					v.errors.add new AttributeTypeError(self, "values", value, values_type_name)
					continue
				end

				self[key] = value
			end
		end
	end
end
