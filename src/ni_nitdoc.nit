# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module ni_nitdoc

import model_utils
import abstract_compiler
import html

class Nitdoc
	private var toolcontext: ToolContext
	private var model: Model
	private var modelbuilder: ModelBuilder
	private var mainmodule: MModule
	private var class_hierarchy: POSet[MClass]
	private var arguments: Array[String]
	private var output_dir: nullable String
	private var dot_dir: nullable String
	private var share_dir: nullable String
	private var source: nullable String

	private var opt_dir = new OptionString("Directory where doc is generated", "-d", "--dir")
	private var opt_source = new OptionString("What link for source (%f for filename, %l for first line, %L for last line)", "--source")
	private var opt_sharedir = new OptionString("Directory containing the nitdoc files", "--sharedir")
	private var opt_nodot = new OptionBool("Do not generate graphes with graphiviz", "--no-dot")

	init(toolcontext: ToolContext) do
		# We need a model to collect stufs
		self.toolcontext = toolcontext
		self.arguments = toolcontext.option_context.rest
		toolcontext.option_context.options.clear
		toolcontext.option_context.add_option(opt_dir)
		toolcontext.option_context.add_option(opt_source)
		toolcontext.option_context.add_option(opt_sharedir)
		toolcontext.option_context.add_option(opt_nodot)
		toolcontext.process_options
		process_options

		if arguments.length < 1 then
			toolcontext.option_context.usage
			exit(1)
		end

		model = new Model
		modelbuilder = new ModelBuilder(model, toolcontext)

		# Here we load an process std modules
		var mmodules = modelbuilder.parse_and_build([arguments.first])
		if mmodules.is_empty then return
		modelbuilder.full_propdef_semantic_analysis
		assert mmodules.length == 1
		self.mainmodule = mmodules.first
		self.class_hierarchy = mainmodule.flatten_mclass_hierarchy
	end

	private fun process_options do
		if not opt_dir.value is null then
			output_dir = opt_dir.value
		else
			output_dir = "doc"
		end
		if not opt_sharedir.value is null then
			share_dir = opt_sharedir.value
		else
			var dir = "NIT_DIR".environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../share/nitdoc"
			else
				dir = "{dir}/share/nitdoc"
			end
			share_dir = dir
			if share_dir is null then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
			dir = "{share_dir.to_s}/scripts/js-facilities.js"
			if share_dir is null then
				print "Error: Invalid nitdoc share files. Check --sharedir or envvar NIT_DIR"
				abort
			end
		end
		if not opt_source.value is null then
			source = ""
		else
			source = opt_source.value
		end
	end

	fun start do
		if arguments.length == 1 then
			# Create destination dir if it's necessary
			if not output_dir.file_exists then output_dir.mkdir
			sys.system("cp -r {share_dir.to_s}/* {output_dir.to_s}/")
			self.dot_dir = null
			if not opt_nodot.value then self.dot_dir = output_dir.to_s
			overview
			#fullindex
			modules
			classes
			#quicksearch_list
		end
	end

	fun overview do
		var overviewpage = new NitdocOverview(modelbuilder, dot_dir)
		overviewpage.save("{output_dir.to_s}/index.html")
	end

	fun fullindex do
		var fullindex = new NitdocFullindex(model.mmodules)
		fullindex.save("{output_dir.to_s}/full-index.html")
	end

	fun modules do
		for mmodule in model.mmodules do
			var modulepage = new NitdocModule(mmodule, modelbuilder, dot_dir)
			modulepage.save("{output_dir.to_s}/{mmodule.name}.html")
		end
	end

	fun classes do
		for mclass in modelbuilder.model.mclasses do
			var classpage = new NitdocClass(mclass, self, dot_dir, source)
			classpage.save("{output_dir.to_s}/{mclass.name}.html")
		end
	end

	# Generate QuickSearch file
	fun quicksearch_list do
		var file = new OFStream.open("{output_dir.to_s}/quicksearch-list.js")
		var content = new Buffer
		content.append("var entries = \{ ")
		for prop in model.mproperties do
			if not prop isa MMethod then continue
			content.append("\"{prop.name}\": [")
			for propdef in prop.mpropdefs do
				content.append("\{txt: \"{propdef.mproperty.full_name}\", url:\"{propdef.mproperty.anchor}\" \}")
				if not propdef is prop.mpropdefs.last then content.append(", ")
			end
			content.append("]")
			content.append(", ")
		end

		for mclass in model.mclasses do
			content.append("\"{mclass.name}\": [")
			for mclassdef in mclass.mclassdefs do
				content.append("\{txt: \"{mclassdef.mclass.full_name}\", url:\"{mclass.link_anchor}\" \}")
				if not mclassdef is mclass.mclassdefs.last then content.append(", ")
			end
			content.append("]")
			if not mclass is model.mclasses.last then content.append(", ")
		end

		content.append(" \};")
		file.write(content.to_s)
		file.close
	end

end

