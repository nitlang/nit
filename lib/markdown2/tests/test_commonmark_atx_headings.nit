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

module test_commonmark_atx_headings is test

import test_markdown

class TestCommonmarkATXHeadings
	super TestMarkdownHtml
	test

	fun test32 is test do
		var md = """# foo\n## foo\n### foo\n#### foo\n##### foo\n###### foo\n"""
		var html = """<h1>foo</h1>\n<h2>foo</h2>\n<h3>foo</h3>\n<h4>foo</h4>\n<h5>foo</h5>\n<h6>foo</h6>\n"""
		assert md_to_html(md) == html
	end

	fun test33 is test do
		var md = """####### foo\n"""
		var html = """<p>####### foo</p>\n"""
		assert md_to_html(md) == html
	end

	fun test34 is test do
		var md = """#5 bolt\n\n#hashtag\n"""
		var html = """<p>#5 bolt</p>\n<p>#hashtag</p>\n"""
		assert md_to_html(md) == html
	end

	fun test35 is test do
		var md = """\\## foo\n"""
		var html = """<p>## foo</p>\n"""
		assert md_to_html(md) == html
	end

	fun test36 is test do
		var md = """# foo *bar* \\*baz\\*\n"""
		var html = """<h1>foo <em>bar</em> *baz*</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test37 is test do
		var md = """#                  foo                     \n"""
		var html = """<h1>foo</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test38 is test do
		var md = """ ### foo\n  ## foo\n   # foo\n"""
		var html = """<h3>foo</h3>\n<h2>foo</h2>\n<h1>foo</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test39 is test do
		var md = """    # foo\n"""
		var html = """<pre><code># foo\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test40 is test do
		var md = """foo\n    # bar\n"""
		var html = """<p>foo\n# bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test41 is test do
		var md = """## foo ##\n  ###   bar    ###\n"""
		var html = """<h2>foo</h2>\n<h3>bar</h3>\n"""
		assert md_to_html(md) == html
	end

	fun test42 is test do
		var md = """# foo ##################################\n##### foo ##\n"""
		var html = """<h1>foo</h1>\n<h5>foo</h5>\n"""
		assert md_to_html(md) == html
	end

	fun test43 is test do
		var md = """### foo ###     \n"""
		var html = """<h3>foo</h3>\n"""
		assert md_to_html(md) == html
	end

	fun test44 is test do
		var md = """### foo ### b\n"""
		var html = """<h3>foo ### b</h3>\n"""
		assert md_to_html(md) == html
	end

	fun test45 is test do
		var md = """# foo#\n"""
		var html = """<h1>foo#</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test46 is test do
		var md = """### foo \\###\n## foo #\\##\n# foo \\#\n"""
		var html = """<h3>foo ###</h3>\n<h2>foo ###</h2>\n<h1>foo #</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test47 is test do
		var md = """****\n## foo\n****\n"""
		var html = """<hr />\n<h2>foo</h2>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test48 is test do
		var md = """Foo bar\n# baz\nBar foo\n"""
		var html = """<p>Foo bar</p>\n<h1>baz</h1>\n<p>Bar foo</p>\n"""
		assert md_to_html(md) == html
	end

	fun test49 is test do
		var md = """## \n#\n### ###\n"""
		var html = """<h2></h2>\n<h1></h1>\n<h3></h3>\n"""
		assert md_to_html(md) == html
	end
end
