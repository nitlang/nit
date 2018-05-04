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

module test_commands_html is test

import test_commands
import doc::commands::commands_html

class TestCommandsHtml
	super TestCommands
	test

	fun print_html(html: nullable Writable) do
		if html == null then return
		print html
	end

	# CmdEntity

	fun test_cmd_entity is test do
		var cmd = new CmdEntity(test_view, mentity_name = "test_prog::Character")
		cmd.init_command
		print_html cmd.to_html
	end

	fun test_cmd_comment is test do
		var cmd = new CmdComment(test_view, mentity_name = "test_prog::Character")
		cmd.init_command
		print_html cmd.to_html
	end

	# CmdInheritance

	fun test_cmd_parents is test do
		var cmd = new CmdParents(test_view, mentity_name = "test_prog::Warrior")
		cmd.init_command
		print_html cmd.to_html
	end

	fun test_cmd_ancestors is test do
		var cmd = new CmdAncestors(test_view, mentity_name = "test_prog::Warrior", parents = false)
		cmd.init_command
		print_html cmd.to_html
	end

	fun test_cmd_children is test do
		var cmd = new CmdChildren(test_view, mentity_name = "test_prog::Career")
		cmd.init_command
		print_html cmd.to_html
	end

	fun test_cmd_descendants is test do
		var cmd = new CmdDescendants(test_view, mentity_name = "test_prog::Career")
		cmd.init_command
		print_html cmd.to_html
	end

	# CmdSearch

	fun test_cmd_search is test do
		var cmd = new CmdSearch(test_view, query = "Carer", limit = 10)
		cmd.init_command
		print_html cmd.to_html
	end

	# CmdFeatures

	fun test_cmd_features is test do
		var cmd = new CmdFeatures(test_view, mentity_name = "test_prog::Career")
		cmd.init_command
		print_html cmd.to_html
	end

	# CmdLinearization

	fun test_cmd_lin is test do
		var cmd = new CmdLinearization(test_view, mentity_name = "init")
		cmd.init_command
		print_html cmd.to_html
	end

	# CmdModel

	fun test_cmd_mentities is test do
		var cmd = new CmdModelEntities(test_view, kind = "modules")
		cmd.init_command
		print_html cmd.to_html
	end

	# CmdUsage

	fun test_cmd_new is test do
		var cmd = new CmdNew(test_view, test_builder, mentity_name = "test_prog::Character")
		cmd.init_command
		print_html cmd.to_html
	end

	fun test_cmd_call is test do
		var cmd = new CmdCall(test_view, test_builder, mentity_name = "strength_bonus")
		cmd.init_command
		print_html cmd.to_html
	end

	fun test_cmd_return is test do
		var cmd = new CmdReturn(test_view, mentity_name = "test_prog::Character")
		cmd.init_command
		print_html cmd.to_html
	end

	fun test_cmd_param is test do
		var cmd = new CmdParam(test_view, mentity_name = "test_prog::Character")
		cmd.init_command
		print_html cmd.to_html
	end
end
