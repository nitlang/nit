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

module test_commonmark_html_blocks is test

import test_markdown

class TestCommonmarkHTMLBlocks
	super TestMarkdownHtml
	test

	fun test116 is test do
		var md = """<table><tr><td>\n<pre>\n**Hello**,\n\n_world_.\n</pre>\n</td></tr></table>\n"""
		var html = """<table><tr><td>\n<pre>\n**Hello**,\n<p><em>world</em>.\n</pre></p>\n</td></tr></table>\n"""
		assert md_to_html(md) == html
	end

	fun test117 is test do
		var md = """<table>\n  <tr>\n    <td>\n           hi\n    </td>\n  </tr>\n</table>\n\nokay.\n"""
		var html = """<table>\n  <tr>\n    <td>\n           hi\n    </td>\n  </tr>\n</table>\n<p>okay.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test118 is test do
		var md = """ <div>\n  *hello*\n         <foo><a>\n"""
		var html = """ <div>\n  *hello*\n         <foo><a>\n"""
		assert md_to_html(md) == html
	end

	fun test119 is test do
		var md = """</div>\n*foo*\n"""
		var html = """</div>\n*foo*\n"""
		assert md_to_html(md) == html
	end

	fun test120 is test do
		var md = """<DIV CLASS="foo">\n\n*Markdown*\n\n</DIV>\n"""
		var html = """<DIV CLASS="foo">\n<p><em>Markdown</em></p>\n</DIV>\n"""
		assert md_to_html(md) == html
	end

	fun test121 is test do
		var md = """<div id="foo"\n  class="bar">\n</div>\n"""
		var html = """<div id="foo"\n  class="bar">\n</div>\n"""
		assert md_to_html(md) == html
	end

	fun test122 is test do
		var md = """<div id="foo" class="bar\n  baz">\n</div>\n"""
		var html = """<div id="foo" class="bar\n  baz">\n</div>\n"""
		assert md_to_html(md) == html
	end

	fun test123 is test do
		var md = """<div>\n*foo*\n\n*bar*\n"""
		var html = """<div>\n*foo*\n<p><em>bar</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test124 is test do
		var md = """<div id="foo"\n*hi*\n"""
		var html = """<div id="foo"\n*hi*\n"""
		assert md_to_html(md) == html
	end

	fun test125 is test do
		var md = """<div class\nfoo\n"""
		var html = """<div class\nfoo\n"""
		assert md_to_html(md) == html
	end

	fun test126 is test do
		var md = """<div *???-&&&-<---\n*foo*\n"""
		var html = """<div *???-&&&-<---\n*foo*\n"""
		assert md_to_html(md) == html
	end

	fun test127 is test do
		var md = """<div><a href="bar">*foo*</a></div>\n"""
		var html = """<div><a href="bar">*foo*</a></div>\n"""
		assert md_to_html(md) == html
	end

	fun test128 is test do
		var md = """<table><tr><td>\nfoo\n</td></tr></table>\n"""
		var html = """<table><tr><td>\nfoo\n</td></tr></table>\n"""
		assert md_to_html(md) == html
	end

	fun test129 is test do
		var md = """<div></div>\n``` c\nint x = 33;\n```\n"""
		var html = """<div></div>\n``` c\nint x = 33;\n```\n"""
		assert md_to_html(md) == html
	end

	fun test130 is test do
		var md = """<a href="foo">\n*bar*\n</a>\n"""
		var html = """<a href="foo">\n*bar*\n</a>\n"""
		assert md_to_html(md) == html
	end

	fun test131 is test do
		var md = """<Warning>\n*bar*\n</Warning>\n"""
		var html = """<Warning>\n*bar*\n</Warning>\n"""
		assert md_to_html(md) == html
	end

	fun test132 is test do
		var md = """<i class="foo">\n*bar*\n</i>\n"""
		var html = """<i class="foo">\n*bar*\n</i>\n"""
		assert md_to_html(md) == html
	end

	fun test133 is test do
		var md = """</ins>\n*bar*\n"""
		var html = """</ins>\n*bar*\n"""
		assert md_to_html(md) == html
	end

	fun test134 is test do
		var md = """<del>\n*foo*\n</del>\n"""
		var html = """<del>\n*foo*\n</del>\n"""
		assert md_to_html(md) == html
	end

	fun test135 is test do
		var md = """<del>\n\n*foo*\n\n</del>\n"""
		var html = """<del>\n<p><em>foo</em></p>\n</del>\n"""
		assert md_to_html(md) == html
	end

	fun test136 is test do
		var md = """<del>*foo*</del>\n"""
		var html = """<p><del><em>foo</em></del></p>\n"""
		assert md_to_html(md) == html
	end

	fun test137 is test do
		var md = """<pre language="haskell"><code>\nimport Text.HTML.TagSoup\n\nmain :: IO ()\nmain = print $ parseTags tags\n</code></pre>\nokay\n"""
		var html = """<pre language="haskell"><code>\nimport Text.HTML.TagSoup\n\nmain :: IO ()\nmain = print $ parseTags tags\n</code></pre>\n<p>okay</p>\n"""
		assert md_to_html(md) == html
	end

	fun test138 is test do
		var md = """<script type="text/javascript">\n// JavaScript example\n\ndocument.getElementById("demo").innerHTML = "Hello JavaScript!";\n</script>\nokay\n"""
		var html = """<script type="text/javascript">\n// JavaScript example\n\ndocument.getElementById("demo").innerHTML = "Hello JavaScript!";\n</script>\n<p>okay</p>\n"""
		assert md_to_html(md) == html
	end

	fun test139 is test do
		var md = """<style\n  type="text/css">\nh1 {color:red;}\n\np {color:blue;}\n</style>\nokay\n"""
		var html = """<style\n  type="text/css">\nh1 {color:red;}\n\np {color:blue;}\n</style>\n<p>okay</p>\n"""
		assert md_to_html(md) == html
	end

	fun test140 is test do
		var md = """<style\n  type="text/css">\n\nfoo\n"""
		var html = """<style\n  type="text/css">\n\nfoo\n"""
		assert md_to_html(md) == html
	end

	fun test141 is test do
		var md = """> <div>\n> foo\n\nbar\n"""
		var html = """<blockquote>\n<div>\nfoo\n</blockquote>\n<p>bar</p>\n"""
		assert md_to_html(md) == html
	end

	fun test142 is test do
		var md = """- <div>\n- foo\n"""
		var html = """<ul>\n<li>\n<div>\n</li>\n<li>foo</li>\n</ul>\n"""
		assert md_to_html(md) == html
	end

	fun test143 is test do
		var md = """<style>p{color:red;}</style>\n*foo*\n"""
		var html = """<style>p{color:red;}</style>\n<p><em>foo</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test144 is test do
		var md = """<!-- foo -->*bar*\n*baz*\n"""
		var html = """<!-- foo -->*bar*\n<p><em>baz</em></p>\n"""
		assert md_to_html(md) == html
	end

	fun test145 is test do
		var md = """<script>\nfoo\n</script>1. *bar*\n"""
		var html = """<script>\nfoo\n</script>1. *bar*\n"""
		assert md_to_html(md) == html
	end

	fun test146 is test do
		var md = """<!-- Foo\n\nbar\n   baz -->\nokay\n"""
		var html = """<!-- Foo\n\nbar\n   baz -->\n<p>okay</p>\n"""
		assert md_to_html(md) == html
	end

	fun test147 is test do
		var md = """<?php\n\n  echo '>';\n\n?>\nokay\n"""
		var html = """<?php\n\n  echo '>';\n\n?>\n<p>okay</p>\n"""
		assert md_to_html(md) == html
	end

	fun test148 is test do
		var md = """<!DOCTYPE html>\n"""
		var html = """<!DOCTYPE html>\n"""
		assert md_to_html(md) == html
	end

	fun test149 is test do
		var md = """<![CDATA[\nfunction matchwo(a,b)\n{\n  if (a < b && a < 0) then {\n    return 1;\n\n  } else {\n\n    return 0;\n  }\n}\n]]>\nokay\n"""
		var html = """<![CDATA[\nfunction matchwo(a,b)\n{\n  if (a < b && a < 0) then {\n    return 1;\n\n  } else {\n\n    return 0;\n  }\n}\n]]>\n<p>okay</p>\n"""
		assert md_to_html(md) == html
	end

	fun test150 is test do
		var md = """  <!-- foo -->\n\n    <!-- foo -->\n"""
		var html = """  <!-- foo -->\n<pre><code>&lt;!-- foo --&gt;\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test151 is test do
		var md = """  <div>\n\n    <div>\n"""
		var html = """  <div>\n<pre><code>&lt;div&gt;\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test152 is test do
		var md = """Foo\n<div>\nbar\n</div>\n"""
		var html = """<p>Foo</p>\n<div>\nbar\n</div>\n"""
		assert md_to_html(md) == html
	end

	fun test153 is test do
		var md = """<div>\nbar\n</div>\n*foo*\n"""
		var html = """<div>\nbar\n</div>\n*foo*\n"""
		assert md_to_html(md) == html
	end

	fun test154 is test do
		var md = """Foo\n<a href="bar">\nbaz\n"""
		var html = """<p>Foo\n<a href="bar">\nbaz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test155 is test do
		var md = """<div>\n\n*Emphasized* text.\n\n</div>\n"""
		var html = """<div>\n<p><em>Emphasized</em> text.</p>\n</div>\n"""
		assert md_to_html(md) == html
	end

	fun test156 is test do
		var md = """<div>\n*Emphasized* text.\n</div>\n"""
		var html = """<div>\n*Emphasized* text.\n</div>\n"""
		assert md_to_html(md) == html
	end

	fun test157 is test do
		var md = """<table>\n\n<tr>\n\n<td>\nHi\n</td>\n\n</tr>\n\n</table>\n"""
		var html = """<table>\n<tr>\n<td>\nHi\n</td>\n</tr>\n</table>\n"""
		assert md_to_html(md) == html
	end

	fun test158 is test do
		var md = """<table>\n\n  <tr>\n\n    <td>\n      Hi\n    </td>\n\n  </tr>\n\n</table>\n"""
		var html = """<table>\n  <tr>\n<pre><code>&lt;td&gt;\n  Hi\n&lt;/td&gt;\n</code></pre>\n  </tr>\n</table>\n"""
		assert md_to_html(md) == html
	end
end
