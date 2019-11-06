# NAME

nitc - compiles Nit programs.


# SYNOPSIS

nitc [*options*] FILE...

nitc [*options*] --run FILE [ARG]...


# DESCRIPTION

nitc is the current official Nit compiler.
It takes the main module of a Nit program as argument and produces an executable file.

By default, the generated executables are produced in the current directory.
(see `--dir` for details.)

Internally, nitc rely on the presence of a C compiler. Usually gcc (but nitc was successfully tested with clang).
A compilation directory is therefore created and (re-)used.
By default, the compilation directory is named `nit_compile` and is removed after the compilation.
(see `--compile-dir` for details.)

Currently, because Nit is still in heavy development, the compilation directory is not cleaned after the compilation.

By default, the compilation process tries to have a good trade-off between the compilation time and the performance of produced executables.
To produce more optimized executables, the current best option is `--semi-global`.

To improve the compilation time and simplify the compilation of multiple programs, more than one file can be given.
Each one will be compiled into a distinct executable.

    $ nitc prog1.nit prog2.nit

To combine files into a single program, use the `-m` option.

    $ nitc prog1.nit -m other_module.nit

nitc can produces executables for various platforms when specific modules are used.
Currently, android and emscripten are supported.
See the documentation of these specific modules for details.


# OPTIONS

## MESSAGES

### `-W`, `--warn`
Show additional warnings (advices).

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

### `-w`, `--warning`
Show/hide a specific warning.

Each type of warning can be individually displayed or hidden.
The `-w` option takes the name of a warning (displayed at the end of the warning message, between parentheses) to activate it;
and "no-{name}" to disable it.
It has precedence over -q and -W.
Multiple `-w` can be given.

To show only `missing-doc` warnings in standard"

    $ nitc -q -w missing-doc standard

To show all warnings and advices, except `missing-doc`:

    $ nitc -W -w no-missing-doc standard

To show important warnings except `useless-type-test`, but not advice except `missing-doc`:

    $ nitc -w missing-doc -w no-useless-type-test standard

### `-q`, `--quiet`
Do not show warnings.
May be overridden by `-w`

### `--stop-on-first-error`
Just display the first encountered error then stop.

By default, nitc tries to detect and display more than one error before aborting the compilation.

### `--no-color`
Do not use color to display errors and warnings.

Also, do not echo the line.
This options is mainly used by scripts and tools that need parsable error messages.

### `-v`, `--verbose`
Additional messages from the tool.
Multiple `-v` can be given to improve the verbosity.

With one `-v`, there is constant number of lines.
With two `-v`, the number of lines is proportional to the number of modules.
With three `-v`, the number of lines is proportional to the number of definition of classes.
With four `-v`, the number of lines is proportional to the number of definition of properties.

### `--log`
Generate various log files.

The tool will generate some files in the logging directory (see `--log-dir`).
These files are intended to the advanced user and the developers of the tools.

### `--log-dir`
Directory where to generate log files.

By default the directory is called `logs` in the working directory.


### `-h`, `-?`, `--help`
Show Help (the list of options).

### `--version`
Show version and exit.


## PATHS

### `-I`, `--path`
Add an additional include path.

This option is used to indicate an additional path of a directory containing Nit libraries.

The path added with `-I` are searched before those added by the environment variable `NIT_PATH`.

May be used more than once.

### `-o`, `--output`
Filename of the generated executable.

Indicates the path and name of the produced executable.

Note: it is better to use `--dir` if only the directory is important.
This way, the platform extension will be correctly set.

`-o` is not usable if multiple programs are compiled at once.

### `--dir`
Output directory.

Produce the executables in the given directory instead of the current directory.

### `--nit-dir`
Base directory of the Nit installation.

Has precedence over the environment variable `NIT_DIR`.

## COMPILATION

### `--run`
Execute the binary after the compilation.

The binary is generated as expected then it is executed directly.
After the execution, the binary is not removed.

When `--run` is used, the first argument is the program to compile, the rest of the arguments are the arguments of the program.
Note that you MUST use `--` before the program arguments if one of them is an option starting with a `-`.

~~~bash
$ nitc --run foo.nit arg       # compile foo.nit, then executes `./foo arg`
$ nitc --run foo.nit arg -W    # compile foo.nit with warnings, then executes `./foo arg`
$ nitc --run foo.nit -- arg -W # compile foo.nit, then executes `./foo arg -W`
~~~

### `--compile-dir`
Directory used to generate temporary files.

