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

# Render source code pages.
module doc_code

import doc_structure

redef class ToolContext

	# File pattern used to link documentation to source code.
	var opt_source = new OptionString("link for source (%f for filename, " +
		"%l for first line, %L for last line)", "--source")

	redef init do
		super
		option_context.add_option(opt_source)
	end
end

# Code phase populates CodePage content with source code.
class CodePhase
	super DocPhase

	redef fun apply do
		for page in doc.pages.values do page.apply_source_link(self, doc)
	end
end

redef class DocPage

	# Populates `self` articles with source code links.
	#
	# See `CodePhase`.
	fun apply_source_link(v: CodePhase, doc: DocModel) do
		root.apply_source_link(v, doc, self)
	end
end

redef class DocComposite
	private fun apply_source_link(v: CodePhase, doc: DocModel, page: DocPage) do
		for child in children do child.apply_source_link(v, doc, page)
	end
end

redef class MEntityArticle
	# Location where source code links should point.
	var location: nullable Location = null

	# Location once formated with `ToolContext::opt_source`.
	var formatted_location: nullable String = null

	redef fun apply_source_link(v, doc, page) do
		super
		# MEntity location
		var mentity = self.mentity
		if mentity isa MModule then
			location = mentity.location
		else if mentity isa MClass then
			location = mentity.intro.location
		else if mentity isa MClassDef then
			location = mentity.location
		else if mentity isa MProperty then
			location = mentity.intro.location
		else if mentity isa MPropDef then
			location = mentity.location
		end
		if location == null then return
		# Format source location according to `opt_source`
		var format = v.ctx.opt_source.value
		if format == null then
			formatted_location = location.file.filename.simplify_path
		else
			format = format.replace("%f", location.file.filename.simplify_path)
			format = format.replace("%l", location.line_start.to_s)
			format = format.replace("%L", location.line_end.to_s)
			formatted_location = format.simplify_path
		end
	end
end
