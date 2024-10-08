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

# Test suites for module `markdown`
module test_markdown is test

intrude import markdown

class TestMarkdownProcessor
	test

	fun test_process_empty is test do
		var test = ""
		var exp = ""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_tabs is test do
		var test = """
	some code
"""
		var exp = """<pre><code>some code
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end


	fun test_process_par1 is test do
		var test = "test"
		var exp = "<p>test</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_par2 is test do
		var test = """
line1
line2

line3 line4

line5"""
		var exp = """
<p>line1
line2</p>
<p>line3 line4</p>
<p>line5</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_par3 is test do
		var test = """
Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.

Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.
"""
		var exp = """
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.</p>
<p>Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_headings_1 is test do
		var test = """
This is a H1
=============

This is a H2
-------------
"""
		var exp = """
<h1 id="This_is_a_H1">This is a H1</h1>
<h2 id="This_is_a_H2">This is a H2</h2>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_headings_2 is test do
		var test = """
# This is a H1

## This is a H2
###### This is a H6
"""
		var exp = """
<h1 id="This_is_a_H1">This is a H1</h1>
<h2 id="This_is_a_H2">This is a H2</h2>
<h6 id="This_is_a_H6">This is a H6</h6>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_headings_3 is test do
		var test = """
# This is a H1 #

## This is a H2 ##

### This is a H3 ######
"""
		var exp = """
<h1 id="This_is_a_H1">This is a H1</h1>
<h2 id="This_is_a_H2">This is a H2</h2>
<h3 id="This_is_a_H3">This is a H3</h3>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_hr is test do
		var test = """
* * *

***

*****

- - -

---------------------------------------
"""
		var exp = "<hr/>\n<hr/>\n<hr/>\n<hr/>\n<hr/>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_bquote1 is test do
		var test = """
> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
> consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
> Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.
>
> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
> id sem consectetuer libero luctus adipiscing.
"""
		var exp = """<blockquote>
<p>This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.</p>
<p>Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.</p>
</blockquote>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_bquote2 is test do
		var test = """
> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.

> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.
"""
		var exp = """<blockquote>
<p>This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.</p>
<p>Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.</p>
</blockquote>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_bquote3 is test do
		var test = """
> This is the first level of quoting.
>
> > This is nested blockquote.
>
> Back to the first level.
"""
		var exp = """<blockquote>
<p>This is the first level of quoting.</p>
<blockquote>
<p>This is nested blockquote.</p>
</blockquote>
<p>Back to the first level.</p>
</blockquote>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list1 is test do
		var test = """
*   Red
*   Green
*   Blue
"""
		var exp = """<ul>
<li>Red</li>
<li>Green</li>
<li>Blue</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list2 is test do
		var test = """
+   Red
+   Green
+   Blue
"""
		var exp = """<ul>
<li>Red</li>
<li>Green</li>
<li>Blue</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list3 is test do
		var test = """
-   Red
-   Green
-   Blue
"""
		var exp = """<ul>
<li>Red</li>
<li>Green</li>
<li>Blue</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list4 is test do
		var test = """
1.  Bird
2.  McHale
3.  Parish
"""
		var exp = """<ol>
<li>Bird</li>
<li>McHale</li>
<li>Parish</li>
</ol>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list5 is test do
		var test = """
3. Bird
1. McHale
8. Parish
"""
		var exp = """<ol>
<li>Bird</li>
<li>McHale</li>
<li>Parish</li>
</ol>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list6 is test do
		var test = """
*   Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
    Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
    viverra nec, fringilla in, laoreet vitae, risus.
*   Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
    Suspendisse id sem consectetuer libero luctus adipiscing.
"""
		var exp = """
<ul>
<li>Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
viverra nec, fringilla in, laoreet vitae, risus.</li>
<li>Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
Suspendisse id sem consectetuer libero luctus adipiscing.</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list7 is test do
		var test = """
*   Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
viverra nec, fringilla in, laoreet vitae, risus.
*   Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
Suspendisse id sem consectetuer libero luctus adipiscing.
"""
		var exp = """
<ul>
<li>Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
viverra nec, fringilla in, laoreet vitae, risus.</li>
<li>Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
Suspendisse id sem consectetuer libero luctus adipiscing.</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list8 is test do
		var test = """
*   Bird

*   Magic
"""
		var exp = """
<ul>
<li><p>Bird</p>
</li>
<li><p>Magic</p>
</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list9 is test do
		var test = """
1.  This is a list item with two paragraphs. Lorem ipsum dolor
    sit amet, consectetuer adipiscing elit. Aliquam hendrerit
    mi posuere lectus.

    Vestibulum enim wisi, viverra nec, fringilla in, laoreet
    vitae, risus. Donec sit amet nisl. Aliquam semper ipsum
    sit amet velit.

2.  Suspendisse id sem consectetuer libero luctus adipiscing.
"""
		var exp = """
<ol>
<li><p>This is a list item with two paragraphs. Lorem ipsum dolor
sit amet, consectetuer adipiscing elit. Aliquam hendrerit
mi posuere lectus.</p>
<p>Vestibulum enim wisi, viverra nec, fringilla in, laoreet
vitae, risus. Donec sit amet nisl. Aliquam semper ipsum
sit amet velit.</p>
</li>
<li><p>Suspendisse id sem consectetuer libero luctus adipiscing.</p>
</li>
</ol>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list10 is test do
		var test = """
*   This is a list item with two paragraphs.

    This is the second paragraph in the list item. You're
only required to indent the first line. Lorem ipsum dolor
sit amet, consectetuer adipiscing elit.

*   Another item in the same list.
"""
		var exp = """
<ul>
<li><p>This is a list item with two paragraphs.</p>
<p>This is the second paragraph in the list item. You're
only required to indent the first line. Lorem ipsum dolor
sit amet, consectetuer adipiscing elit.</p>
</li>
<li><p>Another item in the same list.</p>
</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_list11 is test do
		var test = """
This is a paragraph
* and this is not a list
"""
		var exp = """
<p>This is a paragraph
* and this is not a list</p>
"""
		var proc = new MarkdownProcessor
		proc.ext_mode = false
		var res = proc.process(test).write_to_string
		assert res == exp
	end

	fun test_process_list_ext is test do
		var test = """
This is a paragraph
* and this is not a list
"""
		var exp = """
<p>This is a paragraph</p>
<ul>
<li>and this is not a list</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code1 is test do
		var test = """
This is a normal paragraph:

    This is a code block.
"""
		var exp = """<p>This is a normal paragraph:</p>
<pre><code>This is a code block.
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code2 is test do
		var test = """
Here is an example of AppleScript:

    tell application "Foo"
        beep
    end tell

    <div class="footer">
        &copy; 2004 Foo Corporation
    </div>
"""
		var exp = """
<p>Here is an example of AppleScript:</p>
<pre><code>tell application "Foo"
    beep
end tell

&lt;div class="footer"&gt;
    &amp;copy; 2004 Foo Corporation
&lt;/div&gt;
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code_ext1 is test do
		var test = """
Here is an example of AppleScript:
~~~
tell application "Foo"
    beep
end tell

<div class="footer">
    &copy; 2004 Foo Corporation
</div>
~~~
"""
		var exp = """
<p>Here is an example of AppleScript:</p>
<pre><code>tell application "Foo"
    beep
end tell

&lt;div class="footer"&gt;
    &amp;copy; 2004 Foo Corporation
&lt;/div&gt;
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code_ext2 is test do
		var test = """
