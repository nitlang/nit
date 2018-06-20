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

module test_code_index is test

import code_index
import frontend

class TestCodeIndex
	test

	# CodeIndex used in tests
	var test_index: CodeIndex is noinit

	# Initialize test variables
	#
	# Must be called before test execution.
	# FIXME should be before_all
	fun build_test_env is before do
		var test_path = "NIT_TESTING_PATH".environ.dirname
		var test_src = test_path / "../../../tests/test_prog"

		# build model
		var toolcontext = new ToolContext
		var model = new Model
		var modelbuilder = new ModelBuilder(model, toolcontext)
		var mmodules = modelbuilder.parse_full([test_src])
		modelbuilder.run_phases
		toolcontext.run_global_phases(mmodules)

		# create index
		var index = new CodeIndex(toolcontext)
		for mmodule in mmodules do
			index.index_mentity(mmodule)
		end
		test_index = index
		modelbuilder.paths.add test_src
	end

	fun test_find1 is test do
		var query = "import game\n"
		var matches = test_index.match_code(query)
		assert matches.first.document.mentity.full_name == "test_prog::test_prog"
	end

	fun test_find2 is test do
		var query = "import game\nimport rpg\n"
		var matches = test_index.match_code(query)
		assert matches.first.document.mentity.full_name == "test_prog::game"
	end

	fun test_find3 is test do
		var query = "import game\nclass MyGame\nsuper Game\nredef fun start_game do end\nend\n"
		var matches = test_index.match_code(query)
		assert matches.first.document.mentity.full_name == "test_prog::game_examples"
	end

	fun test_find_error is test do
		var query = "error"
		var matches = test_index.match_code(query)
		assert matches.is_empty
	end
end
