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

# Services to write Nit objects to JSON strings: `serialize_to_json` and `JsonSerializer`
module serialization_write

import ::serialization::caching
private import ::serialization::engine_tools

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

	redef var current_object = null

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
			var last_object = current_object
			current_object = object
			object.accept_json_serializer self
			first_attribute = false
			current_object = last_object

			if plain_json then open_objects.pop
		end
	end

	redef fun serialize_attribute(name, value)
	do
		if not plain_json or not first_attribute then
			stream.write ","
		end
		first_attribute = false

		new_line_and_indent
		stream.write "\""
		stream.write name
		stream.write "\":"
		if pretty_json then stream.write " "
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

redef class Text

	redef fun accept_json_serializer(v)
	do
		v.stream.write "\""

		var start_i = 0
		var escaped = null
		for i in [0 .. self.length[ do
			var char = self[i]
			if char == '\\' then
				escaped = "\\\\"
			else if char == '\"' then
				escaped = "\\\""
			else if char < ' ' then
				if char == '\n' then
					escaped = "\\n"
				else if char == '\r' then
					escaped = "\\r"
				else if char == '\t' then
					escaped = "\\t"
				else
					escaped = char.escape_to_utf16
				end
			end

			if escaped != null then
				# Write open non-escaped string
				if start_i <= i then
					v.stream.write substring(start_i, i-start_i)
				end

				# Write escaped character
				v.stream.write escaped
				escaped = null
				start_i = i+1
			end
		end

		# Write remaining non-escaped string
		if start_i < length then
			if start_i == 0 then
				v.stream.write self
			else
				v.stream.write substring(start_i, length-start_i)
			end
		end

		v.stream.write "\""
	end
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

	# Serialize `self` to plain JSON
	#
	# Compatibility alias for `serialize_to_json(plain=true)`.
	fun to_json: String do return serialize_to_json(plain=true)

	# Serialize `self` to plain pretty JSON
	#
	# Compatibility alias for `serialize_to_json(plain=true, pretty=true)`.
	fun to_pretty_json: String do return serialize_to_json(plain=true, pretty=true)

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
		v.serialize_core(self)

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

redef class CString
	redef fun accept_json_serializer(v) do to_s.accept_json_serializer(v)
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
			else
				v.stream.write ","
				if v.pretty_json then v.stream.write " "
			end

			if not v.try_to_serialize(e) then
				assert e != null # null would have been serialized
				v.warn("element of type {e.class_name} is not serializable.")
				v.stream.write "null"
			end
		end
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
			serialize_to_pure_json v
			core_serialize_to v
		else
			serialize_to_pure_json v
		end

		if not v.plain_json then
			v.indent_level -= 1
			v.new_line_and_indent
			v.stream.write "\}"
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
				v.stream.write ":"
				if v.pretty_json then v.stream.write " "
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
end
