# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Introduce base classes and services for JSON handling.
module jsonable

import standard
private import json::json_parser
private import json::json_lexer

# Something that can be translated to JSON
interface Jsonable
	# Get the JSON representation of `self`
	fun to_json: String is abstract
end

redef class String
	super Jsonable

	redef fun to_json do
		var res = new FlatBuffer
		res.add '\"'
		for i in [0..self.length[ do
			var char = self[i]
			if char == '\\' then
				res.append("\\\\")
				continue
			else if char == '\"' then
				res.append("\\\"")
				continue
			else if char == '\/' then
				res.append("\\/")
				continue
			else if char == '\n' then
				res.append("\\n")
				continue
			else if char == '\r' then
				res.append("\\r")
				continue
			else if char == '\t' then
				res.append("\\t")
				continue
			end
			res.add char
		end
		res.add '\"'
		return res.write_to_string
	end
end

redef class Int
	super Jsonable

	redef fun to_json do return self.to_s
end

redef class Float
	super Jsonable

	redef fun to_json do return self.to_s
end

redef class Bool
	super Jsonable

	redef fun to_json do return self.to_s
end

# A JSON Object representation that behaves like a `Map`
class JsonObject
	super Jsonable
	super Map[String, nullable Jsonable]

	private var map = new HashMap[String, nullable Jsonable]

	# Create an empty `JsonObject`
	#
	#     var obj = new JsonObject
	#     assert obj.is_empty
	init do end

	# Init the JSON Object from a Nit `Map`
	#
	#     var map = new HashMap[String, String]
	#     map["foo"] = "bar"
	#     map["goo"] = "baz"
	#     var obj = new JsonObject.from(map)
	#     assert obj.length == 2
	#     assert obj["foo"] == "bar"
	#     assert obj["goo"] == "baz"
	init from(items: Map[String, nullable Jsonable]) do
		for k, v in items do map[k] = v
	end

	redef fun [](key) do return map[key]
	redef fun []=(key, value) do map[key] = value
	redef fun clear do map.clear
	redef fun has_key(key) do return map.has_key(key)
	redef fun is_empty do return map.is_empty
	redef fun iterator do return map.iterator
	redef fun keys do return map.keys
	redef fun values do return map.values
	redef fun length do return map.length

	# Advanced query to get a value within `self` or its children.
	#
	# A query is composed of the keys to each object seperated by '.'.
	#
	# REQUIRE `self.has_key(query)`
	#
	#     var obj1 = new JsonObject
	#     obj1["baz"] = "foobarbaz"
	#     var obj2 = new JsonObject
	#     obj2["bar"] = obj1
	#     var obj3 = new JsonObject
	#     obj3["foo"] = obj2
	#     assert obj3.get("foo.bar.baz") == "foobarbaz"
	fun get(query: String): nullable Jsonable do
		var keys = query.split(".").reversed
		var key = keys.pop

		assert has_key(key)
		var node = self[key]

		while not keys.is_empty do
			key = keys.pop
			assert node isa JsonObject and node.has_key(key)
			node = node[key]
		end
		return node
	end

	# Create an empty `JsonObject`
	#
	#     var obj = new JsonObject
	#     obj["foo"] = "bar"
	#     assert obj.to_json == "\{\"foo\": \"bar\"\}"
	redef fun to_json do
		var tpl = new Array[String]
		tpl.add "\{"
		var vals = new Array[String]
		for k, v in self do
			if v == null then
				vals.add "{k.to_json}: null"
			else
				vals.add "{k.to_json}: {v.to_json}"
			end
		end
		tpl.add vals.join(",")
		tpl.add "\}"
		return tpl.join("")
	end

	redef fun to_s do return to_json
end

# A JSON Array representation that behaves like a `Sequence`
class JsonArray
	super Jsonable
	super Sequence[nullable Jsonable]

	private var array = new Array[nullable Jsonable]

	init do end

	# init the JSON Array from a Nit `Collection`
	init from(items: Collection[nullable Jsonable]) do
		array.add_all(items)
	end

	redef fun [](key) do return array[key]
	redef fun []=(key, value) do array[key] = value
	redef fun clear do array.clear
	redef fun insert(item, index) do array.insert(item, index)
	redef fun is_empty do return array.is_empty
	redef fun iterator do return array.iterator
	redef fun length do return array.length
	redef fun pop do return array.pop
	redef fun push(value) do array.push(value)
	redef fun remove_at(index) do array.remove_at(index)
	redef fun shift do return array.shift
	redef fun unshift(e) do array.unshift(e)

	redef fun to_json do
		var tpl = new Array[String]
		tpl.add "["
		var vals = new Array[String]
		for v in self do
			if v == null then
				vals.add "null"
			else
				vals.add v.to_json
			end
		end
		tpl.add vals.join(",")
		tpl.add "]"
		return tpl.join("")
	end

	redef fun to_s do return to_json
end

# An error in JSON format that can be returned by tools using JSON like parsers.
#
#     var error = new JsonError("ErrorCode", "ErrorMessage")
#     assert error.to_s == "ErrorCode: ErrorMessage"
#     assert error.to_json == "\{\"error\": \"ErrorCode\", \"message\": \"ErrorMessage\"\}"
class JsonError
	super Jsonable

	# The error code
	var error: String

	# The error message
	var message: String

	redef fun to_json do
		var tpl = new Array[String]
		tpl.add "\{"
		tpl.add "\"error\": {error.to_json}, "
		tpl.add "\"message\": {message.to_json}"
		tpl.add "\}"
		return tpl.join("")
	end

	redef fun to_s do return "{error}: {message}"
end

# Redef parser

redef class Nvalue
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
	# FIXME support \n, etc.
	fun to_nit_string: String do
		var res = new FlatBuffer
		var skip = false
		for i in [1..text.length-2] do
			if skip then
				skip = false
				continue
			end
			var char = text[i]
			if char == '\\' and i < text.length - 2 then
				if text[i + 1] == '\\' then
					res.add('\\')
					skip = true
					continue
				end
				if text[i + 1] == '\"' then
					res.add('\"')
					skip = true
					continue
				end
				if text[i + 1] == '/' then
					res.add('\/')
					skip = true
					continue
				end
				if text[i + 1] == 'n' then
					res.add('\n')
					skip = true
					continue
				end
				if text[i + 1] == 'r' then
					res.add('\r')
					skip = true
					continue
				end
				if text[i + 1] == 't' then
					res.add('\t')
					skip = true
					continue
				end
			end
			res.add char
		end
		return res.write_to_string
	end
end

redef class Nvalue_object
	redef fun to_nit_object
	do
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
	fun pairs: Array[Npair] is abstract
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
	fun name: String do return n_string.to_nit_string
	fun value: nullable Jsonable do return n_value.to_nit_object
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
	fun items: Array[Nvalue] is abstract
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

redef class Text
	# Parse a JSON String as Jsonable entities
	#
	# Example with `JsonObject`"
	#
	#     var obj = "\{\"foo\": \{\"bar\": true, \"goo\": [1, 2, 3]\}\}".to_jsonable
	#     assert obj isa JsonObject
	#     assert obj["foo"] isa JsonObject
	#     assert obj["foo"].as(JsonObject)["bar"] == true
	#
	# Example with `JsonArray`
	#
	#     var arr = "[1, 2, 3]".to_jsonable
	#     assert arr isa JsonArray
	#     assert arr.length == 3
	#     assert arr.first == 1
	#     assert arr.last == 3
	#
	# Example with `String`
	#
	#     var str = "\"foo, bar, baz\"".to_jsonable
	#     assert str isa String
	#     assert str == "foo, bar, baz"
	#
	# Malformed JSON input returns a `JsonError` object
	#
	#     var bad = "\{foo: \"bar\"\}".to_jsonable
	#     assert bad isa JsonError
	#     assert bad.error == "JsonLexerError"
	fun to_jsonable: nullable Jsonable
	do
		var lexer = new Lexer_json(to_s)
		var parser = new Parser_json
		var tokens = lexer.lex
		parser.tokens.add_all(tokens)
		var root_node = parser.parse
		if root_node isa NStart then
			return root_node.n_0.to_nit_object
		else if root_node isa NLexerError then
			var pos = root_node.position
			var msg =  "{root_node.message} at {pos or else "<unknown>"} for {root_node}"
			return new JsonError("JsonLexerError", msg)
		else if root_node isa NParserError then
			var pos = root_node.position
			var msg = "{root_node.message} at {pos or else "<unknown>"} for {root_node}"
			return new JsonError("JsonParsingError", msg)
		else abort
	end
end

