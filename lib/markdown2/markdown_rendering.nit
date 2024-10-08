# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Markdown document rendering
module markdown_rendering

import markdown_ast

# Common interface for all markdown renderer
interface MdRenderer
	super MdVisitor

	# Render `node`
	fun render(node: MdNode): String is abstract
end

# A renderer that output raw text
class RawTextVisitor
	super MdRenderer

	# Text under construction
	private var text: Buffer is noinit

	redef fun render(node) do
		text = new Buffer
		enter_visit(node)
		return text.to_s
	end

	# Append `string` to `text`
	fun add(string: String) do text.append(string)

	redef fun visit(node) do node.render_raw_text(self)
end

redef class MdNode

	# Return `self` as raw text
	fun raw_text: String do
		var v = new RawTextVisitor
		return v.render(self)
	end

	# Render `self` as raw text
	fun render_raw_text(v: RawTextVisitor) do visit_all(v)
end

redef class MdCode
	redef fun render_raw_text(v) do v.add literal
end

redef class MdLineBreak
	redef fun render_raw_text(v) do v.add "\n"
end

redef class MdText
	redef fun render_raw_text(v) do v.add literal
end