Here is an example of AppleScript:
```
tell application "Foo"
    beep
end tell

<div class="footer">
    &copy; 2004 Foo Corporation
</div>
```
"""
		var exp = """
<p>Here is an example of AppleScript:</p>
<pre><code>tell application "Foo"
    beep
end tell

&lt;div class="footer"&gt;
    &amp;copy; 2004 Foo Corporation
&lt;/div&gt;
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code_ext3 is test do
		var proc = new MarkdownProcessor
		proc.ext_mode = false

		var test = """
Here is an example of AppleScript:
    beep
"""
		var exp = """
<p>Here is an example of AppleScript:
beep</p>
"""
		var res = proc.process(test).write_to_string
		assert res == exp
	end

	fun test_process_code_ext4 is test do
		var test = """
Here is an example of AppleScript:
    beep
"""
		var exp = """
<p>Here is an example of AppleScript:</p>
<pre><code>beep
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code_ext5 is test do
		var test = """
```nit
print "Hello World!"
```
"""
		var exp = """
<pre class="nit"><code>print "Hello World!"
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code_ext6 is test do
		var test = """
~~~
print "Hello"
~~~
~~~
print "World"
~~~
"""
		var exp = """
<pre><code>print "Hello"
</code></pre>
<pre><code>print "World"
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_code_ext7 is test do
		var test = """
~~~
print "Hello"
~~~
~~~
print "World"
~~~
"""
		var exp = """
<pre><code>print "Hello"
</code></pre>
<pre><code>print "World"
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_nesting1 is test do
		var test = """
> ## This is a header.
>
> 1.   This is the first list item.
> 2.   This is the second list item.
>
> Here's some example code:
>
>     return shell_exec("echo $input | $markdown_script");
"""
		var exp = """
<blockquote>
<h2 id="This_is_a_header.">This is a header.</h2>
<ol>
<li>This is the first list item.</li>
<li>This is the second list item.</li>
</ol>
<p>Here's some example code:</p>
<pre><code>return shell_exec("echo $input | $markdown_script");
</code></pre>
</blockquote>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_nesting2 is test do
		var test = """
*   A list item with a blockquote:

    > This is a blockquote
    > inside a list item.
"""
		var exp = """
<ul>
<li><p>A list item with a blockquote:</p>
<blockquote>
<p>This is a blockquote
inside a list item.</p>
</blockquote>
</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_nesting3 is test do
		var test = """
*   A list item with a code block:

        <code goes here>
"""
		var exp = """
<ul>
<li><p>A list item with a code block:</p>
<pre><code>&lt;code goes here&gt;
</code></pre>
</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_nesting4 is test do
		var test = """
*	Tab
	*	Tab
		*	Tab
"""
		var exp = """
<ul>
<li>Tab<ul>
<li>Tab<ul>
<li>Tab</li>
</ul>
</li>
</ul>
</li>
</ul>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	# TODO
	#	fun test_process_nesting5 is test do
	#		var test = """
	# *	this
	#
	#	*	sub
	#
	#		that
	# """
	#		var exp = """
	# <ul>
	# <li><p>this</p>
	# <ul>
	# <li>sub</li>
	# </ul>
	# <p>that</p>
	# </li>
	# </ul>
	# """
	#		var res = test.md_to_html.write_to_string
	#		assert res == exp
	#	end

	fun test_process_emph1 is test do
		var test = """
*single asterisks*

_single underscores_

**double asterisks**

__double underscores__
"""
		var exp = """<p><em>single asterisks</em></p>
<p><em>single underscores</em></p>
<p><strong>double asterisks</strong></p>
<p><strong>double underscores</strong></p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_emph2 is test do
		var test = "un*frigging*believable"
		var exp = "<p>un<em>frigging</em>believable</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_emph3 is test do
		var proc = new MarkdownProcessor
		proc.ext_mode = false
		var test = "Con_cat_this"
		var exp = "<p>Con<em>cat</em>this</p>\n"
		var res = proc.process(test).write_to_string
		assert res == exp
	end

	fun test_process_emph_ext is test do
		var test = "Con_cat_this"
		var exp = "<p>Con_cat_this</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_xml1 is test do
		var test = """
This is a regular paragraph.

<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>

This is another regular paragraph.
"""
		var exp = """
<p>This is a regular paragraph.</p>
<table>
    <tr>
        <td>Foo</td>
    </tr>
</table>
<p>This is another regular paragraph.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_xml2 is test do
		var test = """
This is an image <img src="foo/bar" alt="baz"/> in a regular paragraph.
"""
		var exp = """<p>This is an image <img src="foo/bar" alt="baz" /> in a regular paragraph.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_xml3 is test do
		var test = """
<div style=">"/>
"""
		var exp = """
<div style=">"/>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_xml4 is test do
		var test = """
<p>This is an example of a block element that should be escaped.</p>
<p>Idem for the second paragraph.</p>
"""
		var exp = test
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_xml5 is test do
		var test = """
# Some more XML tests

<p>This is an example of a block element that should be escaped.</p>
<p>Idem for the second paragraph.</p>

With a *md paragraph*!
"""
		var exp = """
<h1 id="Some_more_XML_tests">Some more XML tests</h1>
<p>This is an example of a block element that should be escaped.</p>
<p>Idem for the second paragraph.</p>
<p>With a <em>md paragraph</em>!</p>
"""
		var res = test.md_to_html.write_to_string
		print res
		assert res == exp
	end

	fun test_process_span_code1 is test do
		var test = "Use the `printf()` function."
		var exp = "<p>Use the <code>printf()</code> function.</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_span_code2 is test do
		var test = "``There is a literal backtick (`) here.``"
		var exp = "<p><code>There is a literal backtick (`) here.</code></p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_span_code3 is test do
		var test = """
A single backtick in a code span: `` ` ``

A backtick-delimited string in a code span: `` `foo` ``
"""
		var exp = """
<p>A single backtick in a code span: <code>`</code></p>
<p>A backtick-delimited string in a code span: <code>`foo`</code></p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_span_code4 is test do
		var test = "Please don't use any `<blink>` tags."
		var exp = "<p>Please don't use any <code>&lt;blink&gt;</code> tags.</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_span_code5 is test do
		var test = "`&#8212;` is the decimal-encoded equivalent of `&mdash;`."
		var exp = "<p><code>&amp;#8212;</code> is the decimal-encoded equivalent of <code>&amp;mdash;</code>.</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_escape1 is test do
		var test = "\\*this text is surrounded by literal asterisks\\*"
		var exp = "<p>*this text is surrounded by literal asterisks*</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_escape2 is test do
		var test = "1986\\. What a great season."
		var exp = "<p>1986. What a great season.</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_escape3 is test do
		var test = "Ben & Lux"
		var exp = "<p>Ben &amp; Lux</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link1 is test do
		var test = """
