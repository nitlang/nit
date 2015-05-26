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

# Introduces templates that compose the documentation HTML rendering.
module html_templates

import html_model
import html::bootstrap
import doc_phases::doc_structure
import doc_phases::doc_hierarchies
import doc_phases::doc_graphs
import doc_phases::doc_intros_redefs
import doc_phases::doc_lin

# Renders the page as HTML.
redef class DocPage
	super Template

	# Page url.
	var html_url: String is writable, noinit

	# Directory where css, js and other assets can be found.
	var shareurl: String is writable, noinit

	# Attributes of the body tag element.
	var body_attrs = new Array[TagAttribute]

	# Top menu template if any.
	var topmenu: DocTopMenu is writable, noinit

	# Sidebar template if any.
	var sidebar: nullable DocSideBar = null is writable

	# Footer content if any.
	var footer: nullable Writable = null is writable

	# JS scripts to append at the end of the body
	var scripts = new Array[TplScript]

	# Renders the html `<head>`.
	private fun render_head do
		var css = (self.shareurl / "css").html_escape
		var vendors = (self.shareurl / "vendors").html_escape

		addn "<!DOCTYPE html>"
		addn "<head>"
		addn " <meta charset='utf-8'/>"
		addn " <!--link rel='stylesheet' href='{css}/Nitdoc.UI.css' type='text/css'/-->"
		addn " <link rel='stylesheet' href='{vendors}/bootstrap/css/bootstrap.min.css'/>"
		addn " <link rel='stylesheet' href='{css}/nitdoc.bootstrap.css'/>"
		addn " <link rel='stylesheet' href='{css}/nitdoc.css'/>"
		addn " <link rel='stylesheet' href='{css}/Nitdoc.QuickSearch.css'/>"
		addn " <link rel='stylesheet' href='{css}/Nitdoc.ModalBox.css'/>"
		addn " <link rel='stylesheet' href='{css}/Nitdoc.GitHub.css'/>"
		addn " <title>{title.html_escape}</title>"
		addn "</head>"
		add "<body"
		for attr in body_attrs do add attr
		addn ">"
	end

	# Renders the footer and content.
	private fun render_content do
		add root
		if footer != null then
			addn "<div class='well footer'>"
			add footer.as(not null)
			addn "</div>"
		end
	end

	# Render JS scripts
	private fun render_footer do
		var vendors = (self.shareurl / "vendors").html_escape
		var js = (self.shareurl / "js").html_escape

		addn "<script src='{vendors}/jquery/jquery-1.11.1.min.js'></script>"
		addn "<script src='{vendors}/jquery/jquery-ui-1.10.4.custom.min.js'></script>"
		addn "<script src='{vendors}/bootstrap/js/bootstrap.min.js'></script>"
		addn "<script data-main='{js}/nitdoc' src='{js}/lib/require.js'></script>"
		for script in scripts do add script
		addn """<script>
			$(function () {
				$("[data-toggle='tooltip']").tooltip();
				$("[data-toggle='popover']").popover();
			});
		</script>"""
		addn "</body>"
		addn "</html>"
	end

	# Render the whole page
	redef fun rendering do
		render_head
		addn "<div class='container-fluid'>"
		addn " <div class='row'>"
		add topmenu
		addn " </div>"
		addn " <div class='row' id='content'>"
		var sidebar = self.sidebar
		if sidebar != null then
			addn "<div class='col col-xs-3 col-lg-2'>"
			add sidebar
			addn "</div>"
			addn "<div class='col col-xs-9 col-lg-10' data-spy='scroll' data-target='.summary'>"
			render_content
			addn "</div>"
		else
			addn "<div class='col col-xs-12'>"
			render_content
			addn "</div>"
		end
		addn " </div>"
		addn "</div>"
		render_footer
	end

	# Render table of content for this page.
	fun html_toc: UnorderedList do
		var lst = new UnorderedList
		lst.css_classes.add "nav"
		for child in root.children do
			child.render_toc_item(lst)
		end
		return lst
	end
end

