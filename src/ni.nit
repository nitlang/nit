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

import toolcontext
import exprbuilder

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
		for n in mbuilder.nmodules do
			var m = n.mmodule
			if m.name == entry then
				flag = true
				module_fulldoc(n)
			end
		end
		for c in model.mclasses do
			if c.name == entry then
				if not mbuilder.mclassdef2nclassdef[c.intro] isa AStdClassdef then continue
				flag = true
				doc_class(c)
			end
		end
		var matches = new List[MProperty]
		for p in model.mproperties do
			if p.name == entry then
				flag = true
				matches.add(p)
			end
		end
		#if not matches.is_empty then doc_properties

		if not flag then print "Nothing known about '{entry}'"
		if arguments.length == 1 then prompt
	end

	private fun module_fulldoc(nmodule: AModule) do
		var mmodule = nmodule.mmodule
		var pager = new Pager
		pager.add("# module {mmodule.name}".bold)
		pager.add("")
		pager.add("import {mmodule.in_importation.direct_greaters.join(", ")}")
		pager.add_rule
		pager.addn(mmodule.comment(nmodule).green)
		pager.add_rule
		if not mmodule.intro_mclasses.is_empty then
			pager.add("# introduced classes\n".bold)
			for mclass in mmodule.intro_mclasses do
				mclass_shortdoc(mclass, pager)
				pager.add("")
			end
		end
		if not mmodule.redef_mclasses.is_empty then
			pager.add("# refined classes\n".bold)
			for mclass in mmodule.redef_mclasses do
				mclass_shortdoc(mclass, pager)
				pager.add("")
			end
		end
		pager.add_rule
		#TODO get mclass from nested modules
		pager.render
	end

	fun doc_class(mclass: MClass) do
		var nclass = mbuilder.mclassdef2nclassdef[mclass.intro].as(AStdClassdef)
		var pager = new Pager
		pager.add("# {mclass.intro_mmodule.public_owner.name}::{mclass.name}".bold)
		pager.add("")
		# full signature
		pager.addn("{mclass.visibility.to_s} ")
		if mclass.is_abstract then pager.addn("abstract ")
		if mclass.is_interface then pager.addn("interface ")
		if mclass.is_enum then pager.addn("enum ")
		if mclass.is_class then pager.addn("class ")
		pager.addn("{mclass.ni_name} ")
		pager.add("super {mclass.in_hierarchy(mainmodule).direct_greaters.join(", ")}")
		pager.add_rule
		# comment
		pager.addn(mclass.comment(nclass).green)
		pager.add_rule
		# formal and virtual types
		#TODO VT
		pager.add_rule
		# properties
		if not mclass.constructors.is_empty then
			pager.add("# constructors\n".bold)
			display_methods(pager, mclass.constructors)
		end
		if not mclass.intro_methods.is_empty then
			pager.add("# methods\n".bold)
			display_methods(pager, mclass.intro_methods)
		end
		if not mclass.inherited_methods.is_empty then
			pager.add("# inherited methods\n".bold)
			display_methods(pager, mclass.inherited_methods)
		end
		pager.add_rule
		pager.render
		#TODO check inheritance methods
	end

	private fun mclass_shortdoc(mclass: MClass, pager: Pager) do
		var nclass = mbuilder.mclassdef2nclassdef[mclass.intro].as(AStdClassdef)

		if not mclass.short_comment(nclass).is_empty then
			pager.add("\t# {mclass.short_comment(nclass)}")
		end
		pager.addn("\t")
		if mclass.is_abstract then
			pager.addn("abstract ")
		end
		if mclass.is_interface then
			pager.addn("interface ")
		else if mclass.is_enum then
			pager.addn("enum ")
		else
			pager.addn("class ")
		end
		if mclass.visibility.to_s == "public" then
			pager.addn("{mclass.ni_name} ".green)
		else if mclass.visibility.to_s == "private" then
			pager.addn("{mclass.ni_name} ".red)
		else
			pager.addn("{mclass.ni_name} ".yellow)
		end
		pager.addn("super {mclass.in_hierarchy(mainmodule).direct_greaters.join(", ")}\n")
	end

	private fun display_methods(pager: Pager, methods: Set[MMethod]) do
		for mmethod in methods do
			#TODO verifier cast
			var nmethod = mbuilder.mpropdef2npropdef[mmethod.intro].as(AMethPropdef)
			if not mmethod.short_comment(nmethod).is_empty then
				pager.add("\t# {mmethod.short_comment(nmethod)}")
			end
			#TODO replace Ft by names
			#TODO fun ou init
			pager.addn("\tfun ")
			if mmethod.visibility.to_s == "public" then pager.addn(mmethod.name.green)
			if mmethod.visibility.to_s == "private" then pager.addn(mmethod.name.red)
			if mmethod.visibility.to_s == "protected" then pager.addn(mmethod.name.yellow)

			pager.addn("{mmethod.intro.msignature.to_s} ")
			#pager.addn("{nmethod.collect_text} ")
			if nmethod isa ADeferredMethPropdef then pager.addn("is abstract ")
			if nmethod isa AInternMethPropdef then pager.addn("is intern ")
			if nmethod isa AExternMethPropdef then pager.addn("is extern ")
			#TODO si non local ajouter namespace
			pager.add("\n")
		end
	end
