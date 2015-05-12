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

# Static interface to get Nit objects from a Json string.
#
# `Text::parse_json` returns an equivalent Nit object from
# the Json source. This object can then be type checked by the usual
# languages features (`isa` and `as`).
module static

import error
private import json_parser
private import json_lexer

# Something that can be translated to JSON.
interface Jsonable
	# Encode `self` in JSON.
	#
	# SEE: `append_json`
	fun to_json: String is abstract

	# Use `append_json` to implement `to_json`.
	#
	# Therefore, one that redefine `append_json` may use the following
	# redefinition to link `to_json` and `append_json`:
	#
	# ~~~nitish
	# redef fun to_json do return to_json_by_append
	# ~~~
	#
	# Note: This is not the default implementation of `to_json` in order to
	# avoid cyclic references between `append_json` and `to_json` when none are
	# implemented.
	protected fun to_json_by_append: String do
		var buffer = new RopeBuffer
		append_json(buffer)
		return buffer.write_to_string
	end

	# Append the JSON representation of `self` to the specified buffer.
	#
	# SEE: `to_json`
	fun append_json(buffer: Buffer) do buffer.append(to_json)

	# Pretty print JSON string.
	#
	# ~~~
	# var obj = new JsonObject
	# obj["foo"] = 1
	# obj["bar"] = true
	# var arr = new JsonArray
	# arr.add 2
	# arr.add false
	# arr.add "baz"
	# obj["baz"] = arr
	# var res = obj.to_pretty_json
	# var exp = """{
	#	"foo": 1,
	#	"bar": true,
	#	"baz": [2, false, "baz"]
	# }\n"""
	# assert res == exp
	# ~~~
	fun to_pretty_json: String do
		var res = new FlatBuffer
		pretty_json_visit(res, 0)
		res.add '\n'
		return res.write_to_string
	end

	private fun pretty_json_visit(buffer: FlatBuffer, indent: Int) is abstract
end

