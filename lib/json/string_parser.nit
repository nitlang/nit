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

# Simple ad-hoc implementation of a JSON parser for String inputs
module string_parser

import parser_base
import static

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
	fun parse_entity: nullable Jsonable do
		var srclen = len
		ignore_whitespaces
		if pos >= srclen then return make_parse_error("Empty JSON")
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
			if pos + 4 >= srclen then make_parse_error("Error: bad JSON entity")
			if src[pos + 1] == 'a' and src[pos + 2] == 'l' and src[pos + 3] == 's' and src[pos + 4] == 'e' then
				pos += 5
				return false
			end
			return make_parse_error("Error: bad JSON entity")
		else if c == 't' then
			if pos + 3 >= srclen then make_parse_error("Error: bad JSON entity")
			if src[pos + 1] == 'r' and src[pos + 2] == 'u' and src[pos + 3] == 'e' then
				pos += 4
				return true
			end
			return make_parse_error("Error: bad JSON entity")
		else if c == 'n' then
			if pos + 3 >= srclen then make_parse_error("Error: bad JSON entity")
			if src[pos + 1] == 'u' and src[pos + 2] == 'l' and src[pos + 3] == 'l' then
				pos += 4
				return null
			end
			return make_parse_error("Error: bad JSON entity")
		end
		if not c.is_json_num_start then return make_parse_error("Bad JSON character")
		return parse_json_number
	end

	# Parses a JSON Array
	fun parse_json_array: Jsonable do
		var max = len
		if pos >= max then return make_parse_error("Incomplete JSON array")
		var arr = new JsonArray
		var c = src[pos]
		while not c == ']' do
			ignore_whitespaces
			if pos >= max then return make_parse_error("Incomplete JSON array")
			if src[pos] == ']' then break
			var ent = parse_entity
			#print "Parsed an entity {ent} for a JSON array"
			if ent isa JsonParseError then return ent
			arr.add ent
			ignore_whitespaces
			if pos >= max then return make_parse_error("Incomplete JSON array")
			c = src[pos]
			if c == ']' then break
			if c != ',' then return make_parse_error("Bad array separator {c}")
			pos += 1
		end
		pos += 1
		return arr
	end

	# Parses a JSON Object
	fun parse_json_object: Jsonable do
		var max = len
		if pos >= max then return make_parse_error("Incomplete JSON object")
		var obj = new JsonObject
		var c = src[pos]
		while not c == '}' do
			ignore_whitespaces
			if pos >= max then return make_parse_error("Malformed JSON object")
			if src[pos] == '}' then break
			var key = parse_entity
			#print "Parsed key {key} for JSON object"
			if not key isa String then return make_parse_error("Bad key format {key or else "null"}")
			ignore_whitespaces
			if pos >= max then return make_parse_error("Incomplete JSON object")
			if not src[pos] == ':' then return make_parse_error("Bad key/value separator {src[pos]}")
			pos += 1
			ignore_whitespaces
			var value = parse_entity
			#print "Parsed value {value} for JSON object"
			if value isa JsonParseError then return value
			obj[key] = value
			ignore_whitespaces
			if pos >= max then return make_parse_error("Incomplete JSON object")
			c = src[pos]
			if c == '}' then break
			if c != ',' then return make_parse_error("Bad object separator {src[pos]}")
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
	fun parse_json_number: Jsonable do
		var max = len
		var p = pos
		var c = src[p]
		var is_neg = false
		if c == '-' then
			is_neg = true
			p += 1
			if p >= max then return make_parse_error("Bad JSON number")
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
			if p >= max then return make_parse_error("Bad JSON number")
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
				if p >= max then return make_parse_error("Malformed JSON number")
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
			if p < max and not c.is_json_separator then return make_parse_error("Malformed JSON number")
			pos = p
			if is_neg then return -fl
			return fl
		end
		if c == 'e' or c == 'E' then
			p += 1
			if p >= max then return make_parse_error("Bad JSON number")
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
		if p < max and not src[p].is_json_separator then return make_parse_error("Malformed JSON number")
		pos = p
		if is_neg then return -val
		return val
	end

	# Parses and returns a Nit string from a JSON String
	fun parse_json_string: Jsonable do
		var ln = src.length
		var p = pos
		p += 1
		if p > ln then return make_parse_error("Malformed JSON String")
		var c = src[p]
		var st = p
		while c != '"' do
			if c == '\\' then
				if p + 1 >= ln then return make_parse_error("Malformed Escape sequence in JSON string")
				p += 1
				c = src[p]
				if c == 'u' then
					p += 1
					if p + 3 >= ln then return make_parse_error("Bad Unicode escape sequence in string")
					for i in [0 .. 4[ do if not src[p + i].is_hexdigit then return make_parse_error("Bad Unicode escape sequence in string")
					p += 3
				end
			end
			p += 1
			if p >= ln then return make_parse_error("Malformed JSON String")
			c = src[p]
		end
		pos = p + 1
		return src.substring(st, p - st).unescape_json
	end

	# Ignores any character until a JSON separator is encountered
	fun ignore_until_separator do
		var max = len
		while pos < max do
			if not src[pos].is_json_separator then return
		end
	end
end

redef class Text
	redef fun parse_json do return (new JSONStringParser(self.to_s)).parse_entity
end

redef class JsonParseError

	# Location of the error in source
	var location: nullable Location = null

	# Get the JSON representation of `self`.
	#
	# ~~~
	# var err = new JsonParseError("foo", new Position(1, 2, 3, 4, 5, 6))
	# assert err.to_json == "Parsing error: foo"
	# ~~~
	redef fun to_json do
		var l = location
		var m = message
		return if l == null then "Parsing error: {m}" else "Parsing error at {l}: {m}"
	end

	redef fun to_s do return to_json
end
