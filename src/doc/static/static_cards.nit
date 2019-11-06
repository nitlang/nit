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

# Cards templates for the static documentation
module static_cards

import templates::html_commands

# A card that can be rendered to HTML
#
# Basically, these cards are templates with additionnal data and behavior.
abstract class StaticCard
	super Template

	# Card title
	var title: String is writable

	# Card id
	var id: String is writable
end

# A list of cards
class CardList
	super StaticCard

	# Cards contained in this list
	var cards = new Array[StaticCard] is writable

	redef fun rendering do
		addn "<div id='{id}' class='card-list'>"
		for card in cards do
			addn card
		end
		addn "</div>"
	end
end

# Doc elements

# A card that display custom text data
class CardText
	super StaticCard
	autoinit(content)

	# Custom content from options
	var content: nullable String is writable

	redef var id = "home"
	redef var title = "Home"

	redef fun rendering do
		var content = self.content
		if content == null then return
		addn "<div>"
		addn content
		addn "</div>"
		addn "<hr/>"
	end
end

# A heading section
#
# It displays an heading at a specific level from 1 to 6.
class CardSection
	super StaticCard
	autoinit(level, title, subtitle)

	# Section heading level
	var level: Int is writable

	# Section subtitle
	var subtitle: nullable String is writable

	redef var id = title.to_cmangle is lazy

	redef fun rendering do
		addn "<h{level} id='{id}'>{title}</h{level}>"
	end
end

# A page header
class CardPageHeader
	super CardSection
	autoinit(title, subtitle)

	redef var level = 2

	redef fun rendering do
		addn "<div class='page-header'>"
		super
		var subtitle = self.subtitle
		if subtitle != null then
			addn "<p class='text-muted'>"
			addn subtitle
			addn "</p>"
		end
		addn "</div>"
	end
end

# A card that displays a summary of a list of cards
class CardSummary
	super CardList
	autoinit(no_title)

	redef var id = "summary"
	redef var title = "Summary"

	# Show the summary title
	var no_title: Bool = false is optional, writable

	redef fun rendering do
		if not no_title then
			addn "<h4>Summary</h4>"
		end
		addn "<div class='summary'>"
		addn " <ul class='list-unstyled'>"
		var sections = new Array[CardSection]
		for card in cards do
			if card isa CardSection then
				while sections.not_empty and sections.last.level >= card.level do
					sections.pop
				end
				sections.add card
			end
			var level = if sections.is_empty then 1 else sections.last.level
			if not card isa CardSection then level += 1
			addn "<li><a href='#{card.id}'><h{level}>{card.title}</h{level}></a></li>"
		end
		addn " </ul>"
		addn "</div>"
	end
end

# A card that displays the summary of a Markdown document
class CardMdSummary
	super CardMDoc
	autoinit(md_processor, headlines)

	# Markdown processor used to extract and render the content
	var md_processor: MarkdownProcessor is writable

	# Headlines found in the document
	var headlines: ArrayMap[String, HeadLine] is writable

	redef var id = "summary"
	redef var title = "Summary"

	redef fun rendering do
		addn "<h4>Summary</h4>"
		addn "<div class='summary'>"
		addn " <ul class='list-unstyled'>"
		for id, headline in headlines do
			var level = headline.level
			var title = md_processor.process(headline.title)
			addn "<li><a href='#{id}'><h{level}>{title}</h{level}></a></li>"
		end
		addn " </ul>"
		addn "</div>"
	end
end

# MEntity related cards

# A card about a mentity
#
# It displays the documentation about the model entity.
class CardMEntity
	super StaticCard
	autoinit(mentity, full_doc)

	# MEntity displayed in this card
	var mentity: MEntity is writable

	# Render the mentity full documentation?
	var full_doc = false is optional, writable

	redef var id = mentity.html_id is lazy
	redef var title = mentity.html_name is lazy

	redef fun rendering do
		addn """
		<div id='{{{id}}}' class='card'>
			<div class='card-left text-center'>
			{{{mentity.html_icon.write_to_string}}}
			</div>
			<div class='card-body'>
				<h5 class='card-heading'>
					{{{mentity.html_declaration.write_to_string}}}
				</h5>
				<p><small>{{{mentity.html_namespace.write_to_string}}}</small></p>"""
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			if full_doc then
				addn mdoc.html_documentation
			else
				addn mdoc.html_synopsis
			end
		end
		addn """
			</div>
		</div>"""
	end
