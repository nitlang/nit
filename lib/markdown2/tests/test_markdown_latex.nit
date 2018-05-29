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

# Tests for markdown rendering to LaTeX
module test_markdown_latex is test

import test_markdown
import markdown_latex_rendering

# Abstract test class that defines the test methods for LaTeX rendering
abstract class TestMarkdownLatex
	super TestMarkdown

	# LaTeX renderer used in tests
	var tex_renderer = new LatexRenderer

	# Render the `md` string as LaTeX format
	fun md_to_tex(md: String): String do
		var node = parse_md(md)
		return tex_renderer.render(node)
	end
end

class TestLatexRendering
	super TestMarkdownLatex
	test

	fun after_test is after do
		tex_renderer.wrap_document = false
		tex_renderer.use_listings = false
	end

	fun test_document_wrapper is test do
		var md = """
This example needs a document wrapper.
"""

		var tex = """
\\documentclass[letter,10pt]{article}

\\usepackage[utf8]{inputenc}
\\usepackage{hyperref}
\\usepackage{graphicx}
\\usepackage{ulem}

\\begin{document}

This example needs a document wrapper.

\\end{document}
"""
		tex_renderer.wrap_document = true
		assert md_to_tex(md) == tex
	end

	fun test_atx_headings is test do
		var md = """
# Title 1
## Title 2
### Title 3
#### Title 4
##### Title 5
###### Title 6
"""
		var tex = """
\\section{Title 1}

\\subsection{Title 2}

\\subsubsection{Title 3}

\\paragraph{Title 4}

\\subparagraph{Title 5}

\\textbf{Title 6}
"""
		assert md_to_tex(md) == tex
	end

	fun test_blockquotes is test do
		var md = """
> this is a
> multiline quote
"""
		var tex = """
\\begin{quote}
  this is a
  multiline quote
\\end{quote}
"""
		assert md_to_tex(md) == tex
	end

	fun test_thematic_breaks is test do
		var md = """
* * *
"""
		var tex = """
\\begin{center}\\rule{3in}{0.4pt}\\end{center}
"""
		assert md_to_tex(md) == tex
	end

	fun test_paragraphs is test do
		var md = """
a paragraph
on two lines

another paragraph
"""
		var tex = """
a paragraph
on two lines

another paragraph
"""
		assert md_to_tex(md) == tex
	end

	fun test_html_block is test do
		var md = """
<p>
	<a href="url">foo</a>
</p>
		"""
		var tex = """
\\begin{verbatim}
<p>
	<a href="url">foo</a>
</p>
\\end{verbatim}
"""
		assert md_to_tex(md) == tex
	end

	fun test_indented_code is test do
		var md = """
    first line
    second line
"""
		var tex = """
\\begin{verbatim}
first line
second line
\\end{verbatim}
"""
		assert md_to_tex(md) == tex
	end

	fun test_indented_code_with_listings is test do
		var md = """
    first line
    second line
"""
		var tex = """
\\begin{lstlisting}
first line
second line
\\end{lstlisting}
"""
		tex_renderer.use_listings = true
		assert md_to_tex(md) == tex
	end

	fun test_fenced_code is test do
		var md = """
~~~
first line
second line
~~~
"""
		var tex = """
\\begin{verbatim}
first line
second line
\\end{verbatim}
"""
		assert md_to_tex(md) == tex
	end

	fun test_fenced_code_with_listings is test do
		var md = """
~~~
first line
second line
~~~
"""
		var tex = """
\\begin{lstlisting}
first line
second line
\\end{lstlisting}
"""
		tex_renderer.use_listings = true
		assert md_to_tex(md) == tex
	end

	fun test_fenced_code_with_listings_and_language is test do
		var md = """
~~~c
first line
second line
~~~
"""
		var tex = """
\\begin{lstlisting}[language=c]
first line
second line
\\end{lstlisting}
"""
		tex_renderer.use_listings = true
		assert md_to_tex(md) == tex
	end

	fun test_list_ordered is test do
		var md = """
1) item 1
2) item 2
"""
		var tex = """
\\begin{enumerate}
  \\item
    item 1
  \\item
    item 2
\\end{enumerate}
"""
		assert md_to_tex(md) == tex
	end

	fun test_list_ordered_with_starting_number is test do
		var md = """
4) item 1
5) item 2
"""
		var tex = """
\\begin{enumerate}
  \\setcounter{enumi}{4}
  \\item
    item 1
  \\item
    item 2
\\end{enumerate}
"""
		assert md_to_tex(md) == tex
	end

	fun test_list_unordered is test do
		var md = """
* item 1
* item 2
"""
		var tex = """
\\begin{itemize}
  \\item
    item 1
  \\item
    item 2
\\end{itemize}
"""
		assert md_to_tex(md) == tex
	end

	fun test_list_nested is test do
		var md = """
* item 1
* item 2
   1) item 3
   2) item 4
"""
		var tex = """
\\begin{itemize}
  \\item
    item 1
  \\item
    item 2
    \\begin{enumerate}
      \\item
        item 3
      \\item
        item 4
    \\end{enumerate}
\\end{itemize}
"""
		assert md_to_tex(md) == tex
	end

	fun test_ordered_list_nested is test do
		var md = """
4) item 1
5) item 2

   4) item 3
   5) item 4

      4) item 3
      5) item 4

         4) item 3
         5) item 4
"""
		var tex = """
\\begin{enumerate}
  \\setcounter{enumi}{4}
  \\item
    item 1
  \\item
    item 2
    \\begin{enumerate}
      \\setcounter{enumii}{4}
      \\item
        item 3
      \\item
        item 4
        \\begin{enumerate}
          \\setcounter{enumiii}{4}
          \\item
            item 3
          \\item
            item 4
            \\begin{enumerate}
              \\setcounter{enumiv}{4}
              \\item
                item 3
              \\item
                item 4
            \\end{enumerate}
        \\end{enumerate}
    \\end{enumerate}
\\end{enumerate}
"""
		assert md_to_tex(md) == tex
	end

	fun test_list_and_blockquote is test do
		var md = """
* item 1
* item 2
   > quote 1
   > quote 2
"""
		var tex = """
\\begin{itemize}
  \\item
    item 1
  \\item
    item 2
    \\begin{quote}
      quote 1
      quote 2
    \\end{quote}
\\end{itemize}
"""
		assert md_to_tex(md) == tex
	end

	fun test_blockquote_and_list is test do
		var md = """
> line 1
> line 2
> * item 1
> * item 2
"""
		var tex = """
\\begin{quote}
  line 1
  line 2
  \\begin{itemize}
    \\item
      item 1
    \\item
      item 2
  \\end{itemize}
\\end{quote}
"""
		assert md_to_tex(md) == tex
	end

	fun test_code is test do
		var md = """
An `inline code`.
"""
		var tex = """
An \\texttt{inline code}.
"""
		assert md_to_tex(md) == tex
	end

	fun test_emphasis is test do
		var md = """
An *emphasis* and a **strong emphasis**.
"""
		var tex = """
An \\textit{emphasis} and a \\textbf{strong emphasis}.
"""
		assert md_to_tex(md) == tex
	end

	fun test_autolink is test do
		var md = """
<http://test>
"""
		var tex = """
\\url{http://test}
"""
		assert md_to_tex(md) == tex
	end

	fun test_link is test do
		var md = """
A [link](url/).
"""
		var tex = """
A \\href{url/}{link}.
"""
		assert md_to_tex(md) == tex
	end

	fun test_link_with_title is test do
		var md = """
A [link](url/ "with a title").
"""
		var tex = """
A \\href{url/}{link (with a title)}.
"""
		assert md_to_tex(md) == tex
	end

	fun test_image is test do
		var md = """
![image](url/).
"""
		var tex = """
\\includegraphics{url/}.
"""
		assert md_to_tex(md) == tex
	end

	fun test_softbreak is test do
		var md = """
A soft
break.
"""
		var tex = """
A soft
break.
"""
		assert md_to_tex(md) == tex
	end

	fun test_hardbreak is test do
		var md = """
A hard\\
break.
"""
		var tex = """
A hard
break.
"""
		assert md_to_tex(md) == tex
	end

	fun test_escaped is test do
		var md = """
An escaped \\*.
"""
		var tex = """
An escaped *.
"""
		assert md_to_tex(md) == tex
	end

	fun test_forbidden_chars is test do
		var md = """
%${_><#&}\\
"""
		var tex = """
\\%\\$\\{\\_\\textgreater\\textless\\#\\&\\}\\textbackslash
"""
		assert md_to_tex(md) == tex
	end

	fun test_full_document is test do
		var md = """
# Title

A paragraph.

## Another title

A list:

1. item 1
2. item 2

A code example:

    line 1
	line 2

Another paragraph.
"""
		var tex = """
\\section{Title}

A paragraph.

\\subsection{Another title}

A list:

\\begin{enumerate}
  \\item
    item 1
  \\item
    item 2
\\end{enumerate}

A code example:

\\begin{verbatim}
line 1
line 2
\\end{verbatim}

Another paragraph.
"""
		assert md_to_tex(md) == tex
	end
end