# Nitdoc base page
abstract class NitdocPage
	super HTMLPage

	var dot_dir: nullable String
	var source: nullable String

	redef fun head do
		add("meta").attr("charset", "utf-8")
		add("script").attr("type", "text/javascript").attr("src", "scripts/jquery-1.7.1.min.js")
		add("script").attr("type", "text/javascript").attr("src", "quicksearch-list.js")
		add("script").attr("type", "text/javascript").attr("src", "scripts/js-facilities.js")
		add("link").attr("rel", "stylesheet").attr("href", "styles/main.css").attr("type", "text/css").attr("media", "screen")
	end

	redef fun body do
		header
		open("div").add_class("page")
		content
		close("div")
		footer
	end

	fun menu is abstract

	fun header do
		open("header")
		open("nav").add_class("main")
		open("ul")
		menu
		open("li").attr("id", "liGitHub")
		open("a").add_class("btn").attr("id", "logGitHub")
		add("img").attr("id", "imgGitHub").attr("src", "resources/icons/github-icon.png")
		close("a")
		open("div").add_class("popover bottom")
		add("div").add_class("arrow").text(" ")
		open("div").add_class("githubTitle")
		add("h3").text("Github Sign In")
		close("div")
		open("div")
		add("label").attr("id", "lbloginGit").text("Username")
		add("input").attr("id", "loginGit").attr("name", "login").attr("type", "text")
		open("label").attr("id", "logginMessage").text("Hello ")
		open("a").attr("id", "githubAccount")
		add("strong").attr("id", "nickName").text(" ")
		close("a")
		close("label")
		close("div")
		open("div")
		add("label").attr("id", "lbpasswordGit").text("Password")
		add("input").attr("id", "passwordGit").attr("name", "password").attr("type", "password")
		open("div").attr("id", "listBranches")
		add("label").attr("id", "lbBranches").text("Branch")
		add("select").add_class("dropdown").attr("id", "dropBranches").attr("name", "dropBranches").attr("tabindex", "1").text(" ")
		close("div")
		close("div")
		open("div")
		add("label").attr("id", "lbrepositoryGit").text("Repository")
		add("input").attr("id", "repositoryGit").attr("name", "repository").attr("type", "text")
		close("div")
		open("div")
		add("label").attr("id", "lbbranchGit").text("Branch")
		add("input").attr("id", "branchGit").attr("name", "branch").attr("type", "text")
		close("div")
		open("div")
		add("a").attr("id", "signIn").text("Sign In")
		close("div")
		close("div")
		close("li")
		close("ul")
		close("nav")
		close("header")
	end

	fun content is abstract

	fun footer do
		add("footer").text("Nit standard library. Version jenkins-component=stdlib-19.")
	end

	# Generate a clickable graphviz image using a dot content
	fun generate_dot(dot: String, name: String, alt: String) do
		var output_dir = dot_dir
		if output_dir == null then return
		var file = new OFStream.open("{output_dir}/{name}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {output_dir}/{name}.png && test -f {output_dir}/{name}.s.dot && diff {output_dir}/{name}.dot {output_dir}/{name}.s.dot >/dev/null 2>&1 ; \} || \{ cp {output_dir}/{name}.dot {output_dir}/{name}.s.dot && dot -Tpng -o{output_dir}/{name}.png -Tcmapx -o{output_dir}/{name}.map {output_dir}/{name}.s.dot ; \}")
		open("article").add_class("graph")
		add("img").attr("src", "{name}.png").attr("usemap", "#{name}").attr("style", "margin:auto").attr("alt", "{alt}")
		close("article")
		var fmap = new IFStream.open("{output_dir}/{name}.map")
		add_html(fmap.read_all)
		fmap.close
	end

	# Add a (source) link for a given location
	fun show_source(l: Location): String
	do
		if source == null then
			return "({l.file.filename.simplify_path})"
		else
			# THIS IS JUST UGLY ! (but there is no replace yet)
			var x = source.split_with("%f")
			source = x.join(l.file.filename.simplify_path)
			x = source.split_with("%l")
			source = x.join(l.line_start.to_s)
			x = source.split_with("%L")
			source = x.join(l.line_end.to_s)
			return " (<a href=\"{source.to_s}\">show code</a>)"
		end
	end
end

