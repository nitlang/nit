# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Documentation generator for the nit language.
# Generate API documentation in HTML format from nit source code.
module nitdoc

import model_utils
import modelize_property
import markdown
import doc_template

# The NitdocContext contains all the knowledge used for doc generation
class NitdocContext

	private var toolcontext = new ToolContext
	private var mbuilder: ModelBuilder
	private var mainmodule: MModule
	private var output_dir: String
	private var min_visibility: MVisibility

	private var opt_dir = new OptionString("output directory", "-d", "--dir")
	private var opt_source = new OptionString("link for source (%f for filename, %l for first line, %L for last line)", "--source")
	private var opt_sharedir = new OptionString("directory containing nitdoc assets", "--sharedir")
	private var opt_shareurl = new OptionString("use shareurl instead of copy shared files", "--shareurl")
	private var opt_nodot = new OptionBool("do not generate graphes with graphviz", "--no-dot")
	private var opt_private = new OptionBool("also generate private API", "--private")

	private var opt_custom_title = new OptionString("custom title for homepage", "--custom-title")
	private var opt_custom_menu = new OptionString("custom items added in top menu (each item must be enclosed in 'li' tags)", "--custom-menu-items")
	private var opt_custom_intro = new OptionString("custom intro text for homepage", "--custom-overview-text")
	private var opt_custom_footer = new OptionString("custom footer text", "--custom-footer-text")

	private var opt_github_upstream = new OptionString("Git branch where edited commits will be pulled into (ex: user:repo:branch)", "--github-upstream")
	private var opt_github_base_sha1 = new OptionString("Git sha1 of base commit used to create pull request", "--github-base-sha1")
	private var opt_github_gitdir = new OptionString("Git working directory used to resolve path name (ex: /home/me/myproject/)", "--github-gitdir")

	private var opt_piwik_tracker = new OptionString("Piwik tracker URL (ex: nitlanguage.org/piwik/)", "--piwik-tracker")
	private var opt_piwik_site_id = new OptionString("Piwik site ID", "--piwik-site-id")

	init do
		var opts = toolcontext.option_context
		opts.add_option(opt_dir, opt_source, opt_sharedir, opt_shareurl, opt_nodot, opt_private)
		opts.add_option(opt_custom_title, opt_custom_footer, opt_custom_intro, opt_custom_menu)
		opts.add_option(opt_github_upstream, opt_github_base_sha1, opt_github_gitdir)
		opts.add_option(opt_piwik_tracker, opt_piwik_site_id)

		var tpl = new Template
		tpl.add "Usage: nitdoc [OPTION]... <file.nit>...\n"
		tpl.add "Generates HTML pages of API documentation from Nit source files."
		toolcontext.tooldescription = tpl.write_to_string
		toolcontext.process_options(args)

		self.process_options
		self.parse(toolcontext.option_context.rest)
	end

	private fun process_options do
		if opt_private.value then
			min_visibility = none_visibility
		else
			min_visibility = protected_visibility
		end
		var gh_upstream = opt_github_upstream.value
		var gh_base_sha = opt_github_base_sha1.value
		var gh_gitdir = opt_github_gitdir.value
		if not gh_upstream == null or not gh_base_sha == null or not gh_gitdir == null then
			if gh_upstream == null or gh_base_sha == null or gh_gitdir == null then
				print "Error: Options {opt_github_upstream.names.first}, {opt_github_base_sha1.names.first} and {opt_github_gitdir.names.first} are required to enable the GitHub plugin"
				abort
			end
		end
	end

	private fun parse(arguments: Array[String]) do
		var model = new Model
		mbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = mbuilder.parse(arguments)
		if mmodules.is_empty then return
		mbuilder.run_phases
		if mmodules.length == 1 then
			mainmodule = mmodules.first
		else
			mainmodule = new MModule(model, null, "<main>", new Location(null, 0, 0, 0, 0))
			mainmodule.set_imported_mmodules(mmodules)
		end
	end

	private fun generate_nitdoc do
		init_output_dir
		overview
		search
		modules
		classes
		quicksearch_list
	end

	private fun init_output_dir do
		# location output dir
		var output_dir = opt_dir.value
		if output_dir == null then
			output_dir = "doc"
		end
		self.output_dir = output_dir
		# create destination dir if it's necessary
		if not output_dir.file_exists then output_dir.mkdir
		# locate share dir
		var sharedir = opt_sharedir.value
		if sharedir == null then
			var dir = toolcontext.nit_dir
			if dir == null then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
			sharedir = "{dir}/share/nitdoc"
			if not sharedir.file_exists then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
		end
		# copy shared files
		if opt_shareurl.value == null then
			sys.system("cp -r {sharedir.to_s}/* {output_dir.to_s}/")
		else
			sys.system("cp -r {sharedir.to_s}/resources/ {output_dir.to_s}/resources/")
		end

	end

	private fun overview do
		var overviewpage = new NitdocOverview(self)
		overviewpage.render.write_to_file("{output_dir.to_s}/index.html")
	end

	private fun search do
		var searchpage = new NitdocSearch(self)
		searchpage.render.write_to_file("{output_dir.to_s}/search.html")
	end

	private fun modules do
		for mmodule in mbuilder.model.mmodules do
			if mmodule.name == "<main>" then continue
			var modulepage = new NitdocModule(mmodule, self)
			modulepage.render.write_to_file("{output_dir.to_s}/{mmodule.nitdoc_url}")
		end
	end

	private fun classes do
		for mclass in mbuilder.model.mclasses do
			var classpage = new NitdocClass(mclass, self)
			classpage.render.write_to_file("{output_dir.to_s}/{mclass.nitdoc_url}")
		end
	end

	private fun quicksearch_list do
		var quicksearch = new QuickSearch(self)
		quicksearch.render.write_to_file("{output_dir.to_s}/quicksearch-list.js")
	end
end

