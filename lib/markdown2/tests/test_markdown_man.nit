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

# Tests for markdown rendering to manpage
module test_markdown_man is test

import test_markdown
import markdown_man_rendering

# Abstract test class that defines the test methods for Man rendering
abstract class TestMarkdownMan
	super TestMarkdown

	# Man renderer used in tests
	var man_renderer = new ManRenderer

	# Render the `md` string as Manpage format
	fun md_to_man(md: String): String do
		var node = parse_md(md)
		return man_renderer.render(node)
	end
end

class TestManRendering
	super TestMarkdownMan
	test

	fun test_headings is test do
		var md = """# title1\n## title2\n### title3\n#### title4\n##### title5\n###### title6\n"""
		var man = """.SH title1\n.SS title2\n.TP\ntitle3\n.TP\ntitle4\n.TP\ntitle5\n.TP\ntitle6\n"""
		assert md_to_man(md) == man
	end

	fun test_bquotes is test do
		var md = """> line 1\n> line 2\n\n> line 3\n>line 4"""
		var man = """.RS\nline 1\nline 2\n.RE\n.RS\nline 3\nline 4\n.RE\n"""
		assert md_to_man(md) == man
	end

	fun test_breaks is test do
		var md = """* * *"""
		var man = """***\n"""
		assert md_to_man(md) == man
	end

	fun test_indented_code is test do
		var md = """\tline 1\n\tline 2\n"""
		var man = """.RS\n.nf\n\\f[C]\nline\\ 1\nline\\ 2\n\\f[]\n.fi\n.RE\n"""
		assert md_to_man(md) == man
	end

	fun test_fenced_code is test do
		var md = """~~~\nline 1\nline 2\n~~~\n"""
		var man = """.RS\n.nf\n\\f[C]\nline\\ 1\nline\\ 2\n\\f[]\n.fi\n.RE\n"""
		assert md_to_man(md) == man
	end

	fun test_escaped_code is test do
		var md = """\tline - 1\n\tline - 2\n"""
		var man = """.RS\n.nf\n\\f[C]\nline\\ \\-\\ 1\nline\\ \\-\\ 2\n\\f[]\n.fi\n.RE\n"""
		assert md_to_man(md) == man
	end

	fun test_unordered_list is test do
		var md = """* line 1\n* line 2\n"""
		var man = """.RS\n.IP \\[bu] 3\nline 1\n.IP \\[bu] 3\nline 2\n.RE\n"""
		assert md_to_man(md) == man
	end

	fun test_ordered_list is test do
		var md = """2) line 1\n3) line 2\n"""
		var man = """.RS\n.IP "2." 3\nline 1\n.IP "3." 3\nline 2\n.RE\n"""
		assert md_to_man(md) == man
	end

	fun test_paragraph is test do
		var md = """line 1\nline 2\n\nline 3\nline 4\n"""
		var man = """\nline 1\nline 2\n\nline 3\nline 4\n"""
		assert md_to_man(md) == man
	end

	fun test_escaped_text is test do
		var md = """foo - bar\n"""
		var man = """\nfoo \\- bar\n"""
		assert md_to_man(md) == man
	end

	fun test_inline_code is test do
		var md = """`foo - bar`\n"""
		var man = """\n\\f[C]foo\\ \\-\\ bar\\f[]\n"""
		assert md_to_man(md) == man
	end

	fun test_emphasis is test do
		var md = """*foo*\n"""
		var man = """\n\\f[I]foo\\f[]\n"""
		assert md_to_man(md) == man
	end

	fun test_strong_emphasis is test do
		var md = """**foo**\n"""
		var man = """\n\\f[B]foo\\f[]\n"""
		assert md_to_man(md) == man
	end

	fun test_link is test do
		var md = """[foo](url "title")\n"""
		var man = """\nfoo (url title)\n"""
		assert md_to_man(md) == man
	end

	fun test_image is test do
		var md = """![foo](url "title")\n"""
		var man = """\nfoo (url title)\n"""
		assert md_to_man(md) == man
	end

	fun test_full_document is test do

		var md = """
# NAME

nitdoc - generates HTML pages of API documentation from Nit source files.

# SYNOPSIS

nitdoc [*options*]... FILE...

# DESCRIPTION

`nitdoc` takes one or more modules and generate HTML pages of API documentation for these modules and their imported modules.

The documentation is extracted from the comments found above the definition of modules, classes, and properties.

Internally, `nitdoc` relies on the presence of the `dot` command from the [graphviz] project.
If the dot program is not present or not found, no image of hierarchies are generated.
See option `--no-dot`.

The documentation of the Nit [standard library] is generated with this tool.

  [graphviz]: http://www.graphviz.org
  [standard library]: http://nitlanguage.org/doc/stdlib

# DOCUMENTATION FORMAT

The format of the documentation is a dialect of [markdown] that allows GitHub fences (`~~~`).

Code blocks are interpreted as snippets of Nit programs and intended to be used as examples of code.
When these code snippets are valid, executable and contain at least and `assert` clause, they could be automatically executed and verified.
See `nitunit(1)` for details.

  [markdown]: http://daringfireball.net/projects/markdown

# OPTIONS

### `-d`, `--dir`
Output directory.

Where the HTML files are generated.

By default, the directory is named `doc`.

### `--source`
Format to link source code.

The format string is used to generated links to some parts of the source-code.
Use `%f` for filename, `%l` for first line, and `%L` for last line.

For instance, the [standard library] use the following value to link to files in GitHub:

    "https://github.com/nitlang/nit/blob/$(git rev-parse HEAD)/%f#L%l-%L"

Here, the `git rev-parse HEAD` is used to link to the current snapshot revision of the file.

### `--no-attributes`
Ignore the attributes.

Note: In Nit, attributes are private. Therefore, this option is only useful
when combined with `--private`.

### `--no-dot`
Do not generate graphs with graphviz.

### `--private`
Also generate private API.

## CUSTOMIZATION

### `--share-dir`
Directory containing tools assets.

By default `$NIT_DIR/share/nitdoc/` is used.

### `--shareurl`
Use shareurl instead of copy shared files.

By default, assets from the sharedir a copied into the output directory and referred with a relative path in the generated files.
With this option, the assets are not copied and the given URL of path is used in the generated files to locate assets.

### `--custom-title`
Custom title for homepage.

### `--custom-footer-text`
Custom footer text.

### `--custom-overview-text`
Custom intro text for homepage.

### `--custom-brand`
Custom link to external site.

## SERVICES

### `--github-upstream`
Git branch where edited commits will be pulled into (ex: user:repo:branch).

### `--github-base-sha1`
Git sha1 of base commit used to create pull request.

### `--github-gitdir`
Git working directory used to resolve path name (ex: /home/me/myproject/).

### `--piwik-tracker`
Piwik tracker URL (ex: `nitlanguage.org/piwik/`).

### `--piwik-site-id`
Piwik site ID.

## TESTING

### `--test`
Print test data (metrics and structure).

### `--no-render`
Do not render HTML files.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
"""

		var man = """
.SH NAME

nitdoc \\- generates HTML pages of API documentation from Nit source files.
.SH SYNOPSIS

nitdoc [\\f[I]options\\f[]]... FILE...
.SH DESCRIPTION

\\f[C]nitdoc\\f[] takes one or more modules and generate HTML pages of API documentation for these modules and their imported modules.

The documentation is extracted from the comments found above the definition of modules, classes, and properties.

Internally, \\f[C]nitdoc\\f[] relies on the presence of the \\f[C]dot\\f[] command from the graphviz (http://www.graphviz.org) project.
If the dot program is not present or not found, no image of hierarchies are generated.
See option \\f[C]\\-\\-no\\-dot\\f[].

The documentation of the Nit standard library (http://nitlanguage.org/doc/stdlib) is generated with this tool.
.SH DOCUMENTATION FORMAT

The format of the documentation is a dialect of markdown (http://daringfireball.net/projects/markdown) that allows GitHub fences (\\f[C]~~~\\f[]).

Code blocks are interpreted as snippets of Nit programs and intended to be used as examples of code.
When these code snippets are valid, executable and contain at least and \\f[C]assert\\f[] clause, they could be automatically executed and verified.
See \\f[C]nitunit(1)\\f[] for details.
.SH OPTIONS
.TP
\\f[C]\\-d\\f[], \\f[C]\\-\\-dir\\f[]

Output directory.

Where the HTML files are generated.

By default, the directory is named \\f[C]doc\\f[].
.TP
\\f[C]\\-\\-source\\f[]

Format to link source code.

The format string is used to generated links to some parts of the source\\-code.
Use \\f[C]%f\\f[] for filename, \\f[C]%l\\f[] for first line, and \\f[C]%L\\f[] for last line.

For instance, the standard library (http://nitlanguage.org/doc/stdlib) use the following value to link to files in GitHub:
.RS
.nf
\\f[C]
"https://github.com/nitlang/nit/blob/$(git\\ rev\\-parse\\ HEAD)/%f#L%l\\-%L"
\\f[]
.fi
.RE

Here, the \\f[C]git\\ rev\\-parse\\ HEAD\\f[] is used to link to the current snapshot revision of the file.
.TP
\\f[C]\\-\\-no\\-attributes\\f[]

Ignore the attributes.

Note: In Nit, attributes are private. Therefore, this option is only useful
when combined with \\f[C]\\-\\-private\\f[].
.TP
\\f[C]\\-\\-no\\-dot\\f[]

Do not generate graphs with graphviz.
.TP
\\f[C]\\-\\-private\\f[]

Also generate private API.
.SS CUSTOMIZATION
.TP
\\f[C]\\-\\-share\\-dir\\f[]

Directory containing tools assets.

By default \\f[C]$NIT_DIR/share/nitdoc/\\f[] is used.
.TP
\\f[C]\\-\\-shareurl\\f[]

Use shareurl instead of copy shared files.

By default, assets from the sharedir a copied into the output directory and referred with a relative path in the generated files.
With this option, the assets are not copied and the given URL of path is used in the generated files to locate assets.
.TP
\\f[C]\\-\\-custom\\-title\\f[]

Custom title for homepage.
.TP
\\f[C]\\-\\-custom\\-footer\\-text\\f[]

Custom footer text.
.TP
\\f[C]\\-\\-custom\\-overview\\-text\\f[]

Custom intro text for homepage.
.TP
\\f[C]\\-\\-custom\\-brand\\f[]

Custom link to external site.
.SS SERVICES
.TP
\\f[C]\\-\\-github\\-upstream\\f[]

Git branch where edited commits will be pulled into (ex: user:repo:branch).
.TP
\\f[C]\\-\\-github\\-base\\-sha1\\f[]

Git sha1 of base commit used to create pull request.
.TP
\\f[C]\\-\\-github\\-gitdir\\f[]

Git working directory used to resolve path name (ex: /home/me/myproject/).
.TP
\\f[C]\\-\\-piwik\\-tracker\\f[]

Piwik tracker URL (ex: \\f[C]nitlanguage.org/piwik/\\f[]).
.TP
\\f[C]\\-\\-piwik\\-site\\-id\\f[]

Piwik site ID.
.SS TESTING
.TP
\\f[C]\\-\\-test\\f[]

Print test data (metrics and structure).
.TP
\\f[C]\\-\\-no\\-render\\f[]

Do not render HTML files.
.SH SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from http://nitlanguage.org (http://nitlanguage.org)
"""
		assert md_to_man(md) == man
	end
end
