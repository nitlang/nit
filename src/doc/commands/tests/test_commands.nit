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

# Nitunit for doc commands
module test_commands

import commands_base
import frontend
import frontend::parse_examples

# Nitunit test suite specific to commands
class TestCommands

	# The path to the testunit being executed
	#
	# Used to retrieve the path to sources to compile.
	var test_path: String = "NIT_TESTING_PATH".environ.dirname is lazy

	# Test program to compile
	#
	# Default is `$NIT_DIR/tests/test_prog`.
	var test_src: String = test_path / "../../../../tests/test_prog" is lazy

	# Model used for tests
	var test_model: Model is noinit

	# ModelBuilder used for tests
	var test_builder: ModelBuilder is noinit

	# Mainmodule used for tests
	var test_main: MModule is noinit

	# Initialize test variables
	#
	# Must be called before test execution.
	# FIXME should be before_all
	fun build_test_env is before do
		var toolcontext = new ToolContext

		# build model
		var model = new Model
		var modelbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = modelbuilder.parse_full([test_src])

		# process
		modelbuilder.run_phases
		toolcontext.run_global_phases(mmodules)
		var mainmodule = toolcontext.make_main_module(mmodules)

		test_main = mainmodule
		test_model = model
		test_builder = modelbuilder
	end
end
