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
private import json::static

redef class ToolContext
	private var opt_dir = new OptionString("output directory", "-d", "--dir")
	private var opt_source = new OptionString("link for source (%f for filename, %l for first line, %L for last line)", "--source")
	private var opt_sharedir = new OptionString("directory containing nitdoc assets", "--sharedir")
	private var opt_shareurl = new OptionString("use shareurl instead of copy shared files", "--shareurl")
	private var opt_nodot = new OptionBool("do not generate graphes with graphviz", "--no-dot")

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

	redef init do
		super

		var opts = option_context
		opts.add_option(opt_dir, opt_source, opt_sharedir, opt_shareurl,
				opt_nodot)
		opts.add_option(opt_custom_title, opt_custom_footer, opt_custom_intro, opt_custom_brand)
		opts.add_option(opt_github_upstream, opt_github_base_sha1, opt_github_gitdir)
		opts.add_option(opt_piwik_tracker, opt_piwik_site_id)
	end

	redef fun process_options(args) do
		super

		# output dir
		var output_dir = opt_dir.value
		if output_dir == null then
			output_dir = "doc"
		end
		self.output_dir = output_dir
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
	var ctx: ToolContext
	var model: Model
	var mainmodule: MModule

	private fun init_output_dir do
		# create destination dir if it's necessary
		var output_dir = ctx.output_dir
		if not output_dir.file_exists then output_dir.mkdir
		# locate share dir
		var sharedir = ctx.opt_sharedir.value
		if sharedir == null then
			var dir = ctx.nit_dir
			sharedir = dir/"share/nitdoc"
			if not sharedir.file_exists then
				print "Error: Cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
				abort
			end
		end
		# copy shared files
		if ctx.opt_shareurl.value == null then
			sys.system("cp -r -- {sharedir.to_s.escape_to_sh}/* {output_dir.to_s.escape_to_sh}/")
		else
			sys.system("cp -r -- {sharedir.to_s.escape_to_sh}/resources/ {output_dir.to_s.escape_to_sh}/resources/")
		end

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

	private var table = new QuickSearchTable

	var ctx: ToolContext
	var model: Model

	init do
		for mmodule in model.mmodules do
			if mmodule.is_fictive or mmodule.is_test_suite then continue
			add_result_for(mmodule.name, mmodule.full_name, mmodule.nitdoc_url)
		end
		for mclass in model.mclasses do
			if not ctx.filter_mclass(mclass) then continue
			add_result_for(mclass.name, mclass.full_name, mclass.nitdoc_url)
		end
		for mproperty in model.mproperties do
			if not ctx.filter_mproperty(mproperty) then continue
			for mpropdef in mproperty.mpropdefs do
				var full_name = mpropdef.mclassdef.mclass.full_name
				var cls_url = mpropdef.mclassdef.mclass.nitdoc_url
				var def_url = "{cls_url}#{mpropdef.mproperty.nitdoc_id}"
				add_result_for(mproperty.name, full_name, def_url)
			end
		end
	end

	private fun add_result_for(query: String, txt: String, url: String) do
		table[query].add new QuickSearchResult(txt, url)
	end

	fun render: Template do
		var tpl = new Template
		var buffer = new RopeBuffer
		tpl.add buffer
		buffer.append "var nitdocQuickSearchRawList="
		table.append_json buffer
		buffer.append ";"
		return tpl
	end
end

# The result map for QuickSearch.
private class QuickSearchTable
	super JsonMapRead[String, QuickSearchResultList]
	super HashMap[String, QuickSearchResultList]

	redef fun provide_default_value(key) do
		var v = new QuickSearchResultList
		self[key] = v
		return v
	end
end

# A QuickSearch result list.
private class QuickSearchResultList
	super JsonSequenceRead[QuickSearchResult]
	super Array[QuickSearchResult]
end

# A QuickSearch result.
private class QuickSearchResult
	super Jsonable

	# The text of the link.
	var txt: String

	# The destination of the link.
	var url: String

	redef fun to_json do
		return "\{\"txt\":{txt.to_json},\"url\":{url.to_json}\}"
	end
end

