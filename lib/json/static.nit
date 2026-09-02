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

import parser_base
intrude import error

redef class Text

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
	private fun json_need_escape: Bool do return has('\\')

	# Escapes `self` from a JSON string to a Nit string
	#
	#     assert "\\\"string\\\"".json_to_nit_string == "\"string\""
	#     assert "\\nEscape\\t\\n".json_to_nit_string == "\nEscape\t\n"
	#     assert "\\u0041zu\\uD800\\uDFD3".json_to_nit_string == "Azu𐏓"
	private fun json_to_nit_string: String do
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
							char = u16_esc.to_u32.from_utf16_surr.code_point
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

	# Parse `self` from JSON to an object.
	#
	# This feature accepts partial JSON entities, not just full JSON objects.
	# If `self` is not a valid JSON entity or contains an unsupported escape
	# sequence, return a `JSONParseError`.
	#
	# Example with `JsonObject`:
	#
	#     var obj = """{"foo": {"bar": true, "goo": [1, 2, 3]}}""".parse_json
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
	# Example of a syntax error on an invalid key:
	#
	#     var key_error = "\{42: \"bar\"\}".parse_json
	#     assert key_error isa JsonParseError
	#     assert key_error.to_s == "line 1, position 4: expected string as JSON key, got '42'"
	#
	# Example of a syntax error on a truncated string:
	#
	#     assert """{"key": "trucate""".parse_json.to_s ==
	#         "line 1, position 9: truncated JSON string, after 'e'"
	#     assert """{"key": tru""".parse_json.to_s ==
	#         "line 1, position 9: truncated 'true' keyword"
	#     assert """{"key":""".parse_json.to_s ==
	#         "line 1, position 8: reached end of input string"
	#     assert """{"ke""".parse_json.to_s ==
	#         "line 1, position 2: expected string as JSON key, got parsing error 'truncated JSON string, after 'e''"
	fun parse_json: nullable Serializable do return (new JSONStringParser(self.to_s)).parse_entity
end

redef class FlatText
	redef fun json_need_escape do
		var its = items
		for i in [first_byte .. last_byte] do
			if its[i] == 0x5C then return true
		end
		return false
	end
end

redef class Char
	# Is `self` a valid number start ?
	private fun is_json_num_start: Bool do
		if self == '-' then return true
		if self.is_numeric then return true
		return false
	end

	# Is `self` a valid JSON separator ?
	private fun is_json_separator: Bool do
		if self == ':' then return true
		if self == ',' then return true
		if self == '{' then return true
		if self == '}' then return true
		if self == '[' then return true
		if self == ']' then return true
		if self == '"' then return true
		if self.is_whitespace then return true
		return false
	end
end

