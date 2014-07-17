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

# Nitdoc page generation
module doc_pages

import toolcontext
import doc_model

# The NitdocContext contains all the knowledge used for doc generation
class NitdocContext
	private var opt_dir = new OptionString("output directory", "-d", "--dir")
	private var opt_source = new OptionString("link for source (%f for filename, %l for first line, %L for last line)", "--source")
	private var opt_sharedir = new OptionString("directory containing nitdoc assets", "--sharedir")
	private var opt_shareurl = new OptionString("use shareurl instead of copy shared files", "--shareurl")
	private var opt_nodot = new OptionBool("do not generate graphes with graphviz", "--no-dot")
	private var opt_private = new OptionBool("also generate private API", "--private")

	private var opt_custom_title = new OptionString("custom title for homepage", "--custom-title")
	private var opt_custom_brand = new OptionString("custom link to external site", "--custom-brand")
	private var opt_custom_intro = new OptionString("custom intro text for homepage", "--custom-overview-text")
	private var opt_custom_footer = new OptionString("custom footer text", "--custom-footer-text")

	private var opt_github_upstream = new OptionString("Git branch where edited commits will be pulled into (ex: user:repo:branch)", "--github-upstream")
	private var opt_github_base_sha1 = new OptionString("Git sha1 of base commit used to create pull request", "--github-base-sha1")
	private var opt_github_gitdir = new OptionString("Git working directory used to resolve path name (ex: /home/me/myproject/)", "--github-gitdir")

	private var opt_piwik_tracker = new OptionString("Piwik tracker URL (ex: nitlanguage.org/piwik/)", "--piwik-tracker")
	private var opt_piwik_site_id = new OptionString("Piwik site ID", "--piwik-site-id")

	private var output_dir: String
	private var min_visibility: MVisibility
	var toolcontext: ToolContext

	init(toolcontext: ToolContext) do
		self.toolcontext = toolcontext

		var opts = toolcontext.option_context
		opts.add_option(opt_dir, opt_source, opt_sharedir, opt_shareurl, opt_nodot, opt_private)
		opts.add_option(opt_custom_title, opt_custom_footer, opt_custom_intro, opt_custom_brand)
		opts.add_option(opt_github_upstream, opt_github_base_sha1, opt_github_gitdir)
		opts.add_option(opt_piwik_tracker, opt_piwik_site_id)

		var tpl = new Template
		tpl.add "Usage: nitdoc [OPTION]... <file.nit>...\n"
		tpl.add "Generates HTML pages of API documentation from Nit source files."
		toolcontext.tooldescription = tpl.write_to_string
	end

	fun process_options(args: Sequence[String]) do
		toolcontext.process_options(args)
		# output dir
		var output_dir = opt_dir.value
		if output_dir == null then
			output_dir = "doc"
		end
		self.output_dir = output_dir
		# min visibility
		if opt_private.value then
			min_visibility = none_visibility
		else
			min_visibility = protected_visibility
		end
		# github urls
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
end

