# NAME

nitunit - executes the unit tests from Nit source files.

# SYNOPSIS

nitunit [*options*] FILE...

# DESCRIPTION

Unit testing in Nit can be achieved in two ways:

* using `DocUnits` in code comments or in markdown files
* using `TestSuites` with test unit files

`DocUnits` are executable pieces of code found in the documentation of groups, modules,
classes and properties.
They are used for documentation purpose, they should be kept simple and illustrative.
More advanced unit testing can be done using TestSuites.

`DocUnits` can also be used in any markdown files.

`TestSuites` are test files coupled to a tested module.
They contain a list of test methods called TestCase.

## Working with `DocUnits`

DocUnits are blocks of executable code placed in comments of modules, classes and properties.
The execution can be verified using `assert`.

Example with a class:

~~~
module foo
#    var foo = new Foo
#    assert foo.bar == 10
class Foo
    var bar = 10
end
~~~

Everything used in the test must be declared.
To test a method you have to instantiate its class:

~~~
module foo
#    var foo = new Foo
#    assert foo.bar == 10
class Foo
    #    var foo = new Foo
    #    assert foo.baz(1, 2) == 3
    fun baz(a, b: Int) do return a + b
end
~~~

In a single piece of documentation, each docunit is considered a part of a single module, thus regrouped when
tested.
Therefore, it is possible (and recommended) to split docunits in small parts if it make the explanation easier.

~~~~
# Some example of grouped docunits
#
# Declare and initialize a variable `a`.
#
#     var a = 1
#
# So the value of `a` can be used
#
#     assert a == 1
#
# even in complex operations
#
#     assert a + 1 == 2
fun foo do end
~~~~

Sometime, some blocks of code has to be included in documentation but not considered by `nitunit`.
Those blocks are distinguished by their tagged fences (untagged fences or fences tagged `nit` are considered to be docunits).

~~~~
# Some ASCII drawing
#
# ~~~~raw
#   @<
# <__)
# ~~~~
fun foo do end
~~~~

The special fence-tag `nitish` could also be used to indicate pseudo-nit that will be ignored by nitunit but highlighted by nitdoc.
Such `nitish` piece of code can be used to enclose examples that cannot compile or that one do not want to be automatically executed.

~~~~
# Some pseudo-nit
#
# ~~~~nitish
# var a: Int = someting
# # ...
# if a == 1 then something else something-else
# ~~~~
#
# Some code to not try to execute automatically
#
# ~~~~nitish
# system("rm -rf /")
# ~~~~
~~~~

The `nitunit` command is used to test Nit files:

    $ nitunit foo.nit

Groups (directories) can be given to test the documentation of the group and of all its Nit files:

    $ nitunit lib/foo

Finally, standard markdown documents can be checked with:

    $ nitunit foo.md

When testing, the environment variable `NIT_TESTING` is set to `true`.
This flag can be used by libraries and program to prevent (or limit) the execution of dangerous pieces of code.

~~~~~
# NIT_TESTING is automatically set.
#
#     assert "NIT_TESTING".environ == "true"
~~~~

## Working with `TestSuites`

TestSuites are Nit modules that define a set of TestCases.

A test suite is a module that uses the annotation `is test`.

It is common that a test suite focuses on testing a single module.
In this case, the name of the test suite is often `test_foo.nit` where `foo.nit` is the tested module.

The structure of a test suite is the following:

~~~~
# test suite for module `foo`
module test_foo is test

import foo # can be intrude to test private things

class TestFoo
    test

    # test case for `foo::Foo::baz`
    fun baz is test do
        var subject = new Foo
        assert subject.baz(1, 2) == 3
    end
end
~~~~

Test suite can be executed using the same `nitunit` command:

    $ nitunit foo.nit

`nitunit` will execute a test for each method with the `test` annotation in a class
also annotated with `test` so multiple tests can be executed for a single method:

~~~~
class TestFoo
    test

    fun baz_1 is test do
        var subject = new Foo
        assert subject.baz(1, 2) == 3
    end
    fun baz_2 is test do
        var subject = new Foo
        assert subject.baz(1, -2) == -1
    end
end
~~~~

## Black Box Testing

Sometimes, it is easier to validate a `TestCase` by comparing its output with a text file containing the expected result.

For each TestCase `test_bar` of a TestSuite `test_mod.nit`, a corresponding file with the expected output is looked for:

* "test_mod.sav/test_bar.res". I.e. test-cases grouped by test-suites.

	This is the default and is useful if there is a lot of test-suites and test-cases in a directory

* "sav/test_bar.res". I.e. all test-cases grouped in a common sub-directory.

	Useful if there is a lot of test-suites OR test-cases in a directory.

* "test_bar.res" raw in the directory.

	Useful is there is a few test-suites and test-cases in a directory.

All 3 are exclusive. If more than one exists, the test-case is failed.

If a corresponding file then the output of the test-case is compared with the file.

The `diff(1)` command is used to perform the comparison.
The test is failed if non-zero is returned by `diff`.

~~~
module test_mod is test

class TestFoo
	test

	fun bar is test do
		print "Hello!"
	end
end
~~~

Where `test_mod.sav/test_bar.res` contains

~~~raw
Hello!
~~~

If no corresponding `.res` file exists, then the output of the TestCase is ignored.

To helps the management of the expected results, the option `--autosav` can be used to automatically create and update them.


## Configuring TestSuites

`TestSuite`s also provide annotations to configure the test run:
`before` and `after` annotations can be added to methods that must be called before/after each test case.
They can be used to factorize repetitive tasks:

