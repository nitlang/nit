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

# Tests for markdown rendering to markdown
module test_markdown_md is test

import test_markdown
import markdown_md_rendering

abstract class TestMarkdownMd
	super TestMarkdown

	var md_renderer = new MarkdownRenderer

	fun md_to_md(md: String): String do
		var doc = md_parser.parse(md)
		doc.debug
		return md_renderer.render(doc)
	end
end

class TestMdHeadings
	super TestMarkdownMd
	test

	fun test_no_trailings is test do
		var md = """# foo\n## foo\n### foo\n#### foo\n##### foo\n###### foo\n"""
		var exp = """# foo\n\n## foo\n\n### foo\n\n#### foo\n\n##### foo\n\n###### foo\n"""
		assert md_to_md(md) == exp
	end

	fun test_trailings is test do
		var md = """# foo #\n## foo ##\n### foo ###\n#### foo ####\n##### foo #####\n"""
		var exp = """# foo #\n\n## foo ##\n\n### foo ###\n\n#### foo ####\n\n##### foo #####\n"""
		assert md_to_md(md) == exp
	end

	fun test_setext is test do
		var md = """Foo *bar*\n=========\nFoo *bar*\n---------\n"""
		var exp = """Foo *bar*\n=========\n\nFoo *bar*\n---------\n"""
		assert md_to_md(md) == exp
	end
end

class TestMdBlockQuotes
	super TestMarkdownMd
	test

	fun test191 is test do
		var md = """> # Foo\n> bar\n> baz\n"""
		assert md_to_md(md) == md
	end

	fun test197 is test do
		var md = """> foo\n---\n"""
		var exp = """> foo\n\n---\n"""
		assert md_to_md(md) == exp
	end

	fun test198 is test do
		var md = """> - foo\n- bar\n"""
		var exp = """> - foo\n\n- bar\n"""
		assert md_to_md(md) == exp
	end

	fun test206 is test do
		var md = """> foo\n> bar\n"""
		assert md_to_md(md) == md
	end

	fun test213 is test do
		var md = """> > > foo\n> bar\n"""
		var exp = """> > > foo\n> > > bar\n"""
		assert md_to_md(md) == exp
	end
end

class TestMdLists
	super TestMarkdownMd
	test

	fun test264 is test do
		var md = """- foo\n- bar\n+ baz\n"""
		var exp = """- foo\n- bar\n\n+ baz\n"""
		assert md_to_md(md) == exp
	end

	fun test265 is test do
		var md = """1. foo\n2. bar\n3) baz\n"""
		var exp = """1. foo\n2. bar\n\n3) baz\n"""
		assert md_to_md(md) == exp
	end

	fun test270 is test do
		var md = """- foo\n  - bar\n    - baz\n\n      bim\n"""
		assert md_to_md(md) == md
	end

	fun test273 is test do
		var md = """- a\n - b\n  - c\n   - d\n  - e\n - f\n- g\n"""
		var exp = """- a\n- b\n- c\n- d\n- e\n- f\n- g\n"""
		assert md_to_md(md) == exp
	end

	fun test274 is test do
		var md = """1. a\n\n  2. b\n\n   3. c\n"""
		var exp = """1. a\n\n2. b\n\n3. c\n"""
		assert md_to_md(md) == exp
	end

	fun test289 is test do
		var md = """- a\n  - b\n  - c\n\n- d\n  - e\n  - f\n"""
		var exp = """- a\n\n  - b\n  - c\n\n- d\n\n  - e\n  - f\n"""
		assert md_to_md(md) == exp
	end
end

