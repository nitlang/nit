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

module test_commonmark_fenced_code_blocks is test

import test_markdown

class TestCommonmarkFencedCodeBlocks
	super TestMarkdownHtml
	test

	fun test88 is test do
		var md = """```\n<\n >\n```\n"""
		var html = """<pre><code>&lt;\n &gt;\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test89 is test do
		var md = """~~~\n<\n >\n~~~\n"""
		var html = """<pre><code>&lt;\n &gt;\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test90 is test do
		var md = """``\nfoo\n``\n"""
		var html = """<p><code>foo</code></p>\n"""
		assert md_to_html(md) == html
	end

	fun test91 is test do
		var md = """```\naaa\n~~~\n```\n"""
		var html = """<pre><code>aaa\n~~~\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test92 is test do
		var md = """~~~\naaa\n```\n~~~\n"""
		var html = """<pre><code>aaa\n```\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test93 is test do
		var md = """````\naaa\n```\n``````\n"""
		var html = """<pre><code>aaa\n```\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test94 is test do
		var md = """~~~~\naaa\n~~~\n~~~~\n"""
		var html = """<pre><code>aaa\n~~~\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test95 is test do
		var md = """```\n"""
		var html = """<pre><code></code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test96 is test do
		var md = """`````\n\n```\naaa\n"""
		var html = """<pre><code>\n```\naaa\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test97 is test do
		var md = """> ```\n> aaa\n\nbbb\n"""
		var html = """<blockquote>\n<pre><code>aaa\n</code></pre>\n</blockquote>\n<p>bbb</p>\n"""
		assert md_to_html(md) == html
	end

	fun test98 is test do
		var md = """```\n\n  \n```\n"""
		var html = """<pre><code>\n  \n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test99 is test do
		var md = """```\n```\n"""
		var html = """<pre><code></code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test100 is test do
		var md = """ ```\n aaa\naaa\n```\n"""
		var html = """<pre><code>aaa\naaa\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test101 is test do
		var md = """  ```\naaa\n  aaa\naaa\n  ```\n"""
		var html = """<pre><code>aaa\naaa\naaa\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test102 is test do
		var md = """   ```\n   aaa\n    aaa\n  aaa\n   ```\n"""
		var html = """<pre><code>aaa\n aaa\naaa\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test103 is test do
		var md = """    ```\n    aaa\n    ```\n"""
		var html = """<pre><code>```\naaa\n```\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test104 is test do
		var md = """```\naaa\n  ```\n"""
		var html = """<pre><code>aaa\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test105 is test do
		var md = """   ```\naaa\n  ```\n"""
		var html = """<pre><code>aaa\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test106 is test do
		var md = """```\naaa\n    ```\n"""
		var html = """<pre><code>aaa\n    ```\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test107 is test do
		var md = """``` ```\naaa\n"""
		var html = """<p><code></code>\naaa</p>\n"""
		assert md_to_html(md) == html
	end

	fun test108 is test do
		var md = """~~~~~~\naaa\n~~~ ~~\n"""
		var html = """<pre><code>aaa\n~~~ ~~\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test109 is test do
		var md = """foo\n```\nbar\n```\nbaz\n"""
		var html = """<p>foo</p>\n<pre><code>bar\n</code></pre>\n<p>baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test110 is test do
		var md = """foo\n---\n~~~\nbar\n~~~\n# baz\n"""
		var html = """<h2>foo</h2>\n<pre><code>bar\n</code></pre>\n<h1>baz</h1>\n"""
		assert md_to_html(md) == html
	end

	fun test111 is test do
		var md = """```ruby\ndef foo(x)\n  return 3\nend\n```\n"""
		var html = """<pre><code class="language-ruby">def foo(x)\n  return 3\nend\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test112 is test do
		var md = """~~~~    ruby startline=3 $%@#$\ndef foo(x)\n  return 3\nend\n~~~~~~~\n"""
		var html = """<pre><code class="language-ruby">def foo(x)\n  return 3\nend\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test113 is test do
		var md = """````;\n````\n"""
		var html = """<pre><code class="language-;"></code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test114 is test do
		var md = """``` aa ```\nfoo\n"""
		var html = """<p><code>aa</code>\nfoo</p>\n"""
		assert md_to_html(md) == html
	end

	fun test115 is test do
		var md = """```\n``` aaa\n```\n"""
		var html = """<pre><code>``` aaa\n</code></pre>\n"""
		assert md_to_html(md) == html
	end
end
