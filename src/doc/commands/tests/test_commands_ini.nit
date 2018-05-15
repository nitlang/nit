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

module test_commands_ini is test

import test_commands
import doc::commands::commands_ini

class TestCommandsIni
	super TestCommands
	test

	# CmdIni

	fun test_cmd_ini_desc is test do
		var cmd = new CmdIniDescription(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.desc == "Dummy program used for testing Nit tools"
	end

	fun test_cmd_ini_git is test do
		var cmd = new CmdIniGitUrl(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.url == "https://github.com/nitlang/nit.git"
	end

	fun test_cmd_ini_clone is test do
		var cmd = new CmdIniCloneCommand(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.url == "https://github.com/nitlang/nit.git"
		assert cmd.command == "git clone https://github.com/nitlang/nit.git"
	end

	fun test_cmd_ini_issues is test do
		var cmd = new CmdIniIssuesUrl(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.url == "https://github.com/nitlang/nit/issues"
	end

	fun test_cmd_ini_maintainer is test do
		var cmd = new CmdIniMaintainer(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.maintainer == "John Doe <jdoe@example.com> (http://www.example.com/~jdoe), Spider-Man"
	end

	fun test_cmd_ini_contributors is test do
		var cmd = new CmdIniContributors(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.contributors == [
			"Riri <riri@example.com>",
			"Fifi (http://www.example.com/~fifi)",
			"Loulou"]
	end

	fun test_cmd_ini_license is test do
		var cmd = new CmdIniLicense(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.license == "Apache-2.0"
	end

	fun test_cmd_ini_license_file is test do
		var cmd = new CmdLicenseFile(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess

		var file = cmd.file
		assert file != null
		assert file.basename == "LICENSE.md"
	end

	fun test_cmd_ini_license_file_content is test do
		var cmd = new CmdLicenseFileContent(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess

		var content = cmd.content
		assert content != null
		assert not content.is_empty
	end

	fun test_cmd_ini_contrib_file is test do
		var cmd = new CmdContribFile(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess

		var file = cmd.file
		assert file != null
		assert file.basename == "CONTRIBUTING.md"
	end

	fun test_cmd_ini_contrib_file_content is test do
		var cmd = new CmdContribFileContent(test_model, mentity_name = "test_prog")
		var res = cmd.init_command
		assert res isa CmdSuccess

		var content = cmd.content
		assert content != null
		assert not content.is_empty
	end
end
