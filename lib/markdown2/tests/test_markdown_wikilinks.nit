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

# Tests for markdown Wikilinks mode
module test_markdown_wikilinks is test

import test_markdown
import test_markdown_location
import test_markdown_md
import test_markdown_man
import test_markdown_latex

redef class TestMarkdown
	redef var md_parser do
		var parser = super
		parser.wikilinks_mode = true
		return parser
	end
end

class TestWikilinksLocation
	super TestMarkdownLocation
	test

	fun test_wikilinks1 is test do
		var md = """
A [[wiki link]] and text.
"""
		var loc = """
MdDocument: 1,1--1,25
  MdParagraph: 1,1--1,25
    MdText: 1,1--1,2
    MdWikilink: 1,3--1,15
      MdText: 1,5--1,13
    MdText: 1,16--1,25
"""
		assert md_to_loc(md) == loc
	end

	fun test_wikilinks2 is test do
		var md = """
A [[wiki: link | with: more, args: end]] and text.
"""
		var loc = """
MdDocument: 1,1--1,50
  MdParagraph: 1,1--1,50
    MdText: 1,1--1,2
    MdWikilink: 1,3--1,40
      MdText: 1,5--1,38
    MdText: 1,41--1,50
"""
		assert md_to_loc(md) == loc
	end

end

class TestWikilinksHtml
	super TestMarkdownHtml
	test

	fun test_wikilinks1 is test do
		var md = """[[foo]]\n"""
		var html = """<p><wiki link="foo">foo</wiki></p>\n"""
		assert md_to_html(md) == html
	end

	fun test_wikilinks2 is test do
		var md = """[[foo | bar baz]]\n"""
		var html = """<p><wiki link="bar%20baz">foo</wiki></p>\n"""
		assert md_to_html(md) == html
	end

	fun test_wikilinks3 is test do
		var md = """This is a [[link]] and this is another [[one]].\n"""
		var html = """<p>This is a <wiki link="link">link</wiki> and this is another <wiki link="one">one</wiki>.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_wikilinks4 is test do
		var md = """[[very: complex | link: with, more: options]]\n"""
		var html = """<p><wiki link="link:%20with,%20more:%20options">very: complex</wiki></p>\n"""
		assert md_to_html(md) == html
	end

	fun test_wikilink_bad1 is test do
		var md = """Not a [wikilink]].\n"""
		var html = """<p>Not a [wikilink]].</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_wikilink_bad2 is test do
		var md = """Not a [[wikilink].\n"""
		var html = """<p>Not a [[wikilink].</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_wikilink_bad3 is test do
		var md = """Not a ![[wikilink]].\n"""
		var html = """<p>Not a ![[wikilink]].</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_wikilink_bad4 is test do
		var md = """Not a [wikilink].\n"""
		var html = """<p>Not a [wikilink].</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_link is test do
		var md = """A standard [link](url).\n"""
		var html = """<p>A standard <a href="url">link</a>.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_image is test do
		var md = """A standard ![image](url).\n"""
		var html = """<p>A standard <img src="url" alt="image" />.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_link_ref1 is test do
		var md = """A standard [link definition].\n\n[link definition]: url\n"""
		var html = """<p>A standard <a href="url">link definition</a>.</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_link_ref2 is test do
		var md = """[[wikilinks]] are not \n\n[[link definition]]: url\n"""
		var html = """<p><wiki link="wikilinks">wikilinks</wiki> are not</p>\n<p><wiki link="link%20definition">link definition</wiki>: url</p>\n"""
		assert md_to_html(md) == html
	end
end

class TestWikilinksMd
	super TestMarkdownMd
	test

	fun test_wikilinks_md1 is test do
		var md = """[[foo]]\n"""
		assert md_to_md(md) == md
	end

	fun test_wikilinks_md2 is test do
		var md = """[[foo: bar | baz: b, c: d]]\n"""
		assert md_to_md(md) == md
	end
end

class TestWikilinksMan
	super TestMarkdownMan
	test

	fun test_wikilinks_man is test do
		var md = """[[foo]]\n"""
		var man = """\n(foo)\n"""
		assert md_to_man(md) == man
	end
end

class TestWikilinksLatex
	super TestMarkdownLatex
	test

	fun test_wikilinks_latex is test do
		var md = """[[foo]]\n"""
		var tex = """\\texttt{foo}\n"""
		assert md_to_tex(md) == tex
	end
end
