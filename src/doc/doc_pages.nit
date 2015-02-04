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
		opts.add_option(opt_dir, opt_source, opt_sharedir, opt_shareurl)
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
end

# The search page
# Display a list of modules, classes and properties
class NitdocSearch
	super NitdocPage

	private var page = new TplPage
	redef fun tpl_page do return page

	redef fun tpl_title do return "Index"

	redef fun page_url do return "search.html"
end

# A group page
# Display a flattened view of the group
class NitdocGroup
	super NitdocPage

	private var mgroup: MGroup

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
end

# A module page
# Display the list of introduced and redefined classes in module
class NitdocModule
	super NitdocPage

	private var mmodule: MModule

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
end

# A class page
# Display a list properties defined or redefined for this class
class NitdocClass
	super NitdocPage

	private var mclass: MClass

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
end

# A MProperty page
class NitdocProperty
	super NitdocPage

	private var mproperty: MProperty

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
end