This is [an example](http://example.com/ "Title") inline link.

[This link](http://example.net/) has no title attribute.
"""
		var exp = """<p>This is <a href="http://example.com/" title="Title">an example</a> inline link.</p>
<p><a href="http://example.net/">This link</a> has no title attribute.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link2 is test do
		var test = "See my [About](/about/) page for details."
		var exp = "<p>See my <a href=\"/about/\">About</a> page for details.</p>\n"
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link3 is test do
		var test = """
This is [an example][id] reference-style link.

This is [an example] [id] reference-style link.

Some lorem ipsum

[id]: http://example.com/  "Optional Title Here"

Some other lipsum
"""
		var exp = """
<p>This is <a href="http://example.com/" title="Optional Title Here">an example</a> reference-style link.</p>
<p>This is <a href="http://example.com/" title="Optional Title Here">an example</a> reference-style link.</p>
<p>Some lorem ipsum</p>
<p>Some other lipsum</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link4 is test do
		var test = """
This is multiple examples: [foo][1], [bar][2], [baz][3].

[1]: http://example.com/  "Optional Title Here"
[2]: http://example.com/  'Optional Title Here'
[3]: http://example.com/  (Optional Title Here)
"""
		var exp = """
<p>This is multiple examples: <a href="http://example.com/" title="Optional Title Here">foo</a>, <a href="http://example.com/" title="Optional Title Here">bar</a>, <a href="http://example.com/" title="Optional Title Here">baz</a>.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link5 is test do
		var test = """
This is multiple examples: [foo][a], [bar][A], [a].

[a]: http://example.com/  "Optional Title Here"
"""
		var exp = """<p>This is multiple examples: <a href="http://example.com/" title="Optional Title Here">foo</a>, <a href="http://example.com/" title="Optional Title Here">bar</a>, <a href="http://example.com/" title="Optional Title Here">a</a>.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link6 is test do
		var test = """
I get 10 times more traffic from [Google][] than from [Yahoo][] or [MSN][].

[Google]: http://google.com/        "Google"
[Yahoo]: http://search.yahoo.com/   "Yahoo Search"
[MSN]: http://search.msn.com/       "MSN Search"
"""
		var exp = """<p>I get 10 times more traffic from <a href="http://google.com/" title="Google">Google</a> than from <a href="http://search.yahoo.com/" title="Yahoo Search">Yahoo</a> or <a href="http://search.msn.com/" title="MSN Search">MSN</a>.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link7 is test do
		var test = """
Visit [Daring Fireball][] for more information.

[Daring Fireball]: http://daringfireball.net/
"""
		var exp = """<p>Visit <a href="http://daringfireball.net/">Daring Fireball</a> for more information.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_link8 is test do
		var test = """
This one has a [line
break].

This one has a [line
break] with a line-ending space.

[line break]: /foo
"""
		var exp = """
<p>This one has a <a href="/foo">line
break</a>.</p>
<p>This one has a <a href="/foo">line
break</a> with a line-ending space.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	# FIXME unignore test once escape strings fixed
	#	fun test_process_link9 is test do
	#		var test = """
	# Foo [bar][].
	#
	# Foo [bar](/url/ "Title with \"quotes\" inside").
	#
	#
	#   [bar]: /url/ "Title with \"quotes\" inside"
	# """
	#		var exp = """
	# <p>Foo <a href="/url/" title="Title with &quot;quotes&quot; inside">bar</a>.</p>
	# <p>Foo <a href="/url/" title="Title with &quot;quotes&quot; inside">bar</a>.</p>
	# """
	#		var res = test.md_to_html.write_to_string
	#		assert res == exp
	#	end

	fun test_process_img1 is test do
		var test = """
![Alt text](/path/to/img.jpg)

![Alt text](/path/to/img.jpg "Optional title")
"""
		var exp = """<p><img src="/path/to/img.jpg" alt="Alt text"/></p>
<p><img src="/path/to/img.jpg" alt="Alt text" title="Optional title"/></p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_img2 is test do
		var test = """
![Alt text][id]

[id]: url/to/image  "Optional title attribute"
"""
		var exp = """<p><img src="url/to/image" alt="Alt text" title="Optional title attribute"/></p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_process_strike is test do
		var proc = new MarkdownProcessor
		proc.ext_mode = false
		var test = "This is how you ~~strike text~~"
		var exp = "<p>This is how you ~~strike text~~</p>\n"
		var res = proc.process(test).write_to_string
		assert exp == res
	end

	fun test_process_strike_ext is test do
		var test = "This is how you ~~strike text~~"
		var exp = "<p>This is how you <del>strike text</del></p>\n"
		var res = test.md_to_html.write_to_string
		assert exp == res
	end

	fun test_escape_bad_html is test do
			var test = "-1 if < , +1 if > and 0 otherwise"
			var exp = "<p>-1 if &lt; , +1 if > and 0 otherwise</p>\n"
		var res = test.md_to_html.write_to_string
		assert exp == res
	end

	fun test_daring_encoding is test do
		var test = """
AT&T has an ampersand in their name.

AT&amp;T is another way to write it.

This & that.

4 < 5.

6 > 5.

Here's a [link] [1] with an ampersand in the URL.

Here's a link with an amersand in the link text: [AT&T] [2].

Here's an inline [link](/script?foo=1&bar=2).

Here's an inline [link](</script?foo=1&bar=2>).


[1]: http://example.com/?foo=1&bar=2
[2]: http://att.com/  "AT&T"
"""

		var exp = """
<p>AT&amp;T has an ampersand in their name.</p>
<p>AT&amp;T is another way to write it.</p>
<p>This &amp; that.</p>
<p>4 &lt; 5.</p>
<p>6 > 5.</p>
<p>Here's a <a href="http://example.com/?foo=1&amp;bar=2">link</a> with an ampersand in the URL.</p>
<p>Here's a link with an amersand in the link text: <a href="http://att.com/" title="AT&amp;T">AT&amp;T</a>.</p>
<p>Here's an inline <a href="/script?foo=1&amp;bar=2">link</a>.</p>
<p>Here's an inline <a href="/script?foo=1&amp;bar=2">link</a>.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp

	end

	fun test_daring_autolinks is test do
		var test = """
Link: <http://example.com/>.

With an ampersand: <http://example.com/?foo=1&bar=2>

* In a list?
* <http://example.com/>
* It should.

> Blockquoted: <http://example.com/>

Auto-links should not occur here: `<http://example.com/>`

	or here: <http://example.com/>
"""

		var exp = """
<p>Link: <a href="http://example.com/">http://example.com/</a>.</p>
<p>With an ampersand: <a href="http://example.com/?foo=1&amp;bar=2">http://example.com/?foo=1&amp;bar=2</a></p>
<ul>
<li>In a list?</li>
<li><a href="http://example.com/">http://example.com/</a></li>
<li>It should.</li>
</ul>
<blockquote>
<p>Blockquoted: <a href="http://example.com/">http://example.com/</a></p>
</blockquote>
<p>Auto-links should not occur here: <code>&lt;http://example.com/&gt;</code></p>
<pre><code>or here: &lt;http://example.com/&gt;
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_escape is test do
		var test = """
These should all get escaped:

Backslash: \\

Backtick: \`

Asterisk: \*

Underscore: \_

Left brace: \{

Right brace: \}

Left bracket: \[

Right bracket: \]

Left paren: \(

Right paren: \)

Greater-than: \>

Hash: \#

Period: \.

Bang: \!

Plus: \+

Minus: \-


These should not, because they occur within a code block:

	Backslash: \\

	Backtick: \`

	Asterisk: \*

	Underscore: \_

	Left brace: \{

	Right brace: \}

	Left bracket: \[

	Right bracket: \]

	Left paren: \(

	Right paren: \)

	Greater-than: \>

	Hash: \#

	Period: \.

	Bang: \!

	Plus: \+

	Minus: \-

Nor should these, which occur in code spans:

Backslash: `\\`

Backtick: `` \` ``

Asterisk: `\*`

Underscore: `\_`

Left brace: `\{`

Right brace: `\}`

Left bracket: `\[`

Right bracket: `\]`

Left paren: `\(`

Right paren: `\)`

Greater-than: `\>`

Hash: `\#`

Period: `\.`

Bang: `\!`

Plus: `\+`

Minus: `\-`

These should get escaped, even though they're matching pairs for
other Markdown constructs:

\\\*asterisks\\\*

\\\_underscores\\\_

\\\`backticks\\\`

This is a code span with a literal backslash-backtick sequence: `` \` ``

This is a tag with unescaped backticks <span attr='`ticks`'>bar</span>.

This is a tag with backslashes <span attr='\\\\backslashes\\\\'>bar</span>.
"""
		var exp = """
<p>These should all get escaped:</p>
<p>Backslash: \\</p>
<p>Backtick: \`</p>
<p>Asterisk: \*</p>
<p>Underscore: \_</p>
<p>Left brace: \{</p>
<p>Right brace: \}</p>
<p>Left bracket: \[</p>
<p>Right bracket: \]</p>
<p>Left paren: \(</p>
<p>Right paren: \)</p>
<p>Greater-than: \></p>
<p>Hash: \#</p>
<p>Period: \.</p>
<p>Bang: \!</p>
<p>Plus: \+</p>
<p>Minus: \-</p>
<p>These should not, because they occur within a code block:</p>
<pre><code>Backslash: \\

Backtick: \`

Asterisk: \*

Underscore: \_

Left brace: \{

Right brace: \}

Left bracket: \[

Right bracket: \]

Left paren: \(

Right paren: \)

Greater-than: \&gt;

Hash: \#

Period: \.

Bang: \!

Plus: \+

Minus: \-
</code></pre>
<p>Nor should these, which occur in code spans:</p>
<p>Backslash: <code>\\</code></p>
<p>Backtick: <code>\`</code></p>
<p>Asterisk: <code>\*</code></p>
<p>Underscore: <code>\_</code></p>
<p>Left brace: <code>\{</code></p>
<p>Right brace: <code>\}</code></p>
<p>Left bracket: <code>\[</code></p>
<p>Right bracket: <code>\]</code></p>
<p>Left paren: <code>\(</code></p>
<p>Right paren: <code>\)</code></p>
<p>Greater-than: <code>\&gt;</code></p>
<p>Hash: <code>\#</code></p>
<p>Period: <code>\.</code></p>
<p>Bang: <code>\!</code></p>
<p>Plus: <code>\+</code></p>
<p>Minus: <code>\-</code></p>
<p>These should get escaped, even though they're matching pairs for
other Markdown constructs:</p>
<p>*asterisks*</p>
<p>_underscores_</p>
<p>`backticks`</p>
<p>This is a code span with a literal backslash-backtick sequence: <code>\`</code></p>
<p>This is a tag with unescaped backticks <span attr='`ticks`'>bar</span>.</p>
<p>This is a tag with backslashes <span attr='\\\\backslashes\\\\'>bar</span>.</p>
"""

		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_blockquotes is test do
		var test = """
> Example:
>
>     sub status {
>         print "working";
>     }
>
> Or:
>
>     sub status {
>         return "working";
>     }
"""

		var exp = """
<blockquote>
<p>Example:</p>
<pre><code>sub status {
    print "working";
}
</code></pre>
<p>Or:</p>
<pre><code>sub status {
    return "working";
}
</code></pre>
</blockquote>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_code_blocks is test do
		var test = """
	code block on the first line

Regular text.

    code block indented by spaces

Regular text.

	the lines in this block
	all contain trailing spaces

Regular Text.

	code block on the last line
"""

		var exp = """
<pre><code>code block on the first line
</code></pre>
<p>Regular text.</p>
<pre><code>code block indented by spaces
</code></pre>
<p>Regular text.</p>
<pre><code>the lines in this block
all contain trailing spaces
</code></pre>
<p>Regular Text.</p>
<pre><code>code block on the last line
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_code_spans is test do
		var test = """
`<test a="` content of attribute `">`

Fix for backticks within HTML tag: <span attr='`ticks`'>like this</span>

Here's how you put `` `backticks` `` in a code span.
"""

		var exp = """
<p><code>&lt;test a="</code> content of attribute <code>"&gt;</code></p>
<p>Fix for backticks within HTML tag: <span attr='`ticks`'>like this</span></p>
<p>Here's how you put <code>`backticks`</code> in a code span.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_pars is test do
		var proc = new MarkdownProcessor
		proc.ext_mode = false

		var test = """
In Markdown 1.0.0 and earlier. Version
8. This line turns into a list item.
Because a hard-wrapped line in the
middle of a paragraph looked like a
list item.

Here's one with a bullet.
* criminey.
"""

		var exp = """
<p>In Markdown 1.0.0 and earlier. Version
8. This line turns into a list item.
Because a hard-wrapped line in the
middle of a paragraph looked like a
list item.</p>
<p>Here's one with a bullet.
* criminey.</p>
"""
		var res = proc.process(test).write_to_string
		assert res == exp
	end

	fun test_daring_rules is test do
		var test = """
Dashes:

---

 ---

  ---

   ---

	---

- - -

 - - -

  - - -

   - - -

	- - -


Asterisks:

***

 ***

  ***

   ***

	***

* * *

 * * *

  * * *

   * * *

	* * *


Underscores:

___

 ___

  ___

   ___

    ___

_ _ _

 _ _ _

  _ _ _

   _ _ _

    _ _ _
"""

		var exp = """
<p>Dashes:</p>
<hr/>
<hr/>
<hr/>
<hr/>
<pre><code>---
</code></pre>
<hr/>
<hr/>
<hr/>
<hr/>
<pre><code>- - -
</code></pre>
<p>Asterisks:</p>
<hr/>
<hr/>
<hr/>
<hr/>
<pre><code>***
</code></pre>
<hr/>
<hr/>
<hr/>
<hr/>
<pre><code>* * *
</code></pre>
<p>Underscores:</p>
<hr/>
<hr/>
<hr/>
<hr/>
<pre><code>___
</code></pre>
<hr/>
<hr/>
<hr/>
<hr/>
<pre><code>_ _ _
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_images is test do
		var test = """
![Alt text](/path/to/img.jpg)

![Alt text](/path/to/img.jpg "Optional title")

Inline within a paragraph: [alt text](/url/).

![alt text](/url/  "title preceded by two spaces")

![alt text](/url/  "title has spaces afterward"  )

![alt text](</url/>)

![alt text](</url/> "with a title").

![Empty]()

![this is a stupid URL](http://example.com/(parens).jpg)


![alt text][foo]

  [foo]: /url/

![alt text][bar]

  [bar]: /url/ "Title here"
"""

		var exp = """
<p><img src="/path/to/img.jpg" alt="Alt text"/></p>
<p><img src="/path/to/img.jpg" alt="Alt text" title="Optional title"/></p>
<p>Inline within a paragraph: <a href="/url/">alt text</a>.</p>
<p><img src="/url/" alt="alt text" title="title preceded by two spaces"/></p>
<p><img src="/url/" alt="alt text" title="title has spaces afterward"/></p>
<p><img src="/url/" alt="alt text"/></p>
<p><img src="/url/" alt="alt text" title="with a title"/>.</p>
<p><img src="" alt="Empty"/></p>
<p><img src="http://example.com/(parens).jpg" alt="this is a stupid URL"/></p>
<p><img src="/url/" alt="alt text"/></p>
<p><img src="/url/" alt="alt text" title="Title here"/></p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_inline_html1 is test do
		var test = """
Here's a simple block:

<div>
	foo
</div>

This should be a code block, though:

	<div>
		foo
	</div>

As should this:

	<div>foo</div>

Now, nested:

<div>
	<div>
		<div>
			foo
		</div>
	</div>
</div>

This should just be an HTML comment:

<!-- Comment -->

Multiline:

<!--
Blah
Blah
-->

Code block:

	<!-- Comment -->

Just plain comment, with trailing spaces on the line:

<!-- foo -->

Code:

	<hr />

Hr's:

<hr>

<hr/>

<hr />

<hr>

<hr/>

<hr />

<hr class="foo" id="bar" />

<hr class="foo" id="bar"/>

<hr class="foo" id="bar" >
"""

		var exp = """
<p>Here's a simple block:</p>
<div>
    foo
</div>
<p>This should be a code block, though:</p>
<pre><code>&lt;div&gt;
    foo
&lt;/div&gt;
</code></pre>
<p>As should this:</p>
<pre><code>&lt;div&gt;foo&lt;/div&gt;
</code></pre>
<p>Now, nested:</p>
<div>
    <div>
        <div>
            foo
        </div>
    </div>
</div>
<p>This should just be an HTML comment:</p>
<!-- Comment -->
<p>Multiline:</p>
<!--
Blah
Blah
-->
<p>Code block:</p>
<pre><code>&lt;!-- Comment --&gt;
</code></pre>
<p>Just plain comment, with trailing spaces on the line:</p>
<!-- foo -->
<p>Code:</p>
<pre><code>&lt;hr /&gt;
</code></pre>
<p>Hr's:</p>
<hr>
<hr/>
<hr />
<hr>
<hr/>
<hr />
<hr class="foo" id="bar" />
<hr class="foo" id="bar"/>
<hr class="foo" id="bar" >
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_inline_html2 is test do
		var test = """
Simple block on one line:

<div>foo</div>

And nested without indentation:

<div>
<div>
<div>
foo
</div>
<div style=">"/>
</div>
<div>bar</div>
</div>

And with attributes:

<div>
	<div id="foo">
	</div>
</div>

This was broken in 1.0.2b7:

<div class="inlinepage">
<div class="toggleableend">
foo
</div>
</div>
"""

		var exp = """
<p>Simple block on one line:</p>
<div>foo</div>
<p>And nested without indentation:</p>
<div>
<div>
<div>
foo
</div>
<div style=">"/>
</div>
<div>bar</div>
</div>
<p>And with attributes:</p>
<div>
    <div id="foo">
    </div>
</div>
<p>This was broken in 1.0.2b7:</p>
<div class="inlinepage">
<div class="toggleableend">
foo
</div>
</div>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_inline_html3 is test do
		var test = """
Paragraph one.

<!-- This is a simple comment -->

<!--
	This is another comment.
-->

Paragraph two.

<!-- one comment block -- -- with two comments -->

The end.
"""

		var exp = """
<p>Paragraph one.</p>
<!-- This is a simple comment -->
<!--
    This is another comment.
-->
<p>Paragraph two.</p>
<!-- one comment block -- -- with two comments -->
<p>The end.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_links1 is test do
		var test = """
Just a [URL](/url/).

[URL and title](/url/ "title").

[URL and title](/url/  "title preceded by two spaces").

[URL and title](/url/	"title preceded by a tab").

[URL and title](/url/ "title has spaces afterward"  ).

[URL wrapped in angle brackets](</url/>).

[URL w/ angle brackets + title](</url/> "Here's the title").

[Empty]().

[With parens in the URL](http://en.wikipedia.org/wiki/WIMP_(computing))

(With outer parens and [parens in url](/foo(bar)))


[With parens in the URL](/foo(bar) "and a title")

(With outer parens and [parens in url](/foo(bar) "and a title"))
"""

		var exp = """
<p>Just a <a href="/url/">URL</a>.</p>
<p><a href="/url/" title="title">URL and title</a>.</p>
<p><a href="/url/" title="title preceded by two spaces">URL and title</a>.</p>
<p><a href="/url/" title="title preceded by a tab">URL and title</a>.</p>
<p><a href="/url/" title="title has spaces afterward">URL and title</a>.</p>
<p><a href="/url/">URL wrapped in angle brackets</a>.</p>
<p><a href="/url/" title="Here&apos;s the title">URL w/ angle brackets + title</a>.</p>
<p><a href="">Empty</a>.</p>
<p><a href="http://en.wikipedia.org/wiki/WIMP_(computing)">With parens in the URL</a></p>
<p>(With outer parens and <a href="/foo(bar)">parens in url</a>)</p>
<p><a href="/foo(bar)" title="and a title">With parens in the URL</a></p>
<p>(With outer parens and <a href="/foo(bar)" title="and a title">parens in url</a>)</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_links2 is test do
		var test = """
Foo [bar] [1].

Foo [bar][1].

Foo [bar]
[1].

[1]: /url/  "Title"


With [embedded [brackets]] [b].


Indented [once][].

Indented [twice][].

Indented [thrice][].

Indented [four][] times.

 [once]: /url

  [twice]: /url

   [thrice]: /url

    [four]: /url


[b]: /url/

* * *

[this] [this] should work

So should [this][this].

And [this] [].

And [this][].

And [this].

But not [that] [].

Nor [that][].

Nor [that].

[Something in brackets like [this][] should work]

[Same with [this].]

In this case, [this](/somethingelse/) points to something else.

Backslashing should suppress \\\[this] and [this\\\].

[this]: foo


* * *

Here's one where the [link
breaks] across lines.

Here's another where the [link
breaks] across lines, but with a line-ending space.


