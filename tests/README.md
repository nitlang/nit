# Regression test for the Nit project

## Content of the directory

This directory contains small Nit programs and useful scripts to test the non regression of the nit tools.

### Useful scripts

* `tests.sh` is the main test script used to run some specific tests.
* `testall.sh` runs some tests on all engines.
  (No more excuse to forget to check your new tests with an obscure engine).
* `testfull.sh` runs all tests on a single engine.
  (go and grab a coffee)
* `search_test.sh` lists tests given a testname, a basename, or a `.res` file.
  Useful when `foo failed` but you do not know where the program `foo` is.
* `search_tests_git.sh` lists tests that seem modified between 2 git revisions.
  Useful before committing something.
* `listfull.sh` lists tests that are run by `testfull.sh`.
  It is used by other scripts but can be used by human to see what is tested.
  Each path is quoted using apostrophes, with `'\''` escaping an apostrophe.
  This syntax is compatible with `xargs` and the POSIX shell.

  Currently, all files in `tests/`, `lib/` and `examples/` are executed, some of `contrib/` and the main programs of `src/`.
  To update the list of tested files, just edit this script.

### Small Nit programs

They are divided in categories:

* `base` are minimal and fundamental tests.
  They are small and test the fundamental language specifications.
* `bench` are memory and time tests
* `error` are invalid programs
  They test the error message and the good behavior of the tool.
  Nowadays, alternatives (see below) are more used to test erroneous programs.
* `example` are examples
  Nowadays, examples are developed in the `examples/` root directory.
* `test` are others tests that usually depend on standard or other libraries.
  Nowadays, nitunit are a better place for them.
* `shootout` are benchmarks from http://shootout.alioth.debian.org/

### Other stuff

The .gitignore contains specific artefacts produced by some tests.
However, it is better to produce these artifacts in the `out` directory instead,
because `out` is cleaned before running tests (so that old artefacts do not
interfere with new executions of tests)

The `sav/` directory contains reference result files for tests (see below)

The `alt/` and `out/` directory are transient directories used during the tests.

The `zzz_tests/` directory contains tests to test the test system.
Execute `./tests.ss zzz_tests/*.nit` if you want.

## Running tests

~~~
./tests.sh filepath.nit...
./tests.sh base_attr*.nit
~~~

Will execute the program filepath for all its alternative (see below) and all its arguments (see below) for the default engine (see below).

The output is something like
~~~
=> test_args: . [ok] out/test_args.res sav/test_args.res
~~~

where in order, there is

* The test description (`test_args` in the example).
  It is the basename of the file + information about alternatives and arguments.
* The build status: `.`, `!`, or `nocc`, or `_`.
  They respectively mean "compilation OK", "compilation error", "compilation skipped", "compilation OK but execution skipped".
* The test status (see below) where `out/*.res` is the produced result file, and `sav/*.res` is the reference result file.


## Test statuses

### Ok

`[ok] out/zzz_test_ok.res sav/zzz_test_ok.res`

The produced result file correspond to the reference result file (according to `diff`).
It is a success.

### 0k, is empty

`[0k] out/zzz_test_0k.res is empty`

The produced result file is empty and no reference result file is present.
It is a success.

If you introduced a new library, it is likely that you get this.
It basically means that the module compile and does noting, and its fine.

### Fail

`[======= fail out/zzz_test_fail.res sav/zzz_test_fail.res =======]`

The produced result file do not correspond to the reference result file.
It is a failure.

Did something break? or does the reference result file need to be updated?

### No sav

`[=== no sav ===] out/zzz_test_nosav.res is not empty`

The produced result file is not empty but no reference result file is present.
It is a failure.

Did something break? or does the reference result file need to be created?
If you introduced a new program, it is likely that you get this.
It basically means the program compiles and produces something.
Please create a new reference result file for it.

### Soso

`[======= soso out/zzz_test_soso.res sav//zzz_test_soso.res =======]`

The produced result file do not correspond to the reference result file.
But the difference in only in errors or warnings.
It is a failure.

Usually, some lines in error messages changed.
So just update the reference result file.

### Fixme

`[fixme] out/zzz_test_fixme.res sav//fixme/zzz_test_fixme.res`

The produced result file correspond to a *fixme* reference result file.
It is an expected error. So not a regression.

Reference result files in `sav/**/fixme/` are considered expected errors.
The distinction with standard reference result files is only for final statistics.

### Ok, but fixme remains

`[*ok*] out/zzz_test_fixme_remains.res sav//zzz_test_fixme_remains.res - but sav//fixme/zzz_test_fixme_remains.res remains!`

There is a fixme reference result file and a standard reference result file. But the produced result file correspond to the standard one.
Usually it means that a bug was fixed. But is considered a regression until the *fixme* reference result file is removed.
It is a failure.

### Changed fixme

`[======= changed out/zzz_test_fixme_changed.res sav//fixme/zzz_test_fixme_changed.res ======]`

The produced result file do not correspond to the *fixme* reference result file.
It is a failure, and analogous to the standard `fail`.

### Todo, not yet implemented

`[todo] out/zzz_test_todo.res -> not yet implemented`

The produced result file contains a magic string, like `NOT YET IMPLEMENTED`.
Those are considered the same as expected errors (like a fixme)
It is a success.

The magic strings are listed in `todo` files in the root and `sav` directories.
They are used by engines, libraries or program just print this to simplify the management of tests.

