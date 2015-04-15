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

# Render the DocModel pages as HTML pages.
#
# FIXME this module is all f*cked up to maintain compatibility with
# the original `doc_templates` and `doc_model` modules.
# This will change in further refactorings.
module doc_html

import doc_structure
import doc_hierarchies
import doc_intros_redefs
import doc_graphs
import html_templates

redef class ToolContext

	# File pattern used to link documentation to source code.
	var opt_source = new OptionString("link for source (%f for filename, " +
		"%l for first line, %L for last line)", "--source")

	# Directory where the CSS and JS is stored.
	var opt_sharedir = new OptionString("directory containing nitdoc assets", "--sharedir")

	# Use a shareurl instead of copy shared files.
	#
	# This is usefull if you don't want to store the Nitdoc templates with your
	# documentation.
	var opt_shareurl = new OptionString("use shareurl instead of copy shared files", "--shareurl")

	# Use a custom title for the homepage.
	var opt_custom_title = new OptionString("custom title for homepage", "--custom-title")

	# Display a custom brand or logo in the documentation top menu.
	var opt_custom_brand = new OptionString("custom link to external site", "--custom-brand")

	# Display a custom introduction text before the projects overview.
	var opt_custom_intro = new OptionString("custom intro text for homepage", "--custom-overview-text")
	# Display a custom footer on each documentation page.
	#
	# Generally used to display the documentation or product version.
	var opt_custom_footer = new OptionString("custom footer text", "--custom-footer-text")

	# Piwik tracker URL.
	#
	# If you want to monitor your visitors.
	var opt_piwik_tracker = new OptionString("Piwik tracker URL (ex: nitlanguage.org/piwik/)", "--piwik-tracker")

	# Piwik tracker site id.
	var opt_piwik_site_id = new OptionString("Piwik site ID", "--piwik-site-id")

	# These options are not currently used in Nitdoc.

	# FIXME redo the plugin
	var opt_github_upstream = new OptionString("Git branch where edited commits will be pulled into (ex: user:repo:branch)", "--github-upstream")
	# FIXME redo the plugin
	var opt_github_base_sha1 = new OptionString("Git sha1 of base commit used to create pull request", "--github-base-sha1")
	# FIXME redo the plugin
	var opt_github_gitdir = new OptionString("Git working directory used to resolve path name (ex: /home/me/myproject/)", "--github-gitdir")

	redef init do
		super

		option_context.add_option(
			opt_source, opt_sharedir, opt_shareurl, opt_custom_title,
			opt_custom_footer, opt_custom_intro, opt_custom_brand,
			opt_github_upstream, opt_github_base_sha1, opt_github_gitdir,
			opt_piwik_tracker, opt_piwik_site_id)
	end

	redef fun process_options(args) do
		super
		var upstream = opt_github_upstream
		var base_sha = opt_github_base_sha1
		var git_dir = opt_github_gitdir
		var opts = [upstream.value, base_sha.value, git_dir.value]
		if not opts.has_only(null) and opts.has(null) then
			print "Option Error: options {upstream.names.first}, " +
				"{base_sha.names.first} and {git_dir.names.first} " +
				"are required to enable the GitHub plugin"
			exit 1
		end
	end
end

# Render the Nitdoc as a HTML website.
class RenderHTMLPhase
	super DocPhase

	# Used to sort sidebar elements by name.
	var name_sorter = new MEntityNameSorter

	redef fun apply do
		init_output_dir
		for page in doc.pages do
			page.render(self, doc).write_to_file("{ctx.output_dir.to_s}/{page.html_url}")
		end
	end

	# Creates the output directory and imports assets files form `resources/`.
	fun init_output_dir do
		# create destination dir if it's necessary
		var output_dir = ctx.output_dir
		if not output_dir.file_exists then output_dir.mkdir
		# locate share dir
		var sharedir = ctx.opt_sharedir.value
		if sharedir == null then
			var dir = ctx.nit_dir
			sharedir = dir/"share/nitdoc"
			if not sharedir.file_exists then
				print "Error: cannot locate nitdoc share files. Uses --sharedir or envvar NIT_DIR"
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

	# A source link template for a given location
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
end

