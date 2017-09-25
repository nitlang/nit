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

The test suite module must be declared using the `test` annotation.
The structure of a test suite is the following:

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

Test suite can be executed using the same `nitunit` command:

	$ nitunit foo.nit

To be started automatically with nitunit, the module must be called `test_`
followed by the name of the module to test.
So for the module `foo.nit` the test suite will be called `test_foo.nit`.
Otherwise, you can use the `-t` option to specify the test suite module name:

	$ nitunit foo.nit -t my_test_suite.nit

`nitunit` will execute a test for each method annotated with `test` in a class also annotated with `test`
so multiple tests can be executed for a single method:

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

`TestSuites` also provide methods to configure the test run:

`before` and `after` annotations can be added to methods that must be called before/after each test case.
They can be used to factorize repetitive tasks:

	class TestFoo
		test

		var subject: Foo is noinit

		# Method executed before each test
		redef fun set_up is before do
			subject = new Foo
		end

		fun baz_1 is test do
			assert subject.baz(1, 2) == 3
		end

		fun baz_2 is test do
			assert subject.baz(1, -2) == -1
		end
	end

When using custom test attributes, a empty init must be declared to allow automatic test running.

`before_all` and `after_all` annotations can be set on methods that must be called before/after each test suite.
They have to be declared at top level:

	module test_bdd_connector

	import bdd_connector

	# Testing the bdd_connector
	class TestConnector
		test
		# test cases using a server
	end

	# Method executed before testing the module
	fun before_module is before_all do
		# start server before all test cases
	end

	# Method executed after testing the module
	fun after_module is after_all do
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
