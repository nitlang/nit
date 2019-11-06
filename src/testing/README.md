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
		fun baz(a, b: Int): Int do return a + b
	end

`nitunit` is used to test Nit files:

~~~sh
	$ nitunit foo.nit
~~~

## Working with `TestSuites`

TestSuites are Nit files that define a set of TestCase for a particular module.

The test suite module must be declared using the `test` annotation.
The structure of a test suite is the following:

~~~nitish
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
~~~

Test suite can be executed using the same `nitunit` command:

~~~sh
	$ nitunit foo.nit
~~~

To be started automatically with nitunit, the module must be called `test_`
followed by the name of the module to test.
So for the module `foo.nit` the test suite will be called `test_foo.nit`.
Otherwise, you can use the `-t` option to specify the test suite module name:

~~~sh
	$ nitunit foo.nit -t my_test_suite.nit
~~~

`nitunit` will execute a test for each method annotated with `test` in a class also annotated with `test`
so multiple tests can be executed for a single method:

~~~nitish
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
~~~

`TestSuites` also provide methods to configure the test run:

`before` and `after` annotations can be added to methods that must be called before/after each test case.
They can be used to factorize repetitive tasks:

~~~nitish
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

~~~nitish
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

~~~nitish
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

~~~nitish
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

## Generating test suites

Write test suites for big modules can be a pepetitive and boring task...
To make it easier, `nitunit` can generate test skeletons for Nit modules:

~~~sh
	$ nitunit --gen-suite foo.nit
~~~

This will generate the test suite `test_foo` containing test case stubs for all public
methods found in `foo.nit`.

Useful options with `--gen-suite`:

* `--private`: also generate tests for protected and private methods
* `--force`: force generation of the skeleton (existing test suite will be overwritten)