redef class DocPage

	# Render the page as a html template.
	private fun render(v: RenderHTMLPhase, doc: DocModel): Writable do
		var shareurl = "."
		if v.ctx.opt_shareurl.value != null then
			shareurl = v.ctx.opt_shareurl.value.as(not null)
		end

		# init page options
		self.shareurl = shareurl
		self.footer = v.ctx.opt_custom_footer.value
		self.body_attrs.add(new TagAttribute("data-bootstrap-share", shareurl))

		# build page
		init_title(v, doc)
		init_sidebar(v, doc)
		init_topmenu(v, doc)
		init_content(v, doc)

		# piwik tracking
		var tracker_url = v.ctx.opt_piwik_tracker.value
		var site_id = v.ctx.opt_piwik_site_id.value
		if tracker_url != null and site_id != null then
			self.scripts.add new TplPiwikScript(tracker_url, site_id)
		end
		return self
	end

	# FIXME diff hack
	# all properties below are roughly copied from `doc_pages`

	# Build page title string
	fun init_title(v: RenderHTMLPhase, doc: DocModel) is abstract

	# Build top menu template if any.
	fun init_topmenu(v: RenderHTMLPhase, doc: DocModel) do
		topmenu = new DocTopMenu
		var brand = v.ctx.opt_custom_brand.value
		if brand != null then
			var tpl = new Template
			tpl.add "<span class='navbar-brand'>"
			tpl.add brand
			tpl.add "</span>"
			topmenu.brand = tpl
		end
		var title = "Overview"
		if v.ctx.opt_custom_title.value != null then
			title = v.ctx.opt_custom_title.value.to_s
		end
		topmenu.add_li new ListItem(new Link("index.html", title))
		topmenu.add_li new ListItem(new Link("search.html", "Index"))
		topmenu.active_item = topmenu.items.first
	end

	# Build page sidebar if any.
	fun init_sidebar(v: RenderHTMLPhase, doc: DocModel) do
		sidebar = new TplSidebar
	end

	# Build page content template.
	fun init_content(v: RenderHTMLPhase, doc: DocModel) do end
end

redef class OverviewPage
	redef var html_url = "index.html"

	redef fun init_title(v, doc) do
		title = "Overview"
		if v.ctx.opt_custom_title.value != null then
			title = v.ctx.opt_custom_title.value.to_s
		end
	end

	# TODO this should be done in StructurePhase.
	redef fun init_content(v, doc) do
		# intro text
		var section = new TplSection.with_title("overview", title)
		var article = new TplArticle("intro")
		if v.ctx.opt_custom_intro.value != null then
			article.content = v.ctx.opt_custom_intro.value.to_s
		end
		section.add_child article
		# Projects list
		var mprojects = doc.model.mprojects.to_a
		var sorter = new MConcernRankSorter
		sorter.sort mprojects
		var ssection = new TplSection.with_title("projects", "Projects")
		for mproject in mprojects do
			var sarticle = mproject.tpl_article
			sarticle.subtitle = mproject.tpl_declaration
			sarticle.content = mproject.tpl_definition
			var mdoc = mproject.mdoc_or_fallback
			if mdoc != null then
				sarticle.content = mdoc.tpl_short_comment
			end
			ssection.add_child sarticle
		end
		section.add_child ssection
		self.add_section section
	end

	redef fun init_sidebar(v, doc) do sidebar = new TplSidebar
end

redef class SearchPage
	redef var html_url = "search.html"
	redef fun init_title(v, doc) do title = "Index"

	redef fun init_topmenu(v, doc) do
		super
		topmenu.active_item = topmenu.items.last
	end

	redef fun init_sidebar(v, doc) do end

	# TODO this should be done in StructurePhase.
	redef fun init_content(v, doc) do
		var tpl = new TplSearchPage("search_all")
		var section = new TplSection("search")
		# title
		tpl.title = "Index"
		# modules list
		for mmodule in modules_list(v, doc) do
			tpl.modules.add mmodule.tpl_link
		end
		# classes list
		for mclass in classes_list(v, doc) do
			tpl.classes.add mclass.tpl_link
		end
		# properties list
		for mproperty in mprops_list(v, doc) do
			var m = new Template
			m.add mproperty.intro.tpl_link
			m.add " ("
			m.add mproperty.intro.mclassdef.mclass.tpl_link
			m.add ")"
			tpl.props.add m
		end
		section.add_child tpl
		self.add_section section
	end

	# Extract mmodule list to display (sorted by name)
	private fun modules_list(v: RenderHTMLPhase, doc: DocModel): Array[MModule] do
		var sorted = new Array[MModule]
		for mmodule in doc.model.mmodule_importation_hierarchy do
			if mmodule.is_fictive or mmodule.is_test_suite then continue
			sorted.add mmodule
		end
		v.name_sorter.sort(sorted)
		return sorted
	end

	# Extract mclass list to display (sorted by name)
	private fun classes_list(v: RenderHTMLPhase, doc: DocModel): Array[MClass] do
		var sorted = doc.mclasses.to_a
		v.name_sorter.sort(sorted)
		return sorted
	end

	# Extract mproperty list to display (sorted by name)
	private fun mprops_list(v: RenderHTMLPhase, doc: DocModel): Array[MProperty] do
		var sorted = doc.mproperties.to_a
		v.name_sorter.sort(sorted)
		return sorted
	end
