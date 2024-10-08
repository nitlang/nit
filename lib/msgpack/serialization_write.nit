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

# Serialize full Nit objects to MessagePack format
#
# There are 3 main entrypoint services:
# * `Writer::serialize_msgpack` adds an object to any stream writer.
# * `Serializable::serialize_msgpack` serializes the object to bytes.
# * `MsgPackSerializer` gives full control over the serialization of
#   Nit objets to the MessagePack format.
module serialization_write

import serialization::caching
private import serialization::engine_tools

import serialization_common
private import write
import ext

# MessagePack deserialization engine
class MsgPackSerializer
	super CachingSerializer
	super MsgPackEngine

	# Target writing stream
	var stream: Writer

	# Write plain MessagePack without metadata for deserialization?
	#
	# If `false`, the default, serialize to support deserialization:
	#
	# * Each object is encapsulated in an array that contains metadata and
	#   the actual object attributes in a map. The metadata includes the type
	#   name and references to already serialized object. This information
	#   supports deserializing the message, including cycles.
	# * Preserve the Nit `Char` and `Byte` types as an object.
	# * The generated MessagePack is standard and can be read by non-Nit programs.
	#   However, it contains some complexity that may make it harder to use.
	#
	# If `true`, serialize only the real data or non-Nit programs:
	#
	# * Nit objects are serialized to pure and standard MessagePack so they can
	#   be easily read by non-Nit programs.
	# * Nit objects are serialized at every reference, so they may be duplicated.
	#   It is easier to read but it creates a larger output and it does not support
	#   cycles. Cyclic references are replaced by `null`.
	# * The serialized data can only be deserialized to their expected static
	#   types, losing the knowledge of their dynamic type.
	var plain_msgpack = false is writable

	# Should strings declaring the objects type and attributes name be cached?
	#
	# If `true` metadata strings are cached using `cache`.
	# The first occurrence is written as an object declaration,
	# successive occurrences are written as an object reference.
	#
	# If `false`, the default, metadata strings are written as pure MessagePack
	# strings, without their own metadata.
	#
	# Using the cache may save some space by avoiding the repetition of
	# names used by many types or attributes.
	# However, it adds complexity to the generated message and may be less
	# safe for versioning.
	var cache_metadata_strings = false is writable

	# List of the current open objects, the first is the main target of the serialization
	#
	# Used only when `plain_msgpack == true` to detect cycles in serialization.
	private var open_objects = new Array[Object]

	redef var current_object = null

	redef fun serialize(object)
	do
		if object == null then
			stream.write_msgpack_null
		else
			if plain_msgpack then
				for o in open_objects do
					if object.is_same_serialized(o) then
						# Cycle, can't be managed in plain_msgpack mode
						warn "Cycle detected in serialized object, replacing reference with 'null'."
						stream.write_msgpack_null
						return
					end
				end

				open_objects.add object
			end

			var last_object = current_object
			current_object = object
			object.accept_msgpack_serializer self
			current_object = last_object

			if plain_msgpack then open_objects.pop
		end
	end

	redef fun serialize_attribute(name, value)
	do
		serialize_meta_string name
		super
	end

	redef fun serialize_reference(object)
	do
		if not plain_msgpack and cache.has_object(object) then
			# if already serialized, add local reference
			var id = cache.id_for(object)
			stream.write_msgpack_ext(ext_typ_ref, id.to_bytes)
		else
			# serialize
			serialize object
		end
	end

	private fun serialize_meta_string(type_name: String)
	do
		if plain_msgpack or not cache_metadata_strings then
			# String only version
			stream.write_msgpack_str type_name
			return
		end

		if cache.has_object(type_name) then
			# if already serialized, add reference
			var id = cache.id_for(type_name)
			stream.write_msgpack_ext(ext_typ_ref, id.to_bytes)
		else
			# serialize
			var id = cache.new_id_for(type_name)
			stream.write_msgpack_array 2 # obj+id, type_name
			stream.write_msgpack_ext(ext_typ_obj, id.to_bytes)
			stream.write_msgpack_str type_name
		end
	end
end

# Serialization visitor to count attribute in `Serializable` objects
class AttributeCounter
	super Serializer

	# Number of attributes counted
	var count = 0

	redef fun serialize_attribute(name, object) do count += 1
end

# ---
# Services and serializables

redef class Writer
	# Serialize `value` in MessagePack format
	fun serialize_msgpack(value: nullable Serializable, plain: nullable Bool)
	do
		var serializer = new MsgPackSerializer(self)
		serializer.plain_msgpack = plain or else false
		serializer.serialize value
	end
end

