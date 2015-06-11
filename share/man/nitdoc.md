% NITDOC(1)

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
See niunit(1) for details.

  [markdown]: http://daringfireball.net/projects/markdown

# OPTIONS

`-d`, `--dir`
:   output directory.

    Where the HTML files are generated.

    By default, the directory is named `doc`.

`--source`
:   Format to link source code.

    The format string is used to generated links to some parts of the source-code.
    Use `%f` for filename, `%l` for first line, and `%L` for last line.

    For instance, the [standard library] use the following value to link to files in GitHub:

        "https://github.com/privat/nit/blob/$(git rev-parse HEAD)/%f#L%l-%L"

    Here, the `git rev-parse HEAD` is used to link to the current snapshot revision of the file.

`--no-attribute`
:   Ignore the attributes.

    Note: In Nit, attributes are private. Therefore, this option is only useful
    when combined with `--private`.

`--no-dot`
:   do not generate graphs with graphviz.

`--private`
:   also generate private API.

## CUSTOMIZATION

`--sharedir`
:   directory containing nitdoc assets.

    By default `$NIT_DIR/share/nitdoc/` is used.

`--shareurl`
:   use shareurl instead of copy shared files.

    By default, assets from the sharedir a copied into the output directory and refered with a relative path in the generated files.
    Whith this option, the assets are not copied and the given URL of path is used in the generated files to locate assets.

`--custom-title`
:   custom title for homepage.

`--custom-footer-text`
:   custom footer text.

`--custom-overview-text`
:   custom intro text for homepage

`--custom-brand`
:   custom link to external site

## SERVICES

`--github-upstream`
:   Git branch where edited commits will be pulled into (ex: user:repo:branch)

`--github-base-sha1`
:   Git sha1 of base commit used to create pull request

`--github-gitdir`
:   Git working directory used to resolve path name (ex: /home/me/myproject/)

`--piwik-tracker`
:   Piwik tracker URL (ex: `"nitlanguage.org/piwik/"`)

`--piwik-site-id`
:   Piwik site ID

## TESTING

`--test`
:   Only print the pages structure. Nothing is generated.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
