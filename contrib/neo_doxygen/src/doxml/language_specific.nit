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

# Handle language-specific parts of the importation.
module doxml::language_specific

import model

# Various importation logics that depend on the project’s language.
abstract class SourceLanguage

	# Apply the information deduced from `type_text` to `member`.
	#
	# `type_text` is the content of the `<type>` element.
	fun apply_member_type(member: Member, type_text: RawType) do
		if type_text["text"] != null then
			member.static_type = type_text
		end
	end

	# Apply the information deduced from `type_text` to `parameter`.
	#
	# `type_text` is the content of the `<type>` element.
	fun apply_parameter_type(parameter: Parameter, type_text: RawType) do
		if type_text["text"] != null then
			parameter.static_type = type_text
		end
	end

	# Extract the specified keyword at the beginning of the specified text.
	#
	# If the keyword is at the beginning of the specified text, return `true`
	# and remove the keyword. Else, return false.
	#
	# Used to extract some keywords that Doxygen puts in the type.
	#
	#     class DummySource
	#     	super JavaSource
	#     #
	#     	fun test(text: LinkedText, keyword: String): Bool do
	#     		return extract_keyword(text, keyword)
	#     	end
	#     end
	#     #
	#     var text = new RawType(new ProjectGraph(""))
	#     var dummy = new DummySource
	#     var res: Bool
	#     #
	#     text.add_part("abstract final", "")
	#     res = dummy.test(text, "static")
	#     assert not res
	#     res = dummy.test(text, "abstract")
	#     assert res
	#     assert "final" == text["text"].as(JsonArray).first
	#     res = dummy.test(text, "final")
	#     assert res
	#     assert text["text"] == null
	#     res = dummy.test(text, "abstract")
	#     assert not res
	protected fun extract_keyword(text: LinkedText, keyword: String): Bool do
		var text_array = text["text"]
		if text_array == null then return false
		assert text_array isa JsonArray
		if text_array.is_empty then return false

		var content = text_array.first.as(String).l_trim
		var link = text.links.first
		var found = false

		if link == null and content.has_prefix(keyword) then
			if keyword.length == content.length then
				content = ""
				found = true
			else if content.chars[keyword.length] <= ' ' then
				content = content.substring_from(keyword.length).l_trim
				found = true
			end
			if "" == content then
				text.shift_part
			else if found then
				text.set_part(0, content, "")
			end
		end
		return found
	end

	# Extract the specified suffix in the specified text.
	#
	# If the suffix is at the end of the specified text, return `true`
	# and remove the suffix. Else, return false.
	#
	# Used to extract stuff like `...` that Doxygen puts in the type.
	#
	#     class DummySource
	#     	super JavaSource
	#     #
	#     	fun test(text: LinkedText, s: String): Bool do
	#     		return extract_suffix(text, s)
	#     	end
	#     end
	#     #
	#     var text = new RawType(new ProjectGraph(""))
	#     var dummy = new DummySource
	#     var res: Bool
	#     #
	#     text.add_part("Object...+++", "")
	#     res = dummy.test(text, "...")
	#     assert not res
	#     res = dummy.test(text, "+++")
	#     assert res
	#     assert "Object..." == text["text"].as(JsonArray).first
	#     res = dummy.test(text, "...")
	#     assert res
	#     assert "Object" == text["text"].as(JsonArray).first
	protected fun extract_suffix(text: LinkedText, suffix: String): Bool do
		var text_array = text["text"]
		if text_array == null then return false
		assert text_array isa JsonArray
		if text_array.is_empty then return false

		var content = text_array.last.as(String).r_trim
		var link = text.links.first
		var found = false

		if link == null and content.has_suffix(suffix) then
			content = content.substring(0, content.length - suffix.length).r_trim
			if "" == content then
				text.pop_part
			else
				text.set_part(0, content, "")
			end
			return true
		else
			return false
		end
	end
end

# The default importation logics.
#
# Do nothing special.
class DefaultSource
	super SourceLanguage
end

# Importation logics for Java.
class JavaSource
	super SourceLanguage

	redef fun apply_member_type(member, type_text) do
		# For abstract members, Doxygen put `abstract` at the beginning of the type.
		# We assume that Doxygen do not put annotations in the type (it seems to
		# be the case).
		member.is_abstract = extract_keyword(type_text, "abstract")
		# TODO final
		# TODO void
		# TODO Avoid using `RawType` when possible. Only use `RawType` as a fallback.
		super
	end

	redef fun apply_parameter_type(parmeter, type_text) do
		# We assume that Doxygen do not put annotations in the type (it seems to
		# be the case).
		# TODO final
		# TODO Avoid using `RawType` when possible. Only use `RawType` as a fallback.
		parmeter.is_vararg = extract_suffix(type_text, "...")
		super
	end
end