# A simple ad-hoc JSON parser
#
# To parse a simple JSON document, read it as a String and give it to `parse_entity`
# NOTE: if your document contains several non-nested entities, use `parse_entity` for each
# JSON entity to parse
class JSONStringParser
	super StringProcessor

	# Parses a JSON Entity
	#
	# ~~~nit
	# var p = new JSONStringParser("""{"numbers": [1,23,3], "string": "string"}""")
	# assert p.parse_entity isa JsonObject
	# ~~~
	fun parse_entity: nullable Serializable do
		var srclen = len
		ignore_whitespaces
		if pos >= srclen then return make_parse_error("reached end of input string")
		var c = src[pos]
		if c == '[' then
			pos += 1
			return parse_json_array
		else if c == '"' then
			var s = parse_json_string
			return s
		else if c == '{' then
			pos += 1
			return parse_json_object
		else if c == 'f' then
			if pos + 4 >= srclen then return make_parse_error("truncated 'false' keyword")
			if src[pos + 1] == 'a' and src[pos + 2] == 'l' and src[pos + 3] == 's' and src[pos + 4] == 'e' then
				pos += 5
				return false
			end
			return make_parse_error("expected 'false', got '{src.substring(pos, 5)}'")
		else if c == 't' then
			if pos + 3 >= srclen then return make_parse_error("truncated 'true' keyword")
			if src[pos + 1] == 'r' and src[pos + 2] == 'u' and src[pos + 3] == 'e' then
				pos += 4
				return true
			end
			return make_parse_error("expected 'true', got '{src.substring(pos, 4)}'")
		else if c == 'n' then
			if pos + 3 >= srclen then return make_parse_error("truncated 'null' keyword")
			if src[pos + 1] == 'u' and src[pos + 2] == 'l' and src[pos + 3] == 'l' then
				pos += 4
				return null
			end
			return make_parse_error("expected 'null', got '{src.substring(pos, 4)}'")
		end
		if not c.is_json_num_start then return make_parse_error("expected start of JSON number, got '{c}'")
		return parse_json_number
	end

	# Parses a JSON Array
	protected fun parse_json_array: Serializable do
		var max = len
		if pos >= max then return make_parse_error("JSON array truncated")
		var arr = new JsonArray
		var c = src[pos]
		while not c == ']' do
			ignore_whitespaces
			if pos >= max then return make_parse_error("JSON array truncated")
			if src[pos] == ']' then break
			var ent = parse_entity
			#print "Parsed an entity {ent} for a JSON array"
			if ent isa JsonParseError then return ent
			arr.add ent
			ignore_whitespaces
			if pos >= max then return make_parse_error("JSON array truncated")
			c = src[pos]
			if c == ']' then break
			if c != ',' then return make_parse_error("expected JSON array separator ',' or ']', got '{c}'")
			pos += 1
		end
		pos += 1
		return arr
	end

	# Parses a JSON Object
	fun parse_json_object: Serializable do
		var max = len
		if pos >= max then return make_parse_error("truncated JSON object")
		var obj = new JsonObject
		var c = src[pos]
		while not c == '}' do
			ignore_whitespaces
			if pos >= max then return make_parse_error("truncated JSON object")
			if src[pos] == '}' then break
			var key = parse_entity
			#print "Parsed key {key} for JSON object"
			if key isa JsonParseError then return make_parse_error("expected string as JSON key, got parsing error '{key.message}'")
			if not key isa String then return make_parse_error("expected string as JSON key, got '{key or else "null"}'")
			ignore_whitespaces
			if pos >= max then return make_parse_error("truncated JSON object")
			if not src[pos] == ':' then return make_parse_error("expected JSON key/value separator ':', got '{src[pos]}'")
			pos += 1
			ignore_whitespaces
			var value = parse_entity
			#print "Parsed value {value} for JSON object"
			# Pass this error directly, don't nest it. It could be many objects deep.
			if value isa JsonParseError then return value
			obj[key] = value
			ignore_whitespaces
			if pos >= max then return make_parse_error("truncated JSON object")
			c = src[pos]
			if c == '}' then break
			if c != ',' then return make_parse_error("expected JSON separator ',', got '{c}'")
			pos += 1
		end
		pos += 1
		return obj
	end

	# Creates a `JsonParseError` with the right message and location
	protected fun make_parse_error(message: String): JsonParseError do
		var err = new JsonParseError(message)
		err.location = hot_location
		return err
	end

	# Parses an Int or Float
	protected fun parse_json_number: Serializable do
		var max = len
		var p = pos
		var c = src[p]
		var is_neg = false
		if c == '-' then
			is_neg = true
			p += 1
			if p >= max then return make_parse_error("truncated JSON number after '{c}'")
			c = src[p]
		end
		var val = 0
		while c.is_numeric do
			val *= 10
			val += c.to_i
			p += 1
			if p >= max then break
			c = src[p]
		end
		if c == '.' then
			p += 1
			if p >= max then return make_parse_error("truncated JSON number after '{c}'")
			c = src[p]
			var fl = val.to_f
			var frac = 0.1
			while c.is_numeric do
				fl += c.to_i.to_f * frac
				frac /= 10.0
				p += 1
				if p >= max then break
				c = src[p]
			end
			if c == 'e' or c == 'E' then
				p += 1
				var exp = 0
				if p >= max then return make_parse_error("truncated JSON number after '{c}'")
				c = src[p]
				while c.is_numeric do
					exp *= 10
					exp += c.to_i
					p += 1
					if p >= max then break
					c = src[p]
				end
				fl *= (10 ** exp).to_f
			end
			if p < max and not c.is_json_separator then return make_parse_error("expected JSON number or separator character, got '{c}'")
			pos = p
			if is_neg then return -fl
			return fl
		end
		if c == 'e' or c == 'E' then
			p += 1
			if p >= max then return make_parse_error("truncated JSON number after '{c}'")
			var exp = src[p].to_i
			c = src[p]
			while c.is_numeric do
				exp *= 10
				exp += c.to_i
				p += 1
				if p >= max then break
				c = src[p]
			end
			val *= (10 ** exp)
		end
		if p < max and not src[p].is_json_separator then return make_parse_error("truncated JSON number")
		pos = p
		if is_neg then return -val
		return val
	end

	private var parse_str_buf = new FlatBuffer

	# Parses and returns a Nit string from a JSON String
	protected fun parse_json_string: Serializable do
		var src = src
		var ln = src.length
		var p = pos
		p += 1
		if p > ln then return make_parse_error("truncated JSON string")
		var c = src[p]
		var ret = parse_str_buf
		var chunk_st = p
		while c != '"' do
			if c != '\\' then
				p += 1
				if p >= ln then return make_parse_error("truncated JSON string, after '{c}'")
				c = src[p]
				continue
			end
			ret.append_substring_impl(src, chunk_st, p - chunk_st)
			p += 1
			if p >= ln then return make_parse_error("truncated escape sequence in JSON string")
			c = src[p]
			if c == 'r' then
				ret.add '\r'
				p += 1
			else if c == 'n' then
				ret.add '\n'
				p += 1
			else if c == 't' then
				ret.add '\t'
				p += 1
			else if c == 'u' then
				var cp = 0
				p += 1
				for i in [0 .. 4[ do
					cp <<= 4
					if p >= ln then return make_parse_error("truncated \uXXXX Escape sequence in JSON string")
					c = src[p]
					if c >= '0' and c <= '9' then
						cp += c.code_point - '0'.code_point
					else if c >= 'a' and c <= 'f' then
						cp += c.code_point - 'a'.code_point + 10
					else if c >= 'A' and c <= 'F' then
						cp += c.code_point - 'A'.code_point + 10
					else
						return make_parse_error("truncated \uXXXX Escape sequence in JSON string")
					end
					p += 1
				end
				c = cp.code_point
				if cp >= 0xD800 and cp <= 0xDBFF then
					if p >= ln then return make_parse_error("truncated \uXXXX JSON escape sequence")
					c = src[p]
					if c != '\\' then return make_parse_error("expected '\' in \uXXXX JSON escape sequence, got '{c}'")
					p += 1
					c = src[p]
					if c != 'u' then return make_parse_error("expected 'u' in \uXXXX JSON escape sequence, got '{c}'")
					var locp = 0
					p += 1
					for i in [0 .. 4[ do
						locp <<= 4
						if p > ln then return make_parse_error("truncated \uXXXX JSON escape sequence")
						c = src[p]
						if c >= '0' and c <= '9' then
							locp += c.code_point - '0'.code_point
						else if c >= 'a' and c <= 'f' then
							locp += c.code_point - 'a'.code_point + 10
						else if c >= 'A' and c <= 'F' then
							locp += c.code_point - 'A'.code_point + 10
						else
							return make_parse_error("expected hexadecimal digit in \uXXXX JSON escape, got '{c}'")
						end
						p += 1
					end
					c = (((locp & 0x3FF) | ((cp & 0x3FF) << 10)) + 0x10000).code_point
				end
				ret.add c
			else if c == 'b' then
				ret.add 8.code_point
				p += 1
			else if c == 'f' then
				ret.add '\f'
				p += 1
			else
				p += 1
				ret.add c
			end
			chunk_st = p
			c = src[p]
		end
		pos = p + 1
		if ret.is_empty then return src.substring(chunk_st, p - chunk_st)
		ret.append_substring_impl(src, chunk_st, p - chunk_st)
		var rets = ret.to_s
		ret.clear
		return rets
	end
end

# A map that can be translated into a JSON object.
interface JsonMapRead[K: String, V: nullable Serializable]
	super MapRead[K, V]
	super Serializable
end

# A JSON Object.
class JsonObject
	super JsonMapRead[String, nullable Serializable]
	super HashMap[String, nullable Serializable]
end

# A sequence that can be translated into a JSON array.
class JsonSequenceRead[E: nullable Serializable]
	super Serializable
	super SequenceRead[E]
end

# A JSON array.
class JsonArray
	super JsonSequenceRead[nullable Serializable]
	super Array[nullable Serializable]
end
