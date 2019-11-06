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

# Refine `Serializable::inspect` to show more useful information
module inspect

import serialization_core
private import caching

private fun inspect_testing: Bool do return "NIT_TESTING".environ == "true"

# Serialization engine writing the object attributes to strings
private class InspectSerializer
	super CachingSerializer

	# Target writing stream
	var stream: Writer

	redef var current_object = null

	var first_object: nullable Object = null

	redef fun serialize(object)
	do
		if object == null then
			stream.write "null"
		else
			if current_object == null then
				first_object = object
			end

			var last_object = current_object
			current_object = object
			object.accept_inspect_serializer self
			current_object = last_object
		end
	end

	var first_attribute_serialized = false

	redef fun serialize_attribute(name, value)
	do
		if first_attribute_serialized then
			stream.write ", "
		else
			stream.write " "
			first_attribute_serialized = true
		end

		stream.write name
		stream.write ":"

		super
	end

	redef fun serialize_reference(object)
	do
		if cache.has_object(object) then
			# Cycle
			var id = object.object_id
			if inspect_testing then id = cache.id_for(object)

			stream.write "<"
			stream.write object.class_name
			stream.write "#"
			stream.write id.to_s
			stream.write ">"
		else if object != first_object and (not object isa DirectSerializable) then
			# Another object, print class and id only
			var id = object.object_id
			if inspect_testing then id = cache.new_id_for(object)

			stream.write "<"
			stream.write object.class_name
			stream.write "#"
			stream.write id.to_s
			stream.write ">"
		else
			# Main object
			serialize object
		end
	end
end

redef class Serializable

	# Improve the default inspection reading serializable attributes
	#
	# Simple immutable data are inspected as they would be written in Nit code.
	#
	# ~~~
	# assert 123.inspect == "123"
	# assert 1.5.inspect == "1.5"
	# assert 0xa1u8.inspect == "0xa1u8"
	# assert 'c'.inspect == "'c'"
	# assert "asdf\n".inspect == "\"asdf\\n\""
	# ~~~
	#
	# Inspections of mutable serializable objects show their dynamic type,
	# their `object_id` and their first level attributes. When testing,
	# the `object_id` is replaced by an id unique to each call to `inspect`.
	#
	# ~~~
	# class MyClass
	#     serialize
	#
	#     var i: Int
	#     var o: nullable Object
	# end
	#
	# var class_with_null = new MyClass(123)
	# assert class_with_null.to_s == class_with_null.inspect
	# assert class_with_null.to_s == "<MyClass#0 i:123, o:null>"
	#
	# var class_with_other = new MyClass(456, class_with_null)
	# assert class_with_other.to_s == "<MyClass#0 i:456, o:<MyClass#1>>"
	#
	# var class_with_cycle = new MyClass(789)
	# class_with_cycle.o = class_with_cycle
	# assert class_with_cycle.to_s == "<MyClass#0 i:789, o:<MyClass#0>>"
	# ~~~
	#
	# Items of collections are flattened and appended to the output.
	#
	# ~~~
	# assert [1, 2, 3].inspect == "<Array[Int]#0 [1, 2, 3]>"
	#
	# var set = new HashSet[Object].from([1, 1.5, "two": Object])
	# assert set.inspect == """<HashSet[Object]#0 [1, 1.5, "two"]>"""
	#
	# var map = new Map[Int, String]
	# map[1] = "one"
	# map[2] = "two"
	# assert map.inspect == """<HashMap[Int, String]#0 {1:"one", 2:"two"}>"""
	# ~~~
	#
	# Inspections producing over 80 characters are cut short.
	#
	# ~~~
	# var long_class = new MyClass(123456789, "Some " + "very "*8 + "long string")
	# assert long_class.to_s == "<MyClass#0 i:123456789, o:\"Some very very very very very very very very long s…>"
	# ~~~
	redef fun inspect
	do
		var stream = new StringWriter
		var serializer = new InspectSerializer(stream)
		serializer.serialize self
		stream.close
		var str = stream.to_s

		# Cut long inspects
		var max_length = 80
		if str.length > max_length then
			str = str.substring(0, max_length-2) + "…>"
		end

		return str
	end

	private fun accept_inspect_serializer(v: InspectSerializer)
	do
		v.stream.write "<"

		v.stream.write class_name
		v.stream.write "#"

		var id = object_id
		if inspect_testing then id = v.cache.new_id_for(self)
		v.stream.write id.to_s

		accept_inspect_serializer_core v

		v.stream.write ">"
	end

	private fun accept_inspect_serializer_core(v: InspectSerializer)
	do v.serialize_core(self)
end

redef class Int
	redef fun accept_inspect_serializer(v) do v.stream.write to_s
end

redef class Float
	redef fun accept_inspect_serializer(v) do v.stream.write to_s
end

redef class Bool
	redef fun accept_inspect_serializer(v) do v.stream.write to_s
end

redef class Char
	redef fun accept_inspect_serializer(v)
	do
		v.stream.write "'"
		v.stream.write to_s.escape_to_nit
		v.stream.write "'"
	end
end

redef class Byte
	redef fun accept_inspect_serializer(v)
	do
		v.stream.write to_s
		v.stream.write "u8"
	end
end

redef class CString
	redef fun accept_inspect_serializer_core(v)
	do
		v.stream.write " \""
		v.stream.write to_s.escape_to_nit
		v.stream.write_char '"'
	end
end

redef class Text

	redef fun accept_inspect_serializer(v)
	do
		v.stream.write "\""
		v.stream.write escape_to_nit
		v.stream.write "\""
	end
end

redef class Collection[E]
	private fun serialize_as_inspect(v: InspectSerializer)
	do
		v.stream.write "["
		var is_first = true
		for e in self do
			if is_first then
				is_first = false
			else
				v.stream.write ", "
			end

			if not v.try_to_serialize(e) then
				assert e != null
				v.stream.write e.inspect
			end
		end
		v.stream.write "]"
	end
end

redef class SimpleCollection[E]
	redef fun accept_inspect_serializer_core(v)
	do
		v.stream.write " "
		serialize_as_inspect v
	end
end

redef class Map[K, V]
	redef fun accept_inspect_serializer_core(v)
	do
		v.stream.write " \{"

		var first = true
		for key, val in self do
			if not first then
				v.stream.write ", "
			else first = false

			if not v.try_to_serialize(key) then
				assert key != null
				v.stream.write key.inspect
			end

			v.stream.write ":"

			if not v.try_to_serialize(val) then
				assert val != null
				v.stream.write val.inspect
			end
		end

		v.stream.write "\}"
	end
end
