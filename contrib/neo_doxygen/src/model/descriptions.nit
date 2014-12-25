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

# Documentation associated to an entity.
module model::descriptions

import json::static

# Documentation associated to an entity.
#
# The documentation is written in Markdown format.
#
# ~~~nit
# var doc = new Documentation
#
# doc.brief_description = "Do something."
# doc.detailed_description = ["Do not lunch a rocket."]
# assert doc.brief_description == "Do something."
# assert doc.detailed_description == ["Do not lunch a rocket."]
# assert doc.to_json == """["Do something.","Do not lunch a rocket."]"""
#
# doc.brief_description = ""
# doc.detailed_description = ["The answer is `42`."]
# assert doc.brief_description == "The answer is `42`."
# assert doc.detailed_description == ["The answer is `42`."]
# assert doc.to_json == """["The answer is `42`."]"""
#
# doc.detailed_description = ["The answer is `42`."]
# doc.brief_description = ""
# assert doc.brief_description == "The answer is `42`."
# assert doc.detailed_description == ["The answer is `42`."]
# assert doc.to_json == """["The answer is `42`."]"""
#
# doc.detailed_description = new Array[String]
# doc.brief_description = ""
# assert doc.is_empty
# assert doc.brief_description == ""
# assert doc.detailed_description == new Array[String]
# assert doc.to_json == "[]"
# ~~~
class Documentation
	super Jsonable

	private var content = new JsonStringArray
	private var has_brief_description: Bool = false

	# The brief description.
	#
	# If it is empty, the first element of `detailed_description` will be used
	# as brief description.
	fun brief_description=(brief_description: String) do
		if brief_description.is_empty then
			if has_brief_description then
				content.shift
				has_brief_description = false
			end
		else if has_brief_description then
			content.first = brief_description
		else
			content.unshift(brief_description)
			has_brief_description = true
		end
	end

	# The brief description.
	fun brief_description: String do
		if not is_empty then return content.first
		return ""
	end

	# The detailed description.
	#
	# Each element should represent a block.
	fun detailed_description=(detailed_description: SequenceRead[String]) do
		if has_brief_description then
			while content.length > 1 do content.pop
		else
			content.clear
		end
		content.add_all(detailed_description)
	end

	# The detailed description.
	#
	# Each element should represent a block.
	fun detailed_description: SequenceRead[String] do
		if not has_brief_description then return content
		if content.length > 1 then return content.subarray(1, content.length - 1)
		return new Array[String]
	end

	# Add a block of detailed description.
	fun add(block: String) do content.add block

	# Is the documentation empty?
	fun is_empty: Bool do return content.is_empty

	redef fun to_json do return content.to_json
	redef fun append_json(b) do content.append_json(b)
end

# A `Jsonable` array of strings.
private class JsonStringArray
	super JsonSequenceRead[String]
	super Array[String]
end
