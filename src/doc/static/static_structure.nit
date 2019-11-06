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

# Composes the pages of the static documentation
module static_structure

import static::static_base

redef class DocPage

	# Create the structure of this page
	fun apply_structure(doc: DocModel) do end
end

redef class PageHome
	redef fun apply_structure(doc) do
		var title = doc.custom_title or else "Welcome to Nitdoc!"
		var intro = doc.custom_intro

		if intro != null then
			main_tab.content.add new CardPageHeader(title)
			main_tab.content.add new CardText(intro)
		else
			main_tab.content.add new CardPageHeader(title, "The Nit API documentation.")
		end

		main_tab.content.add new CardCatalogStats(doc.catalog)
		main_tab.content.add new CardCatalogTags(doc.catalog)

		main_tab.content.add new CardSection(2, "Packages")
		var mpackages_sorter = new CatalogScoreSorter(doc.catalog)

		var mpackages = doc.catalog.mpackages.values.to_a
		mpackages_sorter.sort mpackages
		var list = new CardList("packages", "Packages")
		for mpackage in mpackages do
			list.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end
		# TODO pagination?
		main_tab.content.add list
	end
end

redef class PageMEntity
	# Concerns to display in this page.
	var concerns: nullable ConcernsTree = null

	redef fun apply_structure(doc) do
		build_main(doc)
		build_api(doc)
		build_dependencies(doc)
	end

	# Build the main tab (the one that contains the MDoc)
	fun build_main(doc: DocModel) do
		var mentity = self.mentity

		var sq = new CmdSummary(doc.model, doc.filter, mentity,
			markdown_processor = doc.inline_processor)
		sq.init_command

		main_tab.content.add new CardMDoc(mentity, mentity.mdoc_or_fallback)

		var summary = sq.summary
		if summary != null then
			main_tab.sidebar.cards.add new CardMdSummary(headlines = summary, md_processor = doc.inline_processor)
		end
	end

	# Build the API tab
	fun build_api(doc: DocModel) do
		var summary = new CardSummary

		var title = "All definitions"
		if mentity isa MPackage then title = "All groups and modules"
		if mentity isa MGroup then title = "All subgroups and modules"
		if mentity isa MModule then title = "All class definitions"
		if mentity isa MClass or mentity isa MClassDef then title = "All properties"

		var section = new CardSection(2, title)
		api_tab.content.add section
		summary.cards.add section

		var dq = new CmdFeatures(doc.model, doc.filter, mentity)
		dq.init_command
		var mentities = dq.results
		if mentities == null then return

		var list = new CardList("api", "API")
		for m in mentities do
			var card = new CardMEntity(m)
			card.id = "api_{card.id}" # avoid id conflicts with main tab
			list.cards.add card
			summary.cards.add card
		end
		api_tab.content.add list

		if summary.cards.not_empty then
			api_tab.sidebar.cards.add summary
		end
	end

	# Build the dependencies tab
	fun build_dependencies(doc: DocModel) do
		var summary = new CardSummary

		var model = doc.model
		var mainmodule = doc.mainmodule
		var filter = doc.filter

		if not doc.no_dot then
			var gq = new CmdInheritanceGraph(model, mainmodule, filter, mentity)
			gq.init_command
			var graph = gq.graph
			if graph != null then
				graph.draw(2, 2)
				dep_tab.content.add new CardGraph(mentity, graph)
			end
		end

		# No inheritance lists for `Object`
		if mentity isa MClass and mentity.name == "Object" then return

		var inh = new HashMap[String, CmdEntityList]
		inh["Ancestors"] = new CmdAncestors(model, mainmodule, filter, mentity, parents = false)
		inh["Parents"] = new CmdParents(model, mainmodule, filter, mentity)
		inh["Children"] = new CmdChildren(model, mainmodule, filter, mentity)
		inh["Descendants"] = new CmdDescendants(model, mainmodule, filter, mentity, children = false)

		for title, cmd in inh do
			cmd.init_command
			var results = cmd.results
			if results == null or results.is_empty then continue
			var section = new CardSection(3, title)
			dep_tab.content.add section
			summary.cards.add section

			var list = new CardList("inh", "Inheritance")
			for mentity in results do
				var card = new CardMEntity(mentity)
				list.cards.add card
				summary.cards.add card
			end
			dep_tab.content.add list
		end

		if summary.cards.not_empty then
			dep_tab.sidebar.cards.add summary
		end
	end

	# Build the code panel
	fun build_code(doc: DocModel) do
		var code_url = doc.code_url

		if not doc.no_code then
			var cq = new CmdEntityCode(doc.model, doc.modelbuilder, doc.filter, mentity)
			cq.init_command

			var code = cq.node
			if code == null then return
			code_tab.content.add new CardCode(mentity, code)
		else if doc.code_url != null then
			code_tab = new DocTabLink("code", "Code", "console", mentity.source_url(code_url))
		end
	end

	# Build the linearization panel
	fun build_linearization(doc: DocModel) do
		var summary = new CardSummary

		var lq = new CmdLinearization(doc.model, doc.mainmodule, doc.filter, mentity)
		lq.init_command

		var mentities = lq.results
		if mentities == null then return

		if mentity isa MClass or mentity isa MClassDef then
			if mentity.name == "Object" then return # No linearization for `Object`
			if mentity.name == "Sys" then return # No linearization for `Sys`
			var section = new CardSection(2, "Class definitions")
			lin_tab.content.add section
			summary.cards.add section
		else if mentity isa MProperty or mentity isa MPropDef then
			if mentity.name == "init" then return # No linearization for `init`
			if mentity.name == "SELF" then return # No linearization for `SELF`
			if mentity.name == "to_s" then return # No linearization for `to_s`
			var section = new CardSection(2, "Property definitions")
			lin_tab.content.add section
			summary.cards.add section
		end

		var list = new CardLinearizationList(mentity)
		for m in mentities do
			var url = mentity.source_url(doc.code_url)
			var node = doc.modelbuilder.mentity2node(m)
			if node == null then continue
			if doc.no_code then node = null
			if m == mentity or
			  (m isa MClassDef and m.is_intro) or
			  (m isa MPropDef and m.is_intro) then
				var card = new CardLinearizationDef(m, node, is_active = true, url)
				list.cards.add card
				summary.cards.add card
			else
				var card = new CardLinearizationDef(m, node, is_active = false, url)
				list.cards.add card
				summary.cards.add card
			end
		end
		lin_tab.content.add list

		if summary.cards.not_empty then
			lin_tab.sidebar.cards.add summary
		end
	end
