% NITDOC(1)

# NAME

Generates HTML pages of API documentation from Nit source files.

# SYNOPSYS

nitdoc [*options*]...

# OPTIONS

`-W`, `--warn`
:   Show more warnings

`-w`, `--warning`
:   Show/hide a specific warning

`-q`, `--quiet`
:   Do not show warnings

`--stop-on-first-error`
:   Stop on first error

`--no-color`
:   Do not use color to display errors and warnings

`--log`
:   Generate various log files

`--log-dir`
:   Directory where to generate log files

`-h`, `-?`, `--help`
:   Show Help (This screen)

`--version`
:   Show version and exit

`--set-dummy-tool`
:   Set toolname and version to DUMMY. Useful for testing

`-v`, `--verbose`
:   Verbose

`--bash-completion`
:   Generate bash_completion file for this program

`--stub-man`
:   Generate a stub manpage in pandoc markdown format

`--disable-phase`
:   DEBUG: Disable a specific phase; use `list` to get the list.

`-I`, `--path`
:   Set include path for loaders (may be used more than once)

`--only-parse`
:   Only proceed to parse step of loaders

`--only-metamodel`
:   Stop after meta-model processing

`--ignore-visibility`
:   Do not check, and produce errors, on visibility issues.

`-d`, `--dir`
:   output directory

`--source`
:   link for source (%f for filename, %l for first line, %L for last line)

`--sharedir`
:   directory containing nitdoc assets

`--shareurl`
:   use shareurl instead of copy shared files

`--no-dot`
:   do not generate graphes with graphviz

`--private`
:   also generate private API

`--custom-title`
:   custom title for homepage

`--custom-footer-text`
:   custom footer text

`--custom-overview-text`
:   custom intro text for homepage

`--custom-brand`
:   custom link to external site

`--github-upstream`
:   Git branch where edited commits will be pulled into (ex: user:repo:branch)

`--github-base-sha1`
:   Git sha1 of base commit used to create pull request

`--github-gitdir`
:   Git working directory used to resolve path name (ex: /home/me/myproject/)

`--piwik-tracker`
:   Piwik tracker URL (ex: nitlanguage.org/piwik/)

`--piwik-site-id`
:   Piwik site ID

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
