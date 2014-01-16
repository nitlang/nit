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

# Main class of the nit index tool
# NitIndex build the model using the toolcontext argument
# then wait for query on std in to display documentation
class NitIndex
	private var toolcontext: ToolContext
	private var model: Model
	private var mbuilder: ModelBuilder
	private var mainmodule: MModule
	private var arguments: Array[String]
	private var renderer: PagerMatchesRenderer

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

		renderer = new PagerMatchesRenderer(self)
	end

	fun start do
		if arguments.length == 1 then
			welcome
			prompt
		else
			search(arguments[1])
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
		search(stdin.read_line)
	end

	fun search(entry: String) do
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

		# Parse query string
		var query = parse_query(entry)

		# search in index
		var matches = new HashSet[IndexMatch]
		if query isa IndexQueryPair then
			if query.category == "return" then
				# seek return types
				matches.add_all(search_returns(query))
			else if query.category == "param" then
				# seek param types
				matches.add_all(search_params(query))
			else if query.category == "new" then
				# seek type inits
				matches.add_all(search_inits(query))
			end
		else
			matches.add_all(search_modules(query))
			matches.add_all(search_classes(query))
			matches.add_all(search_properties(query))
		end
		# no matches
		if matches.is_empty then
			print "Nothing known about '{query.string}', type ':h' for help"
		else
			renderer.render_matches(query, matches)
		end
		if arguments.length == 1 then prompt
	end

	private fun parse_query(str: String): IndexQuery do
		var parts = str.split_with(":")
		if parts.length == 1 then
			return new IndexQuery(str, parts[0])
		else
			var category = parts[0]
			var keyword = parts[1]
			if keyword.chars.first == ' ' then keyword = keyword.substring_from(1)
			return new IndexQueryPair(str, keyword, category)
		end
	end

	# search for modules
	private fun search_modules(query: IndexQuery): Set[MModule] do
		var matches = new HashSet[MModule]
		for mmodule in model.mmodules do
			if mmodule.name == query.keyword then matches.add(mmodule)
		end
		return matches
	end

	# search for classes
	private fun search_classes(query: IndexQuery): Set[MClass] do
		var matches = new HashSet[MClass]
		for mclass in model.mclasses do
			if mclass.name == query.keyword then matches.add(mclass)
		end
		return matches
	end

	# search for properties
	private fun search_properties(query: IndexQuery): Set[MProperty] do
		var matches = new HashSet[MProperty]
		for mproperty in model.mproperties do
			if mproperty.name == query.keyword then matches.add(mproperty)
		end
		return matches
	end

	# search for mpropdef returning keyword
	private fun search_returns(query: IndexQuery): Set[MProperty] do
		var matches = new HashSet[MProperty]
		for mproperty in model.mproperties do
			var intro = mproperty.intro
			if intro isa MMethodDef then
				if intro.msignature.return_mtype != null and intro.msignature.return_mtype.to_console.has_prefix(query.keyword) then matches.add(mproperty)
			else if intro isa MAttributeDef then
				if intro.static_mtype.to_console.has_prefix(query.keyword) then matches.add(mproperty)
			end
		end
		return matches
	end

	# search for mpropdef taking keyword as parameter
	private fun search_params(query: IndexQuery): Set[MProperty] do
		var matches = new HashSet[MProperty]
		for mproperty in model.mproperties do
			var intro = mproperty.intro
			if intro isa MMethodDef then
				var mparameters = intro.msignature.mparameters
				for mparameter in mparameters do
					if mparameter.mtype.to_console.has_prefix(query.keyword) then matches.add(mproperty)
				end
			else if intro isa MAttributeDef then
				if intro.static_mtype.to_console.has_prefix(query.keyword) then matches.add(mproperty)
			end
		end
		return matches
	end

	# search for mpropdef creating new instance of keyword
	private fun search_inits(query: IndexQuery): Set[MPropDef] do
		var mtype2mpropdefs = toolcontext.nitx_phase.mtype2mpropdefs
		var matches = new HashSet[MPropDef]
		for mtype in mtype2mpropdefs.keys do
			if mtype.to_console.has_prefix(query.keyword) then
				for mpropdef in mtype2mpropdefs[mtype] do
					matches.add(mpropdef)
				end
			end
		end
		return matches
	end
end

private class IndexQuery
	var string: String
	var keyword: String
	init(string: String, keyword: String) do
		self.string = string
		self.keyword = keyword
	end
