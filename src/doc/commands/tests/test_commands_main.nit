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

module test_commands_main is test

import test_commands
import doc::commands::commands_main

class TestCommandsMain
	super TestCommands
	test

	fun test_cmd_mains is test do
		var cmd = new CmdMains(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		var results = cmd.results
		assert results != null
		assert results.length == 1
		assert results.first.full_name == "test_prog::test_prog"
	end

	fun test_cmd_main_compile is test do
		var cmd = new CmdMainCompile(test_model, mentity_name = "test_prog::test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess

		var command = cmd.command
		assert command != null
		assert command.has_prefix("nitc ")
		assert command.has_suffix("test_prog.nit")
	end

	fun test_cmd_testing is test do
		var cmd = new CmdTesting(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess

		var command = cmd.command
		assert command != null
		assert command.has_prefix("nitunit ")
		assert command.has_suffix("/tests")
	end

	fun test_cmd_man_synopsis is test do
		var cmd = new CmdManSynopsis(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.synopsis == "test_prog [*options*] ARGS..."
	end

	fun test_cmd_man_options is test do
		var cmd = new CmdManOptions(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess

		var options = cmd.options
		assert options != null
		assert options["--opt1"] == "Option 1."
		assert options["--opt2"] == "Option 2."
	end
end
