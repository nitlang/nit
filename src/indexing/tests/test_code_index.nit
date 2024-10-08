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

module test_code_index is test

import code_index
import test_frontend

class TestCodeIndex
	super TestModel
	test

	# CodeIndex used in tests
	var test_index = new CodeIndex(test_context)

	redef fun build_test_env do
		super
		for mmodule in test_model.mmodules do
			test_index.index_mentity(mmodule)
		end
		test_builder.paths.add test_src
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
