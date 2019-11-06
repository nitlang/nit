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

# Tests for markdown nodes location
module test_markdown_location is test

import test_markdown

abstract class TestMarkdownLocation
	super TestMarkdown

	redef var md_parser do
		var parser = super
		parser.github_mode = true
		parser.wikilinks_mode = true
		return parser
	end

	fun md_to_loc(md: String): String do
		var node = parse_md(md)
		var v = new TestMarkdownLocationVisitor
		v.enter_visit(node)
		return v.buffer.to_s
	end
end

class TestMarkdownLocationVisitor
	super MdVisitor

	var buffer = new Buffer
	var indent = 0

	fun print_loc(node: MdNode) do
		buffer.append "{"  " * indent}{node.class_name}: {node.location}\n"
		indent += 1
		node.visit_all(self)
		indent -= 1
	end

	redef fun visit(node) do print_loc(node)
end

class TestLocationOutput
	super TestMarkdownLocation
	test

	fun test_atx_headings1 is test do
		var md = """
# title 1
## title 2
### title 3
#### title 4
##### title 5
###### title 6
"""
		var loc = """
MdDocument: 1,1--6,14
  MdHeading: 1,1--1,9
    MdText: 1,3--1,9
  MdHeading: 2,1--2,10
    MdText: 2,4--2,10
  MdHeading: 3,1--3,11
    MdText: 3,5--3,11
  MdHeading: 4,1--4,12
    MdText: 4,6--4,12
  MdHeading: 5,1--5,13
    MdText: 5,7--5,13
  MdHeading: 6,1--6,14
    MdText: 6,8--6,14
"""
		assert md_to_loc(md) == loc
	end

	fun test_atx_headings_with_trailings is test do
		var md = """
# title 1 #
## title 2 ##
### title 3 ###
#### title 4 ####
##### title 5 #####
###### title 6 ######
"""
		var loc = """
MdDocument: 1,1--6,21
  MdHeading: 1,1--1,11
    MdText: 1,3--1,9
  MdHeading: 2,1--2,13
    MdText: 2,4--2,10
  MdHeading: 3,1--3,15
    MdText: 3,5--3,11
  MdHeading: 4,1--4,17
    MdText: 4,6--4,12
  MdHeading: 5,1--5,19
    MdText: 5,7--5,13
  MdHeading: 6,1--6,21
    MdText: 6,8--6,14
"""
		assert md_to_loc(md) == loc
	end

	fun test_settext_headings is test do
		var md = """
title 1
=======

title 2
-------
"""
		var loc = """
MdDocument: 1,1--5,7
  MdHeading: 1,1--2,7
    MdText: 1,1--1,7
  MdHeading: 4,1--5,7
    MdText: 4,1--4,7
"""
		assert md_to_loc(md) == loc
	end

	fun test_indented_code_spaces is test do
		var md = """
    some code

	multi lines
"""
		var loc = """
MdDocument: 1,1--3,15
  MdIndentedCodeBlock: 1,1--3,15
"""
		assert md_to_loc(md) == loc
	end

	fun test_indented_code_tabs is test do
		var md = """
	some code

	multi lines
"""
		var loc = """
MdDocument: 1,1--3,15
  MdIndentedCodeBlock: 1,1--3,15
"""
		assert md_to_loc(md) == loc
	end

	fun test_fenced_code is test do
		var md = """
~~~
some code

multi lines
~~~
"""
		var loc = """
MdDocument: 1,1--5,3
  MdFencedCodeBlock: 1,1--5,3
"""
		assert md_to_loc(md) == loc
	end

	fun test_thematic_breaks is test do
		var md = """
***

* * *

*	*	*
"""
		var loc = """
MdDocument: 1,1--5,5
  MdThematicBreak: 1,1--1,3
  MdThematicBreak: 3,1--3,5
  MdThematicBreak: 5,1--5,5
"""
		assert md_to_loc(md) == loc
	end

	fun test_html_blocks1 is test do
		var md = """
<p><a href="foo">bar</a></p>

<div>
	<a href="foo">bar</a>
</div><hr />
"""
		var loc = """
MdDocument: 1,1--5,12
  MdHtmlBlock: 1,1--1,28
  MdHtmlBlock: 3,1--5,12
"""
		assert md_to_loc(md) == loc
	end

	fun test_paragraph1 is test do
		var md = """
foo bar baz

line 1
line 2

other par
with multiple lines
"""
		var loc = """
MdDocument: 1,1--7,19
  MdParagraph: 1,1--1,11
    MdText: 1,1--1,11
  MdParagraph: 3,1--4,6
    MdText: 3,1--3,6
    MdSoftLineBreak: 3,7--3,7
    MdText: 4,1--4,6
  MdParagraph: 6,1--7,19
    MdText: 6,1--6,9
    MdSoftLineBreak: 6,10--6,10
    MdText: 7,1--7,19
"""
		assert md_to_loc(md) == loc
	end

	fun test_blockquotes is test do
		var md = """
> foo
> bar
"""
		var loc = """
MdDocument: 1,1--2,5
  MdBlockQuote: 1,1--2,5
    MdParagraph: 1,3--2,5
      MdText: 1,3--1,5
      MdSoftLineBreak: 1,6--1,6
      MdText: 2,3--2,5
"""
		assert md_to_loc(md) == loc
	end

	fun test_blockquotes_nested is test do
		var md = """
> foo
> > foo
> > bar
"""
		var loc = """
MdDocument: 1,1--3,7
  MdBlockQuote: 1,1--3,7
    MdParagraph: 1,3--1,5
      MdText: 1,3--1,5
    MdBlockQuote: 2,3--3,7
      MdParagraph: 2,5--3,7
        MdText: 2,5--2,7
        MdSoftLineBreak: 2,8--2,8
        MdText: 3,5--3,7
"""
		assert md_to_loc(md) == loc
	end

	fun test_blockquotes_headings is test do
		var md = """
> # Title 1
> ## Title 2 ##
"""
		var loc = """
MdDocument: 1,1--2,15
  MdBlockQuote: 1,1--2,15
    MdHeading: 1,3--1,11
      MdText: 1,5--1,11
    MdHeading: 2,3--2,15
      MdText: 2,6--2,12
"""
		assert md_to_loc(md) == loc
	end

	fun test_blockquotes_thematic_breaks is test do
		var md = """
> ***
> * * *
"""
		var loc = """
MdDocument: 1,1--2,7
  MdBlockQuote: 1,1--2,7
    MdThematicBreak: 1,3--1,5
    MdThematicBreak: 2,3--2,7
"""
		assert md_to_loc(md) == loc
	end

	fun test_blockquotes_indented_code is test do
		var md = """
>     line 1
>     line 2
"""
		var loc = """
MdDocument: 1,1--2,12
  MdBlockQuote: 1,1--2,12
    MdIndentedCodeBlock: 1,3--2,12
"""
		assert md_to_loc(md) == loc
	end

	fun test_blockquotes_fenced_code is test do
		var md = """
> ~~~
> line 1
> line 2
> ~~~
"""
		var loc = """
MdDocument: 1,1--4,5
  MdBlockQuote: 1,1--4,5
    MdFencedCodeBlock: 1,3--4,5
"""
		assert md_to_loc(md) == loc
	end

	fun test_blockquotes_list is test do
		var md = """
> * line 1
> * line 2
"""
		var loc = """
MdDocument: 1,1--2,10
  MdBlockQuote: 1,1--2,10
    MdUnorderedList: 1,3--2,10
      MdListItem: 1,3--1,10
        MdParagraph: 1,5--1,10
          MdText: 1,5--1,10
      MdListItem: 2,3--2,10
        MdParagraph: 2,5--2,10
          MdText: 2,5--2,10
"""
		assert md_to_loc(md) == loc
	end

	fun test_unordered_lists is test do
		var md = """
* line 1
* line 2
"""
		var loc = """
MdDocument: 1,1--2,8
  MdUnorderedList: 1,1--2,8
    MdListItem: 1,1--1,8
      MdParagraph: 1,3--1,8
        MdText: 1,3--1,8
    MdListItem: 2,1--2,8
      MdParagraph: 2,3--2,8
        MdText: 2,3--2,8
"""
		assert md_to_loc(md) == loc
	end

	fun test_ordered_lists is test do
		var md = """
1) line 1
2) line 2
"""
		var loc = """
MdDocument: 1,1--2,9
  MdOrderedList: 1,1--2,9
    MdListItem: 1,1--1,9
      MdParagraph: 1,4--1,9
        MdText: 1,4--1,9
    MdListItem: 2,1--2,9
      MdParagraph: 2,4--2,9
        MdText: 2,4--2,9
"""
		assert md_to_loc(md) == loc
	end

	fun test_list_headings is test do
		var md = """
* # Title 1
* ## Title 2 ##
"""
		var loc = """
MdDocument: 1,1--2,15
  MdUnorderedList: 1,1--2,15
    MdListItem: 1,1--1,11
      MdHeading: 1,3--1,11
        MdText: 1,5--1,11
    MdListItem: 2,1--2,15
      MdHeading: 2,3--2,15
        MdText: 2,6--2,12
"""
		assert md_to_loc(md) == loc
	end

	fun test_list_thematic_breaks is test do
		var md = """
- ***
- * * *
"""
		var loc = """
MdDocument: 1,1--2,7
  MdUnorderedList: 1,1--2,7
    MdListItem: 1,1--1,5
      MdThematicBreak: 1,3--1,5
    MdListItem: 2,1--2,7
      MdThematicBreak: 2,3--2,7
"""
		assert md_to_loc(md) == loc
	end

	fun test_list_indented_codes is test do
		var md = """
-     line 1
-     line 2
"""
		var loc = """
MdDocument: 1,1--2,12
  MdUnorderedList: 1,1--2,12
    MdListItem: 1,1--1,12
      MdIndentedCodeBlock: 1,3--1,12
    MdListItem: 2,1--2,12
      MdIndentedCodeBlock: 2,3--2,12
"""
		assert md_to_loc(md) == loc
	end

	fun test_list_fenced_codes is test do
		var md = """
- ~~~
  line 1
  line 2
  ~~~
"""
		var loc = """
MdDocument: 1,1--4,5
  MdUnorderedList: 1,1--4,5
    MdListItem: 1,1--4,5
      MdFencedCodeBlock: 1,3--4,5
"""
		assert md_to_loc(md) == loc
	end

	fun test_list_blockquotes is test do
		var md = """
- > line 1
  > line 2
"""
		var loc = """
MdDocument: 1,1--2,10
  MdUnorderedList: 1,1--2,10
    MdListItem: 1,1--2,10
      MdBlockQuote: 1,3--2,10
        MdParagraph: 1,5--2,10
          MdText: 1,5--1,10
          MdSoftLineBreak: 1,11--1,11
          MdText: 2,5--2,10
"""
		assert md_to_loc(md) == loc
	end

	fun test_list_pars is test do
		var md = """
* line 1
  line 2

* line 3
"""
		var loc = """
MdDocument: 1,1--4,8
  MdUnorderedList: 1,1--4,8
    MdListItem: 1,1--2,8
      MdParagraph: 1,3--2,8
        MdText: 1,3--1,8
        MdSoftLineBreak: 1,9--1,9
        MdText: 2,3--2,8
    MdListItem: 4,1--4,8
      MdParagraph: 4,3--4,8
        MdText: 4,3--4,8
"""
		assert md_to_loc(md) == loc
	end

	fun test_list_nested is test do
		var md = """
* foo
  * foo
  * bar
"""
		var loc = """
MdDocument: 1,1--3,7
  MdUnorderedList: 1,1--3,7
    MdListItem: 1,1--3,7
      MdParagraph: 1,3--1,5
        MdText: 1,3--1,5
      MdUnorderedList: 2,3--3,7
        MdListItem: 2,3--2,7
          MdParagraph: 2,5--2,7
            MdText: 2,5--2,7
        MdListItem: 3,3--3,7
          MdParagraph: 3,5--3,7
            MdText: 3,5--3,7
"""
		assert md_to_loc(md) == loc
	end

	fun test_emphasis is test do
		var md = """
An *emphasis* and a **strong emphasis**.
"""
		var loc = """
MdDocument: 1,1--1,40
  MdParagraph: 1,1--1,40
    MdText: 1,1--1,3
    MdEmphasis: 1,4--1,13
      MdText: 1,5--1,12
    MdText: 1,14--1,20
    MdStrongEmphasis: 1,21--1,39
      MdText: 1,23--1,37
    MdText: 1,40--1,40
"""
		assert md_to_loc(md) == loc
	end

	fun test_emphasis_nested is test do
		var md = """
Another ***emphasis***.
"""
		var loc = """
MdDocument: 1,1--1,23
  MdParagraph: 1,1--1,23
    MdText: 1,1--1,8
    MdEmphasis: 1,9--1,22
      MdStrongEmphasis: 1,10--1,21
        MdText: 1,12--1,19
    MdText: 1,23--1,23
"""
		assert md_to_loc(md) == loc
	end

	fun test_emphasis_nested2 is test do
		var md = """
Another ****emphasis****.
"""
		var loc = """
MdDocument: 1,1--1,25
  MdParagraph: 1,1--1,25
    MdText: 1,1--1,8
    MdStrongEmphasis: 1,9--1,24
      MdStrongEmphasis: 1,11--1,22
        MdText: 1,13--1,20
    MdText: 1,25--1,25
"""
		assert md_to_loc(md) == loc
	end

	fun test_emphasis_nested3 is test do
		var md = """
Another *****emphasis*****.
"""
		var loc = """
MdDocument: 1,1--1,27
  MdParagraph: 1,1--1,27
    MdText: 1,1--1,8
    MdEmphasis: 1,9--1,26
      MdStrongEmphasis: 1,10--1,25
        MdStrongEmphasis: 1,12--1,23
          MdText: 1,14--1,21
    MdText: 1,27--1,27
"""
		assert md_to_loc(md) == loc
	end

	fun test_emphasis_bad is test do
		var md = """
Another ___ emphasis ___.
"""
		var loc = """
MdDocument: 1,1--1,25
  MdParagraph: 1,1--1,25
    MdText: 1,1--1,25
"""
		assert md_to_loc(md) == loc
	end

	fun test_emphasis_bad2 is test do
		var md = """
Another **emphasis.
"""
		var loc = """
MdDocument: 1,1--1,19
  MdParagraph: 1,1--1,19
    MdText: 1,1--1,19
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_code is test do
		var md = """
