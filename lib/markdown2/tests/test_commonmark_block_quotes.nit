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

module test_commonmark_block_quotes is test

import test_markdown

class TestCommonmarkBlockQuotes
	super TestMarkdownHtml
	test

	fun test191 is test do
		var md = """> # Foo\n> bar\n> baz\n"""
		var html = """<blockquote>\n<h1>Foo</h1>\n<p>bar\nbaz</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test192 is test do
		var md = """># Foo\n>bar\n> baz\n"""
		var html = """<blockquote>\n<h1>Foo</h1>\n<p>bar\nbaz</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test193 is test do
		var md = """   > # Foo\n   > bar\n > baz\n"""
		var html = """<blockquote>\n<h1>Foo</h1>\n<p>bar\nbaz</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test194 is test do
		var md = """    > # Foo\n    > bar\n    > baz\n"""
		var html = """<pre><code>&gt; # Foo\n&gt; bar\n&gt; baz\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test195 is test do
		var md = """> # Foo\n> bar\nbaz\n"""
		var html = """<blockquote>\n<h1>Foo</h1>\n<p>bar\nbaz</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test196 is test do
		var md = """> bar\nbaz\n> foo\n"""
		var html = """<blockquote>\n<p>bar\nbaz\nfoo</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test197 is test do
		var md = """> foo\n---\n"""
		var html = """<blockquote>\n<p>foo</p>\n</blockquote>\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test198 is test do
		var md = """> - foo\n- bar\n"""
		var html = """<blockquote>\n<ul>\n<li>foo</li>\n</ul>\n</blockquote>\n<ul>\n<li>bar</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test199 is test do
		var md = """>     foo\n    bar\n"""
		var html = """<blockquote>\n<pre><code>foo\n</code></pre>\n</blockquote>\n<pre><code>bar\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test200 is test do
		var md = """> ```\nfoo\n```\n"""
		var html = """<blockquote>\n<pre><code></code></pre>\n</blockquote>\n<p>foo</p>\n<pre><code></code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test201 is test do
		var md = """> foo\n    - bar\n"""
		var html = """<blockquote>\n<p>foo\n- bar</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test202 is test do
		var md = """>\n"""
		var html = """<blockquote>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test203 is test do
		var md = """>\n>  \n> \n"""
		var html = """<blockquote>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test204 is test do
		var md = """>\n> foo\n>  \n"""
		var html = """<blockquote>\n<p>foo</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test205 is test do
		var md = """> foo\n\n> bar\n"""
		var html = """<blockquote>\n<p>foo</p>\n</blockquote>\n<blockquote>\n<p>bar</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test206 is test do
		var md = """> foo\n> bar\n"""
		var html = """<blockquote>\n<p>foo\nbar</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test207 is test do
		var md = """> foo\n>\n> bar\n"""
		var html = """<blockquote>\n<p>foo</p>\n<p>bar</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test208 is test do
		var md = """foo\n> bar\n"""
		var html = """<p>foo</p>\n<blockquote>\n<p>bar</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test209 is test do
		var md = """> aaa\n***\n> bbb\n"""
		var html = """<blockquote>\n<p>aaa</p>\n</blockquote>\n<hr />\n<blockquote>\n<p>bbb</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test210 is test do
		var md = """> bar\nbaz\n"""
		var html = """<blockquote>\n<p>bar\nbaz</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test211 is test do
		var md = """> bar\n\nbaz\n"""
		var html = """<blockquote>\n<p>bar</p>\n</blockquote>\n<p>baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test212 is test do
		var md = """> bar\n>\nbaz\n"""
		var html = """<blockquote>\n<p>bar</p>\n</blockquote>\n<p>baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test213 is test do
		var md = """> > > foo\nbar\n"""
		var html = """<blockquote>\n<blockquote>\n<blockquote>\n<p>foo\nbar</p>\n</blockquote>\n</blockquote>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test214 is test do
		var md = """>>> foo\n> bar\n>>baz\n"""
		var html = """<blockquote>\n<blockquote>\n<blockquote>\n<p>foo\nbar\nbaz</p>\n</blockquote>\n</blockquote>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test215 is test do
		var md = """>     code\n\n>    not code\n"""
		var html = """<blockquote>\n<pre><code>code\n</code></pre>\n</blockquote>\n<blockquote>\n<p>not code</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end
end