[link breaks]: /url/
"""

		var exp = """
<p>Foo <a href="/url/" title="Title">bar</a>.</p>
<p>Foo <a href="/url/" title="Title">bar</a>.</p>
<p>Foo <a href="/url/" title="Title">bar</a>.</p>
<p>With <a href="/url/">embedded [brackets]</a>.</p>
<p>Indented <a href="/url">once</a>.</p>
<p>Indented <a href="/url">twice</a>.</p>
<p>Indented <a href="/url">thrice</a>.</p>
<p>Indented [four][] times.</p>
<pre><code>[four]: /url
</code></pre>
<hr/>
<p><a href="foo">this</a> should work</p>
<p>So should <a href="foo">this</a>.</p>
<p>And <a href="foo">this</a>.</p>
<p>And <a href="foo">this</a>.</p>
<p>And <a href="foo">this</a>.</p>
<p>But not [that] [].</p>
<p>Nor [that][].</p>
<p>Nor [that].</p>
<p>[Something in brackets like <a href="foo">this</a> should work]</p>
<p>[Same with <a href="foo">this</a>.]</p>
<p>In this case, <a href="/somethingelse/">this</a> points to something else.</p>
<p>Backslashing should suppress [this] and [this].</p>
<hr/>
<p>Here's one where the <a href="/url/">link
breaks</a> across lines.</p>
<p>Here's another where the <a href="/url/">link
breaks</a> across lines, but with a line-ending space.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_links3 is test do
		var test = """
This is the [simple case].

[simple case]: /simple



This one has a [line
break].

This one has a [line
break] with a line-ending space.

[line break]: /foo


[this] [that] and the [other]

[this]: /this
[that]: /that
[other]: /other
"""

		var exp = """
<p>This is the <a href="/simple">simple case</a>.</p>
<p>This one has a <a href="/foo">line
break</a>.</p>
<p>This one has a <a href="/foo">line
break</a> with a line-ending space.</p>
<p><a href="/that">this</a> and the <a href="/other">other</a></p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_nested is test do
		var test = """
