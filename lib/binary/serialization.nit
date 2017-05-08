# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Serialize and deserialize Nit objects to binary streams
#
# The serialized data format uses a dictionary structure similar to BSON:
#
# ~~~raw
# object = 0x01                    # null
#        | 0x02 id attributes      # New object
#        | 0x03 id                 # Ref to object
#        | 0x04 int64              # Int
#        | 0x05 int8               # Bool (int8 != 0)
#        | 0x06 utf8 byte sequence # Char
#        | 0x07 double(64 bits)    # Float
#        | 0x08 block              # String
#        | 0x09 block              # CString
#        | 0x0A flat_array;        # Array[nullable Object]
#
# block = int64 int8*;
# cstring = int8* 0x00;
# id = int64;
#
# attributes = attribute* 0x00;
# attribute = cstring object;
# ~~~
module serialization

import ::serialization::caching
private import ::serialization::engine_tools
import binary
import more_collections

# ---
# Special bytes, marking the kind of objects in the stream and the end on an object

private fun kind_null: Byte do return 0x01u8
private fun kind_object_new: Byte do return 0x02u8
private fun kind_object_ref: Byte do return 0x03u8
private fun kind_int: Byte do return 0x04u8
private fun kind_bool: Byte do return 0x05u8
private fun kind_char: Byte do return 0x06u8
private fun kind_float: Byte do return 0x07u8
private fun kind_string: Byte do return 0x08u8
private fun kind_c_string: Byte do return 0x09u8
private fun kind_flat_array: Byte do return 0x0Au8

private fun new_object_end: Byte do return 0x00u8

#---
# Engines

# Writes Nit objects to the binary `stream`
#
# The output can be deserialized with `BinaryDeserializer`.
class BinarySerializer
	super CachingSerializer

	# Target writing stream
	var stream: Writer is writable

	redef var current_object = null

	redef fun serialize(object)
	do
		if object == null then
			stream.write_byte kind_null
		else serialize_reference(object)
	end

	redef fun serialize_attribute(name, value)
	do
		stream.write_string name
		super
	end

	redef fun serialize_reference(object)
	do
		if cache.has_object(object) then
			# if already serialized, add local reference
			var id = cache.id_for(object)
			stream.write_byte kind_object_ref
			stream.write_int64 id
		else
			# serialize here
			var last_object = current_object
			current_object = object
			object.serialize_to_binary self
			current_object = last_object
		end
	end

	# Write `collection` as a simple list of objects
	private fun serialize_flat_array(collection: Collection[nullable Object])
	do
		stream.write_byte kind_flat_array
		stream.write_int64 collection.length
		for e in collection do
			if not try_to_serialize(e) then
				assert e != null
				warn "Element of {collection} is not serializable, it is a {e}"
				serialize null
			end
		end
	end
end

