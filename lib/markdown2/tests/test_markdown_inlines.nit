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
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either htmlress or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Tests for markdown inline constructs
module test_markdown_inlines is test

import test_markdown

class TestMarkdownInlines
	super TestMarkdownHtml
	test

	fun test_inlines_emph1 is test do
		var md = """
*single asterisks*

_single underscores_

**double asterisks**

__double underscores__
"""
		var html = """<p><em>single asterisks</em></p>
<p><em>single underscores</em></p>
<p><strong>double asterisks</strong></p>
<p><strong>double underscores</strong></p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_emph2 is test do
		var md = "un*frigging*believable"
		var html = "<p>un<em>frigging</em>believable</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_emph3 is test do
		var md = "Con _cat_ this"
		var html = "<p>Con <em>cat</em> this</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_emph_ext is test do
		var md = "Con_cat_this"
		var html = "<p>Con_cat_this</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_xml1 is test do
		var md = """
This is a regular paragraph.

<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>

This is another regular paragraph.
"""
		var html = """
<p>This is a regular paragraph.</p>
<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>
<p>This is another regular paragraph.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_xml2 is test do
		var md = """
This is an image <img src="foo/bar" alt="baz"/> in a regular paragraph.
"""
		var html = """
<p>This is an image <img src="foo/bar" alt="baz"/> in a regular paragraph.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_xml3 is test do
		var md = """
<div style=">"/>
"""
		var html = """
<div style=">"/>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_xml4 is test do
		var md = """
<p>This is an example of a block element that should be escaped.</p>
<p>Idem for the second paragraph.</p>
"""
		assert md_to_html(md) == md
	end

	fun test_inlines_xml5 is test do
		var md = """
# Some more XML tests

<p>This is an example of a block element that should be escaped.</p>
<p>Idem for the second paragraph.</p>

With a *md paragraph*!
"""
		var html = """
<h1>Some more XML tests</h1>
<p>This is an example of a block element that should be escaped.</p>
<p>Idem for the second paragraph.</p>
<p>With a <em>md paragraph</em>!</p>
"""
		assert md_to_html(md) == html
	end

	fun test_escape_bad_html is test do
		var md = "-1 if < , +1 if > and 0 otherwise"
		var html = "<p>-1 if &lt; , +1 if &gt; and 0 otherwise</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_span_code1 is test do
		var md = "Use the `printf()` function."
		var html = "<p>Use the <code>printf()</code> function.</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_span_code2 is test do
		var md = "``There is a literal backtick (`) here.``"
		var html = "<p><code>There is a literal backtick (`) here.</code></p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_span_code3 is test do
		var md = """
A single backtick in a code span: `` ` ``

A backtick-delimited string in a code span: `` `foo` ``
"""
		var html = """
<p>A single backtick in a code span: <code>`</code></p>
<p>A backtick-delimited string in a code span: <code>`foo`</code></p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_span_code4 is test do
		var md = "Please don't use any `<blink>` tags."
		var html = "<p>Please don't use any <code>&lt;blink&gt;</code> tags.</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_span_code5 is test do
		var md = "`&#8212;` is the decimal-encoded equivalent of `&mdash;`."
		var html = "<p><code>&amp;#8212;</code> is the decimal-encoded equivalent of <code>&amp;mdash;</code>.</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_escape1 is test do
		var md = "\\*this text is surrounded by literal asterisks\\*"
		var html = "<p>*this text is surrounded by literal asterisks*</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_escape2 is test do
		var md = "1986\\. What a great season."
		var html = "<p>1986. What a great season.</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_escape3 is test do
		var md = "Ben & Lux"
		var html = "<p>Ben &amp; Lux</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_link1 is test do
		var md = """
This is [an example](http://example.com/ "Title") inline link.

[This link](http://example.net/) has no title attribute.
"""
		var html = """<p>This is <a href="http://example.com/" title="Title">an example</a> inline link.</p>
<p><a href="http://example.net/">This link</a> has no title attribute.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_link2 is test do
		var md = "See my [About](/about/) page for details."
		var html = "<p>See my <a href=\"/about/\">About</a> page for details.</p>\n"
		assert md_to_html(md) == html
	end

	fun test_inlines_link3 is test do
		var md = """
This is [an example][id] reference-style link.

Some lorem ipsum

[id]: http://example.com/  "Optional Title Here"

Some other lipsum
"""
		var html = """
<p>This is <a href="http://example.com/" title="Optional Title Here">an example</a> reference-style link.</p>
<p>Some lorem ipsum</p>
<p>Some other lipsum</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_link4 is test do
		var md = """
This is multiple examples: [foo][1], [bar][2], [baz][3].

[1]: http://example.com/  "Optional Title Here"
[2]: http://example.com/  'Optional Title Here'
[3]: http://example.com/  (Optional Title Here)
"""
		var html = """
<p>This is multiple examples: <a href="http://example.com/" title="Optional Title Here">foo</a>, <a href="http://example.com/" title="Optional Title Here">bar</a>, <a href="http://example.com/" title="Optional Title Here">baz</a>.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_link5 is test do
		var md = """
This is multiple examples: [foo][a], [bar][A], [a].

[a]: http://example.com/  "Optional Title Here"
"""
		var html = """<p>This is multiple examples: <a href="http://example.com/" title="Optional Title Here">foo</a>, <a href="http://example.com/" title="Optional Title Here">bar</a>, <a href="http://example.com/" title="Optional Title Here">a</a>.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_link6 is test do
		var md = """
I get 10 times more traffic from [Google][] than from [Yahoo][] or [MSN][].

[Google]: http://google.com/        "Google"
[Yahoo]: http://search.yahoo.com/   "Yahoo Search"
[MSN]: http://search.msn.com/       "MSN Search"
"""
		var html = """<p>I get 10 times more traffic from <a href="http://google.com/" title="Google">Google</a> than from <a href="http://search.yahoo.com/" title="Yahoo Search">Yahoo</a> or <a href="http://search.msn.com/" title="MSN Search">MSN</a>.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_link7 is test do
		var md = """
Visit [Daring Fireball][] for more information.

[Daring Fireball]: http://daringfireball.net/
"""
		var html = """<p>Visit <a href="http://daringfireball.net/">Daring Fireball</a> for more information.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_link8 is test do
		var md = """
This one has a [line
break].

This one has a [line
break] with a line-ending space.

[line break]: /foo
"""
		var html = """
<p>This one has a <a href="/foo">line
break</a>.</p>
<p>This one has a <a href="/foo">line
break</a> with a line-ending space.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_link9 is test do
		var md = """
Foo [bar][].

Foo [bar](/url/ "Title with \\"quotes\\" inside").


[bar]: /url/ "Title with \\"quotes\\" inside"
"""
		var html = """
<p>Foo <a href="/url/" title="Title with &quot;quotes&quot; inside">bar</a>.</p>
<p>Foo <a href="/url/" title="Title with &quot;quotes&quot; inside">bar</a>.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_img1 is test do
		var md = """
![Alt text](/path/to/img.jpg)

![Alt text](/path/to/img.jpg "Optional title")
"""
		var html = """
<p><img src="/path/to/img.jpg" alt="Alt text" /></p>
<p><img src="/path/to/img.jpg" alt="Alt text" title="Optional title" /></p>
"""
		assert md_to_html(md) == html
	end

	fun test_inlines_img2 is test do
		var md = """
![Alt text][id]

[id]: url/to/image  "Optional title attribute"
"""
		var html = """
<p><img src="url/to/image" alt="Alt text" title="Optional title attribute" /></p>
"""
		assert md_to_html(md) == html
	end
end