# The overview page
class NitdocOverview
	super NitdocPage
	private var mbuilder: ModelBuilder
	private var mmodules = new Array[MModule]

	init(mbuilder: ModelBuilder, dot_dir: nullable String) do
		self.mbuilder = mbuilder
		self.dot_dir = dot_dir
		# get modules
		var mmodules = new HashSet[MModule]
		for mmodule in mbuilder.model.mmodules do
			var owner = mmodule.public_owner
			if owner != null then
				mmodules.add(owner)
			else
				mmodules.add(mmodule)
			end
		end
		# sort modules
		var sorter = new ComparableSorter[MModule]
		self.mmodules.add_all(mmodules)
		sorter.sort(self.mmodules)
	end

	redef fun head do
		super
		add("title").text("Overview | Nit Standard Library")
	end

	redef fun menu do
		add("li").add_class("current").text("Overview")
		open("li")
		add("a").attr("href", "full-index.html").text("Full Index")
		close("li")
	end

	redef fun content do
		open("div").add_class("content fullpage")
		add("h1").text("Nit Standard Library")
		open("article").add_class("overview")
		add_html("<p>Documentation for the standard library of Nit<br />Version jenkins-component=stdlib-19<br />Date: TODAY</p>")
		close("article")
		open("article").add_class("overview")
		# module list
		add("h2").text("Modules")
		open("ul")
		for mmodule in mmodules do
			var amodule = mbuilder.mmodule2nmodule[mmodule]
			open("li")
			add_html("{mmodule.link(amodule)}&nbsp;{amodule.short_comment}")
			close("li")
		end
		close("ul")
		# module graph
		process_generate_dot
		close("article")
		close("div")
	end

	fun process_generate_dot do
		var op = new Buffer
		op.append("digraph dep \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in mmodules do
			op.append("\"{mmodule.name}\"[URL=\"{mmodule.name}.html\"];\n")
			for imported in mmodule.in_importation.direct_greaters do
				if imported.direct_owner == null then
					op.append("\"{mmodule.name}\"->\"{imported.name}\";\n")
				end
			end
		end
		op.append("\}\n")
		generate_dot(op.to_s, "dep", "Modules hierarchy")
	end
end

# The full index page
class NitdocFullindex
	super NitdocPage

	private var mmodules: Array[MModule]

	init(mmodules: Array[MModule]) do
		self.mmodules = mmodules
		self.dot_dir = null
	end

	redef fun head do
		super
		add("title").text("Full Index | Nit Standard Library")
	end

	redef fun menu do
		open("li")
		add("a").attr("href", "index.html").text("Overview")
		close("li")
		add("li").add_class("current").text("Full Index")
	end

	redef fun content do
		open("div").add_class("content fullpage")
		add("h1").text("Full Index")
		module_column
		classes_column
		properties_column
		close("div")
	end

	# Add to content modules column
	fun module_column do
		var ls = new List[nullable MModule]
		var sorted = mmodules
		var sorterp = new ComparableSorter[MModule]
		sorterp.sort(sorted)
		open("article").add_class("modules filterable")
		add("h2").text("Modules")
		open("ul")
		for mmodule in sorted do
			if mmodule.public_owner != null and not ls.has(mmodule.public_owner) then
				ls.add(mmodule.public_owner)
				open("li")
				add("a").attr("href", "{mmodule.public_owner.name}.html").text(mmodule.public_owner.name)
				close("li")
			end
		end
		close("ul")
		close("article")
	end

	# Add to content classes modules
	fun classes_column do
		var sorted = mmodules.first.imported_mclasses.to_a
		var sorterp = new ComparableSorter[MClass]
		sorterp.sort(sorted)
		open("article").add_class("classes filterable")
		add("h2").text("Classes")
		open("ul")

		for mclass in sorted do
			open("li")
			add("a").attr("href", "{mclass}.html").text(mclass.name)
			close("li")
		end

		close("ul")
		close("article")
	end

	# Insert the properties column of fullindex page
	fun properties_column do
		open("article").add_class("properties filterable")
		add("h2").text("Properties")
		open("ul")
		var sorted_imported = mmodules.first.imported_methods.to_a
		var sorted_redef = mmodules.first.redef_methods.to_a
		var sorterp = new ComparableSorter[MProperty]
		sorterp.sort(sorted_imported)
		sorterp.sort(sorted_redef)

		for method in sorted_imported do
			if method.visibility is none_visibility or method.visibility is intrude_visibility then continue
			open("li").add_class("intro")
			add("span").attr("title", "introduction").text("I")
			add_html("&nbsp;")
			add("a").attr("href", "{method.local_class.name}.html").attr("title", "").text("{method.name} ({method.local_class.name})")
			close("li")
		end

		for method in sorted_redef do
			if method.visibility is none_visibility or method.visibility is intrude_visibility then continue
			open("li").add_class("redef")
			add("span").attr("title", "redefinition").text("R")
			add_html("&nbsp;")
			add("a").attr("href", "{method.local_class.name}.html").attr("title", "").text("{method.name} ({method.local_class.name})")
			close("li")
		end

		close("ul")
		close("article")
	end

end

# A module page
class NitdocModule
	super NitdocPage

	private var mmodule: MModule
	private var mbuilder: ModelBuilder

	init(mmodule: MModule, mbuilder: ModelBuilder, dot_dir: nullable String) do
		self.mmodule = mmodule
		self.mbuilder = mbuilder
		self.dot_dir = dot_dir
	end

	redef fun head do
		super
		var amodule = mbuilder.mmodule2nmodule[mmodule]
		add("title").text("{mmodule.name} module | {amodule.short_comment}")
	end

	redef fun menu do
		open("li")
		add("a").attr("href", "index.html").text("Overview")
		close("li")
		add("li").add_class("current").text(mmodule.name)
		open("li")
		add("a").attr("href", "full-index.html").text("Full Index")
		close("li")
	end

	redef fun content do
		sidebar
		open("div").add_class("content")
		add("h1").text(mmodule.name)
		add("div").add_class("subtitle")
		add_html("module {mmodule.namespace(mbuilder)}")
		module_comment
		process_generate_dot
		classes
		properties
		close("div")
	end

	# Insert module comment in the content
	fun module_comment do
		var amodule = mbuilder.mmodule2nmodule[mmodule]
		var doc = amodule.comment
		open("div").attr("id", "description")
		add("pre").add_class("text_label").text(doc)
		add("textarea").add_class("edit").attr("rows", "1").attr("cols", "76").attr("id", "fileContent").text(" ")
		add("a").attr("id", "cancelBtn").text("Cancel")
		add("a").attr("id", "commitBtn").text("Commit")
		add("pre").add_class("text_label").attr("id", "preSave").attr("type", "2")
		close("div")
	end

	fun process_generate_dot do
		var name = "dep_{mmodule.name}"
		var op = new Buffer
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for m in mmodule.in_importation.poset do
			var public_owner = m.public_owner
			if public_owner == null then
				public_owner = m
				if m == mmodule then
					op.append("\"{m.name}\"[shape=box,margin=0.03];\n")
				else
					op.append("\"{m.name}\"[URL=\"{m.name}.html\"];\n")
				end
			end
			for imported in m.in_importation.direct_greaters do
				if imported.public_owner == null then
					op.append("\"{public_owner.name}\"->\"{imported.name}\";\n")
				end
			end
		end
		op.append("\}\n")
		generate_dot(op.to_s, name, "Dependency graph for module {mmodule.name}")
	end

	fun sidebar do
		var amodule = mbuilder.mmodule2nmodule[mmodule]
		open("div").add_class("menu")
		open("nav")
		add("h3").text("Module Hierarchy")
		var dependencies = new Array[MModule]
		for dep in mmodule.in_importation.greaters do
			if dep == mmodule or dep.public_owner != null then continue
			dependencies.add(dep)
		end
		if dependencies.length > 0 then
			add("h4").text("All dependencies")
			display_module_list(dependencies)
		end
		var clients = new Array[MModule]
		for dep in mmodule.in_importation.smallers do
			if dep == mmodule or dep.public_owner != null then continue
			clients.add(dep)
		end
		if clients.length > 0 then
			add("h4").text("All clients")
			display_module_list(clients)
		end
		close("nav")
		if mmodule.in_nesting.direct_greaters.length > 0 then
			open("nav")
			add("h3").text("Nested Modules")
			display_module_list(mmodule.in_nesting.direct_greaters.to_a)
			close("nav")
		end
		close("div")
	end

	private fun display_module_list(list: Array[MModule]) do
		open("ul")
		var sorter = new ComparableSorter[MModule]
		sorter.sort(list)
		for m in list do
			var am = mbuilder.mmodule2nmodule[m]
			open("li")
			add_html(m.link(am))
			close("li")
		end
		close("ul")
	end

	fun classes do
		var amodule = mbuilder.mmodule2nmodule[mmodule]
		var intro_mclasses = mmodule.intro_mclasses
		var redef_mclasses = mmodule.redef_mclasses
		var all_mclasses = new HashSet[MClass]
		for m in mmodule.in_nesting.greaters do
			all_mclasses.add_all(m.intro_mclasses)
			all_mclasses.add_all(m.redef_mclasses)
		end
		all_mclasses.add_all(intro_mclasses)
		all_mclasses.add_all(redef_mclasses)

		var sorted = new Array[MClass]
		sorted.add_all(all_mclasses)
		var sorter = new ComparableSorter[MClass]
		sorter.sort(sorted)
		open("div").add_class("module")
		open("article").add_class("classes filterable")
		add("h2").text("Classes")
		open("ul")
		for c in sorted do
			var nclass = mbuilder.mclassdef2nclassdef[c.intro].as(AStdClassdef)
			if redef_mclasses.has(c) and c.intro_mmodule.public_owner != mmodule then
				open("li").add_class("redef")
				add("span").attr("title", "refined in this module").text("R ")
			else
				open("li").add_class("intro")
				add("span").attr("title", "introduced in this module").text("I ")
			end
			add_html(c.link(nclass))
			close("li")
		end
		close("ul")
		close("article")
		close("div")
	end

	fun properties do
		var amodule = mbuilder.mmodule2nmodule[mmodule]
		var mpropdefs = new HashSet[MPropDef]
		for m in mmodule.in_nesting.greaters do
			for c in m.mclassdefs do mpropdefs.add_all(c.mpropdefs)
		end
		for c in mmodule.mclassdefs do mpropdefs.add_all(c.mpropdefs)
		var sorted = mpropdefs.to_a
		var sorter = new ComparableSorter[MPropDef]
		sorter.sort(sorted)
		open("article").add_class("properties filterable")
		add("h2").text("Properties")
		open("ul")
		for p in sorted do
			if p isa MAttributeDef then continue
			if p.mproperty.visibility <= none_visibility then continue
			if not mbuilder.mpropdef2npropdef.has_key(p) then continue
			var nprop = mbuilder.mpropdef2npropdef[p]
			if p.is_intro then
				open("li").add_class("intro")
				add("span").attr("title", "introduction").text("I")
			else
				open("li").add_class("redef")
				add("span").attr("title", "redefinition").text("R")
			end
			add_html("&nbsp;{p.link(nprop)} ({p.mclassdef.mclass.name})")
			close("li")
		end
		close("ul")
		close("article")
	end
end

# A class page
class NitdocClass
	super NitdocPage

	private var mclass: MClass
	private var mbuilder: ModelBuilder
	private var nitdoc: Nitdoc

	init(mclass: MClass, nitdoc: Nitdoc, dot_dir: nullable String, source: nullable String) do
		self.mclass = mclass
		self.mbuilder = nitdoc.modelbuilder
		self.nitdoc = nitdoc
		self.dot_dir = dot_dir
		self.source = source
	end

	redef fun head do
		super
		var nclass = mbuilder.mclassdef2nclassdef[mclass.intro]
		if nclass isa AStdClassdef then
			add("title").text("{mclass.name} class | {nclass.short_comment}")
		else
			add("title").text("{mclass.name} class")
		end
	end

	redef fun menu do
		open("li")
		add("a").attr("href", "index.html").text("Overview")
		close("li")
		open("li")
		var public_owner = mclass.public_owner
		if public_owner is null then
			var am = mbuilder.mmodule2nmodule[mclass.intro_mmodule]
			add_html(mclass.intro_mmodule.link(am))
		else
			var am = mbuilder.mmodule2nmodule[public_owner]
			add_html(public_owner.link(am))
		end
		close("li")
		add("li").add_class("current").text(mclass.name)
		open("li")
		add("a").attr("href", "full-index.html").text("Full Index")
		close("li")
	end

	redef fun content do
		open("div").add_class("menu")
		properties_column
		inheritance_column
		close("div")
		open("div").add_class("content")
		class_doc
		close("div")
	end

	fun properties_column do
		var sorter = new ComparableSorter[MPropDef]
		open("nav").add_class("properties filterable")
		add("h3").text("Properties")
		# get properties
		var vtypes = new HashSet[MVirtualTypeDef]
		var consts = new HashSet[MMethodDef]
		var meths = new HashSet[MMethodDef]
		for mclassdef in mclass.mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if not mbuilder.mpropdef2npropdef.has_key(mpropdef) then continue
				if mpropdef.mproperty.visibility <= none_visibility then continue
				if mpropdef isa MVirtualTypeDef then vtypes.add(mpropdef)
				if mpropdef isa MMethodDef then
					if mpropdef.mproperty.is_init then
						consts.add(mpropdef)
					else
						meths.add(mpropdef)
					end
				end
			end
		end
		for mprop in mclass.inherited_methods do
			var mpropdef = mprop.intro
			if not mbuilder.mpropdef2npropdef.has_key(mpropdef) then continue
			if mprop.visibility <= none_visibility then continue
			if mprop.intro_mclassdef.mclass.name == "Object" then continue
			meths.add(mpropdef)
		end
		# virtual types
		if vtypes.length > 0 then
			var vts = new Array[MVirtualTypeDef]
			vts.add_all(vtypes)
			sorter.sort(vts)
			add("h4").text("Virtual Types")
			display_mpropdef_list(vts)
		end
		if consts.length > 0 then
			var cts = new Array[MMethodDef]
			cts.add_all(consts)
			sorter.sort(cts)
			add("h4").text("Constructors")
			display_mpropdef_list(cts)
		end
		if meths.length > 0 then
			var mts = new Array[MMethodDef]
			mts.add_all(meths)
			sorter.sort(mts)
			add("h4").text("Methods")
			display_mpropdef_list(mts)
		end
		close("nav")
	end

	private fun display_mpropdef_list(list: Array[MPropDef]) do
		open("ul")
		for prop in list do
			var nprop = mbuilder.mpropdef2npropdef[prop]
			if prop.is_intro and prop.mproperty.intro_mclassdef.mclass != mclass then
				open("li").add_class("inherit")
				add("span").attr("title", "Inherited").text("H")
			else if prop.is_intro then
				open("li").add_class("intro")
				add("span").attr("title", "Introduced").text("I")
			else
				open("li").add_class("redef")
				add("span").attr("title", "Redefined").text("R")
			end
			add_html(prop.link(nprop))
			close("li")
		end
		close("ul")
	end

	fun inheritance_column do
		var sorted = new Array[MClass]
		var sorterp = new ComparableSorter[MClass]
		open("nav")
		add("h3").text("Inheritance")
		if mclass.ancestors.length > 1 then
			sorted = mclass.ancestors.to_a
			sorterp.sort(sorted)
			add("h4").text("Superclasses")
			open("ul")
			for sup in sorted do
				if sup == mclass then continue
				open("li")
				add("a").attr("href", "{sup.name}.html").text(sup.name)
				close("li")
			end
			close("ul")
		end

		if mclass.descendants.length <= 1 then
			add("h4").text("No Known Subclasses")
		else if mclass.descendants.length <= 100 then
			sorted = mclass.descendants.to_a
			sorterp.sort(sorted)
			add("h4").text("Subclasses")
			open("ul")
			for sub in sorted do
				if sub == mclass then continue
				open("li")
				add("a").attr("href", "{sub.name}.html").text(sub.name)
				close("li")
			end
			close("ul")
		else if mclass.children.length <= 100 then
			sorted = mclass.children.to_a
			sorterp.sort(sorted)
			add("h4").text("Direct Subclasses Only")
			open("ul")
			for sub in sorted do
				if sub == mclass then continue
				open("li")
				add("a").attr("href", "{sub.name}.html").text(sub.name)
				close("li")
			end
			close("ul")
		else
			add("h4").text("Too much Subclasses to list")
		end
		close("nav")
	end

	fun class_doc do
		var nclass = mbuilder.mclassdef2nclassdef[mclass.intro]
		var sorted = new Array[MModule]
		sorted.add_all(mclass.concerns.keys)
		var sorterp = new ComparableSorter[MModule]
		var sorterprop = new ComparableSorter[MProperty]
		var sorterc = new ComparableSorter[MClass]
		sorterp.sort(sorted)
		var subtitle = ""
		var lmmodule = new List[MModule]
		# Insert the subtitle part
		add("h1").text(mclass.to_s)
		open("div").add_class("subtitle")
		if mclass.visibility is none_visibility then subtitle += "private "
		subtitle += "{mclass.kind} {mclass.public_owner.namespace(mbuilder)}::{mclass}"
		add_html(subtitle)
		close("div")
		add_html("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		# We add the class description
		open("section").add_class("description")
		if nclass isa AStdClassdef and not nclass.comment.is_empty then add_html("<pre class=\"text_label\" title=\"122\" name=\"\" tag=\"{mclass.mclassdefs.first.location.to_s}\" type=\"2\">{nclass.comment} </pre><textarea id=\"fileContent\" class=\"edit\" cols=\"76\" rows=\"1\" style=\"display: none;\"></textarea><a id=\"cancelBtn\" style=\"display: none;\">Cancel</a><a id=\"commitBtn\" style=\"display: none;\">Commit</a><pre id=\"preSave\" class=\"text_label\" type=\"2\"></pre>")
		process_generate_dot
		close("section")
		open("section").add_class("concerns")
		add("h2").add_class("section-header").text("Concerns")
		open("ul")
		for owner in sorted do
			var nmodule = mbuilder.mmodule2nmodule[owner]
			var childs = mclass.concerns[owner]
			open("li")
			add_html("<a href=\"#MOD_{owner.name}\">{owner.name}</a>: {nmodule.short_comment}")
			if not childs is null then
				open("ul")
				var sortedc = childs.to_a
				var sorterpc = new ComparableSorter[MModule]
				sorterpc.sort(sortedc)
				for child in sortedc do
					var nchild = mbuilder.mmodule2nmodule[child]
					add_html("<li><a href=\"#MOD_{child.name}\">{child.name}</a>: {nchild.short_comment} </li>")
				end
				close("ul")
			end
			close("li")
		end
		close("ul")
		close("section")
		# Insert virtual types if there is almost one
		if mclass.virtual_types.length > 0 or mclass.arity > 0 then
			open("section").add_class("types")
			add("h2").text("Formal and Virtual Types")
			if mclass.virtual_types.length > 0 then for prop in mclass.virtual_types do description(prop)
			if mclass.arity > 0 and nclass isa AStdClassdef then
				for prop in nclass.n_formaldefs do
					open("article").attr("id", "FT_Object_{prop.collect_text}")
					open("h3").add_class("signature").text("{prop.collect_text}: nullable ")
					add_html("<a title=\"The root of the class hierarchy.\" href=\"Object.html\">Object</a>")
					close("h3")
					add_html("<div class=\"info\">formal generic type</div>")
					close("article")
				end
			end
			close("section")
		end
		# constructors
		if mclass.constructors.length > 0 then
			var sortedc = mclass.constructors.to_a
			sorterprop.sort(sortedc)
			open("section").add_class("constructors")
			add("h2").add_class("section-header").text("Constructors")
			for prop in sortedc do description(prop)
			close("section")
		end
		# methods
		open("section").add_class("methods")
		add("h2").add_class("section-header").text("Methods")
		for mmodule, mmethods in mclass.all_methods do
			var nmodule = mbuilder.mmodule2nmodule[mmodule]
			add_html("<a id=\"MOD_{mmodule.name}\"></a>")
			if mmodule != mclass.intro_mmodule and mmodule != mclass.public_owner then
				if mclass.has_mmodule(mmodule) then
					add_html("<p class=\"concern-doc\">{mmodule.name}: {nmodule.short_comment}</p>")
				else
					add_html("<h3 class=\"concern-toplevel\">Methods refined in {mmodule.link(nmodule)}</h3><p class=\"concern-doc\">{mmodule.name}: {nmodule.short_comment}</p>")
				end
			end
			var sortedc = mmethods.to_a
			sorterprop.sort(sortedc)
			for prop in sortedc do description(prop)
		end
		# inherited methods
		if mclass.inherited_methods.length > 0 then
			var sortedc = new Array[MClass]
			sortedc.add_all(mclass.inherited.keys)
			sorterc.sort(sortedc)
			add("h3").text("Inherited Methods")
			for imclass in sortedc do
				var inclass = mbuilder.mclassdef2nclassdef[imclass.intro].as(AStdClassdef)
				var sortedp = mclass.inherited[imclass].to_a
				sorterprop.sort(sortedp)
				open("p")
				add_html("Defined in {imclass.link(inclass)}: ")
				for method in sortedp do
					#TODO link to inherited propdef
					add_html("<a href=\"\">{method.name}</a>")
					if method != sortedp.last then add_html(", ")
				end
				close("p")
			end
		end
		close("section")
	end

	fun description(prop: MProperty) do
		if not mbuilder.mpropdef2npropdef.has_key(prop.intro) then return
		var nprop = mbuilder.mpropdef2npropdef[prop.intro]
		if not nprop isa AMethPropdef then return
		var classes = new Array[String]
		if nprop isa AInitPropdef then
			classes.add("init")
		else
			classes.add("fun")
		end
		if prop.is_redef then classes.add("redef")
		if prop.visibility == none_visibility then
			classes.add("private")
		else if prop.visibility == protected_visibility then
			classes.add("protected")
		else
			classes.add("public")
		end
		open("article").add_classes(classes).attr("id", "{prop.anchor}")
		var sign = prop.name
		open("h3").add_class("signature")
		add_html("{prop.name}{nprop.signature}")
		close("h3")
		open("div").add_class("info")
		add_html("{if prop.is_redef then "redef" else ""} fun {prop.intro_mclassdef.namespace(mclass)}::{prop.name}</div><div style=\"float: right;\"><a id=\"lblDiffCommit\"></a>")
		close("div")
		open("div").add_class("description")
		if nprop.comment == "" then
			add_html("<a class=\"newComment\" title=\"32\" tag=\"\">New Comment</a>")
		else
			add_html("<pre class=\"text_label\" title=\"\" name=\"\" tag=\"\" type=\"1\">{nprop.comment}</pre>")
		end
		add_html("<textarea id=\"fileContent\" class=\"edit\" cols=\"76\" rows=\"1\" style=\"display: none;\"></textarea><a id=\"cancelBtn\" style=\"display: none;\">Cancel</a><a id=\"commitBtn\" style=\"display: none;\">Commit</a><pre id=\"preSave\" class=\"text_label\" type=\"2\"></pre>")
		open("p")
		if prop.local_class != mclass then
			var mredef = prop.local_class.intro_mmodule
			var nredef = mbuilder.mmodule2nmodule[mredef]
			add_html("inherited from {mredef.link(nredef)} ")
		end
		#TODO display show code if doc github
		var mintro = prop.intro_mclassdef.mmodule
		var nintro = mbuilder.mmodule2nmodule[mintro]
		add_html("defined by the module {mintro.link(nintro)}{if prop.apropdef is null then "" else show_source(prop.apropdef.location)}.")

		for parent in mclass.parents do
			var mparent = parent.intro_mmodule
			var nparent = mbuilder.mmodule2nmodule[mparent]
			if prop isa MMethod then if parent.constructors.has(prop) then add_html(" Previously defined by: {mparent.link(nparent)} for <a href=\"{parent.name}.html\">{parent.name}</a>.")
		end
		close("p")
		close("div")

		close("article")
	end

	fun process_generate_dot do
		var pe = nitdoc.class_hierarchy[mclass]
		var cla = new HashSet[MClass]
		var sm = new HashSet[MClass]
		var sm2 = new HashSet[MClass]
		sm.add(mclass)
		while cla.length + sm.length < 10 and sm.length > 0 do
			cla.add_all(sm)
			sm2.clear
			for x in sm do
				sm2.add_all(pe.poset[x].direct_smallers)
			end
			var t = sm
			sm = sm2
			sm2 = t
		end
		cla.add_all(pe.greaters)

		var op = new Buffer
		var name = "dep_{mclass.name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for c in cla do
			if c == mclass then
				op.append("\"{c.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name}\"[URL=\"{c.name}.html\"];\n")
			end
			for c2 in pe.poset[c].direct_greaters do
				if not cla.has(c2) then continue
				op.append("\"{c.name}\"->\"{c2.name}\";\n")
			end
			if not pe.poset[c].direct_smallers.is_empty then
				var others = true
				for c2 in pe.poset[c].direct_smallers do
					if cla.has(c2) then others = false
				end
				if others then
					op.append("\"{c.name}...\"[label=\"\"];\n")
					op.append("\"{c.name}...\"->\"{c.name}\"[style=dotted];\n")
				end
			end
		end
		op.append("\}\n")
		generate_dot(op.to_s, name, "Dependency graph for class {mclass.name}")
	end
end

redef class AModule
	private fun comment: String do
		var ret = ""
		if n_moduledecl is null or n_moduledecl.n_doc is null then ret
		if n_moduledecl.n_doc is null then return ""
		for t in n_moduledecl.n_doc.n_comment do
			var txt = t.text
			txt = txt.replace("# ", "")
			txt = txt.replace("#", "")
			ret += txt
		end
		return ret
	end

	private fun short_comment: String do
		var ret = ""
		if n_moduledecl != null and n_moduledecl.n_doc != null then
			var txt = n_moduledecl.n_doc.n_comment.first.text
			txt = txt.replace("# ", "")
			txt = txt.replace("\n", "")
			ret += txt
		end
		return ret
	end
end

redef class MModule
	super Comparable
	redef type OTHER: MModule
	redef fun <(other: OTHER): Bool do return self.name < other.name

	# Get the list of all methods in a module
	fun imported_methods: Set[MMethod] do
		var methods = new HashSet[MMethod]
		for mclass in imported_mclasses do
			for method in mclass.intro_methods do
				methods.add(method)
			end
		end
		return methods
	end

	# Get the list aof all refined methods in a module
	fun redef_methods: Set[MMethod] do
		var methods = new HashSet[MMethod]
		for mclass in redef_mclasses do
			for method in mclass.intro_methods do
				methods.add(method)
			end
		end
		return methods
	end

	# Return a link (html a tag) to the nitdoc module page
	fun link(amodule: AModule): String do
		return "<a href=\"{name}.html\" title=\"{amodule.short_comment}\">{name}</a>"
	end

	# Return the module namespace decorated with html
	fun namespace(mbuilder: ModelBuilder): String do
		var str = new Buffer
		var mowner = public_owner
		if mowner != null then
			var nowner = mbuilder.mmodule2nmodule[mowner]
			str.append(public_owner.link(nowner))
		end
		var nmodule = mbuilder.mmodule2nmodule[self]
		str.append(self.link(nmodule))
		return str.to_s
	end
end
redef class MPropDef
	super Comparable
	redef type OTHER: MPropDef
	redef fun <(other: OTHER): Bool do return self.mproperty.name < other.mproperty.name

	# Return a link (html a tag) to the nitdoc class page
	fun link(nprop: APropdef): String do
		return "<a href=\"{mclassdef.mclass.name}.html#{mproperty.anchor}\" title=\"{nprop.short_comment}\">{mproperty}</a>"
	end
end

redef class MProperty
	super Comparable
	redef type OTHER: MProperty
	redef fun <(other: OTHER): Bool do return self.name < other.name

	var is_redef: Bool
	var apropdef: nullable APropdef

	redef init(intro_mclassdef: MClassDef, name: String, visibility: MVisibility)
	do
		super
		is_redef = false
	end

	fun local_class: MClass do
		var classdef = self.intro_mclassdef
		return classdef.mclass
	end

	fun anchor: String do
		return "PROP_{c_name}"
	end

end

redef class MClass
	super Comparable
	redef type OTHER: MClass
	redef fun <(other: OTHER): Bool do return self.name < other.name

	# Add type parameters
	redef fun to_s do
		if arity > 0 then
			return "{name}[{intro.parameter_names.join(", ")}]"
		else
			return name
		end
	end

	# Return a link (html a tag) to the nitdoc class page
	fun link(aclass: AStdClassdef): String do
		return "<a href=\"{name}.html\" title=\"{aclass.short_comment}\">{self}</a>"
	end

	# Associate all MMethods to each MModule concerns
	fun all_methods: HashMap[MModule, Set[MMethod]] do
		var hm = new HashMap[MModule, Set[MMethod]]
		for mmodule, childs in concerns do
			if not hm.has_key(mmodule) then hm[mmodule] = new HashSet[MMethod]
			for prop in intro_methods do
				if mmodule == prop.intro_mclassdef.mmodule then
					prop.is_redef = false
					hm[mmodule].add(prop)
				end
			end
			for prop in redef_methods do
				if mmodule == prop.intro_mclassdef.mmodule then
					prop.is_redef = true
					hm[mmodule].add(prop)
				end
			end

			if childs != null then
				for child in childs do
					if not hm.has_key(child) then hm[child] = new HashSet[MMethod]
					for prop in intro_methods do
						if child == prop.intro_mclassdef.mmodule then
							prop.is_redef = false
							hm[child].add(prop)
						end
					end
					for prop in redef_methods do
						if child == prop.intro_mclassdef.mmodule then
							prop.is_redef = true
							hm[child].add(prop)
						end
					end
				end
			end
		end
		return hm
	end

	fun public_owner: MModule do
		var owner = intro_mmodule
		if owner.public_owner is null then
			return owner
		else
			return owner.public_owner.as(not null)
		end
	end

	# Associate MClass to all MMethod include in 'inherited_methods'
	fun inherited: HashMap[MClass, Set[MMethod]] do
		var hm = new HashMap[MClass, Set[MMethod]]
		for method in inherited_methods do
			var mclass = method.intro_mclassdef.mclass
			if not hm.has_key(mclass) then hm[mclass] = new HashSet[MMethod]
			hm[mclass].add(method)
		end
		return hm
	end

	# Return true if MModule concern contain subMModule
	fun has_mmodule(sub: MModule): Bool do
		for mmodule, childs in concerns do
			if childs is null then continue
			if childs.has(sub) then return true
		end
		return false
	end

	fun mmethod(mprop2npropdef: Map[MProperty, APropdef]) do
		for const in constructors do
			if mprop2npropdef.has_key(const)then
				const.apropdef = mprop2npropdef[const].as(AMethPropdef)
			end
		end

		for intro in intro_methods do
			if mprop2npropdef.has_key(intro)then
				if mprop2npropdef[intro] isa AMethPropdef then intro.apropdef = mprop2npropdef[intro].as(AMethPropdef)
			end
		end

		for rd in redef_methods do
			if mprop2npropdef.has_key(rd)then
				if mprop2npropdef[rd] isa AMethPropdef then rd.apropdef = mprop2npropdef[rd].as(AMethPropdef)
			end
		end
	end

	fun link_anchor: String do
		return "{name}.html"
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

redef class ASignature
	redef fun to_s do
		#TODO closures
		var ret = ""
		if not n_params.is_empty then
			ret = "{ret}({n_params.join(", ")})"
		end
		if n_type != null and n_type.to_s != "" then ret += ": {n_type.to_s}"
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
		var ret = "<a href=\"{n_id.text}.html\">{n_id.text}</a>"
		if n_kwnullable != null then ret = "nullable {ret}"
		if not n_types.is_empty then ret = "{ret}[{n_types.join(", ")}]"
		return ret
	end
end

redef class APropdef
	private fun short_comment: String is abstract
	private fun signature: String is abstract
	private fun comment: String is abstract
end

redef class AAttrPropdef
	redef fun short_comment do
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
	redef fun short_comment do
		var ret = new Buffer
		if n_doc != null then
			var txt = n_doc.n_comment.first.text
			txt = txt.replace("# ", "")
			txt = txt.replace("\n", "")
			ret.append(txt)
		end
		return ret.to_s
	end

	redef fun signature: String do
		var sign = ""
		if n_signature != null then sign = "{n_signature.to_s}"
		return sign
	end

	redef private fun comment: String do
		var ret = new Buffer
		if n_doc != null then
			for t in n_doc.n_comment do
				var txt = t.text.replace("# ", "")
				txt = txt.replace("#", "")
				ret.append(txt)
			end
		end
		return ret.to_s
	end
end

redef class MClassDef
	private fun namespace(mclass: MClass): String do

		if mmodule.public_owner is null then
			return "{mmodule.full_name}::{mclass.name}"
		else if mclass is self.mclass then
			return "{mmodule.public_owner.name}::{mclass.name}"
		else
			return "{mmodule.public_owner.name}::<a href=\"{mclass.name}.html\">{mclass.name}</a>"
		end
	end
end

redef class Set[E]
	fun last: E do
		return to_a[length-1]
	end
end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext

# Here we launch the nit index
var nitdoc = new Nitdoc(toolcontext)
nitdoc.start