> foo
>
> > bar
>
> foo
"""

		var exp = """
<blockquote>
<p>foo</p>
<blockquote>
<p>bar</p>
</blockquote>
<p>foo</p>
</blockquote>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_list is test do
		var test = """
## Unordered

Asterisks tight:

*	asterisk 1
*	asterisk 2
*	asterisk 3


Asterisks loose:

*	asterisk 1

*	asterisk 2

*	asterisk 3

* * *

Pluses tight:

+	Plus 1
+	Plus 2
+	Plus 3


Pluses loose:

+	Plus 1

+	Plus 2

+	Plus 3

* * *


Minuses tight:

-	Minus 1
-	Minus 2
-	Minus 3


Minuses loose:

-	Minus 1

-	Minus 2

-	Minus 3


## Ordered

Tight:

1.	First
2.	Second
3.	Third

and:

1. One
2. Two
3. Three


Loose using tabs:

1.	First

2.	Second

3.	Third

and using spaces:

1. One

2. Two

3. Three

Multiple paragraphs:

1.	Item 1, graf one.

	Item 2. graf two. The quick brown fox jumped over the lazy dog's
	back.

2.	Item 2.

3.	Item 3.



## Nested

*	Tab
	*	Tab
		*	Tab

Here's another:

1. First
2. Second:
	* Fee
	* Fie
	* Foe
3. Third

Same thing but with paragraphs:

1. First

2. Second:
	* Fee
	* Fie
	* Foe

3. Third
"""

		var exp = """
<h2 id="Unordered">Unordered</h2>
<p>Asterisks tight:</p>
<ul>
<li>asterisk 1</li>
<li>asterisk 2</li>
<li>asterisk 3</li>
</ul>
<p>Asterisks loose:</p>
<ul>
<li><p>asterisk 1</p>
</li>
<li><p>asterisk 2</p>
</li>
<li><p>asterisk 3</p>
</li>
</ul>
<hr/>
<p>Pluses tight:</p>
<ul>
<li>Plus 1</li>
<li>Plus 2</li>
<li>Plus 3</li>
</ul>
<p>Pluses loose:</p>
<ul>
<li><p>Plus 1</p>
</li>
<li><p>Plus 2</p>
</li>
<li><p>Plus 3</p>
</li>
</ul>
<hr/>
<p>Minuses tight:</p>
<ul>
<li>Minus 1</li>
<li>Minus 2</li>
<li>Minus 3</li>
</ul>
<p>Minuses loose:</p>
<ul>
<li><p>Minus 1</p>
</li>
<li><p>Minus 2</p>
</li>
<li><p>Minus 3</p>
</li>
</ul>
<h2 id="Ordered">Ordered</h2>
<p>Tight:</p>
<ol>
<li>First</li>
<li>Second</li>
<li>Third</li>
</ol>
<p>and:</p>
<ol>
<li>One</li>
<li>Two</li>
<li>Three</li>
</ol>
<p>Loose using tabs:</p>
<ol>
<li><p>First</p>
</li>
<li><p>Second</p>
</li>
<li><p>Third</p>
</li>
</ol>
<p>and using spaces:</p>
<ol>
<li><p>One</p>
</li>
<li><p>Two</p>
</li>
<li><p>Three</p>
</li>
</ol>
<p>Multiple paragraphs:</p>
<ol>
<li><p>Item 1, graf one.</p>
<p>Item 2. graf two. The quick brown fox jumped over the lazy dog's
back.</p>
</li>
<li><p>Item 2.</p>
</li>
<li><p>Item 3.</p>
</li>
</ol>
<h2 id="Nested">Nested</h2>
<ul>
<li>Tab<ul>
<li>Tab<ul>
<li>Tab</li>
</ul>
</li>
</ul>
</li>
</ul>
<p>Here's another:</p>
<ol>
<li>First</li>
<li>Second:<ul>
<li>Fee</li>
<li>Fie</li>
<li>Foe</li>
</ul>
</li>
<li>Third</li>
</ol>
<p>Same thing but with paragraphs:</p>
<ol>
<li><p>First</p>
</li>
<li><p>Second:</p>
<ul>
<li>Fee</li>
<li>Fie</li>
<li>Foe</li>
</ul>
</li>
<li><p>Third</p>
</li>
</ol>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_strong_em is test do
		var test = """
