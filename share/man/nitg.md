% NITG(1)

# NAME

Compiles Nit programs.

# SYNOPSYS

nitg [*options*]...

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

`-o`, `--output`
:   Output file

`--dir`
:   Output directory

`--no-cc`
:   Do not invoke C compiler

`--no-main`
:   Do not generate main entry point

`--make-flags`
:   Additional options to make

`--compile-dir`
:   Directory used to generate temporary files

`--hardening`
:   Generate contracts in the C code against bugs in the compiler

`--no-shortcut-range`
:   Always insantiate a range and its iterator on 'for' loops

`--no-check-covariance`
:   Disable type tests of covariant parameters (dangerous)

`--no-check-attr-isset`
:   Disable isset tests before each attribute access (dangerous)

`--no-check-assert`
:   Disable the evaluation of explicit 'assert' and 'as' (dangerous)

`--no-check-autocast`
:   Disable implicit casts on unsafe expression usage (dangerous)

`--no-check-null`
:   Disable tests of null receiver (dangerous)

`--no-check-all`
:   Disable all tests (dangerous)

`--typing-test-metrics`
:   Enable static and dynamic count of all type tests

`--invocation-metrics`
:   Enable static and dynamic count of all method invocations

`--isset-checks-metrics`
:   Enable static and dynamic count of isset checks before attributes access

`--stacktrace`
:   Control the generation of stack traces

`--no-gcc-directive`
:   Disable a advanced gcc directives for optimization

`--release`
:   Compile in release mode and finalize application

`--global`
:   Use global compilation

`--separate`
:   Use separate compilation

`--no-inline-intern`
:   Do not inline call to intern methods

`--no-union-attribute`
:   Put primitive attibutes in a box instead of an union

`--no-shortcut-equal`
:   Always call == in a polymorphic way

`--inline-coloring-numbers`
:   Inline colors and ids (semi-global)

`--inline-some-methods`
:   Allow the separate compiler to inline some methods (semi-global)

`--direct-call-monomorph`
:   Allow the separate compiler to direct call monomorph sites (semi-global)

`--skip-dead-methods`
:   Do not compile dead methods (semi-global)

`--semi-global`
:   Enable all semi-global optimizations

`--colo-dead-methods`
:   Force colorization of dead methods

`--tables-metrics`
:   Enable static size measuring of tables used for vft, typing and resolution

`--erasure`
:   Erase generic types

`--no-check-erasure-cast`
:   Disable implicit casts on unsafe return with erasure-typing policy (dangerous)

`--rta`
:   Activate RTA (implicit with --global and --separate)

`-m`
:   Additionals module to min-in

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