end

redef class PageMPackage
	redef fun build_main(doc) do
		super
		main_tab.metadata.cards.add new CardMetadata(mentity, mentity.metadata,
			doc.catalog.mpackages_stats[mentity],
			doc.catalog.deps.successors(mentity).to_a,
			doc.catalog.deps.predecessors(mentity).to_a)
	end
end

redef class PageMModule
	redef fun apply_structure(doc) do
		super
		build_code(doc)
	end

	redef fun build_main(doc) do
		super

		var summary = new CardSummary(no_title = true)

		# Intros
		var cmd: CmdEntities = new CmdIntros(doc.model, doc.mainmodule, doc.filter, mentity)
		cmd.init_command
		var intros = cmd.results
		if intros != null and intros.not_empty then
			var section = new CardSection(3, "Introduced classes")
			main_tab.content.add section
			summary.cards.add section
			var cards = new CardList("intros", "Intros")
			for intro in intros do
				var card = new CardMEntity(intro)
				summary.cards.add card
				cards.cards.add card
			end
			main_tab.content.add cards
		end

		# Redefs
		cmd = new CmdRedefs(doc.model, doc.mainmodule, doc.filter, mentity)
		cmd.init_command
		var redefs = cmd.results
		if redefs != null and redefs.not_empty then
			var section = new CardSection(3, "Redefined classes")
			main_tab.content.add section
			summary.cards.add section
			var cards = new CardList("redefs", "Redefs")
			for prop in redefs do
				var card = new CardMEntity(prop)
				summary.cards.add card
				cards.cards.add card
			end
			main_tab.content.add cards
		end

		main_tab.sidebar.cards.add summary
	end
end

