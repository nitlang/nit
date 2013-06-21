# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

module ni

import model_utils

private class Pager
	var content: String = ""
	fun add(text: String) do addn("{text}\n")
	fun addn(text: String) do content += text.escape
	fun add_rule do add("\n---\n")
	fun render do sys.system("echo \"{content}\" | pager -r")
end

class NitIndex
	private var toolcontext: ToolContext
	private var model: Model
	private var mbuilder: ModelBuilder
	private var mainmodule: MModule
	private var arguments: Array[String]

	init(toolcontext: ToolContext) do
		# We need a model to collect stufs
		self.toolcontext = toolcontext
		self.arguments = toolcontext.option_context.rest

		if arguments.length > 2 then
			print "usage: ni path/to/module.nit [expression]"
			toolcontext.option_context.usage
			exit(1)
		end

		model = new Model
		mbuilder = new ModelBuilder(model, toolcontext)

		# Here we load an process std modules
		#var dir = "NIT_DIR".environ
		#var mmodules = modelbuilder.parse_and_build(["{dir}/lib/standard/standard.nit"])
		var mmodules = mbuilder.parse_and_build([arguments.first])
		if mmodules.is_empty then return
		mbuilder.full_propdef_semantic_analysis
		assert mmodules.length == 1
		self.mainmodule = mmodules.first
	end

	fun start do
		if arguments.length == 1 then
			welcome
			prompt
		else
			seek(arguments[1])
		end
	end

	fun welcome do
		print "Welcome in Nit Index.\n"
		print "Loaded modules"
		for m in mbuilder.nmodules do
			print " - {m.mmodule.name}"
		end
		print "\nEnter the module, class or property name you want to look up."
		print "Enter a blank line to exit.\n"
	end

	fun prompt do
		printn ">> "
		seek(stdin.read_line)
	end

	fun seek(entry: String) do
		# quitting?
		if entry.is_empty then exit(0)

		var flag = false
		for m in model.mmodules do
			if m.name == entry then
				flag = true
				module_fulldoc(m)
			end
		end
		for c in model.mclasses do
			if c.name == entry then
				if not mbuilder.mclassdef2nclassdef[c.intro] isa AStdClassdef then continue
				flag = true
				class_fulldoc(c)
			end
		end
		var matches = new List[MProperty]
		for p in model.mproperties do
			if p.name == entry then
				flag = true
				matches.add(p)
			end
		end
		if not matches.is_empty then props_fulldoc(matches)

		if not flag then print "Nothing known about '{entry}'"
		if arguments.length == 1 then prompt
	end

	private fun module_fulldoc(mmodule: MModule) do
		var nmodule = mbuilder.mmodule2nmodule[mmodule]
		var pager = new Pager
		pager.add("# module {mmodule.name}\n".bold)
		pager.add("import {mmodule.in_importation.direct_greaters.join(", ")}")
		pager.add_rule
		pager.addn(nmodule.comment.green)
		pager.add_rule

		var cats = new HashMap[String, Collection[MClass]]
		cats["introduced classes"] = mmodule.intro_mclasses
		cats["refined classes"] = mmodule.redef_mclasses
		cats["inherited classes"] = mmodule.imported_mclasses

		for cat, list in cats do
			if not list.is_empty then
				pager.add("# {cat}\n".bold)
				for mclass in list do
					var nclass = mbuilder.mclassdef2nclassdef[mclass.intro].as(AStdClassdef)
					if not nclass.short_comment.is_empty then
						pager.add("\t# {nclass.short_comment}")
					end
					if cat == "refined classes" then
						pager.add("\tredef {mclass.short_doc}")
					else
						pager.add("\t{mclass.short_doc}")
					end
					if not mclass.intro_mmodule == mmodule then
						pager.add("\t\tintroduced in {mmodule.full_name}::{mclass}".gray)
					end
					pager.add("")
				end
			end
		end
		pager.add_rule
		pager.render
	end

	private fun class_fulldoc(mclass: MClass) do
		var nclass = mbuilder.mclassdef2nclassdef[mclass.intro].as(AStdClassdef)
		var pager = new Pager
		pager.add("# {mclass.intro_mmodule.public_owner.name}::{mclass.name}\n".bold)
		pager.add("{mclass.short_doc} ")
		pager.add_rule
		pager.addn(nclass.comment.green)
		pager.add_rule
		if not mclass.parameter_types.is_empty then
			pager.add("# formal types\n".bold)
			for ft, bound in mclass.parameter_types do
				pager.add("\t{ft.to_s.green}: {bound}")
				pager.add("")
			end
		end
		if not mclass.virtual_types.is_empty then
			pager.add("# virtual types\n".bold)
			for vt in mclass.virtual_types do
				if vt.visibility.to_s == "public" then pager.add("\t{vt.to_s.green}: {vt.intro.bound.to_s}")
				if vt.visibility.to_s == "private" then pager.add("\t{vt.to_s.red}: {vt.intro.bound.to_s}")
				if vt.visibility.to_s == "protected" then pager.add("\t{vt.to_s.yellow}: {vt.intro.bound.to_s}")
				if vt.intro_mclassdef != mclass.intro then
					pager.add("\t\tintroduced in {vt.intro_mclassdef.namespace}::{vt}".gray)
				end
				pager.add("")
			end
		end
		pager.add_rule

		var cats = new HashMap[String, Collection[MMethod]]
		cats["constructors"] = mclass.constructors
		cats["introduced methods"] = mclass.intro_methods
		cats["refined methods"] = mclass.redef_methods
		cats["inherited methods"] = mclass.inherited_methods

		for cat, list in cats do
			if not list.is_empty then
				pager.add("# {cat}\n".bold)
				for mmethod in list do
					#TODO verifier cast
					var nmethod = mbuilder.mpropdef2npropdef[mmethod.intro].as(AMethPropdef)
					if not nmethod.short_comment.is_empty then
						pager.add("\t# {nmethod.short_comment}")
					end
					if cat == "refined methods" then
						pager.add("\tredef {nmethod}")
					else
						pager.add("\t{nmethod}")
					end
					if not mmethod.intro_mclassdef == mclass.intro then
						pager.add("\t\tintroduced in {mmethod.intro_mclassdef.namespace}::{mmethod}".gray)
					end
					pager.add("")
				end
			end
		end
		pager.render
	end

	private fun props_fulldoc(mprops: List[MProperty]) do
		var pager = new Pager
		for mprop in mprops do
			var nprop = mbuilder.mpropdef2npropdef[mprop.intro]
			if nprop isa AMethPropdef then
				pager.add("# {mprop.intro_mclassdef.namespace.bold}\n")
				if not nprop.short_comment.is_empty then
					pager.add("\t# {nprop.short_comment}")
				end
				pager.add("\t{nprop}")
				pager.add("\t\t" + "introduced in {mprop.intro_mclassdef.namespace}".gray)
				for mpropdef in mprop.mpropdefs do
					if mpropdef != mprop.intro then
						pager.add("\t\t" + "refined in {mpropdef.mclassdef.namespace}".gray)
					end
				end
			end
			pager.add_rule
		end
		pager.render
	end
