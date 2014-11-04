% NITG(1)

# NAME

nitg - compiles Nit programs.


# SYNOPSIS

nitg [*options*] FILE...


# DESCRIPTION

nitg is the current official Nit compiler.
It takes the main module of a Nit program as argument and produces an executable file.

By default, the generated executables are produced in the current directory.
(see `--dir` for details.)

Internally, nitg rely on the presence of a C compiler. Usually gcc (but nitg was successfully tested with clang).
A compilation directory is therefore created and (re-)used.
By default, the compilation directory is named `.nit_compile`.
(see `--compile-dir` for details.)

Currently, because Nit is still in heavy development, the compilation directory is not cleaned after the compilation.

By default, the compilation process tries to have a good trade-off between the compilation time and the performance of produced executables.
To produce more optimized executables, the current best option is `--semi-global`.

To improve the compilation time and simplify the compilation of multiple programs, more than one file can be given.
Each one will be compiled into a distinct executable.

    $ nitg prog1.nit prog2.nit

To combine files into a single program, use the `-m` option.

    $ nitg prog1.nit -m other_module.nit

nitg can produces executables for various platforms when specific modules are used.
Currently, android, pnacl and emscripten are supported.
See the documentation of these specific modules for details.


# OPTIONS

## MESSAGES

`-W`, `--warn`
:   Show additional warnings (advices).

    By default, only important warnings are displayed.
    May be overridden by `-w`.

    Important warnings are displayed by default. A warning is considered important when:

     * There is a simple correction.
     * There is no reason to let the code this way.
     * There is always a real issue (no false positive).

    Other warnings, called advices, are not displayed by default to avoid filling the terminal with
    unwanted information.
    A warning is considered an advice when:

     * The correction could be complex. e.g. require a refactorisation or an API change.
     * The correction cannot be done. e.g. Code that use a deprecated API for some compatibility reason.
     * There is not a real issue (false positive). Note that this should be unlikely.
     * Transitional: While a real important warning, it fires a lot in current code, so a transition is needed
       in order to let people fix them before promoting the advice to an important warning.

`-w`, `--warning`
:   Show/hide a specific warning.

    Each type of warning can be individually displayed or hidden.
    The `-w` option takes the name of a warning (displayed at the end of the warning message, between parentheses) to activate it;
    and "no-{name}" to disable it.
    It has precedence over -q and -W.
    Multiple `-w` can be given.

    To show only `missing-doc` warnings in standard"

        $ nitg -q -w missing-doc standard

    To show all warnings and advices, except `missing-doc`:

        $ nitg -W -w no-missing-doc standard

    To show important warnings except `useless-type-test`, but not advice except `missing-doc`:

        $ nitg -w missing-doc -w no-useless-type-test standard

`-q`, `--quiet`
:   Do not show warnings.
    May be overridden by `-w`

`--stop-on-first-error`
:   Just display the first encountered error then stop.

    By default, nitg tries to detect and display more than one error before aborting the compilation.

`--no-color`
:   Do not use color to display errors and warnings.

    Also, do not echo the line.
    This options is mainly used by scripts and tools that need parsable error messages.

`-v`, `--verbose`
:   Additional messages from the tool.
    Multiple `-v` can be given to improve the verbosity.

    With one `-v`, there is constant number of lines.
    With two `-v`, the number of lines is proportional to the number of modules.
    With three `-v`, the number of lines is proportional to the number of definition of classes.
    With four `-v`, the number of lines is proportional to the number of definition of properties.

`--log`
:   Generate various log files.
    Currently unused.

`--log-dir`
:   Directory where to generate log files.
    Currently unused.


`-h`, `-?`, `--help`
:   Show Help (the list of options).

`--version`
:   Show version and exit.


## PATHS

`-I`, `--path`
:   Add an additional include path.

    This option is used to indicate an additional path of a directory containing Nit libraries.

    The path added with `-I` are searched before those added by the environment variable `NIT_PATH`.

    May be used more than once.