A `code` and another ``one``.
"""
		var loc = """
MdDocument: 1,1--1,29
  MdParagraph: 1,1--1,29
    MdText: 1,1--1,2
    MdCode: 1,3--1,8
    MdText: 1,9--1,21
    MdCode: 1,22--1,28
    MdText: 1,29--1,29
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_code_bad is test do
		var md = """
A `code and another ``one``.
"""
		var loc = """
MdDocument: 1,1--1,28
  MdParagraph: 1,1--1,28
    MdText: 1,1--1,20
    MdCode: 1,21--1,27
    MdText: 1,28--1,28
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_autolink is test do
		var md = """
An <http://autolink>.
"""
		var loc = """
MdDocument: 1,1--1,21
  MdParagraph: 1,1--1,21
    MdText: 1,1--1,3
    MdLink: 1,4--1,20
      MdText: 1,5--1,19
    MdText: 1,21--1,21
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_autolink_bad is test do
		var md = """
An http://autolink>.
"""
		var loc = """
MdDocument: 1,1--1,20
  MdParagraph: 1,1--1,20
    MdText: 1,1--1,20
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_autolink_bad2 is test do
		var md = """
An <http://autolink.
"""
		var loc = """
MdDocument: 1,1--1,20
  MdParagraph: 1,1--1,20
    MdText: 1,1--1,20
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_automail is test do
		var md = """
An <me.foo+@bar.baz>.
"""
		var loc = """
MdDocument: 1,1--1,21
  MdParagraph: 1,1--1,21
    MdText: 1,1--1,3
    MdLink: 1,4--1,20
      MdText: 1,5--1,19
    MdText: 1,21--1,21
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_link is test do
		var md = """
