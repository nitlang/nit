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

module test_commonmark_lists is test

import test_markdown

class TestCommonmarkLists
	super TestMarkdownHtml
	test

	fun test264 is test do
		var md = """- foo\n- bar\n+ baz\n"""
		var html = """<ul>\n<li>foo</li>\n<li>bar</li>\n</ul>\n<ul>\n<li>baz</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test265 is test do
		var md = """1. foo\n2. bar\n3) baz\n"""
		var html = """<ol>\n<li>foo</li>\n<li>bar</li>\n</ol>\n<ol start="3">\n<li>baz</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test266 is test do
		var md = """Foo\n- bar\n- baz\n"""
		var html = """<p>Foo</p>\n<ul>\n<li>bar</li>\n<li>baz</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test267 is test do
		var md = """The number of windows in my house is\n14.  The number of doors is 6.\n"""
		var html = """<p>The number of windows in my house is\n14.  The number of doors is 6.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test268 is test do
		var md = """The number of windows in my house is\n1.  The number of doors is 6.\n"""
		var html = """<p>The number of windows in my house is</p>\n<ol>\n<li>The number of doors is 6.</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test269 is test do
		var md = """- foo\n\n- bar\n\n\n- baz\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n</li>\n<li>\n<p>bar</p>\n</li>\n<li>\n<p>baz</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test270 is test do
		var md = """- foo\n  - bar\n    - baz\n\n\n      bim\n"""
		var html = """<ul>\n<li>foo\n<ul>\n<li>bar\n<ul>\n<li>\n<p>baz</p>\n<p>bim</p>\n</li>\n</ul>\n</li>\n</ul>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test271 is test do
		var md = """- foo\n- bar\n\n<!-- -->\n\n- baz\n- bim\n"""
		var html = """<ul>\n<li>foo</li>\n<li>bar</li>\n</ul>\n<!-- -->\n<ul>\n<li>baz</li>\n<li>bim</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test272 is test do
		var md = """-   foo\n\n    notcode\n\n-   foo\n\n<!-- -->\n\n    code\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<p>notcode</p>\n</li>\n<li>\n<p>foo</p>\n</li>\n</ul>\n<!-- -->\n<pre><code>code\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test273 is test do
		var md = """- a\n - b\n  - c\n   - d\n  - e\n - f\n- g\n"""
		var html = """<ul>\n<li>a</li>\n<li>b</li>\n<li>c</li>\n<li>d</li>\n<li>e</li>\n<li>f</li>\n<li>g</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test274 is test do
		var md = """1. a\n\n  2. b\n\n   3. c\n"""
		var html = """<ol>\n<li>\n<p>a</p>\n</li>\n<li>\n<p>b</p>\n</li>\n<li>\n<p>c</p>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test277 is test do
		var md = """- a\n- b\n\n- c\n"""
		var html = """<ul>\n<li>\n<p>a</p>\n</li>\n<li>\n<p>b</p>\n</li>\n<li>\n<p>c</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test278 is test do
		var md = """* a\n*\n\n* c\n"""
		var html = """<ul>\n<li>\n<p>a</p>\n</li>\n<li></li>\n<li>\n<p>c</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test279 is test do
		var md = """- a\n- b\n\n  c\n- d\n"""
		var html = """<ul>\n<li>\n<p>a</p>\n</li>\n<li>\n<p>b</p>\n<p>c</p>\n</li>\n<li>\n<p>d</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test280 is test do
		var md = """- a\n- b\n\n  [ref]: /url\n- d\n"""
		var html = """<ul>\n<li>\n<p>a</p>\n</li>\n<li>\n<p>b</p>\n</li>\n<li>\n<p>d</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test281 is test do
		var md = """- a\n- ```\n  b\n\n\n  ```\n- c\n"""
		var html = """<ul>\n<li>a</li>\n<li>\n<pre><code>b\n\n\n</code></pre>\n</li>\n<li>c</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test282 is test do
		var md = """- a\n  - b\n\n    c\n- d\n"""
		var html = """<ul>\n<li>a\n<ul>\n<li>\n<p>b</p>\n<p>c</p>\n</li>\n</ul>\n</li>\n<li>d</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test283 is test do
		var md = """* a\n  > b\n  >\n* c\n"""
		var html = """<ul>\n<li>a\n<blockquote>\n<p>b</p>\n</blockquote>\n</li>\n<li>c</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test284 is test do
		var md = """- a\n  > b\n  ```\n  c\n  ```\n- d\n"""
		var html = """<ul>\n<li>a\n<blockquote>\n<p>b</p>\n</blockquote>\n<pre><code>c\n</code></pre>\n</li>\n<li>d</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test285 is test do
		var md = """- a\n"""
		var html = """<ul>\n<li>a</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test286 is test do
		var md = """- a\n  - b\n"""
		var html = """<ul>\n<li>a\n<ul>\n<li>b</li>\n</ul>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test287 is test do
		var md = """1. ```\n   foo\n   ```\n\n   bar\n"""
		var html = """<ol>\n<li>\n<pre><code>foo\n</code></pre>\n<p>bar</p>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test288 is test do
		var md = """* foo\n  * bar\n\n  baz\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<ul>\n<li>bar</li>\n</ul>\n<p>baz</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test289 is test do
		var md = """- a\n  - b\n  - c\n\n- d\n  - e\n  - f\n"""
		var html = """<ul>\n<li>\n<p>a</p>\n<ul>\n<li>b</li>\n<li>c</li>\n</ul>\n</li>\n<li>\n<p>d</p>\n<ul>\n<li>e</li>\n<li>f</li>\n</ul>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end
end
