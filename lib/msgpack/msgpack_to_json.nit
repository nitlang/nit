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

# Convert MessagePack format to JSON
module msgpack_to_json

import msgpack::read
import json

if args.has("-h") then
	print "Usage: nit msgpack::msgpack_to_json [source_file.msgpack]"
	print "Convert MessagePack format to JSON. Read from stdin if no source_file is given."
	exit 0
end

var reader = if args.length >= 1 then
		new FileReader.open(args.first)
	else stdin

while reader.last_error == null and not reader.eof do
	var deserialized = reader.read_msgpack

	if deserialized != null then
		print deserialized.serialize_to_json(plain=true, pretty=true)
	else
		print "null"
	end
end
