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

module test_commonmark_paragraphs is test

import test_markdown

class TestCommonmarkParagraphs
	super TestMarkdownHtml
	test

	fun test182 is test do
		var md = """aaa\n\nbbb\n"""
		var html = """<p>aaa</p>\n<p>bbb</p>\n"""
		assert md_to_html(md) == html
	end

	fun test183 is test do
		var md = """aaa\nbbb\n\nccc\nddd\n"""
		var html = """<p>aaa\nbbb</p>\n<p>ccc\nddd</p>\n"""
		assert md_to_html(md) == html
	end

	fun test184 is test do
		var md = """aaa\n\n\nbbb\n"""
		var html = """<p>aaa</p>\n<p>bbb</p>\n"""
		assert md_to_html(md) == html
	end

	fun test185 is test do
		var md = """  aaa\n bbb\n"""
		var html = """<p>aaa\nbbb</p>\n"""
		assert md_to_html(md) == html
	end

	fun test186 is test do
		var md = """aaa\n             bbb\n                                       ccc\n"""
		var html = """<p>aaa\nbbb\nccc</p>\n"""
		assert md_to_html(md) == html
	end

	fun test187 is test do
		var md = """   aaa\nbbb\n"""
		var html = """<p>aaa\nbbb</p>\n"""
		assert md_to_html(md) == html
	end

	fun test188 is test do
		var md = """    aaa\nbbb\n"""
		var html = """<pre><code>aaa\n</code></pre>\n<p>bbb</p>\n"""
		assert md_to_html(md) == html
	end

	fun test189 is test do
		var md = """aaa     \nbbb     \n"""
		var html = """<p>aaa<br />\nbbb</p>\n"""
		assert md_to_html(md) == html
	end
end