By default, it is named `nit_compile` and created in the current directory and destroyed after the compilation.

If the option `--compile_dir` or `--no-cc` is used, then the directory is not destroyed and let as is.

### `--no-cc`
Do not invoke the C compiler.

Files in the compilation directory are generated but the C compiler is not invoked.

This option is mainly used to produce C files distributable then compilable on system that do not have a Nit compiler (e.g. embedded system).
In this case, it is suggested to also use the options `--dir`, `--compile-dir` and `--semi-global`.

    $ nitc examples/hello_world.nit --no-cc --dir hello --compile-dir hello --semi-global

Will produce a `hello` directory that contains the required C files to finish the compilation.
Only the C files required for the program are generated.
The final binary will be generated in the same directory.

Note that, to be useful, the compilation directory is not destroyed when `--no-cc` is used.

### `-m`, `--mixin`
Additional module to mix-in.

Additional modules are imported and refine the main module of the program.
This has basically the same effect than implementing a specific module that imports the main module of the program then each one of the mix-in modules.
May be used more than once.

This is option is used to weave additional behaviors to existing programs.
Modules designated to bring features to programs by refining basic or specialized services, without any intervention of the main program, are good candidates to be used with the `-m` option.
E.g. `hash_debug`.

An other usage of the `-m` option is to compile program to a specific platform. E.g. `emscripten`  or `android`.

A last usage is to develop programs as product lines with a main basic module (vanilla) and specific distinct features as flavor modules, then to combine them at compile-time.

    $ nitc prog_vanilla.nit -m feature_chocolate.nit -m feature_cherry.nit

### `-D`, `--define`
Define a specific property.

The `-D` option allows to refine a top-level method at compile-time.
This has basically the same effect than implementing a specific module that imports the main module of the program and refines the designated methods.

The designated method must be top-level function with no parameters that returns a Bool, an Int or a String.

The argument of the `-D` option is "{name}={value}".
For Bool, the argument can also be just "{name}", in this case, the value is considered to be `true`.

    $ nitc foo.nit -D prefix=/opt/foo -D port=8080 -D with_ssl

### `--release`
Compile in release mode and finalize application.

Currently, this only affect the android platform.

### `-g`, `--debug`
Compile in debug mode.

Currently removes gcc optimizations.
Also preserves the source-files directory for C-debuggers.

For more debugging-related options, see also `--hardening` and `NIT_GC_OPTION`

### `--trace`
Compile with lttng's instrumentation.

Currently add a lttng trace provider and add tracepoint into object instances and destructions.

The lttng nit/misc/Nit_Compiler.lttng file is a template that you can use instead of configure channels by yourself. You have to configure the path of the destination tracefile. <destination> <path> "your path" </path> </destination>

To create a channel with template :
	lttng-sessiond --daemonize
	lttng load -i=~/nit/misc/Nit_Compiler.lttng Nit_Compiler
To create a channel without template :
	lttng create session_name
	lttng enable-event --userspace Nit_Compiler:Object_Instance
	lttng enable-event --userspace Nit_Compiler:Object_Destroy
To record some traces :
	lttng start
	--> run your program
	lttng stop
To read some traces :
	babeltrace ~/session_name
To destroy your current tracing session :
	lttng destroy

## COMPILATION MODES

### `nitc` includes distinct compilation modes.

### `--separate`
Use separate compilation (default mode).

In separate compilation, modules are compiled independently of their programs.
This makes the recompilation of programs faster since only the modified files need to be recompiled.

### `--global`
Use global compilation.

The produced executables may become huge and the compilation time is prohibitive.
But sometime, they are faster.

In practice, `--semi-global` produces nearly as fast but smaller executables.

### `--erasure`
Erase generic types.

Like `--separate` but use an erasure dynamic typing policy for generics and virtual types.
Usually you do not need this, even if you understand the previous sentence.


## SEMI-GLOBAL OPTIMIZATIONS

In `--separate` and in `--erasure` modes, some optimization can be gained by relaxing the constraint about
the independence on programs.

Therefore, with these options, the produced executables may be faster and smaller but the recompilation time
will increase.

### `--semi-global`
Enable all semi-global optimizations.

### `--rta`
Activate RTA (Rapid Type Analysis).

This option only make sense in `--erasure` to enable some semi-global optimizations.

RTA is implicitly enabled in `--separate` and `--global`.

### `--inline-coloring-numbers`
Inline colors and ids (semi-global).

