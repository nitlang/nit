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
		for page in doc.pages.values do
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

	# Returns a HTML link for a given `location`.
	fun html_source_link(location: nullable Location): nullable String
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
		init_topmenu(v, doc)
		init_content(v, doc)
		init_sidebar(v, doc)

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
	fun init_title(v: RenderHTMLPhase, doc: DocModel) do end

	# Build top menu template if any.
	fun init_topmenu(v: RenderHTMLPhase, doc: DocModel) do
		topmenu = new DocTopMenu
		topmenu.brand = v.ctx.opt_custom_brand.value
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
		sidebar = new DocSideBar
		sidebar.boxes.add new DocSideBox("Summary", html_toc)
	end

	# Build page content template.
	fun init_content(v: RenderHTMLPhase, doc: DocModel) do
		root.init_html_render(v, doc, self)
	end
end

redef class OverviewPage
	redef var html_url = "index.html"

	redef fun init_title(v, doc) do
		title = "Overview"
		if v.ctx.opt_custom_title.value != null then
			title = v.ctx.opt_custom_title.value.to_s
		end
	end
end

redef class SearchPage
	redef var html_url = "search.html"
	redef fun init_title(v, doc) do title = "Index"

	redef fun init_topmenu(v, doc) do
		super
		topmenu.active_item = topmenu.items.last
	end

	redef fun init_sidebar(v, doc) do end
end

redef class MEntityPage
	redef var html_url is lazy do return mentity.nitdoc_url
	redef fun init_title(v, doc) do title = mentity.html_name
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
		var list = new UnorderedList
		list.css_classes.add "list-unstyled list-labeled"
		var sorted = mclasses.to_a
		v.name_sorter.sort(sorted)
		for mclass in sorted do
			list.add_li tpl_sidebar_item(mclass)
		end
		sidebar.boxes.add new DocSideBox("All classes", list)
		sidebar.boxes.last.is_open = false
	end

	private fun tpl_sidebar_item(def: MClass): ListItem do
		var classes = def.intro.css_classes
		if intros.has(def) then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new DocHTMLLabel.with_classes(classes)
		lnk.add def.html_link
		return new ListItem(lnk)
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
		var list = new UnorderedList
		list.css_classes.add "list-unstyled list-labeled"

		var sorted = mclasses.to_a
		v.name_sorter.sort(sorted)
		for mclass in sorted do
			list.add_li tpl_sidebar_item(mclass)
		end
		sidebar.boxes.add new DocSideBox("All classes", list)
		sidebar.boxes.last.is_open = false
	end

	private fun tpl_sidebar_item(def: MClass): ListItem do
		var classes = def.intro.css_classes
		if def.intro_mmodule == self.mentity then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var lnk = new Template
		lnk.add new DocHTMLLabel.with_classes(classes)
		lnk.add def.html_link
		return new ListItem(lnk)
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
		var summary = new UnorderedList
		summary.css_classes.add "list-unstyled"

		by_kind.sort_groups(v.name_sorter)
		for g in by_kind.groups do tpl_sidebar_list(g, summary)
		sidebar.boxes.add new DocSideBox("All properties", summary)
		sidebar.boxes.last.is_open = false
	end

	private fun tpl_sidebar_list(mprops: PropertyGroup[MProperty], summary: UnorderedList) do
		if mprops.is_empty then return
		var list = new UnorderedList
		list.css_classes.add "list-unstyled list-labeled"
		for mprop in mprops do
			list.add_li tpl_sidebar_item(mprop)
		end
		var content = new Template
		content.add mprops.title
		content.add list
		var li = new ListItem(content)
		summary.add_li li
	end

	private fun tpl_sidebar_item(mprop: MProperty): ListItem do
		var classes = mprop.intro.css_classes
		if not mprop_is_local(mprop) then
			classes.add "inherit"
			var cls_url = mprop.intro.mclassdef.mclass.nitdoc_url
			var def_url = "{cls_url}#article:{mprop.nitdoc_id}.definition"
			var lnk = new Link(def_url, mprop.html_name)
			var mdoc = mprop.intro.mdoc_or_fallback
			if mdoc != null then lnk.title = mdoc.short_comment
			var item = new Template
			item.add new DocHTMLLabel.with_classes(classes)
			item.add lnk
			return new ListItem(item)
		end
		if mpropdefs.has(mprop.intro) then
			classes.add "intro"
		else
			classes.add "redef"
		end
		var def = select_mpropdef(mprop)
		var anc = def.html_link_to_anchor
		anc.href = "#article:{def.nitdoc_id}.definition"
		var lnk = new Template
		lnk.add new DocHTMLLabel.with_classes(classes)
		lnk.add anc
		return new ListItem(lnk)
	end

	# Get the mpropdef contained in `self` page for a mprop.
	#
	# FIXME this method is used to translate a mprop into a mpropdefs for
	# section linking. A better page structure should avoid this...
	private fun select_mpropdef(mprop: MProperty): MPropDef do
		for mclassdef in mentity.mclassdefs do
			for mpropdef in mclassdef.mpropdefs do
				if mpropdef.mproperty == mprop then return mpropdef
			end
		end
		abort # FIXME is there a case where the prop is not found?
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
		title = "{mentity.html_name}{mentity.html_short_signature.write_to_string}"
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
	# Prepares the HTML rendering for this element.
	#
	# This visit is mainly used to set template attributes before rendering.
	fun init_html_render(v: RenderHTMLPhase, doc: DocModel, page: DocPage) do
		for child in children do child.init_html_render(v, doc, page)
	end
