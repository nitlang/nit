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

module test_commands_graph is test

import test_commands
import doc::commands::commands_graph

class TestCommandsGraph
	super TestCommands
	test

	fun test_cmd_uml is test do
		var cmd = new CmdUML(test_model, test_main, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.uml != null
	end

	fun test_cmd_uml_bad_format is test do
		var cmd = new CmdUML(test_model, test_main, mentity_name = "test_prog::Character", format = "foo")
		var res = cmd.init_command
		assert res isa ErrorBadGraphFormat
		assert cmd.uml == null
	end

	fun test_cmd_uml_not_found is test do
		var cmd = new CmdUML(test_model, test_main, mentity_name = "strength_bonus")
		var res = cmd.init_command
		assert res isa WarningNoUML
		assert cmd.uml == null
	end

	fun test_cmd_inh_graph is test do
		var cmd = new CmdInheritanceGraph(test_model, test_main, mentity_name = "test_prog::Character")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.graph != null
	end
end
