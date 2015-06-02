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

# Introduces templates that compose the documentation in console rendering.
module console_templates

import console_model
import doc_phases::doc_structure

# Renders the page displayable as ASCII.
redef class DocPage
	super Template

	# Renders the footer and content.
	private fun render_content do add root

	# Renders the whole page
	redef fun rendering do render_content
end

redef class DocComposite
	super Template

	# Title that can be decorated for console display.
	#
	# Set as `null` if you don't want to display a title.
	var cs_title: nullable String is writable, lazy do return title

	# Subtitle that can be decorated for console display.
	#
	# Set as `null` if you don't want to display a subtitle.
	var cs_subtitle: nullable String is noinit, writable

	# Renders the element `cs_title` and `cs_subtitle` as any.
	fun render_title do
		if cs_title != null then
			add "{"#" * depth} ".blue.bold
			addn cs_title.blue.bold
		end
		if cs_subtitle != null then
			addn cs_subtitle.gray.bold
		end
		if cs_title != null or cs_subtitle != null then addn ""
	end

	# Renders the element body.
	fun render_body do for child in children do add child.write_to_string

	redef fun rendering do
		render_title
		render_body
	end
end

redef class DocRoot
	redef fun rendering do render_body
end

redef class ConcernSection
	redef var cs_title is lazy do return "in {mentity.cs_namespace}"
	redef var cs_subtitle is lazy do return mentity.cs_declaration

	redef fun rendering do
		var mentity = self.mentity
		if mentity isa MGroup and mentity.mproject.root == mentity then
			render_body
		else
			super
		end
	end
end

redef class MEntityComposite
	redef var cs_title is lazy do return mentity.cs_name
	redef var cs_subtitle is lazy do return mentity.cs_namespace
end

redef class IntroArticle
	redef fun render_body do
		addn "    {mentity.cs_declaration.bold}"
		addn "    {mentity.cs_location.gray.bold}"
		addn ""
		var comment = mentity.cs_comment
		if comment != null then
			add comment
		end
		addn ""
		super
	end
end

redef class ConcernsArticle
	redef fun render_body do
		var w = new StringWriter
		concerns.write_to(w)
		addn w.to_s
	end
end

redef class DefinitionArticle
	# If short, displays only synopsyses.
	var is_short = false is writable

	redef fun render_body do
		addn "    {mentity.cs_visibility_color(mentity.cs_declaration).bold}"
		addn "    {mentity.cs_location.gray.bold}"
		addn ""
		var comment
		if is_short then
			comment = mentity.cs_short_comment
		else
			comment = mentity.cs_comment
		end
		if comment != null then
			add comment
		end
		addn ""
		super
	end
end

redef class MEntitiesListArticle
	redef fun render_body do
		for mentity in mentities do
			addn mentity.cs_short_list_item
		end
	end
end
