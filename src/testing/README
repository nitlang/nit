# Test unit generation and execution for Nit.

In Nit, unit testing can be achieved in two ways:

* using `DocUnits` in code comments
* using `TestSuites` with test unit files

DocUnits are executable pieces of code found in the documentation of modules,
classes and properties.
They are used for documentation purpose, they should be kept simple and illustrative.
More advanced unit testing can be done using TestSuites.

TestSuites are test files coupled to a tested module.
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
To test a method you have to instanciate its class:

	module foo

	#    var foo = new Foo
	#    assert foo.bar == 10
	class Foo
		#    var foo = new Foo
		#    assert foo.baz(1, 2) == 3
		fun baz(a, b: Int) do return a + b
	end

`nitunit` is used to test Nit files:

	$ nitunit foo.nit

## Working with `TestSuites`

TestSuites are Nit files that define a set of TestCase for a particular module.

The test suite module must be declared using the `test_suite` annotation.
The structure of a test suite is the following:

	# test suite for module `foo`
	module test_foo is test_suite

	import test_suite # import the `TestSuite` class and the `test_suite` annotation
	import foo # can be intrude to test private things

	class TestFoo
		super TestSuite

		# test case for `foo::Foo::baz`
		fun test_baz do
			var subject = new Foo
			assert subject.baz(1, 2) == 3
		end
	end

Test suite can be executed using the same `nitunit` command:

	$ nitunit foo.nit

To be started automatically with nitunit, the module must be called `test_`
followed by the name of the module to test.
So for the module `foo.nit` the test suite will be called `test_foo.nit`.
Otherwise, you can use the `-t` option to specify the test suite module name:

	$ nitunit foo.nit -t my_test_suite.nit

`nitunit` will execute a test for each method named `test_*` in a class named `Test*`
so multiple tests can be executed for a single method:

	class TestFoo
		super TestSuite

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
		super TestSuite

		var subject: Foo is noinit

		# Method executed before each test
		redef fun before_test do
			subject = new Foo
		end

		fun test_baz_1 do
			assert subject.baz(1, 2) == 3
		end

		fun test_baz_2 do
			assert subject.baz(1, -2) == -1
		end
	end

When using custom test attributes, a empty init must be declared to allow automatic test running.

`before_module` and `after_module`: methods called before/after each test suite.
They have to be declared at top level:

	module test_bdd_connector

	import test_suite
	import bdd_connector

	# Testing the bdd_connector
	class TestConnector
		super TestSuite
		# test cases using a server
	end

	# Method executed before testing the module
	redef fun before_module do
		# start server before all test cases
	end

	# Method executed after testing the module
	redef fun after_module do
		# stop server after all test cases
	end

## Generating test suites

Write test suites for big modules can be a pepetitive and boring task...
To make it easier, `nitunit` can generate test skeletons for Nit modules:

	$ nitunit --gen-suite foo.nit

This will generate the test suite `test_foo` containing test case stubs for all public
methods found in `foo.nit`.

Useful options with `--gen-suite`:

* `--private`: also generate tests for protected and private methods
* `--force`: force generation of the skeleton (existing test suite will be overwritten)