redef class PageMClass
	redef fun apply_structure(doc) do
		super
		build_code(doc)
		build_linearization(doc)
	end

	redef fun build_main(doc) do
		super

		var summary = new CardSummary(no_title = true)

		# Intros
		var cmd: CmdEntities = new CmdIntros(doc.model, doc.mainmodule, doc.filter, mentity)
		cmd.init_command
		var intros = cmd.results
		if intros != null and intros.not_empty then
			var section = new CardSection(3, "Introduced properties")
			main_tab.content.add section
			summary.cards.add section
			var cards = new CardList("intros", "Intros")
			for intro in intros do
				var card = new CardMEntity(intro)
				summary.cards.add card
				cards.cards.add card
			end
			main_tab.content.add cards
		end

		# Redefs
		cmd = new CmdRedefs(doc.model, doc.mainmodule, doc.filter, mentity)
		cmd.init_command
		var redefs = cmd.results
		if redefs != null and redefs.not_empty then
			var section = new CardSection(3, "Redefined properties")
			main_tab.content.add section
			summary.cards.add section
			var cards = new CardList("redefs", "Redefs")
			for prop in redefs do
				var card = new CardMEntity(prop)
				summary.cards.add card
				cards.cards.add card
			end
			main_tab.content.add cards
		end

		# Expand summary
		main_tab.sidebar.cards.add summary
	end

	redef fun build_api(doc) do
		var summary = new CardSummary

		var section = new CardSection(2, "All properties")
		api_tab.content.add section
		summary.cards.add section

		var dq = new CmdAllProps(doc.model, doc.mainmodule, doc.filter, mentity)
		dq.init_command
		var mentities = dq.results
		if mentities == null then return

		var list = new CardList("api", "API")
		for m in mentities do
			var card = new CardMEntity(m)
			list.cards.add card
			summary.cards.add card
		end
		api_tab.content.add list

		if summary.cards.not_empty then
			api_tab.sidebar.cards.add summary
		end
	end
end

redef class PageMProperty
	redef fun apply_structure(doc) do
		super
		build_code(doc)
		build_linearization(doc)
	end
end

redef class PagePerson
	redef fun apply_structure(doc) do
		var mpackages_sorter = new CatalogScoreSorter(doc.catalog)
		main_tab.content.add new CardPageHeader(person.name, person.email)

		var maint = doc.catalog.maint2proj[person]
		mpackages_sorter.sort maint
		var mlist = new CardList("maintained", "Maintained")
		for mpackage in maint do
			mlist.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end

		# TODO pagination?
		if maint.not_empty then
			main_tab.content.add new CardSection(3, "{maint.length} maintained packages")
			main_tab.content.add mlist
		end

		var contrib = doc.catalog.contrib2proj[person]
		mpackages_sorter.sort contrib
		var clist = new CardList("contribs", "Contributed")
		for mpackage in contrib do
			clist.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end

		# TODO pagination?
		if contrib.not_empty then
			main_tab.content.add new CardSection(3, "{contrib.length} contributed packages")
			main_tab.content.add clist
		end
	end
end

redef class PageTag
	redef fun apply_structure(doc) do
		var mpackages_sorter = new CatalogScoreSorter(doc.catalog)
		main_tab.content.add new CardPageHeader(tag)

		var mpackages = doc.catalog.tag2proj[tag]
		mpackages_sorter.sort mpackages
		var list = new CardList("packages", "Packages")
		for mpackage in mpackages do
			list.cards.add new CardCatalogPackage(doc.catalog, mpackage)
		end

		# TODO pagination?
		main_tab.content.add new CardSection(3, "{mpackages.length} packages")
		main_tab.content.add list
	end
end

redef class MEntity
	# Render a HTML link for the MEntity location
	private fun source_url(url_pattern: nullable String): String do
		var location = self.location
		var file = location.file

		if file == null then return location.to_s
		if url_pattern == null then return file.filename.simplify_path

		var url = url_pattern
		url = url.replace("%f", file.filename.simplify_path)
		url = url.replace("%l", location.line_start.to_s)
		url = url.replace("%L", location.line_end.to_s)
		return url.simplify_path
	end
end
