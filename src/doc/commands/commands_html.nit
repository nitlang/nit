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

# Render commands results as HTML
module commands_html

import commands::commands_graph
import commands::commands_usage

import templates::templates_html
import doc_down
import highlight

redef class DocCommand

	# Render results as a HTML string
	fun to_html: Writable do return "<p class='text-danger'>Not yet implemented</p>"
end

redef class CmdMessage

	# Render the message as a HTML string
	fun to_html: Writable is abstract
end

redef class CmdError
	redef fun to_html do return "<p class='text-danger'>Error: {to_s}</p>"
end

redef class CmdWarning
	redef fun to_html do return "<p class='text-warning'>Warning: {to_s}</p>"
end

# Model commands

redef class CmdEntity
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""
		return mentity.html_link.write_to_string
	end
end

redef class CmdEntities
	redef fun to_html do
		var mentities = self.results
		if mentities == null then return ""

		var tpl = new Template
		tpl.add "<ul>"
		for mentity in mentities do
			var mdoc = mentity.mdoc_or_fallback
			tpl.add "<li>"
			tpl.add mentity.html_link
			if mdoc != null then
				tpl.add " - "
				tpl.add mdoc.html_synopsis
			end
			tpl.add "</li>"
		end
		tpl.add "</ul>"
		return tpl.write_to_string
	end
end

redef class CmdComment
	redef fun to_html do
		var mentity = self.mentity
		if mentity == null then return ""

		var mdoc = self.mdoc
		var tpl = new Template
		tpl.add "<h3>"
		# FIXME comments left here until I figure out what to do about the presentation options
		# if not opts.has_key("no-link") then
			tpl.add mentity.html_link
		# end
		if mdoc != null then
			# if not opts.has_key("no-link") and not opts.has_key("no-synopsis") then
				tpl.add " - "
			# end
			# if not opts.has_key("no-synopsis") then
				tpl.add mdoc.html_synopsis
			# end
		end
		tpl.add "</h3>"
		if mdoc != null then
			# if not opts.has_key("no-comment") then
				tpl.add mdoc.html_comment
			# end
		end
		return tpl.write_to_string
	end
end

redef class CmdEntityCode
	redef fun to_html do
		var output = render_code(node)
		if output == null then return ""
		return "<pre>{output.write_to_string}</pre>"
	end
end

redef class CmdAncestors
	redef fun to_html do return super # FIXME lin
end

redef class CmdParents
	redef fun to_html do return super # FIXME lin
end

redef class CmdChildren
	redef fun to_html do return super # FIXME lin
end

redef class CmdDescendants
	redef fun to_html do return super # FIXME lin
end

redef class CmdFeatures
	redef fun to_html do return super # FIXME lin
end

redef class CmdLinearization
	redef fun to_html do return super # FIXME lin
end

# Usage commands

redef class CmdNew
	redef fun to_html do return super # FIXME lin
end

redef class CmdCall
	redef fun to_html do return super # FIXME lin
end

redef class CmdReturn
	redef fun to_html do return super # FIXME lin
end

redef class CmdParam
	redef fun to_html do return super # FIXME lin
end

# Graph commands

redef class CmdGraph
	redef fun to_html do
		var output = render
		if output == null then return ""
		return output.write_to_string
	end
end
