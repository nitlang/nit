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

module test_commonmark_list_items is test

import test_markdown

class TestCommonmarkListItems
	super TestMarkdownHtml
	test

	fun test216 is test do
		var md = """A paragraph\nwith two lines.\n\n    indented code\n\n> A block quote.\n"""
		var html = """<p>A paragraph\nwith two lines.</p>\n<pre><code>indented code\n</code></pre>\n<blockquote>\n<p>A block quote.</p>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test217 is test do
		var md = """1.  A paragraph\n    with two lines.\n\n        indented code\n\n    > A block quote.\n"""
		var html = """<ol>\n<li>\n<p>A paragraph\nwith two lines.</p>\n<pre><code>indented code\n</code></pre>\n<blockquote>\n<p>A block quote.</p>\n</blockquote>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test218 is test do
		var md = """- one\n\n two\n"""
		var html = """<ul>\n<li>one</li>\n</ul>\n<p>two</p>\n"""
		assert md_to_html(md) == html
	end

	fun test219 is test do
		var md = """- one\n\n  two\n"""
		var html = """<ul>\n<li>\n<p>one</p>\n<p>two</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test220 is test do
		var md = """ -    one\n\n     two\n"""
		var html = """<ul>\n<li>one</li>\n</ul>\n<pre><code> two\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test221 is test do
		var md = """ -    one\n\n      two\n"""
		var html = """<ul>\n<li>\n<p>one</p>\n<p>two</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test222 is test do
		var md = """   > > 1.  one\n>>\n>>     two\n"""
		var html = """<blockquote>\n<blockquote>\n<ol>\n<li>\n<p>one</p>\n<p>two</p>\n</li>\n</ol>\n</blockquote>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test223 is test do
		var md = """>>- one\n>>\n  >  > two\n"""
		var html = """<blockquote>\n<blockquote>\n<ul>\n<li>one</li>\n</ul>\n<p>two</p>\n</blockquote>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test224 is test do
		var md = """-one\n\n2.two\n"""
		var html = """<p>-one</p>\n<p>2.two</p>\n"""
		assert md_to_html(md) == html
	end

	fun test225 is test do
		var md = """- foo\n\n\n  bar\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<p>bar</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test226 is test do
		var md = """1.  foo\n\n    ```\n    bar\n    ```\n\n    baz\n\n    > bam\n"""
		var html = """<ol>\n<li>\n<p>foo</p>\n<pre><code>bar\n</code></pre>\n<p>baz</p>\n<blockquote>\n<p>bam</p>\n</blockquote>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test227 is test do
		var md = """- Foo\n\n      bar\n\n\n      baz\n"""
		var html = """<ul>\n<li>\n<p>Foo</p>\n<pre><code>bar\n\n\nbaz\n</code></pre>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test228 is test do
		var md = """123456789. ok\n"""
		var html = """<ol start="123456789">\n<li>ok</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test229 is test do
		var md = """1234567890. not ok\n"""
		var html = """<p>1234567890. not ok</p>\n"""
		assert md_to_html(md) == html
	end

	fun test230 is test do
		var md = """0. ok\n"""
		var html = """<ol start="0">\n<li>ok</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test231 is test do
		var md = """003. ok\n"""
		var html = """<ol start="3">\n<li>ok</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test232 is test do
		var md = """-1. not ok\n"""
		var html = """<p>-1. not ok</p>\n"""
		assert md_to_html(md) == html
	end

	fun test233 is test do
		var md = """- foo\n\n      bar\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<pre><code>bar\n</code></pre>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test234 is test do
		var md = """  10.  foo\n\n           bar\n"""
		var html = """<ol start="10">\n<li>\n<p>foo</p>\n<pre><code>bar\n</code></pre>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test235 is test do
		var md = """    indented code\n\nparagraph\n\n    more code\n"""
		var html = """<pre><code>indented code\n</code></pre>\n<p>paragraph</p>\n<pre><code>more code\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test236 is test do
		var md = """1.     indented code\n\n   paragraph\n\n       more code\n"""
		var html = """<ol>\n<li>\n<pre><code>indented code\n</code></pre>\n<p>paragraph</p>\n<pre><code>more code\n</code></pre>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test237 is test do
		var md = """1.      indented code\n\n   paragraph\n\n       more code\n"""
		var html = """<ol>\n<li>\n<pre><code> indented code\n</code></pre>\n<p>paragraph</p>\n<pre><code>more code\n</code></pre>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test238 is test do
		var md = """   foo\n\nbar\n"""
		var html = """<p>foo</p>\n<p>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test239 is test do
		var md = """-    foo\n\n  bar\n"""
		var html = """<ul>\n<li>foo</li>\n</ul>\n<p>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test240 is test do
		var md = """-  foo\n\n   bar\n"""
		var html = """<ul>\n<li>\n<p>foo</p>\n<p>bar</p>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test241 is test do
		var md = """-\n  foo\n-\n  ```\n  bar\n  ```\n-\n      baz\n"""
		var html = """<ul>\n<li>foo</li>\n<li>\n<pre><code>bar\n</code></pre>\n</li>\n<li>\n<pre><code>baz\n</code></pre>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test242 is test do
		var md = """-   \n  foo\n"""
		var html = """<ul>\n<li>foo</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test243 is test do
		var md = """-\n\n  foo\n"""
		var html = """<ul>\n<li></li>\n</ul>\n<p>foo</p>\n"""
		assert md_to_html(md) == html
	end

	fun test244 is test do
		var md = """- foo\n-\n- bar\n"""
		var html = """<ul>\n<li>foo</li>\n<li></li>\n<li>bar</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test245 is test do
		var md = """- foo\n-   \n- bar\n"""
		var html = """<ul>\n<li>foo</li>\n<li></li>\n<li>bar</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test246 is test do
		var md = """1. foo\n2.\n3. bar\n"""
		var html = """<ol>\n<li>foo</li>\n<li></li>\n<li>bar</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test247 is test do
		var md = """*\n"""
		var html = """<ul>\n<li></li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test248 is test do
		var md = """foo\n*\n\nfoo\n1.\n"""
		var html = """<p>foo\n*</p>\n<p>foo\n1.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test249 is test do
		var md = """ 1.  A paragraph\n     with two lines.\n\n         indented code\n\n     > A block quote.\n"""
		var html = """<ol>\n<li>\n<p>A paragraph\nwith two lines.</p>\n<pre><code>indented code\n</code></pre>\n<blockquote>\n<p>A block quote.</p>\n</blockquote>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test250 is test do
		var md = """  1.  A paragraph\n      with two lines.\n\n          indented code\n\n      > A block quote.\n"""
		var html = """<ol>\n<li>\n<p>A paragraph\nwith two lines.</p>\n<pre><code>indented code\n</code></pre>\n<blockquote>\n<p>A block quote.</p>\n</blockquote>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test251 is test do
		var md = """   1.  A paragraph\n       with two lines.\n\n           indented code\n\n       > A block quote.\n"""
		var html = """<ol>\n<li>\n<p>A paragraph\nwith two lines.</p>\n<pre><code>indented code\n</code></pre>\n<blockquote>\n<p>A block quote.</p>\n</blockquote>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test252 is test do
		var md = """    1.  A paragraph\n        with two lines.\n\n            indented code\n\n        > A block quote.\n"""
		var html = """<pre><code>1.  A paragraph\n    with two lines.\n\n        indented code\n\n    &gt; A block quote.\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test253 is test do
		var md = """  1.  A paragraph\nwith two lines.\n\n          indented code\n\n      > A block quote.\n"""
		var html = """<ol>\n<li>\n<p>A paragraph\nwith two lines.</p>\n<pre><code>indented code\n</code></pre>\n<blockquote>\n<p>A block quote.</p>\n</blockquote>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test254 is test do
		var md = """  1.  A paragraph\n    with two lines.\n"""
		var html = """<ol>\n<li>A paragraph\nwith two lines.</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test255 is test do
		var md = """> 1. > Blockquote\ncontinued here.\n"""
		var html = """<blockquote>\n<ol>\n<li>\n<blockquote>\n<p>Blockquote\ncontinued here.</p>\n</blockquote>\n</li>\n</ol>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test256 is test do
		var md = """> 1. > Blockquote\n> continued here.\n"""
		var html = """<blockquote>\n<ol>\n<li>\n<blockquote>\n<p>Blockquote\ncontinued here.</p>\n</blockquote>\n</li>\n</ol>\n</blockquote>\n"""
		assert md_to_html(md) == html
	end

	fun test257 is test do
		var md = """- foo\n  - bar\n    - baz\n      - boo\n"""
		var html = """<ul>\n<li>foo\n<ul>\n<li>bar\n<ul>\n<li>baz\n<ul>\n<li>boo</li>\n</ul>\n</li>\n</ul>\n</li>\n</ul>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test258 is test do
		var md = """- foo\n - bar\n  - baz\n   - boo\n"""
		var html = """<ul>\n<li>foo</li>\n<li>bar</li>\n<li>baz</li>\n<li>boo</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test259 is test do
		var md = """10) foo\n    - bar\n"""
		var html = """<ol start="10">\n<li>foo\n<ul>\n<li>bar</li>\n</ul>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test260 is test do
		var md = """10) foo\n   - bar\n"""
		var html = """<ol start="10">\n<li>foo</li>\n</ol>\n<ul>\n<li>bar</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test261 is test do
		var md = """- - foo\n"""
		var html = """<ul>\n<li>\n<ul>\n<li>foo</li>\n</ul>\n</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test262 is test do
		var md = """1. - 2. foo\n"""
		var html = """<ol>\n<li>\n<ul>\n<li>\n<ol start="2">\n<li>foo</li>\n</ol>\n</li>\n</ul>\n</li>\n</ol>\n"""
		assert md_to_html(md) == html
	end

	fun test263 is test do
		var md = """- # Foo\n- Bar\n  ---\n  baz\n"""
		var html = """<ul>\n<li>\n<h1>Foo</h1>\n</li>\n<li>\n<h2>Bar</h2>\nbaz</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end
end
