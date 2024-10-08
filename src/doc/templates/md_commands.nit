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

# Render commands results as Markdown
module md_commands

import commands_catalog
import commands_graph
import commands_ini
import commands_main
import commands_usage

import highlight

redef class DocCommand

	# Render results as a Markdown string
	fun to_md: Writable do return "**Not yet implemented**"
end

redef class CmdMessage

	# Render the message as a HTML string
	fun to_md: Writable is abstract
end

redef class CmdError
	redef fun to_md do return "**Error: {to_s}**"
end

redef class CmdWarning
	redef fun to_md do return "**Warning: {to_s}**"
end

# Model commands

redef class CmdEntity
	redef fun to_md do
		var mentity = self.mentity
		if mentity == null then return ""
		return "`{mentity.name}`"
	end
end

redef class CmdEntities
	redef fun to_md do
		var mentities = self.results
		if mentities == null then return ""

		var tpl = new Template
		for mentity in mentities do
			var mdoc = mentity.mdoc_or_fallback
			tpl.add "* `{mentity}`"
			if mdoc != null then
				tpl.add " - "
				tpl.add mdoc.synopsis
			end
			tpl.add "\n"
		end
		return tpl.write_to_string
	end
end

redef class CmdComment
	redef fun to_md do
		var mentity = self.mentity
		if mentity == null then return ""

		var mdoc = self.mdoc
		var tpl = new Template
		tpl.add "### `{mentity}`"
		if mdoc != null then
			tpl.add " - "
			tpl.add mdoc.synopsis
		end
		tpl.add "\n"
		if mdoc != null then
			tpl.add mdoc.comment
		end
		return tpl.write_to_string
	end

	redef fun render_comment do
		var mdoc = self.mdoc
		if mdoc == null then return null

		if format == "md" then
			if full_doc then return mdoc.md_documentation
			return mdoc.md_synopsis
		end
		return super
	end
end

redef class CmdEntityLink
	redef fun to_md do
		var mentity = self.mentity
		if mentity == null then return ""
		return "`{mentity}`"
	end
end

redef class CmdCode
	redef fun to_md do
		var node = self.node
		if node == null then return ""

		var code = render_code(node)
		var tpl = new Template
		tpl.addn "~~~nit"
		tpl.add code.write_to_string
		tpl.addn "~~~"
		return tpl.write_to_string
	end

	redef fun render_code(node) do
		if format == "ansi" then
			var hl = new AnsiHighlightVisitor
			hl.highlight_node node
			return hl.result
		end
		return super
	end
end

redef class CmdAncestors
	redef fun to_md do return super # FIXME lin
end

redef class CmdParents
	redef fun to_md do return super # FIXME lin
end

redef class CmdChildren
	redef fun to_md do return super # FIXME lin
end

redef class CmdDescendants
	redef fun to_md do return super # FIXME lin
end

redef class CmdFeatures
	redef fun to_md do return super # FIXME lin
end

redef class CmdLinearization
	redef fun to_md do return super # FIXME lin
end

# Usage commands

redef class CmdNew
	redef fun to_md do return super # FIXME lin
end

redef class CmdCall
	redef fun to_md do return super # FIXME lin
end

redef class CmdReturn
	redef fun to_md do return super # FIXME lin
end

redef class CmdParam
	redef fun to_md do return super # FIXME lin
end

# Graph commands

redef class CmdGraph
	redef fun to_md do
		var output = render
		if output == null then return ""
		return output.write_to_string
	end
end

# Ini commands

redef class CmdIniDescription
	redef fun to_md do
		var desc = self.desc
		if desc == null then return ""

		return desc
	end
end

redef class CmdIniGitUrl
	redef fun to_md do
		var url = self.url
		if url == null then return ""
		return "[{url}]({url})"
	end
end

redef class CmdIniCloneCommand
	redef fun to_md do
		var command = self.command
		if command == null then return ""

		var tpl = new Template
		tpl.addn "~~~sh"
		tpl.addn command
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

redef class CmdIniIssuesUrl
	redef fun to_md do
		var url = self.url
		if url == null then return ""
		return "[{url}]({url})"
	end
end

redef class CmdIniMaintainer
	redef fun to_md do
		var name = self.maintainer
		if name == null then return ""
		return "**{name}**"
	end
end

redef class CmdIniContributors
	redef fun to_md do
		var names = self.contributors
		if names == null or names.is_empty then return ""

		var tpl = new Template
		for name in names do
			tpl.addn "* **{name}**"
		end
		return tpl.write_to_string
	end
end

redef class CmdIniLicense
	redef fun to_md do
		var license = self.license
		if license == null then return ""
		return "[{license}](https://opensource.org/licenses/{license})"
	end
end

redef class CmdEntityFile

	# URL to the file
	#
	# Can be refined in subtools.
	var file_url: nullable String = file is lazy, writable

	redef fun to_md do
		var file = self.file
		if file == null then return ""
		return "[{file.basename}]({file_url or else ""})"
	end
end

redef class CmdEntityFileContent
	redef fun to_md do
		var content = self.content
		if content == null then return ""

		var tpl = new Template
		tpl.addn "~~~"
		tpl.add content
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

# Main commands

redef class CmdMains
	redef fun to_md do return super # FIXME lin
end

redef class CmdMainCompile
	redef fun to_md do
		var command = self.command
		if command == null then return ""

		var tpl = new Template
		tpl.addn "~~~sh"
		tpl.addn command
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

redef class CmdManSynopsis
	redef fun to_md do
		var synopsis = self.synopsis
		if synopsis == null then return ""

		var tpl = new Template
		tpl.addn "~~~"
		tpl.addn synopsis
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

redef class CmdManOptions
	redef fun to_md do
		var options = self.options
		if options == null or options.is_empty then return ""

		var tpl = new Template
		tpl.addn "~~~"
		for opt, desc in options do
			tpl.addn "* {opt}\t\t{desc}"
		end
		tpl.addn "~~~"

		return tpl.write_to_string
	end
end

redef class CmdTesting
	redef fun to_md do
		var command = self.command
		if command == null then return ""

		var tpl = new Template
		tpl.addn "~~~sh"
		tpl.addn command
		tpl.addn "~~~"
		return tpl.write_to_string
	end
end

# MDoc

redef class MDoc

	# Renders the synopsis as a HTML comment block.
	var md_synopsis: Writable is lazy do
		if content.is_empty then return ""
		return content.first
	end

	#
	var md_comment: Writable is lazy do
		if content.is_empty then return ""
		var lines = content.to_a
		lines.shift
		return lines.join("\n")
	end

	# Renders the synopsis and the comment as a HTML comment block.
	var md_documentation: Writable is lazy do return lines_to_md(content.to_a)

	private fun lines_to_md(lines: Array[String]): Writable do
		var res = new Template
		if not lines.is_empty then
			var syn = lines.first
			if not syn.has_prefix("    ") and not syn.has_prefix("\t") and
			  not syn.trim.has_prefix("#") then
				lines.shift
				res.add "# {syn}\n"
			end
		end
		res.add lines.join("\n")
		return res
	end
end