class TestMdkListItems
	super TestMarkdownMd
	test

	fun test217 is test do
		var md = """1.  A paragraph\n    with two lines.\n\n        indented code\n\n    > A block quote.\n"""
		var exp = """1. A paragraph\n   with two lines.\n\n       indented code\n\n   > A block quote.\n"""
		assert md_to_md(md) == exp
	end

	fun test219 is test do
		var md = """- one\n\n  two\n"""
		assert md_to_md(md) == md
	end

	fun test221 is test do
		var md = """ -    one\n\n      two\n"""
		var exp = """- one\n\n  two\n"""
		assert md_to_md(md) == exp
	end

	# FIXME
	# fun test223 is test do
		# var md = """>>- one\n>>\n  >  > two\n"""
		# var exp = """> > - one\n> >\n> > two\n"""
		# assert md_to_md(md) == exp
	# end

	fun test225 is test do
		var md = """- foo\n\n  bar\n"""
		assert md_to_md(md) == md
	end

	fun test228 is test do
		var md = """123456789. ok\n"""
		assert md_to_md(md) == md
	end

	fun test230 is test do
		var md = """0. ok\n"""
		assert md_to_md(md) == md
	end

	fun test246 is test do
		var md = """1. foo\n2.\n3. bar\n"""
		assert md_to_md(md) == md
	end

	fun test254 is test do
		var md = """  1.  A paragraph\n    with two lines.\n"""
		var exp = """1. A paragraph\n   with two lines.\n"""
		assert md_to_md(md) == exp
	end

	# FIXME
	# fun test255 is test do
		# var md = """> 1. > Blockquote\n> continued here.\n"""
		# var exp = """> 1. > Blockquote\n     > continued here.\n"""
		# assert md_to_md(md) == exp
	# end
end

class TestMdFencedCodeBlocks
	super TestMarkdownMd
	test

	fun test88 is test do
		var md = """```\nfoo\n```\n"""
		assert md_to_md(md) == md
	end

	fun test92 is test do
		var md = """~~~\nfoo\n~~~\n"""
		assert md_to_md(md) == md
	end

	fun test111 is test do
		var md = """```ruby\ndef foo(x)\n  return 3\nend\n```\n"""
		assert md_to_md(md) == md
	end

	fun test112 is test do
		var md = """~~~~~~\nSome markdown:\n~~~\n**hello**\n~~~\n~~~~~~\n"""
		assert md_to_md(md) == md
	end
end

class TestMdIndentedCodeBlocks
	super TestMarkdownMd
	test

	fun test75 is test do
		var md = """    a code block\n"""
		assert md_to_md(md) == md
	end

	fun test76 is test do
		var md = """    a simple\n      indented code block\n"""
		assert md_to_md(md) == md
	end

	fun test80 is test do
		var md = """    chunk1\n\n    chunk2\n  \n \n \n    chunk3\n"""
		assert md_to_md(md) == """    chunk1\n\n    chunk2\n\n\n\n    chunk3\n"""
	end

	fun test85 is test do
		var md = """        foo\n    bar\n"""
		assert md_to_md(md) == md
	end

	fun test87 is test do
		var md = """\t\tfoo  \n"""
		assert md_to_md(md) == md
	end
end

class TestMdThematicBreaks
	super TestMarkdownMd
	test

	fun test13 is test do
		var md = """***\n---\n___\n"""
		var exp = """***\n\n---\n\n___\n"""
		assert md_to_md(md) == exp
	end

	fun test17 is test do
		var md = """ ***\n  ***\n   ***\n"""
		var exp = """***\n\n***\n\n***\n"""
		assert md_to_md(md) == exp
	end

	fun test20 is test do
		var md = """_____________________________________\n"""
		assert md_to_md(md) == md
	end

	fun test21 is test do
		var md = """ - - -\n"""
		var exp = """- - -\n"""
		assert md_to_md(md) == exp
	end

	fun test22 is test do
		var md = """ **  * ** * ** * **\n"""
		var exp = """**  * ** * ** * **\n"""
		assert md_to_md(md) == exp
	end

	fun test23 is test do
		var md = """-     -      -      -\n"""
		assert md_to_md(md) == md
	end
end

class TestMdParagraphs
	super TestMarkdownMd
	test

	fun test182 is test do
		var md = """aaa\n\nbbb\n"""
		assert md_to_md(md) == md
	end

	fun test183 is test do
		var md = """aaa\nbbb\n\nccc\nddd\n"""
		assert md_to_md(md) == md
	end

	fun test186 is test do
		var md = """aaa\n             bbb\n                                       ccc\n"""
		var exp = """aaa\nbbb\nccc\n"""
		assert md_to_md(md) == exp
	end

	fun test187 is test do
		var md = """   aaa\nbbb\n"""
		var exp = """aaa\nbbb\n"""
		assert md_to_md(md) == exp
	end
end

