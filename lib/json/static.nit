# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
# Copyright 2014 Alexandre Terrasa <alexandre@moz-concept.com>
# Copyright 2014 Jean-Christophe Beaupré <jcbrinfo@users.noreply.github.com>
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

# Static interface to read Nit objects from JSON strings
#
# `Text::parse_json` returns a simple Nit object from the JSON source.
# This object can then be type checked as usual with `isa` and `as`.
module static

import error
private import json_parser
private import json_lexer

# Something that can be translated to JSON.
interface Jsonable
end

redef class Text
	super Jsonable

	# Removes JSON-escaping if necessary in a JSON string
	#
	#     assert "\\\"string\\uD83D\\uDE02\\\"".unescape_json == "\"string😂\""
	fun unescape_json: Text do
		if not json_need_escape then return self
		return self.json_to_nit_string
	end

	# Does `self` need treatment from JSON to Nit ?
	#
	# i.e. is there at least one `\` character in it ?
	#
	#     assert not "string".json_need_escape
	#     assert "\\\"string\\\"".json_need_escape
	protected fun json_need_escape: Bool do return has('\\')

	# Escapes `self` from a JSON string to a Nit string
	#
	#     assert "\\\"string\\\"".json_to_nit_string == "\"string\""
	#     assert "\\nEscape\\t\\n".json_to_nit_string == "\nEscape\t\n"
	#     assert "\\u0041zu\\uD800\\uDFD3".json_to_nit_string == "Azu𐏓"
	protected fun json_to_nit_string: String do
		var res = new FlatBuffer.with_capacity(byte_length)
		var i = 0
		var ln = self.length
		while i < ln do
			var char = self[i]
			if char == '\\' then
				i += 1
				char = self[i]
				if char == 'b' then
					char = 0x08.code_point
				else if char == 'f' then
					char = 0x0C.code_point
				else if char == 'n' then
					char = '\n'
				else if char == 'r' then
					char = '\r'
				else if char == 't' then
					char = '\t'
				else if char == 'u' then
					var u16_esc = from_utf16_digit(i + 1)
					char = u16_esc.code_point
					if char.is_surrogate and i + 10 < ln then
						if self[i + 5] == '\\' and self[i + 6] == 'u' then
							u16_esc <<= 16
							u16_esc += from_utf16_digit(i + 7)
							char = u16_esc.from_utf16_surr.code_point
							i += 6
						else
							char = 0xFFFD.code_point
						end
					end
					i += 4
				end
				# `"`, `/` or `\` => Keep `char` as-is.
			end
			res.add char
			i += 1
		end
		return res.to_s
	end

	# Parse `self` as JSON.
	#
	# If `self` is not a valid JSON document or contains an unsupported escape
	# sequence, return a `JSONParseError`.
	#
	# Example with `JsonObject`:
	#
	#     var obj = "\{\"foo\": \{\"bar\": true, \"goo\": [1, 2, 3]\}\}".parse_json
	#     assert obj isa JsonObject
	#     assert obj["foo"] isa JsonObject
	#     assert obj["foo"].as(JsonObject)["bar"] == true
	#
	# Example with `JsonArray`:
	#
	#     var arr = "[1, 2, 3]".parse_json
	#     assert arr isa JsonArray
	#     assert arr.length == 3
	#     assert arr.first == 1
	#     assert arr.last == 3
	#
	# Example with `String`:
	#
	#     var str = "\"foo, bar, baz\"".parse_json
	#     assert str isa String
	#     assert str == "foo, bar, baz"
	#
	# Example of a syntaxic error:
	#
	#     var bad = "\{foo: \"bar\"\}".parse_json
	#     assert bad isa JsonParseError
	#     assert bad.position.col_start == 2
	fun parse_json: nullable Jsonable do
		var lexer = new Lexer_json(to_s)
		var parser = new Parser_json
		var tokens = lexer.lex
		parser.tokens.add_all(tokens)
		var root_node = parser.parse
		if root_node isa NStart then
			return root_node.n_0.to_nit_object
		else if root_node isa NError then
			return new JsonParseError(root_node.message, root_node.position)
		else abort
	end
end

redef class FlatText
	redef fun json_need_escape do
		var its = items
		for i in [first_byte .. last_byte] do
			if its[i] == 0x5Cu8 then return true
		end
		return false
	end
end

redef class Int
	super Jsonable
end

redef class Float
	super Jsonable
end

redef class Bool
	super Jsonable
end

# A map that can be translated into a JSON object.
interface JsonMapRead[K: String, V: nullable Jsonable]
	super MapRead[K, V]
	super Jsonable
end

# A JSON Object.
class JsonObject
	super JsonMapRead[String, nullable Jsonable]
	super HashMap[String, nullable Jsonable]
end

# A sequence that can be translated into a JSON array.
class JsonSequenceRead[E: nullable Jsonable]
	super Jsonable
	super SequenceRead[E]
end

# A JSON array.
class JsonArray
	super JsonSequenceRead[nullable Jsonable]
	super Array[nullable Jsonable]
end

redef class JsonParseError
	super Jsonable
end

redef class Position
	super Jsonable
end

################################################################################
# Redef parser

redef class Nvalue
	# The represented value.
	private fun to_nit_object: nullable Jsonable is abstract
end

redef class Nvalue_number
	redef fun to_nit_object
	do
		var text = n_number.text
		if text.chars.has('.') or text.chars.has('e') or text.chars.has('E') then return text.to_f
		return text.to_i
	end
end

redef class Nvalue_string
	redef fun to_nit_object do return n_string.to_nit_string
end

redef class Nvalue_true
	redef fun to_nit_object do return true
end

redef class Nvalue_false
	redef fun to_nit_object do return false
end

redef class Nvalue_null
	redef fun to_nit_object do return null
end

redef class Nstring
	# The represented string.
	private fun to_nit_string: String do return text.substring(1, text.length - 2).unescape_json.to_s
end

redef class Nvalue_object
	redef fun to_nit_object do
		var obj = new JsonObject
		var members = n_members
		if members != null then
			var pairs = members.pairs
			for pair in pairs do obj[pair.name] = pair.value
		end
		return obj
	end
end

redef class Nmembers
	# All the key-value pairs.
	private fun pairs: Array[Npair] is abstract
end

redef class Nmembers_tail
	redef fun pairs
	do
		var arr = n_members.pairs
		arr.add n_pair
		return arr
	end
end

redef class Nmembers_head
	redef fun pairs do return [n_pair]
end

redef class Npair
	# The represented key.
	private fun name: String do return n_string.to_nit_string

	# The represented value.
	private fun value: nullable Jsonable do return n_value.to_nit_object
end

redef class Nvalue_array
	redef fun to_nit_object
	do
		var arr = new JsonArray
		var elements = n_elements
		if elements != null then
			var items = elements.items
			for item in items do arr.add(item.to_nit_object)
		end
		return arr
	end
end

redef class Nelements
	# All the items.
	private fun items: Array[Nvalue] is abstract
end

redef class Nelements_tail
	redef fun items
	do
		var items = n_elements.items
		items.add(n_value)
		return items
	end
end

redef class Nelements_head
	redef fun items do return [n_value]
end
