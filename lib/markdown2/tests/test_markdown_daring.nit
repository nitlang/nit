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

# Markdown tests from DaringFireball
#
# See <https://daringfireball.net/projects/markdown/>.
module test_markdown_daring is test

import test_markdown

class TestMarkdownDaring
	super TestMarkdownHtml
	test

	fun test_daring_encoding is test do
		var md = """
AT&T has an ampersand in their name.

AT&amp;T is another way to write it.

This & that.

4 < 5.

6 > 5.

Here's a [link][1] with an ampersand in the URL.

Here's a link with an ampersand in the link text: [AT&T][2].

Here's an inline [link](/script?foo=1&bar=2).

Here's an inline [link](</script?foo=1&bar=2>).


[1]: http://example.com/?foo=1&bar=2
[2]: http://att.com/  "AT&T"
"""

		var html = """
<p>AT&amp;T has an ampersand in their name.</p>
<p>AT&amp;T is another way to write it.</p>
<p>This &amp; that.</p>
<p>4 &lt; 5.</p>
<p>6 &gt; 5.</p>
<p>Here's a <a href="http://example.com/?foo=1&amp;bar=2">link</a> with an ampersand in the URL.</p>
<p>Here's a link with an ampersand in the link text: <a href="http://att.com/" title="AT&amp;T">AT&amp;T</a>.</p>
<p>Here's an inline <a href="/script?foo=1&amp;bar=2">link</a>.</p>
<p>Here's an inline <a href="/script?foo=1&amp;bar=2">link</a>.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_autolinks is test do
		var md = """
Link: <http://example.com/>.

With an ampersand: <http://example.com/?foo=1&bar=2>

* In a list?
* <http://example.com/>
* It should.

> Blockquoted: <http://example.com/>

Auto-links should not occur here: `<http://example.com/>`

	or here: <http://example.com/>
"""

		var html = """
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
		assert md_to_html(md) == html
	end

	fun test_daring_escape is test do
		var md = """
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
		var html = """
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
<p>Greater-than: &gt;</p>
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

		assert md_to_html(md) == html
	end

	fun test_daring_blockquotes is test do
		var md = """
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

		var html = """
<blockquote>
<p>Example:</p>
<pre><code>sub status {
    print &quot;working&quot;;
}
</code></pre>
<p>Or:</p>
<pre><code>sub status {
    return &quot;working&quot;;
}
</code></pre>
</blockquote>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_code_blocks is test do
		var md = """
	code block on the first line

Regular text.

    code block indented by spaces

Regular text.

	the lines in this block
	all contain trailing spaces

Regular Text.

	code block on the last line
"""

		var html = """
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
		assert md_to_html(md) == html
	end

	fun test_daring_rules is test do
		var md = """
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

		var html = """
<p>Dashes:</p>
<hr />
<hr />
<hr />
<hr />
<pre><code>---
</code></pre>
<hr />
<hr />
<hr />
<hr />
<pre><code>- - -
</code></pre>
<p>Asterisks:</p>
<hr />
<hr />
<hr />
<hr />
<pre><code>***
</code></pre>
<hr />
<hr />
<hr />
<hr />
<pre><code>* * *
</code></pre>
<p>Underscores:</p>
<hr />
<hr />
<hr />
<hr />
<pre><code>___
</code></pre>
<hr />
<hr />
<hr />
<hr />
<pre><code>_ _ _
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_code_spans is test do
		var md = """
`<test a="` content of attribute `">`

Fix for backticks within HTML tag: <span attr='`ticks`'>like this</span>

Here's how you put `` `backticks` `` in a code span.
"""

		var html = """
<p><code>&lt;test a=&quot;</code> content of attribute <code>&quot;&gt;</code></p>
<p>Fix for backticks within HTML tag: <span attr='`ticks`'>like this</span></p>
<p>Here's how you put <code>`backticks`</code> in a code span.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_images is test do
		var md = """
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

		var html = """
<p><img src="/path/to/img.jpg" alt="Alt text" /></p>
<p><img src="/path/to/img.jpg" alt="Alt text" title="Optional title" /></p>
<p>Inline within a paragraph: <a href="/url/">alt text</a>.</p>
<p><img src="/url/" alt="alt text" title="title preceded by two spaces" /></p>
<p><img src="/url/" alt="alt text" title="title has spaces afterward" /></p>
<p><img src="/url/" alt="alt text" /></p>
<p><img src="/url/" alt="alt text" title="with a title" />.</p>
<p><img src="" alt="Empty" /></p>
<p><img src="http://example.com/(parens).jpg" alt="this is a stupid URL" /></p>
<p><img src="/url/" alt="alt text" /></p>
<p><img src="/url/" alt="alt text" title="Title here" /></p>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_links1 is test do
		var md = """
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

		var html = """
