# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module test_commands_model is test

import test_commands
import doc::commands::commands_model

class TestCommandsModel
	super TestCommands
	test

	# CmdEntity

	fun test_cmd_entity is test do
		var cmd = new CmdEntity(test_view, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.mentity.as(not null).full_name == "test_prog::Character"
	end

	fun test_cmd_entity_not_found is test do
		var cmd = new CmdEntity(test_view, mentity_name = "test_prog::Characterzz")
		var res = cmd.init_command
		assert res isa ErrorMEntityNotFound
		assert res.suggestions.first.full_name == "test_prog::Character"
	end

	fun test_cmd_entity_conflict is test do
		var cmd = new CmdEntity(test_view, mentity_name = "+")
		var res = cmd.init_command
		assert res isa ErrorMEntityConflict
		assert res.conflicts.length == 2
	end

	fun test_cmd_entity_no_name is test do
		var cmd = new CmdEntity(test_view)
		var res = cmd.init_command
		assert res isa ErrorMEntityNoName
	end

	# CmdComment

	fun test_cmd_comment is test do
		var cmd = new CmdComment(test_view, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.mdoc != null
	end

	fun test_cmd_comment_no_mdoc is test do
		var cmd = new CmdComment(test_view, mentity_name = "test_prog::Character", fallback = false)
		var res = cmd.init_command
		assert res isa WarningNoMDoc
	end

	# CmdInheritance

	fun test_cmd_parents is test do
		var cmd = new CmdParents(test_view, mentity_name = "test_prog::Warrior")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_ancestors is test do
		var cmd = new CmdAncestors(test_view, mentity_name = "test_prog::Warrior")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 2
	end

	fun test_cmd_ancestorsi_without_parents is test do
		var cmd = new CmdAncestors(test_view, mentity_name = "test_prog::Warrior", parents = false)
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_children is test do
		var cmd = new CmdChildren(test_view, mentity_name = "test_prog::Career")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 3
	end

	fun test_cmd_descendants is test do
		var cmd = new CmdDescendants(test_view, mentity_name = "test_prog::Career", children = false)
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 0
	end

	# CmdSearch

	fun test_cmd_search is test do
		var cmd = new CmdSearch(test_view, query = "Carer")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).first.full_name == "test_prog::Career"
	end

	fun test_cmd_search_no_query is test do
		var cmd = new CmdSearch(test_view)
		var res = cmd.init_command
		assert res isa ErrorNoQuery
	end

	# CmdFeatures

	fun test_cmd_features is test do
		var cmd = new CmdFeatures(test_view, mentity_name = "test_prog::Career")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 10
	end

	fun test_cmd_features_no_features is test do
		var cmd = new CmdFeatures(test_view, mentity_name = "test_prog$Career$strength_bonus")
		var res = cmd.init_command
		assert res isa WarningNoFeatures
	end

	# CmdLinearization

	fun test_cmd_lin is test do
		var cmd = new CmdLinearization(test_view, mentity_name = "init")
		var res = cmd.init_command
		assert res isa CmdSuccess
		print cmd.results.as(not null)
		assert cmd.results.as(not null).length == 10
	end

	fun test_cmd_lin_no_lin is test do
		var cmd = new CmdLinearization(test_view, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa WarningNoLinearization
	end

	# CmdCode

	fun test_cmd_code is test do
		var cmd = new CmdCode(test_view, test_builder, mentity_name = "test_prog::Career")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.node isa AStdClassdef
	end

	fun test_cmd_code_no_code is test do
		var cmd = new CmdCode(test_view, test_builder, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa WarningNoCode
	end

	# CmdModel

	fun test_cmd_results is test do
		var cmd = new CmdModelEntities(test_view, kind = "modules")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 10
	end

	fun test_cmd_results_random is test do
		var cmd = new CmdRandomEntities(test_view, kind = "packages")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 2
	end
end
