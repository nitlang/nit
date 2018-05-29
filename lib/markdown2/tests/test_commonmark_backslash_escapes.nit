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

module test_commonmark_backslash_escapes is test

import test_markdown

class TestCommonmarkBackslashEscapes
	super TestMarkdownHtml
	test

	fun test291 is test do
		var md = """\\!\\"\\#\\$\\%\\&\\'\\(\\)\\*\\+\\,\\-\\.\\/\\:\\;\\<\\=\\>\\?\\@\\[\\\\\\]\\^\\_\\`\\{\\|\\}\\~\n"""
		var html = """<p>!&quot;#$%&amp;'()*+,-./:;&lt;=&gt;?@[\\]^_`{|}~</p>\n"""
		assert md_to_html(md) == html
	end

	fun test292 is test do
		var md = """\\\t\\A\\a\\ \\3\\φ\\«\n"""
		var html = """<p>\\\t\\A\\a\\ \\3\\φ\\«</p>\n"""
		assert md_to_html(md) == html
	end

	fun test293 is test do
		var md = """\\*not emphasized*\n\\<br/> not a tag\n\\[not a link](/foo)\n\\`not code`\n1\\. not a list\n\\* not a list\n\\# not a heading\n\\[foo]: /url "not a reference"\n"""
		var html = """<p>*not emphasized*\n&lt;br/&gt; not a tag\n[not a link](/foo)\n`not code`\n1. not a list\n* not a list\n# not a heading\n[foo]: /url &quot;not a reference&quot;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test294 is test do
		var md = """\\\\*emphasis*\n"""
		var html = """<p>\\<em>emphasis</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test295 is test do
		var md = """foo\\\nbar\n"""
		var html = """<p>foo<br />\nbar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test296 is test do
		var md = """`` \\[\\` ``\n"""
		var html = """<p><code>\\[\\`</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test297 is test do
		var md = """    \\[\\]\n"""
		var html = """<pre><code>\\[\\]\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test298 is test do
		var md = """~~~\n\\[\\]\n~~~\n"""
		var html = """<pre><code>\\[\\]\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test299 is test do
		var md = """<http://example.com?find=\\*>\n"""
		var html = """<p><a href="http://example.com?find=%5C*">http://example.com?find=\\*</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test300 is test do
		var md = """<a href="/bar\\/)">\n"""
		var html = """<a href="/bar\\/)">\n"""
		assert md_to_html(md) == html
	end

	fun test301 is test do
		var md = """[foo](/bar\\* "ti\\*tle")\n"""
		var html = """<p><a href="/bar*" title="ti*tle">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test302 is test do
		var md = """[foo]\n\n[foo]: /bar\\* "ti\\*tle"\n"""
		var html = """<p><a href="/bar*" title="ti*tle">foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test303 is test do
		var md = """``` foo\\+bar\nfoo\n```\n"""
		var html = """<pre><code class="language-foo+bar">foo\n</code></pre>\n"""
		assert md_to_html(md) == html
	end
end
