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

# Abstract services to serialize Nit objects to different formats
#
# This module declares the `serialize` annotation to mark Nit classes as serializable.
# For an introduction to this service, refer to the documentation of the `serialization` group.
# This documentation provides more technical information on interesting entitie of this module.
#
# Interesting entities for end users of serializable classes:
#
# * Serialize an instance subclass of `Serializable` with either
#   `Serializer::serializable` and `Serializable::serialize`.
# * Deserialize an object using `Deserializer::deserialize`.
#   The object type must the be checked with an `assert` or otherwise.
#
# Interesting entities to create custom serializable classes:
#
# * Subclass `Serializable` to declare a class as serializable and to customize
#   the serialization and deserialization behavior.
# * Redefine `Serializable::core_serialize_to` to customize the serialization
#   of the receiver class.
# * Redefine `Deserializer::deserialize_class` to customize the deserialization
#   of a specific class by name.
#
# Interesting entities for serialization format:
#
# * Subclass `Serializer` and `Deserializer` with custom serices.
# * In `Serializer`, `serialize` and `serialize_reference` must be redefined.
# * In `Deserializer`; `deserialize`, `deserialize_attribute and
#   `notify_of_creation` must be redefined.
module serialization is
	new_annotation auto_serializable
	new_annotation serialize
	new_annotation noserialize
	new_annotation serialize_as
end

# Abstract serialization service to be sub-classed by specialized services.
interface Serializer
	# Entry point method of this service, serialize the `object`
	#
	# This method, and refinements, should handle `null` and probably
	# use double dispatch to customize the bahavior per serializable objects.
	fun serialize(object: nullable Serializable) is abstract

	# The object currently serialized by `serialized`
	#
	# Can be used by a custom serializer to add domain-specific serialization behavior.
	protected fun current_object: nullable Object is abstract

	# Serialize an object, with full serialization or a simple reference
	protected fun serialize_reference(object: Serializable) is abstract

	# Serialize an attribute to compose a serializable object
	#
	# This method should be called from `Serializable::core_serialize_to`.
	fun serialize_attribute(name: String, value: nullable Object)
	do
		if not try_to_serialize(value) then
			warn("argument {name} of type {value.class_name} is not serializable.")
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

	# The method is called when a standard `value` is serialized
	#
	# The default behavior is to call `value.core_serialize_to(self)` but it
	# can be redefined by a custom serializer to add domain-specific serialization behavior.
	fun serialize_core(value: Serializable)
	do
		value.core_serialize_to(self)
	end

	# Warn of problems and potential errors (such as if an attribute
	# is not serializable)
	fun warn(msg: String) do print "Serialization warning: {msg}"
end

# Abstract deserialization service
#
# The main service is `deserialize`.
abstract class Deserializer
	# Deserialize and return an object, storing errors in the attribute `errors`
	#
	# If a `static_type` is given, only subtypes of the `static_type` are accepted.
	#
	# This method behavior varies according to the implementation engines.
	fun deserialize(static_type: nullable String): nullable Object is abstract

	# Deserialize the attribute with `name` from the object open for deserialization
	#
	# The `static_type` can be used as last resort if the deserialized object
	# desn't have any metadata declaring the dynamic type.
	#
	# Return the deserialized value or null on error, and set
	# `deserialize_attribute_missing` to whether the attribute was missing.
	#
	# Internal method to be implemented by the engines.
	fun deserialize_attribute(name: String, static_type: nullable String): nullable Object is abstract

	# Was the attribute queried by the last call to `deserialize_attribute` missing?
	var deserialize_attribute_missing = false

	# Register a newly allocated object (even if not completely built)
	#
	# Internal method called by objects in creation, to be implemented by the engines.
	fun notify_of_creation(new_object: Object) is abstract

	# Deserialize the next available object as an instance of `class_name`
	#
	# Return the deserialized object on success and
	# record in `errors` if `class_name` is unknown.
	#
	# This method should be redefined for each custom subclass of `Serializable`.
	# All refinement should look for a precise `class_name` and call super
	# on unsupported classes.
	protected fun deserialize_class(class_name: String): nullable Object do
		if class_name == "Error" then return new Error.from_deserializer(self)
		return deserialize_class_intern(class_name)
	end

	# Generated service to deserialize the next available object as an instance of `class_name`
	#
	# Refinements to this method will be generated by the serialization phase.
	# To avoid conflicts, there should not be any other refinements to this method.
	# You can instead use `deserialize_class`.
	protected fun deserialize_class_intern(class_name: String): nullable Object do
		errors.add new Error("Deserialization Error: Doesn't know how to deserialize class \"{class_name}\"")
		return null
	end

	# Should `self` keep trying to deserialize an object after an error?
	#
	# This behavior takes effect after each attribute deserialization with
	# errors such as a missing attribute or the value is of the wrong type.
	# If `keep_going`, the attribute will be skipped but the engine will
	# deserialize the next attribute.
	# If `not keep_going`, the engine stops deserializing right away.
	#
	# When at `true`, this may cause the accumulation of a lot of entries in `errors`.
	#
	# Default at `true`.
	var keep_going: nullable Bool = null is writable

	# Errors encountered in the last call to `deserialize`
	var errors = new Array[Error]