# The Nitdoc class explores the model and generate pages for each mentities found
class Nitdoc
	var model: Model
	var mainmodule: MModule
	var ctx: NitdocContext

	init(ctx: NitdocContext, model: Model, mainmodule: MModule) do
		self.ctx = ctx
		self.model = model
		self.mainmodule = mainmodule
	end

	fun generate do
		init_output_dir
		overview
		search
		groups
		modules
		classes
		properties
		quicksearch_list
	end

	private fun init_output_dir do
		# create destination dir if it's necessary
		var output_dir = ctx.output_dir
		if not output_dir.file_exists then output_dir.mkdir
		# locate share dir
		var sharedir = ctx.opt_sharedir.value
		if sharedir == null then
			var dir = ctx.toolcontext.nit_dir
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
		if ctx.opt_shareurl.value == null then
			sys.system("cp -r {sharedir.to_s}/* {output_dir.to_s}/")
		else
			sys.system("cp -r {sharedir.to_s}/resources/ {output_dir.to_s}/resources/")
		end

	end

	private fun overview do
		var overviewpage = new NitdocOverview(ctx, model, mainmodule)
		overviewpage.render.write_to_file("{ctx.output_dir.to_s}/index.html")
	end

	private fun search do
		var searchpage = new NitdocSearch(ctx, model, mainmodule)
		searchpage.render.write_to_file("{ctx.output_dir.to_s}/search.html")
	end

	private fun groups do
		for mproject in model.mprojects do
			for mgroup in mproject.mgroups.to_a do
				var page = new NitdocGroup(ctx, model, mainmodule, mgroup)
				page.render.write_to_file("{ctx.output_dir.to_s}/{mgroup.nitdoc_url}")
			end
		end
	end

	private fun modules do
		for mmodule in model.mmodules do
			if mmodule.name == "<main>" then continue
			var modulepage = new NitdocModule(ctx, model, mainmodule, mmodule)
			modulepage.render.write_to_file("{ctx.output_dir.to_s}/{mmodule.nitdoc_url}")
		end
	end

	private fun classes do
		for mclass in model.mclasses do
			var classpage = new NitdocClass(ctx, model, mainmodule, mclass)
			classpage.render.write_to_file("{ctx.output_dir.to_s}/{mclass.nitdoc_url}")
		end
	end

	private fun properties do
		for mproperty in model.mproperties do
			var page = new NitdocProperty(ctx, model, mainmodule, mproperty)
			page.render.write_to_file("{ctx.output_dir.to_s}/{mproperty.nitdoc_url}")
		end
	end

	private fun quicksearch_list do
		var quicksearch = new QuickSearch(ctx, model)
		quicksearch.render.write_to_file("{ctx.output_dir.to_s}/quicksearch-list.js")
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

	init(ctx: NitdocContext, model: Model) do
		for mmodule in model.mmodules do
			if mmodule.name == "<main>" then continue
			mmodules.add mmodule
		end
		for mclass in model.mclasses do
			if mclass.visibility < ctx.min_visibility then continue
			mclasses.add mclass
		end
		for mproperty in model.mproperties do
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
	private var model: Model
	private var mainmodule: MModule
	private var name_sorter = new MEntityNameSorter

	init(ctx: NitdocContext, model: Model, mainmodule: MModule) do
		self.ctx = ctx
		self.model = model
		self.mainmodule = mainmodule
	end

	# Render the page as a html template
	fun render: Template do
		var shareurl = "."
		if ctx.opt_shareurl.value != null then
			shareurl = ctx.opt_shareurl.value.as(not null)
		end

		# build page
		var tpl = tpl_page
		tpl.title = tpl_title
		tpl.shareurl = shareurl
		tpl.topmenu = tpl_topmenu
		tpl_content
		tpl.footer = ctx.opt_custom_footer.value
		tpl.body_attrs.add(new TagAttribute("data-bootstrap-share", shareurl))
		tpl.sidebar = tpl_sidebar

		# piwik tracking
		var tracker_url = ctx.opt_piwik_tracker.value
		var site_id = ctx.opt_piwik_site_id.value
		if tracker_url != null and site_id != null then
			tpl.scripts.add new TplPiwikScript(tracker_url, site_id)
		end
		return tpl
	end

	# Build page template
	fun tpl_page: TplPage is abstract

	# Build page sidebar if any
	fun tpl_sidebar: nullable TplSidebar do return null

	# Build page title string
	fun tpl_title: String do
		if ctx.opt_custom_title.value != null then
			return ctx.opt_custom_title.value.to_s
		end
		return "Nitdoc"
	end

	# Build top menu template
	fun tpl_topmenu: TplTopMenu do
		var topmenu = new TplTopMenu
		var brand = ctx.opt_custom_brand.value
		if brand != null then
			var tpl = new Template
			tpl.add "<span class='navbar-brand'>"
			tpl.add brand
			tpl.add "</span>"
			topmenu.brand = tpl
		end
		return topmenu
	end

	# Build page content template
	fun tpl_content is abstract

	# Clickable graphviz image using dot format
	# return null if no graph for this page
	fun tpl_graph(dot: FlatBuffer, name: String, title: nullable String): nullable TplArticle do
		if ctx.opt_nodot.value then return null
		var output_dir = ctx.output_dir
		var file = new OFStream.open("{output_dir}/{name}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {output_dir}/{name}.png && test -f {output_dir}/{name}.s.dot && diff {output_dir}/{name}.dot {output_dir}/{name}.s.dot >/dev/null 2>&1 ; \} || \{ cp {output_dir}/{name}.dot {output_dir}/{name}.s.dot && dot -Tpng -o{output_dir}/{name}.png -Tcmapx -o{output_dir}/{name}.map {output_dir}/{name}.s.dot ; \}")
		var fmap = new IFStream.open("{output_dir}/{name}.map")
		var map = fmap.read_all
		fmap.close

		var article = new TplArticle("graph")
		var alt = ""
		if title != null then
			article.title = title
			alt = "alt='{title}'"
		end
		article.css_classes.add "text-center"
		var content = new Template
		content.add "<img src='{name}.png' usemap='#{name}' style='margin:auto' {alt}/>"
		content.add map
		article.content = content
		return article
	end

	# A (source) link template for a given location
	fun tpl_showsource(location: nullable Location): nullable String
	do
		if location == null then return null
		var source = ctx.opt_source.value
		if source == null then return "{location.file.filename.simplify_path}"
		# THIS IS JUST UGLY ! (but there is no replace yet)
		var x = source.split_with("%f")
		source = x.join(location.file.filename.simplify_path)
		x = source.split_with("%l")
		source = x.join(location.line_start.to_s)
		x = source.split_with("%L")
		source = x.join(location.line_end.to_s)
		source = source.simplify_path
		return "<a target='_blank' title='Show source' href=\"{source.to_s}\">View Source</a>"
	end

	# MProject description template
	fun tpl_mproject_article(mproject: MProject): TplArticle do
		var article = mproject.tpl_article
		article.subtitle = mproject.tpl_declaration
		article.content = mproject.tpl_definition
		if mproject.mdoc != null then
			article.content = mproject.mdoc.tpl_short_comment
		end
		return article
	end

	# MGroup description template
	fun tpl_mgroup_article(mgroup: MGroup): TplArticle do
		var article = mgroup.tpl_article
		article.subtitle = mgroup.tpl_declaration
		article.content = mgroup.tpl_definition
		return article
	end

	# MModule description template
	fun tpl_mmodule_article(mmodule: MModule): TplArticle do
		var article = mmodule.tpl_article
		article.subtitle = mmodule.tpl_declaration
		article.content = mmodule.tpl_definition
		# mclassdefs list
		var intros = mmodule.intro_mclassdefs(ctx.min_visibility).to_a
		mainmodule.linearize_mclassdefs(intros)
		var intros_art = new TplArticle.with_title("{mmodule.nitdoc_id}_intros", "Introduces")
		var intros_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mclassdef in intros do
			intros_lst.add_li new TplListItem.with_content(mclassdef.tpl_list_item)
		end
		if not intros_lst.is_empty then
			intros_art.content = intros_lst
			article.add_child intros_art
		end
		var redefs = mmodule.redef_mclassdefs(ctx.min_visibility).to_a
		mainmodule.linearize_mclassdefs(redefs)
		var redefs_art = new TplArticle.with_title("{mmodule.nitdoc_id}_redefs", "Redefines")
		var redefs_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mclassdef in redefs do
			redefs_lst.add_li new TplListItem.with_content(mclassdef.tpl_list_item)
		end
		if not redefs_lst.is_empty then
			redefs_art.content = redefs_lst
			article.add_child redefs_art
		end
		return article
	end

	# MClassDef description template
	fun tpl_mclass_article(mclass: MClass, mclassdefs: Array[MClassDef]): TplArticle do
		var article = mclass.tpl_article
		if not mclassdefs.has(mclass.intro) then
			# add intro synopsys
			var intro_article = mclass.intro.tpl_short_article
			intro_article.source_link = tpl_showsource(mclass.intro.location)
			article.add_child intro_article
		end
		mainmodule.linearize_mclassdefs(mclassdefs)
		for mclassdef in mclassdefs do
			# add mclassdef full description
			var redef_article = mclassdef.tpl_article
			redef_article.source_link = tpl_showsource(mclassdef.location)
			article.add_child redef_article
			# mpropdefs list
			var intros = new TplArticle.with_title("{mclassdef.nitdoc_id}_intros", "Introduces")
			var intros_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for mpropdef in mclassdef.collect_intro_mpropdefs(ctx.min_visibility) do
				intros_lst.add_li new TplListItem.with_content(mpropdef.tpl_list_item)
			end
			if not intros_lst.is_empty then
				intros.content = intros_lst
				redef_article.add_child intros
			end
			var redefs = new TplArticle.with_title("{mclassdef.nitdoc_id}_redefs", "Redefines")
			var redefs_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for mpropdef in mclassdef.collect_redef_mpropdefs(ctx.min_visibility) do
				redefs_lst.add_li new TplListItem.with_content(mpropdef.tpl_list_item)
			end
			if not redefs_lst.is_empty then
				redefs.content = redefs_lst
				redef_article.add_child redefs
			end
		end
		return article
	end

	# MClassDef description template
	fun tpl_mclassdef_article(mclassdef: MClassDef): TplArticle do
		var article = mclassdef.tpl_article
		if mclassdef.is_intro then article.content = null
		article.source_link = tpl_showsource(mclassdef.location)
		return article
	end

	# MProp description template
	fun tpl_mprop_article(mproperty: MProperty, mpropdefs: Array[MPropDef]): TplArticle do
		var article = mproperty.tpl_article
		if not mpropdefs.has(mproperty.intro) then
			# add intro synopsys
			var intro_article = mproperty.intro.tpl_short_article
			intro_article.source_link = tpl_showsource(mproperty.intro.location)
			article.add_child intro_article
		end
		mainmodule.linearize_mpropdefs(mpropdefs)
		for mpropdef in mpropdefs do
			# add mpropdef description
			var redef_article = mpropdef.tpl_article
			redef_article.source_link = tpl_showsource(mpropdef.location)
			article.add_child redef_article
		end
		return article
	end

	# MProperty description template
	fun tpl_mpropdef_article(mpropdef: MPropDef): TplArticle do
		var article = mpropdef.tpl_article
		if mpropdef.is_intro then article.content = null
		article.source_link = tpl_showsource(mpropdef.location)
		return article
	end
