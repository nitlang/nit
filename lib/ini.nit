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

# Handle ini config files.
module ini

# A configuration tree that can read and store data in ini format
#
# Write example:
#
#    var config = new ConfigTree("config.ini")
#    config["goo"] = "goo"
#    config["foo.bar"] = "foobar"
#    config["foo.baz"] = "foobaz"
#    config.save
#    assert config.to_map.length == 3
#
# Read example:
#
#    config = new ConfigTree("config.ini")
#    assert config.has_key("foo.bar")
#    assert config["foo.bar"] == "foobar"
class ConfigTree
	super Writable

	# The ini file used to read/store data
	var ini_file: String

	init do if ini_file.file_exists then load

	# Get the config value for `key`
	#
	# REQUIRE: `has_key(key)`
	#
	#    var config = new ConfigTree("config.ini")
	#    assert config["goo"] == "goo"
	#    assert config["foo.bar"] == "foobar"
	#    assert config["foo.baz"] == "foobaz"
	fun [](key: String): String do
		if not has_key(key) then
			print "error: config key `{key}` not found"
			abort
		end
		var node = get_node(key).as(not null)
		if node.value == null then
			print "error: config key `{key}` has no value"
			abort
		end
		return node.value.as(not null)
	end

	# Get the config values under `key`
	#
	# REQUIRE: `has_key(key)`
	#
	#    var config = new ConfigTree("config.ini")
	#    var values = config.at("foo")
	#    assert values.has_key("bar")
	#    assert values.has_key("baz")
	#    assert not values.has_key("goo")
	fun at(key: String): Map[String, String] do
		if not has_key(key) then
			print "error: config key `{key}` not found"
			abort
		end
		var map = new HashMap[String, String]
		var node = get_node(key).as(not null)
		for k, child in node.children do
			if child.value == null then continue
			map[k] = child.value.to_s
		end
		return map
	end

	# Set `value` at `key`
	#
	#    var config = new ConfigTree("config.ini")
	#    assert config["foo.bar"] == "foobar"
	#    config["foo.bar"] = "baz"
	#    assert config["foo.bar"] == "baz"
	fun []=(key: String, value: nullable String) do
		set_node(key, value)
	end

	# Is `key` in the config?
	#
	#    var config = new ConfigTree("config.ini")
	#    assert config.has_key("goo")
	#    assert config.has_key("foo.bar")
	#    assert not config.has_key("zoo")
	fun has_key(key: String): Bool do
		var parts = key.split(".").reversed
		var node = get_root(parts.pop)
		if node == null then return false
		while not parts.is_empty do
			node = node.get_child(parts.pop)
			if node == null then return false
		end
		return true
	end

	# Get `self` as a Map of `key`, `value`
	#
	#    var config = new ConfigTree("config.ini")
	#    var map = config.to_map
	#    assert map.has_key("goo")
	#    assert map.has_key("foo.bar")
	#    assert map.has_key("foo.baz")
	#    assert map.length == 3
	fun to_map: Map[String, String] do
		var map = new HashMap[String, String]
		for node in leaves do
			if node.value == null then continue
			map[node.key] = node.value.to_s
		end
		return map
	end

	redef fun to_s do return to_map.join(", ", ":")

	redef fun write_to(stream) do
		for node in leaves do
			if node.value == null then continue
			stream.write("{node.key}={node.value.to_s}\n")
		end
	end

	# Reload config from file
	# Done automatically at init
	#
	# Example with hierarchical ini file:
	#
	#     # init file
	#     var str = """
	#     foo.bar=foobar
	#     foo.baz=foobaz
	#     goo=goo"""
	#     str.write_to_file("config1.ini")
	#     # load file
	#     var config = new ConfigTree("config1.ini")
	#     assert config["foo.bar"] == "foobar"
	#
	# Example with sections:
	#
	#     # init file
	#     str = """
	#     goo=goo
	#     [foo]
	#     bar=foobar
	#     baz=foobaz
	#     [boo]
	#     bar=boobar"""
	#     str.write_to_file("config2.ini")
	#     # load file
	#     config = new ConfigTree("config2.ini")
	#     assert config["foo.bar"] == "foobar"
	#     assert config["boo.bar"] == "boobar"
	#
	# Example with both hierarchy and section:
	#
	#     # init file
	#     str = """
	#     goo=goo
	#     [foo]
	#     bar.baz=foobarbaz
	#     [goo.boo]
	#     bar=gooboobar
	#     baz.bar=gooboobazbar"""
	#     str.write_to_file("config3.ini")
	#     # load file
	#     config = new ConfigTree("config3.ini")
	#     assert config["goo"] == "goo"
	#     assert config["foo.bar.baz"] == "foobarbaz"
	#     assert config["goo.boo.bar"] == "gooboobar"
	#     assert config["goo.boo.baz.bar"] == "gooboobazbar"
	#
	# Using the array notation
	#
	#     str = """
	#     foo[]=a
	#     foo[]=b
	#     foo[]=c"""
	#     str.write_to_file("config4.ini")
	#     # load file
	#     config = new ConfigTree("config4.ini")
	#     print config.to_map.join(":", ",")
	#     assert config["foo.0"] == "a"
	#     assert config["foo.1"] == "b"
	#     assert config["foo.2"] == "c"
	#     assert config.at("foo").values.join(",") == "a,b,c"
	fun load do
		roots.clear
		var stream = new FileReader.open(ini_file)
		var path: nullable String = null
		var line_number = 0
		while not stream.eof do
			var line = stream.read_line
			line_number += 1
			if line.is_empty then
				continue
			else if line.has_prefix(";") then
				continue
			else if line.has_prefix("[") then
				line = line.trim
				var key = line.substring(1, line.length - 2)
				path = key
				set_node(path, null)
			else
				var parts = line.split("=")
				assert parts.length > 1 else
					print "Error: malformed ini at line {line_number}"
				end
				var key = parts[0].trim
				var val = parts[1].trim
				if path != null then key = "{path}.{key}"
				if key.has_suffix("[]") then
					set_array(key, val)
				else
					set_node(key,val)
				end
			end
		end
		stream.close
	end

	# Save config to file
	fun save do write_to_file(ini_file)

	private var roots = new Array[ConfigNode]

	# Append `value` to array at `key`
	private fun set_array(key: String, value: nullable String) do
		key = key.substring(0, key.length - 2)
		var len = 0
		if has_key(key) then
			len = get_node(key).children.length
		end
		set_node("{key}.{len.to_s}", value)
	end

	private fun set_node(key: String, value: nullable String) do
		var parts = key.split(".").reversed
		var k = parts.pop
		var root = get_root(k)
		if root == null then
			root = new ConfigNode(k)
			if parts.is_empty then
				root.value = value
			end
			roots.add root
		end
		while not parts.is_empty do
			k = parts.pop
			var node = root.get_child(k)
			if node == null then
				node = new ConfigNode(k)
				node.parent = root
				root.children[node.name] = node
			end
			if parts.is_empty then
				node.value = value
			end
			root = node
		end
	end

	private fun get_node(key: String): nullable ConfigNode do
		var parts = key.split(".").reversed
		var node = get_root(parts.pop)
		while not parts.is_empty do
			node = node.get_child(parts.pop)
		end
		return node
	end

	private fun get_root(name: String): nullable ConfigNode do
		for root in roots do
			if root.name == name then return root
		end
		return null
	end

	private fun leaves: Array[ConfigNode] do
		var res = new Array[ConfigNode]
		var todo = new Array[ConfigNode]
		todo.add_all roots
		while not todo.is_empty do
			var node = todo.pop
			if node.children.is_empty then
				res.add node
			else
				todo.add_all node.children.values
			end
		end
		return res
	end
end

private class ConfigNode

	var parent: nullable ConfigNode = null
	var children = new HashMap[String, ConfigNode]
	var name: String is writable
	var value: nullable String = null

	fun key: String do
		if parent == null then
			return name
		end
		return "{parent.key}.{name}"
	end

	fun get_child(name: String): nullable ConfigNode do
		if children.has_key(name) then
			return children[name]
		end
		return null
	end
end

