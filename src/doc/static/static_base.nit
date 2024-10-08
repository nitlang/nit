# This file is part of NIT ( https://nitlanguage.org ).
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

# Base entities shared by all the nitdoc code
module static_base

import static_cards
import modelize

# The model of a Nitdoc documentation
class DocModel

	# Model used to select entities
	var model: Model

	# Mainmodule to resolve linearization
	var mainmodule: MModule

	# ModelBuilder used to retrieve AST nodes
	var modelbuilder: ModelBuilder

	# Catalog for building the homepage
	var catalog: Catalog

	# Model filters applied to the whole documentation
	var filter: ModelFilter

	# Specific Markdown processor to use within Nitdoc
	var md_processor: MarkdownProcessor is lazy do
		var parser = new CommandParser(model, mainmodule, modelbuilder, catalog)
		var proc = new CmdMarkdownProcessor(parser)
		proc.decorator = new CmdDecorator(model)
		return proc
	end

	# Specific Markdown processor to use within Nitdoc
	var inline_processor: MarkdownProcessor is lazy do
		var parser = new CommandParser(model, mainmodule, modelbuilder, catalog)
		var proc = new CmdMarkdownProcessor(parser)
		proc.decorator = new CmdInlineDecorator(model)
		return proc
	end

	# Do not generate dot graphs
	var no_dot = false is writable

	# Do not generate higlighted code
	var no_code = false is writable

	# Url to code when `no_code` is true
	var code_url: nullable String = null is writable

	# Url to assets
	var share_url: nullable String = null is writable

	# Custom menu brand
	var custom_brand: nullable String = null is writable

	# Custom homepage title
	var custom_title: nullable String = null is writable

	# Custom page footer
	var custom_footer: nullable String = null is writable

	# Custom homepage intro text
	var custom_intro: nullable String = null is writable

	# Optional tracker url
	var tracker_url: nullable String = null is writable

	# Optional tracker site id
	var piwik_site_id: nullable String = null is writable

	# Used to sort sidebar elements by name.
	var name_sorter = new MEntityNameSorter
end

# Documentation pages

# A documentation page abstraction
class DocPage

	# Title of this page
	var title: String is writable

	# Page tab panels
	#
	# Nitdoc pages are tabulated.
	# If a page has only one tab, it is presented as a single page.
	# With more than one tab, the HTML rendering process adds tab headers and
	# links.
	var tabs: Array[DocTab] = [main_tab] is lazy

	# The page main tab
	#
	# For most pages this tab is suffisent.
	# Subclasses can add more tabs.
	var main_tab = new DocTab("main", "Main")

	redef fun to_s do return title
end

# The Nitdoc overview page that displays the nit packages catalog
class PageHome
	super DocPage
end

# A DocPage documenting a MEntity
abstract class PageMEntity
	super DocPage
	autoinit mentity

	new(mentity: MEntity) do
		if mentity isa MPackage then
			return new PageMPackage(mentity)
		else if mentity isa MGroup then
			return new PageMGroup(mentity)
		else if mentity isa MModule then
			return new PageMModule(mentity)
		else if mentity isa MClass then
			return new PageMClass(mentity)
		else if mentity isa MProperty then
			return new PageMProperty(mentity)
		else
			print "Not yet implemented: Page for {mentity.full_name} ({mentity.class_name})"
			abort
		end
	end

	# Type of MEntity documented by this page
	type MENTITY: MEntity

	# MEntity documented by this page
	var mentity: MENTITY

	# For mentities the main tab is the doc tab
	redef var main_tab = new DocTab("doc", "Doc", true, "book")

	# API tab
	#
	# Where the MEntity API (groups, modules, classes, props) is displayed
	var api_tab = new DocTab("api", "API", false, "list")

	# Dependencies tab
	#
	# Where the MEntity importation or inheritance is displayed
	var dep_tab = new DocTab("inh", "Dependencies", false, "object-align-vertical")

	# Code tab
	#
	# Since all mentities does not have code, this tab in not in the `tabs` list
	# by default.
	var code_tab = new DocTab("code", "Code", false, "console")

	# Lienarization tab
	#
	# Since all mentities does not have a linearization, this tab in not in the
	# `tabs` list by default.
	var lin_tab = new DocTab("lin", "Linearization", false, "arrow-down")

	redef var tabs = [main_tab, api_tab, dep_tab] is lazy
	redef var title is lazy do return mentity.name