end

# The overview page
# Display a list of modules contained in program
class NitdocOverview
	super NitdocPage

	private var page = new TplPage
	redef fun tpl_page do return page

	private var sidebar = new TplSidebar
	redef fun tpl_sidebar do return sidebar

	redef fun tpl_title do
		if ctx.opt_custom_title.value != null then
			return ctx.opt_custom_title.value.to_s
		else
			return "Overview"
		end
	end

	redef fun tpl_topmenu do
		var topmenu = super
		topmenu.add_item(new TplLink("#", "Overview"), true)
		topmenu.add_item(new TplLink("search.html", "Index"), false)
		return topmenu
	end

	# intro text
	private fun tpl_intro: TplSection do
		var section = new TplSection.with_title("overview", tpl_title)
		var article = new TplArticle("intro")
		if ctx.opt_custom_intro.value != null then
			article.content = ctx.opt_custom_intro.value.to_s
		end
		section.add_child article
		return section
	end

	# projects list
	private fun tpl_projects(section: TplSection) do
		# Projects list
		var mprojects = model.mprojects.to_a
		var sorter = new MConcernRankSorter
		sorter.sort mprojects
		var ssection = new TplSection.with_title("projects", "Projects")
		for mproject in mprojects do
			ssection.add_child tpl_mproject_article(mproject)
		end
		section.add_child ssection
	end

	redef fun tpl_content do
		var top = tpl_intro
		tpl_projects(top)
		tpl_page.add_section top
	end
end