# Nitdoc QuickSearch list generator
#
# Create a JSON object containing links to:
#  * modules
#  * mclasses
#  * mpropdefs
# All entities are grouped by name to make the research easier.
class QuickSearch

	private var mmodules = new HashSet[MModule]
	private var mclasses = new HashSet[MClass]
	private var mpropdefs = new HashMap[String, Set[MPropDef]]

	init(ctx: NitdocContext) do
		for mmodule in ctx.mbuilder.model.mmodules do
			if mmodule.name == "<main>" then continue
			mmodules.add mmodule
		end
		for mclass in ctx.mbuilder.model.mclasses do
			if mclass.visibility < ctx.min_visibility then continue
			mclasses.add mclass
		end
		for mproperty in ctx.mbuilder.model.mproperties do
			if mproperty.visibility < ctx.min_visibility then continue
			if mproperty isa MAttribute then continue
			if not mpropdefs.has_key(mproperty.name) then
				mpropdefs[mproperty.name] = new HashSet[MPropDef]
			end
			mpropdefs[mproperty.name].add_all(mproperty.mpropdefs)
		end
	end

	fun render: Template do
		var tpl = new Template
		tpl.add "var nitdocQuickSearchRawList=\{ "
		for mmodule in mmodules do
			tpl.add "\"{mmodule.name}\":["
			tpl.add "\{txt:\"{mmodule.full_name}\",url:\"{mmodule.nitdoc_url}\"\},"
			tpl.add "],"
		end
		for mclass in mclasses do
			var full_name = mclass.intro.mmodule.full_name
			tpl.add "\"{mclass.name}\":["
			tpl.add "\{txt:\"{full_name}\",url:\"{mclass.nitdoc_url}\"\},"
			tpl.add "],"
		end
		for mproperty, mprops in mpropdefs do
			tpl.add "\"{mproperty}\":["
			for mpropdef in mprops do
				var full_name = mpropdef.mclassdef.mclass.full_name
				tpl.add "\{txt:\"{full_name}\",url:\"{mpropdef.nitdoc_url}\"\},"
			end
			tpl.add "],"
		end
		tpl.add " \};"
		return tpl
	end
end

# Nitdoc base page
# Define page structure and properties
abstract class NitdocPage

	private var ctx: NitdocContext
	private var shareurl = "."

	init(ctx: NitdocContext) do
		self.ctx = ctx
		if ctx.opt_shareurl.value != null then shareurl = ctx.opt_shareurl.value.as(not null)
	end

	# Render the page as a html template
	fun render: Template do
		var tpl = new TplNitdocPage
		tpl.head = tpl_head
		tpl.topmenu = tpl_topmenu
		tpl.sidebar = tpl_sidebar
		tpl.content = tpl_content
		tpl.footer = tpl_footer

		tpl.body_attrs.add(new TagAttribute("data-bootstrap-share", shareurl))
		if ctx.opt_github_upstream.value != null and ctx.opt_github_base_sha1.value != null then
			tpl.body_attrs.add(new TagAttribute("data-github-upstream", ctx.opt_github_upstream.value))
			tpl.body_attrs.add(new TagAttribute("data-github-base-sha1", ctx.opt_github_base_sha1.value))
		end
		var requirejs = new TplScript
		requirejs.attrs.add(new TagAttribute("data-main", "{shareurl}/js/nitdoc"))
		requirejs.attrs.add(new TagAttribute("src", "{shareurl}/js/lib/require.js"))
		tpl.scripts.add requirejs

		# piwik tracking
		var tracker_url = ctx.opt_piwik_tracker.value
		var site_id = ctx.opt_piwik_site_id.value
		if tracker_url != null and site_id != null then
			tpl.scripts.add new TplPiwikScript(tracker_url, site_id)
		end
		return tpl
	end

	# Page title string
	fun tpl_title: String do
		if ctx.opt_custom_title.value != null then
			return ctx.opt_custom_title.value.to_s
		else
			return "Nitdoc"
		end
	end

	# Page <head> template
	fun tpl_head: TplHead do return new TplHead(tpl_title, shareurl)

	# Top menu template
	fun tpl_topmenu: TplTopMenu do
		var topmenu = new TplTopMenu
		var custom_elt = ctx.opt_custom_menu.value
		if custom_elt != null then topmenu.add_raw(custom_elt)
		return topmenu
	end

	# Page sidebar template
	# return null if no sidebar for this page
	fun tpl_sidebar: nullable TplSidebar do return null

	# Page content template
	fun tpl_content: Template is abstract

	# Page footer template
	# return null if no footer for this page
	fun tpl_footer: nullable TplFooter do
		if ctx.opt_custom_footer.value != null then
			return new TplFooter(ctx.opt_custom_footer.value.to_s)
		end
		return null
	end

	# Clickable graphviz image using dot format
	# return null if no graph for this page
	fun tpl_graph(dot: FlatBuffer, name: String, alt: String): nullable TplGraph do
		if ctx.opt_nodot.value then return null
		var output_dir = ctx.output_dir
		var file = new OFStream.open("{output_dir}/{name}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {output_dir}/{name}.png && test -f {output_dir}/{name}.s.dot && diff {output_dir}/{name}.dot {output_dir}/{name}.s.dot >/dev/null 2>&1 ; \} || \{ cp {output_dir}/{name}.dot {output_dir}/{name}.s.dot && dot -Tpng -o{output_dir}/{name}.png -Tcmapx -o{output_dir}/{name}.map {output_dir}/{name}.s.dot ; \}")
		var fmap = new IFStream.open("{output_dir}/{name}.map")
		var map = fmap.read_all
		fmap.close
		return new TplGraph(name, alt, map)
	end

	# A (source) link template for a given location
	fun tpl_showsource(location: nullable Location): nullable String
	do
		if location == null then return null
		var source = ctx.opt_source.value
		if source == null then return "({location.file.filename.simplify_path})"
		# THIS IS JUST UGLY ! (but there is no replace yet)
		var x = source.split_with("%f")
		source = x.join(location.file.filename.simplify_path)
		x = source.split_with("%l")
		source = x.join(location.line_start.to_s)
		x = source.split_with("%L")
		source = x.join(location.line_end.to_s)
		source = source.simplify_path
		return " (<a target='_blank' title='Show source' href=\"{source.to_s}\">source</a>)"
	end

	# MClassDef description template
	fun tpl_mclassdef_article(mclassdef: MClassDef): TplArticle do
		var article = mclassdef.tpl_article
		article.content = new Template
		if not mclassdef.is_intro then
			# add intro synopsys
			var intro = mclassdef.mclass.intro
			var location = intro.location
			var sourcelink = tpl_showsource(location)
			var intro_def = intro.tpl_short_definition
			intro_def.location = sourcelink
			intro_def.github_area = tpl_github(intro.full_namespace, intro.mdoc, location)
			article.content.add intro_def
		end
		# add mclassdef full description
		var location = mclassdef.location
		var sourcelink = tpl_showsource(location)
		var prop_def = mclassdef.tpl_definition
		prop_def.location = sourcelink
		prop_def.github_area = tpl_github(mclassdef.full_namespace, mclassdef.mdoc, location)
		article.content.add prop_def
		return article
	end

	# MPropDef description template
	fun tpl_mpropdef_article(mpropdef: MPropDef): TplArticle do
		var article = mpropdef.tpl_article
		article.content = new Template
		if not mpropdef.is_intro then
			# add intro synopsys
			var intro = mpropdef.mproperty.intro
			var location = intro.location
			var sourcelink = tpl_showsource(location)
			var intro_def = intro.tpl_short_definition
			intro_def.location = sourcelink
			intro_def.github_area = tpl_github(intro.full_namespace, intro.mdoc, location)
			article.content.add intro_def
		end
		# add mpropdef description
		var location = mpropdef.location
		var sourcelink = tpl_showsource(location)
		var prop_def = mpropdef.tpl_definition
		prop_def.location = sourcelink
		prop_def.github_area = tpl_github(mpropdef.full_namespace, mpropdef.mdoc, location)
		article.content.add prop_def
		return article
	end

	# Github area (for Github comment edition plugin)
	# return null if no github plugin for this page
	fun tpl_github(namespace: String, mdoc: nullable MDoc, loc: nullable Location): nullable TplGithubArea do
		if loc == null then return null
		if ctx.opt_github_gitdir.value == null then return null
		var gitdir = ctx.opt_github_gitdir.value.as(not null)
		var location = loc.github(gitdir)
		var comment: String
		if mdoc != null then
			comment = mdoc.full_comment
		else
			comment = ""
		end
		return new TplGithubArea(comment, namespace, location)
	end