end

# Printing facilities

redef class MClass

	redef fun to_s: String do
		if arity > 0 then
			return "{name}[{intro.parameter_names.join(", ")}]"
		else
			return name
		end
	end

	private fun short_doc: String do
		var ret = ""
		if is_interface then ret = "interface {ret}"
		if is_enum then ret = "enum {ret}"
		if is_class then ret = "class {ret}"
		if is_abstract then ret = "abstract {ret}"
		if visibility.to_s == "public" then ret = "{ret}{to_s.green}"
		if visibility.to_s == "private" then ret = "{ret}{to_s.red}"
		if visibility.to_s == "protected" then ret = "{ret}{to_s.yellow}"
		ret = "{ret} super {parents.join(", ")}"
		return ret
	end
end

redef class MClassDef
	private fun namespace: String do
		return "{mmodule.full_name}::{mclass.name}"
	end
end

redef class AModule
	private fun comment: String do
		var ret = ""
		for t in n_moduledecl.n_doc.n_comment do
			ret += "{t.text.replace("# ", "")}"
		end
		return ret
	end
end

redef class AStdClassdef
	private fun comment: String do
		var ret = ""
		if n_doc != null then
			for t in n_doc.n_comment do
				var txt = t.text.replace("# ", "")
				txt = txt.replace("#", "")
				ret += "{txt}"
			end
		end
		return ret
	end

	private fun short_comment: String do
		var ret = ""
		if n_doc != null then
			var txt = n_doc.n_comment.first.text
			txt = txt.replace("# ", "")
			txt = txt.replace("\n", "")
			ret += txt
		end
		return ret
	end