# Deserialize Nit objects from a binary `stream`
#
# Used with `BinarySerializer`.
class BinaryDeserializer
	super CachingDeserializer

	# Source `Reader` stream
	var stream: Reader

	# Last encountered object reference id.
	#
	# See `cache.received`.
	private var just_opened_id: nullable Int = null

	# Tree of attributes, deserialized but not yet claimed
	private var unclaimed_attributes = new UnrolledList[HashMap[String, nullable Object]]

	# Buffer for one char
	private var char_buf: CString is lazy do return new CString(4)

	# Read and deserialize the next attribute name and value
	#
	# A `peeked_char` can suffix the next attribute name.
	#
	# Returns `null` on error.
	private fun deserialize_next_attribute(peeked_char: nullable Byte):
		nullable Couple[String, nullable Object]
	do
		# Try the next attribute
		var next_attribute_name = stream.read_string
		var next_object = deserialize_next_object

		if stream.last_error != null then return null

		if peeked_char != null then
			# Replace a char peeked to find an object end
			next_attribute_name = "{peeked_char}{next_attribute_name}"
		end

		return new Couple[String, nullable Object](next_attribute_name, next_object)
	end

	redef fun deserialize_attribute(name, static_type)
	do
		if unclaimed_attributes.last.keys.has(name) then
			# Pick in already deserialized attributes
			var value = unclaimed_attributes.last[name]
			unclaimed_attributes.last.keys.remove(name)
			return value
		end

		# Read attributes until we find the wanted one named `name`
		loop
			var next = deserialize_next_attribute
			if next == null then
				# Error was already logged
				return null
			end

			var next_attribute_name = next.first
			var next_object = next.second

			# Got the wanted object
			if next_attribute_name == name then return next_object

			# An invalid attribute name is an heuristic for invalid data.
			# Hitting an object end marker will result in an empty string.
			if not next_attribute_name.is_valid_id then

				var error
				if next_attribute_name.is_empty then
					# Reached the end of the object
					error = new Error("Deserialization Error: Attributes '{name}' not in stream.")
				else
					error = new Error("Deserialization Error: Got an invalid attribute name '{next_attribute_name}', expected '{name}'")
					# TODO this is invalid data, break even on keep_going
				end
				errors.add error
				return null
			end

			# It's not the next attribute, put it aside
			unclaimed_attributes.last[next_attribute_name] = next_object
		end
	end

	redef fun notify_of_creation(new_object)
	do
		var id = just_opened_id
		if id == null then return
		cache[id] = new_object
	end

	# Convert from simple Json object to Nit object
	private fun deserialize_next_object: nullable Object
	do
		var kind = stream.read_byte
		assert kind isa Byte else
			# TODO break even on keep_going
			return null
		end

		# After this point, all stream reading errors are caught later

		if kind == kind_null then return null
		if kind == kind_int then return stream.read_int64
		if kind == kind_bool then return stream.read_bool
		if kind == kind_float then return stream.read_double
		if kind == kind_char then
			var bf = char_buf
			var b = stream.read_byte
			if b == null then return '�'
			var ln = b.u8len
			bf[0] = b
			for i in [1 .. ln[ do
				b = stream.read_byte
				if b == null then return '�'
				bf[i] = b
			end
			return bf.to_s_unsafe(ln, copy=false)[0]
		end
		if kind == kind_string then return stream.read_block
		if kind == kind_c_string then return stream.read_block.to_cstring

		if kind == kind_flat_array then
			# An array
			var length = stream.read_int64
			var array = new Array[nullable Object]
			for i in length.times do
				array.add deserialize_next_object
			end
			return array
		end

		if kind == kind_object_ref then
			# A reference
			var id = stream.read_int64
			if stream.last_error != null then return null

			if not cache.has_id(id) then
				errors.add new Error("Deserialization Error: Unknown reference to id #{id}")
				return null
			end
			return cache.object_for(id)
		end

		if kind == kind_object_new then
			# A new object
			var id = stream.read_int64
			if stream.last_error != null then return null

			if cache.has_id(id) then
				errors.add new Error("Deserialization Error: Duplicated use of reference #{id}")
				return null
			end

			var class_name = stream.read_string

			if stream.last_error != null then return null

			# Use the validity of the `class_name` as heuristic to detect invalid data
			if not class_name.is_valid_id then
				errors.add new Error("Deserialization Error: got an invalid class name '{class_name}'")
				return null
			end

			# Prepare opening a new object
			just_opened_id = id
			unclaimed_attributes.push new HashMap[String, nullable Object]

			var value = deserialize_class(class_name)

			# Check for the attributes end marker
			loop
				var next_byte = stream.read_byte
				if next_byte == new_object_end then break

				# Fetch an additional attribute, even if it isn't expected
				deserialize_next_attribute(next_byte)
			end

			# Close object
			unclaimed_attributes.pop
			just_opened_id = null

			return value
		end

		errors.add new Error("Deserialization Error: Unknown binary object kind `{kind}`")
		# TODO fatal error and break even on keep_going
		return null
	end

	redef fun deserialize(static_type)
	do
		errors.clear

		var value = deserialize_next_object

		var error = stream.last_error
		if error != null then
			errors.add error
			return true
		end

		return value
	end
end

# ---
# Services

redef class Text
	# Is `self` a valid identifier for a Nit class or property?
	private fun is_valid_id: Bool
	do
		if trim.is_empty then return false

		for c in chars do
			if not (c.is_letter or c.is_numeric or c == '[' or c == ']' or
			        c == ' ' or c == ',' or c == '_') then return false
		end

		return true
	end

	redef fun serialize_to_binary(v)
	do
		v.stream.write_byte kind_string
		v.stream.write_block to_s
	end
end

# ---
# Per class serialization behavior

redef class Serializable
	# Write the binary serialization header
	#
	# The header for a normal object is:
	# 1. The kind of object on 8 bits, `0x01` for a new object.
	# 2. The id of this object so it is not serialized more than once.
	# 3. The name of the object type as a null terminated string.
	private fun serialize_header_to_binary(v: BinarySerializer)
	do
		var id = v.cache.new_id_for(self)
		v.stream.write_byte kind_object_new # is object intro
		v.stream.write_int64 id
		v.stream.write_string class_name
	end

	# Write a normal object to binary
	private fun serialize_to_binary(v: BinarySerializer)
	do
		serialize_header_to_binary v
		v.serialize_core self
		v.stream.write_byte new_object_end
	end
end

redef class Int
	redef fun serialize_to_binary(v)
	do
		v.stream.write_byte kind_int
		v.stream.write_int64 self
	end
end

redef class Float
	redef fun serialize_to_binary(v)
	do
		v.stream.write_byte kind_float
		v.stream.write_double self
	end
end

redef class Bool
	redef fun serialize_to_binary(v)
	do
		v.stream.write_byte kind_bool
		v.stream.write_bool self
	end
end

redef class Char
	redef fun serialize_to_binary(v)
	do
		v.stream.write_byte kind_char
		for i in bytes do v.stream.write_byte i
	end
end

redef class CString
	redef fun serialize_to_binary(v)
	do
		v.stream.write_byte kind_c_string
		v.stream.write_block to_s
	end
end

redef class SimpleCollection[E]

	redef fun serialize_to_binary(v)
	do
		serialize_header_to_binary v

		v.stream.write_string "items"
		v.serialize_flat_array self

		v.stream.write_byte new_object_end
	end

	redef init from_deserializer(v)
	do
		# Give a chance to other engines, and defs
		super

		if v isa BinaryDeserializer then
			v.notify_of_creation self
			init

			var items = v.deserialize_attribute("items")
			assert items isa Array[nullable Object]
			for item in items do
				assert item isa E else
					var item_type = "null"
					if item != null then item_type = item.class_name

					v.errors.add new Error("Deserialization Error: invalid type '{item_type}' for the collection '{class_name}'")
					continue
				end

				add item
			end
		end
	end
end

redef class Map[K, V]
	redef fun serialize_to_binary(v)
	do
		serialize_header_to_binary v

		v.serialize_core self

		v.stream.write_string "keys"
		v.serialize_flat_array keys

		v.stream.write_string "values"
		v.serialize_flat_array values

		v.stream.write_byte new_object_end
	end

	# Instantiate a new `Array` from its serialized representation.
	redef init from_deserializer(v)
	do
		# Give a chance to other engines, and defs
		super

		if v isa BinaryDeserializer then
			v.notify_of_creation self

			init

			var keys = v.deserialize_attribute("keys")
			var values = v.deserialize_attribute("values")
			assert keys isa Array[nullable Object]
			assert values isa Array[nullable Object]

			for i in keys.length.times do
				var key = keys[i]
				var value = values[i]

				if not key isa K then
					var item_type = "null"
					if key != null then item_type = key.class_name

					v.errors.add new Error("Deserialization Error: Invalid key type '{item_type}' for '{class_name}'")
					continue
				end

				if not value isa V then
					var item_type = "null"
					if value != null then item_type = value.class_name

					v.errors.add new Error("Deserialization Error: Invalid value type '{item_type}' for '{class_name}'")
					continue
				end

				self[key] = value
			end
		end
	end
end