Magic strings are used with `grep -f`, so each line is a pattern that is searched within the res files.

### Skipped

`[skip]`

The test is skipped.
It is a success.

The `$engine.skip` files (where `$engine` is an engine name, see below) describe tests that are skipped completely on a given engine.
Usually it used with then engine `niti` because tests are too long.

The `cc.skip` file describes tests that are analyzed but no executable is generated.
Usually it is because of expected CC errors or missing C libraries.

The `exec.skip` file describes tests that compiled but not executed.
Usually it is because the programs are interactive or run some kind of server.

The `$os.skip` file describes tests that are to be skipped completely on the given OS.
Usually it is because of OS specific libraries.

The `turing.skip` file describes tests that are to be skipped completely on the Turing cluster doing continuous testing over MPI.
Usually it is because of an unavailable library or a large work which would not benefit from parallelization.

These `*.skip` files contain a list of patterns that will be used against test names.
A single substring can thus be used to skip a full family of tests.

## Update reference result files

To update the reference result files, just create/remove/update files in the `sav/` directory.

HINT: for easy management, just copy-paste parts of the test status to build your command.
Example `cp <copy-paste out/zzz_test_fail.res sav/zzz_test_fail.res>` to update a file.


If a reference result file contains only `UNDEFINED`, then the produced result file is always considered successful.
It is used to store system-dependant *fixme* reference result files.
Once the problem is solved, the status will become `Ok but fixme remains`


Note: `UNDEFINED` still gives a success even if the tests is uncompilable.
So do not use it for standard reference result files.
Use the various skipping or controls to try to produce reproducible results.


## Engines

Engines are selected with the option `--engine`.

~~~
./tests.sh --engine nitce base_class_name.nit
~~~

Current engines are:

* `nitcs`, for `nitc --separate` (this is the default)
* `nitce`, for `nitc --erasure`
* `nitcsg`, for `nitc --separate --semi-global`
* `nitcg`, for `nitc --global`
* `niti`, for `nit`, the interpreter
* `nitvm`, for `nit --vm`, the virtual machine
* `emscripten`, for `nitc --semi-global -m emscripten` (not automatically executed by `testall.sh`)

Engines control:

* How tests are run: compiled or interpreted? which binary? what options?
* Where to find the reference result files.
  The sav/ directory contains subdirectories per engine that are used to store specific reference result files.
  Specific reference result files override the generic ones.


## Alternatives

See `README_alternatives.md`


## Controlling the execution of program tests


### Arguments

Argument files `*.args` are used to run program tests with specific command line arguments.

* `foo.args` are used for the test file basenamed `foo`.
* `foo_*alt*.args` are used for specific alternatives if they exists.

Each line of an argument file produces an additional distinct test, with its own testname and reference result files.


The first test, with a short arrow `=>`, is the test executed without any arguments.
Other tests are arguments tests and have a longer arrow `==>`.
If the first test does not produce an executapel, arguments tests are not run.

Example:

~~~
$ tail zzz_test_args.args zzz_tests/zzz_test_args.nit
$ ./tests.sh zzz_tests/zzz_test_args.nit
$ tail out/zzz_test_args*.res
~~~


### Input

By default, stdin is read from `/dev/null.`
Specific tests may need prepared inputs.

The `*.inputs` files are used to provide inputs during the execution of program tests.

* `foo.inputs` are used for the test file basenamed `foo`
* `foo_*alt*_args*.args` are used for specific alternatives and/or arguments if they exists.

Example:

~~~
$ tail zzz_test_in.inputs zzz_tests/zzz_test_in.nit
$ ./tests.sh zzz_tests/zzz_test_in.nit
$ cat out/zzz_test_in.res
~~~


### Output and generated files

The stdout and stderr are redirected to the produced result file.

Sometimes, files are also produced by the programs.
In order to check those files, a special path by testname is watched.
Its name is `out/foo.write` where `foo` is the complete testname (with alts and args).

The shell variable `$WRITE` can be used in `*.args` file in order to give the correct path to the program.

If it exists, the content of the `$WRITE` file is appended at the end of the produced result file.
If `$WRITE` is created as a directory, then the names of files in this directory is appended.

Example:

~~~
$ tail zzz_test_write.args zzz_tests/zzz_test_write.nit
$ ./tests.sh zzz_tests/zzz_test_write.nit
$ cat out/zzz_test_write.out
~~~


### Post-processing

Some simple post-processing can be executed after each tests associated to a line in a `.args` file.

In `*.args` files, semicolons can be used to introduce and separate additional shell commands.

~~~
$ tail zzz_test_post_proc.args zzz_tests/zzz_test_post_proc.nit
$ ./tests.sh zzz_tests/zzz_test_post_proc.nit
$ cat out/zzz_test_post_proc.res
~~~


### Environment variable

The environment variable `NIT_TESTING` is set to `true` during the execution of program tests.
Some libraries of programs can use it to produce specific reproducible results ; or just to exit their executions.

`NIT_TESTING_TESTS_SH` is set to `true` for tests ran by `tests.sh` only, not by nitunit.

`NIT_TESTING_ID` is set to an integer value unique between concurrent executions of `tests.sh`.
Use it to name files, database entries, open sockets in order to avoid race conditions.

~~~
$ cat zzz_tests/zzz_test_envvar.nit
$ ./tests.sh zzz_tests/zzz_test_envvar.nit
$ cat out/zzz_test_post_proc.res
~~~