class TestMdHTMLBlocks
	super TestMarkdownMd
	test

	fun test116 is test do
		var md = """<table><tr><td>\n<pre>\n*Hello*,\n\n_world_.\n</pre>\n\n</td></tr></table>\n"""
		assert md_to_md(md) == md
	end

	fun test119 is test do
		var md = """</div>\n*foo*\n"""
		assert md_to_md(md) == md
	end

	fun test120 is test do
		var md = """<DIV CLASS="foo">\n\n*Markdown*\n\n</DIV>\n"""
		assert md_to_md(md) == md
	end

	fun test121 is test do
		var md = """<div id="foo"\n  class="bar">\n</div>\n"""
		assert md_to_md(md) == md
	end

	fun test124 is test do
		var md = """<div id="foo"\n*hi*\n"""
		assert md_to_md(md) == md
	end

	fun test137 is test do
		var md = """<pre language="haskell"><code>\nimport Text.HTML.TagSoup\n\nmain :: IO ()\nmain = print $ parseTags tags\n</code></pre>\n"""
		assert md_to_md(md) == md
	end

	fun test138 is test do
		var md = """<script type="text/javascript">\n// JavaScript example\n\ndocument.getElementById("demo").innerHTML = "Hello JavaScript!";\n</script>\n"""
		assert md_to_md(md) == md
	end

	fun test139 is test do
		var md = """<style\n  type="text/css">\nh1 {color:red;}\n\np {color:blue;}\n</style>\n"""
		assert md_to_md(md) == md
	end

	fun test149 is test do
		var md = """<![CDATA[\nfunction matchwo(a,b)\n{\n  if (a < b && a < 0) then {\n    return 1;\n\n  } else {\n\n    return 0;\n  }\n}\n]]>\n"""
		assert md_to_md(md) == md
	end

	fun test150 is test do
		var md = """  <!-- foo -->\n\n    <!-- foo -->\n"""
		assert md_to_md(md) == md
	end
end

# Inlines

class TestMdLinks
	super TestMarkdownMd
	test

	fun test_autolink is test do
		var md = """<http://foo.bar.baz/test?q=hello&id=22&boolean>\n"""
		assert md_to_md(md) == md
	end

	fun test_automail is test do
		var md = """<MAILTO:FOO@BAR.BAZ>\n"""
		assert md_to_md(md) == md
	end

	fun test462 is test do
		var md = """[link](/uri "title")\n"""
		assert md_to_md(md) == md
	end

	fun test463 is test do
		var md = """[link](/uri)\n"""
		assert md_to_md(md) == md
	end

	fun test464 is test do
		var md = """[link]()\n"""
		assert md_to_md(md) == md
	end

	fun test467 is test do
		var md = """[link](</my%20uri>)\n"""
		assert md_to_md(md) == md
	end

	fun test483 is test do
		var md = """[link](/url 'title "and" title')\n"""
		assert md_to_md(md) == """[link](/url "title \\"and\\" title")\n"""
	end

	fun test490 is test do
		var md = """[link *foo **bar** `#`*](/uri)\n"""
		assert md_to_md(md) == md
	end
end

class TestMdImages
	super TestMarkdownMd
	test

	fun test546 is test do
		var md = """![foo](/url "title")\n"""
		assert md_to_md(md) == md
	end

	fun test552 is test do
		var md = """![foo](train.jpg)\n"""
		assert md_to_md(md) == md
	end

	fun test554 is test do
		var md = """![foo](<url>)\n"""
		assert md_to_md(md) == md
	end

	fun test555 is test do
		var md = """![foo](train.jpg)\n"""
		assert md_to_md(md) == md
	end
end

class TestMdCodeSpans
	super TestMarkdownMd
	test

	fun test316 is test do
		var md = """`foo`\n"""
		assert md_to_md(md) == md
	end

	fun test319 is test do
		var md = """``foo``\n"""
		assert md_to_md(md) == md
	end

	fun test332 is test do
		var md = """`foo``bar``\n"""
		assert md_to_md(md) == md
	end
end

class TestMdEmphasisAndStrongEmphasis
	super TestMarkdownMd
	test

	fun test333 is test do
		var md = """*foo bar*\n"""
		assert md_to_md(md) == md
	end

	fun test335 is test do
		var md = """a*"foo"*\n"""
		assert md_to_md(md) == md
	end

	fun test336 is test do
		var md = """* a *\n"""
		assert md_to_md(md) == md
	end

	fun test351 is test do
		var md = """*(*foo*)*\n"""
		assert md_to_md(md) == md
	end

	fun test360 is test do
		var md = """**foo bar**\n"""
		assert md_to_md(md) == md
	end

	fun test361 is test do
		var md = """** foo bar**\n"""
		assert md_to_md(md) == md
	end

	fun test364 is test do
		var md = """__foo bar__\n"""
		assert md_to_md(md) == md
	end

	fun test393 is test do
		var md = """*foo**bar**baz*\n"""
		assert md_to_md(md) == md
	end
