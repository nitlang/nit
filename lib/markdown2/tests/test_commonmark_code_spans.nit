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

module test_commonmark_code_spans is test

import test_markdown

class TestCommonmarkCodeSpans
	super TestMarkdownHtml
	test

	fun test316 is test do
		var md = """`foo`\n"""
		var html = """<p><code>foo</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test317 is test do
		var md = """`` foo ` bar  ``\n"""
		var html = """<p><code>foo ` bar</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test318 is test do
		var md = """` `` `\n"""
		var html = """<p><code>``</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test319 is test do
		var md = """``\nfoo\n``\n"""
		var html = """<p><code>foo</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test320 is test do
		var md = """`foo   bar\n  baz`\n"""
		var html = """<p><code>foo bar baz</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test321 is test do
		var md = """`a  b`\n"""
		var html = """<p><code>a  b</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test322 is test do
		var md = """`foo `` bar`\n"""
		var html = """<p><code>foo `` bar</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test323 is test do
		var md = """`foo\\`bar`\n"""
		var html = """<p><code>foo\\</code>bar`</p>\n"""
		assert md_to_html(md) == html
	end

	fun test324 is test do
		var md = """*foo`*`\n"""
		var html = """<p>*foo<code>*</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test325 is test do
		var md = """[not a `link](/foo`)\n"""
		var html = """<p>[not a <code>link](/foo</code>)</p>\n"""
		assert md_to_html(md) == html
	end

	fun test326 is test do
		var md = """`<a href="`">`\n"""
		var html = """<p><code>&lt;a href=&quot;</code>&quot;&gt;`</p>\n"""
		assert md_to_html(md) == html
	end

	fun test327 is test do
		var md = """<a href="`">`\n"""
		var html = """<p><a href="`">`</p>\n"""
		assert md_to_html(md) == html
	end

	fun test328 is test do
		var md = """`<http://foo.bar.`baz>`\n"""
		var html = """<p><code>&lt;http://foo.bar.</code>baz&gt;`</p>\n"""
		assert md_to_html(md) == html
	end

	fun test329 is test do
		var md = """<http://foo.bar.`baz>`\n"""
		var html = """<p><a href="http://foo.bar.%60baz">http://foo.bar.`baz</a>`</p>\n"""
		assert md_to_html(md) == html
	end

	fun test330 is test do
		var md = """```foo``\n"""
		var html = """<p>```foo``</p>\n"""
		assert md_to_html(md) == html
	end

	fun test331 is test do
		var md = """`foo\n"""
		var html = """<p>`foo</p>\n"""
		assert md_to_html(md) == html
	end

	fun test332 is test do
		var md = """`foo``bar``\n"""
		var html = """<p>`foo<code>bar</code></p>\n"""
		assert md_to_html(md) == html
	end
end
