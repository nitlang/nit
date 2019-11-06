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

# Services for caching serialization engines
module caching

import serialization_core
private import engine_tools

# A `Serializer` with a `cache`
abstract class CachingSerializer
	super Serializer

	# Cache of known objects
	var cache = new SerializerCache is lazy, writable

	# Link the cache of `self` with `deserializer`
	#
	# This allows reference objects by id when they are known by the other side
	# of the stream.
	#
	# Use `cache` if it is a `DuplexCache`, otherwise create a new one.
	fun link(deserializer: CachingDeserializer)
	do
		var mem = self.cache
		if not mem isa DuplexCache then mem = new DuplexCache

		self.cache = mem
		deserializer.cache = mem
	end
end

# A `Deserializer` with a `cache`
abstract class CachingDeserializer
	super Deserializer

	# Cache of known objects
	var cache = new DeserializerCache is lazy, writable
end

# Cache of sent objects
#
# Used by `Serializer` to avoid duplicating objects, by serializing them once,
# then using a reference.
class SerializerCache
	# Map of already serialized objects to the reference id
	protected var sent: Map[Serializable, Int] = new StrictHashMap[Serializable, Int]

	# Is `object` known?
	fun has_object(object: Serializable): Bool do return sent.keys.has(object)

	# Get the id for `object`
	#
	# Require: `has_object(object)`
	fun id_for(object: Serializable): Int
	do
		assert sent.keys.has(object)
		return sent[object]
	end

	# Get a new id for `object` and store it
	#
	# Require: `not has_object(object)`
	fun new_id_for(object: Serializable): Int
	do
		var id = next_available_id
		sent[object] = id
		return id
	end

	# Get a free id to associate to an object in the cache
	protected fun next_available_id: Int do return sent.length
end

# Cache of received objects sorted by there reference id
#
# Used by `Deserializer` to find already deserialized objects by their reference.
class DeserializerCache
	# Map of references to already deserialized objects.
	protected var received: Map[Int, Object] = new StrictHashMap[Int, Object]

	# Is there an object associated to `id`?
	fun has_id(id: Int): Bool do return received.keys.has(id)

	# Get the object associated to `id`
	fun object_for(id: Int): nullable Object do return received[id]

	# Associate `object` to `id`
	fun []=(id: Int, object: Object) do received[id] = object
end

# A shared cache for serialization and deserialization
class DuplexCache
	super SerializerCache
	super DeserializerCache

	redef fun new_id_for(object)
	do
		var id = super
		received[id] = object
		return id
	end

	redef fun []=(id, object)
	do
		super
		assert object isa Serializable
		sent[object] = id
	end
end

# A shared cache where 2 clients serialize objects at the same types, prevents references collision
class AsyncCache
	super DuplexCache

	# Should this end use even numbers?
	var use_even: Bool

	private var last_id: Int is lazy do return if use_even then 0 else 1

	redef fun next_available_id
	do
		last_id += 2
		return last_id
	end
end