# Top menu bar template.
#
# FIXME should be a Bootstrap component template
# At this moment, the topmenu structure stills to specific to Nitdoc to use the
# generic component.
class DocTopMenu
	super UnorderedList

	# Brand link to display in first position of the top menu.
	#
	# This is where you want to put your logo.
	var brand: nullable Writable is noinit, writable

	# Active menu item.
	#
	# Depends on the current page, this allows to hilighted the current item.
	#
	# FIXME should be using Boostrap breadcrumbs component.
	# This will still like this to avoid diff and be changed in further fixes
	# when we will modify the output.
	var active_item: nullable ListItem is noinit, writable

	redef fun rendering do
		addn "<nav id='topmenu' class='navbar navbar-default navbar-fixed-top' role='navigation'>"
		addn " <div class='container-fluid'>"
		addn "  <div class='navbar-header'>"
		add "   <button type='button' class='navbar-toggle' "
		addn "       data-toggle='collapse' data-target='#topmenu-collapse'>"
		addn "    <span class='sr-only'>Toggle menu</span>"
		addn "    <span class='icon-bar'></span>"
		addn "    <span class='icon-bar'></span>"
		addn "    <span class='icon-bar'></span>"
		addn "   </button>"
		if brand != null then
			add "<span class='navbar-brand'>"
			add brand.write_to_string
			add "</span>"
		end
		addn "  </div>"
		addn "  <div class='collapse navbar-collapse' id='topmenu-collapse'>"
		addn "   <ul class='nav navbar-nav'>"
		for item in items do
			if item == active_item then item.css_classes.add "active"
			add item.write_to_string
		end
		addn "   </ul>"
		addn "  </div>"
		addn " </div>"
		addn "</nav>"
	end
end

# Nitdoc sidebar template.
class DocSideBar
	super Template

	# Sidebar contains `DocSideBox`.
	var boxes = new Array[DocSideBox]

	redef fun rendering do
		if boxes.is_empty then return
		addn "<div id='sidebar'>"
		for box in boxes do add box
		addn "</div>"
	end
end

# Something that can be put in a DocSideBar.
class DocSideBox
	super Template

	# Box HTML id, used for Bootstrap collapsing feature.
	#
	# Use `html_title.to_cmangle` by default.
	var id: String is lazy do return title.write_to_string.to_cmangle

	# Title of the box to display.
	var title: Writable

	# Content to display in the box.
	var content: Writable

	# Is the box opened by default?
	#
	# Otherwise, the user will have to clic on the title to display the content.
	#
	# Default is `true`.
	var is_open = true is writable

	redef fun rendering do
		var open = ""
		if is_open then open = "in"
		addn "<div class='panel'>"
		addn " <div class='panel-heading'>"
		add "  <a data-toggle='collapse' data-parent='#sidebar'"
		add "   data-target='#box_{id}' href='#'>"
		add title
		addn "  </a>"
		addn " </div>"
		addn " <div id='box_{id}' class='summary panel-body collapse {open}'>"
		add content
		addn " </div>"
		addn "</div>"
	end
end

redef class DocComposite
	super Template

	# HTML anchor id
	var html_id: String is writable, lazy do return id

	# Title to display if any.
	#
	# This title can be decorated with HTML.
	var html_title: nullable Writable is writable, lazy do return title

	# Subtitle to display if any.
	var html_subtitle: nullable Writable is noinit, writable

	# Render the element title and subtitle.
	private fun render_title do
		if html_title != null then
		var header = new Header(hlvl, html_title.write_to_string)
		header.css_classes.add "signature"
		if hlvl == 2 then header.css_classes.add "well well-sm"
		addn header
		end
		if html_subtitle != null then
			addn "<div class='info subtitle'>"
			addn html_subtitle.write_to_string
			addn "</div>"
		end
	end

	# Render the element body.
	private fun render_body do
		for child in children do addn child.write_to_string
	end

	redef fun rendering do
		if is_hidden then return
		render_title
		render_body
	end

	# Level <hX> for HTML heading.
	private fun hlvl: Int do return depth

	# A short, undecorated title that goes in the table of contents.
	#
	# By default, returns `html_title.to_s`, subclasses should redefine it.
	var html_toc_title: nullable String is lazy, writable do
		if html_title == null then return toc_title
		return html_title.write_to_string
	end

	# Is `self` hidden in the table of content?
	var is_toc_hidden = false is writable

	# Render this element in a table of contents.
	private fun render_toc_item(lst: UnorderedList) do
		if is_toc_hidden then return

		var content = new Template
		content.add new Link("#{html_id}", html_toc_title.to_s)
		if not children.is_empty then
			var sublst = new UnorderedList
			sublst.css_classes.add "nav"
			for child in children do
				child.render_toc_item(sublst)
			end
			content.add sublst
		end
		lst.add_li new ListItem(content)
	end

	# ID used in HTML tab labels.
	#
	# We sanitize it for Boostrap JS panels that do not like ":" and "." in ids.
	var html_tab_id: String is lazy do
		var id = html_id.replace(":", "")
		id = id.replace(".", "")
		return "{id}-tab"
	end
