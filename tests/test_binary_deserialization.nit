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

import test_deserialization
import binary::serialization
#alt1# import test_deserialization_serial

var entities = new TestEntities

var tests = entities.without_generics#alt1#
#alt1#var tests = entities.with_generics

var dir = "out/test_binary_deserialization"
if not dir.file_exists then dir.mkdir

var path = dir / "alt0"#alt1#
#alt1#var path = dir / "alt1"

var writer = new FileWriter.open(path)
var serializer = new BinarySerializer(writer)
for o in tests do
	serializer.serialize o
end
writer.close

var reader = new FileReader.open(path)
var deserializer = new BinaryDeserializer(reader)
for o in tests do
	var dst = deserializer.deserialize

	assert dst != null
	assert o.is_same_type(dst)

	print "# Src:\n{o}"
	print "# Dst:\n{dst}\n"
end
reader.close
