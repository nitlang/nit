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
	private var arguments: Array[String]
	private var destinationdir: nullable String
	private var sharedir: nullable String
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
	end

	private fun process_options do
		if not opt_dir.value is null then
			destinationdir = opt_dir.value
		else
			destinationdir = "nitdoc_directory"
		end
		if not opt_sharedir.value is null then
			sharedir = opt_sharedir.value
		else
			var dir = "NIT_DIR".environ
			if dir.is_empty then
				dir = "{sys.program_name.dirname}/../share/nitdoc"
			else
				dir = "{dir}/share/nitdoc"
			end
			sharedir = dir
			if sharedir is null then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
			dir = "{sharedir.to_s}/scripts/js-facilities.js"
			if sharedir is null then
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
			if not destinationdir.file_exists then destinationdir.mkdir
			sys.system("cp -r {sharedir.to_s}/* {destinationdir.to_s}/")
			overview
			fullindex
			modules
			classes
			quicksearch_list
		end
	end

	fun overview do
		var overviewpage = new NitdocOverview.with(modelbuilder.nmodules, self.opt_nodot.value, destinationdir.to_s)
		overviewpage.save("{destinationdir.to_s}/index.html")
	end

	fun fullindex do
		var fullindex = new NitdocFullindex.with(model.mmodules)
		fullindex.save("{destinationdir.to_s}/full-index.html")
	end

	fun modules do
		for mod in modelbuilder.nmodules do
			var modulepage = new NitdocModules.with(mod)
			modulepage.save("{destinationdir.to_s}/{mod.mmodule.name}.html")
		end
	end

	fun classes do
		for amodule in modelbuilder.nmodules do
			for mclass, aclassdef in amodule.mclass2nclassdef do
				mclass.amodule(modelbuilder.mmodule2nmodule)
				mclass.mmethod(aclassdef.mprop2npropdef)
				var classpage = new NitdocMClasses.with(mclass, aclassdef, source)
				classpage.save("{destinationdir.to_s}/{mclass.name}.html")
			end
		end
	end

	# Generate QuickSearch file
	fun quicksearch_list do
		var file = new OFStream.open("{destinationdir.to_s}/quicksearch-list.js")
		var content = new Buffer
		content.append("var entries = \{ ")
		for prop in model.mproperties do
			if not prop isa MMethod then continue
			content.append("\"{prop.name}\": [")
			for propdef in prop.mpropdefs do
				content.append("\{txt: \"{propdef.mproperty.full_name}\", url:\"{propdef.mproperty.link_anchor}\" \}")
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