redef class Serializable

	# Serialize `self` to MessagePack bytes
	#
	# Set `plain = true` to generate standard MessagePack, without deserialization metadata.
	# Use this option if the generated MessagePack will be read by non-Nit programs.
	# Use the default, `plain = false`, if the MessagePack bytes are to be deserialized by a Nit program.
	fun serialize_msgpack(plain: nullable Bool): Bytes
	do
		var stream = new BytesWriter
		stream.serialize_msgpack(self, plain)
		stream.close
		return stream.bytes
	end

	# Hook to customize the serialization of this class to MessagePack
	#
	# This method can be refined to customize the serialization by either
	# writing pure JSON directly on the stream `v.stream` or
	# by using other services of `MsgPackSerializer`.
	#
	# Most of the time, it is better to refine the method `core_serialize_to`
	# which is used by all the serialization engines, not just MessagePack.
	protected fun accept_msgpack_serializer(v: MsgPackSerializer)
	do

		# Count the number of attributes
		var attribute_counter = new AttributeCounter
		accept_msgpack_attribute_counter attribute_counter
		var n_attributes = attribute_counter.count

		if not v.plain_msgpack then

			var n_meta_items = 2
			if n_attributes > 0 then n_meta_items += 1
			n_meta_items += msgpack_extra_array_items # obj+id, class_name, attributes

			# Metadata
			var id = v.cache.new_id_for(self)
			v.stream.write_msgpack_array n_meta_items
			v.stream.write_msgpack_ext(v.ext_typ_obj, id.to_bytes)
			v.serialize_meta_string class_name

			if n_attributes > 0 then v.stream.write_msgpack_map n_attributes
		else
			v.stream.write_msgpack_map n_attributes
		end

		v.serialize_core self
	end

	# Hook to customize the behavior of the `AttributeCounter`
	#
	# By default, this method makes `v` visits all serializable attributes.
	protected fun accept_msgpack_attribute_counter(v: AttributeCounter)
	do
		v.serialize_core self
	end

	# Hook to request a larger than usual metadata array
	#
	# Use by `SimpleCollection` and `Map` to append the items after
	# the metadata and attributes.
	protected fun msgpack_extra_array_items: Int do return 0
end

redef class MsgPackExt
	redef fun accept_msgpack_serializer(v) do v.stream.write_msgpack_ext(typ, data)
end

redef class Text
	redef fun accept_msgpack_serializer(v) do v.stream.write_msgpack_str self
end

redef class Int
	redef fun accept_msgpack_serializer(v) do v.stream.write_msgpack_int self
end

redef class Float
	redef fun accept_msgpack_serializer(v) do v.stream.write_msgpack_double self
end

redef class Bool
	redef fun accept_msgpack_serializer(v) do v.stream.write_msgpack_bool self
end

redef class Byte
	redef fun accept_msgpack_serializer(v)
	do
		if v.plain_msgpack then
			# Write as a string
			v.stream.write_msgpack_int to_i
		else
			# Write as ext
			var bytes = new Bytes.with_capacity(1)
			bytes.add self.to_i
			v.stream.write_msgpack_ext(v.ext_typ_byte, bytes)
		end
	end
end

redef class Char
	redef fun accept_msgpack_serializer(v)
	do
		if v.plain_msgpack then
			# Write as a string
			v.stream.write_msgpack_fixstr to_s
		else
			# Write as ext
			var bytes = to_s.to_bytes
			v.stream.write_msgpack_ext(v.ext_typ_char, bytes)
		end
	end
end

redef class Bytes
	redef fun accept_msgpack_serializer(v) do v.stream.write_msgpack_bin self
end

redef class CString
	redef fun accept_msgpack_serializer(v) do to_s.accept_msgpack_serializer(v)
end

redef class SimpleCollection[E]
	redef fun accept_msgpack_serializer(v)
	do
		if not v.plain_msgpack then
			# Add metadata and other attributes
			super
		end

		# Header
		v.stream.write_msgpack_array length

		# Items
		for e in self do
			if not v.try_to_serialize(e) then
				assert e != null # null would have been serialized
				v.warn "element of type {e.class_name} is not serializable."
				v.stream.write_msgpack_null
			end
		end
	end

	redef fun msgpack_extra_array_items do return 1
end

redef class Map[K, V]
	redef fun accept_msgpack_serializer(v)
	do
		if not v.plain_msgpack then
			# Add metadata and other attributes
			super
		end

		# Header
		v.stream.write_msgpack_map keys.length

		# Key / values, alternating
		for key, val in self do
			if not v.try_to_serialize(key) then
				assert val != null # null would have been serialized
				v.warn "element of type {val.class_name} is not serializable."
				v.stream.write_msgpack_null
			end

			if not v.try_to_serialize(val) then
				assert val != null # null would have been serialized
				v.warn "element of type {val.class_name} is not serializable."
				v.stream.write_msgpack_null
			end
		end
	end

	redef fun msgpack_extra_array_items do return 1
end
