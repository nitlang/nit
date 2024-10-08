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

module test_commonmark_hard_line_breaks is test

import test_markdown

class TestCommonmarkHardLineBreaks
	super TestMarkdownHtml
	test

	fun test608 is test do
		var md = """foo  \nbaz\n"""
		var html = """<p>foo<br />\nbaz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test609 is test do
		var md = """foo\\\nbaz\n"""
		var html = """<p>foo<br />\nbaz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test610 is test do
		var md = """foo       \nbaz\n"""
		var html = """<p>foo<br />\nbaz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test611 is test do
		var md = """foo  \n     bar\n"""
		var html = """<p>foo<br />\nbar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test612 is test do
		var md = """foo\\\n     bar\n"""
		var html = """<p>foo<br />\nbar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test613 is test do
		var md = """*foo  \nbar*\n"""
		var html = """<p><em>foo<br />\nbar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test614 is test do
		var md = """*foo\\\nbar*\n"""
		var html = """<p><em>foo<br />\nbar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test615 is test do
		var md = """`code  \nspan`\n"""
		var html = """<p><code>code span</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test616 is test do
		var md = """`code\\\nspan`\n"""
		var html = """<p><code>code\\ span</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test617 is test do
		var md = """<a href="foo  \nbar">\n"""
		var html = """<p><a href="foo  \nbar"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test618 is test do
		var md = """<a href="foo\\\nbar">\n"""
		var html = """<p><a href="foo\\\nbar"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test619 is test do
		var md = """foo\\\n"""
		var html = """<p>foo\\</p>\n"""
		assert md_to_html(md) == html
	end

	fun test620 is test do
		var md = """foo  \n"""
		var html = """<p>foo</p>\n"""
		assert md_to_html(md) == html
	end

	fun test621 is test do
		var md = """### foo\\\n"""
		var html = """<h3>foo\\</h3>\n"""
		assert md_to_html(md) == html
	end

	fun test622 is test do
		var md = """### foo  \n"""
		var html = """<h3>foo</h3>\n"""
		assert md_to_html(md) == html
	end
end