redef class Text
	super Jsonable

	redef fun append_json(buffer) do
		buffer.add '\"'
		for i in [0..self.length[ do
			var char = self[i]
			if char == '\\' then
				buffer.append "\\\\"
			else if char == '\"' then
				buffer.append "\\\""
			else if char == '\/' then
				buffer.append "\\/"
			else if char < 16.ascii then
				if char == '\n' then
					buffer.append "\\n"
				else if char == '\r' then
					buffer.append "\\r"
				else if char == '\t' then
					buffer.append "\\t"
				else if char == 0x0C.ascii then
					buffer.append "\\f"
				else if char == 0x08.ascii then
					buffer.append "\\b"
				else
					buffer.append "\\u000{char.ascii.to_hex}"
				end
			else if char < ' ' then
				buffer.append "\\u00{char.ascii.to_hex}"
			else
				buffer.add char
			end
		end
		buffer.add '\"'
	end

	# Encode `self` in JSON.
	#
	# ~~~
	# assert "\t\"http://example.com\"\r\n\0\\".to_json ==
	#     "\"\\t\\\"http:\\/\\/example.com\\\"\\r\\n\\u0000\\\\\""
	# ~~~
	redef fun to_json do return to_json_by_append

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

redef class Buffer

	# Append the JSON representation of `jsonable` to `self`.
	#
	# Append `"null"` for `null`.
	private fun append_json_of(jsonable: nullable Jsonable) do
		if jsonable isa Jsonable then
			append jsonable.to_json
		else
			append "null"
		end
	end
end

redef class Int
	super Jsonable

	# Encode `self` in JSON.
	#
	#     assert 0.to_json == "0"
	#     assert (-42).to_json == "-42"
	redef fun to_json do return self.to_s
end

redef class Float
	super Jsonable

	# Encode `self` in JSON.
	#
	# Note: Because this method use `to_s`, it may lose precision.
	#
	# ~~~
	# # Will not work as expected.
	# # assert (-0.0).to_json == "-0.0"
	#
	# assert (.5).to_json == "0.5"
	# assert (0.0).to_json == "0.0"
	# ~~~
	redef fun to_json do return self.to_s
end

redef class Bool
	super Jsonable

	# Encode `self` in JSON.
	#
	#     assert true.to_json == "true"
	#     assert false.to_json == "false"
	redef fun to_json do return self.to_s
end

# A map that can be translated into a JSON object.
interface JsonMapRead[K: String, V: nullable Jsonable]
	super MapRead[K, V]
	super Jsonable

	redef fun append_json(buffer) do
		buffer.append "\{"
		var it = iterator
		if it.is_ok then
			append_json_entry(it, buffer)
			while it.is_ok do
				buffer.append ","
				append_json_entry(it, buffer)
			end
		end
		it.finish
		buffer.append "\}"
	end

	# Encode `self` in JSON.
	#
	#     var obj = new JsonObject
	#     obj["foo"] = "bar"
	#     assert obj.to_json == "\{\"foo\":\"bar\"\}"
	#     obj = new JsonObject
	#     obj["baz"] = null
	#     assert obj.to_json == "\{\"baz\":null\}"
	redef fun to_json do return to_json_by_append

	redef fun pretty_json_visit(buffer, indent) do
		buffer.append "\{\n"
		indent += 1
		var i = 0
		for k, v in self do
			buffer.append "\t" * indent
			buffer.append "\"{k}\": "
			if v isa JsonObject or v isa JsonArray then
				v.pretty_json_visit(buffer, indent)
			else
				buffer.append v.to_json
			end
			if i < length - 1 then
				buffer.append ","
			end
			buffer.append "\n"
			i += 1
		end
		indent -= 1
		buffer.append "\t" * indent
		buffer.append "\}"
	end

	private fun append_json_entry(iterator: MapIterator[String, nullable Jsonable],
			buffer: Buffer) do
		buffer.append iterator.key.to_json
		buffer.append ":"
		buffer.append_json_of(iterator.item)
		iterator.next
	end
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

	redef fun append_json(buffer) do
		buffer.append "["
		var it = iterator
		if it.is_ok then
			append_json_entry(it, buffer)
			while it.is_ok do
				buffer.append ","
				append_json_entry(it, buffer)
			end
		end
		it.finish
		buffer.append "]"
	end

	# Encode `self` in JSON.
	#
	#     var arr = new JsonArray.with_items("foo", null)
	#     assert arr.to_json == "[\"foo\",null]"
	#     arr.pop
	#     assert arr.to_json =="[\"foo\"]"
	#     arr.pop
	#     assert arr.to_json =="[]"
	redef fun to_json do return to_json_by_append

	redef fun pretty_json_visit(buffer, indent) do
		buffer.append "\["
		var i = 0
		for v in self do
			if v isa JsonObject or v isa JsonArray then
				v.pretty_json_visit(buffer, indent)
			else
				buffer.append v.to_json
			end
			if i < length - 1 then buffer.append ", "
			i += 1
		end
		buffer.append "\]"
	end

	private fun append_json_entry(iterator: Iterator[nullable Jsonable],
			buffer: Buffer) do
		buffer.append_json_of(iterator.item)
		iterator.next
	end
end

# A JSON array.
class JsonArray
	super JsonSequenceRead[nullable Jsonable]
	super Array[nullable Jsonable]
end

redef class JsonParseError
	super Jsonable

	# Get the JSON representation of `self`.
	#
	# ~~~
	# var err = new JsonParseError("foo", new Position(1, 2, 3, 4, 5, 6))
	# assert err.to_json == "\{\"error\":\"JsonParseError\"," +
	#		"\"position\":\{" +
	#			"\"pos_start\":1,\"pos_end\":2," +
	#			"\"line_start\":3,\"line_end\":4," +
	#			"\"col_start\":5,\"col_end\":6" +
	#		"\},\"message\":\"foo\"\}"
	# ~~~
	redef fun to_json do
		return "\{\"error\":\"JsonParseError\"," +
				"\"position\":{position.to_json}," +
				"\"message\":{message.to_json}\}"
	end
end

redef class Position
	super Jsonable

	# Get the JSON representation of `self`.
	#
	# ~~~
	# var pos = new Position(1, 2, 3, 4, 5, 6)
	# assert pos.to_json == "\{" +
	#			"\"pos_start\":1,\"pos_end\":2," +
	#			"\"line_start\":3,\"line_end\":4," +
	#			"\"col_start\":5,\"col_end\":6" +
	#		"\}"
	# ~~~
	redef fun to_json do
		return "\{\"pos_start\":{pos_start},\"pos_end\":{pos_end}," +
				"\"line_start\":{line_start},\"line_end\":{line_end}," +
				"\"col_start\":{col_start},\"col_end\":{col_end}\}"
	end
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
	private fun to_nit_string: String do
		var res = new FlatBuffer
		var i = 1
		while i < text.length - 1 do
			var char = text[i]
			if char == '\\' then
				i += 1
				char = text[i]
				if char == 'b' then
					char = 0x08.ascii
				else if char == 'f' then
					char = 0x0C.ascii
				else if char == 'n' then
					char = '\n'
				else if char == 'r' then
					char = '\r'
				else if char == 't' then
					char = '\t'
				else if char == 'u' then
					var code = text.substring(i + 1, 4).to_hex
					# TODO UTF-16 escaping is not supported yet.
					if code >= 128 then
						char = '?'
					else
						char = code.ascii
					end
					i += 4
				end
				# `"`, `/` or `\` => Keep `char` as-is.
			end
			res.add char
			i += 1
		end
		return res.write_to_string
	end
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
