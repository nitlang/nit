# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Test suites for module `markdown`
module test_markdown

import markdown_html_rendering

# Abstract test class that instanciates the markdown parser
abstract class TestMarkdown

	# Markdown parser to use in tests
	var md_parser = new MdParser

	# Parse a `md` string as a MdNode
	fun parse_md(md: String): MdNode do return md_parser.parse(md)
end

# Abstract test class that defines the test methods for HTML rendering
abstract class TestMarkdownHtml
	super TestMarkdown

	# HTML renderer used in tests
	var html_renderer = new HtmlRenderer

	# Render the `md` string as HTML
	fun md_to_html(md: String): String do
		var node = parse_md(md)
		return html_renderer.render(node)
	end
end
