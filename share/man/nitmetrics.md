% NITMETRICS(1)

# NAME

Computes various metrics on Nit programs.

# SYNOPSYS

nitmetrics [*options*]...

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

`--all`
:   Compute all metrics

`--mmodules`
:   Compute metrics about mmodules

`--mclasses`
:   Compute metrics about mclasses

`--mendel`
:   Compute mendel metrics

`--inheritance`
:   Compute metrics about inheritance usage

`--refinement`
:   Compute metrics about refinement usage

`--self`
:   Compute metrics about the usage of explicit and implicit self

`--ast`
:   Compute metrics about the usage of nodes and identifiers in the AST

`--nullables`
:   Compute metrics on nullables send

`--static-types`
:   Compute explicit static types metrics

`--tables`
:   Compute tables metrics

`--rta`
:   Compute RTA metrics

`--csv`
:   Export metrics in CSV format

`--generate_hyperdoc`
:   Generate Hyperdoc

`--poset`
:   Complete metrics on posets

`-d`, `--dir`
:   Directory where some statistics files are generated

`--no-colors`
:   Disable colors in console outputs

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