`-o`, `--output`
:   Output executable name.

    Indicates the path and name of the produced executable.

    Note: it is better to use `--dir` if only the directory is important.
    This way, the platform extension will be correctly set.

    `-o` is not usable if multiple programs are compiled at once.

`--dir`
:   Output directory.

    Produce the executables in the given directory instead of the current directory.

`--nit-dir`
:   Base directory of the Nit installation.

    Has precedence over the environment variable `NIT_DIR`.

## COMPILATION

`--compile-dir`
:   Directory used to generate temporary files.

    By default, it is named `.nit_compile`.

`--no-cc`
:   Do not invoke the C compiler.

    Files in the compilation directory are generated but the C compiler is not invoked.

    This option is mainly used to produce C files distributable then compilable on system that do not have a Nit compiler (e.g. embedded system).
    In this case, it is suggested to also use the options `--dir`, `--compile-dir` and `--semi-global`.

        $ nitg examples/hello_world.nit --no-cc --dir hello --compile-dir hello --semi-global

    Will produce a `hello` directory that contains the required C files to finish the compilation.
    Only the C files required for the program are generated.
    The final binary will be generated in the same directory.

`-m`
:   Additional module to mix-in.

    Additional modules are imported and refine the main module of the program.
    This has basically the same effect than implementing a specific module that imports the main module of the program then each one of the mix-in modules.
    May be used more than once.

    This is option is used to weave additional behaviors to existing programs.
    Modules designated to bring features to programs by refining basic or specialized services, without any intervention of the main program, are good candidates to be used with the `-m` option.
    E.g. `hash_debug`.

    An other usage of the `-m` option is to compile program to a specific platform. E.g. `emscripten`  or `android`.

    A last usage is to develop programs as product lines with a main basic module (vanilla) and specific distinct features as flavor modules, then to combine them at compile-time.

        $ nitg prog_vanilla.nit -m feature_chocolate.nit -m feature_cherry.nit

`-D`, `--define`
:   Define a specific property.

    The `-D` option allows to refine a top-level method at compile-time.
    This has basically the same effect than implementing a specific module that imports the main module of the program and refines the designated methods.

    The designated method must be top-level function with no parameters that returns a Bool, an Int or a String.

    The argument of the `-D` option is "{name}={value}".
    For Bool, the argument can also be just "{name}", in this case, the value is considered to be `true`.

        $ nitg foo.nit -D prefix=/opt/foo -D port=8080 -D with_ssl

`--release`
:   Compile in release mode and finalize application.

    Currently, this only affect the android platform.

## COMPILATION MODES

`nitg` includes distinct compilation modes.

`--separate`
:   Use separate compilation (default mode).

    In separate compilation, modules are compiled independently of their programs.
    This makes the recompilation of programs faster since only the modified files need to be recompiled.

`--global`
:   Use global compilation.

    The produced executables may become huge and the compilation time is prohibitive.
    But sometime, they are faster.

    In practice, `--semi-global` produces nearly as fast but smaller executables.

`--erasure`
:   Erase generic types.

    Like `--separate` but use an erasure dynamic typing policy for generics and virtual types.
    Usually you do not need this, even if you understand the previous sentence.


## SEMI-GLOBAL OPTIMIZATIONS

In `--separate` and in `--erasure` modes, some optimization can be gained by relaxing the constraint about
the independence on programs.

Therefore, with these options, the produced executables may be faster and smaller but the recompilation time
will increase.

`--semi-global`
:   Enable all semi-global optimizations.

`--rta`
:   Activate RTA (Rapid Type Analysis).

    This option only make sense in `--erasure` to enable some semi-global optimizations.

    RTA is implicitly enabled in `--separate` and `--global`.

`--inline-coloring-numbers`
:   Inline colors and ids (semi-global).

`--inline-some-methods`
:   Allow the separate compiler to inline some methods (semi-global).
    Need `--rta`.

`--direct-call-monomorph`
:   Allow the separate compiler to direct call monomorphic sites (semi-global).
    Need `--rta`.

`--skip-dead-methods`
:   Do not compile dead methods (semi-global).
    Need `--rta`.


## DANGEROUS OPTIMIZATIONS

