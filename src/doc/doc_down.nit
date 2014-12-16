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
import highlight
private import parser_util

redef class MDoc
	# Comment synopsys HTML escaped
	var short_comment: String is lazy do return content.first.html_escape

	# Full comment HTML escaped
	var full_comment: String is lazy do return content.join("\n").html_escape

	# Synopsys in a template
	var tpl_short_comment: Streamable is lazy do
		var res = new Template
		var syn = nitdoc_inline_processor.process(content.first)
		res.add "<span class=\"synopsys nitdoc\">{syn}</span>"
		return res

	end

	# Full comment in a template
	var tpl_comment: Streamable is lazy do
		var res = new Template
		var lines = content.to_a
		res.add "<div class=\"nitdoc\">"
		# do not use DocUnit as synopsys
		if not content.first.has_prefix("    ") and
		   not content.first.has_prefix("\t") then
			# parse synopsys
			var syn = nitdoc_inline_processor.process(lines.shift)
			res.add "<p class=\"synopsys\">{syn}</p>"
		end
		# check for annotations
		for i in [0 .. lines.length[ do
			var line = lines[i]
			if line.to_upper.has_prefix("ENSURE") or line.to_upper.has_prefix("REQUIRE") then
				var html = nitdoc_inline_processor.process(line)
				lines[i] = "<p class=\"contract\">{html}</p>"
			else if line.to_upper.has_prefix("TODO") or line.to_upper.has_prefix("FIXME") then
				var html = nitdoc_inline_processor.process(line)
				lines[i] = "<p class=\"todo\">{html}</p>"
			end
		end
		# add other lines
		res.add nitdoc_md_processor.process(lines.join("\n"))
		res.add "</div>"
		return res
	end
end

private class NitdocDecorator
	super HTMLDecorator

	var toolcontext = new ToolContext

	redef fun add_code(v, block) do
		var meta = "nit"
		if block isa BlockFence and block.meta != null then
			meta = block.meta.to_s
		end
		# Do not try to highlight non-nit code.
		if meta != "nit" and meta != "nitish" then
			v.add "<pre class=\"{meta}\"><code>"
			v.emit_in block
			v.add "</code></pre>\n"
			return
		end
		# Try to parse code
		var code = code_from_block(block)
		var ast = toolcontext.parse_something(code)
		if ast isa AError then
			v.add "<pre class=\"{meta}\"><code>"
			v.emit_in block
			v.add "</code></pre>\n"
			return
		end
		v.add "<pre class=\"nitcode\"><code>"
		var hl = new HighlightVisitor
		hl.line_id_prefix = ""
		hl.enter_visit(ast)
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
			var hl = new HighlightVisitor
			hl.line_id_prefix = ""
			hl.enter_visit(ast)
			v.add(hl.html)
		end
		v.add "</code>"
	end

	fun code_from_text(buffer: Text, from, to: Int): String do
		var out = new FlatBuffer
		for i in [from..to[ do out.add buffer[i]
		return out.write_to_string
	end

	fun code_from_block(block: BlockCode): String do
		var infence = block isa BlockFence
		var text = new FlatBuffer
		var line = block.block.first_line
		while line != null do
			if not line.is_empty then
				var str = line.value
				if not infence and str.has_prefix("    ") then
					text.append str.substring(4, str.length - line.trailing)
				else
					text.append str
				end
			end
			text.append "\n"
			line = line.next
		end
		return text.write_to_string
	end
end

private class InlineDecorator
	super NitdocDecorator

	redef fun add_paragraph(v, block) do
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
		var hl = new HighlightVisitor
		hl.enter_visit(ast)
		v.add(hl.html)
		v.add "</code>"
	end
end

# Get a markdown processor for Nitdoc comments.
private fun nitdoc_md_processor: MarkdownProcessor do
	var proc = new MarkdownProcessor
	proc.emitter.decorator = new NitdocDecorator
	return once proc
end

# Get a markdown inline processor for Nitdoc comments.
#
# This processor is specificaly designed to inlinable doc elements like synopsys.
private fun nitdoc_inline_processor: MarkdownProcessor do
	var proc = new MarkdownProcessor
	proc.emitter.decorator = new InlineDecorator
	return once proc
end