~~~
class TestFoo
	test

	var subject: Foo is noinit

	# Method executed before each test
	fun set_up is before do
		subject = new Foo
	end

	fun baz_1 is test do
		assert subject.baz(1, 2) == 3
	end

	fun baz_2 is test do
		assert subject.baz(1, -2) == -1
	end
end
~~~

When using custom test attributes, a empty init must be declared to allow automatic test running.

At class level, `before_all` and `after_all` annotations can be set on methods that must be called before/after all the test cases in the class:

~~~
class TestFoo
	test

	var subject: Foo is noinit

	# Method executed before all tests in the class
	fun set_up is before_all do
		subject = new Foo
	end

	fun baz_1 is test do
		assert subject.baz(1, 2) == 3
	end

	fun baz_2 is test do
		assert subject.baz(1, -2) == -1
	end
end
~~~

`before_all` and `after_all` annotations can also be set on methods that must be called before/after each test suite when declared at top level:

~~~
module test_bdd_connector

import bdd_connector

# Testing the bdd_connector
class TestConnector
	test
	# test cases using a server
end

# Method executed before testing the module
fun setup_db is before_all do
	# start server before all test cases
end

# Method executed after testing the module
fun teardown_db is after_all do
	# stop server after all test cases
end
~~~

When dealing with multiple test suites, niunit allows you to import other test suites to factorize your tests:

~~~
module test_bdd_users

import test_bdd_connector

# Testing the user table
class TestUsersTable
	test
	# test cases using the db server from `test_bdd_connector`
end

fun setup_table is before_all do
	# create user table
end

fun teardown_table is after_all do
	# drop user table
end
~~~

Methods with `before*` and `after*` annotations are linearized and called in different ways.

* `before*` methods are called from the least specific to the most specific
* `after*` methods are called from the most specific to the least specific

In the previous example, the execution order would be:

1. `test_bdd_connector::setup_db`
2. `test_bdd_users::setup_table`
3. `all test cases from test_bdd_users`
4. `test_bdd_users::teardown_table`
5. `test_bdd_connector::teardown_db`

## Accessing the test suite environment

The `NIT_TESTING_PATH` environment variable contains the current test suite
file path.
Nitunit define this variable before the execution of each test suite.
It can be used to access files based on the current test suite location:

~~~
class TestWithPath
    test

    fun test_suite_path do
        assert "NIT_TESTING_PATH".environ != ""
    end
end
~~~

## Generating test suites

Write test suites for big modules can be a repetitive and boring task...
To make it easier, `nitunit` can generate test skeletons for Nit modules:

    $ nitunit --gen-suite foo.nit

This will generate the test suite `test_foo` containing test case stubs for all public
methods found in `foo.nit`.


# OPTIONS

### `--full`
Process also imported modules.

By default, only the modules indicated on the command line are tested.

With the `--full` option, all imported modules (even those in standard) are also precessed.

### `-o`, `--output`
Output name (default is 'nitunit.xml').

`nitunit` produces a XML file compatible with JUnit.

### `--dir`
Working directory (default is 'nitunit.out').

In order to execute the tests, nit files are generated then compiled and executed in the giver working directory.

In case of success, the directory is removed.
In case of failure, it is kept as is so files can be investigated.

### `--nitc`
nitc compiler to use.

By default, nitunit tries to locate the `nitc` program with the environment variable `NITC` or heuristics.
The option is used to indicate a specific nitc binary.

### `--no-act`
Does not compile and run tests.

### `-p`, `--pattern`
Only run test case with name that match pattern.

Examples: `TestFoo`, `TestFoo*`, `TestFoo::test_foo`, `TestFoo::test_foo*`, `test_foo`, `test_foo*`

### `--autosav`
Automatically create/update .res files for black box testing.

If a black block test fails because a difference between the expected result and the current result then the expected result file is updated (and the test is passed).

If a test-case of a test-suite passes but that some output is generated, then an expected result file is created.

It is expected that the created/updated files are checked since the tests are considered passed.
A VCS like `git` is often a good tool to check the creation and modification of those files.

### `--no-time`
Disable time information in XML.

This is used to have reproducible XML results.

This option is automatically activated if `NIT_TESTING` is set.

## SUITE GENERATION

### `--gen-suite`
Generate test suite skeleton for a module.

### `-f`, `--force`
Force test generation even if file exists.

Any existing test suite will be overwritten.

### `--private`
Also generate test case for private methods.

### `--only-show`
Only display the skeleton, do not write any file.


# ENVIRONMENT VARIABLES

### `NITC`

Indicate the specific Nit compiler executable to use. See `--nitc`.

### `NIT_TESTING`

The environment variable `NIT_TESTING` is set to `true` during the execution of program tests.
Some libraries of programs can use it to produce specific reproducible results; or just to exit their executions.

Unit-tests may unset this environment variable to retrieve the original behavior of such piece of software.

### `SRAND`

In order to maximize reproducibility, `SRAND` is set to 0.
This make the pseudo-random generator no random at all.
See `Sys::srand` for details.

To retrieve the randomness, unit-tests may unset this environment variable then call `srand`.

### `NIT_TESTING_ID`

Parallel executions can cause some race collisions on named resources (e.g. DB table names).
To solve this issue, `NIT_TESTING_ID` is initialized with a distinct integer identifier that can be used to give unique names to resources.

Note: `rand` is not a recommended way to get a distinct identifier because its randomness is disabled by default. See `SRAND`.

### `NIT_TESTING_PATH`

Only available for test suites.
Contains the module test suite path.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
