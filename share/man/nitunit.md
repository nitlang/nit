% NITUNIT(1)

# NAME

Executes the unit tests from Nit source files.

# SYNOPSYS

nitunit [*options*]...

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

`--full`
:   Process also imported modules

`-o`, `--output`
:   Output name (default is 'nitunit.xml')

`--dir`
:   Working directory (default is '.nitunit')

`--no-act`
:   Does not compile and run tests

`-p`, `--pattern`
:   Only run test case with name that match pattern. Examples: 'TestFoo', 'TestFoo*', 'TestFoo::test_foo', 'TestFoo::test_foo*', 'test_foo', 'test_foo*'

`-t`, `--target-file`
:   Specify test suite location.

`--gen-suite`
:   Generate test suite skeleton for a module

`-f`, `--force`
:   Force test generation even if file exists

`--private`
:   Also generate test case for private methods

`--only-show`
:   Only display skeleton, do not write file

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
