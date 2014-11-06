% NITUNIT(1)

# NAME

nitunit - executes the unit tests from Nit source files.

# SYNOPSIS

nitunit [*options*] FILE...

# DESCRIPTION

Unit testing in Nit can be achieved in two ways:

* using `DocUnits` in code comments
* using `TestSuites` with test unit files

`DocUnits` are executable pieces of code found in the documentation of modules,
classes and properties.
They are used for documentation purpose, they should be kept simple and illustrative.
More advanced unit testing can be done using TestSuites.

`TestSuites` are test files coupled to a tested module.
They contain a list of test methods called TestCase.

## Working with `DocUnits`

With DocUnits, executable code can be placed in comments of modules, classes and properties.
The execution can be verified using `assert`

Example with a class:

    module foo
    #    var foo = new Foo
    #    assert foo.bar == 10
    class Foo
        var bar = 10
    end

Everything used in the test must be declared.
To test a method you have to instantiate its class:

    module foo
    #    var foo = new Foo
    #    assert foo.bar == 10
    class Foo
        #    var foo = new Foo
        #    assert foo.baz(1, 2) == 3
        fun baz(a, b: Int) do return a + b
    end

The `nitunit` command is used to test Nit files:

    $ nitunit foo.nit

## Working with `TestSuites`

TestSuites are Nit files that define a set of TestCases for a particular module.

The test suite must be called `test_` followed by the name of the module to test.
So for the module `foo.nit` the test suite will be called `test_foo.nit`.

The structure of a test suite is the following:

    # test suite for module `foo`
    module test_foo
    import foo # can be intrude to test private things
    class TestFoo
        # test case for `foo::Foo::baz`
        fun test_baz do
            var subject = new Foo
            assert subject.baz(1, 2) == 3
        end
    end

Test suite can be executed using the same `nitunit` command:

    $ nitunit foo.nit

`nitunit` will execute a test for each method named `test_*` in a class named `Test*`
so multiple tests can be executed for a single method:

    class TestFoo
        fun test_baz_1 do
            var subject = new Foo
            assert subject.baz(1, 2) == 3
        end
        fun test_baz_2 do
            var subject = new Foo
            assert subject.baz(1, -2) == -1
        end
    end

`TestSuites` also provide methods to configure the test run:

`before_test` and `after_test`: methods called before/after each test case.
They can be used to factorize repetitive tasks:

    class TestFoo
        var subject: Foo
        # Mandatory empty init
        init do end
        # Method executed before each test
        fun before_test do
            subject = new Foo
        end
        fun test_baz_1 do
            assert subject.baz(1, 2) == 3
        end
        fun test_baz_2 do
            assert subject.baz(1, -2) == -1
        end
    end

When using custom test attributes, an empty `init` must be declared to allow automatic test running.

`before_module` and `after_module`: methods called before/after each test suite.
They have to be declared at top level:

    module test_bdd_connector
    import bdd_connector
    # Testing the bdd_connector
    class TestConnector
        # test cases using a server
    end
    # Method executed before testing the module
    fun before_module do
        # start server before all test cases
    end
    # Method executed after testing the module
    fun after_module do
        # stop server after all test cases
    end

## Generating test suites

 Write test suites for big modules can be a repetitive and boring task...
 To make it easier, `nitunit` can generate test skeletons for Nit modules:

    $ nitunit --gen-suite foo.nit

 This will generate the test suite `test_foo` containing test case stubs for all public
 methods found in `foo.nit`.


# OPTIONS

`--full`
:   Process also imported modules.

    By default, only the modules indicated on the command line are tested.

    With the `--full` option, all imported modules (even those in standard) are also precessed.

`-o`, `--output`
:   Output name (default is 'nitunit.xml')

    `nitunit` produces a XML file comatible with JUnit.

`--dir`
:   Working directory (default is '.nitunit')

    In order to execute the tests, nit files are generated then compiled and executed in the giver working directory.

`--no-act`
:   Does not compile and run tests.

`-p`, `--pattern`
:   Only run test case with name that match pattern. Examples: `TestFoo`, `TestFoo*`, `TestFoo::test_foo`, `TestFoo::test_foo*`, `test_foo`, `test_foo*`

`-t`, `--target-file`
:   Specify test suite location.

## SUITE GENERATION

`--gen-suite`
:   Generate test suite skeleton for a module

`-f`, `--force`
:   Force test generation even if file exists.

    Any existing test suite will be overwritten.

`--private`
:   Also generate test case for private methods.

`--only-show`
:   Only display the skeleton, do not write any file.

# SEE ALSO

The Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>