<p>Just a <a href="/url/">URL</a>.</p>
<p><a href="/url/" title="title">URL and title</a>.</p>
<p><a href="/url/" title="title preceded by two spaces">URL and title</a>.</p>
<p><a href="/url/" title="title preceded by a tab">URL and title</a>.</p>
<p><a href="/url/" title="title has spaces afterward">URL and title</a>.</p>
<p><a href="/url/">URL wrapped in angle brackets</a>.</p>
<p><a href="/url/" title="Here's the title">URL w/ angle brackets + title</a>.</p>
<p><a href="">Empty</a>.</p>
<p><a href="http://en.wikipedia.org/wiki/WIMP_(computing)">With parens in the URL</a></p>
<p>(With outer parens and <a href="/foo(bar)">parens in url</a>)</p>
<p><a href="/foo(bar)" title="and a title">With parens in the URL</a></p>
<p>(With outer parens and <a href="/foo(bar)" title="and a title">parens in url</a>)</p>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_links2 is test do
		var md = """
Foo [bar][1].

 Foo [bar][1].

  Foo [bar][1].

[1]: /url/  "Title"


With [embedded [brackets]][b].


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

[this][this] should work

So should [this][this].

And [this][].

And [this][].

And [this].

But not [that][].

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

		var html = """
<p>Foo <a href="/url/" title="Title">bar</a>.</p>
<p>Foo <a href="/url/" title="Title">bar</a>.</p>
<p>Foo <a href="/url/" title="Title">bar</a>.</p>
<p>With <a href="/url/">embedded [brackets]</a>.</p>
<p>Indented <a href="/url">once</a>.</p>
<p>Indented <a href="/url">twice</a>.</p>
<p>Indented <a href="/url">thrice</a>.</p>
<pre><code>Indented [four][] times.
</code></pre>
<pre><code>[four]: /url
</code></pre>
<hr />
<p><a href="foo">this</a> should work</p>
<p>So should <a href="foo">this</a>.</p>
<p>And <a href="foo">this</a>.</p>
<p>And <a href="foo">this</a>.</p>
<p>And <a href="foo">this</a>.</p>
<p>But not [that][].</p>
<p>Nor [that][].</p>
<p>Nor [that].</p>
<p>[Something in brackets like <a href="foo">this</a> should work]</p>
<p>[Same with <a href="foo">this</a>.]</p>
<p>In this case, <a href="/somethingelse/">this</a> points to something else.</p>
<p>Backslashing should suppress [this] and [this].</p>
<hr />
<p>Here's one where the <a href="/url/">link
breaks</a> across lines.</p>
<p>Here's another where the <a href="/url/">link
breaks</a> across lines, but with a line-ending space.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_links3 is test do
		var md = """
This is the [simple case].

[simple case]: /simple



This one has a [line
break].

This one has a [line
break] with a line-ending space.

[line break]: /foo


[this][that] and the [other]

[this]: /this
[that]: /that
[other]: /other
"""

		var html = """
<p>This is the <a href="/simple">simple case</a>.</p>
<p>This one has a <a href="/foo">line
break</a>.</p>
<p>This one has a <a href="/foo">line
break</a> with a line-ending space.</p>
<p><a href="/that">this</a> and the <a href="/other">other</a></p>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_nested is test do
		var md = """
> foo
>
> > bar
>
> foo
"""

		var html = """
