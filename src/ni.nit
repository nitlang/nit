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

# ni or nit index, is a command tool used to display documentation
module ni

import model_utils

private class Pager
	var content = new Buffer
	fun add(text: String) do addn("{text}\n")
	fun addn(text: String) do content.append(text.escape)
	fun add_rule do add("\n---\n")
	fun render do sys.system("echo \"{content}\" | pager -r")
end

# Main class of the nit index tool
# NitIndex build the model using the toolcontext argument
# then wait for query on std in to display documentation
class NitIndex
	private var toolcontext: ToolContext
	private var model: Model
	private var mbuilder: ModelBuilder
	private var mainmodule: MModule
	private var arguments: Array[String]

	init(toolcontext: ToolContext) do
		# We need a model to collect stufs
		self.toolcontext = toolcontext
		self.toolcontext.option_context.options.clear
		self.arguments = toolcontext.option_context.rest

		if arguments.is_empty or arguments.length > 2 then
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
		if entry.is_empty then exit(0)
		var flag = false
		# seek return types
		if entry.has_prefix("return:") then
			var ret = entry.split_with(":")[1].replace(" ", "")
			var matches = seek_returns(ret)
			if not matches.is_empty then
				flag = true
				props_fulldoc(matches)
			end
		else if entry.has_prefix("param:") then
			var param = entry.split_with(":")[1].replace(" ", "")
			var matches = seek_params(param)
			if not matches.is_empty then
				flag = true
				props_fulldoc(matches)
			end
		else
			# seek for modules
			var mmatches = new List[MModule]
			for m in model.mmodules do
				if m.name == entry then
					flag = true
					mmatches.add(m)
				end
			end
			if not mmatches.is_empty then modules_fulldoc(mmatches)
			# seek for classes
			var cmatches = new List[MClass]
			for c in model.mclasses do
				if c.name == entry then
					flag = true
					cmatches.add(c)
				end
			end
			if not cmatches.is_empty then classes_fulldoc(cmatches)
			# seek for properties
			var matches = new List[MProperty]
			for p in model.mproperties do
				if p.name == entry then
					flag = true
					matches.add(p)
				end
			end
			if not matches.is_empty then props_fulldoc(matches)
		end
		# no matches
		if not flag then print "Nothing known about '{entry}'"
		if arguments.length == 1 then prompt
	end

	private fun modules_fulldoc(mmodules: List[MModule]) do
		var pager = new Pager
		for mmodule in mmodules do
			var nmodule = mbuilder.mmodule2nmodule[mmodule]
			pager.add("# module {mmodule.namespace}\n".bold)
			if not mmodule.in_importation.direct_greaters.is_empty then
				pager.add("import ".bold + "{mmodule.in_importation.direct_greaters.join(", ")}\n")
			end
			if not mmodule.in_importation.direct_smallers.is_empty then
				pager.add("known clients: ".bold + "{mmodule.in_importation.direct_smallers.join(", ")}\n")
			end
			pager.add_rule
			pager.addn(nmodule.n_moduledecl.n_doc.comment.green)
			pager.add_rule

			var cats = new HashMap[String, Collection[MClass]]
			cats["introduced classes"] = mmodule.intro_mclasses
			cats["refined classes"] = mmodule.redef_mclasses
			cats["imported classes"] = mmodule.imported_mclasses

			for cat, list in cats do
				if not list.is_empty then
					pager.add("\n# {cat}".bold)
					#sort list
					var sorted = new Array[MClass]
					sorted.add_all(list)
					var sorter = new MClassNameSorter
					sorter.sort(sorted)
					for mclass in sorted do
						var nclass = mbuilder.mclassdef2nclassdef[mclass.intro].as(AStdClassdef)
						pager.add("")
						if not nclass.n_doc == null and not nclass.n_doc.short_comment.is_empty then
							pager.add("\t# {nclass.n_doc.short_comment}")
						end
						if cat == "refined classes" then
							pager.add("\tredef {mclass.short_doc}")
						else
							pager.add("\t{mclass.short_doc}")
						end
						if cat != "introduced classes" then
							pager.add("\t\t" + "introduced in {mmodule.full_name}::{mclass}".gray)
						end
						for mclassdef in mclass.mclassdefs do
							if mclassdef != mclass.intro then
								pager.add("\t\t" + "refined in {mclassdef.namespace}".gray)
							end
						end
					end
				end
			end
			pager.add_rule
		end
		pager.render
	end

	private fun classes_fulldoc(mclasses: List[MClass]) do
		var pager = new Pager
		for mclass in mclasses do
			var nclass = mbuilder.mclassdef2nclassdef[mclass.intro].as(AStdClassdef)

			pager.add("# {mclass.namespace}\n".bold)
			pager.add("{mclass.short_doc}")
			pager.add_rule
			pager.addn(nclass.n_doc.comment.green)
			pager.add_rule
			if not mclass.parameter_types.is_empty then
				pager.add("# formal types".bold)
				for ft, bound in mclass.parameter_types do
					pager.add("")
					pager.add("\t{ft.to_s.green}: {bound}")
				end
			end
			if not mclass.virtual_types.is_empty then
				pager.add("# virtual types".bold)
				for vt in mclass.virtual_types do
					pager.add("")
					mpropdef_fulldoc(pager, vt.intro)
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
					#sort list
					var sorted = new Array[MMethod]
					sorted.add_all(list)
					var sorter = new MPropertyNameSorter
					sorter.sort(sorted)
					pager.add("\n# {cat}".bold)
					for mprop in sorted do
						pager.add("")
						mpropdef_fulldoc(pager, mprop.intro)
					end
				end
			end
			pager.add_rule
		end
		pager.render
	end

	private fun props_fulldoc(raw_mprops: List[MProperty]) do
		var pager = new Pager
		# group by module
		var cats = new HashMap[MClass, Array[MProperty]]
		for mprop in raw_mprops do
			if not mbuilder.mpropdef2npropdef.has_key(mprop.intro) then continue
			if mprop isa MAttribute then continue
			var mclass = mprop.intro_mclassdef.mclass
			if not cats.has_key(mclass) then cats[mclass] = new Array[MProperty]
			cats[mclass].add(mprop)
		end
		#sort groups
		var sorter = new MClassNameSorter
		var sorted = new Array[MClass]
		sorted.add_all(cats.keys)
		sorter.sort(sorted)
		# display
		for mclass in sorted do
			var mprops = cats[mclass]
			pager.add("# {mclass.namespace}".bold)
			var sorterp = new MPropertyNameSorter
			sorterp.sort(mprops)
			for mprop in mprops do
				pager.add("")
				mpropdef_fulldoc(pager, mprop.intro)
			end
			pager.add_rule
		end
		pager.render
	end

	private fun seek_returns(entry: String): List[MProperty] do
		# TODO how to match with generic types?
		var matches = new List[MProperty]
		for mprop in model.mproperties do
			var intro = mprop.intro
			if intro isa MMethodDef then
				if intro.msignature.return_mtype != null and intro.msignature.return_mtype.to_s == entry then matches.add(mprop)
			else if intro isa MAttributeDef then
				if intro.static_mtype.to_s == entry then matches.add(mprop)
			end
		end
		return matches
	end

	private fun seek_params(entry: String): List[MProperty] do
		# TODO how to match with generic types?
		var matches = new List[MProperty]
		for mprop in model.mproperties do
			var intro = mprop.intro
			if intro isa MMethodDef then
				var mparameters = intro.msignature.mparameters
				for mparameter in mparameters do
					if mparameter.mtype.to_s == entry then matches.add(mprop)
				end
			else if intro isa MAttributeDef then
				if intro.static_mtype.to_s == entry then matches.add(mprop)
			end
		end
		return matches
	end

	private fun mpropdef_fulldoc(pager: Pager, mpropdef: MPropDef) do
		if mbuilder.mpropdef2npropdef.has_key(mpropdef) then
			var nprop = mbuilder.mpropdef2npropdef[mpropdef]
			if not nprop.n_doc == null and not nprop.n_doc.short_comment.is_empty then
				pager.add("\t# {nprop.n_doc.short_comment}")
			end
		end
		pager.add("\t{mpropdef}")
		pager.add("\t\t" + "introduced in {mpropdef.mproperty.intro_mclassdef.namespace}".gray)
		for mpdef in mpropdef.mproperty.mpropdefs do
			if not mpdef.is_intro then
				pager.add("\t\t" + "refined in {mpdef.mclassdef.namespace}".gray)
			end
		end
	end
