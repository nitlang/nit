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

module test_commonmark_autolinks is test

import test_markdown

class TestCommonmarkAutolinks
	super TestMarkdownHtml
	test

	fun test568 is test do
		var md = """<http://foo.bar.baz>\n"""
		var html = """<p><a href="http://foo.bar.baz">http://foo.bar.baz</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test569 is test do
		var md = """<http://foo.bar.baz/test?q=hello&id=22&boolean>\n"""
		var html = """<p><a href="http://foo.bar.baz/test?q=hello&amp;id=22&amp;boolean">http://foo.bar.baz/test?q=hello&amp;id=22&amp;boolean</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test570 is test do
		var md = """<irc://foo.bar:2233/baz>\n"""
		var html = """<p><a href="irc://foo.bar:2233/baz">irc://foo.bar:2233/baz</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test571 is test do
		var md = """<MAILTO:FOO@BAR.BAZ>\n"""
		var html = """<p><a href="MAILTO:FOO@BAR.BAZ">MAILTO:FOO@BAR.BAZ</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test572 is test do
		var md = """<a+b+c:d>\n"""
		var html = """<p><a href="a+b+c:d">a+b+c:d</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test573 is test do
		var md = """<made-up-scheme://foo,bar>\n"""
		var html = """<p><a href="made-up-scheme://foo,bar">made-up-scheme://foo,bar</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test574 is test do
		var md = """<http://../>\n"""
		var html = """<p><a href="http://../">http://../</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test575 is test do
		var md = """<localhost:5001/foo>\n"""
		var html = """<p><a href="localhost:5001/foo">localhost:5001/foo</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test576 is test do
		var md = """<http://foo.bar/baz bim>\n"""
		var html = """<p>&lt;http://foo.bar/baz bim&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test577 is test do
		var md = """<http://example.com/\\[\\>\n"""
		var html = """<p><a href="http://example.com/%5C%5B%5C">http://example.com/\\[\\</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test578 is test do
		var md = """<foo@bar.example.com>\n"""
		var html = """<p><a href="mailto:foo@bar.example.com">foo@bar.example.com</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test579 is test do
		var md = """<foo+special@Bar.baz-bar0.com>\n"""
		var html = """<p><a href="mailto:foo+special@Bar.baz-bar0.com">foo+special@Bar.baz-bar0.com</a></p>\n"""
		assert md_to_html(md) == html
	end

	fun test580 is test do
		var md = """<foo\\+@bar.example.com>\n"""
		var html = """<p>&lt;foo+@bar.example.com&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test581 is test do
		var md = """<>\n"""
		var html = """<p>&lt;&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test582 is test do
		var md = """< http://foo.bar >\n"""
		var html = """<p>&lt; http://foo.bar &gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test583 is test do
		var md = """<m:abc>\n"""
		var html = """<p>&lt;m:abc&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test584 is test do
		var md = """<foo.bar.baz>\n"""
		var html = """<p>&lt;foo.bar.baz&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test585 is test do
		var md = """http://example.com\n"""
		var html = """<p>http://example.com</p>\n"""
		assert md_to_html(md) == html
	end

	fun test586 is test do
		var md = """foo@bar.example.com\n"""
		var html = """<p>foo@bar.example.com</p>\n"""
		assert md_to_html(md) == html
	end
end
