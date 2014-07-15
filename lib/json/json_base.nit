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
module json_base

# Something that can be translated to JSON
interface Jsonable
	# Get the JSON representation of `self`
	fun to_json: String is abstract
end

redef class String
	super Jsonable

	redef fun to_json do
		var str = self
		str = str.replace("\\", "\\\\")
		str = str.replace("\"", "\\\"")
		str = str.replace("/", "\\/")
		str = str.replace("\n", "\\n")
		str = str.replace("\r", "\\r")
		str = str.replace("\t", "\\t")
		return "\"{str}\""
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
	redef fun add(value) do array.add(value)
	redef fun clear do array.clear
	redef fun is_empty do return array.is_empty
	redef fun iterator do return array.iterator
	redef fun length do return array.length

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