end

redef class DocRoot
	redef fun rendering do
		for child in children do addn child.write_to_string
	end
end

redef class DocSection
	super BSComponent

	redef fun rendering do
		if is_hidden then
			addn "<a id=\"{html_id}\"></a>"
			return
		end
		addn "<section{render_css_classes} id=\"{html_id}\">"
		render_title
		render_body
		addn "</section>"
	end
end

redef class DocArticle
	super BSComponent

	redef fun rendering do
		if is_hidden then return
		addn "<article{render_css_classes} id=\"{html_id}\">"
		render_title
		render_body
		addn "</article>"
	end
end

redef class TabbedGroup
	redef fun render_body do
		var tabs = new DocTabs("{html_id}.tabs", "")
		for child in children do
			if child.is_hidden then continue
			var title = child.html_toc_title or else child.toc_title or else ""
			tabs.add_panel new DocTabPanel(child.html_tab_id, title, child)
		end
		addn tabs
	end
end

redef class PanelGroup
	redef var html_title = null
	redef var toc_title is lazy do return title or else ""
	redef var is_toc_hidden = true
end

redef class HomeArticle
	redef var html_title = "Overview"

	# HTML content to display on the home page.
	#
	# This attribute is set by the `doc_render` phase who knows the context.
	var content: nullable String is noinit, writable

	redef fun render_body do
		var content = self.content
		if content != null then add content
		super
	end
end

redef class IndexArticle
	redef var html_title = "Index"

	redef fun render_body do
		addn "<div class='container-fluid'>"
		addn " <div class='row'>"
		render_list("Modules", mmodules)
		render_list("Classes", mclasses)
		render_list("Properties", mprops)
		addn "</div>"
		addn "</div>"
	end

	# Displays a list from the content of `mentities`.
	private fun render_list(title: String, mentities: Array[MEntity]) do
		if mentities.is_empty then return
		addn "<div class='col-xs-4'>"
		addn new Header(3, title)
		var lst = new UnorderedList
		for mentity in mentities do
			if mentity isa MProperty then
				var tpl = new Template
				tpl.add mentity.intro.html_link
				tpl.add " ("
				tpl.add mentity.intro.mclassdef.mclass.html_link
				tpl.add ")"
				lst.add_li new ListItem(tpl)
			else
				lst.add_li new ListItem(mentity.html_link)
			end
		end
		addn lst
		addn "</div>"
	end
end

redef class ProjectsSection
	redef var html_title = "Projects"
end

redef class MEntityComposite
	redef var html_title is lazy do return mentity.nitdoc_name
end

redef class MEntitySection
	redef var html_title is lazy do return mentity.html_name
	redef var html_subtitle is lazy do return mentity.html_declaration
end

redef class ConstructorsSection
	redef var html_title = "Constructors"
	redef var html_subtitle = null
	redef fun is_toc_hidden do return is_hidden
end

redef class ConcernSection
	redef var html_title is lazy do return "in {mentity.nitdoc_name}"
	redef fun is_toc_hidden do return is_hidden
end

redef class ImportationListSection
	redef var html_title is lazy do return "Dependencies"
end

redef class InheritanceListSection
	redef var html_title is lazy do return "Inheritance"
end

