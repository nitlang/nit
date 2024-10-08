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

module test_commonmark_raw_html is test

import test_markdown

class TestCommonmarkRawHTML
	super TestMarkdownHtml
	test

	fun test587 is test do
		var md = """<a><bab><c2c>\n"""
		var html = """<p><a><bab><c2c></p>\n"""
		assert md_to_html(md) == html
	end

	fun test588 is test do
		var md = """<a/><b2/>\n"""
		var html = """<p><a/><b2/></p>\n"""
		assert md_to_html(md) == html
	end

	fun test589 is test do
		var md = """<a  /><b2\ndata="foo" >\n"""
		var html = """<p><a  /><b2\ndata="foo" ></p>\n"""
		assert md_to_html(md) == html
	end

	fun test590 is test do
		var md = """<a foo="bar" bam = 'baz <em>"</em>'\n_boolean zoop:33=zoop:33 />\n"""
		var html = """<p><a foo="bar" bam = 'baz <em>"</em>'\n_boolean zoop:33=zoop:33 /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test591 is test do
		var md = """Foo <responsive-image src="foo.jpg" />\n"""
		var html = """<p>Foo <responsive-image src="foo.jpg" /></p>\n"""
		assert md_to_html(md) == html
	end

	fun test592 is test do
		var md = """<33> <__>\n"""
		var html = """<p>&lt;33&gt; &lt;__&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test593 is test do
		var md = """<a h*#ref="hi">\n"""
		var html = """<p>&lt;a h*#ref=&quot;hi&quot;&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test594 is test do
		var md = """<a href="hi'> <a href=hi'>\n"""
		var html = """<p>&lt;a href=&quot;hi'&gt; &lt;a href=hi'&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test595 is test do
		var md = """< a><\nfoo><bar/ >\n<foo bar=baz\nbim!bop />\n"""
		var html = """<p>&lt; a&gt;&lt;\nfoo&gt;&lt;bar/ &gt;\n&lt;foo bar=baz\nbim!bop /&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test596 is test do
		var md = """<a href='bar'title=title>\n"""
		var html = """<p>&lt;a href='bar'title=title&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test597 is test do
		var md = """</a></foo >\n"""
		var html = """<p></a></foo ></p>\n"""
		assert md_to_html(md) == html
	end

	fun test598 is test do
		var md = """</a href="foo">\n"""
		var html = """<p>&lt;/a href=&quot;foo&quot;&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test599 is test do
		var md = """foo <!-- this is a\ncomment - with hyphen -->\n"""
		var html = """<p>foo <!-- this is a\ncomment - with hyphen --></p>\n"""
		assert md_to_html(md) == html
	end

	fun test600 is test do
		var md = """foo <!-- not a comment -- two hyphens -->\n"""
		var html = """<p>foo &lt;!-- not a comment -- two hyphens --&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test601 is test do
		var md = """foo <!--> foo -->\n\nfoo <!-- foo--->\n"""
		var html = """<p>foo &lt;!--&gt; foo --&gt;</p>\n<p>foo &lt;!-- foo---&gt;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test602 is test do
		var md = """foo <?php echo $a; ?>\n"""
		var html = """<p>foo <?php echo $a; ?></p>\n"""
		assert md_to_html(md) == html
	end

	fun test603 is test do
		var md = """foo <!ELEMENT br EMPTY>\n"""
		var html = """<p>foo <!ELEMENT br EMPTY></p>\n"""
		assert md_to_html(md) == html
	end

	fun test604 is test do
		var md = """foo <![CDATA[>&<]]>\n"""
		var html = """<p>foo <![CDATA[>&<]]></p>\n"""
		assert md_to_html(md) == html
	end

	fun test605 is test do
		var md = """foo <a href="&ouml;">\n"""
		var html = """<p>foo <a href="&ouml;"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test606 is test do
		var md = """foo <a href="\\*">\n"""
		var html = """<p>foo <a href="\\*"></p>\n"""
		assert md_to_html(md) == html
	end

	fun test607 is test do
		var md = """<a href="\\"">\n"""
		var html = """<p>&lt;a href=&quot;&quot;&quot;&gt;</p>\n"""
		assert md_to_html(md) == html
	end
end