end

redef class MEntityPage
	redef var html_url is lazy do return mentity.nitdoc_url
	redef fun init_title(v, doc) do title = mentity.html_name
	redef fun init_content(v, doc) do add_section root.start_rendering(v, doc, self)
end

# FIXME all clases below are roughly copied from `doc_pages` and adapted to new
# doc phases. This is to preserve the compatibility with the current
# `doc_templates` module.

redef class MGroupPage
	redef fun init_topmenu(v, doc) do
		super
		var mproject = mentity.mproject
		if not mentity.is_root then
			topmenu.add_li new ListItem(new Link(mproject.nitdoc_url, mproject.html_name))
		end
		topmenu.add_li new ListItem(new Link(html_url, mproject.html_name))
		topmenu.active_item = topmenu.items.last
	end

	redef fun init_sidebar(v, doc) do
		super
		var mclasses = new HashSet[MClass]
		mclasses.add_all intros
		mclasses.add_all redefs
		if mclasses.is_empty then return
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])

		var sorted = mclasses.to_a
		v.name_sorter.sort(sorted)
		for mclass in sorted do
			list.add_li tpl_sidebar_item(mclass)
		end
		sidebar.boxes.add new TplSideBox.with_content("All classes", list)
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

redef class MModulePage
	redef fun init_topmenu(v, doc) do
		super
		var mproject = mentity.mproject
		topmenu.add_li new ListItem(new Link(mproject.nitdoc_url, mproject.html_name))
		topmenu.add_li new ListItem(new Link(mentity.nitdoc_url, mentity.html_name))
		topmenu.active_item = topmenu.items.last
	end

	# Class list to display in sidebar
	redef fun init_sidebar(v, doc) do
		# TODO filter here?
		super
		var mclasses = new HashSet[MClass]
		mclasses.add_all mentity.filter_intro_mclasses(v.ctx.min_visibility)
		mclasses.add_all mentity.filter_redef_mclasses(v.ctx.min_visibility)
		if mclasses.is_empty then return
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])

		var sorted = mclasses.to_a
		v.name_sorter.sort(sorted)
		for mclass in sorted do
			list.add_li tpl_sidebar_item(mclass)
		end
		sidebar.boxes.add new TplSideBox.with_content("All classes", list)
	end

	private fun tpl_sidebar_item(def: MClass): TplListItem do
		var classes = def.intro.tpl_css_classes.to_a
		if def.intro_mmodule == self.mentity then
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

