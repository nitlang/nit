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

module test_commonmark_setext_headings is test

import test_markdown

class TestCommonmarkSetextHeadings
	super TestMarkdownHtml
	test

	fun test50 is test do
		var md = """Foo *bar*\n=========\n\nFoo *bar*\n---------\n"""
		var html = """<h1>Foo <em>bar</em></h1>\n<h2>Foo <em>bar</em></h2>\n"""
		assert md_to_html(md) == html
	end

	fun test51 is test do
		var md = """Foo *bar\nbaz*\n====\n"""
		var html = """<h1>Foo <em>bar\nbaz</em></h1>\n"""
		assert md_to_html(md) == html
	end

	fun test52 is test do
		var md = """Foo\n-------------------------\n\nFoo\n=\n"""
		var html = """<h2>Foo</h2>\n<h1>Foo</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test53 is test do
		var md = """   Foo\n---\n\n  Foo\n-----\n\n  Foo\n  ===\n"""
		var html = """<h2>Foo</h2>\n<h2>Foo</h2>\n<h1>Foo</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test54 is test do
		var md = """    Foo\n    ---\n\n    Foo\n---\n"""
		var html = """<pre><code>Foo\n---\n\nFoo\n</code></pre>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test55 is test do
		var md = """Foo\n   ----      \n"""
		var html = """<h2>Foo</h2>\n"""
		assert md_to_html(md) == html
	end

	fun test56 is test do
		var md = """Foo\n    ---\n"""
		var html = """<p>Foo\n---</p>\n"""
		assert md_to_html(md) == html
	end

	fun test57 is test do
		var md = """Foo\n= =\n\nFoo\n--- -\n"""
		var html = """<p>Foo\n= =</p>\n<p>Foo</p>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test58 is test do
		var md = """Foo  \n-----\n"""
		var html = """<h2>Foo</h2>\n"""
		assert md_to_html(md) == html
	end

	fun test59 is test do
		var md = """Foo\\\n----\n"""
		var html = """<h2>Foo\\</h2>\n"""
		assert md_to_html(md) == html
	end

	fun test60 is test do
		var md = """`Foo\n----\n`\n\n<a title="a lot\n---\nof dashes"/>\n"""
		var html = """<h2>`Foo</h2>\n<p>`</p>\n<h2>&lt;a title=&quot;a lot</h2>\n<p>of dashes&quot;/&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test61 is test do
		var md = """> Foo\n---\n"""
		var html = """<blockquote>\n<p>Foo</p>\n</blockquote>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test62 is test do
		var md = """> foo\nbar\n===\n"""
		var html = """<blockquote>\n<p>foo\nbar\n===</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test63 is test do
		var md = """- Foo\n---\n"""
		var html = """<ul>\n<li>Foo</li>\n</ul>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test64 is test do
		var md = """Foo\nBar\n---\n"""
		var html = """<h2>Foo\nBar</h2>\n"""
		assert md_to_html(md) == html
	end

	fun test65 is test do
		var md = """---\nFoo\n---\nBar\n---\nBaz\n"""
		var html = """<hr />\n<h2>Foo</h2>\n<h2>Bar</h2>\n<p>Baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test66 is test do
		var md = """\n====\n"""
		var html = """<p>====</p>\n"""
		assert md_to_html(md) == html
	end

	fun test67 is test do
		var md = """---\n---\n"""
		var html = """<hr />\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test68 is test do
		var md = """- foo\n-----\n"""
		var html = """<ul>\n<li>foo</li>\n</ul>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test69 is test do
		var md = """    foo\n---\n"""
		var html = """<pre><code>foo\n</code></pre>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test70 is test do
		var md = """> foo\n-----\n"""
		var html = """<blockquote>\n<p>foo</p>\n</blockquote>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test71 is test do
		var md = """\\> foo\n------\n"""
		var html = """<h2>&gt; foo</h2>\n"""
		assert md_to_html(md) == html
	end

	fun test72 is test do
		var md = """Foo\n\nbar\n---\nbaz\n"""
		var html = """<p>Foo</p>\n<h2>bar</h2>\n<p>baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test73 is test do
		var md = """Foo\nbar\n\n---\n\nbaz\n"""
		var html = """<p>Foo\nbar</p>\n<hr />\n<p>baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test74 is test do
		var md = """Foo\nbar\n* * *\nbaz\n"""
		var html = """<p>Foo\nbar</p>\n<hr />\n<p>baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test75 is test do
		var md = """Foo\nbar\n\\---\nbaz\n"""
		var html = """<p>Foo\nbar\n---\nbaz</p>\n"""
		assert md_to_html(md) == html
	end
end