end

# Printing facilities

redef class MModule
	private fun namespace: String do
		return full_name
	end
end

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
		if not parents.is_empty then
			ret = "{ret} super {parents.join(", ")}"
		end
		return ret
	end

	private fun namespace: String do
		if not intro_mmodule.public_owner == null then
			return "{intro_mmodule.public_owner.name}::{name}"
		else
			return "{intro_mmodule.name}::{name}"
		end
	end
end

redef class MClassDef
	private fun namespace: String do
		return "{mmodule.full_name}::{mclass.name}"
	end
end

redef class MMethodDef
	redef fun to_s do
		var res = new Buffer
		if not is_intro then res.append("redef ")
		if not mproperty.is_init then res.append("fun ")
		if mproperty.visibility.to_s == "public" then res.append(mproperty.name.green)
		if mproperty.visibility.to_s == "private" then res.append(mproperty.name.red)
		if mproperty.visibility.to_s == "protected" then res.append(mproperty.name.yellow)
		if msignature != null then res.append(msignature.to_s)
		# FIXME: modifiers should be accessible via the model
		#if self isa ADeferredMethPropdef then ret = "{ret} is abstract"
		#if self isa AInternMethPropdef then ret = "{ret} is intern"
		#if self isa AExternMethPropdef then ret = "{ret} is extern"
		return res.to_s
	end