end

# A card that displays the content of a MDoc
class CardMDoc
	super CardMEntity
	autoinit(mentity, mdoc, full_doc)

	# MDoc to display in this card
	var mdoc: nullable MDoc is writable

	redef fun rendering do
		var mdoc = self.mdoc
		if mdoc == null then return
		addn "<div id='{id}' class='card'>"
		addn " <div class='card-body nitdoc'>"
		addn mdoc.html_documentation
		addn " </div>"
		addn "</div>"
	end
end

# A card about the inheritance of a MEntity
class CardInheritance
	super CardMEntity

	# Ancestors list
	var ancestors: nullable Array[MEntity] is writable

	# Parents list
	var parents: nullable Array[MEntity] is writable

	# Children list
	var children: nullable Array[MEntity] is writable

	# Descendants list
	var descendants: nullable Array[MEntity] is writable

	redef var id = "inh_{super}" is lazy
	redef var title = "Inheritance" is lazy

	redef fun rendering do
		var ancestors = self.ancestors
		var descendants = self.descendants
		if ancestors == null and parents == null and
			children == null and descendants == null then return

		addn "<div id='{id}' class='card'>"
		addn " <div class='card-body'>"
		if ancestors != null and ancestors.length <= 10 then
			render_list("Ancestors", ancestors)
		else
			render_list("Parents", parents)
		end
		if descendants != null and descendants.length <= 10 then
			render_list("Descendants", descendants)
		else
			render_list("Children", children)
		end
		addn " </div>"
		addn "</div>"
	end

	private fun render_list(title: String, mentities: nullable Array[MEntity]) do
		if mentities == null or mentities.is_empty then return
		addn "<h4 id='{id}'>{title}</h4>"
		addn "<ul class='list-unstyled'>"
		for mentity in mentities do
			addn html_list_item(mentity)
		end
		addn "</ul>"
	end

	private fun html_list_item(mentity: MEntity): ListItem do
		var tpl = new Template
		tpl.add mentity.html_namespace
		var comment = mentity.mdoc_or_fallback
		if comment != null then
			tpl.add ": "
			tpl.add comment.html_synopsis
		end
		return new ListItem(tpl)
	end
end

# A card about the linearization of a MEntity
class CardLinearizationList
	super CardMEntity

	# Linearization cards contained in this list
	var cards = new Array[CardLinearizationDef] is writable

	redef var id = "lin_{super}" is lazy
	redef var title = "Linearization" is lazy

	redef fun rendering do
		if cards.is_empty then return

		addn "<div id='{id}'>"
		for card in cards do
			addn card
			if card == cards.last then break
			addn "<h4 class='text-muted text-center'>"
			addn " <span class='glyphicon glyphicon-chevron-up'></span>"
			addn "</h4>"
		end
		addn "</div>"
	end
end

# A card about a definition in a linearization list
class CardLinearizationDef
	super CardCode

	# Is this card displayed by default?
	var is_active: Bool = false is optional, writable

	# Link to external code repository
	#
	# Used if `node` is null
	var url: nullable String = null is optional, writable

	redef var id = "def_{super}" is lazy
	redef var title = mentity.full_name is lazy

	redef fun rendering do
		var url = self.url

		var cin = if is_active then "in" else ""
		var active = if is_active then "active" else ""
		addn """
		<div class='card {{{active}}}' id='{{{id}}}'>
			<div class='card-body'>
				<h5>
					{{{mentity.html_icon.write_to_string}}}
					{{{mentity.html_namespace.write_to_string}}}"""
		if node != null then
			addn """
					<div class='btn-bar'>
						<button class='btn btn-link' data-toggle='collapse'
						  data-target='#{{{mentity.html_id}}}'>
							<span class='glyphicon glyphicon-console' title='Show code' />
						</button>
					</div>"""
		else if url != null then
			addn """
					<div class='btn-bar'>
						<a class='btn btn-link' href='{{{url}}}'>
							<span class='glyphicon glyphicon-console' title='Show code' />
						</a>
					</div>"""
			var mdoc = mentity.mdoc
			if mdoc != null then
				addn "<br/><br/>"
				addn mdoc.html_documentation
			end
		end
		addn "</h5>"
		if node != null then
			addn """
				<div id='{{{mentity.html_id}}}' class='collapse {{{cin}}}'>
					<pre>"""
			render_code
			addn """</pre>
					<span class='text-muted'>{{{mentity.location.to_s}}}</span>
				</div>"""
		end
		addn """
			</div>
		</div>"""
	end