redef class MClassPage

	redef fun init_topmenu(v, doc) do
		super
		var mproject = mentity.intro_mmodule.mgroup.mproject
		topmenu.add_li new ListItem(new Link(mproject.nitdoc_url, mproject.html_name))
		topmenu.add_li new ListItem(new Link(html_url, mentity.html_name))
		topmenu.active_item = topmenu.items.last
	end

	redef fun init_sidebar(v, doc) do
		super
		var by_kind = new PropertiesByKind.with_elements(mclass_inherited_mprops(v, doc))
		var summary = new TplList.with_classes(["list-unstyled"])

		by_kind.sort_groups(v.name_sorter)
		for g in by_kind.groups do tpl_sidebar_list(g, summary)
		sidebar.boxes.add new TplSideBox.with_content("All properties", summary)
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
		if not mprop_is_local(mprop) then
			classes.add "inherit"
			var cls_url = mprop.intro.mclassdef.mclass.nitdoc_url
			var def_url = "{cls_url}#{mprop.nitdoc_id}"
			var lnk = new TplLink(def_url, mprop.html_name)
			var mdoc = mprop.intro.mdoc_or_fallback
			if mdoc != null then lnk.title = mdoc.short_comment
			var item = new Template
			item.add new TplLabel.with_classes(classes)
			item.add lnk
			return new TplListItem.with_content(item)
		end
		if mpropdefs.has(mprop.intro) then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new TplLabel.with_classes(classes)
		lnk.add mprop.tpl_anchor
		return new TplListItem.with_content(lnk)
	end

	private fun mclass_inherited_mprops(v: RenderHTMLPhase, doc: DocModel): Set[MProperty] do
		var res = new HashSet[MProperty]
		var local = mentity.local_mproperties(v.ctx.min_visibility)
		for mprop in mentity.inherited_mproperties(doc.mainmodule, v.ctx.min_visibility) do
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

	private fun mprop_is_local(mprop: MProperty): Bool do
		for mpropdef in mprop.mpropdefs do
			if self.mpropdefs.has(mpropdef) then return true
		end
		return false
	end
end

redef class MPropertyPage
	redef fun init_title(v, doc) do
		title = "{mentity.html_name}{mentity.tpl_signature.write_to_string}"
	end

	redef fun init_topmenu(v, doc) do
		super
		var mmodule = mentity.intro_mclassdef.mmodule
		var mproject = mmodule.mgroup.mproject
		var mclass = mentity.intro_mclassdef.mclass
		topmenu.add_li new ListItem(new Link(mproject.nitdoc_url, mproject.html_name))
		topmenu.add_li new ListItem(new Link(mclass.nitdoc_url, mclass.html_name))
		topmenu.add_li new ListItem(new Link(html_url, mentity.html_name))
		topmenu.active_item = topmenu.items.last
	end
end

redef class DocComposite
	# Render this DocComposite as HTML.
	#
	# FIXME needed to maintain TplSection compatibility.
	fun render(v: RenderHTMLPhase, doc: DocModel, page: MEntityPage, parent: TplSectionElt) is abstract
end

redef class DocRoot

	# Start the rendering from root.
	#
	# FIXME needed to maintain TplSection compatibility.
	fun start_rendering(v: RenderHTMLPhase, doc: DocModel, page: MEntityPage): TplSection do
		var section = new TplSection("top")
		var mentity = page.mentity
		section.title = mentity.html_name
		section.subtitle = mentity.tpl_declaration
		# FIXME ugly hack to avoid diff
		if mentity isa MGroup and mentity.is_root then
			section.title = mentity.mproject.html_name
			section.subtitle = mentity.mproject.tpl_declaration
		else if mentity isa MProperty then
			section.title = "{mentity.html_name}{mentity.intro.tpl_signature.write_to_string}"
			section.subtitle = mentity.tpl_namespace
			section.summary_title = mentity.html_name
		end
		render(v, doc, page, section)
		return section
	end

	redef fun render(v, doc, page, parent) do
		for child in children do
			child.render(v, doc, page, parent)
		end
	end
end

redef class ConcernSection
	redef fun render(v, doc, page, parent) do
		var section = new TplSection(mentity.nitdoc_id)
		var mentity = self.mentity
		# FIXME hideous hacks to avoid diff
		if page.mentity isa MModule and mentity isa MModule then
			render_concern_mmodule(page, section, mentity)
		else if page.mentity isa MClass and mentity isa MModule then
			render_concern_other(page, section, mentity)
		else if page.mentity isa MProperty and mentity isa MModule then
			render_concern_other(page, section, mentity)
		end
		for child in children do
			child.render(v, doc, page, section)
		end
		parent.add_child section
	end

	private fun render_concern_mmodule(page: MEntityPage, section: TplSection, mmodule: MModule) do
		var title = new Template
		if mmodule == page.mentity then
			title.add "in "
			section.summary_title = "in {mmodule.html_name}"
		else
			title.add "from "
			section.summary_title = "from {mmodule.html_name}"
		end
		title.add mmodule.tpl_namespace
		section.title = title
	end

	private fun render_concern_other(page: MEntityPage, section: TplSection, mmodule: MModule) do
		var title = new Template
		title.add "in "
		title.add mmodule.tpl_namespace
		section.title = title
		section.summary_title = "in {mmodule.html_name}"
	end
