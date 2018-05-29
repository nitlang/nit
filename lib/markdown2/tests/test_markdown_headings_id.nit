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

# Test for markdown headings id generation
module test_markdown_headings_id is test

import test_markdown

class TestMarkdownHeadingsId
	super TestMarkdownHtml
	test

	redef var html_renderer = new HtmlRenderer(true)

	fun test_multiple_ids is test do
		var md = """# foo\n## foo\n### foo\n#### foo\n##### foo\n###### foo\n"""
		var html = """<h1 id="foo">foo</h1>\n<h2 id="foo_1">foo</h2>\n<h3 id="foo_2">foo</h3>\n<h4 id="foo_3">foo</h4>\n<h5 id="foo_4">foo</h5>\n<h6 id="foo_5">foo</h6>\n"""
		assert md_to_html(md) == html
	end

	fun test_escape_ids is test do
		var md = """# foo *bar* \\*baz\\*\n"""
		var html = """<h1 id="foo_bar_baz">foo <em>bar</em> *baz*</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test_escape_ids2 is test do
		var md = """# foo#\n"""
		var html = """<h1 id="foo">foo#</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test_avoid_spaces is test do
		var md = """#                  foo                     \n"""
		var html = """<h1 id="foo">foo</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test_remove_atx_trailing is test do
		var md = """## foo ##\n  ###   bar    ###\n"""
		var html = """<h2 id="foo">foo</h2>\n<h3 id="bar">bar</h3>\n"""
		assert md_to_html(md) == html
	end

	fun test_avoid_escaped_chars is test do
		var md = """### foo \\###\n## foo #\\##\n# foo \\#\n"""
		var html = """<h3 id="foo_">foo ###</h3>\n<h2 id="foo__1">foo ###</h2>\n<h1 id="foo__2">foo #</h1>\n"""
		assert md_to_html(md) == html
	end
end