end

redef class MModule
	# Get the list of mclasses refined in self
	private fun redef_mclasses: Set[MClass] do
		var mclasses = new HashSet[MClass]
		for c in mclassdefs do
			if not c.is_intro and not mclasses.has(c.mclass) then
				mclasses.add(c.mclass)
			end
		end
		return mclasses
	end

	private fun comment(nmodule: AModule): String do
		var ret = ""
		for t in nmodule.n_moduledecl.n_doc.n_comment do
			ret += "{t.text.replace("# ", "")}"
		end
		return ret
	end
end

redef class MClass

	private fun ni_name: String do
		if arity > 0 then
			return "{name}[{intro.parameter_names.join(", ")}]"
		else
			return name
		end
	end

	# Get the list of class constructors
	private fun constructors: Set[MMethod] do
		var res = new HashSet[MMethod]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef then
					if mpropdef.mproperty.is_init then res.add(mpropdef.mproperty)
				end
			end
		end
		return res
	end

	# Get the list of intro methods
	private fun intro_methods: Set[MMethod] do
		var res = new HashSet[MMethod]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef then
					if mpropdef.is_intro and not mpropdef.mproperty.is_init then res.add(mpropdef.mproperty)
				end
			end
		end
		return res
	end

	# Get the list of inherited methods
	private fun inherited_methods: Set[MMethod] do
		var res = new HashSet[MMethod]
		for mclassdef in mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef isa MMethodDef then
					if not mpropdef.is_intro and not mpropdef.mproperty.is_init then res.add(mpropdef.mproperty)
				end
			end
		end
		return res
	end

	private fun comment(nclass: AStdClassdef): String do
		var ret = ""
		if nclass.n_doc != null then
			for t in nclass.n_doc.n_comment do
				var txt = t.text.replace("# ", "")
				txt = txt.replace("#", "")
				ret += "{txt}"
			end
		end
		return ret
	end

	private fun short_comment(nclass: AStdClassdef): String do
		var ret = ""
		if nclass.n_doc != null then
			var txt = nclass.n_doc.n_comment.first.text
			txt = txt.replace("# ", "")
			txt = txt.replace("\n", "")
			ret += txt
		end
		return ret
	end

	private fun is_class: Bool do
		return self.kind == concrete_kind or self.kind == abstract_kind
	end

	private fun is_interface: Bool do
		return self.kind == interface_kind
	end

	private fun is_enum: Bool do
		return self.kind == enum_kind
	end

	private fun is_abstract: Bool do
		return self.kind == abstract_kind
	end
end

redef class MMethod
	private fun short_comment(nmethod: AMethPropdef): String do
		var ret = ""
		if nmethod.n_doc != null then
			var txt = nmethod.n_doc.n_comment.first.text
			txt = txt.replace("# ", "")
			txt = txt.replace("\n", "")
			ret += txt
		end
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
# TODO bornes sur les signatures génériques
# TODO lister les methods qui retournent un certain type
# TODO lister les methods qui utilisent un certain type
# TODO lister les sous-types connus d'une type
# TODO lister les prop adaptés à un type générique