end

class TestMdLineBreaks
	super TestMarkdownMd
	test

	fun test609 is test do
		var md = """foo\\\nbaz\n"""
		assert md_to_md(md) == md
	end

	fun test612 is test do
		var md = """foo\\\n     bar\n"""
		var exp = """foo\\\nbar\n"""
		assert md_to_md(md) == exp
	end

	fun test613 is test do
		var md = """*foo  \nbar*\n"""
		assert md_to_md(md) == md
	end

	fun test619 is test do
		var md = """foo\\\n"""
		assert md_to_md(md) == md
	end

	fun test623 is test do
		var md = """foo\nbaz\n"""
		assert md_to_md(md) == md
	end
end

class TestMdRawHTML
	super TestMarkdownMd
	test

	fun test590 is test do
		var md = """<a foo="bar" bam = 'baz <em>"</em>'\n_boolean zoop:33=zoop:33 />\n"""
		assert md_to_md(md) == md
	end

	fun test591 is test do
		var md = """Foo <responsive-image src="foo.jpg" />\n"""
		assert md_to_md(md) == md
	end

	fun test596 is test do
		var md = """<a href='bar'title=title>\n"""
		assert md_to_md(md) == md
	end

	fun test599 is test do
		var md = """foo <!-- this is a\ncomment - with hyphen -->\n"""
		assert md_to_md(md) == md
	end

	fun test601 is test do
		var md = """foo <!--> foo -->\n\nfoo <!-- foo--->\n"""
		assert md_to_md(md) == md
	end

	fun test602 is test do
		var md = """foo <?php echo $a; ?>\n"""
		assert md_to_md(md) == md
	end

	fun test604 is test do
		var md = """foo <![CDATA[>&<]]>\n"""
		assert md_to_md(md) == md
	end

	fun test606 is test do
		var md = """foo <a href="\\*">\n"""
		assert md_to_md(md) == md
	end
end

class TestMdTabs
	super TestMarkdownMd
	test

	fun test1 is test do
		var md = """\tfoo\tbaz\t\tbim\n"""
		assert md_to_md(md) == md
	end

	fun test2 is test do
		var md = """  \tfoo\tbaz\t\tbim\n"""
		var exp = """    foo\tbaz\t\tbim\n"""
		assert md_to_md(md) == exp
	end

	fun test3 is test do
		var md = """    a\ta\n    ὐ\ta\n"""
		assert md_to_md(md) == md
	end

	fun test4 is test do
		var md = """  - foo\n\n\tbar\n"""
		var exp = """- foo\n\n  bar\n"""
		assert md_to_md(md) == exp
	end

	fun test8 is test do
		var md = """    foo\n\tbar\n"""
		var exp = """    foo\n    bar\n"""
		assert md_to_md(md) == exp
	end

	fun test9 is test do
		var md = """ - foo\n   - bar\n\t - baz\n"""
		var exp = """- foo\n  - bar\n    - baz\n"""
		assert md_to_md(md) == exp
	end

	fun test10 is test do
		var md = """#\tFoo\n"""
		var exp = """# Foo\n"""
		assert md_to_md(md) == exp
	end

	fun test11 is test do
		var md = """*\t*\t*\t\n"""
		assert md_to_md(md) == md
	end
end

class TestMdBackslashEscapes
	super TestMarkdownMd
	test

	fun test292 is test do
		var md = """\\\t\\A\\a\\ \\3\\φ\\«\n"""
		assert md_to_md(md) == md
	end

	fun test295 is test do
		var md = """foo\\\nbar\n"""
		assert md_to_md(md) == md
	end

	fun test297 is test do
		var md = """    \\[\\]\n"""
		assert md_to_md(md) == md
	end

	fun test298 is test do
		var md = """~~~\n\\[\\]\n~~~\n"""
		assert md_to_md(md) == md
	end

	fun test299 is test do
		var md = """<http://example.com?find=\\*>\n"""
		assert md_to_md(md) == md
	end

	fun test300 is test do
		var md = """<a href="/bar\\/)">\n"""
		assert md_to_md(md) == md
	end
end
