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

import json

class A
    serialize

	var other: nullable A

	type C: nullable A
	var next: C

	redef fun to_s do return "<{class_name} other:{other or else "null"} next:{next or else "null"}>"
end

class B
	super A
	serialize

	redef type C: nullable B
end

class DangerSup
	serialize

	var dangerous_setter: String
end

class DangerSub
	super DangerSup
	serialize

	redef fun dangerous_setter=(val)
	do
		print "DANGER '{val}'"
		super
	end
end

class G[E: A]
	serialize
	var e: E

	redef fun to_s do return "<{class_name} e:{if isset _e then e.to_s else "not-set"}>"
end

redef class Deserializer
	redef fun deserialize_class(name)
	do
		if name == "G[A]" then return new G[A].from_deserializer(self)
		if name == "G[B]" then return new G[B].from_deserializer(self)
		return super
	end
end

var json = """{
    "__class": "A",
    "other": {"__class": "DangerSub", "dangerous_setter": "My text 1"},
    "next": {"__class": "DangerSub", "dangerous_setter": "My text 2"}
}"""

# OK, accept only valid types, so don't try to deserialize DangerSub
var deserializer = new JsonDeserializer(json)
var res = deserializer.deserialize
print deserializer.errors.join("\n")
print res or else "null"

print "---"

# Accept any types, so deserialize the dangerous classes
deserializer = new JsonDeserializer(json)
deserializer.check_subtypes = false
res = deserializer.deserialize
print deserializer.errors.join("\n")
print res or else "null"

print "---"

# Valid virtual type for `next: B`
json = """{"__class": "B", "next": {"__class": "B"}}"""
deserializer = new JsonDeserializer(json)
res = deserializer.deserialize
print deserializer.errors.join("\n")
print res or else "null"

print "---"

# Virtual type error for `next: B`
json = """{"__class": "B", "next": {"__class": "A"}}"""
deserializer = new JsonDeserializer(json)
res = deserializer.deserialize
print deserializer.errors.join("\n")
print res or else "null"

print "---"

# Valid parameter type for `e: A`
json = """{"__class": "G[A]", "e": {"__class": "A"}}"""
deserializer = new JsonDeserializer(json)
res = deserializer.deserialize
print deserializer.errors.join("\n")
print res or else "null"

print "---"

# Parameter type error for `e: B`
json = """{"__class": "G[B]", "e": {"__class": "A"}}"""
deserializer = new JsonDeserializer(json)
res = deserializer.deserialize
print deserializer.errors.join("\n")
print res or else "null"