### `--inline-some-methods`
Allow the separate compiler to inline some methods (semi-global).
Need `--rta`.

### `--direct-call-monomorph`
Allow the separate compiler to direct call monomorphic sites (semi-global).
Need `--rta`.

### `--direct-call-monomorph0`
Allow the separate compiler to direct call monomorphic sites (semi-global).
Need `--rta`.

The difference with the non-zero option is internal:
with this option, the monomorphism is looked-at on the mmethod level and not at the callsite level.

### `--skip-dead-methods`
Do not compile dead methods (semi-global).
Need `--rta`.

## LINK-BOOST OPTIMIZATIONS

In `--separate` and in `--erasure` modes, some optimization can be gained by hijacking the linker process.

Warning: these optimisations are not portable since they use extra features of the GNU linker `ld`.
However, there is very few reasons to not use them if GNU `ld` is available.

### `--link-boost`
Enable all link-boost optimizations.

### `--colors-are-symbols`
Store colors as symbols instead of static data.

By default, the various identifiers used to implement OO-mechanisms are stored as genuine constant static variables.

This option uses linker symbols to encode these identifiers.
This makes the compiled program faster since less indirections are required to get the values.
It also produces executables that are a little bit smaller since static memory does not have to store the colors.

### `--substitute-monomorph`
Replace monomorphic trampolines with direct calls.

Late-binding is implemented with *trampolines*, that are small functions that just select and jump the to right implementations.
If, at link-time, is it known that the target will always by the same implementation then all calls to the trampoline are replaced by
direct calls to this single implementation.

Note that using trampolines as indirection slows down the executable.
However, it is expected that the gain of monomorphic direct-calls overcompensates the additional indirections in polymorphic trampoline-calls.

Note: automatically enable option `--trampoline-call`.

## POTENTIAL OPTIMIZATIONS

These optimisation are not enabled by default as they are counter-effective in most cases.

### `--guard-call`
Guard VFT calls with a direct call.

### `--type-poset`
Build a poset of types to create more condensed tables.

The drawback is that more time and memory are used by the compilation process.


## DANGEROUS OPTIMIZATIONS

The following optimizations disable runtime checks.
It means that correct (non-buggy) programs may be slightly faster.
It also means that incorrect (buggy) programs may have unspecified behaviors
(e.g. formatting your hard drive or killing your cat).

In fact, these options are mainly used to bench the compilation results.

### `--no-check-all`
Disable all tests (dangerous).

### `--no-check-covariance`
Disable type tests of covariant parameters (dangerous).

### `--no-check-attr-isset`
Disable isset tests before each attribute access (dangerous).

### `--no-check-assert`
Disable the evaluation of explicit `assert` and `as` (dangerous).

### `--no-check-autocast`
Disable implicit casts on unsafe expression usage (dangerous).

### `--no-check-null`
Disable tests of null receiver (dangerous).

### `--no-check-erasure-cast`
Disable implicit casts on unsafe return with erasure-typing policy (dangerous).


## UNOPTIMIZATIONS

These options are used to debug or to bench the compilation results.
Usually you do not need them since they make the generated code slower.

### `--no-shortcut-range`
Always instantiate a range and its iterator on 'for' loops.

### `--no-union-attribute`
Put primitive attributes in a box instead of an union.

### `--no-shortcut-equal`
Always call == in a polymorphic way.

### `--no-tag-primitives`
Use only boxes for primitive types.

The separate compiler uses tagged values to encode common primitive types like Int, Bool and Char.
This option disables tags and forces such primitive values to be boxed.
The drawback is that each boxing costs a memory allocation thus increases the amount of work for the garbage collector.

However, in some cases, it is possible that this option improves performance since the absence of tags simplify the implementation
of OO mechanisms like method calls or equality tests.

### `--no-inline-intern`
Do not inline call to intern methods.

### `--colo-dead-methods`
Force colorization of dead methods.

### `--no-gcc-directive`
Disable advanced gcc directives for optimization.

### `--trampoline-call`
Use an indirection when calling.

Just add the trampolines of `--substitute-monomorph` without doing any additional optimizations.


### DEBUGGING

### `--no-stacktrace`
Disable the generation of stack traces.

With this option, the compiled program will not display stack traces on runtime errors.

Because stack traces rely on libunwind, this option might be useful in order to generate more portable binaries
since libunwind might be non available on the runtime system (or available with an ABI incompatible version).

The generated C is API-portable and can be reused, distributed and compiled on any supported system.
If the option `--no-stacktrace` is not used but the development files of the library `libunwind` are not available, then a warning will be displayed
and stack trace will be disabled.

