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

# String templating using macros.
#
# There is plenty of macro/templating tools in the worl,
# yet another one.
#
# See `TemplateString` for more details.
module macro

import template

# Template with macros replacement.
#
# `TemplateString` provides a simple way to customize generic string templates
# using macros and replacement.
#
# A macro is represented as a string identifier like `%MACRO%` in the template
# string. Using `TemplateString`, macros can be replaced by any `Writable` data:
#
#     var tpl = new TemplateString("Hello %NAME%!")
#     tpl.replace("NAME", "Dave")
#     assert tpl.write_to_string == "Hello Dave!"
#
# A macro identifier is valid if:
#
# * starts with an uppercase letter
# * contains only numbers, uppercase letters or '_'
#
# See `String::is_valid_macro_name` for more details.
#
# ## External template files
#
# When using large template files it's recommanded to use external template files.
#
# In external file `example.tpl`:
#
# ~~~html
# <!DOCTYPE html>
# <html lang="en">
#  <head>
#   <title>%TITLE%</title>
#  </head>
#  <body>
#   <h1>%TITLE%</h1>
#   <p>%ARTICLE%</p>
#  </body>
# </html>
# ~~~
#
# Loading the template file using `TemplateString`:
#
#     var file = "example.tpl"
#     if file.file_exists then
#         tpl = new TemplateString.from_file("example.tpl")
#         tpl.replace("TITLE", "Home Page")
#         tpl.replace("ARTICLE", "Welcome on my site!")
#     end
#
# ## Outputting
#
# Once macro replacement has been made, the `TemplateString` can be
# output like any other `Template` using methods like `write_to`, `write_to_string`
# or `write_to_file`.
#
#     tpl = new TemplateString("Hello %NAME%!")
#     tpl.replace("NAME", "Dave")
#     assert tpl.write_to_string == "Hello Dave!"
#
# ## Template correctness
#
# `TemplateString` can be outputed even if all macros were not replaced.
# In this case, the name of the macro will be displayed wuthout any replacement.
#
#     tpl = new TemplateString("Hello %NAME%!")
#     assert tpl.write_to_string == "Hello %NAME%!"
#
# The `check` method can be used to ensure that all macros were replaced before
# performing the output. Warning messages will be stored in `warnings` and can
# be used to locate unreplaced macros.
#
#     tpl = new TemplateString("Hello %NAME%!")
#     if not tpl.check then
#         assert not tpl.warnings.is_empty
#         print "Cannot output unfinished template:"
#         print tpl.warnings.join("\n")
#         exit(0)
#     else
#         tpl.write_to sys.stdout
#     end
#     assert tpl.write_to_string == "Hello %NAME%!"
class TemplateString
	super Template

	# Template original text.
	var tpl_text: String

	# Macros contained in the template file.
	private var macros = new HashMap[String, Array[TemplateMacro]]

	# Macro identifier delimiter char (`'%'` by default).
	#
	# To use a different delimiter you can subclasse `TemplateString` and defined the `marker`.
	#
	#     class DollarTemplate
	#         super TemplateString
	#         redef var marker = '$'
	#     end
	#     var tpl = new DollarTemplate("Hello $NAME$!")
	#     tpl.replace("NAME", "Dave")
	#     assert tpl.write_to_string == "Hello Dave!"
	protected var marker = '%'

	# Creates a new template from a `text`.
	#
	#     var tpl = new TemplateString("Hello %NAME%!")
	#     assert tpl.write_to_string == "Hello %NAME%!"
	init do
		parse
	end

	# Creates a new template from the contents of `file`.
	init from_file(file: String) do
		init load_template_file(file)
	end

	# Loads the template file contents.
	private fun load_template_file(tpl_file: String): String do
		var file = new FileReader.open(tpl_file)
		var text = file.read_all
		file.close
		return text
	end

	# Finds all the macros contained in `text` and store them in `macros`.
	#
	# Also build `self` template parts using original template text.
	private fun parse do
		var text = tpl_text
		var pos = 0
		var out = new FlatBuffer
		var start_pos: Int
		var end_pos: Int
		while pos < text.length do
			# lookup opening tag
			start_pos = text.read_until_char(pos, marker, out)
			if start_pos < 0 then
				text.read_until_pos(pos, text.length, out)
				add out.to_s
				break
			end
			add out.to_s
			pos = start_pos + 1
			# lookup closing tag
			out.clear
			end_pos = text.read_until_char(pos, marker, out)
			if end_pos < 0 then
				text.read_until_pos(pos, text.length, out)
				add "%"
				add out.to_s
				break
			end
			pos = end_pos + 1
			# check macro
			var name = out.to_s
			if name.is_valid_macro_name then
				add make_macro(name, start_pos, end_pos)
			else
				add "%"
				add name
				add "%"
			end
			out.clear
		end
	end

	# Add a new macro to the list
	private fun make_macro(name: String, start_pos, end_pos: Int): TemplateMacro do
		if not macros.has_key(name) then
			macros[name] = new Array[TemplateMacro]
		end
		var macro = new TemplateMacro(name, start_pos, end_pos)
		macros[name].add macro
		return macro
	end

	# Available macros in `self`.
	#
	#     var tpl = new TemplateString("Hello %NAME%!")
	#     assert tpl.macro_names.first == "NAME"
	fun macro_names: Collection[String] do return macros.keys

	# Does `self` contain a macro with `name`.
	#
	#     var tpl = new TemplateString("Hello %NAME%")
	#     assert tpl.has_macro("NAME")
	fun has_macro(name: String): Bool do return macro_names.has(name)

	# Replace a `macro` by a streamable `replacement`.
	#
	# REQUIRE `has_macro(name)`
	#
	#     var tpl = new TemplateString("Hello %NAME%!")
	#     tpl.replace("NAME", "Dave")
	#     assert tpl.write_to_string == "Hello Dave!"
	fun replace(name: String, replacement: Writable) do
		assert has_macro(name)
		for macro in macros[name] do
			macro.replacement = replacement
		end
	end

	# Check if all macros were replaced.
	#
	# Return false if a macro was not replaced and store message in `warnings`.
	#
	#     var tpl = new TemplateString("Hello %FIRSTNAME%, %LASTNAME%!")
	#     assert not tpl.check
	#     tpl.replace("FIRSTNAME", "Corben")
	#     tpl.replace("LASTNAME", "Dallas")
	#     assert tpl.check
	fun check: Bool do
		warnings.clear
		var all_ok = true
		for name, macros in self.macros do
			for macro in macros do
				if not macro.is_replaced then
					all_ok = false
					warnings.add "No replacement for macro %{macro.name}% at {macro.location}"
				end
			end
		end
		return all_ok
	end

	# Last `check` warnings.
	#
	#     var tpl = new TemplateString("Hello %FIRSTNAME%, %LASTNAME%!")
	#     tpl.check
	#     assert tpl.warnings.length == 2
	#     assert tpl.warnings[0] == "No replacement for macro %FIRSTNAME% at (6:16)"
	#     assert tpl.warnings[1] == "No replacement for macro %LASTNAME% at (19:28)"
	#     tpl.replace("FIRSTNAME", "Corben")
	#     tpl.replace("LASTNAME", "Dallas")
	#     tpl.check
	#     assert tpl.warnings.is_empty
	var warnings = new Array[String]

	# Returns a view on `self` macros on the form `macro.name`/`macro.replacement`.
	#
	# Given that all macros with the same name are all replaced with the same
	# replacement, this view contains only one entry for each name.
	#
	#     var tpl = new TemplateString("Hello %FIRSTNAME%, %LASTNAME%!")
	#     for name, rep in tpl do assert rep == null
	#     tpl.replace("FIRSTNAME", "Corben")
	#     tpl.replace("LASTNAME", "Dallas")
	#     for name, rep in tpl do assert rep != null
	fun iterator: MapIterator[String, nullable Writable] do
		return new TemplateStringIterator(self)
	end
