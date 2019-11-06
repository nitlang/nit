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

module test_commands_usage is test

import test_commands
import doc::commands::commands_usage

class TestCommandsUsage
	super TestCommands
	test

	fun test_cmd_new is test do
		var cmd = new CmdNew(test_model, test_builder, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results != null
	end

	fun test_cmd_new_not_class is test do
		var cmd = new CmdNew(test_model, test_builder, mentity_name = "strength_bonus")
		var res = cmd.init_command
		assert res isa ErrorNotClass
	end

	fun test_cmd_call is test do
		var cmd = new CmdCall(test_model, test_builder, mentity_name = "strength_bonus")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results != null
	end

	fun test_cmd_call_not_prop is test do
		var cmd = new CmdCall(test_model, test_builder, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa ErrorNotProperty
	end

	fun test_cmd_return is test do
		var cmd = new CmdReturn(test_model, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results != null
	end

	fun test_cmd_param is test do
		var cmd = new CmdParam(test_model, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results != null
	end
end