end

# A card that displays the code of a MEntity
class CardCode
	super CardMEntity
	autoinit(mentity, node)

	# AST node to display in this card
	var node: nullable ANode is writable

	redef var id = "code_{super}" is lazy
	redef var title = "Code"

	redef fun rendering do
		addn "<div id='{id}' class='card'>"
		addn " <div class='card-body'>"

		if node != null then
			addn "<pre>"
			render_code
			addn "</pre>"
		end
		addn "<span class='text-muted'>{mentity.location}</span>"

		addn " </div>"
		addn "</div>"
	end

	private fun render_code do
		var node = self.node
		if node == null then return
		var hl = new HtmlightVisitor
		hl.show_infobox = false
		hl.highlight_node node
		addn hl.html
	end
end

# A card that displays a graph
class CardGraph
	super CardMEntity
	autoinit(mentity, graph)

	# Graph to display in this card
	var graph: InheritanceGraph is writable

	redef var id = "graph_{super}" is lazy
	redef var title = "Graph"

	redef fun rendering do
		addn "<div id='{id}' class='card'>"
		addn " <div class='card-body'>"
		addn "  <div class='text-center'>"
		addn graph.graph.to_svg
		addn "  </div>"
		addn " </div>"
		addn "</div>"
	end
end

# Catalog related cards

# A card that displays Nit catalog related data
abstract class CardCatalog
	super StaticCard
	autoinit(catalog)

	# Catalog used to extract the data
	var catalog: Catalog is writable
end

# A card that displays statistics about a Nit catalog
class CardCatalogStats
	super CardCatalog

	redef var id = "catalog_stats"
	redef var title = "Stats"

	redef fun rendering do
		addn "<div id='{id}' class='container-fluid'>"
		for key, value in catalog.catalog_stats.to_map do
			addn "<span class='text-muted small'>"
			addn " <strong>{value}</strong>&nbsp;<span>{key}</span>&nbsp;"
			addn "</span>"
		end
		addn "</div>"
		addn "<hr/>"
	end
end

# A card that displays a list of tags
class CardCatalogTags
	super CardCatalog

	redef var id = "catalog_tags"
	redef var title = "Tags"

	# Sorter to sort tags alphabetically
	var tags_sorter = new CatalogTagsSorter is writable

	redef fun rendering do
		var tags = catalog.tag2proj.keys.to_a
		if tags.is_empty then return
		tags_sorter.sort(tags)

		addn "<h2 id='{id}'>Tags</h2>"
		addn "<div class='container-fluid'>"
		for tag in tags do
			addn "<div class='col-xs-6 col-sm-3 col-md-2'>"
			addn " <span class='badge'>{catalog.tag2proj[tag].length}</span>"
			addn " <a href='tag_{tag.to_cmangle}.html'>{tag}</a>"
			addn "</div>"
		end
		addn "</div>"
		addn "<hr/>"
	end
end

