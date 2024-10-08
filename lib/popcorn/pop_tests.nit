# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Popcorn testing services
#
# ## Blackbox testing
#
# Popcorn allows you to test your apps using nitunit blackbox testing.
#
# With blackbox testing you compare the output of your program with a result file.
#
# To get started with blackbox testing, create a nitunit test suite and imports
# the `pop_tests` module.
#
# You then need to build the app that will be tested by nitunit as shown in the
# `test_example_hello` method.
# Calling `run_test` will automatically set the `host` and `port` used for testing.
#
# Redefine the `client_test` method to write your scenario.
# Here we use `curl` to access some URI on the app.
#
# ~~~nitish
# module test_example_hello is test
#
# import pop_tests
# import example_hello
#
# class TestExampleHello
#	super TestPopcorn
#	test
#
#	fun example_hello is test do
#		var app = new App
#		app.use("/", new HelloHandler)
#		run_test(app)
#	end
#
#	redef fun client_test do
#		system "curl -s {host}:{port}"
#		system "curl -s {host}:{port}/"
#		system "curl -s {host}:{port}///////////"
#		system "curl -s {host}:{port}/not_found"
#		system "curl -s {host}:{port}/not_found/not_found"
#	end
# end
# ~~~
#
# The blackbox testing needs a reference result file against wich the test output
# will be compared.
# Create your expected result file in `test_example_hello.sav/test_example_hello.res`.
#
# Test your app by running nitunit:
#
# ~~~bash
# nitunit ./example_hello.nit
# ~~~
#
# See `examples/hello_world` for the complete example.
module pop_tests

import popcorn
import pthreads

redef class Sys

	# Use localhost for testing
	var test_host = "localhost"

	# Return a new port for each instance
	fun test_port: Int do
		return testing_id % 20000 + 10000
	end

	# Nitdoc testing ID
	fun testing_id: Int do return "NIT_TESTING_ID".environ.to_i
end

# Thread running the App to test.
class AppThread
	super Thread

	# Host used by tested App.
	var host: String

	# Port used by tested App.
	var port: Int

	# App to test.
	var app: App

	redef fun main
	do
		# Hide testing concept to force nitcorn to actually run
		"NIT_TESTING".setenv("false")
		app.quiet = true
		app.listen(host, port)
		return null
	end
end

# Thread running the test client.
class ClientThread
	super Thread

	# Test suite to execute.
	var test_suite: TestPopcorn

	redef fun main do
		test_suite.client_test
		print ""
		return null
	end
end

# TestSuite for Popcorn blackbox testing.
class TestPopcorn

	# Host used to run App.
	var host: String = test_host

	# Port used to run App.
	var port: Int = test_port

	# Directory of the current test suite
	#
	# Useful when your tested app need to load some external files.
	var test_path: String = "NIT_TESTING_PATH".environ.dirname

	# Run the test suite on the App.
	fun run_test(app: App) do
		var server = new AppThread(host, port, app)
		server.start
		0.1.sleep

		var client = new ClientThread(self)
		client.start
		client.join
		0.1.sleep

		exit 0
	end

	# Redefine this method to implement your test scenario.
	fun client_test do end

	# Regex to catch and hide the port from the output to get consistent results
	var host_re: Regex = "localhost:\[0-9\]+".to_re

	# Execute a System function.
	fun system(cmd: String, title: nullable String)
	do
		title = title or else cmd
		title = title.replace(host_re, "localhost:*****")
		print "\n[Client] {title}"
		sys.system cmd
	end
end