end

redef class MEntitySection
	redef fun render(v, doc, page, parent) do
		for child in children do child.render(v, doc, page, parent)
	end
end

redef class IntroArticle
	redef fun render(v, doc, page, parent) do
		var article = new TplArticle("intro")
		var mentity = self.mentity
		if mentity isa MModule then
			article.source_link = v.tpl_showsource(mentity.location)
		else if mentity isa MClassDef then
			article.source_link = v.tpl_showsource(mentity.location)
		else if mentity isa MPropDef then
			article.source_link = v.tpl_showsource(mentity.location)
		end
		# article.subtitle = mentity.tpl_declaration
		# FIXME diff hack
		if mentity isa MProperty then
			# intro title
			var ns = mentity.intro.mclassdef.mmodule.tpl_namespace
			var section = new TplSection("intro")
			var title = new Template
			title.add "Introduction in "
			title.add ns
			section.title = title
			section.summary_title = "Introduction"
			var intro = mentity.intro.tpl_article
			intro.source_link = v.tpl_showsource(mentity.intro.location)
			section.add_child intro
			parent.add_child section
		else
			article.content = mentity.tpl_definition
			parent.add_child article
		end
	end
end

redef class ConcernsArticle
	redef fun render(v, doc, page, parent) do
		# FIXME diff hack
		var title = "concerns"
		if page.mentity isa MProperty then title = "Concerns"
		parent.add_child new TplArticle.
			with_content(title, "Concerns", concerns.to_tpl)
	end
end

redef class DefinitionArticle
	redef fun render(v, doc, page, parent) do
		var article: TplArticle
		var mentity = self.mentity
		# FIXME hideous hacks...
		if mentity isa MModule then
			article = mentity.tpl_article
			article.subtitle = mentity.tpl_declaration
			article.content = mentity.tpl_definition
		else if mentity isa MClass then
			article = make_mclass_article(v, page)
		else if mentity isa MClassDef then
			article = make_mclassdef_article(v, page)
			article.source_link = v.tpl_showsource(mentity.location)
		else if mentity isa MPropDef and page.mentity isa MClass then
			article = make_mpropdef_article(v, doc, page)
		else
			article = mentity.tpl_article
			article.subtitle = mentity.tpl_declaration
			if mentity isa MPropDef then
				article.source_link = v.tpl_showsource(mentity.location)
			end
			if not mentity isa MVirtualTypeProp then
				# article.content = mentity.tpl_comment
			end
		end
		for child in children do
			child.render(v, doc, page, article)
		end
		parent.add_child article
	end

	# FIXME avoid diff while preserving TplArticle compatibility.

	private fun make_mclass_article(v: RenderHTMLPhase, page: MEntityPage): TplArticle do
		var article = mentity.tpl_article
		article.subtitle = mentity.tpl_namespace
		article.content = null
		return article
	end

	private fun make_mclassdef_article(v: RenderHTMLPhase, page: MEntityPage): TplArticle do
		var mclassdef = mentity.as(MClassDef)
		var article = mentity.tpl_article
		if mclassdef.is_intro and mclassdef.mmodule != page.mentity then
			article = mentity.tpl_short_article
		end
		var title = new Template
		title.add "in "
		title.add mclassdef.mmodule.tpl_namespace
		article.subtitle = title
		return article
	end

	private fun make_mpropdef_article(v: RenderHTMLPhase, doc: DocModel, page: MEntityPage): TplArticle
	do
		var mpropdef = mentity.as(MPropDef)
		var mprop = mpropdef.mproperty
		var article = new TplArticle(mprop.nitdoc_id)
		var title = new Template
		title.add mprop.tpl_icon
		title.add "<span id='{mpropdef.nitdoc_id}'></span>"
		if mpropdef.is_intro then
			title.add mprop.tpl_link
			title.add mprop.intro.tpl_signature
		else
			var cls_url = mprop.intro.mclassdef.mclass.nitdoc_url
			var def_url = "{cls_url}#{mprop.nitdoc_id}"
			var lnk = new TplLink.with_title(def_url, mprop.html_name,
					"Go to introduction")
			title.add "redef "
			title.add lnk
		end
		article.title = title
		article.title_classes.add "signature"
		article.summary_title = "{mprop.html_name}"
		article.subtitle = mpropdef.tpl_namespace
		if mpropdef.mdoc_or_fallback != null then
			article.content = mpropdef.mdoc_or_fallback.tpl_comment
		end
		# TODO move in its own phase? let's see after doc_template refactoring.
		# Add linearization
		var all_defs = new HashSet[MPropDef]
		for local_def in local_defs(page.as(MClassPage), mprop) do
			all_defs.add local_def
			var smpropdef = local_def
			while not smpropdef.is_intro do
				smpropdef = smpropdef.lookup_next_definition(
					doc.mainmodule, smpropdef.mclassdef.bound_mtype)
				all_defs.add smpropdef
			end
		end
		var lin = all_defs.to_a
		doc.mainmodule.linearize_mpropdefs(lin)
		if lin.length > 1 then
			var lin_article = new TplArticle("{mpropdef.nitdoc_id}.lin")
			lin_article.title = "Inheritance"
			var lst = new TplList.with_classes(["list-unstyled", "list-labeled"])
			for smpropdef in lin do
				lst.add_li smpropdef.tpl_inheritance_item
			end
			lin_article.content = lst
			article.add_child lin_article
		end
		return article
	end

	# Filter `page.mpropdefs` for this `mpropertie`.
	#
	# FIXME compatability with current templates.
	private fun local_defs(page: MClassPage, mproperty: MProperty): HashSet[MPropDef] do
		var mpropdefs = new HashSet[MPropDef]
		for mpropdef in page.mpropdefs do
			if mpropdef.mproperty == mproperty then
				mpropdefs.add mpropdef
			end
		end
		return mpropdefs
	end
