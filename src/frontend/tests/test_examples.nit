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

module test_examples is test

import frontend
import parse_examples
import model_collect

class TestExample
	test

	# The path to the testunit being executed
	#
	# Used to retrieve the path to sources to compile.
	var test_path: String = "NIT_TESTING_PATH".environ.dirname is lazy

	# Test program to compile
	#
	# Default is `$NIT_DIR/tests/test_prog`.
	var test_src: String = test_path / "../../../tests/test_prog" is lazy

	fun test_model_examples is test do
		var toolcontext = new ToolContext

		# build model
		var model = new Model
		var modelbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = modelbuilder.parse_full([test_src])

		# process
		modelbuilder.run_phases
		toolcontext.run_global_phases(mmodules)

		var filters = new ModelFilter(accept_example = true)
		for mentity in model.collect_mentities(filters) do
			if not mentity.is_example then continue

			var mexample = mentity.mexample
			if mexample == null then continue

			print "{mentity.full_name} provides example for:"
			for oentity, score in mexample.example_for do
				print " * {oentity.full_name} ({score})"
			end
		end
	end
end
