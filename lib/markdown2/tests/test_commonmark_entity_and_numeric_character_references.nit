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

module test_commonmark_entity_and_numeric_character_references is test

import test_markdown

class TestCommonmarkEntityAndNumericCharacterReferences
	super TestMarkdownHtml
	test

	fun test307 is test do
		var md = """&nbsp &x; &#; &#x;\n&#987654321;\n&#abcdef0;\n&ThisIsNotDefined; &hi?;\n"""
		var html = """<p>&amp;nbsp &amp;x; &amp;#; &amp;#x;\n&amp;#987654321;\n&amp;#abcdef0;\n&amp;ThisIsNotDefined; &amp;hi?;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test308 is test do
		var md = """&copy\n"""
		var html = """<p>&amp;copy</p>\n"""
		assert md_to_html(md) == html
	end

	fun test309 is test do
		var md = """&MadeUpEntity;\n"""
		var html = """<p>&amp;MadeUpEntity;</p>\n"""
		assert md_to_html(md) == html
	end

	fun test310 is test do
		var md = """<a href="&ouml;&ouml;.html">\n"""
		var html = """<a href="&ouml;&ouml;.html">\n"""
		assert md_to_html(md) == html
	end

	fun test314 is test do
		var md = """`f&ouml;&ouml;`\n"""
		var html = """<p><code>f&amp;ouml;&amp;ouml;</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test315 is test do
		var md = """    f&ouml;f&ouml;\n"""
		var html = """<pre><code>f&amp;ouml;f&amp;ouml;\n</code></pre>\n"""
		assert md_to_html(md) == html
	end
end
