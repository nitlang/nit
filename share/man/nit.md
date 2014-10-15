% NIT(1)

# NAME

Interprets and debugs Nit programs.

# SYNOPSYS

nit [*options*]...

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

`--discover-call-trace`
:   Trace calls of the first invocation of a method

`-d`
:   Launches the target program with the debugger attached to it

`-c`
:   Launches the target program with the interpreter, such as when the program fails, the debugging prompt is summoned

`--socket`
:   Launches the target program with raw output on the network via sockets

`--websocket`
:   Launches the target program with output on the network via websockets

`--port`
:   Sets the debug port (Defaults to 22125) - Must be contained between 0 and 65535

`-o`
:   compatibility (does noting)

`-m`
:   Additionals module to min-in

`-e`
:   Specifies the program from command-line

`-n`
:   Repeatedly run the program for each line in file-name arguments

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