end

# Error on invalid dynamic type for a deserialized attribute
class AttributeTypeError
	super Error

	autoinit receiver, attribute_name, attribute, expected_type

	# Parent object of the problematic attribute
	var receiver: Object

	# Name of the problematic attribute in `receiver`
	var attribute_name: String

	# Deserialized object that isn't of the `expected_type`
	var attribute: nullable Object

	# Name of the type expected for `attribute`
	var expected_type: String

	redef var message is lazy do
		var attribute = attribute
		var found_type = if attribute != null then attribute.class_name else "null"

		return "Deserialization Error: {
		}Wrong type on `{receiver.class_name}::{attribute_name}` expected `{expected_type}`, got `{found_type}`"
	end
end

# Instances of this class can be passed to `Serializer::serialize`
interface Serializable
	# Serialize `self` to `serializer`
	#
	# This is a shortcut to `Serializer::serialize`.
	fun serialize_to(serializer: Serializer) do serializer.serialize(self)

	# Actual serialization of `self` to `serializer`
	#
	# This writes the full data of `self` to `serializer`.
	#
	# This method can be redefined in sub classes and refinements.
	# It should use `Serializer::serialize_attribute` to to register real or
	# logical attributes.
	#
	# Any refinement should have its equivalent refinement of
	# `Deserializer::deserialize_class` to support this custom deserialization.
	fun core_serialize_to(serializer: Serializer) do end

	# Accept references or force direct serialization (using `serialize_to`)
	#
	# The subclass change the default behavior, which will accept references,
	# to force to always serialize copies of `self`.
	private fun serialize_to_or_delay(v: Serializer) do v.serialize_reference(self)

	# Create an instance of this class from the `deserializer`
	#
	# This constructor is refined by subclasses to correctly build their instances.
	init from_deserializer(deserializer: Deserializer) is nosuper do end
end

redef interface Object
	# Is `self` the same as `other` in a serialization context?
	#
	# Used to determine if an object has already been serialized.
	fun is_same_serialized(other: nullable Object): Bool do return is_same_instance(other)

	# Hash value use for serialization
	#
	# Used in combination with `is_same_serialized`. If two objects are the same
	# in a serialization context, they must have the same `serialization_hash`.
	fun serialization_hash: Int do return object_id
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
redef class CString super DirectSerializable end
redef class Text super DirectSerializable end
redef class SimpleCollection[E] super Serializable end
redef class Map[K, V] super Serializable end

redef class Couple[F, S]
	super Serializable

	redef init from_deserializer(v)
	do
		v.notify_of_creation self
		var first = v.deserialize_attribute("first")
		var second = v.deserialize_attribute("second")
		init(first, second)
	end

	redef fun core_serialize_to(v)
	do
		v.serialize_attribute("first", first)
		v.serialize_attribute("second", second)
	end
end

redef class Ref[E]
	super Serializable

	redef init from_deserializer(v)
	do
		v.notify_of_creation self
		var item = v.deserialize_attribute("item")
		init item
	end

	redef fun core_serialize_to(v)
	do
		v.serialize_attribute("item", first)
	end
end

redef class Error
	super Serializable

	redef init from_deserializer(v)
	do
		v.notify_of_creation self

		var message = v.deserialize_attribute("message")
		if not message isa String then message = ""
		init message

		var cause = v.deserialize_attribute("cause")
		if cause isa nullable Error then self.cause = cause
	end

	redef fun core_serialize_to(v)
	do
		v.serialize_attribute("message", message)
		v.serialize_attribute("cause", cause)
	end
end