A [link](url/).
"""
		var loc = """
MdDocument: 1,1--1,15
  MdParagraph: 1,1--1,15
    MdText: 1,1--1,2
    MdLink: 1,3--1,14
      MdText: 1,4--1,7
    MdText: 1,15--1,15
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_link_with_title is test do
		var md = """
A [link](url/ "title").
"""
		var loc = """
MdDocument: 1,1--1,23
  MdParagraph: 1,1--1,23
    MdText: 1,1--1,2
    MdLink: 1,3--1,22
      MdText: 1,4--1,7
    MdText: 1,23--1,23
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_link_with_content is test do
		var md = """
A [`code` link](url/).
"""
		var loc = """
MdDocument: 1,1--1,22
  MdParagraph: 1,1--1,22
    MdText: 1,1--1,2
    MdLink: 1,3--1,21
      MdCode: 1,4--1,9
      MdText: 1,10--1,14
    MdText: 1,22--1,22
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_link_bad is test do
		var md = """
A [link](url/.
"""
		var loc = """
MdDocument: 1,1--1,14
  MdParagraph: 1,1--1,14
    MdText: 1,1--1,14
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_image is test do
		var md = """
A ![img](url/).
"""
		var loc = """
MdDocument: 1,1--1,15
  MdParagraph: 1,1--1,15
    MdText: 1,1--1,2
    MdImage: 1,3--1,14
      MdText: 1,5--1,7
    MdText: 1,15--1,15
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_image_bad is test do
		var md = """
A ![img](url/.
"""
		var loc = """
MdDocument: 1,1--1,14
  MdParagraph: 1,1--1,14
    MdText: 1,1--1,14
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_link_ref is test do
		var md = """
