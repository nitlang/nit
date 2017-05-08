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

# Example of an ad hoc serializer that is tailored to transform business specific objects into customized representation.
#
# In the following, we expose 3 business classes, `E`, `A` and `B`, and a specific business serializer `RestrictedSerializer`.
# The principle is that the custom serialization logic in enclosed into the `RestrictedSerializer` and that the
# standard serializer is unchanged.
#
# The additional behaviors exposed are:
#
# * replace a full business object (see `E::id`):
#   instead of serializing an attribute, the custom serializer uses a different representation.
# * inject a phantom attribute (see `E::phantom`):
#   when serializing, the custom serializer injects new attributes.
# * hide a normally serialized attribute (see `E::semi_private`):
#   when serializing, the custom serializer hides some specific attributes.
#
# The advantage of the approach is that it is done programmatically so can be adapted to real complex use cases.
# Basically, this is half-way between the full automatic serialization and the full manual serialisation.
module custom_serialization

import serialization
import json::serialization_write

# The root class of the business objects.
# This factorizes most services and domain knowledge used by the `RestrictedSerializer`
#
# In real enterprise-level code, the various specific behaviors can be specified in more semantic classifiers.
abstract class E
	serialize

	# The semantic business identifier.
	#
	# With the `RestrictedSerializer`, references to `E` objects will be replaced with `id`-based information.
	# This avoid to duplicate or enlarge the information cross-call wise.
	#
	# A future API/REST call can then request the _missing_ object from its identifier.
	var id: String

	# A phantom attribute to be serialized by the custom `RestrictedSerializer`.
	#
	# This can be used to inject constant or computed information that make little sense to have as a genuine attribute in
	# the Nit model.
	fun phantom: String do return "So Much Fun"

	# An attribute not to be serialized by the custom `RestrictedSerializer`.
	# e.g. we want it on the DB but not in API/REST JSON messages
	#
	# Note that the annotation `noserialize` hides the attribute for all serializers.
	# To hide the attribute only in the `RestrictedSerializer`, it will have to actively ignore it.
	var semi_private = "secret"

	# Test method that serializes `self` and prints with the standard JsonSerializer
	fun ser_json
	do
		var w = new StringWriter
		var js = new JsonSerializer(w)
		js.plain_json = true
		js.serialize(self)
		print w
	end

	# Test method that serializes `self` and prints with the custom RestrictedJsonSerializer.
	fun ser_json2
	do
		var w = new StringWriter
		var js = new RestrictedJsonSerializer(w)
		js.plain_json = true
		js.serialize(self)
		print w
	end
end

# Extends Serializer and adds specific business behaviors when dealing with business objects.
#
# As with standard Nit, additional level of customization can be achieved by adding more double-dispatching :)
# We can thus choose to locate the specific behavior in the serializer, or the serializees.
class RestrictedSerializer
	super Serializer

	# This method is called to generate the attributes of a serialized representation
	redef fun serialize_core(value)
	do
		super

		if value isa E then
			# Inject additional special domain-specific information
			serialize_attribute("more-data", value.phantom)
		end
	end

	# This method is called when trying to serialize a specific attribute
	redef fun serialize_attribute(name, value)
	do
		var recv = current_object
		if recv isa E then
			# do not serialize `E::semi_private`
			if name == "semi_private" then return
		end

		if value isa E then
			# Do not serialize references to `E`.
			# Just use a domain-specific value that make sense in the business logic.
			serialize_attribute(name, "ID:" + value.id)
			return
		end

		super
	end
end

# Extends JsonSerializer and adds specific business behaviors when dealing with business objects.
class RestrictedJsonSerializer
	super JsonSerializer
	super RestrictedSerializer
end

# A business object, with an integer information
class A
	super E
	serialize

	# A business information
	var i: Int
end

# A business object associated with an `A`.
class B
	super E
	serialize

	# A business association
	var a: A
end

# The business data to serialize
var a = new A("a", 1)
var b = new B("b", a)

a.ser_json
a.ser_json2
b.ser_json
b.ser_json2
