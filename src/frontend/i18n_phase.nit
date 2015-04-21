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

# Basic support of internationalization through the generation of id-to-string tables
module i18n_phase

intrude import literal
private import annotation
private import parser_util
import astbuilder

redef class ToolContext
	# Main phase of `language`
	var localize_phase: Phase = new I18NPhase(self, [literal_phase])
end

private class I18NPhase
	super Phase

	redef fun process_annotated_node(nmodule, nat) do
		if not nat.name == "i18n" then return

		if not nmodule isa AModuledecl then
			toolcontext.error(nmodule.location, "Error: The localized language can only be used on module declarations.")
			return
		end

		var domain = nmodule.n_name.n_id.text

		var lang: nullable String = null
		if nat.n_args.length > 0 then
			lang = nat.arg_as_string(toolcontext.modelbuilder)
			if lang == null then return
		end

		var module_dir = nmodule.location.file.filename.dirname.realpath
		var locale_dir = module_dir / "languages"

		if not locale_dir.file_exists then locale_dir.mkdir

		var amodule = nmodule.parent.as(AModule)

		var vi = new StringFinder(domain, locale_dir, toolcontext, amodule)
		vi.enter_visit(amodule)

		var module_name = nmodule.location.file.filename.basename(".nit")

		var pot_path = locale_dir / module_name
		var arr = vi.strings.values.to_a
		var po = new POFile.with_strings(arr)
		po.write_template(pot_path)

		if lang != null then
			for i in po.strings do
				i.msgstr = i.msgid
			end

			var lang_dir = locale_dir / lang
			if not lang_dir.file_exists then lang_dir.mkdir

			var messages_dir = lang_dir / "LC_MESSAGES"
			if not messages_dir.file_exists then messages_dir.mkdir

			po.write_to_file(messages_dir / module_name)
		end

		var lit = new LiteralVisitor(toolcontext)
		lit.enter_visit(amodule)
	end
end

private class StringFinder
	super Visitor

	# Strings in the file, used to generate .pot and .po files
	var strings = new HashMap[String, PObject]

	# Domain of the strings to internationalize
	var domain: String

	# Location of the languages file
	var languages_location: String

	# Context for the visitor, used only for the parse_expr
	var toolcontext: ToolContext

	# The module we are working on
	var amodule: AModule

	redef fun visit(n)
	do
		n.accept_string_finder(self)
		n.visit_all(self)
	end

	redef fun enter_visit(e) do
		if e isa AAnnotation then return
		super
	end
end

redef class ANode
	private fun accept_string_finder(v: StringFinder) do end
end

redef class AStringExpr

	redef fun accept_string_finder(v) do
		var str = value.as(not null).escape_to_c
		var parse = v.toolcontext.parse_expr("\"{str}\".get_translation(\"{v.domain}\", \"{v.languages_location}\").unescape_nit")
		var loc = location
		var locstr = "{v.amodule.mmodule.mgroup.name}::{v.amodule.mmodule.name} {loc.line_start}--{loc.column_start}:{loc.column_end}"
		if not v.strings.has_key(str) then
			var po = new PObject([locstr], str, "")
			v.strings[str] = po
		else
			v.strings[str].locations.push locstr
		end
		replace_with(parse)
	end
end

# .po file entry
#
# Locations are optional, they just serve for translation purposes
# to help the translator with the context of the message if necessary
#
# msgid and msgstr are the map of translate to translated strings in the po file.
class PObject
	# Array since the same string can be encountered at several places
	var locations: Array[String]
	# Identifier of the string to translate (i.e. the string itself)
	var msgid: String is writable
	# Translation of the string
	var msgstr: String is writable
end

# A GNU gettext .po/.pot file
class POFile
	super Writable

	# Map of the strings's `msgid` and `msgstr`
	#
	# Read from a PO file
	var strings: Array[PObject]

	# Creates a PO file with strings built-in
	init with_strings(sm: Array[PObject])do
		strings = new Array[PObject].with_capacity(sm.length)
		strings.add_all sm
	end

	redef fun write_to_file(path) do
		if not path.has_suffix(".po") then path += ".po"
		super path
	end

	redef fun write_to(ofs) do
		for i in strings do
			ofs.write("#: {i.locations.join(", ")}\n")
			ofs.write("msgid \"{i.msgid}\"\n")
			ofs.write("msgstr \"{i.msgstr}\"\n\n")
		end
		ofs.write("# Generated file, do not modify\n")
	end

	# Writes the information of the POFile to a .pot template file
	fun write_template(path: String) do
		if not path.has_suffix(".pot") then path += ".pot"
		var f = new FileWriter.open(path)
		write_to(f)
		f.close
	end
end