# The search page
# Display a list of modules, classes and properties
class NitdocSearch
	super NitdocPage

	private var page = new TplPage
	redef fun tpl_page do return page

	redef fun tpl_title do return "Index"

	redef fun tpl_topmenu do
		var topmenu = super
		topmenu.add_item(new TplLink("index.html", "Overview"), false)
		topmenu.add_item(new TplLink("#", "Index"), true)
		return topmenu
	end

	redef fun tpl_content do
		var tpl = new TplSearchPage("search_all")
		var section = new TplSection("search")
		# title
		tpl.title = "Index"
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
		section.add_child tpl
		tpl_page.add_section section
	end

	# Extract mmodule list to display (sorted by name)
	private fun modules_list: Array[MModule] do
		var sorted = new Array[MModule]
		for mmodule in model.mmodule_importation_hierarchy do
			if mmodule.name == "<main>" then continue
			sorted.add mmodule
		end
		name_sorter.sort(sorted)
		return sorted
	end

	# Extract mclass list to display (sorted by name)
	private fun classes_list: Array[MClass] do
		var sorted = new Array[MClass]
		for mclass in model.mclasses do
			if mclass.visibility < ctx.min_visibility then continue
			sorted.add mclass
		end
		name_sorter.sort(sorted)
		return sorted
	end

	# Extract mproperty list to display (sorted by name)
	private fun mprops_list: Array[MProperty] do
		var sorted = new Array[MProperty]
		for mproperty in model.mproperties do
			if mproperty.visibility < ctx.min_visibility then continue
			if mproperty isa MAttribute then continue
			sorted.add mproperty
		end
		name_sorter.sort(sorted)
		return sorted
	end
end

# A group page
# Display a flattened view of the group
class NitdocGroup
	super NitdocPage

	private var mgroup: MGroup

	private var concerns: ConcernsTree
	private var intros: Set[MClass]
	private var redefs: Set[MClass]

	init(ctx: NitdocContext, model: Model, mainmodule: MModule, mgroup: MGroup) do
		super
		self.mgroup = mgroup
		self.concerns = model.concerns_tree(mgroup.collect_mmodules)
		self.concerns.sort_with(new MConcernRankSorter)
		self.intros = mgroup.in_nesting_intro_mclasses(ctx.min_visibility)
		var redefs = new HashSet[MClass]
		for rdef in mgroup.in_nesting_redef_mclasses(ctx.min_visibility) do
			if intros.has(rdef) then continue
			redefs.add rdef
		end
		self.redefs = redefs
	end

	private var page = new TplPage
	redef fun tpl_page do return page

	private var sidebar = new TplSidebar
	redef fun tpl_sidebar do return sidebar

	redef fun tpl_title do return "{mgroup.nitdoc_name}"

	redef fun tpl_topmenu do
		var topmenu = super
		var mproject = mgroup.mproject
		topmenu.add_item(new TplLink("index.html", "Overview"), false)
		if mgroup.is_root then
			topmenu.add_item(new TplLink("#", "{mproject.nitdoc_name}"), true)
		else
			topmenu.add_item(new TplLink(mproject.nitdoc_url, "{mproject.nitdoc_name}"), false)
			topmenu.add_item(new TplLink("#", "{mgroup.nitdoc_name}"), true)
		end
		topmenu.add_item(new TplLink("search.html", "Index"), false)
		return topmenu
	end

	# Class list to display in sidebar
	fun tpl_sidebar_mclasses do
		var mclasses = new HashSet[MClass]
		mclasses.add_all intros
		mclasses.add_all redefs
		if mclasses.is_empty then return
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])

		var sorted = mclasses.to_a
		name_sorter.sort(sorted)
		for mclass in sorted do
			list.add_li tpl_sidebar_item(mclass)
		end
		tpl_sidebar.boxes.add new TplSideBox.with_content("All classes", list)
	end

	private fun tpl_sidebar_item(def: MClass): Template do
		var classes = def.intro.tpl_css_classes.to_a
		if intros.has(def) then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new TplLabel.with_classes(classes)
		lnk.add def.tpl_link
		return lnk
	end

	# intro text
	private fun tpl_intro: TplSection do
		var section = new TplSection.with_title("top", tpl_title)
		var article = new TplArticle("intro")

		if mgroup.is_root then
			section.subtitle = mgroup.mproject.tpl_declaration
			article.content = mgroup.mproject.tpl_definition
		else
			section.subtitle = mgroup.tpl_declaration
			article.content = mgroup.tpl_definition
		end
		section.add_child article
		return section
	end

	private fun tpl_concerns(section: TplSection) do
		if concerns.is_empty then return
		section.add_child new TplArticle.with_content("concerns", "Concerns", concerns.to_tpl)
	end

	private fun tpl_groups(parent: TplSection) do
		var lst = concerns.to_a
		var section = parent
		for mentity in lst do
			if mentity isa MProject then
				section.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MGroup then
				section.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MModule then
				section.add_child tpl_mmodule_article(mentity)
			end
		end
	end

	redef fun tpl_content do
		tpl_sidebar_mclasses
		var top = tpl_intro
		tpl_concerns(top)
		tpl_groups(top)
		tpl_page.add_section top
	end

	private fun sort_by_mclass(mclassdefs: Collection[MClassDef]): Map[MClass, Set[MClassDef]] do
		var map = new HashMap[MClass, Set[MClassDef]]
		for mclassdef in mclassdefs do
			var mclass = mclassdef.mclass
			if not map.has_key(mclass) then map[mclass] = new HashSet[MClassDef]
			map[mclass].add mclassdef
		end
		return map
	end
end