end

redef class AMethPropdef
	private fun short_comment: String do
		var ret = ""
		if n_doc != null then
			var txt = n_doc.n_comment.first.text
			txt = txt.replace("# ", "")
			txt = txt.replace("\n", "")
			ret += txt
		end
		return ret
	end

	redef fun to_s do
		var ret = ""
		if not mpropdef.mproperty.is_init then
			ret = "fun "
		end
		if mpropdef.mproperty.visibility.to_s == "public" then ret = "{ret}{mpropdef.mproperty.name.green}"
		if mpropdef.mproperty.visibility.to_s == "private" then ret = "{ret}{mpropdef.mproperty.name.red}"
		if mpropdef.mproperty.visibility.to_s == "protected" then ret = "{ret}{mpropdef.mproperty.name.yellow}"
		if n_signature != null then ret = "{ret}{n_signature.to_s}"
		if n_kwredef != null then ret = "redef {ret}"
		if self isa ADeferredMethPropdef then ret = "{ret} is abstract"
		if self isa AInternMethPropdef then ret = "{ret} is intern"
		if self isa AExternMethPropdef then ret = "{ret} is extern"
		return ret
	end
end

redef class ASignature
	redef fun to_s do
		#TODO closures
		var ret = ""
		if not n_params.is_empty then
			ret = "{ret}({n_params.join(", ")})"
		end
		if n_type != null then ret += ": {n_type.to_s}"
		return ret
	end
end

redef class AParam
	redef fun to_s do
		var ret = "{n_id.text}"
		if n_type != null then
			ret = "{ret}: {n_type.to_s}"
			if n_dotdotdot != null then ret = "{ret}..."
		end
		return ret
	end
end

redef class AType
	redef fun to_s do
		var ret = n_id.text
		if n_kwnullable != null then ret = "nullable {ret}"
		if not n_types.is_empty then ret = "{ret}[{n_types.join(", ")}]"
		return ret
	end
end

# Redef String class to add a function to color the string
redef class String

	private fun add_escape_char(escapechar: String): String do
		return "{escapechar}{self}\\033[0m"
	end

	private fun esc: Char do return 27.ascii
	private fun red: String do return add_escape_char("{esc}[1;31m")
	private fun yellow: String do return add_escape_char("{esc}[1;33m")
	private fun green: String do return add_escape_char("{esc}[1;32m")
	private fun blue: String do return add_escape_char("{esc}[1;34m")
	private fun cyan: String do return add_escape_char("{esc}[1;36m")
	private fun gray: String do return add_escape_char("{esc}[30;1m")
	private fun bold: String do return add_escape_char("{esc}[1m")
	private fun underline: String do return add_escape_char("{esc}[4m")

	private fun escape: String
	do
		var b = new Buffer
		for c in self do
			if c == '\n' then
				b.append("\\n")
			else if c == '\0' then
				b.append("\\0")
			else if c == '"' then
				b.append("\\\"")
			else if c == '\\' then
				b.append("\\\\")
			else if c == '`' then
				b.append("'")
			else if c.ascii < 32 then
				b.append("\\{c.ascii.to_base(8, false)}")
			else
				b.add(c)
			end
		end
		return b.to_s
	end
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.process_options

# Here we launch the nit index
var ni = new NitIndex(toolcontext)
ni.start

# TODO seek methods
# TODO lister les methods qui retournent un certain type
# TODO lister les methods qui utilisent un certain type
# TODO lister les sous-types connus d'une type
# TODO sorter par ordre alphabétique
