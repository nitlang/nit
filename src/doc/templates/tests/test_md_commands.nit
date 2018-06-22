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

module test_md_commands is test

import test_commands
intrude import doc::commands::commands_main
import md_commands

class TestCommandsMd
	super TestCommands
	test

	fun print_md(md: nullable Writable) do
		if md == null then return
		printn md
	end

	# CmdEntity

	fun test_cmd_entity is test do
		var cmd = new CmdEntity(test_model, mentity_name = "test_prog::Character")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_comment is test do
		var cmd = new CmdComment(test_model, mentity_name = "test_prog::Character")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_link is test do
		var cmd = new CmdEntityLink(test_model, mentity_name = "test_prog::Character")
		cmd.init_command
		print_md cmd.to_md
	end

	# CmdInheritance

	fun test_cmd_parents is test do
		var cmd = new CmdParents(test_model, test_main, mentity_name = "test_prog::Warrior")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ancestors is test do
		var cmd = new CmdAncestors(test_model, test_main, mentity_name = "test_prog::Warrior", parents = false)
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_children is test do
		var cmd = new CmdChildren(test_model, test_main, mentity_name = "test_prog::Career")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_descendants is test do
		var cmd = new CmdDescendants(test_model, test_main, mentity_name = "test_prog::Career")
		cmd.init_command
		print_md cmd.to_md
	end

	# CmdSearch

	fun test_cmd_search is test do
		var cmd = new CmdSearch(test_model, query = "Carer", limit = 10)
		cmd.init_command
		print_md cmd.to_md
	end

	# CmdFeatures

	fun test_cmd_features is test do
		var cmd = new CmdFeatures(test_model, mentity_name = "test_prog::Career")
		cmd.init_command
		print_md cmd.to_md
	end

	# CmdLinearization

	fun test_cmd_lin is test do
		var cmd = new CmdLinearization(test_model, test_main, mentity_name = "init")
		cmd.init_command
		print_md cmd.to_md
	end

	# CmdModel

	fun test_cmd_mentities is test do
		var cmd = new CmdModelEntities(test_model, kind = "modules")
		cmd.init_command
		print_md cmd.to_md
	end

	# CmdUsage

	fun test_cmd_new is test do
		var cmd = new CmdNew(test_model, test_builder, mentity_name = "test_prog::Character")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_call is test do
		var cmd = new CmdCall(test_model, test_builder, mentity_name = "strength_bonus")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_return is test do
		var cmd = new CmdReturn(test_model, mentity_name = "test_prog::Character")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_param is test do
		var cmd = new CmdParam(test_model, mentity_name = "test_prog::Character")
		cmd.init_command
		print_md cmd.to_md
	end

	# CmdIni

	fun test_cmd_ini_desc is test do
		var cmd = new CmdIniDescription(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ini_git is test do
		var cmd = new CmdIniGitUrl(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ini_clone is test do
		var cmd = new CmdIniCloneCommand(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ini_issues is test do
		var cmd = new CmdIniIssuesUrl(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ini_maintainer is test do
		var cmd = new CmdIniMaintainer(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ini_contributors is test do
		var cmd = new CmdIniContributors(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ini_license is test do
		var cmd = new CmdIniLicense(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_ini_license_file is test do
		var cmd = new CmdLicenseFile(test_model, mentity_name = "test_prog")
		cmd.init_command
		cmd.file = cmd.file.as(not null).basename # for testing path
		print_md cmd.to_md
	end

	fun test_cmd_ini_license_file_content is test do
		var cmd = new CmdLicenseFileContent(test_model, mentity_name = "test_prog")
		cmd.init_command
		cmd.file = cmd.file.as(not null).basename # for testing path
		print_md cmd.to_md
	end

	fun test_cmd_ini_contrib_file is test do
		var cmd = new CmdContribFile(test_model, mentity_name = "test_prog")
		cmd.init_command
		cmd.file = cmd.file.as(not null).basename # for testing path
		print_md cmd.to_md
	end

	fun test_cmd_ini_contrib_file_content is test do
		var cmd = new CmdContribFileContent(test_model, mentity_name = "test_prog")
		cmd.init_command
		cmd.file = cmd.file.as(not null).basename # for testing path
		print_md cmd.to_md
	end

	# CmdMain

	fun test_cmd_mains is test do
		var cmd = new CmdMains(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_main_compile is test do
		var cmd = new CmdMainCompile(test_model, mentity_name = "test_prog::test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_testing is test do
		var cmd = new CmdTesting(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_man_synopsis is test do
		var cmd = new CmdManSynopsis(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end

	fun test_cmd_man_options is test do
		var cmd = new CmdManOptions(test_model, mentity_name = "test_prog")
		cmd.init_command
		print_md cmd.to_md
	end
end

# Avoid path diff
redef class CmdMainCompile
	redef fun test_path(file) do
		if file == null then return null
		return file.filename.basename
	end
end

# Avoid path diff
redef class CmdTesting
	redef fun test_path(mentity) do
		var file = mentity.location.file
		if file == null then return null
		return file.filename.basename
	end
end