***This is strong and em.***

So is ***this*** word.

___This is strong and em.___

So is ___this___ word.
"""

		var exp = """
<p><strong><em>This is strong and em.</em></strong></p>
<p>So is <strong><em>this</em></strong> word.</p>
<p><strong><em>This is strong and em.</em></strong></p>
<p>So is <strong><em>this</em></strong> word.</p>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_tabs is test do
		var test = """
+	this is a list item
	indented with tabs

+   this is a list item
    indented with spaces

Code:

	this code block is indented by one tab

And:

		this code block is indented by two tabs

And:

	+	this is an example list item
		indented with tabs

	+   this is an example list item
	    indented with spaces
"""

		var exp = """
<ul>
<li><p>this is a list item
indented with tabs</p>
</li>
<li><p>this is a list item
indented with spaces</p>
</li>
</ul>
<p>Code:</p>
<pre><code>this code block is indented by one tab
</code></pre>
<p>And:</p>
<pre><code>    this code block is indented by two tabs
</code></pre>
<p>And:</p>
<pre><code>+   this is an example list item
    indented with tabs

+   this is an example list item
    indented with spaces
</code></pre>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end

	fun test_daring_tidyness is test do
		var test = """
> A list within a blockquote:
>
> *	asterisk 1
> *	asterisk 2
> *	asterisk 3
"""

	var exp = """
