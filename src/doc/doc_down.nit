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

# Handle markdown formatting in Nit comments.
module doc_down

import markdown
import htmlight
private import parser_util

redef class MDoc

	private var markdown_proc: MarkdownProcessor is lazy, writable do
		return original_mentity.as(not null).model.nitdoc_md_processor
	end

	private var inline_proc: MarkdownProcessor is lazy, writable do
		return original_mentity.as(not null).model.nitdoc_inline_processor
	end

	# Renders the synopsis as a HTML comment block.
	var html_synopsis: Writable is lazy do
		var res = new Template
		var syn = inline_proc.process(content.first)
		res.add "<span class=\"synopsys nitdoc\">{syn}</span>"
		return res
	end

	# Renders the synopsis as a HTML comment block.
	var md_synopsis: Writable is lazy do
		if content.is_empty then return ""
		return content.first
	end

	# Renders the comment without the synopsis as a HTML comment block.
	var html_comment: Writable is lazy do
		var lines = content.to_a
		if not lines.is_empty then lines.shift
		return lines_to_html(lines)
	end

	#
	var md_comment: Writable is lazy do
		if content.is_empty then return ""
		var lines = content.to_a
		lines.shift
		return lines.join("\n")
	end

	# Renders the synopsis and the comment as a HTML comment block.
	var html_documentation: Writable is lazy do return lines_to_html(content.to_a)

	# Renders the synopsis and the comment as a HTML comment block.
	var md_documentation: Writable is lazy do return lines_to_md(content.to_a)

	# Renders markdown line as a HTML comment block.
	private fun lines_to_html(lines: Array[String]): Writable do
		var res = new Template
		var decorator = markdown_proc.decorator.as(NitdocDecorator)
		decorator.current_mdoc = self
		res.add "<div class=\"nitdoc\">"
		# do not use DocUnit as synopsys
		if not lines.is_empty then
			if not lines.first.has_prefix("    ") and
			   not lines.first.has_prefix("\t") then
				# parse synopsys
				var syn = inline_proc.process(lines.shift)
				res.add "<h1 class=\"synopsys\">{syn}</h1>"
			end
		end
		# check for annotations
		for i in [0 .. lines.length[ do
			var line = lines[i]
			if line.to_upper.has_prefix("ENSURE") or line.to_upper.has_prefix("REQUIRE") then
				var html = inline_proc.process(line)
				lines[i] = "<p class=\"contract\">{html}</p>"
			else if line.to_upper.has_prefix("TODO") or line.to_upper.has_prefix("FIXME") then
				var html = inline_proc.process(line)
				lines[i] = "<p class=\"todo\">{html}</p>"
			end
		end
		# add other lines
		res.add markdown_proc.process(lines.join("\n"))
		res.add "</div>"
		decorator.current_mdoc = null
		return res
	end

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

# The specific markdown decorator used internally to process MDoc object.
#
# You should use the various methods of `MDoc` like `MDoc::html_documentation`
#
# The class is public so specific behavior can be plugged on it.
class NitdocDecorator
	super HTMLDecorator

	private var toolcontext = new ToolContext

	# The currently processed mdoc.
	#
	# Unfortunately, this seems to be the simpler way to get the currently processed `MDoc` object.
	var current_mdoc: nullable MDoc = null

	redef fun add_code(v, block) do
		var meta = block.meta or else "nit"

		# Do not try to highlight non-nit code.
		if meta != "nit" and meta != "nitish" then
			v.add "<pre class=\"{meta}\"><code>"
			v.emit_in block
			v.add "</code></pre>\n"
			return
		end
		# Try to parse code
		var code = block.raw_content
		var ast = toolcontext.parse_something(code)
		if ast isa AError then
			v.add "<pre class=\"{meta}\"><code>"
			v.emit_in block
			v.add "</code></pre>\n"
			return
		end
		v.add "<pre class=\"nitcode\"><code>"
		var hl = new HtmlightVisitor
		hl.line_id_prefix = ""
		hl.highlight_node(ast)
		v.add(hl.html)
		v.add "</code></pre>\n"
	end

	redef fun add_span_code(v, text, from, to) do
		# Try to parse it
		var code = code_from_text(text, from, to)
		var ast = toolcontext.parse_something(code)

		if ast isa AError then
			v.add "<code class=\"rawcode\">"
			append_code(v, text, from, to)
		else
			v.add "<code class=\"nitcode\">"
			var hl = new HtmlightVisitor
			hl.line_id_prefix = ""
			hl.highlight_node(ast)
			v.add(hl.html)
		end
		v.add "</code>"
	end

	private fun code_from_text(buffer: Text, from, to: Int): String do
		var out = new FlatBuffer
		for i in [from..to[ do out.add buffer[i]
		return out.write_to_string
	end
end

# Decorator for span elements.
#
# Because inline comments can appear as span elements,
# InlineDecorator do not decorate things like paragraphs or headers.
private class InlineDecorator
	super NitdocDecorator

	redef fun add_paragraph(v, block) do
		v.emit_in block
	end

	redef fun add_headline(v, block) do
		# save headline
		var line = block.block.first_line
		if line == null then return
		var txt = line.value
		var id = strip_id(txt)
		var lvl = block.depth
		headlines[id] = new HeadLine(id, txt, lvl)

		v.emit_in block
	end

	redef fun add_code(v, block) do
		# Try to parse code
		var ast = toolcontext.parse_something(block.block.text.to_s)
		if ast isa AError then
			v.add "<code>"
			v.emit_in block
			v.add "</code>"
			return
		end
		v.add "<code class=\"nitcode\">"
		var hl = new HtmlightVisitor
		hl.highlight_node(ast)
		v.add(hl.html)
		v.add "</code>"
	end
end

redef class Model
	# Get a markdown processor for Nitdoc comments.
	var nitdoc_md_processor: MarkdownProcessor is lazy, writable do
		var proc = new MarkdownProcessor
		proc.decorator = new NitdocDecorator
		return proc
	end

	# Get a markdown inline processor for Nitdoc comments.
	#
	# This processor is specificaly designed to inlinable doc elements like synopsys.
	var nitdoc_inline_processor: MarkdownProcessor is lazy, writable do
		var proc = new MarkdownProcessor
		proc.decorator = new InlineDecorator
		return proc
	end
end
