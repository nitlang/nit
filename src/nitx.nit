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

# nit index, is a command tool used to display documentation
module nitx

import model_utils
import modelize_property
import frontend

private class Pager
	var content = new Buffer
	fun add(text: String) do addn("{text}\n")
	fun addn(text: String) do content.append(text.escape)
	fun add_rule do add("\n---\n")
	fun render do sys.system("echo \"{content}\" | pager -r")
end

private class Query
	var keyword: String
	init(keyword: String) do
		self.keyword = keyword
	end
end

private class QueryPair
	super Query
	var category: String
	init(keyword: String, category: String) do
		super(keyword)
		self.category = category
	end
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
		var mmodules = mbuilder.parse([arguments.first])
		if mmodules.is_empty then return
		mbuilder.run_phases
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
		print "Welcome in the Nit Index."
		print ""
		print "Loaded modules:"
		var mmodules = new Array[MModule]
		mmodules.add_all(model.mmodules)
		var sorter = new MModuleNameSorter
		sorter.sort(mmodules)
		for m in mmodules do
			print "\t{m.name}"
		end
		print ""
		help
	end

	fun help do
		print "\nCommands:"
		print "\tname\t\tlookup module, class and property with the corresponding 'name'"
		print "\tparam: Type\tlookup methods using the corresponding 'Type' as parameter"
		print "\treturn: Type\tlookup methods returning the corresponding 'Type'"
		print "\tnew: Type\tlookup methods creating new instances of 'Type'"
		print "\t:h\t\tdisplay this help message"
		print "\t:q\t\texit"
		print ""
	end

	fun prompt do
		printn ">> "
		seek(stdin.read_line)
	end

	fun seek(entry: String) do
		if entry.is_empty then
			prompt
			return
		end
		if entry == ":h" then
			help
			prompt
			return
		end
		if entry == ":q" then exit(0)
		var pager = new Pager
		var query = parse_query(entry)
		if query isa QueryPair then
			# seek return types
			if query.category == "return" then
				var matches = seek_returns(query.keyword)
				props_fulldoc(pager, matches)
			# seek param types
			else if query.category == "param" then
				var matches = seek_params(query.keyword)
				props_fulldoc(pager, matches)
			# seek type inits
			else if query.category == "new" then
				var matches = seek_inits(query.keyword)
				props_fulldoc(pager, matches)
			end
		else
			# seek for modules
			var mmatches = new List[MModule]
			for m in model.mmodules do
				if m.name == entry then mmatches.add(m)
			end
			if not mmatches.is_empty then modules_fulldoc(pager, mmatches)
			# seek for classes
			var cmatches = new List[MClass]
			for c in model.mclasses do
				if c.name == entry then cmatches.add(c)
			end
			if not cmatches.is_empty then classes_fulldoc(pager, cmatches)
			# seek for properties
			var matches = new List[MProperty]
			for p in model.mproperties do
				if p.name == entry then matches.add(p)
			end
			if not matches.is_empty then props_fulldoc(pager, matches)
		end
		# no matches
		if pager.content.is_empty then
			print "Nothing known about '{entry}', type ':h' for help"
		else
			pager.render
		end
		if arguments.length == 1 then prompt
	end

	private fun parse_query(str: String): Query do
		var parts = str.split_with(":")
		if parts.length == 1 then
			return new Query(parts[0])
		else
			var category = parts[0]
			var keyword = parts[1]
			if keyword.first == ' ' then keyword = keyword.substring_from(1)
			return new QueryPair(keyword, category)
		end
	end

	private fun modules_fulldoc(pager: Pager, mmodules: List[MModule]) do
		for mmodule in mmodules do
			# name and prototype
			pager.add("# {mmodule.namespace}\n".bold)
			# comment
			if mbuilder.mmodule2nmodule.has_key(mmodule) then
				var nmodule = mbuilder.mmodule2nmodule[mmodule]
				if not nmodule.n_moduledecl.n_doc == null then
					for comment in nmodule.n_moduledecl.n_doc.comment do pager.add(comment.green)
				end
			end
			pager.add("{mmodule.prototype}\n")
			# imports
			var msorter = new MModuleNameSorter
			var ms = mmodule.in_importation.greaters.to_a
			if ms.length > 1 then
				msorter.sort(ms)
				pager.add("## imported modules".bold)
				pager.addn("\t")
				for i in [0..ms.length[ do
					if ms[i] == mmodule then continue
					pager.addn(ms[i].name)
					if i < ms.length - 1 then pager.addn(", ")
				end
				pager.add("\n")
			end
			# clients
			ms = mmodule.in_importation.smallers.to_a
			if ms.length > 1 then
				msorter.sort(ms)
				pager.add("## known modules".bold)
				pager.addn("\t")
				for i in [0..ms.length[ do
					if ms[i] == mmodule then continue
					pager.addn(ms[i].name)
					if i < ms.length - 1 then pager.addn(", ") 
				end
				pager.add("\n")
			end
			# local classes and interfaces
			var sorter = new MClassDefNameSorter
			var intro_mclassdefs = new Array[MClassDef]
			var redef_mclassdefs = new Array[MClassDef]
			for mclassdef in mmodule.mclassdefs do
				if mclassdef.is_intro then
					intro_mclassdefs.add(mclassdef)
				else
					redef_mclassdefs.add(mclassdef)
				end
			end
			# intro
			if not intro_mclassdefs.is_empty then
				sorter.sort(intro_mclassdefs)
				pager.add("\n## introduced classes".bold)
				for mclassdef in intro_mclassdefs do
					pager.add("")
					var nclass = mbuilder.mclassdef2nclassdef[mclassdef]
					if nclass isa AStdClassdef and not nclass.n_doc == null and not nclass.n_doc.short_comment.is_empty then
						pager.add("\t{nclass.n_doc.short_comment.green}")
					end
					pager.add("\t{mclassdef.mclass.prototype}")
					#TODO add redefs?
				end
			end
			# redefs
			if not redef_mclassdefs.is_empty then
				sorter.sort(redef_mclassdefs)
				pager.add("\n## refined classes".bold)
				for mclassdef in redef_mclassdefs do
					pager.add("")
					#TODO intro comment?
					var nclass = mbuilder.mclassdef2nclassdef[mclassdef]
					if nclass isa AStdClassdef and not nclass.n_doc == null and not nclass.n_doc.short_comment.is_empty then
						pager.add("\t# {nclass.n_doc.short_comment.green}")
					end
					pager.add("\t{mclassdef.mclass.prototype}")
					pager.add("\t\t" + "introduced in {mclassdef.mclass.intro.mmodule.namespace.bold}".gray)
					for odef in mclassdef.mclass.mclassdefs do
						if odef.is_intro or odef == mclassdef or mclassdef.mmodule == mmodule then continue
						pager.add("\t\t" + "refined in {mclassdef.mmodule.namespace.bold}".gray)
					end
				end
			end
			#TODO add inherited classes?
			pager.add_rule
		end
	end

	private fun classes_fulldoc(pager: Pager, mclasses: List[MClass]) do
		for mclass in mclasses do
			# title
			pager.add("# {mclass.namespace}\n".bold)
			# comment
			if mbuilder.mclassdef2nclassdef.has_key(mclass.intro) then
				var nclass = mbuilder.mclassdef2nclassdef[mclass.intro]
				if nclass isa AStdClassdef and not nclass.n_doc == null then
					for comment in nclass.n_doc.comment do pager.add(comment.green)
				end
			end
			pager.addn("{mclass.prototype}")
			if not mclass.in_hierarchy(mainmodule).direct_greaters.is_empty then
				var supers = mclass.in_hierarchy(mainmodule).direct_greaters.to_a
				pager.addn(" super ")
				for i in [0..supers.length[ do
					if supers[i] == mclass then continue
					pager.addn("{supers[i].name}{supers[i].signature}")
					if i < mclass.in_hierarchy(mainmodule).direct_greaters.length -1 then pager.addn(", ")
				end
			end
			pager.add("\n")
			# formal types
			if not mclass.parameter_types.is_empty then
				pager.add("## formal types".bold)
				for ft, bound in mclass.parameter_types do
					pager.add("")
					pager.add("\t{ft.to_s.green}: {bound.to_console}")
				end
				pager.add("")
			end
			# get properties
			var cats = new ArrayMap[String, Set[MPropDef]]
			cats["virtual types"] = new HashSet[MPropDef]
			cats["constructors"] = new HashSet[MPropDef]
			cats["introduced methods"] = new HashSet[MPropDef]
			cats["refined methods"] = new HashSet[MPropDef]

			for mclassdef in mclass.mclassdefs do
				for mpropdef in mclassdef.mpropdefs do
					if mpropdef isa MAttributeDef then continue
					if mpropdef isa MVirtualTypeDef then cats["virtual types"].add(mpropdef)
					if mpropdef isa MMethodDef then
						if mpropdef.mproperty.is_init then
							cats["constructors"].add(mpropdef)
						else if mpropdef.is_intro then
							cats["introduced methods"].add(mpropdef)
						else
							cats["refined methods"].add(mpropdef)
						end
					end
				end
			end
			# local mproperties
			for cat, list in cats do
				if not list.is_empty then
					#sort list
					var sorted = new Array[MPropDef]
					sorted.add_all(list)
					var sorter = new MPropDefNameSorter
					sorter.sort(sorted)
					pager.add("## {cat}".bold)
					for mpropdef in sorted do
						pager.add("")
						if mbuilder.mpropdef2npropdef.has_key(mpropdef) then
							var nprop = mbuilder.mpropdef2npropdef[mpropdef]
							if not nprop.n_doc == null and not nprop.n_doc.comment.is_empty then
								for comment in nprop.n_doc.comment do pager.add("\t{comment.green}")
							else
								nprop = mbuilder.mpropdef2npropdef[mpropdef.mproperty.intro]
								if not nprop.n_doc == null and not nprop.n_doc.comment.is_empty then
									for comment in nprop.n_doc.comment do pager.add("\t{comment.green}")
								end
							end
						end
						pager.add("\t{mpropdef.to_console}")
						mainmodule.linearize_mpropdefs(mpropdef.mproperty.mpropdefs)
						var previous_defs = new Array[MPropDef]
						for def in mpropdef.mproperty.mpropdefs do
							if def == mpropdef then continue
							if def.is_intro then continue
							if mclass.in_hierarchy(mainmodule) < def.mclassdef.mclass then
								previous_defs.add(def)
							end
						end
						if not mpropdef.is_intro then
							pager.add("\t\t" + "introduced by {mpropdef.mproperty.intro.mclassdef.namespace.bold}".gray)
						end
						if not previous_defs.is_empty then
							for def in previous_defs do pager.add("\t\t" + "inherited from {def.mclassdef.namespace.bold}".gray)
						end
					end
					pager.add("")
				end
			end
			# inherited mproperties
			var inhs = new ArrayMap[MClass, Array[MProperty]]
			var ancestors = mclass.in_hierarchy(mainmodule).greaters.to_a
			mainmodule.linearize_mclasses(ancestors)
			for a in ancestors do
				if a == mclass then continue
				for c in a.mclassdefs do
					for p in c.intro_mproperties do
						if p.intro_mclassdef == c then
							if not inhs.has_key(a) then inhs[a] = new Array[MProperty]
							inhs[a].add(p)
						end
					end
				end
			end
			if not inhs.is_empty then
				pager.add("## inherited properties".bold)
				for a, ps in inhs do
					pager.add("\n\tfrom {a.namespace.bold}: {ps.join(", ")}")
				end
			end
			pager.add_rule
		end
	end

	private fun props_fulldoc(pager: Pager, raw_mprops: List[MProperty]) do
		# group by module
		var cats = new HashMap[MModule, Array[MProperty]]
		for mprop in raw_mprops do
			if mprop isa MAttribute then continue
			var key = mprop.intro.mclassdef.mmodule
			if not cats.has_key(key) then cats[key] = new Array[MProperty]
			cats[key].add(mprop)
		end
		#sort groups
		var sorter = new MModuleNameSorter
		var sorted = new Array[MModule]
		sorted.add_all(cats.keys)
		sorter.sort(sorted)
		# display
		for mmodule in sorted do
			var mprops = cats[mmodule]
			pager.add("# matches in module {mmodule.namespace.bold}")
			var sorterp = new MPropertyNameSorter
			sorterp.sort(mprops)
			for mprop in mprops do
				pager.add("")
				if mbuilder.mpropdef2npropdef.has_key(mprop.intro) then
					var nprop = mbuilder.mpropdef2npropdef[mprop.intro]
					if not nprop.n_doc == null and not nprop.n_doc.comment.is_empty then
						for comment in nprop.n_doc.comment do pager.add("\t{comment.green}")
					end
				end
				pager.add("\t{mprop.intro.to_console}")
				pager.add("\t\t" + "introduced in {mprop.intro_mclassdef.namespace.bold}".gray)
				var mpropdefs = mprop.mpropdefs
				mainmodule.linearize_mpropdefs(mpropdefs)
				for mpdef in mpropdefs do
					if not mpdef.is_intro then
						pager.add("\t\t" + "refined in {mpdef.mclassdef.namespace.bold}".gray)
					end
				end
			end
			pager.add_rule
		end
	end

	private fun seek_returns(entry: String): List[MProperty] do
		var matches = new List[MProperty]
		for mprop in model.mproperties do
			var intro = mprop.intro
			if intro isa MMethodDef then
				if intro.msignature.return_mtype != null and intro.msignature.return_mtype.to_console.has_prefix(entry) then matches.add(mprop)
			else if intro isa MAttributeDef then
				if intro.static_mtype.to_console.has_prefix(entry) then matches.add(mprop)
			end
		end
		return matches
	end

	private fun seek_params(entry: String): List[MProperty] do
		var matches = new List[MProperty]
		for mprop in model.mproperties do
			var intro = mprop.intro
			if intro isa MMethodDef then
				var mparameters = intro.msignature.mparameters
				for mparameter in mparameters do
					print mparameter.mtype.to_console
					if mparameter.mtype.to_console.has_prefix(entry) then matches.add(mprop)
				end
			else if intro isa MAttributeDef then
				if intro.static_mtype.to_console.has_prefix(entry) then matches.add(mprop)
			end
		end
		return matches
	end

	#TODO should be returning a List[MPropDef]
	private fun seek_inits(entry: String): List[MProperty] do
		var mtype2mpropdefs = toolcontext.nitx_phase.mtype2mpropdefs
		var matches = new List[MProperty]
		for mtype in mtype2mpropdefs.keys do
			if mtype.to_console.has_prefix(entry) then
				for mpropdef in mtype2mpropdefs[mtype] do
					matches.add(mpropdef.mproperty)
				end
			end
		end
		return matches
	end
end

# Code Analysis

redef class ToolContext
	var nitx_phase: NitxPhase = new NitxPhase(self, [typing_phase])
end

# Compiler phase for nitx
private class NitxPhase
	super Phase

	var mtype2mpropdefs = new HashMap[MType, Set[MPropDef]]
	redef fun process_npropdef(npropdef) do
		var visitor = new TypeInitVisitor
		visitor.enter_visit(npropdef)
		for mtype in visitor.inits do
			if not mtype2mpropdefs.has_key(mtype) then
				mtype2mpropdefs[mtype] = new HashSet[MPropDef]
			end
			mtype2mpropdefs[mtype].add(npropdef.mpropdef.as(not null))
		end
	end
end

# Visitor looking for initialized mtype (new T)
private class TypeInitVisitor
	super Visitor

	var inits = new HashSet[MType]
	redef fun visit(node)
	do
		node.visit_all(self)
		# look for init
		if not node isa ANewExpr then return
		var mtype = node.n_type.mtype
		if mtype != null then inits.add(mtype)
	end
end

# Printing facilities

redef class MModule
	# prototype of the module
	# 	module ownername::name
	private fun prototype: String do return "module {name}"

	# namespace of the module
	#	ownername::name
	private fun namespace: String do
		if public_owner == null then
			return self.name
		else
			return "{public_owner.namespace}::{self.name}"
		end
	end
end

redef class MClass
	# return the generic signature of the class
	#	[E, F]
	private fun signature: String do
		var res = new Buffer
		if arity > 0 then
			res.append("[")
			for i in [0..intro.parameter_names.length[ do
				res.append(intro.parameter_names[i])
				if i < intro.parameter_names.length - 1 then res.append(", ")
			end
			res.append("]")
		end
		return res.to_s
	end

	# return the prototype of the class
	# class name is displayed with colors depending on visibility
	#	abstract interface Foo[E]
	private fun prototype: String do
		var res = new Buffer
		res.append("{kind} ")
		if visibility.to_s == "public" then res.append("{name}{signature}".bold.green)
		if visibility.to_s == "private" then res.append("{name}{signature}".bold.red)
		if visibility.to_s == "protected" then res.append("{name}{signature}".bold.yellow)
		return res.to_s
	end

	private fun namespace: String do
		return "{intro_mmodule.namespace}::{name}"
	end
end

redef class MClassDef
	private fun namespace: String do
		return "{mmodule.full_name}::{mclass.name}"
	end
end

redef class MProperty
	fun to_console: String do
		if visibility.to_s == "public" then return name.green
		if visibility.to_s == "private" then return name.red
		if visibility.to_s == "protected" then return name.yellow
		return name.bold
	end
end

redef class MPropDef
	fun to_console: String is abstract
end

redef class MMethodDef
	redef fun to_console do
		var res = new Buffer
		if not is_intro then res.append("redef ")
		if not mproperty.is_init then res.append("fun ")
		res.append(mproperty.to_console.bold)
		if msignature != null then res.append(msignature.to_console)
		# FIXME: modifiers should be accessible via the model
		#if self isa ADeferredMethPropdef then ret = "{ret} is abstract"
		#if self isa AInternMethPropdef then ret = "{ret} is intern"
		#if self isa AExternMethPropdef then ret = "{ret} is extern"
		return res.to_s
	end
end

redef class MVirtualTypeDef
	redef fun to_console do
		var res = new Buffer
		res.append("type ")
		res.append(mproperty.to_console.bold)
		res.append(": {bound.to_console}")
		return res.to_s
	end
end

redef class MSignature
	redef fun to_console do
		var res = new Buffer
		if not mparameters.is_empty then
			res.append("(")
			for i in [0..mparameters.length[ do
				res.append(mparameters[i].to_console)
				if i < mparameters.length - 1 then res.append(", ")
			end
			res.append(")")
		end
		if return_mtype != null then
			res.append(": {return_mtype.to_console}")
		end
		return res.to_s
	end
end

redef class MParameter
	fun to_console: String do
		var res = new Buffer
		res.append("{name}: {mtype.to_console}")
		if is_vararg then res.append("...")
		return res.to_s
	end
end

redef class MType
	fun to_console: String do return self.to_s
end

redef class MNullableType
	redef fun to_console do return "nullable {mtype.to_console}"
end

redef class MGenericType
	redef fun to_console do
		var res = new Buffer
		res.append("{mclass.name}[")
		for i in [0..arguments.length[ do
			res.append(arguments[i].to_console)
			if i < arguments.length - 1 then res.append(", ")
		end
		res.append("]")
		return res.to_s
	end
end

redef class MParameterType
	redef fun to_console do return mclass.intro.parameter_names[rank]
end

redef class MVirtualType
	redef fun to_console do return mproperty.name
end

redef class ADoc
	private fun comment: List[String] do
		var res = new List[String]
		for t in n_comment do
			res.add(t.text.replace("\n", ""))
		end
		return res
	end

	private fun short_comment: String do
		return n_comment.first.text.replace("\n", "")
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
	private fun gray: String do return add_escape_char("{esc}[30m")
	private fun red: String do return add_escape_char("{esc}[31m")
	private fun green: String do return add_escape_char("{esc}[32m")
	private fun yellow: String do return add_escape_char("{esc}[33m")
	private fun blue: String do return add_escape_char("{esc}[34m")
	private fun purple: String do return add_escape_char("{esc}[35m")
	private fun cyan: String do return add_escape_char("{esc}[36m")
	private fun light_gray: String do return add_escape_char("{esc}[37m")
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