# A module page
# Display the list of introduced and redefined classes in module
class NitdocModule
	super NitdocPage

	private var mmodule: MModule
	private var concerns: ConcernsTree
	private var mclasses2mdefs: Map[MClass, Set[MClassDef]]
	private var mmodules2mclasses: Map[MModule, Set[MClass]]


	init(ctx: NitdocContext, model: Model, mainmodule: MModule, mmodule: MModule) do
		super
		self.mmodule = mmodule
		var mclassdefs = new HashSet[MClassDef]
		mclassdefs.add_all mmodule.intro_mclassdefs(ctx.min_visibility)
		mclassdefs.add_all mmodule.redef_mclassdefs(ctx.min_visibility)
		self.mclasses2mdefs = sort_by_mclass(mclassdefs)
		self.mmodules2mclasses = group_by_mmodule(mclasses2mdefs.keys)
		self.concerns = model.concerns_tree(mmodules2mclasses.keys)
		# rank concerns
		mmodule.mgroup.mproject.booster_rank = -1000
		mmodule.mgroup.booster_rank = -1000
		mmodule.booster_rank = -1000
		self.concerns.sort_with(new MConcernRankSorter)
		mmodule.mgroup.mproject.booster_rank = 0
		mmodule.mgroup.booster_rank = 0
		mmodule.booster_rank = 0
	end

	private var page = new TplPage
	redef fun tpl_page do return page

	private var sidebar = new TplSidebar
	redef fun tpl_sidebar do return sidebar

	redef fun tpl_title do return "{mmodule.nitdoc_name}"

	redef fun tpl_topmenu do
		var topmenu = super
		var mproject = mmodule.mgroup.mproject
		topmenu.add_item(new TplLink("index.html", "Overview"), false)
		topmenu.add_item(new TplLink("{mproject.nitdoc_url}", "{mproject.nitdoc_name}"), false)
		topmenu.add_item(new TplLink("#", "{mmodule.nitdoc_name}"), true)
		topmenu.add_item(new TplLink("search.html", "Index"), false)
		return topmenu
	end

	# Class list to display in sidebar
	fun tpl_sidebar_mclasses do
		var mclasses = new HashSet[MClass]
		mclasses.add_all mmodule.filter_intro_mclasses(ctx.min_visibility)
		mclasses.add_all mmodule.filter_redef_mclasses(ctx.min_visibility)
		if mclasses.is_empty then return
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])

		var sorted = mclasses.to_a
		name_sorter.sort(sorted)
		for mclass in sorted do
			list.add_li tpl_sidebar_item(mclass)
		end
		tpl_sidebar.boxes.add new TplSideBox.with_content("All classes", list)
	end

	private fun tpl_sidebar_item(def: MClass): Template do
		var classes = def.intro.tpl_css_classes.to_a
		if def.intro_mmodule == mmodule then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new TplLabel.with_classes(classes)
		lnk.add def.tpl_link
		return lnk
	end

	# intro text
	private fun tpl_intro: TplSection do
		var section = new TplSection.with_title("top", tpl_title)
		section.subtitle = mmodule.tpl_declaration

		var article = new TplArticle("intro")
		var def = mmodule.tpl_definition
		var location = mmodule.location
		article.source_link = tpl_showsource(location)
		article.content = def
		section.add_child article
		return section
	end

	# inheritance section
	private fun tpl_inheritance(parent: TplSection) do
		# Extract relevent modules
		var imports = mmodule.in_importation.greaters
		if imports.length > 10 then imports = mmodule.in_importation.direct_greaters
		var clients = mmodule.in_importation.smallers
		if clients.length > 10 then clients = mmodule.in_importation.direct_smallers

		# Display lists
		var section = new TplSection.with_title("dependencies", "Dependencies")

		# Graph
		var mmodules = new HashSet[MModule]
		mmodules.add_all mmodule.in_nesting.direct_greaters
		mmodules.add_all imports
		if clients.length < 10 then mmodules.add_all clients
		mmodules.add mmodule
		var graph = tpl_dot(mmodules)
		if graph != null then section.add_child graph

		# Imports
		var lst = new Array[MModule]
		for dep in imports do
			if dep.is_fictive then continue
			if dep == mmodule then continue
			lst.add(dep)
		end
		if not lst.is_empty then
			name_sorter.sort lst
			section.add_child tpl_list("imports", "Imports", lst)
		end

		# Clients
		lst = new Array[MModule]
		for dep in clients do
			if dep.is_fictive then continue
			if dep == mmodule then continue
			lst.add(dep)
		end
		if not lst.is_empty then
			name_sorter.sort lst
			section.add_child tpl_list("clients", "Clients", lst)
		end

		parent.add_child section
	end

	private fun tpl_list(id: String, title: String, mmodules: Array[MModule]): TplArticle do
		var article = new TplArticle.with_title(id, title)
		var list = new TplList.with_classes(["list-unstyled", "list-definition"])
		for mmodule in mmodules do list.elts.add mmodule.tpl_list_item
		article.content = list
		return article
	end

	private fun tpl_concerns(parent: TplSection) do
		if concerns.is_empty then return
		parent.add_child new TplArticle.with_content("concerns", "Concerns", concerns.to_tpl)
	end

	private fun tpl_mclasses(parent: TplSection) do
		for mentity in concerns do
			if mentity isa MProject then
				parent.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MGroup then
				parent.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MModule then
				var section = new TplSection(mentity.nitdoc_id)
				var title = new Template
				if mentity == mmodule then
					title.add "in "
					section.summary_title = "in {mentity.nitdoc_name}"
				else
					title.add "from "
					section.summary_title = "from {mentity.nitdoc_name}"
				end
				title.add mentity.tpl_namespace
				section.title = title

				var mclasses = mmodules2mclasses[mentity].to_a
				name_sorter.sort(mclasses)
				for mclass in mclasses do
					section.add_child tpl_mclass_article(mclass, mclasses2mdefs[mclass].to_a)
				end
				parent.add_child section
			end
		end
	end

	private fun group_by_mmodule(mclasses: Collection[MClass]): Map[MModule, Set[MClass]] do
		var res = new HashMap[MModule, Set[MClass]]
		for mclass in mclasses do
			var mmodule = mclass.intro_mmodule
			if not res.has_key(mmodule) then
				res[mmodule] = new HashSet[MClass]
			end
			res[mmodule].add(mclass)
		end
		return res
	end

	redef fun tpl_content do
		tpl_sidebar_mclasses
		var top = tpl_intro
		tpl_inheritance(top)
		tpl_concerns(top)
		tpl_mclasses(top)
		tpl_page.add_section top
	end

	# Genrate dot hierarchy for class inheritance
	fun tpl_dot(mmodules: Collection[MModule]): nullable TplArticle do
		var poset = new POSet[MModule]
		for mmodule in mmodules do
			if mmodule.is_fictive then continue
			poset.add_node mmodule
			for omodule in mmodules do
				if mmodule.is_fictive then continue
				poset.add_node mmodule
				if mmodule.in_importation < omodule then
					poset.add_edge(mmodule, omodule)
				end
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
		return tpl_graph(op, name, null)
	end

	private fun sort_by_mclass(mclassdefs: Collection[MClassDef]): Map[MClass, Set[MClassDef]] do
		var map = new HashMap[MClass, Set[MClassDef]]
		for mclassdef in mclassdefs do
			var mclass = mclassdef.mclass
			if not map.has_key(mclass) then map[mclass] = new HashSet[MClassDef]
			map[mclass].add mclassdef
		end
		return map
	end