end

private class IndexQueryPair
	super IndexQuery
	var category: String
	init(string: String, keyword: String, category: String) do
		super(string, keyword)
		self.category = category
	end
end

# A match to a query in the nit index
private interface IndexMatch
	# Short preview of the result for result list display
	fun preview(index: NitIndex, output: Pager) is abstract
	fun content(index: NitIndex, output: Pager) is abstract
end

# Code Analysis

redef class ToolContext
	private var nitx_phase: NitxPhase = new NitxPhase(self, [typing_phase])
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

# Pager output for console

private class PagerMatchesRenderer
	var index: NitIndex
	init(index: NitIndex) do self.index = index

	fun render_matches(query: IndexQuery, matches: Collection[IndexMatch]) do
		var pager = new Pager
		if matches.length == 1 then
			pager.add("= result for '{query.string}'".bold)
			pager.add("")
			pager.indent = pager.indent + 1
			matches.first.content(index, pager)
			pager.indent = pager.indent - 1
		else
			pager.add("= multiple results for '{query.string}'".bold)
			pager.indent = pager.indent + 1
			for match in matches do
				pager.add("")
				match.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		pager.render
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

			end
			pager.add_rule
		end
	end
end

private class Pager
	var content = new FlatBuffer
	var indent = 0
	fun add(text: String) do
		add_indent
		addn("{text}\n")
	end
	fun add_indent do addn("  " * indent)
	fun addn(text: String) do content.append(text.escape)
	fun add_rule do add("\n---\n")
	fun render do sys.system("echo \"{content}\" | pager -r")
end

redef class MModule
	super IndexMatch
	# prototype of the module
	#	module ownername::name
	private fun prototype: String do return "module {name.bold}"

	# namespace of the module
	#	ownername::name
	private fun namespace: String do
		if public_owner == null then
			return self.name
		else
			return "{public_owner.namespace}::{self.name}"
		end
	end

	redef fun preview(index, pager) do
		if index.mbuilder.mmodule2nmodule.has_key(self) then
			var node = index.mbuilder.mmodule2nmodule[self]
			if node.n_moduledecl != null and not node.n_moduledecl.n_doc == null and not node.n_moduledecl.n_doc.short_comment.is_empty then
				pager.add(node.n_moduledecl.n_doc.short_comment.green)
			end
		end
		pager.add(prototype)
		pager.add("{namespace}".bold.gray + " (lines {location.lines})".gray)
	end

	redef fun content(index, pager) do
		if index.mbuilder.mmodule2nmodule.has_key(self) then
			var node = index.mbuilder.mmodule2nmodule[self]
			if node.n_moduledecl != null and not node.n_moduledecl.n_doc == null and not node.n_moduledecl.n_doc.comment.is_empty then
				for comment in node.n_moduledecl.n_doc.comment do pager.add(comment.green)
			end
		end
		pager.add(prototype)
		pager.add("{namespace}".bold.gray + " (lines {location.lines})".gray)
		pager.indent = pager.indent + 1
		var sorter = new MModuleNameSorter
		# imported modules
		var imports = new Array[MModule]
		for mmodule in in_importation.direct_greaters.to_a do
			if not in_nesting.direct_greaters.has(mmodule) then imports.add(mmodule)
		end
		if not imports.is_empty then
			sorter.sort(imports)
			pager.add("")
			pager.add("== imported modules".bold)
			pager.indent = pager.indent + 1
			for mmodule in imports do
				pager.add("")
				mmodule.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		# nested modules
		var nested = in_nesting.direct_greaters.to_a
		if not nested.is_empty then
			sorter.sort(nested)
			pager.add("")
			pager.add("== nested modules".bold)
			pager.indent = pager.indent + 1
			for mmodule in nested do
				pager.add("")
				mmodule.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		# mclassdefs
		var csorter = new MClassDefNameSorter
		var intros = new Array[MClassDef]
		var redefs = new Array[MClassDef]
		for mclassdef in mclassdefs do
			if mclassdef.is_intro then
				intros.add(mclassdef)
			else
				redefs.add(mclassdef)
			end
		end
		# introductions
		if not intros.is_empty then
			csorter.sort(intros)
			pager.add("")
			pager.add("== introduced classes".bold)
			pager.indent = pager.indent + 1
			for mclass in intros do
				pager.add("")
				mclass.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		# refinements
		if not redefs.is_empty then
			csorter.sort(redefs)
			pager.add("")
			pager.add("== refined classes".bold)
			pager.indent = pager.indent + 1
			for mclass in redefs do
				pager.add("")
				mclass.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		pager.indent = pager.indent - 1
	end