end

# A documentation page for a MPackage
class PageMPackage
	super PageMEntity

	redef type MENTITY: MPackage
	redef var api_tab = new DocTab("api", "Groups & Modules", false, "list")
end

# A documentation page about a MGroup
class PageMGroup
	super PageMEntity

	redef type MENTITY: MGroup
	redef var api_tab = new DocTab("api", "Subgroups & Modules", false, "list")
end

# A documentation page about a MModule
class PageMModule
	super PageMEntity

	redef type MENTITY: MModule
	redef var api_tab = new DocTab("api", "Classes", false, "list")
	redef var dep_tab = new DocTab("inh", "Importation", false, "object-align-vertical")
	redef var tabs = [main_tab, api_tab, dep_tab, code_tab] is lazy
end

# A documentation page about a MClass
class PageMClass
	super PageMEntity

	redef type MENTITY: MClass
	redef var api_tab = new DocTab("api", "All properties", false, "list")
	redef var dep_tab = new DocTab("inh", "Inheritance", false, "object-align-vertical")
	redef var tabs = [main_tab, api_tab, dep_tab, lin_tab] is lazy
end

# A documentation page about a MProperty
class PageMProperty
	super PageMEntity

	redef type MENTITY: MProperty
	redef var tabs = [main_tab, lin_tab] is lazy
end

# A page that lists the packages maintained and contributed by a person
class PagePerson
	super DocPage
	autoinit person

	# Person displayed in this page
	var person: Person

	redef var title is lazy do return person.name
end

# A page that lists the packages related to a tab
class PageTag
	super DocPage
	autoinit tag

	# Tag displayed in this page
	var tag: String

	redef var title is lazy do return tag
end

# Breadcrumbs

redef class MEntity
	# MEntities composing the breadcrumbs of a nitdoc page
	fun nitdoc_breadcrumbs: Array[MEntity] is abstract
end

redef class MPackage
	redef var nitdoc_breadcrumbs = [self: MEntity] is lazy
end

redef class MGroup
	redef var nitdoc_breadcrumbs is lazy do
		var parent = self.parent
		if parent != null then
			return parent.nitdoc_breadcrumbs + [self]
		end
		return mpackage.nitdoc_breadcrumbs
	end
end

redef class MModule
	redef var nitdoc_breadcrumbs is lazy do
		var mgroup = self.mgroup
		if mgroup != null then
			return mgroup.nitdoc_breadcrumbs + [self]
		end
		return [self]
	end
end

redef class MClass
	redef var nitdoc_breadcrumbs is lazy do
		return intro_mmodule.nitdoc_breadcrumbs + [self]
	end
end

redef class MClassDef
	redef var nitdoc_breadcrumbs is lazy do
		var res = new Array[MEntity].from(mmodule.nitdoc_breadcrumbs)
		res.add self
		return res
	end
end

redef class MProperty
	redef var nitdoc_breadcrumbs is lazy do
		var res = new Array[MEntity].from(intro_mclassdef.mclass.nitdoc_breadcrumbs)
		res.add self
		return res
	end
end

redef class MPropDef
	redef var nitdoc_breadcrumbs is lazy do
		var res = new Array[MEntity].from(mclassdef.nitdoc_breadcrumbs)
		res.add self
		return res
	end
end

# Documentation base elements

# A documentation tabulated view
class DocTab

	# Tab uniq id in the page
	var id: String is writable

	# Table title
	var title: String is writable

	# Is this tab displayed by default?
	var is_active = false is optional, writable

	# Tab header icon
	var icon: nullable String = null is optional, writable

	# Tab content
	var content = new Array[StaticCard]

	# Tab sidebar
	var sidebar = new DocSidebar

	# Tab metadata sidebar
	var metadata = new DocSidebar

	# Is this tab empty?
	fun is_empty: Bool do return content.is_empty
end

# A fictive tab used to display a link
class DocTabLink
	super DocTab
	autoinit(id, title, icon, url)

	# Link to open when the tab is clicked
	var url: String
end

# Nitdoc sidebar abstraction
class DocSidebar

	# A sidebar contains `StaticCard`
	var cards = new Array[StaticCard]

	# Is this sidebar empty?
	fun is_empty: Bool do return cards.is_empty
end