end

redef class IntrosRedefsListArticle
	redef fun render(v, doc, page, parent) do
		if mentities.is_empty then return
		var title = list_title
		# FIXME diff hack
		var id = "intros"
		if title == "Redefines" then id = "redefs"
		var article = new TplArticle.with_title("{mentity.nitdoc_id}.{id}", title)
		var list = new TplList.with_classes(["list-unstyled", "list-labeled"])
		for mentity in mentities do
			list.add_li mentity.tpl_list_item
		end
		article.content = list
		parent.add_child article
	end
end

# FIXME compatibility with doc_templates.
redef class ImportationListSection
	redef fun render(v, doc, page, parent) do
		var section = new TplSection.with_title("dependencies", "Dependencies")
		for child in children do
			child.render(v, doc, page, section)
		end
		parent.add_child section
	end
end

# FIXME compatibility with doc_templates.
redef class InheritanceListSection
	redef fun render(v, doc, page, parent) do
		var section = new TplSection.with_title("inheritance", "Inheritance")
		for child in children do
			child.render(v, doc, page, section)
		end
		parent.add_child section
	end
end

# FIXME compatibility with doc_templates.
redef class HierarchyListArticle
	redef fun render(v, doc, page, parent) do
		if mentities.is_empty then return
		var title = list_title
		var id = list_title.to_lower
		var article = new TplArticle.with_title(id, title)
		var list = new TplList.with_classes(["list-unstyled", "list-definition"])
		for mentity in mentities do
			list.elts.add mentity.tpl_list_item
		end
		article.content = list
		parent.add_child article
	end
end

redef class GraphArticle
	redef fun render(v, doc, page, parent) do
		var output_dir = v.ctx.output_dir
		var path = output_dir / id
		var path_sh = path.escape_to_sh
		var file = new FileWriter.open("{path}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {path_sh}.png && test -f {path_sh}.s.dot && diff -- {path_sh}.dot {path_sh}.s.dot >/dev/null 2>&1 ; \} || \{ cp -- {path_sh}.dot {path_sh}.s.dot && dot -Tpng -o{path_sh}.png -Tcmapx -o{path_sh}.map {path_sh}.s.dot ; \}")
		var fmap = new FileReader.open("{path}.map")
		var map = fmap.read_all
		fmap.close

		var article = new TplArticle("graph")
		var alt = ""
		# FIXME diff hack
		# if title != null then
			# article.title = title
			# alt = "alt='{title.html_escape}'"
		# end
		article.css_classes.add "text-center"
		var content = new Template
		var name_html = id.html_escape
		content.add "<img src='{name_html}.png' usemap='#{name_html}' style='margin:auto' {alt}/>"
		content.add map
		article.content = content
		parent.add_child article
	end
end