<blockquote>
<p>A list within a blockquote:</p>
<ul>
<li>asterisk 1</li>
<li>asterisk 2</li>
<li>asterisk 3</li>
</ul>
</blockquote>
"""
		var res = test.md_to_html.write_to_string
		assert res == exp
	end


end

class TestBlock
	test

	# A dummy location for testing purposes.
	var loc = new MDLocation(0, 0, 0, 0)

	fun test_has_blocks is test do
		var subject = new MDBlock(loc)
		assert not subject.has_blocks
		subject.first_block = new MDBlock(loc)
		assert subject.has_blocks
	end

	fun test_count_blocks is test do
		var subject = new MDBlock(loc)
		assert subject.count_blocks == 0
		subject.first_block = new MDBlock(loc)
		assert subject.count_blocks == 1
		subject.first_block.next = new MDBlock(loc)
		assert subject.count_blocks == 2
	end

	fun test_has_lines is test do
		var subject = new MDBlock(loc)
		assert not subject.has_lines
		subject.first_line = new MDLine(loc, "")
		assert subject.has_lines
	end

	fun test_count_lines is test do
		var subject = new MDBlock(loc)
		assert subject.count_lines == 0
		subject.first_line = new MDLine(loc, "")
		assert subject.count_lines == 1
		subject.first_line.next = new MDLine(loc, "")
		assert subject.count_lines == 2
	end

	fun test_split is test do
		var line1 = new MDLine(loc, "line1")
		var line2 = new MDLine(loc, "line2")
		var line3 = new MDLine(loc, "line3")
		var subject = new MDBlock(loc)
		subject.add_line line1
		subject.add_line line2
		subject.add_line line3
		var block = subject.split(line2)
		assert subject.count_blocks == 1
		assert subject.count_lines == 1
		assert subject.first_line == line3
		assert block.count_blocks == 0
		assert block.count_lines == 2
		assert block.first_line == line1
		assert block.last_line == line2
	end

	fun test_add_line is test do
		var subject = new MDBlock(loc)
		assert subject.count_lines == 0
		subject.add_line new MDLine(loc, "")
		assert subject.count_lines == 1
		subject.add_line new MDLine(loc, "")
		assert subject.count_lines == 2
	end

	fun test_remove_line is test do
		var line1 = new MDLine(loc, "line1")
		var line2 = new MDLine(loc, "line2")
		var line3 = new MDLine(loc, "line3")
		var subject = new MDBlock(loc)
		subject.add_line line1
		subject.add_line line2
		subject.add_line line3
		subject.remove_line(line2)
		assert subject.count_lines == 2
		subject.remove_line(line1)
		assert subject.count_lines == 1
		assert subject.first_line == line3
		assert subject.last_line == line3
	end

	fun test_transform_headline1 is test do
		var subject = new MDBlock(loc)
		var kind = new BlockHeadline(subject)
		subject.add_line new MDLine(loc, " #   Title 1   ")
		kind.transform_headline(subject)
		assert kind.depth == 1
		assert subject.first_line.value == "Title 1"
	end

	fun test_transform_headline2 is test do
		var subject = new MDBlock(loc)
		var kind = new BlockHeadline(subject)
		subject.add_line new MDLine(loc, " #####Title 5   ")
		kind.transform_headline(subject)
		assert kind.depth == 5
		assert subject.first_line.value == "Title 5"
	end

	fun test_remove_quote_prefix is test do
		var subject = new MDBlock(loc)
		var kind = new BlockQuote(subject)
		subject.add_line new MDLine(loc, " > line 1")
		subject.add_line new MDLine(loc, " > line 2")
		subject.add_line new MDLine(loc, " > line 3")
		kind.remove_block_quote_prefix(subject)
		assert subject.first_line.value == "line 1"
		assert subject.first_line.next.value == "line 2"
		assert subject.first_line.next.next.value == "line 3"
	end

	fun test_remove_leading_empty_lines_1 is test do
		var block = new MDBlock(loc)
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "   text")
		block.add_line new MDLine(loc, "")
		assert block.remove_leading_empty_lines
		assert block.first_line.value == "   text"
	end

	fun test_remove_leading_empty_lines_2 is test do
		var block = new MDBlock(loc)
		block.add_line new MDLine(loc, "   text")
		block.remove_leading_empty_lines
		assert block.first_line.value == "   text"
	end

	fun test_remove_trailing_empty_lines_1 is test do
		var block = new MDBlock(loc)
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "text")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		assert block.remove_trailing_empty_lines
		assert block.last_line.value == "text"
	end

	fun test_remove_trailing_empty_lines_2 is test do
		var block = new MDBlock(loc)
		block.add_line new MDLine(loc, "text  ")
		assert not block.remove_trailing_empty_lines
		assert block.last_line.value == "text  "
	end

	fun test_remove_surrounding_empty_lines is test do
		var block = new MDBlock(loc)
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "text")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		block.add_line new MDLine(loc, "")
		assert block.remove_surrounding_empty_lines
		assert block.first_line.value == "text"
		assert block.last_line.value == "text"
	end
end

class TestLine
	test

	# A dummy location for testing purposes.
	var loc = new MDLocation(0, 0, 0, 0)

	var subject: MDLine

	fun test_is_empty is test do
		subject = new MDLine(loc, "")
		assert subject.is_empty
		subject = new MDLine(loc, "    ")
		assert subject.is_empty
		subject = new MDLine(loc, "test")
		assert not subject.is_empty
		subject = new MDLine(loc, "    test")
		assert not subject.is_empty
	end

	fun test_leading is test do
		subject = new MDLine(loc, "")
		assert subject.leading == 0
		subject = new MDLine(loc, "    ")
		assert subject.leading == 4
		subject = new MDLine(loc, "test")
		assert subject.leading == 0
		subject = new MDLine(loc, "    test")
		assert subject.leading == 4
	end

	fun test_trailing is test do
		subject = new MDLine(loc, "")
		assert subject.trailing == 0
		subject = new MDLine(loc, "    ")
		assert subject.trailing == 0
		subject = new MDLine(loc, "test   ")
		assert subject.trailing == 3
		subject = new MDLine(loc, "    test ")
		assert subject.trailing == 1
	end

	fun test_line_type is test do
		var v = new MarkdownProcessor
		subject = new MDLine(loc, "")
		assert v.line_kind(subject) isa LineEmpty
		subject = new MDLine(loc, "    ")
		assert v.line_kind(subject) isa LineEmpty
		subject = new MDLine(loc, "text   ")
		assert v.line_kind(subject) isa LineOther
		subject = new MDLine(loc, "  # Title")
		assert v.line_kind(subject) isa LineHeadline
		subject = new MDLine(loc, "  ### Title")
		assert v.line_kind(subject) isa LineHeadline
		subject = new MDLine(loc, "    code")
		assert v.line_kind(subject) isa LineCode
		subject = new MDLine(loc, "   Title  ")
		subject.next = new MDLine(loc, "== ")
		assert v.line_kind(subject) isa LineHeadline1
		subject = new MDLine(loc, "   Title  ")
		subject.next = new MDLine(loc, "-- ")
		assert v.line_kind(subject) isa LineHeadline2
		subject = new MDLine(loc, "  *    *   * ")
		assert v.line_kind(subject) isa LineHR
		subject = new MDLine(loc, "  *** ")
		assert v.line_kind(subject) isa LineHR
		subject = new MDLine(loc, "- -- ")
		assert v.line_kind(subject) isa LineHR
		subject = new MDLine(loc, "--------- ")
		assert v.line_kind(subject) isa LineHR
		subject = new MDLine(loc, " >")
		assert v.line_kind(subject) isa LineBlockquote
		subject = new MDLine(loc, "<p></p>")
		assert v.line_kind(subject) isa LineXML
		subject = new MDLine(loc, "<p>")
		assert v.line_kind(subject) isa LineOther
		subject = new MDLine(loc, "  * foo")
		assert v.line_kind(subject) isa LineUList
		subject = new MDLine(loc, "- foo")
		assert v.line_kind(subject) isa LineUList
		subject = new MDLine(loc, "+ foo")
		assert v.line_kind(subject) isa LineUList
		subject = new MDLine(loc, "1. foo")
		assert v.line_kind(subject) isa LineOList
		subject = new MDLine(loc, "   11111. foo")
		assert v.line_kind(subject) isa LineOList
	end

	fun test_line_type_ext is test do
		var v = new MarkdownProcessor
		subject = new MDLine(loc, "  ~~~")
		assert v.line_kind(subject) isa LineFence
		subject = new MDLine(loc, "  ```")
		assert v.line_kind(subject) isa LineFence
		subject = new MDLine(loc, "~~~raw")
		assert v.line_kind(subject) isa LineFence
	end

	fun test_count_chars is test do
		subject = new MDLine(loc, "")
		assert subject.count_chars('*') == 0
		subject = new MDLine(loc, "* ")
		assert subject.count_chars('*') == 1
		subject = new MDLine(loc, " * text")
		assert subject.count_chars('*') == 0
		subject = new MDLine(loc, " *    *    *")
		assert subject.count_chars('*') == 3
		subject = new MDLine(loc, "text ** ")
		assert subject.count_chars('*') == 0
	end

	fun test_count_chars_start is test do
		subject = new MDLine(loc, "")
		assert subject.count_chars_start('*') == 0
		subject = new MDLine(loc, "* ")
		assert subject.count_chars_start('*') == 1
		subject = new MDLine(loc, " * text")
		assert subject.count_chars_start('*') == 1
		subject = new MDLine(loc, " *    *    * text")
		assert subject.count_chars_start('*') == 3
		subject = new MDLine(loc, "text ** ")
		assert subject.count_chars_start('*') == 0
	end
end

class TestHTMLDecorator
	test

	fun test_headlines is test do
		var test = """
