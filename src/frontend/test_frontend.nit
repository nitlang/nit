# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Testing Model with `nitunit`
#
# This module introduce useful tools if you want to test Model with nitunit.
# It provides an abstract test suite `TestModel` that can load a `Model` from
# Nit files.
#
# See `TestModel::test_src`.
module test_frontend is test

import frontend
import frontend::parse_examples

# An abstract NitUnit that loads a `Model` from Nit files.
#
# To define a custom test using `TestModel`:
#
# ~~~
# class MyTest
#	super TestModel
#	test
#
#	redef var test_src = "path/to/files"
#
#	fun my_test is test do
#		assert test_model.mmodules.length == 10
#	end
# end
# ~~~
abstract class TestModel

	# Path this unit test is executed in
	var test_path: String = "NIT_TESTING_PATH".environ.dirname is lazy

	# Test program to compile
	#
	# Change this source in your test suite.
	# Default is `$NIT_DIR/tests/test_prog`.
	#
	# You can use either a file or a directory.
	var test_src: String = "NIT_DIR".environ / "tests/test_prog" is lazy

	# ToolContext used for the ModelBuilder
	var test_context = new ToolContext

	# Model used for tests
	var test_model = new Model

	# ModelBuilder used for tests
	var test_builder = new ModelBuilder(test_model, test_context)

	# Mainmodule used for tests
	var test_main: MModule is noinit

	# Build the test environment
	fun build_test_env is before do
		var mmodules = test_builder.parse_full([test_src])
		test_builder.run_phases
		test_context.run_global_phases(mmodules)
		var mainmodule = test_context.make_main_module(mmodules)
		test_main = mainmodule
	end
end