end

# FIXME hideous hacks to avoid diff
redef class MEntitySection
	redef fun init_html_render(v, doc, page) do
		if not page isa MEntityPage then return
		var mentity = self.mentity
		if mentity isa MGroup and mentity.is_root then
			html_title = mentity.mproject.html_name
			html_subtitle = mentity.mproject.html_declaration
		else if mentity isa MProperty then
			var title = new Template
			title.add mentity.html_name
			title.add mentity.html_signature
			html_title = title
			html_subtitle = mentity.html_namespace
			html_toc_title = mentity.html_name
		end
		super
	end
end

# FIXME hideous hacks to avoid diff
redef class ConcernSection
	redef fun init_html_render(v, doc, page) do
		if not page isa MEntityPage then return
		var mentity = self.mentity
		if page isa MGroupPage then
			html_title = null
			html_toc_title = mentity.html_name
			is_toc_hidden = false
		else if page.mentity isa MModule and mentity isa MModule then
			var title = new Template
			if mentity == page.mentity then
				title.add "in "
				html_toc_title = "in {mentity.html_name}"
			else
				title.add "from "
				html_toc_title = "from {mentity.html_name}"
			end
			title.add mentity.html_namespace
			html_title = title
		else if (page.mentity isa MClass and mentity isa MModule) or
				(page.mentity isa MProperty and mentity isa MModule) then
			var title = new Template
			title.add "in "
			title.add mentity.html_namespace
			html_title = title
			html_toc_title = "in {mentity.html_name}"
		end
		super
	end
end

# TODO redo showlink
redef class IntroArticle
	redef fun init_html_render(v, doc, page) do
		var mentity = self.mentity
		if mentity isa MModule then
			html_source_link = v.html_source_link(mentity.location)
		else if mentity isa MClassDef then
			html_source_link = v.html_source_link(mentity.location)
		else if mentity isa MPropDef then
			html_source_link = v.html_source_link(mentity.location)
		end
	end
end

# FIXME less hideous hacks...
redef class DefinitionArticle
	redef fun init_html_render(v, doc, page) do
		var mentity = self.mentity
		if mentity isa MProject or mentity isa MModule then
			var title = new Template
			title.add mentity.html_icon
			title.add mentity.html_namespace
			html_title = title
			html_toc_title = mentity.html_name
			if mentity isa MModule then
				html_source_link = v.html_source_link(mentity.location)
			end
		else if mentity isa MClassDef then
			var title = new Template
			title.add "in "
			title.add mentity.mmodule.html_namespace
			html_title = mentity.html_declaration
			html_subtitle = title
			html_toc_title = "in {mentity.html_name}"
			html_source_link = v.html_source_link(mentity.location)
			if page isa MEntityPage and mentity.is_intro and mentity.mmodule != page.mentity then
				is_short_comment = true
			end
			if page isa MModulePage then is_toc_hidden = true
		else if mentity isa MPropDef then
			if page isa MClassPage then
				var title = new Template
				title.add mentity.html_icon
				title.add mentity.html_declaration
				html_title = title
				html_subtitle = mentity.html_namespace
				html_toc_title = mentity.html_name
			else
				var title = new Template
				title.add "in "
				title.add mentity.mclassdef.html_link
				html_title = title
				html_toc_title = "in {mentity.mclassdef.html_name}"
			end
			html_source_link = v.html_source_link(mentity.location)
		end
		if page isa MGroupPage and mentity isa MModule then
			is_toc_hidden = true
		end
		super
	end
end

redef class HomeArticle
	redef fun init_html_render(v, doc, page) do
		if v.ctx.opt_custom_title.value != null then
			self.html_title = v.ctx.opt_custom_title.value.to_s
			self.html_toc_title = v.ctx.opt_custom_title.value.to_s
		end
		self.content = v.ctx.opt_custom_intro.value
		super
	end
end

redef class GraphArticle
	redef fun init_html_render(v, doc, page) do
		var output_dir = v.ctx.output_dir
		var path = output_dir / id
		var path_sh = path.escape_to_sh
		var file = new FileWriter.open("{path}.dot")
		file.write(dot)
		file.close
		sys.system("\{ test -f {path_sh}.png && test -f {path_sh}.s.dot && diff -- {path_sh}.dot {path_sh}.s.dot >/dev/null 2>&1 ; \} || \{ cp -- {path_sh}.dot {path_sh}.s.dot && dot -Tpng -o{path_sh}.png -Tcmapx -o{path_sh}.map {path_sh}.s.dot ; \}")
		var fmap = new FileReader.open("{path}.map")
		self.map = fmap.read_all
		fmap.close
	end
end