A [link][].

[link]: url/
"""
		var loc = """
MdDocument: 1,1--1,11
  MdParagraph: 1,1--1,11
    MdText: 1,1--1,2
    MdLink: 1,3--1,10
      MdText: 1,4--1,7
    MdText: 1,11--1,11
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_link_ref2 is test do
		var md = """
A [foo][link].

[link]: url/
"""
		var loc = """
MdDocument: 1,1--1,14
  MdParagraph: 1,1--1,14
    MdText: 1,1--1,2
    MdLink: 1,3--1,13
      MdText: 1,4--1,6
    MdText: 1,14--1,14
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_link_ref_bad is test do
		var md = """
A [foo][link2].

[link]: url/
"""
		var loc = """
MdDocument: 1,1--1,15
  MdParagraph: 1,1--1,15
    MdText: 1,1--1,15
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_html is test do
		var md = """
An <br /> break line.
"""
		var loc = """
MdDocument: 1,1--1,21
  MdParagraph: 1,1--1,21
    MdText: 1,1--1,3
    MdHtmlInline: 1,4--1,9
    MdText: 1,10--1,21
"""
		assert md_to_loc(md) == loc
	end


	fun test_inline_html2 is test do
		var md = """
An <a href="link">*emph*</a>.
"""
		var loc = """
MdDocument: 1,1--1,29
  MdParagraph: 1,1--1,29
    MdText: 1,1--1,3
    MdHtmlInline: 1,4--1,18
    MdEmphasis: 1,19--1,24
      MdText: 1,20--1,23
    MdHtmlInline: 1,25--1,28
    MdText: 1,29--1,29
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_escape is test do
		var md = """