Note that the `--no-stacktrace` option (or this absence) can be toggled manually in the generated Makefile (search `NO_STACKTRACE` in the Makefile).
Moreover, the environment variable `NIT_NO_STACK` (see bellow) can also be used at runtime to disable stack traces.

### `--trace-memory`
Enable dynamic measure of memory usage.

Compiled programs will generate a large `memory.log` file that logs all memory allocations.
This logs file can then be analyzed with the tool `memplot` from contrib.

### `--hardening`
Generate contracts in the C code against bugs in the compiler.


## INTERNAL OPTIONS

These options can be used to control the fine behavior of the tool.
They are useless for a normal user.

### `--disable-phase`
Disable a specific phase; use `list` to get the list.

### `--only-parse`
Only proceed to parse files.

### `--only-metamodel`
Stop after meta-model processing.

### `--ignore-visibility`
Do not check, and produce errors, on visibility issues.

### `--no-main`
Do not generate main entry point.

### `--max-c-lines`
Maximum number of lines in generated C files. Use 0 for unlimited.

### `--group-c-files`
Group all generated code in the same series of files.

### `--make-flags`
Additional options to the `make` command.

      $ nitc foo.nit --make-flags 'CC=clang' --make-flags 'CFLAGS="-O0 -g"'

### `--typing-test-metrics`
Enable static and dynamic count of all type tests.

### `--invocation-metrics`
Enable static and dynamic count of all method invocations.

### `--isset-checks-metrics`
Enable static and dynamic count of isset checks before attributes access.

### `--tables-metrics`
Enable static size measuring of tables used for vft, typing and resolution.

### `--set-dummy-tool`
Set toolname and version to DUMMY. Useful for testing.

### `--bash-completion`
Generate bash_completion file for this program.

### `--stub-man`
Generate a stub manpage in pandoc markdown format.

### `--keep-going`
Continue after errors, whatever the consequences.

The tool does not stop after some errors but continue until it produces incorrect result, crashes, erases the hard drive, or just continue forever in an infinite loop.
This option is used to test the robustness of the tools by allowing phases to progress on incorrect data.

### `--sloppy`
Force lazy semantic analysis of the source-code.

Analysis of methods is thus done only when required.
This option breaks the behavior of most of the tools since errors in methods are undetected until the method is required in some processing.

## Contract
By default the contracts can be defined as "semi-global". I.E. All contracts (ensures, expects) used in the main package are enabled, the `expects` contracts are enabled (`ensures` contracts are disable) in direct imported package. Other indirected imported package has no active contract.

### `--no-contract`
Option used to disable the contracts(ensures, expects) usage.

### `--full-contract`
Option used to enables contracts (ensures, expects) on all classes. Warning this is an expensive option at runtime.

# ENVIRONMENT VARIABLES

### `NIT_DIR`
Base directory of the Nit installation.

When the `NIT_DIR` environment variable is set then it specifies the path of the Nit install directory.

This directory is used to locate binaries, shared files and the common libraries.

When unset, the directory is guessed according to some heuristic.

The `--nit-dir` option also set the base directory of the Nit installation but has precedence.

### `NIT_PATH`
Additional include paths.

The `NIT_PATH` environment variable contains paths of directories containing Nit libraries.
Each path is separated with a column (`:`).

The `-I` option also add additional paths.

### `NIT_GC_OPTION`
Runtime control of the garbage collector.

The behavior of the GC of the executables produced by nitc can be tuned with this environment variable.

The environment variable is used when programs are executed, not when they are compiled.
Thus, you do not need to recompile programs in order to tweak their GC options.

Available values are:

* boehm: use the Boehm-Demers-Weiser's conservative garbage collector (default).
* malloc: disable the GC and just use `malloc` without doing any `free`.
* large: disable the GC and just allocate a large memory area to use for all instantiation.
* help: show the list of available options.

### `NIT_NO_STACK`
Runtime control of stack traces.

By default, stack traces are printed when a runtime errors occurs during the execution of a compiled program.
When setting this environment variable to a non empty value, such stack traces are disabled.

The environment variable is used when programs are executed, not when they are compiled.
Thus, you do not need to recompile programs in order to disable generated stack traces.

Note that stack traces require that, during the compilation, development files of the library `libunwind` are available.
If they are not available, then programs are compiled without any stack trace support.

To completely disable stack traces, see the option `--no-stacktrace`.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