end

redef class MClass
	super IndexMatch
	# return the generic signature of the class
	#	[E, F]
	private fun signature: String do
		var res = new FlatBuffer
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
		var res = new FlatBuffer
		res.append("{kind} ")
		if visibility.to_s == "public" then res.append("{name}{signature}".bold.green)
		if visibility.to_s == "private" then res.append("{name}{signature}".bold.red)
		if visibility.to_s == "protected" then res.append("{name}{signature}".bold.yellow)
		return res.to_s
	end

	private fun namespace: String do
		return "{intro_mmodule.namespace}::{name}"
	end

	redef fun preview(index, pager) do
		intro.preview(index, pager)
	end

	redef fun content(index, pager) do
		# intro comment
		if index.mbuilder.mclassdef2nclassdef.has_key(intro) then
			var node = index.mbuilder.mclassdef2nclassdef[intro]
			if node isa AStdClassdef and not node.n_doc == null and not node.n_doc.comment.is_empty then
				for comment in node.n_doc.comment do pager.add(comment.green)
			end
		end
		pager.add(intro.to_console)
		pager.add("{intro.namespace}".bold.gray + " (lines {intro.location.lines})".gray)
		pager.indent = pager.indent + 1
		# parents
		var supers = self.in_hierarchy(index.mainmodule).direct_greaters.to_a
		if not supers.is_empty then
			var csorter = new MClassNameSorter
			csorter.sort(supers)
			pager.add("")
			pager.add("== supers".bold)
			pager.indent = pager.indent + 1
			for mclass in supers do
				pager.add("")
				mclass.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		# formal types
		if not self.parameter_types.is_empty then
			pager.add("")
			pager.add("== formal types".bold)
			pager.indent = pager.indent + 1
			for ft, bound in self.parameter_types do
				pager.add("")
				pager.add("{ft.to_s.bold.green}: {bound.to_console}")
			end
			pager.indent = pager.indent - 1
		end
		# intro mproperties
		var psorter = new MPropDefNameSorter
		var mpropdefs = intro.mpropdefs
		index.mainmodule.linearize_mpropdefs(mpropdefs)
		for cat in intro.cats2mpropdefs.keys do
			var defs = intro.cats2mpropdefs[cat].to_a
			if defs.is_empty then continue
			psorter.sort(defs)
			pager.add("")
			pager.add("== {cat}".bold)
			pager.indent = pager.indent + 1
			for mpropdef in defs do
				pager.add("")
				mpropdef.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		# refinements
		if not self.mclassdefs.is_empty then
			pager.add("")
			pager.add("== refinements".bold)
			var mclassdefs = self.mclassdefs
			index.mainmodule.linearize_mclassdefs(mclassdefs)
			pager.indent = pager.indent + 1
			for mclassdef in mclassdefs do
				if not mclassdef.is_intro then
					pager.add("")
					mclassdef.content(index, pager)
				end
			end
			pager.indent = pager.indent - 1
		end
		pager.indent = pager.indent - 1
	end
end