<blockquote>
<p>foo</p>
<blockquote>
<p>bar</p>
</blockquote>
<p>foo</p>
</blockquote>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_tidyness is test do
		var md = """
> A list within a blockquote:
>
> *	asterisk 1
> *	asterisk 2
> *	asterisk 3
"""

	var html = """
<blockquote>
<p>A list within a blockquote:</p>
<ul>
<li>asterisk 1</li>
<li>asterisk 2</li>
<li>asterisk 3</li>
</ul>
</blockquote>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_list is test do
		var md = """
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

		var html = """
<h2>Unordered</h2>
<p>Asterisks tight:</p>
<ul>
<li>asterisk 1</li>
<li>asterisk 2</li>
<li>asterisk 3</li>
</ul>
<p>Asterisks loose:</p>
<ul>
<li>
<p>asterisk 1</p>
</li>
<li>
<p>asterisk 2</p>
</li>
<li>
<p>asterisk 3</p>
</li>
</ul>
<hr />
<p>Pluses tight:</p>
<ul>
<li>Plus 1</li>
<li>Plus 2</li>
<li>Plus 3</li>
</ul>
<p>Pluses loose:</p>
<ul>
<li>
<p>Plus 1</p>
</li>
<li>
<p>Plus 2</p>
</li>
<li>
<p>Plus 3</p>
</li>
</ul>
<hr />
<p>Minuses tight:</p>
<ul>
<li>Minus 1</li>
<li>Minus 2</li>
<li>Minus 3</li>
</ul>
<p>Minuses loose:</p>
<ul>
<li>
<p>Minus 1</p>
</li>
<li>
<p>Minus 2</p>
</li>
<li>
<p>Minus 3</p>
</li>
</ul>
<h2>Ordered</h2>
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
<li>
<p>First</p>
</li>
<li>
<p>Second</p>
</li>
<li>
<p>Third</p>
</li>
</ol>
<p>and using spaces:</p>
<ol>
<li>
<p>One</p>
</li>
<li>
<p>Two</p>
</li>
<li>
<p>Three</p>
</li>
</ol>
<p>Multiple paragraphs:</p>
<ol>
<li>
<p>Item 1, graf one.</p>
<p>Item 2. graf two. The quick brown fox jumped over the lazy dog's
back.</p>
</li>
<li>
<p>Item 2.</p>
</li>
<li>
<p>Item 3.</p>
</li>
</ol>
<h2>Nested</h2>
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
<p>Here's another:</p>
<ol>
<li>First</li>
<li>Second:
<ul>
<li>Fee</li>
<li>Fie</li>
<li>Foe</li>
</ul>
</li>
<li>Third</li>
</ol>
<p>Same thing but with paragraphs:</p>
<ol>
<li>
<p>First</p>
</li>
<li>
<p>Second:</p>
<ul>
<li>Fee</li>
<li>Fie</li>
<li>Foe</li>
</ul>
</li>
<li>
<p>Third</p>
</li>
</ol>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_strong_em is test do
		var md = """
***This is strong and em.***

So is ***this*** word.

___This is strong and em.___

So is ___this___ word.
"""

		var html = """
<p><em><strong>This is strong and em.</strong></em></p>
<p>So is <em><strong>this</strong></em> word.</p>
<p><em><strong>This is strong and em.</strong></em></p>
<p>So is <em><strong>this</strong></em> word.</p>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_tabs is test do
		var md = """
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

		var html = """
<ul>
<li>
<p>this is a list item
indented with tabs</p>
</li>
<li>
<p>this is a list item
indented with spaces</p>
</li>
</ul>
<p>Code:</p>
<pre><code>this code block is indented by one tab
</code></pre>
<p>And:</p>
<pre><code>	this code block is indented by two tabs
</code></pre>
<p>And:</p>
<pre><code>+	this is an example list item
	indented with tabs

+   this is an example list item
    indented with spaces
</code></pre>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_inline_html1 is test do
		var md = """
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

<hr />

<hr />

<hr>

<hr />

<hr />

<hr class="foo" />

<hr class="foo"/>

<hr class="foo" >
"""

		var html = """
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
<hr />
<hr />
<hr>
<hr />
<hr />
<hr class="foo" />
<hr class="foo"/>
<hr class="foo" >
"""
		assert md_to_html(md) == html
	end

	fun test_daring_inline_html2 is test do
		var md = """
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
	<div>
	</div>
</div>

This was broken in 1.0.2b7:

<div class="inlinepage">
<div class="toggleableend">
foo
</div>
</div>
"""

		var html = """
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
	<div>
	</div>
</div>
<p>This was broken in 1.0.2b7:</p>
<div class="inlinepage">
<div class="toggleableend">
foo
</div>
</div>
"""
		assert md_to_html(md) == html
	end

	fun test_daring_inline_html3 is test do
		var md = """
Paragraph one.

<!-- This is a simple comment -->

<!--
	This is another comment.
-->

Paragraph two.

<!-- one comment block -- -- with two comments -->

The end.
"""

		var html = """
<p>Paragraph one.</p>
<!-- This is a simple comment -->
<!--
	This is another comment.
-->
<p>Paragraph two.</p>
<!-- one comment block -- -- with two comments -->
<p>The end.</p>
"""
		assert md_to_html(md) == html
	end
end