The following optimizations disable runtime checks.
It means that correct (non-buggy) programs may be slightly faster.
It also means that incorrect (buggy) programs may have unspecified behaviors
(e.g. formatting your hard drive or killing your cat).

In fact, these options are mainly used to bench the compilation results.

`--no-check-all`
:   Disable all tests (dangerous).

`--no-check-covariance`
:   Disable type tests of covariant parameters (dangerous).

`--no-check-attr-isset`
:   Disable isset tests before each attribute access (dangerous).

`--no-check-assert`
:   Disable the evaluation of explicit `assert` and `as` (dangerous).

`--no-check-autocast`
:   Disable implicit casts on unsafe expression usage (dangerous).

`--no-check-null`
:   Disable tests of null receiver (dangerous).

`--no-check-erasure-cast`
:   Disable implicit casts on unsafe return with erasure-typing policy (dangerous).


## UNOPTIMIZATIONS

These options are used to debug or to bench the compilation results.
Usually you do not need them since they make the generated code slower.

`--hardening`
:   Generate contracts in the C code against bugs in the compiler.

`--no-shortcut-range`
:   Always instantiate a range and its iterator on 'for' loops.

`--no-union-attribute`
:   Put primitive attributes in a box instead of an union.

`--no-shortcut-equal`
:   Always call == in a polymorphic way.

`--no-inline-intern`
:   Do not inline call to intern methods.

`--colo-dead-methods`
:   Force colorization of dead methods.

`--no-gcc-directive`
:   Disable advanced gcc directives for optimization.


## INTERNAL OPTIONS

These options can be used to control the fine behavior of the tool.
They are useless for a normal user.

`--disable-phase`
:   Disable a specific phase; use `list` to get the list.

`--only-parse`
:   Only proceed to parse files.

`--only-metamodel`
:   Stop after meta-model processing.

`--ignore-visibility`
:   Do not check, and produce errors, on visibility issues.

`--no-main`
:   Do not generate main entry point.

`--stacktrace`
:   Control the generation of stack traces.

`--max-c-lines`
:   Maximum number of lines in generated C files. Use 0 for unlimited.

`--group-c-files`
:   Group all generated code in the same series of files.

`--make-flags`
:   Additional options to the `make` command.

          $ nitg foo.nit --make-flags 'CC=clang' --make-flags 'CFLAGS="-O0 -g"'

`--typing-test-metrics`
:   Enable static and dynamic count of all type tests.

`--invocation-metrics`
:   Enable static and dynamic count of all method invocations.

`--isset-checks-metrics`
:   Enable static and dynamic count of isset checks before attributes access.

`--tables-metrics`
:   Enable static size measuring of tables used for vft, typing and resolution.

`--set-dummy-tool`
:   Set toolname and version to DUMMY. Useful for testing.

`--bash-completion`
:   Generate bash_completion file for this program.

`--stub-man`
:   Generate a stub manpage in pandoc markdown format.


# ENVIRONMENT VARIABLES

`NIT_DIR`
:   Base directory of the Nit installation.

    When the `NIT_DIR` environment variable is set then it specifies the path of the Nit install directory.

    This directory is used to locate binaries, shared files and the common libraries.

    When unset, the directory is guessed according to some heuristic.

    The `--nit-dir` option also set the base directory of the Nit installation but has precedence.

`NIT_PATH`
:   Additional include paths.

    The `NIT_PATH` environment variable contains paths of directories containing Nit libraries.
    Each path is separated with a column (`:`).

    The `-I` option also add additional paths.

`NIT_GC_OPTION`
:   Runtime control of the garbage collector.

    The behavior of the GC of the executables produced by nitg can be tuned with this environment variable.

    The environment variable is used when programs are executed, not when they are compiled.
    Thus, you do not need to recompile programs in order to tweak their GC options.

    Available values are:

    * boehm: use the Boehm-Demers-Weiser's conservative garbage collector (default).
    * malloc: disable the GC and just use `malloc` without doing any `free`.
    * large: disable the GC and just allocate a large memory area to use for all instantiation.
    * help: show the list of available options.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
