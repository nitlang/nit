% NITPRETTY(1)

# NAME

Pretty print Nit code from Nit source files.

# SYNOPSYS

nitpretty [*options*]...

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

`--dir`
:   Working directory (default is '.nitpretty')

`-o`, `--output`
:   Output name (default is pretty.nit)

`--diff`
:   Show diff between source and output

`--meld`
:   Show diff between source and output using meld

`--check`
:   Check format of Nit source files

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
