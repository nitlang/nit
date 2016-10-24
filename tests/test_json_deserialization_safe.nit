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

class MyClass
    serialize

	var other: MyClass

	type C: MyClass
	var next: C
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

var json_with_metadata = """{
    "__class": "MyClass",
    "other": {"__class": "DangerSub", "dangerous_setter": "My text 1"},
    "next": {"__class": "DangerSub", "dangerous_setter": "My text 2"}
}"""

var deserializer = new JsonDeserializer(json_with_metadata)
#alt1#deserializer.check_subtypes = false
deserializer.deserialize
print deserializer.errors.join("\n")
