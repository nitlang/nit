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

module test_commonmark_tabs is test

import test_markdown

class TestCommonmarkTabs
	super TestMarkdownHtml
	test

	fun test1 is test do
		var md = """\tfoo\tbaz\t\tbim\n"""
		var html = """<pre><code>foo\tbaz\t\tbim\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test2 is test do
		var md = """  \tfoo\tbaz\t\tbim\n"""
		var html = """<pre><code>foo\tbaz\t\tbim\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test3 is test do
		var md = """    a\ta\n    ὐ\ta\n"""
		var html = """<pre><code>a\ta\nὐ\ta\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test4 is test do
		var md = """  - foo\n\n\tbar\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<p>bar</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test5 is test do
		var md = """- foo\n\n\t\tbar\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<pre><code>  bar\n</code></pre>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test6 is test do
		var md = """>\t\tfoo\n"""
		var html = """<blockquote>\n<pre><code>  foo\n</code></pre>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test7 is test do
		var md = """-\t\tfoo\n"""
		var html = """<ul>\n<li>\n<pre><code>  foo\n</code></pre>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test8 is test do
		var md = """    foo\n\tbar\n"""
		var html = """<pre><code>foo\nbar\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test9 is test do
		var md = """ - foo\n   - bar\n\t - baz\n"""
		var html = """<ul>\n<li>foo\n<ul>\n<li>bar\n<ul>\n<li>baz</li>\n</ul>\n</li>\n</ul>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test10 is test do
		var md = """#\tFoo\n"""
		var html = """<h1>Foo</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test11 is test do
		var md = """*\t*\t*\t\n"""
		var html = """<hr />\n"""
		assert md_to_html(md) == html
	end
end
