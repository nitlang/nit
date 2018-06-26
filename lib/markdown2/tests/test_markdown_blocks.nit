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
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either htmlress or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Test for markdown blocks parsing
module test_markdown_blocks is test

import test_markdown

class TestMarkdownBlocks
	super TestMarkdownHtml
	test

	fun test_blocks_empty is test do
		var md = ""
		var html = ""
		assert md_to_html(md) == html
	end

	fun test_blocks_tabs is test do
		var md = """\tsome code\n"""
		var html = """<pre><code>some code\n</code></pre>\n"""
		assert md_to_html(md) == html
	end

	fun test_blocks_pagraph1 is test do
		var md = "test\n"
		var html = "<p>test</p>\n"
		assert md_to_html(md) == html
	end

	fun test_blocks_pagraph2 is test do
		var md = """line1\nline2\n\nline3 line4\n\nline5\n"""
		var html = """<p>line1\nline2</p>\n<p>line3 line4</p>\n<p>line5</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_blocks_pagraph3 is test do
		var md = """
Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.

Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.
"""
		var html = """
<p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.</p>
<p>Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_headings_1 is test do
		var md = """
This is a H1
=============

This is a H2
-------------
"""
		var html = """
<h1>This is a H1</h1>
<h2>This is a H2</h2>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_headings_2 is test do
		var md = """
# This is a H1

## This is a H2
###### This is a H6
"""
		var html = """
<h1>This is a H1</h1>
<h2>This is a H2</h2>
<h6>This is a H6</h6>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_headings_3 is test do
		var md = """
# This is a H1 #

## This is a H2 ##

### This is a H3 ######
"""
		var html = """
<h1>This is a H1</h1>
<h2>This is a H2</h2>
<h3>This is a H3</h3>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_hr1 is test do
		var md = """
* * *

***

*****

- - -

---------------------------------------
"""
		var html = "<hr />\n<hr />\n<hr />\n<hr />\n<hr />\n"
		assert md_to_html(md) == html
	end

	fun test_blocks_bquote1 is test do
		var md = """
> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
> consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
> Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.
>
> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
> id sem consectetuer libero luctus adipiscing.
"""
		var html = """<blockquote>
<p>This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.</p>
<p>Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.</p>
</blockquote>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_bquote2 is test do
		var md = """
> This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.

> Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.
"""
		var html = """<blockquote>
<p>This is a blockquote with two paragraphs. Lorem ipsum dolor sit amet,
consectetuer adipiscing elit. Aliquam hendrerit mi posuere lectus.
Vestibulum enim wisi, viverra nec, fringilla in, laoreet vitae, risus.</p>
</blockquote>
<blockquote>
<p>Donec sit amet nisl. Aliquam semper ipsum sit amet velit. Suspendisse
id sem consectetuer libero luctus adipiscing.</p>
</blockquote>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_bquote3 is test do
		var md = """
> This is the first level of quoting.
>
> > This is nested blockquote.
>
> Back to the first level.
"""
		var html = """<blockquote>
<p>This is the first level of quoting.</p>
<blockquote>
<p>This is nested blockquote.</p>
</blockquote>
<p>Back to the first level.</p>
</blockquote>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list1 is test do
		var md = """
*   Red
*   Green
*   Blue
"""
		var html = """<ul>
<li>Red</li>
<li>Green</li>
<li>Blue</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list2 is test do
		var md = """
+   Red
+   Green
+   Blue
"""
		var html = """<ul>
<li>Red</li>
<li>Green</li>
<li>Blue</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list3 is test do
		var md = """
-   Red
-   Green
-   Blue
"""
		var html = """<ul>
<li>Red</li>
<li>Green</li>
<li>Blue</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list4 is test do
		var md = """
1.  Bird
2.  McHale
3.  Parish
"""
		var html = """<ol>
<li>Bird</li>
<li>McHale</li>
<li>Parish</li>
</ol>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list5 is test do
		var md = """
3. Bird
1. McHale
8. Parish
"""
		var html = """<ol start=\"3\">
<li>Bird</li>
<li>McHale</li>
<li>Parish</li>
</ol>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list6 is test do
		var md = """
*   Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
    Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
    viverra nec, fringilla in, laoreet vitae, risus.
*   Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
    Suspendisse id sem consectetuer libero luctus adipiscing.
"""
		var html = """
<ul>
<li>Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
viverra nec, fringilla in, laoreet vitae, risus.</li>
<li>Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
Suspendisse id sem consectetuer libero luctus adipiscing.</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list7 is test do
		var md = """
*   Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
viverra nec, fringilla in, laoreet vitae, risus.
*   Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
Suspendisse id sem consectetuer libero luctus adipiscing.
"""
		var html = """
<ul>
<li>Lorem ipsum dolor sit amet, consectetuer adipiscing elit.
Aliquam hendrerit mi posuere lectus. Vestibulum enim wisi,
viverra nec, fringilla in, laoreet vitae, risus.</li>
<li>Donec sit amet nisl. Aliquam semper ipsum sit amet velit.
Suspendisse id sem consectetuer libero luctus adipiscing.</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list8 is test do
		var md = """
*   Bird

*   Magic
"""
		var html = """