end

# The overview page
# Display a list of modules contained in program
class NitdocOverview
	super NitdocPage

	private var mmodules = new Array[MModule]

	init(ctx: NitdocContext) do
		super(ctx)
		# get modules
		var mmodules = new HashSet[MModule]
		for mmodule in ctx.mbuilder.model.mmodule_importation_hierarchy do
			if mmodule.name == "<main>" then continue
			var owner = mmodule.public_owner
			if owner != null then
				mmodules.add(owner)
			else
				mmodules.add(mmodule)
			end
		end
		# sort modules
		var sorter = new MModuleNameSorter
		self.mmodules.add_all(mmodules)
		sorter.sort(self.mmodules)
	end

	redef fun tpl_title do return "Overview | {super}"

	redef fun tpl_topmenu do
		var topmenu = super
		topmenu.add_elt("#", "Overview", true)
		topmenu.add_elt("search.html", "Search", false)
		return topmenu
	end

	redef fun tpl_content do
		var tpl = new TplOverviewPage
		# title
		if ctx.opt_custom_title.value != null then
			tpl.title = ctx.opt_custom_title.value.to_s
		else
			tpl.title = "Overview"
		end
		# intro text
		if ctx.opt_custom_intro.value != null then
			tpl.text = ctx.opt_custom_intro.value.to_s
		end
		# module list
		for mmodule in mmodules do
			if mmodule.mdoc != null then
				var mtpl = new Template
				mtpl.add mmodule.tpl_link
				mtpl.add "&nbsp;"
				mtpl.add mmodule.mdoc.short_comment
				tpl.modules.add mtpl
			end
		end
		# module graph
		tpl.graph = tpl_dot
		return tpl
	end

	# Genrate dot and template for module hierarchy
	fun tpl_dot: nullable TplGraph do
		# build poset with public owners
		var poset = new POSet[MModule]
		for mmodule in mmodules do
			poset.add_node(mmodule)
			for omodule in mmodules do
				if mmodule == omodule then continue
				if mmodule.in_importation < omodule then
					poset.add_node(omodule)
					poset.add_edge(mmodule, omodule)
				end
			end
		end
		# build graph
		var op = new FlatBuffer
		op.append("digraph dep \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in poset do
			op.append("\"{mmodule.name}\"[URL=\"{mmodule.nitdoc_url}\"];\n")
			for omodule in poset[mmodule].direct_greaters do
				op.append("\"{mmodule.name}\"->\"{omodule.name}\";\n")
			end
		end
		op.append("\}\n")
		return tpl_graph(op, "dep", "Modules hierarchy")
	end
end

# The search page
# Display a list of modules, classes and properties
class NitdocSearch
	super NitdocPage

	init(ctx: NitdocContext) do super(ctx)

	redef fun tpl_title do return "Search | {super}"

	redef fun tpl_topmenu do
		var topmenu = super
		topmenu.add_elt("index.html", "Overview", false)
		topmenu.add_elt("#", "Search", true)
		return topmenu
	end

	redef fun tpl_content do
		var tpl = new TplSearchPage
		# title
		tpl.title = "Search"
		# modules list
		for mmodule in modules_list do
			tpl.modules.add mmodule.tpl_link
		end
		# classes list
		for mclass in classes_list do
			tpl.classes.add mclass.tpl_link
		end
		# properties list
		for mproperty in mprops_list do
			var m = new Template
			m.add mproperty.intro.tpl_link
			m.add " ("
			m.add mproperty.intro.mclassdef.mclass.tpl_link
			m.add ")"
			tpl.props.add m
		end
		return tpl
	end

	# Extract mmodule list to display (sorted by name)
	private fun modules_list: Array[MModule] do
		var sorted = new Array[MModule]
		for mmodule in ctx.mbuilder.model.mmodule_importation_hierarchy do
			if mmodule.name == "<main>" then continue
			sorted.add mmodule
		end
		var sorter = new MModuleNameSorter
		sorter.sort(sorted)
		return sorted
	end

	# Extract mclass list to display (sorted by name)
	private fun classes_list: Array[MClass] do
		var sorted = new Array[MClass]
		for mclass in ctx.mbuilder.model.mclasses do
			if mclass.visibility < ctx.min_visibility then continue
			sorted.add mclass
		end
		var sorter = new MClassNameSorter
		sorter.sort(sorted)
		return sorted
	end

	# Extract mproperty list to display (sorted by name)
	private fun mprops_list: Array[MProperty] do
		var sorted = new Array[MProperty]
		for mproperty in ctx.mbuilder.model.mproperties do
			if mproperty.visibility < ctx.min_visibility then continue
			if mproperty isa MAttribute then continue
			sorted.add mproperty
		end
		var sorter = new MPropertyNameSorter
		sorter.sort(sorted)
		return sorted
	end
end

# A module page
# Display the list of introduced and redefined classes in module
class NitdocModule
	super NitdocPage

	private var mmodule: MModule
	private var intro_mclassdefs: Set[MClassDef]
	private var redef_mclassdefs: Set[MClassDef]
	private var sorted_intro_mclassdefs: Array[MClassDef]
	private var sorted_redef_mclassdefs: Array[MClassDef]

	init(mmodule: MModule, ctx: NitdocContext) do
		self.mmodule = mmodule
		var sorter = new MClassDefNameSorter
		intro_mclassdefs = in_nesting_intro_mclassdefs(ctx.min_visibility)
		sorted_intro_mclassdefs = intro_mclassdefs.to_a
		sorter.sort sorted_intro_mclassdefs
		redef_mclassdefs = in_nesting_redef_mclassdefs(ctx.min_visibility)
		sorted_redef_mclassdefs = redef_mclassdefs.to_a
		sorter.sort sorted_redef_mclassdefs
		super(ctx)
	end

	redef fun tpl_title do
		if mmodule.mdoc != null then
			return "{mmodule.nitdoc_name} module | {mmodule.mdoc.short_comment} | {super}"
		else
			return "{mmodule.nitdoc_name} module | {super}"
		end
	end

	redef fun tpl_topmenu do
		var topmenu = super
		topmenu.add_elt("index.html", "Overview", false)
		topmenu.add_elt("#", "{mmodule.nitdoc_name}", true)
		topmenu.add_elt("search.html", "Search", false)
		return topmenu
	end

	redef fun tpl_sidebar do
		var sidebar = new TplSidebar
		tpl_sidebar_classes(sidebar)
		tpl_sidebar_inheritance(sidebar)
		return sidebar
	end

	# Classes to display on sidebar
	fun tpl_sidebar_classes(sidebar: TplSidebar) do
		var box = new TplSidebarBox("Class Definitions")
		var group = new TplSidebarGroup("Introductions")
		for mclassdef in sorted_intro_mclassdefs do
			tpl_sidebar_item(mclassdef, group)
		end
		box.elts.add group
		group = new TplSidebarGroup("Refinements")
		for mclassdef in sorted_redef_mclassdefs do
			if intro_mclassdefs.has(mclassdef.mclass.intro) then continue
			tpl_sidebar_item(mclassdef, group)
		end
		box.elts.add group
		sidebar.boxes.add box
	end

	# Module inheritance to display on sidebar
	fun tpl_sidebar_inheritance(sidebar: TplSidebar) do
		var box = new TplSidebarBox("Module Hierarchy")
		box.elts.add tpl_sidebar_group("Nested Modules", mmodule.in_nesting.direct_greaters.to_a)
		var dependencies = new Array[MModule]
		for dep in mmodule.in_importation.greaters do
			if dep == mmodule or
				dep.direct_owner == mmodule or
				dep.public_owner == mmodule then continue
			dependencies.add(dep)
		end
		if dependencies.length > 0 then
			box.elts.add tpl_sidebar_group("All dependencies", dependencies)
		end
		var clients = new Array[MModule]
		for dep in mmodule.in_importation.smallers do
			if dep.name == "<main>" then continue
			if dep == mmodule then continue
			clients.add(dep)
		end
		if clients.length > 0 then
			box.elts.add tpl_sidebar_group("All clients", clients)
		end
		sidebar.boxes.add box
	end

	private fun tpl_sidebar_item(mclassdef: MClassDef, group: TplSidebarGroup) do
		if mclassdef.is_intro then
			group.add_bullet("I", "Introduced", mclassdef.tpl_link_anchor, ["intro"])
		else
			group.add_bullet("R", "Redefined", mclassdef.tpl_link_anchor, ["redef"])
		end
	end

	private fun tpl_sidebar_group(name: String, elts: Array[MModule]): TplSidebarGroup do
		var group = new TplSidebarGroup(name)
		for elt in elts do
			group.add_elt(elt.tpl_link, new Array[String])
		end
		return group
	end

	redef fun tpl_content do
		var class_sorter = new MClassNameSorter
		var tpl = new TplModulePage
		tpl.title = mmodule.nitdoc_name
		tpl.subtitle = mmodule.tpl_signature
		tpl.definition = mmodule.tpl_definition
		var location = mmodule.location
		tpl.definition.location = tpl_showsource(location)
		tpl.definition.github_area = tpl_github(mmodule.full_namespace, mmodule.mdoc, location)
		tpl.graph = tpl_dot
		for mclassdef in sorted_intro_mclassdefs do tpl.intros.add tpl_mclassdef_article(mclassdef)
		for mclassdef in sorted_redef_mclassdefs do
			if intro_mclassdefs.has(mclassdef.mclass.intro) then continue
			tpl.redefs.add tpl_mclassdef_article(mclassdef)
		end
		return tpl
	end

	# Genrate dot hierarchy for class inheritance
	fun tpl_dot: nullable TplGraph do
		# build poset with public owners
		var poset = new POSet[MModule]
		for mmodule in self.mmodule.in_importation.poset do
			if mmodule.name == "<main>" then continue
			#if mmodule.public_owner != null then continue
			if not mmodule.in_importation < self.mmodule and not self.mmodule.in_importation < mmodule and mmodule != self.mmodule then continue
			poset.add_node(mmodule)
			for omodule in mmodule.in_importation.poset do
				if mmodule == omodule then continue
				if omodule.name == "<main>" then continue
				if not omodule.in_importation < self.mmodule and not self.mmodule.in_importation < omodule then continue
				if omodule.in_importation < mmodule then
					poset.add_node(omodule)
					poset.add_edge(omodule, mmodule)
				end
				if mmodule.in_importation < omodule then
					poset.add_node(omodule)
					poset.add_edge(mmodule, omodule)
				end
				#if omodule.public_owner != null then continue
				#if mmodule.in_importation < omodule then
					#poset.add_node(omodule)
					#poset.add_edge(mmodule, omodule)
				#end
			end
		end
		# build graph
		var op = new FlatBuffer
		var name = "dep_{mmodule.name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in poset do
			if mmodule == self.mmodule then
				op.append("\"{mmodule.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{mmodule.name}\"[URL=\"{mmodule.nitdoc_url}\"];\n")
			end
			for omodule in poset[mmodule].direct_greaters do
				op.append("\"{mmodule.name}\"->\"{omodule.name}\";\n")
			end
		end
		op.append("\}\n")
		return tpl_graph(op, name, "Dependency graph for module {mmodule.name}")
	end

	private fun in_nesting_intro_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mmodule in self.mmodule.in_nesting.greaters do
			res.add_all mmodule.intro_mclassdefs(min_visibility)
		end
		return res
	end

	private fun in_nesting_redef_mclassdefs(min_visibility: MVisibility): Set[MClassDef] do
		var res = new HashSet[MClassDef]
		for mmodule in self.mmodule.in_nesting.greaters do
			res.add_all mmodule.redef_mclassdefs(min_visibility)
		end
		return res
	end
end

# A class page
# Display a list properties defined or redefined for this class
class NitdocClass
	super NitdocPage

	private var mclass: MClass
	private var inherited_mpropdefs: Set[MPropDef]
	private var intro_mpropdefs: Set[MPropDef]
	private var redef_mpropdefs: Set[MPropDef]
	private var all_mpropdefs: Set[MPropDef]

	init(mclass: MClass, ctx: NitdocContext) do
		self.mclass = mclass
		super(ctx)
		intro_mpropdefs = mclass_intro_mpropdefs
		redef_mpropdefs = mclass_redef_mpropdefs
		inherited_mpropdefs = in_nesting_inherited_mpropedefs
		all_mpropdefs = new HashSet[MPropDef]
		all_mpropdefs.add_all intro_mpropdefs
		all_mpropdefs.add_all redef_mpropdefs
		all_mpropdefs.add_all inherited_mpropdefs
	end

	private fun in_nesting_inherited_mpropedefs: Set[MPropDef] do
		var res = new HashSet[MPropDef]
		var local = mclass.local_mproperties(ctx.min_visibility)
		for mprop in mclass.inherited_mproperties(ctx.mainmodule, ctx.min_visibility) do
			if local.has(mprop) then continue
			if mprop isa MMethod and mprop.is_init then continue
			res.add mprop.intro
		end
		return res
	end

	private fun mclass_intro_mpropdefs: Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mclassdef in mclass.mclassdefs do
			var owner = mclassdef.mmodule.public_owner
			if owner == null then owner = mclassdef.mmodule
			for mpropdef in mclassdef.mpropdefs do
				if not mpropdef.is_intro then continue
				if owner != mclass.public_owner then continue
				var mprop = mpropdef.mproperty
				if mprop isa MMethod and mprop.is_init and mclass.is_abstract then continue
				if mprop.visibility < ctx.min_visibility then continue
				res.add mpropdef
			end
		end
		return res
	end

	private fun mclass_redef_mpropdefs: Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mclassdef in mclass.mclassdefs do
			if mclassdef == mclass.intro then continue
			var owner = mclassdef.mmodule.public_owner
			if owner == null then owner = mclassdef.mmodule
			for mpropdef in mclassdef.mpropdefs do
				if owner == mclass.public_owner then continue
				if mpropdef.mproperty.visibility < ctx.min_visibility then continue
				res.add mpropdef
			end
		end
		return res
	end

	redef fun tpl_title do
		if mclass.mdoc != null then
			return "{mclass.nitdoc_name} class | {mclass.mdoc.short_comment} | {super}"
		else
			return "{mclass.nitdoc_name} class | {super}"
		end
	end

	redef fun tpl_topmenu do
		var topmenu = super
		var mmodule: MModule
		if mclass.public_owner == null then
			mmodule = mclass.intro_mmodule
		else
			mmodule = mclass.public_owner.as(not null)
		end
		topmenu.add_elt("index.html", "Overview", false)
		topmenu.add_elt("{mmodule.nitdoc_url}", "{mmodule.nitdoc_name}", false)
		topmenu.add_elt("#", "{mclass.nitdoc_name}", true)
		topmenu.add_elt("search.html", "Search", false)
		return topmenu
	end

	redef fun tpl_sidebar do
		var sidebar = new TplSidebar
		tpl_sidebar_properties(sidebar)
		tpl_sidebar_inheritance(sidebar)
		return sidebar
	end

	# Property list to display in sidebar
	fun tpl_sidebar_properties(sidebar: TplSidebar) do
		var kind_map = sort_by_kind(all_mpropdefs)
		var sorter = new MPropDefNameSorter
		var box = new TplSidebarBox("Properties")
		# virtual types
		var elts = kind_map["type"].to_a
		sorter.sort(elts)
		var group = new TplSidebarGroup("Virtual Types")
		for mprop in elts do
			tpl_sidebar_item(mprop, group)
		end
		box.elts.add group
		# constructors
		elts = kind_map["init"].to_a
		sorter.sort(elts)
		group = new TplSidebarGroup("Constructors")
		for mprop in elts do
			tpl_sidebar_item(mprop, group)
		end
		box.elts.add group
		# methods
		elts = kind_map["fun"].to_a
		sorter.sort(elts)
		group = new TplSidebarGroup("Methods")
		for mprop in elts do
			tpl_sidebar_item(mprop, group)
		end
		box.elts.add group
		sidebar.boxes.add box
	end

	# Class inheritance to display in sidebar
	fun tpl_sidebar_inheritance(sidebar: TplSidebar) do
		var sorted = new Array[MClass]
		var sorterp = new MClassNameSorter
		var box = new TplSidebarBox("Inheritance")
		var greaters = mclass.in_hierarchy(ctx.mainmodule).greaters.to_a
		if greaters.length > 1 then
			ctx.mainmodule.linearize_mclasses(greaters)
			box.elts.add tpl_sidebar_group("Superclasses", greaters)
		end
		var smallers = mclass.in_hierarchy(ctx.mainmodule).smallers.to_a
		var direct_smallers = mclass.in_hierarchy(ctx.mainmodule).direct_smallers.to_a
		if smallers.length <= 1 then
			box.elts.add(new TplSidebarGroup("No Known Subclasses"))
		else if smallers.length <= 100 then
			ctx.mainmodule.linearize_mclasses(smallers)
			box.elts.add tpl_sidebar_group("Subclasses", smallers)
		else if direct_smallers.length <= 100 then
			ctx.mainmodule.linearize_mclasses(direct_smallers)
			box.elts.add tpl_sidebar_group("Direct Subclasses Only", direct_smallers)
		else
			box.elts.add(new TplSidebarGroup("Too much Subclasses to list"))
		end
		sidebar.boxes.add box
	end

	private fun tpl_sidebar_item(mprop: MPropDef, group: TplSidebarGroup) do
		if mprop.is_intro and mprop.mclassdef.mclass == mclass then
			group.add_bullet("I", "Introduced", mprop.tpl_link, ["intro"])
		else if mprop.is_intro and mprop.mclassdef.mclass != mclass then
			group.add_bullet("H", "Inherited", mprop.tpl_link, ["inherit"])
		else
			group.add_bullet("R", "Redefined", mprop.tpl_link, ["redef"])
		end
	end

	private fun tpl_sidebar_group(name: String, elts: Array[MClass]): TplSidebarGroup do
		var group = new TplSidebarGroup(name)
		for elt in elts do
			if elt == mclass then continue
			group.add_elt(elt.tpl_link, new Array[String])
		end
		return group
	end

	redef fun tpl_content do
		var intro = mclass.intro
		var tpl = new TplClassPage
		tpl.title = "{mclass.nitdoc_name}{mclass.tpl_short_signature}"
		tpl.subtitle = mclass.tpl_namespace_with_signature
		tpl.definition = intro.tpl_definition
		var location = intro.location
		tpl.definition.location = tpl_showsource(location)
		tpl.definition.github_area = tpl_github(intro.full_namespace, intro.mdoc, location)
		tpl.graph = tpl_dot

		# properties
		var prop_sorter = new MPropDefNameSorter
		var kind_map = sort_by_kind(intro_mpropdefs)

		# virtual types
		var elts = kind_map["type"].to_a
		prop_sorter.sort(elts)
		for elt in elts do tpl.types.add tpl_mpropdef_article(elt)

		# constructors
		elts = kind_map["init"].to_a
		prop_sorter.sort(elts)
		for elt in elts do tpl.inits.add tpl_mpropdef_article(elt)

		# intro methods
		elts = kind_map["fun"].to_a
		prop_sorter.sort(elts)
		for elt in elts do tpl.methods.add tpl_mpropdef_article(elt)

		# redef methods
		kind_map = sort_by_kind(redef_mpropdefs)
		var module_sorter = new MModuleNameSorter
		var module_map = sort_by_mmodule(kind_map["fun"])
		var owner_map = sort_by_public_owner(module_map.keys)
		var owners = owner_map.keys.to_a
		module_sorter.sort owners

		var ctpl = new TplConcernList
		var mtpl = new Template
		for owner in owners do
			# concerns list
			var octpl = new TplConcernListElt
			octpl.anchor = "#{owner.nitdoc_anchor}"
			octpl.name = owner.nitdoc_name
			if owner.mdoc != null then
				octpl.comment = owner.mdoc.short_comment
			end
			ctpl.elts.add octpl
			# concern section
			var otpl = new TplTopConcern
			otpl.anchor = owner.nitdoc_anchor
			otpl.concern = owner.tpl_link
			mtpl.add otpl

			var mmodules = owner_map[owner].to_a
			module_sorter.sort mmodules
			var stpl = new TplConcernList
			for mmodule in mmodules do
				# concerns list
				if mmodule != owner then
					var mctpl = new TplConcernListElt
					mctpl.anchor = "#{mmodule.nitdoc_anchor}"
					mctpl.name = mmodule.nitdoc_name
					if mmodule.mdoc != null then
						mctpl.comment = mmodule.mdoc.short_comment
					end
					stpl.elts.add mctpl
					# concern section
					var cctpl = new TplConcern
					cctpl.anchor = mmodule.nitdoc_anchor
					cctpl.concern = mmodule.tpl_link
					if mmodule.mdoc != null then
						cctpl.comment = mmodule.mdoc.short_comment
					end
					mtpl.add cctpl
				end
				var mprops = module_map[mmodule].to_a
				prop_sorter.sort mprops
				for mprop in mprops do mtpl.add tpl_mpropdef_article(mprop)
			end
			ctpl.elts.add stpl
		end
		if not owners.is_empty then
			tpl.concerns = ctpl
		end
		tpl.methods.add mtpl
		return tpl
	end

	private fun sort_by_kind(mpropdefs: Set[MPropDef]): Map[String, Set[MPropDef]] do
		var map = new HashMap[String, Set[MPropDef]]
		map["type"] = new HashSet[MPropDef]
		map["init"] = new HashSet[MPropDef]
		map["fun"] = new HashSet[MPropDef]
		for mpropdef in mpropdefs do
			if mpropdef isa MVirtualTypeDef then
				map["type"].add mpropdef
			else if mpropdef isa MMethodDef then
				if mpropdef.mproperty.is_init then
					map["init"].add mpropdef
				else
					map["fun"].add mpropdef
				end
			end
		end
		return map
	end

	private fun sort_by_mmodule(mpropdefs: Collection[MPropDef]): Map[MModule, Set[MPropDef]] do
		var map = new HashMap[MModule, Set[MPropDef]]
		for mpropdef in mpropdefs do
			var mmodule = mpropdef.mclassdef.mmodule
			if not map.has_key(mmodule) then map[mmodule] = new HashSet[MPropDef]
			map[mmodule].add mpropdef
		end
		return map
	end

	private fun sort_by_public_owner(mmodules: Collection[MModule]): Map[MModule, Set[MModule]] do
		var map = new HashMap[MModule, Set[MModule]]
		for mmodule in mmodules do
			var owner = mmodule
			if mmodule.public_owner != null then owner = mmodule.public_owner.as(not null)
			if not map.has_key(owner) then map[owner] = new HashSet[MModule]
			map[owner].add mmodule
		end
		return map
	end

	# Generate dot hierarchy for classes
	fun tpl_dot: nullable TplGraph do
		var pe = mclass.in_hierarchy(ctx.mainmodule)
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

		var op = new FlatBuffer
		var name = "dep_{mclass.name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for c in cla do
			if c == mclass then
				op.append("\"{c.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name}\"[URL=\"{c.nitdoc_url}\"];\n")
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
		return tpl_graph(op, name, "Dependency graph for class {mclass.name}")
	end
end

#
# Model redefs
#

redef class MModule
	# Return the HTML escaped name of the module
	private fun nitdoc_name: String do return name.html_escape

	private fun full_namespace: String do
		if public_owner != null then
			return "{public_owner.nitdoc_name}::{nitdoc_name}"
		end
		return nitdoc_name
	end

	# URL to nitdoc page
	#	module_owner_name.html
	private fun nitdoc_url: String do
		var res = new FlatBuffer
		res.append("module_")
		var mowner = public_owner
		if mowner != null then
			res.append("{public_owner.name}_")
		end
		res.append("{self.name}.html")
		return res.to_s
	end

	# html nitdoc_anchor id for the module in a nitdoc page
	#	MOD_owner_name
	private fun nitdoc_anchor: String do
		var res = new FlatBuffer
		res.append("MOD_")
		var mowner = public_owner
		if mowner != null then
			res.append("{public_owner.name}_")
		end
		res.append(self.name)
		return res.to_s
	end

	# Return a link (html a tag) to the nitdoc module page
	private fun tpl_link: TplLink do
		var tpl = new TplLink
		tpl.href = nitdoc_url
		tpl.text = nitdoc_name
		if mdoc != null then
			tpl.title = mdoc.short_comment
		end
		return tpl
	end

	# Return the module signature decorated with html
	private fun tpl_signature: Template do
		var tpl = new Template
		tpl.add "<span>module "
		tpl.add tpl_full_namespace
		tpl.add "</span>"
		return tpl
	end

	# Return the module full namespace decorated with html
	private fun tpl_full_namespace: Template do
		var tpl = new Template
		tpl.add ("<span>")
		var mowner = public_owner
		if mowner != null then
			tpl.add public_owner.tpl_namespace
			tpl.add "::"
		end
		tpl.add tpl_link
		tpl.add "</span>"
		return tpl
	end

	# Return the module full namespace decorated with html
	private fun tpl_namespace: Template do
		var tpl = new Template
		tpl.add "<span>"
		var mowner = public_owner
		if mowner != null then
			tpl.add public_owner.tpl_namespace
		else
			tpl.add tpl_link
		end
		tpl.add "</span>"
		return tpl
	end

	# Description with short comment
	private fun tpl_short_definition: TplDefinition do
		var tpl = new TplDefinition
		tpl.namespace = tpl_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_short_comment
		end
		return tpl
	end

	# Description with full comment
	private fun tpl_definition: TplDefinition do
		var tpl = new TplDefinition
		tpl.namespace = tpl_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end
end

redef class MClass
	# Return the HTML escaped name of the module
	private fun nitdoc_name: String do return name.html_escape

	# URL to nitdoc page
	#	class_owner_name.html
	private fun nitdoc_url: String do
		return "class_{public_owner}_{name}.html"
	end

	# html nitdoc_anchor id for the class in a nitdoc page
	#	MOD_owner_name
	private fun nitdoc_anchor: String do
		return "CLASS_{public_owner.name}_{name}"
	end

	# Return a link (with signature) to the nitdoc class page
	private fun tpl_link: TplLink do
		var tpl = new TplLink
		tpl.href = nitdoc_url
		tpl.text = "{nitdoc_name}{tpl_short_signature.write_to_string}"
		if intro.mdoc != null then
			tpl.title = intro.mdoc.short_comment
		end
		return tpl
	end

	# Return a short link (without signature) to the nitdoc class page
	private fun tpl_short_link: TplLink do
		var tpl = new TplLink
		tpl.href = nitdoc_url
		tpl.text = nitdoc_name
		if intro.mdoc != null then
			tpl.title = intro.mdoc.short_comment
		end
		return tpl
	end

	# Return a link (with signature) to the class nitdoc_anchor
	private fun tpl_link_anchor: TplLink do
		var tpl = new TplLink
		tpl.href = "#{nitdoc_anchor}"
		tpl.text = "{nitdoc_name}{tpl_short_signature.write_to_string}"
		if intro.mdoc != null then
			tpl.title = intro.mdoc.short_comment
		end
		return tpl
	end

	# Return the generic signature of the class with bounds
	private fun tpl_signature: Template do
		var tpl = new Template
		if arity > 0 then
			tpl.add "["
			for i in [0..intro.parameter_names.length[ do
				tpl.add "{intro.parameter_names[i]}: "
				tpl.add intro.bound_mtype.arguments[i].tpl_link
				if i < intro.parameter_names.length - 1 then tpl.add ", "
			end
			tpl.add "]"
		end
		return tpl
	end

	# Return the generic signature of the class without bounds
	private fun tpl_short_signature: String do
		if arity > 0 then
			return "[{intro.parameter_names.join(", ")}]"
		else
			return ""
		end
	end

	# Return the class namespace decorated with html
	private fun tpl_namespace: Template do
		var tpl = new Template
		tpl.add intro_mmodule.tpl_namespace
		tpl.add "::<span>"
		tpl.add tpl_short_link
		tpl.add "</span>"
		return tpl
	end

	private fun tpl_namespace_with_signature: Template do
		var tpl = new Template
		tpl.add intro.tpl_modifiers
		tpl.add intro.mmodule.tpl_namespace
		tpl.add "::"
		tpl.add nitdoc_name
		tpl.add tpl_signature
		return tpl
	end
end

redef class MProperty
	# Escape name for html output
	private fun nitdoc_name: String do return name.html_escape

	# Return the property namespace decorated with html
	private fun tpl_namespace: Template do
		var tpl = new Template
		tpl.add intro_mclassdef.mclass.tpl_namespace
		tpl.add intro_mclassdef.mclass.tpl_short_signature
		tpl.add "::<span>"
		tpl.add intro.tpl_link
		tpl.add "</span>"
		return tpl
	end

	private fun tpl_signature: Template is abstract
end

redef class MMethod
	redef fun tpl_signature do return intro.msignature.tpl_signature
end

redef class MVirtualTypeProp
	redef fun tpl_signature do
		var tpl = new Template
		tpl.add ": "
		tpl.add  intro.bound.tpl_link
		return tpl
	end
end

redef class MType
	# Link to the type definition in the nitdoc page
	private fun tpl_link: Template is abstract
end

redef class MClassType
	redef fun tpl_link do return mclass.tpl_link
end

redef class MNullableType
	redef fun tpl_link do
		var tpl = new Template
		tpl.add "nullable "
		tpl.add mtype.tpl_link
		return tpl
	end
end

redef class MGenericType
	redef fun tpl_link: Template do
		var tpl = new Template
		tpl.add mclass.tpl_short_link
		tpl.add "["
		for i in [0..arguments.length[ do
			tpl.add arguments[i].tpl_link
			if i < arguments.length - 1 then tpl.add ", "
		end
		tpl.add "]"
		return tpl
	end
end

redef class MParameterType
	redef fun tpl_link do
		var name = mclass.intro.parameter_names[rank]
		var tpl = new TplLink
		tpl.href = "{mclass.nitdoc_url}#FT_{name}"
		tpl.text = name
		tpl.title = "formal type"
		return tpl
	end
end

redef class MVirtualType
	redef fun tpl_link do return mproperty.intro.tpl_link
end

redef class MClassDef
	# Return the classdef namespace decorated with html
	private fun tpl_namespace: Template do
		var tpl = new Template
		tpl.add mmodule.tpl_namespace
		tpl.add "::<span>"
		tpl.add mclass.tpl_link
		tpl.add "</span>"
		return tpl
	end

	private fun full_namespace: String do
		return "{mmodule.full_namespace}::{mclass.nitdoc_name}"
	end

	private fun tpl_link_anchor: TplLink do return mclass.tpl_link_anchor

	private fun tpl_article: TplArticle do
		var tpl = new TplArticle
		tpl.id = mclass.nitdoc_anchor
		tpl.classes.add_all(tpl_css_classes)
		tpl.title = new Template
		tpl.title.add mclass.tpl_short_link
		tpl.title.add mclass.tpl_signature
		tpl.subtitle = new Template
		tpl.subtitle.add tpl_modifiers
		tpl.subtitle.add tpl_namespace
		tpl.content = new Template
		tpl.content.add tpl_definition
		return tpl
	end

	private fun tpl_css_classes: Set[String] do
		var set = new HashSet[String]
		set.add_all mclass.intro.modifiers
		set.add_all modifiers
		return set
	end

	private fun tpl_modifiers: Template do
		var tpl = new Template
		for modifier in modifiers do
			if modifier == "public" then continue
			tpl.add "{modifier} "
		end
		return tpl
	end

	private fun tpl_short_definition: TplDefinition do
		var tpl = new TplDefinition
		tpl.namespace = mmodule.tpl_full_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_short_comment
		end
		return tpl
	end

	private fun tpl_definition: TplDefinition do
		var tpl = new TplDefinition
		tpl.namespace = mmodule.tpl_full_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end
end

redef class MPropDef
	# Return the full qualified name of the mpropdef
	#	module::classdef::name
	private fun tpl_namespace: Template do
		var tpl = new Template
		tpl.add mclassdef.tpl_namespace
		tpl.add "::"
		tpl.add mproperty.name
		return tpl
	end

	private fun full_namespace: String do
		return "{mclassdef.full_namespace}::{mproperty.nitdoc_name}"
	end

	# URL into the nitdoc page
	#	class_owner_name.html#nitdoc_anchor
	private fun nitdoc_url: String do
		return "{mclassdef.mclass.nitdoc_url}#{nitdoc_anchor}"
	end

	# html nitdoc_anchor id for the property in a nitdoc class page
	#	PROP_mclass_propertyname
	private fun nitdoc_anchor: String do
		return "PROP_{mclassdef.mclass.public_owner.nitdoc_name}_{mproperty.name.replace(" ", "_")}"
	end

	# Return a link to property into the nitdoc class page
	#	<a href="nitdoc_url" title="short_comment">nitdoc_name</a>
	private fun tpl_link: TplLink do
		var tpl = new TplLink
		tpl.href = nitdoc_url
		tpl.text = mproperty.nitdoc_name
		if mproperty.intro.mdoc != null then
			tpl.title = mproperty.intro.mdoc.short_comment
		end
		return tpl
	end

	private fun tpl_article: TplArticle do
		var tpl = new TplArticle
		tpl.id = nitdoc_anchor
		tpl.classes.add_all(tpl_css_classes)
		tpl.title = new Template
		tpl.title.add mproperty.nitdoc_name
		tpl.title.add mproperty.tpl_signature
		tpl.subtitle = new Template
		tpl.subtitle.add tpl_modifiers
		tpl.subtitle.add tpl_namespace
		tpl.content = new Template
		tpl.content.add tpl_definition
		return tpl
	end

	private fun tpl_css_classes: Set[String] do
		var set = new HashSet[String]
		set.add_all mproperty.intro.modifiers
		set.add_all modifiers
		return set
	end

	private fun tpl_modifiers: Template do
		var tpl = new Template
		for modifier in modifiers do
			if modifier == "public" then continue
			tpl.add "{modifier} "
		end
		return tpl
	end

	private fun tpl_short_definition: TplDefinition do
		var tpl = new TplDefinition
		tpl.namespace = mclassdef.tpl_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_short_comment
		end
		return tpl
	end

	private fun tpl_definition: TplDefinition do
		var tpl = new TplDefinition
		tpl.namespace = mclassdef.tpl_namespace
		if mdoc != null then
			tpl.comment = mdoc.tpl_comment
		end
		return tpl
	end
end

redef class MSignature
	private fun tpl_signature: Template do
		var tpl = new Template
		if not mparameters.is_empty then
			tpl.add "("
			for i in [0..mparameters.length[ do
				tpl.add mparameters[i].tpl_link
				if i < mparameters.length - 1 then tpl.add ", "
			end
			tpl.add ")"
		end
		if return_mtype != null then
			tpl.add ": "
			tpl.add return_mtype.tpl_link
		end
		return tpl
	end
end

redef class MParameter
	private fun tpl_link: Template do
		var tpl = new Template
		tpl.add "{name}: "
		tpl.add mtype.tpl_link
		if is_vararg then tpl.add "..."
		return tpl
	end
end

redef class Location
	fun github(gitdir: String): String do
		var base_dir = getcwd.join_path(gitdir).simplify_path
		var file_loc = getcwd.join_path(file.filename).simplify_path
		var gith_loc = file_loc.substring(base_dir.length + 1, file_loc.length)
		return "{gith_loc}:{line_start},{column_start}--{line_end},{column_end}"
	end
end

redef class MDoc
	private fun short_comment: String do
		return content.first.html_escape
	end

	private fun full_comment: String do
		return content.join("\n").html_escape
	end

	private fun tpl_short_comment: TplShortComment do
		return new TplShortComment(short_markdown)
	end

	private fun tpl_comment: TplComment do
		return new TplComment(full_markdown)
	end
end

var nitdoc = new NitdocContext
nitdoc.generate_nitdoc