end

redef class MVirtualTypeDef
	redef fun to_s do
		var res = new Buffer
		if mproperty.visibility.to_s == "public" then res.append(mproperty.name.green)
		if mproperty.visibility.to_s == "private" then res.append(mproperty.name.red)
		if mproperty.visibility.to_s == "protected" then res.append(mproperty.name.yellow)
		res.append(": {bound.to_s}")
		return res.to_s
	end
end

redef class MSignature
	redef fun to_s do
		var res = new Buffer
		if not mparameters.is_empty then
			res.append("(")
			for i in [0..mparameters.length[ do
				res.append(mparameters[i].to_s)
				if i < mparameters.length - 1 then res.append(", ")
			end
			res.append(")")
		end
		if return_mtype != null then
			res.append(": {return_mtype.to_s}")
		end
		return res.to_s
	end
end

redef class MParameter
	redef fun to_s do
		var res = new Buffer
		res.append("{name}: {mtype}")
		if is_vararg then res.append("...")
		return res.to_s
	end
end

redef class MNullableType
	redef fun to_s do return "nullable {mtype}"
end

redef class MGenericType
	redef fun to_s do
		var res = new Buffer
		res.append("{mclass.name}[")
		for i in [0..arguments.length[ do
			res.append(arguments[i].to_s)
			if i < arguments.length - 1 then res.append(", ")
		end
		res.append("]")
		return res.to_s
	end
end

redef class MParameterType
	redef fun to_s do return mclass.intro.parameter_names[rank]
end

redef class MVirtualType
	redef fun to_s do return mproperty.intro.to_s
end

redef class ADoc
	private fun comment: String do
		var res = new Buffer
		for t in n_comment do
			res.append(t.text.replace("# ", "").replace("#", ""))
		end
		return res.to_s
	end

	private fun short_comment: String do
		return n_comment.first.text.replace("# ", "").replace("\n", "")
	end
end

redef class AAttrPropdef
	private fun read_accessor: String do
		var ret = "fun "
		#FIXME bug with standard::stream::FDStream::fd
		var name = mreadpropdef.mproperty.name
		if mpropdef.mproperty.visibility.to_s == "public" then ret = "{ret}{name.green}"
		if mpropdef.mproperty.visibility.to_s == "private" then ret = "{ret}{name.red}"
		if mpropdef.mproperty.visibility.to_s == "protected" then ret = "{ret}{name.yellow}"
		ret = "{ret}: {n_type.to_s}"
		if n_kwredef != null then ret = "redef {ret}"
		return ret
	end

	private fun write_accessor: String do
		var ret = "fun "
		var name = "{mreadpropdef.mproperty.name}="
		if n_readable != null and n_readable.n_visibility != null then
			if n_readable.n_visibility isa APublicVisibility then ret = "{ret}{name.green}"
			if n_readable.n_visibility isa APrivateVisibility then ret = "{ret}{name.red}"
			if n_readable.n_visibility isa AProtectedVisibility then ret = "{ret}{name.yellow}"
		else
			ret = "{ret}{name.red}"
		end
		ret = "{ret}({mreadpropdef.mproperty.name}: {n_type.to_s})"
		if n_kwredef != null then ret = "redef {ret}"
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

# TODO seek subclasses and super classes <.<class> >.<class>
# TODO seek subclasses and super types <:<type> >:<type>
# TODO seek with regexp
# TODO standardize namespaces with private option