redef class MClassDef
	super IndexMatch

	private fun namespace: String do
		return "{mmodule.full_name}::{mclass.name}"
	end

	fun to_console: String do
		var res = new FlatBuffer
		if not is_intro then res.append("redef ")
		res.append(mclass.prototype)
		return res.to_s
	end

	redef fun preview(index, pager) do
		if index.mbuilder.mclassdef2nclassdef.has_key(self) then
			var node = index.mbuilder.mclassdef2nclassdef[self]
			if node isa AStdClassdef and not node.n_doc == null and not node.n_doc.short_comment.is_empty then
				pager.add(node.n_doc.short_comment.green)
			end
		end
		pager.add(to_console)
		pager.add("{namespace}".bold.gray + " (lines {location.lines})".gray)
	end

	redef fun content(index, pager) do
		if index.mbuilder.mclassdef2nclassdef.has_key(self) then
			var node = index.mbuilder.mclassdef2nclassdef[self]
			if node isa AStdClassdef and not node.n_doc == null and not node.n_doc.comment.is_empty then
				for comment in node.n_doc.comment do pager.add(comment.green)
			end
		end
		pager.add(to_console)
		pager.add("{namespace}".bold.gray + " (lines {location.lines})".gray)
		pager.indent = pager.indent + 1
		var mpropdefs = self.mpropdefs
		var psorter = new MPropDefNameSorter
		index.mainmodule.linearize_mpropdefs(mpropdefs)
		for cat in cats2mpropdefs.keys do
			var defs = cats2mpropdefs[cat].to_a
			psorter.sort(defs)
			if defs.is_empty then continue
			pager.add("")
			pager.add("== {cat}".bold)
			pager.indent = pager.indent + 1
			for mpropdef in defs do
				pager.add("")
				mpropdef.preview(index, pager)
			end
			pager.indent = pager.indent - 1
		end
		pager.indent = pager.indent - 1
	end

	# get mpropdefs grouped by categories (vt, init, methods)
	fun cats2mpropdefs: Map[String, Set[MPropDef]] do
		var cats = new ArrayMap[String, Set[MPropDef]]
		cats["virtual types"] = new HashSet[MPropDef]
		cats["constructors"] = new HashSet[MPropDef]
		cats["methods"] = new HashSet[MPropDef]

		for mpropdef in mpropdefs do
			if mpropdef isa MAttributeDef then continue
			if mpropdef isa MVirtualTypeDef then cats["virtual types"].add(mpropdef)
			if mpropdef isa MMethodDef then
				if mpropdef.mproperty.is_init then
					cats["constructors"].add(mpropdef)
				else
					cats["methods"].add(mpropdef)
				end
			end
		end
		return cats
	end
end

redef class MProperty
	super IndexMatch

	fun to_console: String do
		if visibility.to_s == "public" then return name.green
		if visibility.to_s == "private" then return name.red
		if visibility.to_s == "protected" then return name.yellow
		return name.bold
	end

	redef fun preview(index, pager) do
		intro.preview(index, pager)
	end

	redef fun content(index, pager) do
		intro.content(index, pager)
		pager.indent = pager.indent + 1
		var mpropdefs = self.mpropdefs
		index.mainmodule.linearize_mpropdefs(mpropdefs)
		for mpropdef in mpropdefs do
			if mpropdef isa MAttributeDef then continue
			if not mpropdef.is_intro then
				pager.add("")
				mpropdef.preview(index, pager)
			end
		end
		pager.indent = pager.indent - 1
	end
end

redef class MPropDef
	super IndexMatch

	fun to_console: String is abstract

	private fun namespace: String do
		return "{mclassdef.namespace}::{mproperty.name}"
	end

	redef fun preview(index, pager) do
		if index.mbuilder.mpropdef2npropdef.has_key(self) then
			var nprop = index.mbuilder.mpropdef2npropdef[self]
			if not nprop.n_doc == null and not nprop.n_doc.short_comment.is_empty then
				pager.add(nprop.n_doc.short_comment.green)
			end
		end
		pager.add(to_console)
		pager.add("{namespace}".bold.gray + " (lines {location.lines})".gray)
	end

	redef fun content(index, pager) do
		if index.mbuilder.mpropdef2npropdef.has_key(self) then
			var nprop = index.mbuilder.mpropdef2npropdef[self]
			if not nprop.n_doc == null and not nprop.n_doc.comment.is_empty then
				for comment in nprop.n_doc.comment do pager.add(comment.green)
			end
		end
		pager.add(to_console)
		pager.add("{namespace}".bold.gray + " (lines {location.lines})".gray)
	end
end

redef class MMethodDef
	redef fun to_console do
		var res = new FlatBuffer
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
		var res = new FlatBuffer
		res.append("type ")
		res.append(mproperty.to_console.bold)
		res.append(": {bound.to_console}")
		return res.to_s
	end
end

redef class MAttributeDef
	redef fun to_console do
		var res = new FlatBuffer
		res.append("var ")
		res.append(mproperty.to_console.bold)
		res.append(": {static_mtype.to_console}")
		return res.to_s
	end
end

redef class MSignature
	redef fun to_console do
		var res = new FlatBuffer
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
		var res = new FlatBuffer
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
		var res = new FlatBuffer
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
		var b = new FlatBuffer
		for c in self.chars do
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

redef class Location
	fun lines: String do
		return "{line_start}-{line_end}"
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
