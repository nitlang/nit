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

module test_commonmark_link_reference_definitions is test

import test_markdown

class TestCommonmarkLinkReferenceDefinitions
	super TestMarkdownHtml
	test

	fun test159 is test do
		var md = """[foo]: /url "title"\n\n[foo]\n"""
		var html = """<p><a href="/url" title="title">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test160 is test do
		var md = """   [foo]: \n      /url  \n           'the title'  \n\n[foo]\n"""
		var html = """<p><a href="/url" title="the title">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test161 is test do
		var md = """[Foo*bar\\]]:my_(url) 'title (with parens)'\n\n[Foo*bar\\]]\n"""
		var html = """<p><a href="my_(url)" title="title (with parens)">Foo*bar]</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test162 is test do
		var md = """[Foo bar]:\n<my%20url>\n'title'\n\n[Foo bar]\n"""
		var html = """<p><a href="my%20url" title="title">Foo bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test163 is test do
		var md = """[foo]: /url '\ntitle\nline1\nline2\n'\n\n[foo]\n"""
		var html = """<p><a href="/url" title="\ntitle\nline1\nline2\n">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test164 is test do
		var md = """[foo]: /url 'title\n\nwith blank line'\n\n[foo]\n"""
		var html = """<p>[foo]: /url 'title</p>\n<p>with blank line'</p>\n<p>[foo]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test165 is test do
		var md = """[foo]:\n/url\n\n[foo]\n"""
		var html = """<p><a href="/url">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test166 is test do
		var md = """[foo]:\n\n[foo]\n"""
		var html = """<p>[foo]:</p>\n<p>[foo]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test167 is test do
		var md = """[foo]: /url\\bar\\*baz "foo\\"bar\\baz"\n\n[foo]\n"""
		var html = """<p><a href="/url%5Cbar*baz" title="foo&quot;bar\\baz">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test168 is test do
		var md = """[foo]\n\n[foo]: url\n"""
		var html = """<p><a href="url">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test169 is test do
		var md = """[foo]\n\n[foo]: first\n[foo]: second\n"""
		var html = """<p><a href="first">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test170 is test do
		var md = """[FOO]: /url\n\n[Foo]\n"""
		var html = """<p><a href="/url">Foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test172 is test do
		var md = """[foo]: /url\n"""
		var html = """"""
		assert md_to_html(md) == html
	end

	fun test173 is test do
		var md = """[\nfoo\n]: /url\nbar\n"""
		var html = """<p>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test174 is test do
		var md = """[foo]: /url "title" ok\n"""
		var html = """<p>[foo]: /url &quot;title&quot; ok</p>\n"""
		assert md_to_html(md) == html
	end

	fun test175 is test do
		var md = """[foo]: /url\n"title" ok\n"""
		var html = """<p>&quot;title&quot; ok</p>\n"""
		assert md_to_html(md) == html
	end

	fun test176 is test do
		var md = """    [foo]: /url "title"\n\n[foo]\n"""
		var html = """<pre><code>[foo]: /url &quot;title&quot;\n</code></pre>\n<p>[foo]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test177 is test do
		var md = """```\n[foo]: /url\n```\n\n[foo]\n"""
		var html = """<pre><code>[foo]: /url\n</code></pre>\n<p>[foo]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test178 is test do
		var md = """Foo\n[bar]: /baz\n\n[bar]\n"""
		var html = """<p>Foo\n[bar]: /baz</p>\n<p>[bar]</p>\n"""
		assert md_to_html(md) == html
	end

	fun test179 is test do
		var md = """# [Foo]\n[foo]: /url\n> bar\n"""
		var html = """<h1><a href="/url">Foo</a></h1>\n<blockquote>\n<p>bar</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test180 is test do
		var md = """[foo]: /foo-url "foo"\n[bar]: /bar-url\n  "bar"\n[baz]: /baz-url\n\n[foo],\n[bar],\n[baz]\n"""
		var html = """<p><a href="/foo-url" title="foo">foo</a>,\n<a href="/bar-url" title="bar">bar</a>,\n<a href="/baz-url">baz</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test181 is test do
		var md = """[foo]\n\n> [foo]: /url\n"""
		var html = """<p><a href="/url">foo</a></p>\n<blockquote>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end
end