# **a**
## a.a
### a.a.b
### a.a.b
## a.b
# [b](test)
## b.a
### b.a.c
## b.b
## b.c
# c
"""
		var proc = new MarkdownProcessor
		var decorator = proc.decorator.as(HTMLDecorator)
		proc.process(test)
		var res = ""
		for id, headline in decorator.headlines do
			res += "{headline.title}:{id}\n"
		end
		var exp = """
**a**:a
a.a:a.a
a.a.b:a.a.b
a.a.b:a.a.b_1
a.b:a.b
[b](test):btest
b.a:b.a
b.a.c:b.a.c
b.b:b.b
b.c:b.c
c:c
"""
		assert res == exp
	end
end

class TestTokenLocation
	test

	fun test_token_location1 is test do
		var string = "**Hello** `World`"
		var stack =  [
			"TokenStrongStar at 1,1--1,1",
			"TokenStrongStar at 1,8--1,8",
			"TokenCodeSingle at 1,11--1,11",
			"TokenCodeSingle at 1,17--1,17"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location2 is test do
		var string = "**Hello**\n`World`\n*Bonjour*\n[le monde]()"
		var stack =  [
			"TokenStrongStar at 1,1--1,1",
			"TokenStrongStar at 1,8--1,8",
			"TokenCodeSingle at 2,1--2,1",
			"TokenCodeSingle at 2,7--2,7",
			"TokenEmStar at 3,1--3,1",
			"TokenEmStar at 3,9--3,9",
			"TokenLink at 4,1--4,1"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location3 is test do
		var string = """**Hello**
		`World`
		*Bonjour*
		[le monde]()"""
		var stack =  [
			"TokenStrongStar at 1,1--1,1",
			"TokenStrongStar at 1,8--1,8",
			"TokenCodeSingle at 2,1--2,1",
			"TokenCodeSingle at 2,7--2,7",
			"TokenEmStar at 3,1--3,1",
			"TokenEmStar at 3,9--3,9",
			"TokenLink at 4,1--4,1"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location4 is test do
		var string = "**Hello**\n\n`World`"
		var stack =  [
			"TokenStrongStar at 1,1--1,1",
			"TokenStrongStar at 1,8--1,8",
			"TokenCodeSingle at 3,1--3,1",
			"TokenCodeSingle at 3,7--3,7"]
		(new TestTokenProcessor(stack)).process(string)
	end

	fun test_token_location5 is test do
		var string = "# *Title1*\n\n# *Title2*"
		var stack =  [
			"TokenEmStar at 1,3--1,3",
			"TokenEmStar at 1,10--1,10",
			"TokenEmStar at 3,3--3,3",
			"TokenEmStar at 3,10--3,10"]
		(new TestTokenProcessor(stack)).process(string)
	end
end

class TestTokenProcessor
	super MarkdownProcessor

	var test_stack: Array[String]

	redef fun token_at(input, pos) do
		var token = super
		if token isa TokenNone then return token
		var res = "{token.class_name} at {token.location or else "?"}"
		var exp = test_stack.shift
		print ""
		print "EXP {exp}"
		print "RES {res}"
		assert exp == res
		return token
	end
end

class TestBlockLocation
	test

	var proc = new MarkdownProcessor

	fun test_block_location1 is test do
		var stack = [
			"BlockHeadline: 1,1--1,8",
			"BlockListItem: 2,1--2,6",
			"BlockListItem: 3,1--3,5"
		]
		var string =
		"# Title\n* li1\n* li2"
		proc.decorator = new TestBlockDecorator(stack)
		proc.process(string)
	end

	fun test_block_location2 is test do
		var stack = [
			"BlockHeadline: 1,1--1,11",
			"BlockFence: 3,1--5,4",
			"BlockListItem: 7,1--7,7",
			"BlockListItem: 8,1--8,6"]
		var string ="""#### Title

~~~fence
some code
~~~

1. li1
1. li2"""
		proc.decorator = new TestBlockDecorator(stack)
		proc.process(string)
	end

	fun test_block_location3 is test do
		var stack = [
			"BlockHeadline: 1,1--1,8",
			"BlockHeadline: 3,1--3,10"]
		var string ="""# Title\n\n## Title 2"""
		proc.decorator = new TestBlockDecorator(stack)
		proc.process(string)
	end
end

class TestBlockDecorator
	super HTMLDecorator

	var stack: Array[String]

	redef fun add_headline(v, block) do
		super
		check_res(block)
	end

	redef fun add_listitem(v, block) do
		super
		check_res(block)
	end

	redef fun add_blockquote(v, block) do
		super
		check_res(block)
	end

	redef fun add_code(v, block) do
		super
		check_res(block)
	end

	fun check_res(block: Block) do
		var res = "{block.class_name}: {block.block.location}"
		var exp = stack.shift
		assert res == exp
	end
end
