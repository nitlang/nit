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

# alt0 non-generics plain
# alt1 non-generics metadata
# alt2     generics plain
# alt3     generics metadata
# alt4     generics metadata cache_metadata_strings

import test_deserialization
import msgpack
import msgpack::read
import json
#alt2# import test_deserialization_serial
#alt3# import test_deserialization_serial
#alt4# import test_deserialization_serial

var entities = new TestEntities

var tests = entities.without_generics
#alt2#tests = entities.with_generics
#alt3#tests = entities.with_generics
#alt4#tests = entities.with_generics

for o in tests do
	var plain = true
	#alt1#plain = false
	#alt3#plain = false
	#alt4#plain = false

	var writer = new BytesWriter
	var serializer = new MsgPackSerializer(writer)
	serializer.plain_msgpack = plain
	#alt4#serializer.cache_metadata_strings = true
	serializer.serialize o
	var bytes = writer.bytes

	# Nit source
	print "# 1. Nit source:\n{o}\n"

	# Generated MessagePack
	print "# 2. MsgPack:\n{bytes.chexdigest}\n"

	# Python deserialization line to ensure compliance and otherwise debug
	#print "msgpack.unpackb(b'{bytes.chexdigest}')"

	# Show readable structure of the generated MessagePack as JSON
	var msg = (new BytesReader(bytes)).read_msgpack
	var json = if msg != null then
			msg.serialize_to_json(plain=true, pretty=true)
		else "null"
	print "# 3. JSON:\n{json}\n"

	# Deserialize
	var deserializer = new MsgPackDeserializer(new BytesReader(bytes))
	if serializer.plain_msgpack then
		var deserialized = deserializer.deserialize(o.class_name)
		print "# 4. Back in Nit (no metadata):\n{deserialized or else "null"}\n"
	else
		var deserialized = deserializer.deserialize
		print "# 4. Back in Nit (with metadata):\n{deserialized or else "null"}\n"
	end
end