# A card that displays a package from a Nit catalog
class CardCatalogPackage
	super CardCatalog
	super CardMEntity
	autoinit(catalog, mentity)

	redef var id = "package_{super}" is lazy

	redef fun rendering do
		var mpackage = self.mentity
		if not mpackage isa MPackage then return

		addn """
			<div id='{{{id}}}' class='card'>
			 <div class='card-left text-center'>{{{mpackage.html_icon.write_to_string}}}</div>
			 <div class='card-body' style='width: 75%'>
			  <h5 class='card-heading'>
				{{{mentity.html_declaration.write_to_string}}}
				<small>&nbsp;"""
		for tag in mpackage.metadata.tags do
			add "<span>"
			add "<a href='tag_{tag.to_cmangle}.html' class='text-muted'>{tag}</a>"
			if tag != mpackage.metadata.tags.last then addn ", "
			add "</span>"
		end
		addn """</small>
				</h5>"""
		var mdoc = mentity.mdoc_or_fallback
		if mdoc != null then
			if full_doc then
				addn mdoc.html_documentation
			else
				addn mdoc.html_synopsis
			end
		end
		addn " </div>"
		addn " <div class='card-right' style='width: 25%'>"
		for maintainer in mpackage.metadata.maintainers do
			addn maintainer.to_html
		end
		addn " <br>"
		var license = mpackage.metadata.license
		if license != null then
			addn """
				 <span class='text-muted'>
				  <a href='http://opensource.org/licenses/{{{license}}}' class='text-muted'>
				   {{{license}}}
				  </a>
				</span>"""
		end
		addn " </div>"
		addn "</div>"
	end
end

# A card that displays the metadata about a package in the Nit catalog
class CardMetadata
	super CardMEntity
	autoinit(mentity, metadata, stats, deps, clients)

	# Package metadata to display
	var metadata: MPackageMetadata is writable

	# Package stats
	var stats: MPackageStats is writable

	# Package dependencies
	var deps: Array[MPackage] is writable

	# Package clients
	var clients: Array[MPackage] is writable

	redef var id = "metadata_{super}" is lazy
	redef var title = "Metadata"

	redef fun rendering do
		for maintainer in metadata.maintainers do
			addn """
				<p class='lead'>
					{{{maintainer.to_html}}}
				</p>"""
		end
		var license = metadata.license
		if license != null then
			addn """
				<span class='text-muted'>
					<a href='http://opensource.org/licenses/{{{license}}}'>{{{license}}}</a>
					license
				</span>"""
		end

		var homepage = metadata.homepage
		var browse = metadata.browse
		var issues = metadata.issues
		if homepage != null or browse != null or issues != null then
			addn """
				<h4>Links</h4>
				<ul class='list-unstyled'>"""
			if homepage != null then addn "<li><a href='{homepage}'>Homepage</a></li>"
			if browse != null then addn "<li><a href='{browse}'>Source Code</a></li>"
			if issues != null then addn "<li><a href='{issues}'>Issues</a></li>"
			addn "</ul>"
		end

		var git = metadata.git
		var last_date = metadata.last_date
		var first_date = metadata.first_date
		if git != null then
			addn """
				<h4>Git</h4>
				<ul class='list-unstyled'>
					<li><a href='{{{git}}}'>{{{git}}}</a></li>
				</ul>
				<span class='text-muted'><b>{{{stats.commits}}}</b> commits</span>
				<br>"""
			if last_date != null then
				addn """<b class=text-muted>Last:</b> {{{last_date}}}<br>"""
			end
			if first_date != null then
				addn """<b class=text-muted>First:</b> {{{first_date}}}"""
			end
		end

		addn """
			<h4>Quality</h4>
			<ul class='list-unstyled'>
				<li>{{{stats.documentation_score}}}% documented</li>
			</ul>"""

		if metadata.tags.not_empty then
			addn "<h4>Tags</h4>"
			for tag in metadata.tags do
				addn " <a href='tag_{tag.to_cmangle}.html'>{tag}</a>"
				if tag != metadata.tags.last then add ", "
			end
		end

		if deps.not_empty then
			addn "<h4>Dependencies</h4>"
			for dep in deps do
				add dep.html_link
				if dep != deps.last then add ", "
			end
		end

		if clients.not_empty then
			addn "<h4>Clients</h4>"
			for client in clients do
				add client.html_link
				if client != clients.last then add ", "
			end
		end

		if metadata.contributors.not_empty then
			addn """
				<h4>Contributors</h4>
				<ul class='list-unstyled'>"""
			for contrib in metadata.contributors do
				addn """<li>{{{contrib.to_html}}}</li>"""
			end
			addn "</ul>"
		end

		addn """
			<h4>Stats</h4>
			<ul class='list-unstyled'>
				<li>{{{stats.mmodules}}} modules</li>
				<li>{{{stats.mclasses}}} classes</li>
				<li>{{{stats.mmethods}}} methods</li>
				<li>{{{stats.loc}}} loc</li>
			</ul>"""
	end
end
