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

# Tests for markdown Github mode
module test_markdown_github is test

import test_markdown
import test_markdown_location
import test_markdown_md
import test_markdown_man
import test_markdown_latex

redef class TestMarkdown
	redef var md_parser is lazy do
		var parser = super
		parser.github_mode = true
		return parser
	end
end

class TestGithubLocation
	super TestMarkdownLocation
	test

	fun test_github_strike is test do
		var md = """
A ~striked~ text.
"""
		var loc = """
MdDocument: 1,1--1,17
  MdParagraph: 1,1--1,17
    MdText: 1,1--1,2
    MdStrike: 1,3--1,11
      MdText: 1,4--1,10
    MdText: 1,12--1,17
"""
		assert md_to_loc(md) == loc
	end

	fun test_github_strike2 is test do
		var md = """
A ~~striked~~ text.
"""
		var loc = """
MdDocument: 1,1--1,19
  MdParagraph: 1,1--1,19
    MdText: 1,1--1,2
    MdStrike: 1,3--1,13
      MdText: 1,5--1,11
    MdText: 1,14--1,19
"""
		assert md_to_loc(md) == loc
	end

	fun test_github_super is test do
		var md = """
A ^supered^ text.
"""
		var loc = """
MdDocument: 1,1--1,17
  MdParagraph: 1,1--1,17
    MdText: 1,1--1,2
    MdSuper: 1,3--1,11
      MdText: 1,4--1,10
    MdText: 1,12--1,17
"""
		assert md_to_loc(md) == loc
	end

	fun test_github_super2 is test do
		var md = """
A ^^supered^^ text.
"""
		var loc = """
MdDocument: 1,1--1,19
  MdParagraph: 1,1--1,19
    MdText: 1,1--1,2
    MdSuper: 1,3--1,13
      MdText: 1,5--1,11
    MdText: 1,14--1,19
"""
		assert md_to_loc(md) == loc
	end
end

class TestGithubHtml
	super TestMarkdownHtml
	test

	fun test_strike1 is test do
		var md = """foo ~bar~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike2 is test do
		var md = """foo ~~bar~~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike3 is test do
		var md = """foo ~~~bar~~~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike4 is test do
		var md = """foo ~~~~bar~~~~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike5 is test do
		var md = """foo ~~~~~bar~~~~~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike6 is test do
		var md = """foo ~~~~~~bar~~~~~~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike_bad is test do
		var md = """foo ~bar baz\n"""
		var html = """<p>foo ~bar baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike_bad2 is test do
		var md = """foo ~~bar~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike_bad3 is test do
		var md = """foo ~~~bar~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike_bad4 is test do
		var md = """foo ~~~~bar~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike_bad5 is test do
		var md = """foo ~~~~~bar~ baz\n"""
		var html = """<p>foo <del>bar</del> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike_bad6 is test do
		var md = """foo bar~ baz\n"""
		var html = """<p>foo bar~ baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_strike_bad7 is test do
		var md = """foo ~bar~~~~ baz\n"""
		var html = """<p>foo <del>bar</del>~~~ baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super1 is test do
		var md = """foo ^bar^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super2 is test do
		var md = """foo ^^bar^^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super3 is test do
		var md = """foo ^^^bar^^^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super4 is test do
		var md = """foo ^^^^bar^^^^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super5 is test do
		var md = """foo ^^^^^bar^^^^^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super6 is test do
		var md = """foo ^^^^^^bar^^^^^^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super_bad1 is test do
		var md = """foo ^bar baz\n"""
		var html = """<p>foo ^bar baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super_bad is test do
		var md = """foo ^^bar^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super_bad3 is test do
		var md = """foo ^^^bar^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super_bad4 is test do
		var md = """foo ^^^^bar^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super_bad5 is test do
		var md = """foo ^^^^^bar^ baz\n"""
		var html = """<p>foo <sup>bar</sup> baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super_bad6 is test do
		var md = """foo bar^ baz\n"""
		var html = """<p>foo bar^ baz</p>\n"""
		assert md_to_html(md) == html
	end

	fun test_super_bad7 is test do
		var md = """foo ^bar^^^^ baz\n"""
		var html = """<p>foo <sup>bar</sup>^^^ baz</p>\n"""
		assert md_to_html(md) == html
	end
end

class TestGithubMd
	super TestMarkdownMd
	test

	fun test_strike_md is test do
		var md = """~~foo~~\n"""
		assert md_to_md(md) == md
	end

	fun test_super_md is test do
		var md = """^^foo^^\n"""
		assert md_to_md(md) == md
	end
end

class TestGithubMan
	super TestMarkdownMan
	test

	fun test_strike_man is test do
		var md = """~~foo~~\n"""
		var man = """\n[STRIKEOUT:foo]\n"""
		assert md_to_man(md) == man
	end

	fun test_super_man is test do
		var md = """^foo^\n"""
		var man = """\nfoo\n"""
		assert md_to_man(md) == man
	end
end

class TestGithubLatex
	super TestMarkdownLatex
	test

	fun test_strike_latex is test do
		var md = """
A ~~super~~ text.
"""
		var tex = """
A \\sout{super} text.
"""
		assert md_to_tex(md) == tex
	end

	fun test_super_latex is test do
		var md = """
A ^super^ text.
"""
		var tex = """
A \\textsuperscript{super} text.
"""
		assert md_to_tex(md) == tex
	end
end