redef class IntroArticle
	redef var html_title = null
	redef var is_toc_hidden = true

	# Link to source to display if any.
	var html_source_link: nullable Writable is noinit, writable

	redef fun render_body do
		var tabs = new DocTabs("{html_id}.tabs", "")
		var comment = mentity.html_comment
		if comment != null then
			tabs.add_panel new DocTabPanel("{html_tab_id}-comment", "Comment", comment)
		end
		for child in children do
			if child.is_hidden then continue
			var title = child.html_toc_title or else child.toc_title or else ""
			tabs.add_panel new DocTabPanel(child.html_tab_id, title, child)
		end
		var lnk = html_source_link
		if lnk != null then
			tabs.drop_list.items.add new ListItem(lnk)
		end
		addn tabs
	end
end

redef class ConcernsArticle
	redef var html_title = "Concerns"
	redef fun render_body do add concerns.html_list
end

redef class DefinitionListArticle
	redef var html_title is lazy do
		var title = new Template
		title.add mentity.html_icon
		title.add mentity.html_link
		return title
	end

	redef var html_subtitle is lazy do return mentity.html_namespace
	redef var html_toc_title is lazy do return mentity.html_name
end

redef class DefinitionArticle
	redef var html_title is lazy do return mentity.html_name
	redef var html_subtitle is lazy do return mentity.html_declaration

	# Does `self` display only it's title and no body?
	#
	# FIXME diff hack
	var is_no_body: Bool = false is writable

	# Does `self` display only the short content as definition?
	#
	# FIXME diff hack
	var is_short_comment: Bool = false is writable

	# Link to source to display if any.
	var html_source_link: nullable Writable is noinit, writable

	redef fun render_body do
		var tabs = new DocTabs("{html_id}.tabs", "")
		if not is_no_body then
			var comment
			if is_short_comment then
				comment = mentity.html_short_comment
			else
				comment = mentity.html_comment
			end
			if comment != null then
				tabs.add_panel new DocTabPanel("{html_tab_id}-comment", "Comment", comment)
			end
		end
		for child in children do
			if child.is_hidden then continue
			var title = child.html_toc_title or else child.toc_title or else ""
			tabs.add_panel new DocTabPanel(child.html_tab_id, title, child)
		end
		var lnk = html_source_link
		if lnk != null then
			tabs.drop_list.items.add new ListItem(lnk)
		end
		addn tabs
	end
end

redef class HierarchyListArticle
	redef var is_toc_hidden = true

	redef fun render_body do
		var lst = new UnorderedList
		lst.css_classes.add "list-unstyled list-definition"
		for mentity in mentities do
			lst.add_li mentity.html_list_item
		end
		addn lst
	end
end

redef class IntrosRedefsSection
	redef var toc_title do return "Intros / Redefs"
	redef var html_title = null
	redef var html_subtitle = null
	redef var is_toc_hidden = true
end

redef class IntrosRedefsListArticle
	redef var is_toc_hidden = true

	redef fun render_body do
		var lst = new UnorderedList
		lst.css_classes.add "list-unstyled list-labeled"
		for mentity in mentities do
			lst.add_li mentity.html_list_item
		end
		add lst
	end
end

redef class DefinitionLinArticle
	redef var html_title is lazy do return "Linearization"
	redef var is_toc_hidden = true

	redef fun render_body do
		var lst = new UnorderedList
		lst.css_classes.add "list-unstyled list-labeled"
		for mentity in mentities do
			if not mentity isa MPropDef then continue # TODO handle all mentities
			var tpl = new Template
			tpl.add mentity.mclassdef.html_namespace
			var comment = mentity.mclassdef.html_short_comment
			if comment != null then
				tpl.add ": "
				tpl.add comment
			end
			var li = new ListItem(tpl)
			li.css_classes.add "signature"
			lst.add_li li
		end
		add lst
	end
end

redef class GraphArticle
	redef var html_title = null
	redef var is_toc_hidden = true

	# HTML map used to display link.
	#
	# This attribute is set by the `doc_render` phase who knows the context.
	var map: String is noinit, writable

	redef fun render_body do
		addn "<div class=\"text-center\">"
		addn " <img src='{graph_id}.png' usemap='#{graph_id}' style='margin:auto'"
		addn "  alt='{title or else ""}'/>"
		add map
		addn "</div>"
	end
end
