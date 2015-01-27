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

import doc_base
import phases

# Nitdoc base page
# Define page structure and properties
abstract class NitdocPage

	private var ctx: ToolContext

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
		var intros_article = ctx.mmodule_intros(mmodule)
		if intros_article != null then
			article.add_child intros_article
		end
		var redefs_article = ctx.mmodule_redefs(mmodule)
		if redefs_article != null then
			article.add_child redefs_article
		end
		return article
	end

	# MClassDef description template
	fun tpl_mclass_article(mclass: MClass, mclassdefs: Array[MClassDef]): TplArticle do
		var article = mclass.tpl_article
		if not mclassdefs.has(mclass.intro) then
			# add intro synopsys
			var intro_article = mclass.intro.tpl_short_article
			intro_article.source_link = ctx.tpl_showsource(mclass.intro.location)
			article.add_child intro_article
		end
		ctx.mainmodule.linearize_mclassdefs(mclassdefs)
		for mclassdef in mclassdefs do
			# add mclassdef full description
			var redef_article = mclassdef.tpl_article
			redef_article.source_link = ctx.tpl_showsource(mclassdef.location)
			article.add_child redef_article
			# mpropdefs list
			var intros_article = ctx.mclassdef_intros(mclassdef)
			if intros_article != null then
				redef_article.add_child intros_article
			end
			var redefs_article = ctx.mclassdef_redefs(mclassdef)
			if redefs_article != null then
				redef_article.add_child redefs_article
			end
		end
		return article
	end

	# MClassDef description template
	fun tpl_mclassdef_article(mclassdef: MClassDef): TplArticle do
		var article = mclassdef.tpl_article
		if mclassdef.is_intro then article.content = null
		article.source_link = ctx.tpl_showsource(mclassdef.location)
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
		article.source_link = ctx.tpl_showsource(mpropdef.location)
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
		var mprojects = ctx.model.mprojects.to_a
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
		for mmodule in ctx.model.mmodule_importation_hierarchy do
			if mmodule.is_fictive or mmodule.is_test_suite then continue
			sorted.add mmodule
		end
		ctx.name_sorter.sort(sorted)
		return sorted
	end

	# Extract mclass list to display (sorted by name)
	private fun classes_list: Array[MClass] do
		var sorted = new Array[MClass]
		for mclass in ctx.model.mclasses do
			if not ctx.filter_mclass(mclass) then continue
			sorted.add mclass
		end
		ctx.name_sorter.sort(sorted)
		return sorted
	end

	# Extract mproperty list to display (sorted by name)
	private fun mprops_list: Array[MProperty] do
		var sorted = new Array[MProperty]
		for mproperty in ctx.model.mproperties do
			if ctx.filter_mproperty(mproperty) then sorted.add mproperty
		end
		ctx.name_sorter.sort(sorted)
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
		self.concerns = ctx.model.concerns_tree(mgroup.collect_mmodules)
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
		ctx.name_sorter.sort(sorted)
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
		self.concerns = ctx.model.concerns_tree(mmodules2mclasses.keys)
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
		ctx.name_sorter.sort(sorted)
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
		article.source_link = ctx.tpl_showsource(location)
		article.content = def
		section.add_child article
		return section
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
				ctx.name_sorter.sort(mclasses)
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
		top.add_child ctx.tpl_importation(mmodule)
		tpl_concerns(top)
		tpl_mclasses(top)
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
		self.concerns = ctx.model.concerns_tree(mmodules2mprops.keys)
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

		by_kind.sort_groups(ctx.name_sorter)
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
					mpropdef = mpropdef.lookup_next_definition(ctx.mainmodule, mpropdef.mclassdef.bound_mtype)
					all_defs.add mpropdef
				end
			end
			var loc_lin = local_defs.to_a
			ctx.mainmodule.linearize_mpropdefs(loc_lin)
			var all_lin = all_defs.to_a
			ctx.mainmodule.linearize_mpropdefs(all_lin)
			articles.add tpl_mprop_article(loc_lin.first, loc_lin, all_lin)
		end
		return articles
	end

	redef fun tpl_content do
		tpl_sidebar_properties
		var top = tpl_intro
		top.add_child ctx.tpl_inheritance(mclass)
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
			ctx.mainmodule.linearize_mpropdefs(mpropdefs)
			var mmodule = mpropdefs.first.mclassdef.mmodule
			if not map.has_key(mmodule) then map[mmodule] = new HashSet[MProperty]
			map[mmodule].add mprop
		end
		return map
	end

	private fun mclass_inherited_mprops: Set[MProperty] do
		var res = new HashSet[MProperty]
		var local = mclass.local_mproperties(ctx.min_visibility)
		for mprop in mclass.inherited_mproperties(ctx.mainmodule, ctx.min_visibility) do
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
end

# Groups properties by kind.
private class PropertiesByKind
	# The virtual types.
	var virtual_types = new PropertyGroup[MVirtualTypeProp]("Virtual types")

	# The constructors.
	var constructors = new PropertyGroup[MMethod]("Contructors")

	# The attributes.
	var attributes = new PropertyGroup[MAttribute]("Attributes")

	# The methods.
	var methods = new PropertyGroup[MMethod]("Methods")

	# The inner classes.
	var inner_classes = new PropertyGroup[MInnerClass]("Inner classes")

	# All the groups.
	#
	# Sorted in the order they are displayed to the user.
	var groups: SequenceRead[PropertyGroup[MProperty]] = [
			virtual_types,
			constructors,
			attributes,
			methods,
			inner_classes: PropertyGroup[MProperty]]

	# Add each the specified property to the appropriate list.
	init with_elements(properties: Collection[MProperty]) do add_all(properties)

	# Add the specified property to the appropriate list.
	fun add(property: MProperty) do
		if property isa MMethod then
			if property.is_init then
				constructors.add property
			else
				methods.add property
			end
		else if property isa MVirtualTypeProp then
			virtual_types.add property
		else if property isa MAttribute then
			attributes.add property
		else if property isa MInnerClass then
			inner_classes.add property
		else
			abort
		end
	end

	# Add each the specified property to the appropriate list.
	fun add_all(properties: Collection[MProperty]) do
		for p in properties do add(p)
	end

	# Sort each group with the specified comparator.
	fun sort_groups(comparator: Comparator) do
		for g in groups do comparator.sort(g)
	end
end

# A Group of properties of the same kind.
private class PropertyGroup[E: MProperty]
	super Array[E]

	# The title of the group, as displayed to the user.
	var title: String
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
		self.concerns = ctx.model.concerns_tree(mmodules2mdefs.keys)
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
				ctx.name_sorter.sort(mpropdefs)
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

