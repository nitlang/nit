# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import model::descriptions

# Copied from the documentation of `Documentation`.

var doc = new Documentation

doc.brief_description = "Do something."
doc.detailed_description = ["Do not lunch a rocket."]
assert doc.brief_description == "Do something."
assert doc.detailed_description == ["Do not lunch a rocket."]
assert doc.to_json == """["Do something.","Do not lunch a rocket."]"""

doc.brief_description = ""
doc.detailed_description = ["The answer is `42`."]
assert doc.brief_description == "The answer is `42`."
assert doc.detailed_description == ["The answer is `42`."]
assert doc.to_json == """["The answer is `42`."]"""

doc.detailed_description = ["The answer is `42`."]
doc.brief_description = ""
assert doc.brief_description == "The answer is `42`."
assert doc.detailed_description == ["The answer is `42`."]
assert doc.to_json == """["The answer is `42`."]"""

doc.detailed_description = new Array[String]
doc.brief_description = ""
assert doc.is_empty
assert doc.brief_description == ""
assert doc.detailed_description == new Array[String]
assert doc.to_json == "[]"
