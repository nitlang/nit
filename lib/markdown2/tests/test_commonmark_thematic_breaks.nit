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

module test_commonmark_thematic_breaks is test

import test_markdown

class TestCommonmarkThematicBreaks
	super TestMarkdownHtml
	test

	fun test13 is test do
		var md = """***\n---\n___\n"""
		var html = """<hr />\n<hr />\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test14 is test do
		var md = """+++\n"""
		var html = """<p>+++</p>\n"""
		assert md_to_html(md) == html
	end

	fun test15 is test do
		var md = """===\n"""
		var html = """<p>===</p>\n"""
		assert md_to_html(md) == html
	end

	fun test16 is test do
		var md = """--\n**\n__\n"""
		var html = """<p>--\n**\n__</p>\n"""
		assert md_to_html(md) == html
	end

	fun test17 is test do
		var md = """ ***\n  ***\n   ***\n"""
		var html = """<hr />\n<hr />\n<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test18 is test do
		var md = """    ***\n"""
		var html = """<pre><code>***\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test19 is test do
		var md = """Foo\n    ***\n"""
		var html = """<p>Foo\n***</p>\n"""
		assert md_to_html(md) == html
	end

	fun test20 is test do
		var md = """_____________________________________\n"""
		var html = """<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test21 is test do
		var md = """ - - -\n"""
		var html = """<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test22 is test do
		var md = """ **  * ** * ** * **\n"""
		var html = """<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test23 is test do
		var md = """-     -      -      -\n"""
		var html = """<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test24 is test do
		var md = """- - - -    \n"""
		var html = """<hr />\n"""
		assert md_to_html(md) == html
	end

	fun test25 is test do
		var md = """_ _ _ _ a\n\na------\n\n---a---\n"""
		var html = """<p>_ _ _ _ a</p>\n<p>a------</p>\n<p>---a---</p>\n"""
		assert md_to_html(md) == html
	end

	fun test26 is test do
		var md = """ *-*\n"""
		var html = """<p><em>-</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test27 is test do
		var md = """- foo\n***\n- bar\n"""
		var html = """<ul>\n<li>foo</li>\n</ul>\n<hr />\n<ul>\n<li>bar</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test28 is test do
		var md = """Foo\n***\nbar\n"""
		var html = """<p>Foo</p>\n<hr />\n<p>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test29 is test do
		var md = """Foo\n---\nbar\n"""
		var html = """<h2>Foo</h2>\n<p>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test30 is test do
		var md = """* Foo\n* * *\n* Bar\n"""
		var html = """<ul>\n<li>Foo</li>\n</ul>\n<hr />\n<ul>\n<li>Bar</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test31 is test do
		var md = """- Foo\n- * * *\n"""
		var html = """<ul>\n<li>Foo</li>\n<li>\n<hr />\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end
end