<ul>
<li>
<p>Bird</p>
</li>
<li>
<p>Magic</p>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list9 is test do
		var md = """
1.  This is a list item with two paragraphs. Lorem ipsum dolor
    sit amet, consectetuer adipiscing elit. Aliquam hendrerit
    mi posuere lectus.

    Vestibulum enim wisi, viverra nec, fringilla in, laoreet
    vitae, risus. Donec sit amet nisl. Aliquam semper ipsum
    sit amet velit.

2.  Suspendisse id sem consectetuer libero luctus adipiscing.
"""
		var html = """
<ol>
<li>
<p>This is a list item with two paragraphs. Lorem ipsum dolor
sit amet, consectetuer adipiscing elit. Aliquam hendrerit
mi posuere lectus.</p>
<p>Vestibulum enim wisi, viverra nec, fringilla in, laoreet
vitae, risus. Donec sit amet nisl. Aliquam semper ipsum
sit amet velit.</p>
</li>
<li>
<p>Suspendisse id sem consectetuer libero luctus adipiscing.</p>
</li>
</ol>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list10 is test do
		var md = """
*   This is a list item with two paragraphs.

    This is the second paragraph in the list item. You're
only required to indent the first line. Lorem ipsum dolor
sit amet, consectetuer adipiscing elit.

*   Another item in the same list.
"""
		var html = """
<ul>
<li>
<p>This is a list item with two paragraphs.</p>
<p>This is the second paragraph in the list item. You're
only required to indent the first line. Lorem ipsum dolor
sit amet, consectetuer adipiscing elit.</p>
</li>
<li>
<p>Another item in the same list.</p>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_list_ext is test do
		var md = """
This is a paragraph
* and this is a list
"""
		var html = """
<p>This is a paragraph</p>
<ul>
<li>and this is a list</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_indented_code1 is test do
		var md = """
This is a normal paragraph:

    This is a code block.
"""
		var html = """<p>This is a normal paragraph:</p>
<pre><code>This is a code block.
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_indented_code2 is test do
		var md = """
Here is an example of AppleScript:

    tell application "Foo"
        beep
    end tell

    <div class="footer">
        &copy; 2004 Foo Corporation
    </div>
"""
		var html = """
<p>Here is an example of AppleScript:</p>
<pre><code>tell application &quot;Foo&quot;
    beep
end tell

&lt;div class=&quot;footer&quot;&gt;
    &amp;copy; 2004 Foo Corporation
&lt;/div&gt;
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_indented_code3 is test do
		var md = """
Here is an example of AppleScript:

    beep
"""
		var html = """
<p>Here is an example of AppleScript:</p>
<pre><code>beep
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_fenced_code1 is test do
		var md = """
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
		var html = """
<p>Here is an example of AppleScript:</p>
<pre><code>tell application &quot;Foo&quot;
    beep
end tell

&lt;div class=&quot;footer&quot;&gt;
    &amp;copy; 2004 Foo Corporation
&lt;/div&gt;
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_fenced_code2 is test do
		var md = """
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
		var html = """
<p>Here is an example of AppleScript:</p>
<pre><code>tell application &quot;Foo&quot;
    beep
end tell

&lt;div class=&quot;footer&quot;&gt;
    &amp;copy; 2004 Foo Corporation
&lt;/div&gt;
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_fenced_code3 is test do
		var md = """
```nit
print "Hello World!"
```
"""
		var html = """
<pre><code class="language-nit">print &quot;Hello World!&quot;
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_fenced_code4 is test do
		var md = """
~~~
print "Hello"
~~~
~~~
print "World"
~~~
"""
		var html = """
<pre><code>print &quot;Hello&quot;
</code></pre>
<pre><code>print &quot;World&quot;
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_fenced_code5 is test do
		var md = """
~~~
print "Hello"
~~~
~~~
print "World"
~~~
"""
		var html = """
<pre><code>print &quot;Hello&quot;
</code></pre>
<pre><code>print &quot;World&quot;
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_nesting1 is test do
		var md = """
> ## This is a header.
>
> 1.   This is the first list item.
> 2.   This is the second list item.
>
> Here's some example code:
>
>     return shell_exec("echo $input | $markdown_script");
"""
		var html = """
<blockquote>
<h2>This is a header.</h2>
<ol>
<li>This is the first list item.</li>
<li>This is the second list item.</li>
</ol>
<p>Here's some example code:</p>
<pre><code>return shell_exec(&quot;echo $input | $markdown_script&quot;);
</code></pre>
</blockquote>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_nesting2 is test do
		var md = """
*   A list item with a blockquote:

    > This is a blockquote
    > inside a list item.
"""
		var html = """
<ul>
<li>
<p>A list item with a blockquote:</p>
<blockquote>
<p>This is a blockquote
inside a list item.</p>
</blockquote>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_nesting3 is test do
		var md = """
*   A list item with a code block:

        <code goes here>
"""
		var html = """
<ul>
<li>
<p>A list item with a code block:</p>
<pre><code>&lt;code goes here&gt;
</code></pre>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_nesting4 is test do
		var md = """
*	Tab
	*	Tab
		*	Tab
"""
		var html = """
<ul>
<li>Tab
<ul>
<li>Tab
<ul>
<li>Tab</li>
</ul>
</li>
</ul>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	fun test_blocks_nesting5 is test do
			var md = """
*	this

	*	sub

		that
"""
			var html = """
<ul>
<li>
<p>this</p>
<ul>
<li>
<p>sub</p>
<p>that</p>
</li>
</ul>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end
end
