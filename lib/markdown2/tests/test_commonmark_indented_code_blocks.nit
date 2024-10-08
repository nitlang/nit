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

module test_commonmark_indented_code_blocks is test

import test_markdown

class TestCommonmarkIndentedCodeBlocks
	super TestMarkdownHtml
	test

	fun test76 is test do
		var md = """    a simple\n      indented code block\n"""
		var html = """<pre><code>a simple\n  indented code block\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test77 is test do
		var md = """  - foo\n\n    bar\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<p>bar</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test78 is test do
		var md = """1.  foo\n\n    - bar\n"""
		var html = """<ol>\n<li>\n<p>foo</p>\n<ul>\n<li>bar</li>\n</ul>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test79 is test do
		var md = """    <a/>\n    *hi*\n\n    - one\n"""
		var html = """<pre><code>&lt;a/&gt;\n*hi*\n\n- one\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test80 is test do
		var md = """    chunk1\n\n    chunk2\n  \n \n \n    chunk3\n"""
		var html = """<pre><code>chunk1\n\nchunk2\n\n\n\nchunk3\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test81 is test do
		var md = """    chunk1\n      \n      chunk2\n"""
		var html = """<pre><code>chunk1\n  \n  chunk2\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test82 is test do
		var md = """Foo\n    bar\n\n"""
		var html = """<p>Foo\nbar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test83 is test do
		var md = """    foo\nbar\n"""
		var html = """<pre><code>foo\n</code></pre>\n<p>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test84 is test do
		var md = """# Heading\n    foo\nHeading\n------\n    foo\n----\n"""
		var html = """<h1>Heading</h1>\n<pre><code>foo\n</code></pre>\n<h2>Heading</h2>\n<pre><code>foo\n</code></pre>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test85 is test do
		var md = """        foo\n    bar\n"""
		var html = """<pre><code>    foo\nbar\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test86 is test do
		var md = """\n    \n    foo\n    \n\n"""
		var html = """<pre><code>foo\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test87 is test do
		var md = """    foo  \n"""
		var html = """<pre><code>foo  \n</code></pre>\n"""
		assert md_to_html(md) == html
	end
end