# Nitdoc base page
# Define page structure and properties
abstract class NitdocPage

	private var ctx: ToolContext
	private var model: Model
	private var mainmodule: MModule
	private var name_sorter = new MEntityNameSorter

	# Render the page as a html template
	fun render: Template do
		var shareurl = "."
		if ctx.opt_shareurl.value != null then
			shareurl = ctx.opt_shareurl.value.as(not null)
		end

		# build page
		var tpl = tpl_page
		tpl.title = tpl_title
		tpl.url = page_url
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

	# URL to this page.
	fun page_url: String is abstract

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
		var topmenu = new TplTopMenu(page_url)
		var brand = ctx.opt_custom_brand.value
		if brand != null then
			var tpl = new Template
			tpl.add "<span class='navbar-brand'>"
			tpl.add brand
			tpl.add "</span>"
			topmenu.brand = tpl
		end
		topmenu.add_link new TplLink("index.html", "Overview")
		topmenu.add_link new TplLink("search.html", "Index")
		return topmenu
	end

	# Build page content template
	fun tpl_content is abstract

	# Clickable graphviz image using dot format
	# return null if no graph for this page
	fun tpl_graph(dot: Buffer, name: String, title: nullable String): nullable TplArticle do
		if ctx.opt_nodot.value then return null
		var output_dir = ctx.output_dir
		var path = output_dir / name
		var path_sh = path.escape_to_sh
		var file = new OFStream.open("{path}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {path_sh}.png && test -f {path_sh}.s.dot && diff -- {path_sh}.dot {path_sh}.s.dot >/dev/null 2>&1 ; \} || \{ cp -- {path_sh}.dot {path_sh}.s.dot && dot -Tpng -o{path_sh}.png -Tcmapx -o{path_sh}.map {path_sh}.s.dot ; \}")
		var fmap = new IFStream.open("{path}.map")
		var map = fmap.read_all
		fmap.close

		var article = new TplArticle("graph")
		var alt = ""
		if title != null then
			article.title = title
			alt = "alt='{title.html_escape}'"
		end
		article.css_classes.add "text-center"
		var content = new Template
		var name_html = name.html_escape
		content.add "<img src='{name_html}.png' usemap='#{name_html}' style='margin:auto' {alt}/>"
		content.add map
		article.content = content
		return article
	end

	# A (source) link template for a given location
	fun tpl_showsource(location: nullable Location): nullable String
	do
		if location == null then return null
		var source = ctx.opt_source.value
		if source == null then
			var url = location.file.filename.simplify_path
			return "<a target='_blank' title='Show source' href=\"{url.html_escape}\">View Source</a>"
		end
		# THIS IS JUST UGLY ! (but there is no replace yet)
		var x = source.split_with("%f")
		source = x.join(location.file.filename.simplify_path)
		x = source.split_with("%l")
		source = x.join(location.line_start.to_s)
		x = source.split_with("%L")
		source = x.join(location.line_end.to_s)
		source = source.simplify_path
		return "<a target='_blank' title='Show source' href=\"{source.to_s.html_escape}\">View Source</a>"
	end

	# MProject description template
	fun tpl_mproject_article(mproject: MProject): TplArticle do
		var article = mproject.tpl_article
		article.subtitle = mproject.tpl_declaration
		article.content = mproject.tpl_definition
		var mdoc = mproject.mdoc_or_fallback
		if mdoc != null then
			article.content = mdoc.tpl_short_comment
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
		if not intros.is_empty then
			mainmodule.linearize_mclassdefs(intros)
			var intros_art = new TplArticle.with_title("{mmodule.nitdoc_id}.intros", "Introduces")
			var intros_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for mclassdef in intros do
				intros_lst.add_li mclassdef.tpl_list_item
			end
			if not intros_lst.is_empty then
				intros_art.content = intros_lst
				article.add_child intros_art
			end
		end
		var redefs = mmodule.redef_mclassdefs(ctx.min_visibility).to_a
		if not redefs.is_empty then
			mainmodule.linearize_mclassdefs(redefs)
			var redefs_art = new TplArticle.with_title("{mmodule.nitdoc_id}.redefs", "Redefines")
			var redefs_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for mclassdef in redefs do
				redefs_lst.add_li mclassdef.tpl_list_item
			end
			if not redefs_lst.is_empty then
				redefs_art.content = redefs_lst
				article.add_child redefs_art
			end
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
			var intros = new TplArticle.with_title("{mclassdef.nitdoc_id}.intros", "Introduces")
			var intros_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for mpropdef in mclassdef.collect_intro_mpropdefs(ctx.min_visibility) do
				intros_lst.add_li mpropdef.tpl_list_item
			end
			if not intros_lst.is_empty then
				intros.content = intros_lst
				redef_article.add_child intros
			end
			var redefs = new TplArticle.with_title("{mclassdef.nitdoc_id}.redefs", "Redefines")
			var redefs_lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for mpropdef in mclassdef.collect_redef_mpropdefs(ctx.min_visibility) do
				redefs_lst.add_li mpropdef.tpl_list_item
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
	#
	# `main_mpropdef`: The most important mpropdef to display
	# `local_mpropdefs`: List of other locally defined mpropdefs to display
	# `lin`: full linearization from local_mpropdefs to intro (displayed in redef tree)
	fun tpl_mprop_article(main_mpropdef: MPropDef, local_mpropdefs: Array[MPropDef],
	   lin: Array[MPropDef]): TplArticle do
		var mprop = main_mpropdef.mproperty
		var article = new TplArticle(mprop.nitdoc_id)
		var title = new Template
		title.add mprop.tpl_icon
		title.add "<span id='{main_mpropdef.nitdoc_id}'></span>"
		if main_mpropdef.is_intro then
			title.add mprop.tpl_link
			title.add mprop.intro.tpl_signature
		else
			var cls_url = mprop.intro.mclassdef.mclass.nitdoc_url
			var def_url = "{cls_url}#{mprop.nitdoc_id}"
			var lnk = new TplLink.with_title(def_url, mprop.nitdoc_name,
					"Go to introduction")
			title.add "redef "
			title.add lnk
		end
		article.title = title
		article.title_classes.add "signature"
		article.summary_title = "{mprop.nitdoc_name}"
		article.subtitle = main_mpropdef.tpl_namespace
		if main_mpropdef.mdoc_or_fallback != null then
			article.content = main_mpropdef.mdoc_or_fallback.tpl_comment
		end
		var subarticle = new TplArticle("{main_mpropdef.nitdoc_id}.redefs")
		# Add redef in same `MClass`
		if local_mpropdefs.length > 1 then
			for mpropdef in local_mpropdefs do
				if mpropdef == main_mpropdef then continue
				var redef_article = new TplArticle("{mpropdef.nitdoc_id}")
				var redef_title = new Template
				redef_title.add "also redef in "
				redef_title.add mpropdef.tpl_namespace
				redef_article.title = redef_title
				redef_article.title_classes.add "signature info"
				redef_article.css_classes.add "nospace"
				var redef_content = new Template
				if mpropdef.mdoc != null then
					redef_content.add mpropdef.mdoc.tpl_comment
				end
				redef_article.content = redef_content
				subarticle.add_child redef_article
			end
		end
		# Add linearization
		if lin.length > 1 then
			var lin_article = new TplArticle("{main_mpropdef.nitdoc_id}.lin")
			lin_article.title = "Inheritance"
			var lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for mpropdef in lin do
				lst.add_li mpropdef.tpl_inheritance_item
			end
			lin_article.content = lst
			subarticle.add_child lin_article
		end
		article.add_child subarticle
		return article
	end

	# MProperty description template
	fun tpl_mpropdef_article(mpropdef: MPropDef): TplArticle do
		var article = mpropdef.tpl_article
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

	redef fun page_url do return "index.html"

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

	redef fun page_url do return "search.html"

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
			if mmodule.is_fictive or mmodule.is_test_suite then continue
			sorted.add mmodule
		end
		name_sorter.sort(sorted)
		return sorted
	end

	# Extract mclass list to display (sorted by name)
	private fun classes_list: Array[MClass] do
		var sorted = new Array[MClass]
		for mclass in model.mclasses do
			if not ctx.filter_mclass(mclass) then continue
			sorted.add mclass
		end
		name_sorter.sort(sorted)
		return sorted
	end

	# Extract mproperty list to display (sorted by name)
	private fun mprops_list: Array[MProperty] do
		var sorted = new Array[MProperty]
		for mproperty in model.mproperties do
			if ctx.filter_mproperty(mproperty) then sorted.add mproperty
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

	private var concerns: ConcernsTree is noinit
	private var intros: Set[MClass] is noinit
	private var redefs: Set[MClass] is noinit

	init do
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

	redef fun tpl_title do return mgroup.nitdoc_name

	redef fun page_url do return mgroup.nitdoc_url

	redef fun tpl_topmenu do
		var topmenu = super
		var mproject = mgroup.mproject
		if not mgroup.is_root then
			topmenu.add_link new TplLink(mproject.nitdoc_url, mproject.nitdoc_name)
		end
		topmenu.add_link new TplLink(page_url, mproject.nitdoc_name)
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

	private fun tpl_sidebar_item(def: MClass): TplListItem do
		var classes = def.intro.tpl_css_classes.to_a
		if intros.has(def) then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new TplLabel.with_classes(classes)
		lnk.add def.tpl_link
		return new TplListItem.with_content(lnk)
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
	private var concerns: ConcernsTree is noinit
	private var mclasses2mdefs: Map[MClass, Set[MClassDef]] is noinit
	private var mmodules2mclasses: Map[MModule, Set[MClass]] is noinit


	init do
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

	redef fun tpl_title do return mmodule.nitdoc_name
	redef fun page_url do return mmodule.nitdoc_url

	redef fun tpl_topmenu do
		var topmenu = super
		var mproject = mmodule.mgroup.mproject
		topmenu.add_link new TplLink(mproject.nitdoc_url, mproject.nitdoc_name)
		topmenu.add_link new TplLink(page_url, mmodule.nitdoc_name)
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

	private fun tpl_sidebar_item(def: MClass): TplListItem do
		var classes = def.intro.tpl_css_classes.to_a
		if def.intro_mmodule == mmodule then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new TplLabel.with_classes(classes)
		lnk.add def.tpl_link
		return new TplListItem.with_content(lnk)
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
		mmodules.add_all mmodule.nested_mmodules
		mmodules.add_all imports
		if clients.length < 10 then mmodules.add_all clients
		mmodules.add mmodule
		var graph = tpl_dot(mmodules)
		if graph != null then section.add_child graph

		# Imports
		var lst = new Array[MModule]
		for dep in imports do
			if dep.is_fictive or dep.is_test_suite then continue
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
			if dep.is_fictive or dep.is_test_suite then continue
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
			if mmodule.is_fictive or mmodule.is_test_suite then continue
			poset.add_node mmodule
			for omodule in mmodules do
				if omodule.is_fictive or omodule.is_test_suite then continue
				poset.add_node mmodule
				if mmodule.in_importation < omodule then
					poset.add_edge(mmodule, omodule)
				end
			end
		end
		# build graph
		var op = new RopeBuffer
		var name = "dep_module_{mmodule.nitdoc_id}"
		op.append("digraph \"{name.escape_to_dot}\" \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		for mmodule in poset do
			if mmodule == self.mmodule then
				op.append("\"{mmodule.name.escape_to_dot}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{mmodule.name.escape_to_dot}\"[URL=\"{mmodule.nitdoc_url.escape_to_dot}\"];\n")
			end
			for omodule in poset[mmodule].direct_greaters do
				op.append("\"{mmodule.name.escape_to_dot}\"->\"{omodule.name.escape_to_dot}\";\n")
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
	private var concerns: ConcernsTree is noinit
	private var mprops2mdefs: Map[MProperty, Set[MPropDef]] is noinit
	private var mmodules2mprops: Map[MModule, Set[MProperty]] is noinit

	init do
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
	redef fun page_url do return mclass.nitdoc_url

	redef fun tpl_topmenu do
		var topmenu = super
		var mproject = mclass.intro_mmodule.mgroup.mproject
		topmenu.add_link new TplLink("{mproject.nitdoc_url}", "{mproject.nitdoc_name}")
		topmenu.add_link new TplLink(page_url, mclass.nitdoc_name)
		return topmenu
	end

	# Property list to display in sidebar
	fun tpl_sidebar_properties do
		var by_kind = new PropertiesByKind.with_elements(mclass_inherited_mprops)
		var summary = new TplList.with_classes(["list-unstyled"])

		by_kind.sort_groups(name_sorter)
		for g in by_kind.groups do tpl_sidebar_list(g, summary)
		tpl_sidebar.boxes.add new TplSideBox.with_content("All properties", summary)
	end

	private fun tpl_sidebar_list(mprops: PropertyGroup[MProperty], summary: TplList) do
		if mprops.is_empty then return
		var entry = new TplListItem.with_content(mprops.title)
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mprop in mprops do
			list.add_li tpl_sidebar_item(mprop)
		end
		entry.append list
		summary.elts.add entry
	end

	private fun tpl_sidebar_item(mprop: MProperty): TplListItem do
		var classes = mprop.intro.tpl_css_classes.to_a
		if not mprops2mdefs.has_key(mprop) then
			classes.add "inherit"
			var cls_url = mprop.intro.mclassdef.mclass.nitdoc_url
			var def_url = "{cls_url}#{mprop.nitdoc_id}"
			var lnk = new TplLink(def_url, mprop.nitdoc_name)
			var mdoc = mprop.intro.mdoc_or_fallback
			if mdoc != null then lnk.title = mdoc.short_comment
			var item = new Template
			item.add new TplLabel.with_classes(classes)
			item.add lnk
			return new TplListItem.with_content(item)
		end
		var defs = mprops2mdefs[mprop]
		if defs.has(mprop.intro) then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new TplLabel.with_classes(classes)
		lnk.add mprop.tpl_anchor
		return new TplListItem.with_content(lnk)
	end

	private fun tpl_intro: TplSection do
		var section = new TplSection.with_title("top", tpl_title)
		section.subtitle = mclass.intro.tpl_declaration
		var article = new TplArticle("comment")
		var mdoc = mclass.mdoc_or_fallback
		if mdoc != null then
			article.content = mdoc.tpl_comment
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
			if ctx.filter_mclass(c) then hparents.add c
		end

		# ancestors
		var hancestors = new HashSet[MClass]
		for c in mclass.in_hierarchy(mainmodule).greaters do
			if c == mclass then continue
			if not ctx.filter_mclass(c) then continue
			if hparents.has(c) then continue
			hancestors.add c
		end

		# children
		var hchildren = new HashSet[MClass]
		for c in mclass.in_hierarchy(mainmodule).direct_smallers do
			if ctx.filter_mclass(c) then hchildren.add c
		end

		# descendants
		var hdescendants = new HashSet[MClass]
		for c in mclass.in_hierarchy(mainmodule).smallers do
			if c == mclass then continue
			if not ctx.filter_mclass(c) then continue
			if hchildren.has(c) then continue
			hdescendants.add c
		end

		# Display lists
		var section = new TplSection.with_title("inheritance", "Inheritance")

		# Graph
		var mclasses = new HashSet[MClass]
		mclasses.add_all hancestors
		mclasses.add_all hparents
		mclasses.add_all hchildren
		mclasses.add_all hdescendants
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
		if not hchildren.is_empty then
			var lst = hchildren.to_a
			name_sorter.sort lst
			section.add_child tpl_list("children", "Children", lst)
		end

		# descendants
		if not hdescendants.is_empty then
			var lst = hdescendants.to_a
			name_sorter.sort lst
			section.add_child tpl_list("descendants", "Descendants", lst)
		end

		parent.add_child section
	end

	private fun tpl_list(id: String, title: String, elts: Array[MClass]): TplArticle do
		var article = new TplArticle.with_title(id, title)
		if elts.length > 20 then
			var tpl = new Template
			for e in elts do
				tpl.add e.tpl_link
				if e != elts.last then tpl.add ", "
			end
			article.content = tpl
		else
			var list = new TplList.with_classes(["list-unstyled", "list-definition"])
			for elt in elts do list.elts.add elt.tpl_list_item
			article.content = list
		end
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
				var by_kind = new PropertiesByKind.with_elements(mprops)

				for g in by_kind.groups do
					for article in tpl_mproperty_articles(g) do
						section.add_child article
					end
				end
				parent.add_child section
			end
		end
	end

	private fun tpl_mproperty_articles(elts: Collection[MProperty]):
			Sequence[TplArticle] do
		var articles = new List[TplArticle]
		for elt in elts do
			var local_defs = mprops2mdefs[elt]
			# var all_defs = elt.mpropdefs
			var all_defs = new HashSet[MPropDef]
			for local_def in local_defs do
				all_defs.add local_def
				var mpropdef = local_def
				while not mpropdef.is_intro do
					mpropdef = mpropdef.lookup_next_definition(mainmodule, mpropdef.mclassdef.bound_mtype)
					all_defs.add mpropdef
				end
			end
			var loc_lin = local_defs.to_a
			mainmodule.linearize_mpropdefs(loc_lin)
			var all_lin = all_defs.to_a
			mainmodule.linearize_mpropdefs(all_lin)
			articles.add tpl_mprop_article(loc_lin.first, loc_lin, all_lin)
		end
		return articles
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

	# Generate dot hierarchy for classes
	fun tpl_dot(mclasses: Collection[MClass]): nullable TplArticle do
		var poset = new POSet[MClass]

		for mclass in mclasses do
			poset.add_node mclass
			for oclass in mclasses do
				if mclass == oclass then continue
				poset.add_node oclass
				if mclass.in_hierarchy(mainmodule) < oclass then
					poset.add_edge(mclass, oclass)
				end
			end
		end

		var op = new RopeBuffer
		var name = "dep_class_{mclass.nitdoc_id}"
		op.append("digraph \"{name.escape_to_dot}\" \{ rankdir=BT; node[shape=none,margin=0,width=0,height=0,fontsize=10]; edge[dir=none,color=gray]; ranksep=0.2; nodesep=0.1;\n")
		var classes = poset.to_a
		var todo = new Array[MClass]
		var done = new HashSet[MClass]
		mainmodule.linearize_mclasses(classes)
		if not classes.is_empty then todo.add classes.first
		while not todo.is_empty do
			var c = todo.shift
			if done.has(c) then continue
			done.add c
			if c == mclass then
				op.append("\"{c.name.escape_to_dot}\"[shape=box,margin=0.03];\n")
			else
				op.append("\"{c.name.escape_to_dot}\"[URL=\"{c.nitdoc_url.escape_to_dot}\"];\n")
			end
			var smallers = poset[c].direct_smallers
			if smallers.length < 10 then
				for c2 in smallers do
					op.append("\"{c2.name.escape_to_dot}\"->\"{c.name.escape_to_dot}\";\n")
				end
				todo.add_all smallers
			else
				op.append("\"...\"->\"{c.name.escape_to_dot}\";\n")
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
	private var concerns: ConcernsTree is noinit
	private var mmodules2mdefs: Map[MModule, Set[MPropDef]] is noinit

	init do
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

	redef fun page_url do return mproperty.nitdoc_url

	redef fun tpl_topmenu do
		var topmenu = super
		var mmodule = mproperty.intro_mclassdef.mmodule
		var mproject = mmodule.mgroup.mproject
		var mclass = mproperty.intro_mclassdef.mclass
		topmenu.add_link new TplLink("{mproject.nitdoc_url}", "{mproject.nitdoc_name}")
		topmenu.add_link new TplLink("{mclass.nitdoc_url}", "{mclass.nitdoc_name}")
		topmenu.add_link new TplLink(page_url, mproperty.nitdoc_name)
		return topmenu
	end

	private fun tpl_intro: TplSection do
		var title = new Template
		title.add mproperty.nitdoc_name
		title.add mproperty.intro.tpl_signature
		var section = new TplSection.with_title("top", title)
		section.subtitle = mproperty.tpl_namespace
		section.summary_title = mproperty.nitdoc_name
		return section
	end

	private fun tpl_properties(parent: TplSection) do
		# intro title
		var ns = mproperty.intro.mclassdef.mmodule.tpl_namespace
		var section = new TplSection("intro")
		var title = new Template
		title.add "Introduction in "
		title.add ns
		section.title = title
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
				title = new Template
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

