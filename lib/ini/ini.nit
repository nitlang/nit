# This file is part of NIT ( https://nitlanguage.org ).
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

# Read and write INI configuration files
module ini

import core
intrude import core::collection::hash_collection

# Read and write INI configuration files
#
# In an INI file, properties (or keys) are associated to values thanks to the
# equals symbol (`=`).
# Properties may be grouped into section marked between brackets (`[` and `]`).
#
# ~~~
# var ini_string = """
# ; Example INI
# key=value1
# [section1]
# key=value2
# [section2]
# key=value3
# """
# ~~~
#
# The main class, `IniFile`, can be created from an INI string and allows easy
# access to its content.
#
# ~~~
# # Read INI from string
# var ini = new IniFile.from_string(ini_string)
#
# # Check keys presence
# assert ini.has_key("key")
# assert ini.has_key("section1.key")
# assert not ini.has_key("not.found")
#
# # Access values
# assert ini["key"] == "value1"
# assert ini["section2.key"] == "value3"
# assert ini["not.found"] == null
#
# # Access sections
# assert ini.sections.length == 2
# assert ini.section("section1")["key"] == "value2"
# ~~~
#
# `IniFile` can also be used to create new INI files from scratch, or edit
# existing ones through its API.
#
# ~~~
# # Create a new INI file and write it to disk
# ini = new IniFile
# ini["key"] = "value1"
# ini["section1.key"] = "value2"
# ini["section2.key"] = "value3"
# ini.write_to_file("my_config.ini")
#
# # Load the INI file from disk
# ini = new IniFile.from_file("my_config.ini")
# assert ini["key"] == "value1"
# assert ini["section1.key"] == "value2"
# assert ini["section2.key"] == "value3"
#
# "my_config.ini".to_path.delete
# ~~~
class IniFile
	super Writable
	super HashMap[String, nullable String]

	# Create a IniFile from a `string` content
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# key1=value1
	# [section1]
	# key2=value2
	# """)
	# assert ini["key1"] == "value1"
	# assert ini["section1.key2"] == "value2"
	# ~~~
	#
	# See also `stop_on_first_error` and `errors`.
	init from_string(string: String, stop_on_first_error: nullable Bool) do
		init stop_on_first_error or else false
		load_string(string)
	end

	# Create a IniFile from a `file` content
	#
	# ~~~
	# """
	# key1=value1
	# [section1]
	# key2=value2
	# """.write_to_file("my_config.ini")
	#
	# var ini = new IniFile.from_file("my_config.ini")
	# assert ini["key1"] == "value1"
	# assert ini["section1.key2"] == "value2"
	#
	# "my_config.ini".to_path.delete
	# ~~~
	#
	# See also `stop_on_first_error` and `errors`.
	init from_file(file: String, stop_on_first_error: nullable Bool) do
		init stop_on_first_error or else false
		load_file(file)
	end

	# Sections composing this IniFile
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# [section1]
	# key1=value1
	# [ section 2 ]
	# key2=value2
	# """)
	# assert ini.sections.length == 2
	# assert ini.sections.first.name == "section1"
	# assert ini.sections.last.name == "section 2"
	# ~~~
	var sections = new Array[IniSection]

	# Get a section by its `name`
	#
	# Returns `null` if the section is not found.
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# [section1]
	# key1=value1
	# [section2]
	# key2=value2
	# """)
	# assert ini.section("section1") isa IniSection
	# assert ini.section("section2").name == "section2"
	# assert ini.section("not.found") == null
	# ~~~
	fun section(name: String): nullable IniSection do
		for section in sections do
			if section.name == name then return section
		end
		return null
	end

	# Does this file contains no properties and no sections?
	#
	# ~~~
	# var ini = new IniFile.from_string("")
	# assert ini.is_empty
	#
	# ini = new IniFile.from_string("""
	# key=value
	# """)
	# assert not ini.is_empty
	#
	# ini = new IniFile.from_string("""
	# [section]
	# """)
	# assert not ini.is_empty
	# ~~~
	redef fun is_empty do return super and sections.is_empty

	# Is there a property located at `key`?
	#
	# Returns `true` if the `key` is not found of if its associated value is `null`.
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# key=value1
	# [section1]
	# key=value2
	# [section2]
	# key=value3
	# """)
	# assert ini.has_key("key")
	# assert ini.has_key("section1.key")
	# assert ini.has_key("section2.key")
	# assert not ini.has_key("section1")
	# assert not ini.has_key("not.found")
	# ~~~
	redef fun has_key(key) do return self[key] != null

	# Get the value associated with a property (`key`)
	#
	# Returns `null` if the key is not found.
	# Section properties can be accessed with the `.` notation.
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# key=value1
	# [section1]
	# key=value2
	# [section2]
	# key=value3
	# """)
	# assert ini["key"] == "value1"
	# assert ini["section1.key"] == "value2"
	# assert ini["section2.key"] == "value3"
	# assert ini["section1"] == null
	# assert ini["not.found"] == null
	# ~~~
	redef fun [](key) do
		if key == null then return null
		key = key.to_s.trim

		# Look in root
		var node = node_at(key)
		if node != null then return node.value

		# Look in sections
		for section in sections do
			# Matched if the section name is a prefix of the key
			if not key.has_prefix(section.name) then continue
			var skey = key.substring(section.name.length + 1, key.length)
			if section.has_key(skey) then return section[skey]
		end
		return null
	end

	# Set the `value` for the property locaated at `key`
	#
	# ~~~
	# var ini = new IniFile
	# ini["key"] = "value1"
	# ini["section1.key"] = "value2"
	# ini["section2.key"] = "value3"
	#
	# assert ini["key"] == "value1"
	# assert ini["section1.key"] == "value2"
	# assert ini["section2.key"] == "value3"
	# assert ini.section("section1").name == "section1"
	# assert ini.section("section2")["key"] == "value3"
	# ~~~
	redef fun []=(key, value) do
		if value == null then return
		var parts = key.split_once_on(".")

		# No dot notation, store value in root
		if parts.length == 1 then
			super(key.trim, value.trim)
			return
		end

		# First part matches a section, store value in it
		var section = self.section(parts.first.trim)
		if section != null then
			section[parts.last.trim] = value.trim
			return
		end

		# No section matched, create a new one and store value in it
		section = new IniSection(parts.first.trim)
		section[parts.last.trim] = value.trim
		sections.add section
	end

	# Flatten `self` and its subsection in a `Map` of keys => values
	#
	# Properties from section are prefixed with their section names with the
	# dot (`.`) notation.
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# key=value1
	# [section]
	# key=value2
	# """)
	# assert ini.flatten.join(", ", ": ") == "key: value1, section.key: value2"
	# ~~~
	fun flatten: Map[String, String] do
		var map = new HashMap[String, String]
		for key, value in self do
			if value == null then continue
			map[key] = value
		end
		for section in sections do
			for key, value in section do
				if value == null then continue
				map["{section.name}.{key}"] = value
			end
		end
		return map
	end

	# Write `self` to a `stream`
	#
	# Key with `null` values are ignored.
	# The empty string can be used to represent an empty value.
	#
	# ~~~
	# var ini = new IniFile
	# ini["key"] = "value1"
	# ini["key2"] = null
	# ini["key3"] = ""
	# ini["section1.key"] = "value2"
	# ini["section1.key2"] = null
	# ini["section2.key"] = "value3"
	#
	# var stream = new StringWriter
	# ini.write_to(stream)
	#
	# assert stream.to_s == """
	# key=value1
	# key3=
	# [section1]
	# key=value2
	# [section2]
	# key=value3
	# """
	# ~~~
	redef fun write_to(stream) do
		for key, value in self do
			if value == null then continue
			stream.write "{key}={value}\n"
		end
		for section in sections do
			stream.write "[{section.name}]\n"
			for key, value in section do
				if value == null then continue
				stream.write "{key}={value}\n"
			end
		end
	end

	# Read INI content from `string`
	#
	# ~~~
	# var ini = new IniFile
	# ini.load_string("""
	# section1.key1=value1
	# section1.key2=value2
	# [section2]
	# key=value3
	# """)
	# assert ini["section1.key1"] == "value1"
	# assert ini["section1.key2"] == "value2"
	# assert ini["section2.key"] == "value3"
	# ~~~
	#
	# Returns `true` if the parsing finished correctly.
	#
	# See also `stop_on_first_error` and `errors`.
	fun load_string(string: String): Bool do
		var stream = new StringReader(string)
		var last_section = null
		var was_error = false
		var i = 0
		while not stream.eof do
			i += 1
			var line = stream.read_line.trim
			if line.is_empty then
				continue
			else if line.has_prefix(";") then
				continue
			else if line.has_prefix("#") then
				continue
			else if line.has_prefix("[") then
				var section = new IniSection(line.substring(1, line.length - 2).trim)
				sections.add section
				last_section = section
				continue
			else
				var parts = line.split_once_on("=")
				if parts.length != 2 then
					# FIXME silent skip?
					# we definitely need exceptions...
					was_error = true
					errors.add new IniError("Unexpected string `{line}` at line {i}.")
					if stop_on_first_error then return was_error
					continue
				end
				var key = parts[0].trim
				var value = parts[1].trim

				if last_section != null then
					last_section[key] = value
				else
					self[key] = value
				end
			end
		end
		stream.close
		return was_error
	end

	# Load a `file` content as INI
	#
	# New properties will be appended to the `self`, existing properties will be
	# overwrote by the values contained in `file`.
	#
	# ~~~
	# var ini = new IniFile
	# ini["key1"] = "value1"
	# ini["key2"] = "value2"
	#
	# """
	# key2=changed
	# key3=added
	# """.write_to_file("load_config.ini")
	#
	# ini.load_file("load_config.ini")
	# assert ini["key1"] == "value1"
	# assert ini["key2"] == "changed"
	# assert ini["key3"] == "added"
	#
	# "load_config.ini".to_path.delete
	# ~~~
	#
	# The process fails silently if the file does not exist.
	#
	# ~~~
	# ini = new IniFile
	# ini.load_file("ini_not_found.ini")
	# assert ini.is_empty
	# ~~~
	#
	# Returns `true` if the parsing finished correctly.
	#
	# See also `stop_on_first_error` and `errors`.
	fun load_file(file: String): Bool do return load_string(file.to_path.read_all)

	# Stop parsing on the first error
	#
	# By default, `load_string` will skip unparsable properties so the string can
	# be loaded.
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# key1=value1
	# key2
	# key3=value3
	# """)
    #
	# assert ini.length == 2
	# assert ini["key1"] == "value1"
	# assert ini["key2"] == null
	# assert ini["key3"] == "value3"
	# ~~~
	#
	# Set `stop_on_first_error` to `true` to force the parsing to stop.
	#
	# ~~~
	# ini = new IniFile
	# ini.stop_on_first_error = true
	# ini.load_string("""
	# key1=value1
	# key2
	# key3=value3
	# """)
    #
	# assert ini.length == 1
	# assert ini["key1"] == "value1"
	# assert ini["key2"] == null
	# assert ini["key3"] == null
	# ~~~
	#
	# See also `errors`.
	var stop_on_first_error = false is optional, writable

	# Errors found during parsing
	#
	# Wathever the value of `stop_on_first_error`, errors from parsing a string
	# or a file are logged into `errors`.
	#
	# ~~~
	# var ini = new IniFile.from_string("""
	# key1=value1
	# key2
	# key3=value3
	# """)
    #
	# assert ini.errors.length == 1
	# assert ini.errors.first.message == "Unexpected string `key2` at line 2."
	# ~~~
	#
	# `errors` is not cleared between two parsing:
	#
	# ~~~
	# ini.load_string("""
	# key4
	# key5=value5
	# """)
    #
	# assert ini.errors.length == 2
	# assert ini.errors.last.message == "Unexpected string `key4` at line 1."
	# ~~~
	#
	# See also `stop_on_first_error`.
	var errors = new Array[IniError]
end

# A section in a IniFile
#
# Section properties values are strings associated keys.
# Sections cannot be nested.
#
# ~~~
# var section = new IniSection("section")
# section["key1"] = "value1"
# section["key2"] = "value2"
#
# assert section.length == 2
# assert section["key1"] == "value1"
# assert section["not.found"] == null
# assert section.join(", ", ": ") == "key1: value1, key2: value2"
#
# var i = 0
# for key, value in section do
#	assert key.has_prefix("key")
#	assert value.has_prefix("value")
#	i += 1
# end
# assert i == 2
# ~~~
class IniSection
	super HashMap[String, nullable String]

	# Section name
	var name: String

	# Get the value associated with `key`
	#
	# Returns `null` if the `key` is not found.
	#
	# ~~~
	# var section = new IniSection("section")
	# section["key"] = "value1"
	# section["sub.key"] = "value2"
	#
	# assert section["key"] == "value1"
	# assert section["sub.key"] == "value2"
	# assert section["not.found"] == null
	# ~~~
	redef fun [](key) do
		if not has_key(key) then return null
		return super
	end
end

# Error for `IniFile` parsing
class IniError
	super Error
end
