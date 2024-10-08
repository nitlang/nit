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

# Tests related to markdown issues from the Git repo
#
# Fixing:
#
# * 1525: lib/markdown: issue with nested fences
# * 2507: markdown: some lines are lost in verbatim blocks inside a list
#
# See <https://github.com/nitlang/nit/issues>.
module test_markdown_issues is test

import test_markdown

class TestMarkdownIssues
	super TestMarkdownHtml
	test

	# See <https://github.com/nitlang/nit/issues/1525>.
	fun test_issue_1525_1 is test do
		var md = """
A fence within a fence
~~~~~~
some code:
~~~
some other code
~~~
~~~~~~
"""
		var html = """
<p>A fence within a fence</p>
<pre><code>some code:
~~~
some other code
~~~
</code></pre>
"""
		assert md_to_html(md) == html
	end

	# See <https://github.com/nitlang/nit/issues/1525>.
	fun test_issue_1525_2 is test do
		var md = """
A fence within a fence
~~~
some code:
```
some other code
```
~~~
"""
		var html = """
<p>A fence within a fence</p>
<pre><code>some code:
```
some other code
```
</code></pre>
"""
		assert md_to_html(md) == html
	end

	# See <https://github.com/nitlang/nit/issues/1525>.
	fun test_issue_1525_3 is test do
		var md = """
A fence within a fence
```
some code:
~~~
some other code
~~~
```
"""
		var html = """
<p>A fence within a fence</p>
<pre><code>some code:
~~~
some other code
~~~
</code></pre>
"""
		assert md_to_html(md) == html
	end

	# See <https://github.com/nitlang/nit/issues/2507>.
	fun test_issue_2507_1 is test do
		var md = """
*   4 spaces, `asdf` and `tab.` are lost
    ~~~
    a
    as
    asd
    asdf
		tab.
    asdfg
    ~~~
"""
		var html = """
<ul>
<li>4 spaces, <code>asdf</code> and <code>tab.</code> are lost
<pre><code>a
as
asd
asdf
	tab.
asdfg
</code></pre>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end

	# See <https://github.com/nitlang/nit/issues/2507>.
	fun test_issue_2507_2 is test do
		var md = """
* 2 spaces, `as` is lost

  ~~~
  a
  as
  asd
  asdf
  ~~~
"""
		var html = """
<ul>
<li>
<p>2 spaces, <code>as</code> is lost</p>
<pre><code>a
as
asd
asdf
</code></pre>
</li>
</ul>
"""
		assert md_to_html(md) == html
	end
end