class NitdocOverview
	super NitdocPage

	var amodules: Array[AModule]

	# Init with Array[AModule] to get all ifnormations about each MModule containt in a program
	# opt_nodot to inform about the graph gen
	# destination: to know where will be saved dot files
	init with(modules: Array[AModule], opt_nodot: Bool, destination: String) do
		self.amodules = modules
		self.opt_nodot = opt_nodot
		self.destinationdir = destination
	end

	redef fun head do
		super
		add("title").text("Overview | Nit Standard Library")
	end

	redef fun header do
		open("header")
		open("nav").add_class("main")
		open("ul")
		add("li").add_class("current").text("Overview")
		open("li")
		add_html("<a href=\"full-index.html\">Full Index</a>")
		close("li")
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

	redef fun body do
		super
		open("div").add_class("page")
		open("div").add_class("content fullpage")
		add("h1").text("Nit Standard Library")
		open("article").add_class("overview")
		add_html("<p>Documentation for the standard library of Nit<br />Version jenkins-component=stdlib-19<br />Date: TODAY</p>")
		close("article")
		open("article").add_class("overview")
		add("h2").text("Modules")
		open("ul")
		add_modules
		close("ul")
		process_generate_dot
		close("article")
		close("div")
		close("div")
		add("footer").text("Nit standard library. Version jenkins-component=stdlib-19.")
	end

	fun add_modules do
		var ls = new List[nullable MModule]
		for amodule in amodules do
			var mmodule = amodule.mmodule.public_owner
			if mmodule != null and not ls.has(mmodule) then
				open("li")
				add("a").attr("href", "{mmodule.name}.html").text("{mmodule.to_s} ")
				add_html(amodule.comment)
				close("li")
				ls.add(mmodule)
			end
		end
	end

	fun process_generate_dot do
		var op = new Buffer
		op.append("digraph dep \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for amodule in amodules do
			op.append("\"{amodule.mmodule.name}\"[URL=\"{amodule.mmodule.name}.html\"];\n")
			for mmodule2 in amodule.mmodule.in_importation.direct_greaters do
				op.append("\"{amodule.mmodule.name}\"->\"{mmodule2.name}\";\n")
			end
		end
		op.append("\}\n")
		generate_dot(op.to_s, "dep", "Modules hierarchy")
	end

end

class NitdocFullindex
	super NitdocPage

	var mmodules: Array[MModule]

	init with(mmodules: Array[MModule]) do
		self.mmodules = mmodules
		opt_nodot = false
		destinationdir = ""
	end

	redef fun head do
		super
		add("title").text("Full Index | Nit Standard Library")
	end

	redef fun header do
		open("header")
		open("nav").add_class("main")
		open("ul")
		open("li")
		add_html("<a href=\"index.html\">Overview</a>")
		close("li")
		add("li").add_class("current").text("Full Index")
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

	redef fun body do
		super
		open("div").add_class("page")
		open("div").add_class("content fullpage")
		add("h1").text("Full Index")
		add_content
		close("div")
		close("div")
		add("footer").text("Nit standard library. Version jenkins-component=stdlib-19.")
	end

	fun add_content do
		module_column
		classes_column
		properties_column
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
			add("a").attr("href", "{mclass.name}.html").text(mclass.name)
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

class NitdocModules
	super NitdocPage

	var amodule: AModule
	var modulename: String
	init with(amodule: AModule) do
		self.amodule = amodule
		self.modulename = self.amodule.mmodule.name
		opt_nodot = false
		destinationdir = ""
	end

	redef fun head do
		super
		add("title").text("{modulename} module | {amodule.short_comment}")
	end

	redef fun header do
		open("header")
		open("nav").add_class("main")
		open("ul")
		open("li")
		add_html("<a href=\"index.html\">Overview</a>")
		close("li")
		add("li").add_class("current").text(modulename)
		open("li")
		add_html("<a href=\"full-index.html\" >Full Index</a>")
		close("li")
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

	redef fun body do
		super
		open("div").add_class("page")
		menu
		add_content
		close("div")
		add("footer").text("Nit standard library. Version jenkins-component=stdlib-19.")
	end

	# Insert all tags in content part
	fun add_content do
		open("div").add_class("content")
		add("h1").text(modulename)
		add("div").add_class("subtitle").text("module {modulename}")
		module_comment
		classes
		properties
		close("div")
	end

	# Insert module comment in the content
	fun module_comment do
		var doc = amodule.comment
		open("div").attr("id", "description")
		add("pre").add_class("text_label").text(doc)
		add("textarea").add_class("edit").attr("rows", "1").attr("cols", "76").attr("id", "fileContent").text(" ")
		add("a").attr("id", "cancelBtn").text("Cancel")
		add("a").attr("id", "commitBtn").text("Commit")
		add("pre").add_class("text_label").attr("id", "preSave").attr("type", "2")
		close("div")
	end

	fun menu do
		var mmodule = amodule.mmodule 
		open("div").add_class("menu")
		open("nav")
		add("h3").text("Module Hierarchy").attr("style","cursor: pointer;")
		if mmodule.in_importation.direct_greaters.length > 0 then
			add_html("<h4>All dependencies</h4><ul>")
			var sorted = mmodule.in_importation.direct_greaters.to_a
			var sorterp = new ComparableSorter[MModule]
			sorterp.sort(sorted)
			for m in sorted do
				if m == mmodule or mmodule == m.public_owner then continue
				open("li")
				add("a").attr("href", "{m.name}.html").text(m.name)
				close("li")
			end
			add_html("</ul>")
		end	
		if mmodule.in_importation.greaters.length > 0 then
			add_html("<h4>All clients</h4><ul>")
			var sorted = mmodule.in_importation.greaters.to_a
			var sorterp = new ComparableSorter[MModule]
			sorterp.sort(sorted)
			for m in sorted do
				if m == mmodule then continue
				open("li")
				add("a").attr("href", "{m.name}.html").text(m.name)
				close("li")
			end
			add_html("</ul>")
		end
		close("nav")
		if mmodule.in_nesting.direct_greaters.length > 0 then
			var sorted = mmodule.in_nesting.direct_greaters.to_a
			var sorterp = new ComparableSorter[MModule]
			sorterp.sort(sorted)
			open("nav")
			add("h3").text("Nested Modules").attr("style","cursor: pointer;")
			open("ul")
			for m in sorted do
				open("li")
				add("a").attr("href", "{m.name}.html").text(m.name)
				close("li")
			end
			close("ul")
			
			close("nav")
		end
		close("div")
	end

	fun classes do
		var sorted = new Array[MClass]
		sorted.add_all(amodule.mmodule.mclasses.keys)
		var sorterp = new ComparableSorter[MClass]
		sorterp.sort(sorted)
		open("div").add_class("module")
		open("article").add_class("classes filterable")
		add("h2").text("Classes")
		open("ul")
		for c in sorted do
			var state = amodule.mmodule.mclasses[c]
			var name = c.name
			if state == c_is_intro or state == c_is_imported then
				open("li").add_class("intro")
				add("span").attr("title", "introduced in this module").text("I ")
			else
				open("li").add_class("redef")
				add("span").attr("title", "refined in this module").text("R ")
			end
			add("a").attr("href", "{name}.html").text(name)
			close("li")
		end
		close("ul")
		close("article")
		close("div")
	end

	fun properties do
		var sorted_imported = amodule.mmodule.imported_methods.to_a
		var sorted_redef = amodule.mmodule.redef_methods.to_a
		var sorterp = new ComparableSorter[MProperty]
		sorterp.sort(sorted_imported)
		sorterp.sort(sorted_redef)
		open("article").add_class("properties filterable")
		add_html("<h2>Properties</h2>")
		open("ul")
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

# Nit Standard Library
class NitdocMClasses
	super NitdocPage

	var mclass: MClass
	var aclassdef: AClassdef
	var stdclassdef: nullable AStdClassdef
	var public_owner: nullable MModule

	init with(mclass: MClass, aclassdef: AClassdef, source: nullable String) do
		self.mclass = mclass
		self.aclassdef = aclassdef
		if aclassdef isa AStdClassdef then self.stdclassdef = aclassdef
		self.public_owner = mclass.intro_mmodule.public_owner
		opt_nodot = false
		destinationdir = ""
		self.source = source
	end

	redef fun head do
		super
		add("title").text("{self.mclass.name} class | Nit Standard Library")
	end

	redef fun header do
		open("header")
		open("nav").add_class("main")
		open("ul")
		open("li")
		add_html("<a href=\"index.html\">Overview</a>")
		close("li")
		open("li")
		if public_owner is null then
			add_html("<a href=\"{mclass.intro_mmodule.name}.html\">{mclass.intro_mmodule.name}</a>")
		else
			add_html("<a href=\"{public_owner.name}.html\">{public_owner.name}</a>")
		end
		close("li")
		add("li").add_class("current").text(mclass.name)
		open("li")
		add_html("<a href=\"full-index.html\" >Full Index</a>")
		close("li")
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

	redef fun body do
		super
		open("div").add_class("page")
		add_content
		close("div")
		add("footer").text("Nit standard library. Version jenkins-component=stdlib-19.")
	end

	# Insert all tags in content part
	fun add_content do
		open("div").add_class("menu")
		properties_column
		inheritance_column
		close("div")
		open("div").add_class("content")
		content
		close("div")
	end

	fun properties_column do
		var sorted = new Array[MProperty]
		var sorterp = new ComparableSorter[MProperty]
		open("nav").add_class("properties filterable")
		add("h3").text("Properties")

		if mclass.virtual_types.length > 0 then
			add("h4").text("Virtual Types")
			open("ul")
			sorted = mclass.virtual_types.to_a
			sorterp.sort(sorted)
			for prop in sorted do
				add_html("<li class=\"redef\"><span title=\"Redefined\">R</span><a href=\"{prop.link_anchor}\">{prop.name}</a></li>")
			end
			close("ul")
		end
		if mclass.constructors.length > 0 then
			sorted = mclass.constructors.to_a
			sorterp.sort(sorted)
			add("h4").text("Constructors")
			open("ul")
			for prop in sorted do
				add_html("<li class=\"intro\"><span title=\"Introduced\">I</span><a href=\"{prop.link_anchor}\">{prop.name}</a></li>")
			end
			close("ul")
		end
		add("h4").text("Methods")
		open("ul")
		if mclass.intro_methods.length > 0 then
			sorted = mclass.intro_methods.to_a
			sorterp.sort(sorted)
			for prop in sorted do
				if prop.visibility is public_visibility or prop.visibility is protected_visibility then add_html("<li class=\"intro\"><span title=\"Introduced\">I</span><a href=\"{prop.link_anchor}\">{prop.name}</a></li>")
			end
		end
		if mclass.inherited_methods.length > 0 then
			sorted = mclass.inherited_methods.to_a
			sorterp.sort(sorted)
			for prop in sorted do
				if prop.visibility is public_visibility or prop.visibility is protected_visibility then add_html("<li class=\"inherit\"><span title=\"Inherited\">H</span><a href=\"{prop.link_anchor}\">{prop.name}</a></li>")
			end
		end
		if mclass.redef_methods.length > 0 then
			sorted = mclass.redef_methods.to_a
			sorterp.sort(sorted)
			for prop in sorted do
				if prop.visibility is public_visibility or prop.visibility is protected_visibility then add_html("<li class=\"redef\"><span title=\"Refined\">R</span><a href=\"{prop.link_anchor}\">{prop.name}</a></li>")
			end
		end
		close("ul")
		close("nav")
	end

	fun inheritance_column do
		var sorted = new Array[MClass]
		var sorterp = new ComparableSorter[MClass]
		open("nav")
		add("h3").text("Inheritance")
		if mclass.parents.length > 0 then
			sorted = mclass.parents.to_a
			sorterp.sort(sorted)
			add("h4").text("Superclasses")
			open("ul")
			for sup in sorted do add_html("<li><a href=\"{sup.name}.html\">{sup.name}</a></li>")
			close("ul")
		end

		if mclass.descendants.length is 0 then
			add("h4").text("No Known Subclasses")
		else if mclass.descendants.length <= 100 then
			sorted = mclass.descendants.to_a
			sorterp.sort(sorted)
			add("h4").text("Subclasses")
			open("ul")
			for sub in sorted do add_html("<li><a href=\"{sub.name}\">{sub.name}</a></li>")
			close("ul")
		else if mclass.children.length <= 100 then
			sorted = mclass.children.to_a
			sorterp.sort(sorted)
			add("h4").text("Direct Subclasses Only")
			open("ul")
			for sub in sorted do add_html("<li><a href=\"{sub.name}\">{sub.name}</a></li>")
			close("ul")
		else
			add("h4").text("Too much Subclasses to list")
		end
		close("nav")
	end

	fun content do
		var sorted = new Array[MModule]
		sorted.add_all(mclass.concerns.keys)
		var sorterp = new ComparableSorter[MModule]
		var sorterprop = new ComparableSorter[MProperty]
		var sorterc = new ComparableSorter[MClass]
		sorterp.sort(sorted)
		var subtitle = ""
		var lmmodule = new List[MModule]
		# Insert the subtitle part
		add("h1").text(mclass.name)
		open("div").add_class("subtitle")
		if mclass.visibility is none_visibility then subtitle += "private "
		subtitle += "{mclass.kind} <a href=\"{mclass.public_owner.name}.html\">{mclass.public_owner.name}</a>::{mclass.name}"
		add_html(subtitle)
		close("div")
		add_html("<div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")
		# We add the class description
		open("section").add_class("description")
		if not stdclassdef is null and not stdclassdef.comment.is_empty then add_html("<pre class=\"text_label\" title=\"122\" name=\"\" tag=\"{mclass.mclassdefs.first.location.to_s}\" type=\"2\">{stdclassdef.comment} </pre><textarea id=\"fileContent\" class=\"edit\" cols=\"76\" rows=\"1\" style=\"display: none;\"></textarea><a id=\"cancelBtn\" style=\"display: none;\">Cancel</a><a id=\"commitBtn\" style=\"display: none;\">Commit</a><pre id=\"preSave\" class=\"text_label\" type=\"2\"></pre>")
		close("section")
		open("section").add_class("concerns")
		add("h2").add_class("section-header").text("Concerns")
		open("ul")
		for owner in sorted do
			var childs = mclass.concerns[owner]
			open("li")
			add_html("<a href=\"#MOD_{owner.name}\">{owner.name}</a>: {owner.amodule.short_comment}")
			if not childs is null then
				open("ul")
				var sortedc = childs.to_a
				var sorterpc = new ComparableSorter[MModule]
				sorterpc.sort(sortedc)
				for child in sortedc do
					add_html("<li><a href=\"#MOD_{child.name}\">{child.name}</a>: {child.amodule.short_comment} </li>")
				end
				close("ul")
			end
			close("li")
		end
		close("ul")
		close("section")
		# Insert virtual types if there is almost one
		if mclass.virtual_types.length > 0 or (stdclassdef != null and stdclassdef.n_formaldefs.length > 0) then
			open("section").add_class("types")
			add("h2").text("Formal and Virtual Types")
			if mclass.virtual_types.length > 0 then for prop in mclass.virtual_types do description(prop)
			if stdclassdef.n_formaldefs.length > 0 then
				for prop in stdclassdef.n_formaldefs do
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
		# Insert constructors if there is almost one
		if mclass.constructors.length > 0 then
			var sortedc = mclass.constructors.to_a
			sorterprop.sort(sortedc)
			open("section").add_class("constructors")
			add("h2").add_class("section-header").text("Constructors")
			for prop in sortedc do description(prop)
			close("section")
		end
		open("section").add_class("methods")
		add("h2").add_class("section-header").text("Methods")
		for mmodule, mmethods in mclass.all_methods do
			add_html("<a id=\"MOD_{mmodule.name}\"></a>")
			if mmodule != mclass.intro_mmodule and mmodule != mclass.public_owner then
				if mclass.has_mmodule(mmodule) then
					add_html("<p class=\"concern-doc\">{mmodule.name}: {mmodule.amodule.short_comment}</p>")
				else
					add_html("<h3 class=\"concern-toplevel\">Methods refined in <a href=\"{mmodule.name}.html\">{mmodule.name}</a></h3><p class=\"concern-doc\">{mmodule.name}: {mmodule.amodule.short_comment}</p>")
				end
			end
			var sortedc = mmethods.to_a
			sorterprop.sort(sortedc)
			for prop in sortedc do description(prop)
		end
		# Insert inherited methods
		if mclass.inherited_methods.length > 0 then
			var sortedc = new Array[MClass]
			sortedc.add_all(mclass.inherited.keys)
			sorterc.sort(sortedc)
			add("h3").text("Inherited Methods")
			for i_mclass in sortedc do
				var sortedp = mclass.inherited[i_mclass].to_a
				sorterprop.sort(sortedp)
				open("p")
				add_html("Defined in <a href=\"{i_mclass.name}.html\">{i_mclass.name}</a>: ")
				for method in sortedp do
					add_html("<a href=\"{method.link_anchor}\">{method.name}</a>")
					if method != sortedp.last then add_html(", ")
				end
				close("p")
			end
		end
		close("section")
	end

	# Insert description tags for 'prop'
	fun description(prop: MProperty) do
		open("article").add_class("fun public {if prop.is_redef then "redef" else ""}").attr("id", "{prop.anchor}")
		var sign = prop.name
		if prop.apropdef != null then sign += prop.apropdef.signature
		add_html("<h3 class=\"signature\">{sign}</h3>")
		add_html("<div class=\"info\">{if prop.is_redef then "redef" else ""} fun {prop.intro_mclassdef.namespace(mclass)}::{prop.name}</div><div style=\"float: right;\"><a id=\"lblDiffCommit\"></a></div>")

		open("div").add_class("description")
		if prop.apropdef is null or prop.apropdef.comment == "" then
			add_html("<a class=\"newComment\" title=\"32\" tag=\"\">New Comment</a>")
		else
			add_html("<pre class=\"text_label\" title=\"\" name=\"\" tag=\"\" type=\"1\">{prop.apropdef.comment}</pre>")
		end
		add_html("<textarea id=\"fileContent\" class=\"edit\" cols=\"76\" rows=\"1\" style=\"display: none;\"></textarea><a id=\"cancelBtn\" style=\"display: none;\">Cancel</a><a id=\"commitBtn\" style=\"display: none;\">Commit</a><pre id=\"preSave\" class=\"text_label\" type=\"2\"></pre>")
		open("p")
		if prop.local_class != mclass then add_html("inherited from {prop.local_class.intro_mmodule.name} ")
		#TODO display show code if doc github
		add_html("defined by the module <a href=\"{prop.intro_mclassdef.mmodule.name}.html\">{prop.intro_mclassdef.mmodule.name}</a> {if prop.apropdef is null then "" else show_source(prop.apropdef.location)}.")

		for parent in mclass.parents do
			if prop isa MMethod then if parent.constructors.has(prop) then add_html(" Previously defined by: <a href=\"{parent.intro_mmodule.name}.html\">{parent.intro_mmodule.name}</a> for <a href=\"{parent.name}.html\">{parent.name}</a>.")
		end
		close("p")
		close("div")

		close("article")
	end

end	

class NitdocPage
	super HTMLPage
	
	var opt_nodot: Bool
	var destinationdir : String
	var source: nullable String

	redef fun head do
		add("meta").attr("charset", "utf-8")
		add("script").attr("type", "text/javascript").attr("src", "scripts/jquery-1.7.1.min.js")
		add("script").attr("type", "text/javascript").attr("src", "quicksearch-list.js")
		add("script").attr("type", "text/javascript").attr("src", "scripts/js-facilities.js")
		add("link").attr("rel", "stylesheet").attr("href", "styles/main.css").attr("type", "text/css").attr("media", "screen")
	end

	redef fun body do header
	fun header do end

	# Generate a clickable graphviz image using a dot content
	fun generate_dot(dot: String, name: String, alt: String) do
		if opt_nodot then return
		var file = new OFStream.open("{self.destinationdir}/{name}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {self.destinationdir}/{name}.png && test -f {self.destinationdir}/{name}.s.dot && diff {self.destinationdir}/{name}.dot {self.destinationdir}/{name}.s.dot >/dev/null 2>&1 ; \} || \{ cp {self.destinationdir}/{name}.dot {self.destinationdir}/{name}.s.dot && dot -Tpng -o{self.destinationdir}/{name}.png -Tcmapx -o{self.destinationdir}/{name}.map {self.destinationdir}/{name}.s.dot ; \}")
		open("article").add_class("graph")
		add("img").attr("src", "{name}.png").attr("usemap", "#{name}").attr("style", "margin:auto").attr("alt", "{alt}")
		close("article")
		var fmap = new IFStream.open("{self.destinationdir}/{name}.map")
		add_html(fmap.read_all)
		fmap.close
	end

	# Add a (source) link fo a given location
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

redef class AModule
	private fun comment: String do
		var ret = ""
		if n_moduledecl is null or n_moduledecl.n_doc is null then ret
		if n_moduledecl.n_doc is null then return ""
		for t in n_moduledecl.n_doc.n_comment do
			ret += "{t.text.replace("# ", "")}"
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

	var amodule: nullable AModule

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

	fun class_text: String do
		return local_class.name
	end

	fun link_anchor: String do
		return "{class_text}.html#{anchor}"
	end

	fun anchor: String do
		return "PROP_{c_name}"
	end

end

redef class MClass

	super Comparable
	redef type OTHER: MClass
	redef fun <(other: OTHER): Bool do return self.name < other.name

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
	
	# Associate Amodule to all MModule concern by 'self'
	fun amodule(amodules: HashMap[MModule, AModule]) do
		for owner, childs in concerns do
			if childs != null then for child in childs do child.amodule = amodules[child]
			owner.amodule = amodules[owner]
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
		if n_type != null and n_type.to_s != "" then ret += " {n_type.to_s}"
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
		var ret = ""
		if n_doc != null then
			var txt = n_doc.n_comment.first.text
			txt = txt.replace("# ", "")
			txt = txt.replace("\n", "")
			ret += txt
		end
		return ret
	end

	redef fun signature: String do
		var sign = ""
		if n_signature != null then sign = " {n_signature.to_s}"
		return sign
	end

	redef private fun comment: String do
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