A text with \\"escaped chars\\".
"""
		var loc = """
MdDocument: 1,1--1,30
  MdParagraph: 1,1--1,30
    MdText: 1,1--1,30
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_soft_break is test do
		var md = """
A text with
a soft break.
"""
		var loc = """
MdDocument: 1,1--2,13
  MdParagraph: 1,1--2,13
    MdText: 1,1--1,11
    MdSoftLineBreak: 1,12--1,12
    MdText: 2,1--2,13
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_soft_break2 is test do
		var md = """A text with \na hard break.\n"""
		var loc = """
MdDocument: 1,1--2,13
  MdParagraph: 1,1--2,13
    MdText: 1,1--1,11
    MdSoftLineBreak: 1,12--1,13
    MdText: 2,1--2,13
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_hard_break is test do
		var md = """
A text with\\
a hard break.
"""
		var loc = """
MdDocument: 1,1--2,13
  MdParagraph: 1,1--2,13
    MdText: 1,1--1,11
    MdHardLineBreak: 1,12--1,13
    MdText: 2,1--2,13
"""
		assert md_to_loc(md) == loc
	end

	fun test_inline_hard_break2 is test do
		var md = """A text with  \na hard break.\n"""
		var loc = """
MdDocument: 1,1--2,13
  MdParagraph: 1,1--2,13
    MdText: 1,1--1,11
    MdHardLineBreak: 1,12--1,14
    MdText: 2,1--2,13
"""
		assert md_to_loc(md) == loc
	end
end