end

# A macro is a special text command that is replaced by other content in a `TemplateString`.
private class TemplateMacro
	super Template
	# Macro name as found in the template.
	var name: String

	# Macro starting position in template.
	var start_pos: Int

	# Macro ending position in template.
	var end_pos: Int

	# Macro replacement if any.
	var replacement: nullable Writable = null

	# Does `self` already have a `replacement`?
	fun is_replaced: Bool do return replacement != null

	# Render `replacement` or else `name`.
	redef fun rendering do
		if is_replaced then
			add replacement.as(not null)
		else
			add "%{name}%"
		end
	end

	# Human readable location.
	fun location: String do return "({start_pos}:{end_pos})"
end

redef class String
	# Reads `self` from pos `from` to pos `to` and store result in `buffer`.
	private fun read_until_pos(from, to: Int, buffer: Buffer): Int do
		if from < 0 or from >= length or
		   to < 0 or to >= length or
	       from >= to then return -1
		var pos = from
		while pos < to do
			buffer.add self[pos]
			pos += 1
		end
		return pos
	end

	# Reads `self` until `to` is encountered and store result in `buffer`.
	#
	# Returns `to` position or `-1` if not found.
	private fun read_until_char(from: Int, char: Char, buffer: Buffer): Int do
		if from < 0 or from >= length then return -1
		var pos = from
		while pos > -1 and pos < length do
			var c = self[pos]
			if c == char then return pos
			buffer.add c
			pos += 1
		end
		return -1
	end

	# Is `self` a valid macro identifier?
	#
	# A macro identifier is valid if:
	#
	# * starts with an uppercase letter
	# * contains only numers, uppercase letters or '_'
	#
	#     # valid
	#     assert "NAME".is_valid_macro_name
	#     assert "FIRST_NAME".is_valid_macro_name
	#     assert "BLOCK1".is_valid_macro_name
	#     # invalid
	#     assert not "1BLOCK".is_valid_macro_name
	#     assert not "_BLOCK".is_valid_macro_name
	#     assert not "FIRST NAME".is_valid_macro_name
	#     assert not "name".is_valid_macro_name
	fun is_valid_macro_name: Bool do
		if not first.is_upper then return false
		for c in self do
			if not c.is_upper and c != '_' and not c.is_digit then return false
		end
		return true
	end
end

private class TemplateStringIterator
	super MapIterator[String, nullable Writable]

	var subject: TemplateString
	var key_it: Iterator[String] is noinit

	init do
		self.key_it = subject.macro_names.iterator
	end

	redef fun is_ok do return key_it.is_ok
	redef fun next do key_it.next
	redef fun key do return key_it.item
	redef fun item do return subject.macros[key].first.replacement
end