end

# A class page
# Display a list properties defined or redefined for this class
class NitdocClass
	super NitdocPage

	private var mclass: MClass
	private var concerns: ConcernsTree
	private var mprops2mdefs: Map[MProperty, Set[MPropDef]]
	private var mmodules2mprops: Map[MModule, Set[MProperty]]

	init(ctx: NitdocContext, model: Model, mainmodule: MModule, mclass: MClass) do
		super
		self.mclass = mclass
		var mpropdefs = new HashSet[MPropDef]
		mpropdefs.add_all mclass.intro_mpropdefs(ctx.min_visibility)
		mpropdefs.add_all mclass.redef_mpropdefs(ctx.min_visibility)
		self.mprops2mdefs = sort_by_mproperty(mpropdefs)
		self.mmodules2mprops = sort_by_mmodule(mprops2mdefs.keys)
		self.concerns = model.concerns_tree(mmodules2mprops.keys)
		self.concerns.sort_with(new MConcernRankSorter)
	end

	private var page = new TplPage
	redef fun tpl_page do return page

	private var sidebar = new TplSidebar
	redef fun tpl_sidebar do return sidebar

	redef fun tpl_title do return "{mclass.nitdoc_name}{mclass.tpl_signature.write_to_string}"

	redef fun tpl_topmenu do
		var topmenu = super
		var mproject = mclass.intro_mmodule.mgroup.mproject
		topmenu.add_item(new TplLink("index.html", "Overview"), false)
		topmenu.add_item(new TplLink("{mproject.nitdoc_url}", "{mproject.nitdoc_name}"), false)
		topmenu.add_item(new TplLink("#", "{mclass.nitdoc_name}"), true)
		topmenu.add_item(new TplLink("search.html", "Index"), false)
		return topmenu
	end

	# Property list to display in sidebar
	fun tpl_sidebar_properties do
		var kind_map = sort_by_kind(mclass_inherited_mprops)
		var summary = new TplList.with_classes(["list-unstyled"])

		tpl_sidebar_list("Virtual types", kind_map["type"].to_a, summary)
		tpl_sidebar_list("Constructors", kind_map["init"].to_a, summary)
		tpl_sidebar_list("Methods", kind_map["fun"].to_a, summary)
		tpl_sidebar.boxes.add new TplSideBox.with_content("All properties", summary)
	end

	private fun tpl_sidebar_list(name: String, mprops: Array[MProperty], summary: TplList) do
		if mprops.is_empty then return
		name_sorter.sort(mprops)
		var entry = new TplListItem.with_content(name)
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mprop in mprops do
			list.add_li tpl_sidebar_item(mprop)
		end
		entry.append list
		summary.elts.add entry
	end

	private fun tpl_sidebar_item(mprop: MProperty): Template do
		var classes = mprop.intro.tpl_css_classes.to_a
		if not mprops2mdefs.has_key(mprop) then
			classes.add "inherit"
			var lnk = new Template
			lnk.add new TplLabel.with_classes(classes)
			lnk.add mprop.intro.tpl_link
			return lnk
		end
		var defs = mprops2mdefs[mprop]
		if defs.has(mprop.intro) then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new TplLabel.with_classes(classes)
		lnk.add mprop.intro.tpl_anchor
		return lnk
	end

	private fun tpl_intro: TplSection do
		var section = new TplSection.with_title("top", tpl_title)
		section.subtitle = mclass.intro.tpl_declaration
		var article = new TplArticle("comment")
		if mclass.mdoc != null then
			article.content = mclass.mdoc.tpl_comment
		end
		section.add_child article
		return section
	end

	private fun tpl_concerns(parent: TplSection) do
		# intro title
		var section = new TplSection.with_title("intro", "Introduction")
		section.summary_title = "Introduction"
		section.add_child tpl_mclassdef_article(mclass.intro)
		parent.add_child section
		# concerns
		if concerns.is_empty then return
		parent.add_child new TplArticle.with_content("concerns", "Concerns", concerns.to_tpl)
	end

	private fun tpl_inheritance(parent: TplSection) do
		# parents
		var hparents = new HashSet[MClass]
		for c in mclass.in_hierarchy(mainmodule).direct_greaters do
			if c.visibility < ctx.min_visibility then continue
			hparents.add c
		end

		# ancestors
		var hancestors = new HashSet[MClass]
		for c in mclass.in_hierarchy(mainmodule).greaters do
			if c == mclass then continue
			if c.visibility < ctx.min_visibility then continue
			if hparents.has(c) then continue
			hancestors.add c
		end

		# children
		var hchildren = new HashSet[MClass]
		for c in mclass.in_hierarchy(mainmodule).direct_smallers do
			if c.visibility < ctx.min_visibility then continue
			hchildren.add c
		end

		# descendants
		var hdescendants = new HashSet[MClass]
		for c in mclass.in_hierarchy(mainmodule).smallers do
			if c == mclass then continue
			if c.visibility < ctx.min_visibility then continue
			if hchildren.has(c) then continue
			hdescendants.add c
		end

		# Display lists
		var section = new TplSection.with_title("inheritance", "Inheritance")

		# Graph
		var mclasses = new HashSet[MClass]
		mclasses.add_all hancestors
		mclasses.add_all hparents
		if hchildren.length < 10 then mclasses.add_all hchildren
		if hdescendants.length < 10 then mclasses.add_all hdescendants
		mclasses.add mclass
		var graph = tpl_dot(mclasses)
		if graph != null then section.add_child graph

		# parents
		if not hparents.is_empty then
			var lst = hparents.to_a
			name_sorter.sort lst
			section.add_child tpl_list("parents", "Parents", lst)
		end

		# ancestors
		if not hancestors.is_empty then
			var lst = hancestors.to_a
			name_sorter.sort lst
			section.add_child tpl_list("ancestors", "Ancestors", lst)
		end

		# children
		if not hchildren.is_empty and hchildren.length < 15 then
			var lst = hchildren.to_a
			name_sorter.sort lst
			section.add_child tpl_list("children", "Children", lst)
		end

		# descendants
		if not hdescendants.is_empty and hchildren.length < 15 then
			var lst = hdescendants.to_a
			name_sorter.sort lst
			section.add_child tpl_list("descendants", "Descendants", lst)
		end

		parent.add_child section
	end

	private fun tpl_list(id: String, title: String, elts: Array[MClass]): TplArticle do
		var article = new TplArticle.with_title(id, title)
		var list = new TplList.with_classes(["list-unstyled", "list-definition"])
		for elt in elts do list.elts.add elt.tpl_list_item
		article.content = list
		return article
	end

	private fun tpl_properties(parent: TplSection) do
		var lst = concerns.to_a
		for mentity in lst do
			if mentity isa MProject then
				parent.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MGroup then
				parent.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MModule then
				var section = new TplSection(mentity.nitdoc_id)
				var title = new Template
				title.add "in "
				title.add mentity.tpl_namespace
				section.title = title
				section.summary_title = "in {mentity.nitdoc_name}"

				# properties
				var mprops = mmodules2mprops[mentity]
				var kind_map = sort_by_kind(mprops)

				# virtual types
				var elts = kind_map["type"].to_a
				name_sorter.sort(elts)
				for elt in elts do
					var defs = mprops2mdefs[elt].to_a
					section.add_child tpl_mprop_article(elt, defs)
				end

				# constructors
				elts = kind_map["init"].to_a
				name_sorter.sort(elts)
				for elt in elts do
					var defs = mprops2mdefs[elt].to_a
					section.add_child tpl_mprop_article(elt, defs)
				end

				# methods
				elts = kind_map["fun"].to_a
				name_sorter.sort(elts)
				for elt in elts do
					var defs = mprops2mdefs[elt].to_a
					section.add_child tpl_mprop_article(elt, defs)
				end
				parent.add_child section
			end
		end
	end

	redef fun tpl_content do
		tpl_sidebar_properties
		var top = tpl_intro
		tpl_inheritance(top)
		tpl_concerns(top)
		tpl_properties(top)
		tpl_page.add_section top
	end

	private fun sort_by_mproperty(mpropdefs: Collection[MPropDef]): Map[MProperty, Set[MPropDef]] do
		var map = new HashMap[MProperty, Set[MPropDef]]
		for mpropdef in mpropdefs do
			var mproperty = mpropdef.mproperty
			if not map.has_key(mproperty) then map[mproperty] = new HashSet[MPropDef]
			map[mproperty].add mpropdef
		end
		return map
	end

	private fun sort_by_mmodule(mprops: Collection[MProperty]): Map[MModule, Set[MProperty]] do
		var map = new HashMap[MModule, Set[MProperty]]
		for mprop in mprops do
			var mpropdefs = mprops2mdefs[mprop].to_a
			mainmodule.linearize_mpropdefs(mpropdefs)
			var mmodule = mpropdefs.first.mclassdef.mmodule
			if not map.has_key(mmodule) then map[mmodule] = new HashSet[MProperty]
			map[mmodule].add mprop
		end
		return map
	end

	private fun sort_by_kind(mprops: Collection[MProperty]): Map[String, Set[MProperty]] do
		var map = new HashMap[String, Set[MProperty]]
		map["type"] = new HashSet[MProperty]
		map["init"] = new HashSet[MProperty]
		map["fun"] = new HashSet[MProperty]
		for mprop in mprops do
			if mprop isa MVirtualTypeProp then
				map["type"].add mprop
			else if mprop isa MMethod then
				if mprop.is_init then
					map["init"].add mprop
				else
					map["fun"].add mprop
				end
			end
		end
		return map
	end

	private fun mclass_inherited_mprops: Set[MProperty] do
		var res = new HashSet[MProperty]
		var local = mclass.local_mproperties(ctx.min_visibility)
		for mprop in mclass.inherited_mproperties(mainmodule, ctx.min_visibility) do
			if local.has(mprop) then continue
			#if mprop isa MMethod and mprop.is_init then continue
			if mprop.intro.mclassdef.mclass.name == "Object" and
				(mprop.visibility == protected_visibility or
				mprop.intro.mclassdef.mmodule.name != "kernel") then continue
			res.add mprop
		end
		res.add_all local
		return res
	end

	private fun collect_mmodules(mprops: Collection[MProperty]): Set[MModule] do
		var res = new HashSet[MModule]
		for mprop in mprops do
			if mprops2mdefs.has_key(mprop) then
				for mpropdef in mprops2mdefs[mprop] do res.add mpropdef.mclassdef.mmodule
			end
		end
		return res
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
	fun tpl_dot(mclasses: Collection[MClass]): nullable TplArticle do
		var poset = new POSet[MClass]

		for mclass in mclasses do
			poset.add_node mclass
			for oclass in mclasses do
				poset.add_node oclass
				if mclass.in_hierarchy(mainmodule) < oclass then
					poset.add_edge(mclass, oclass)
				end
			end
		end

		var op = new FlatBuffer
		var name = "dep_{mclass.name}"
		op.append("digraph {name} \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for c in poset do
			if c == mclass then
				op.append("\"{c.name}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name}\"[URL=\"{c.nitdoc_url}\"];\n")
			end
			for c2 in poset[c].direct_greaters do
				op.append("\"{c.name}\"->\"{c2.name}\";\n")
			end
		end
		op.append("\}\n")
		return tpl_graph(op, name, null)
	end
end

# A MProperty page
class NitdocProperty
	super NitdocPage

	private var mproperty: MProperty
	private var concerns: ConcernsTree
	private var mmodules2mdefs: Map[MModule, Set[MPropDef]]

	init(ctx: NitdocContext, model: Model, mainmodule: MModule, mproperty: MProperty) do
		super
		self.mproperty = mproperty
		self.mmodules2mdefs = sort_by_mmodule(collect_mpropdefs)
		self.concerns = model.concerns_tree(mmodules2mdefs.keys)
		self.concerns.sort_with(new MConcernRankSorter)
	end

	private fun collect_mpropdefs: Set[MPropDef] do
		var res = new HashSet[MPropDef]
		for mpropdef in mproperty.mpropdefs do
			if not mpropdef.is_intro then res.add mpropdef
		end
		return res
	end

	private var page = new TplPage
	redef fun tpl_page do return page

	private var sidebar = new TplSidebar
	redef fun tpl_sidebar do return sidebar

	redef fun tpl_title do
		return "{mproperty.nitdoc_name}{mproperty.tpl_signature.write_to_string}"
	end

	redef fun tpl_topmenu do
		var topmenu = super
		var mmodule = mproperty.intro_mclassdef.mmodule
		var mproject = mmodule.mgroup.mproject
		var mclass = mproperty.intro_mclassdef.mclass
		topmenu.add_item(new TplLink("index.html", "Overview"), false)
		topmenu.add_item(new TplLink("{mproject.nitdoc_url}", "{mproject.nitdoc_name}"), false)
		topmenu.add_item(new TplLink("{mclass.nitdoc_url}", "{mclass.nitdoc_name}"), false)
		topmenu.add_item(new TplLink("#", "{mproperty.nitdoc_name}"), true)
		topmenu.add_item(new TplLink("search.html", "Index"), false)
		return topmenu
	end

	private fun tpl_intro: TplSection do
		var section = new TplSection.with_title("top", tpl_title)
		section.subtitle = mproperty.tpl_declaration
		var article = new TplArticle("comment")
		if mproperty.intro.mdoc != null then
			article.content = mproperty.intro.mdoc.tpl_comment
		end
		section.add_child article
		return section
	end

	private fun tpl_properties(parent: TplSection) do
		# intro title
		var section = new TplSection.with_title("intro", "Introduction")
		section.summary_title = "Introduction"
		section.add_child tpl_mpropdef_article(mproperty.intro)
		parent.add_child section

		# concerns
		if concerns.is_empty then return
		parent.add_child new TplArticle.with_content("Concerns", "Concerns", concerns.to_tpl)

		# redef list
		var lst = concerns.to_a
		for mentity in lst do
			if mentity isa MProject then
				parent.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MGroup then
				parent.add_child new TplSection(mentity.nitdoc_id)
			else if mentity isa MModule then
				var ssection = new TplSection(mentity.nitdoc_id)
				var title = new Template
				title.add "in "
				title.add mentity.tpl_namespace
				ssection.title = title
				ssection.summary_title = "in {mentity.nitdoc_name}"

				# properties
				var mpropdefs = mmodules2mdefs[mentity].to_a
				name_sorter.sort(mpropdefs)
				for mpropdef in mpropdefs do
					ssection.add_child tpl_mpropdef_article(mpropdef)
				end
				parent.add_child ssection
			end
		end
	end

	redef fun tpl_content do
		var top = tpl_intro
		tpl_properties(top)
		tpl_page.add_section top
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
end

