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

# Offers services to serialize a Nit objects to different persistent formats
module serialization is
	new_annotation auto_serializable
end

# Abstract serialization service to be sub-classed by specialized services.
interface Serializer
	# Main method of this service, serialize the `object`
	fun serialize(object: nullable Serializable) is abstract

	# Serialize an object as a "possible" reference, depending of the service
	fun serialize_reference(object: Serializable) is abstract

	# Serialize an attribute, used by `Serializable::core_serialize_to`
	fun serialize_attribute(name: String, value: nullable Object)
	do
		if not try_to_serialize(value) then
			warn("argument {value.class_name}::{name} is not serializable.")
		end
	end

	# Serialize `value` is possie, i.e. it is `Serializable` or `null`
	fun try_to_serialize(value: nullable Object): Bool
	do
		if value isa Serializable then
			value.serialize_to_or_delay(self)
		else if value == null then
			serialize value
		else return false
		return true
	end

	# Warn of problems and potential errors (such as if an attribute
	# is not serializable)
	fun warn(msg: String) do print "Serialization warning: {msg}"
end

# Abstract deserialization service
#
# After initialization of one of its sub-classes, call `deserialize`
interface Deserializer
	# Main method of this class, returns a Nit object
	fun deserialize: nullable Object is abstract

	# Internal method to be implemented by sub-classes
	fun deserialize_attribute(name: String): nullable Object is abstract

	# Internal method called by objects in creation,
	# to be implemented by sub-classes
	fun notify_of_creation(new_object: Object) is abstract

	# Mainly generated method to return the next instance of the givent
	# class by name
	fun deserialize_class(class_name: String): Object do
		print "Error: doesn't know how to deserialize class \"{class_name}\""
		abort
	end
end

# Instances of this class can be passed to `Serializer::serialize`
interface Serializable
	# Full or true serialization
	fun serialize_to(v: Serializer) do v.serialize(self)

	# Body of the serialization of this class
	# Can be redefed in sub classes and refinements
	fun core_serialize_to(v: Serializer) do end

	# Whether full serialization (calls `serialize_to`) or place only references
	fun serialize_to_or_delay(v: Serializer) do v.serialize_reference(self)
end

# Instances of this class are not delayed and instead serialized immediately
# This applies mainly to `universal` types
interface DirectSerializable
	super Serializable

	redef fun serialize_to_or_delay(v) do serialize_to(v)
end

redef class Bool super DirectSerializable end
redef class Char super DirectSerializable end
redef class Int super DirectSerializable end
redef class Float super DirectSerializable end
redef class NativeString super DirectSerializable end
redef class String super DirectSerializable end
redef class Array[E] super Serializable end
