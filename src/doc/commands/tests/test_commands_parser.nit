# This file is part of NIT ( https://nitlanguage.org ).
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

module test_commands_parser is test

import test_commands
import doc::commands::tests::test_commands_catalog
import doc::commands::commands_parser

class TestCommandsParser
	super TestCommandsCatalog
	test

	# CmdEntity

	fun test_cmd_parser_comment is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("doc: test_prog::Character")
		assert cmd isa CmdComment
		assert parser.error == null
		assert cmd.mdoc != null
	end

	fun test_cmd_parser_link is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("link: test_prog::Character")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "Character"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_parser_link_with_text is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("link: test_prog::Character | text: foo")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "foo"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_parser_link_with_title is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("link: test_prog::Character | title: bar")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "Character"
		assert cmd.title == "bar"
	end

	fun test_cmd_parser_link_with_text_and_title is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("link: test_prog::Character | text: foo, title: bar")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "foo"
		assert cmd.title == "bar"
	end

	fun test_cmd_parser_short_link is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("test_prog::Character")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "Character"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_parser_short_link_with_text is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("test_prog::Character | text: foo")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "foo"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_parser_short_link_with_title is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("test_prog::Character | title: bar")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "Character"
		assert cmd.title == "bar"
	end

	fun test_cmd_parser_short_link_with_text_and_title is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("test_prog::Character | text: foo, title: bar")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "foo"
		assert cmd.title == "bar"
	end

	fun test_cmd_parser_short_link_with_name is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("Character")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "Character"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_parser_short_link_with_name_and_text is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("Character | text: foo")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "foo"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_parser_short_link_with_name_and_title is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("Character | title: bar")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "Character"
		assert cmd.title == "bar"
	end

	fun test_cmd_parser_short_link_with_name_and_text_and_title is test do
		var parser = new CommandParser(test_model, test_main, test_builder)
		var cmd = parser.parse("Character | text: foo, title: bar")
		assert cmd isa CmdEntityLink
		assert parser.error == null
		assert cmd.text == "foo"
		assert cmd.title == "bar"
	end

	# CmdInheritance

	fun test_cmd_parser_parents is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("parents: test_prog::Warrior")
		assert cmd isa CmdParents
		assert parser.error == null
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_parser_ancestors is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ancestors: test_prog::Warrior")
		assert cmd isa CmdAncestors
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	fun test_cmd_parser_ancestors_without_parents is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ancestors: test_prog::Warrior | no-parents")
		assert cmd isa CmdAncestors
		assert parser.error == null
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_parser_children is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("children: test_prog::Career")
		assert cmd isa CmdChildren
		assert parser.error == null
		assert cmd.results.as(not null).length == 3
	end

	fun test_cmd_parser_descendants is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("descendants: Object")
		assert cmd isa CmdDescendants
		assert parser.error == null
		assert cmd.results.as(not null).length == 22
	end

	fun test_cmd_parser_descendants_without_children is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("descendants: Object | no-children: true")
		assert cmd isa CmdDescendants
		assert parser.error == null
		assert cmd.results.as(not null).length == 9
	end

	fun test_cmd_parser_ancestors_with_filter_match is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ancestors: test_prog::Warrior | match: Object")
		assert cmd isa CmdAncestors
		assert parser.error == null
		assert cmd.results.as(not null).length == 1
	end

	# CmdSearch

	fun test_cmd_parser_search is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("search: Caracter")
		assert cmd isa CmdSearch
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_search_limit is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("search: strength | limit: 2")
		assert cmd isa CmdSearch
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	# CmdFeatures

	fun test_cmd_parser_features is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("defs: test_prog::Character")
		assert cmd isa CmdFeatures
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_features_limit is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("defs: test_prog::Character | limit: 2")
		assert cmd isa CmdFeatures
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	fun test_cmd_parser_with_filter_inherited is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("defs: test_prog::TestGame | inherited: TestGame")
		assert cmd isa CmdFeatures
		assert parser.error == null
		assert cmd.results.as(not null).length == 4
	end

	# CmdLinearization

	fun test_cmd_parser_lin is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("lin: test_prog::Character")
		assert cmd isa CmdLinearization
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_lin_limit is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("lin: test_prog::Character | limit: 2")
		assert cmd isa CmdLinearization
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	# CmdCode

	fun test_cmd_parser_code is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("code: test_prog::Character")
		assert cmd isa CmdEntityCode
		assert parser.error == null
		assert cmd.node != null
	end

	# CmdModel

	fun test_cmd_parser_mentities is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("list: modules")
		assert cmd isa CmdModelEntities
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_results_mentities is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("random: modules")
		assert cmd isa CmdRandomEntities
		assert parser.error == null
		assert cmd.results != null
	end

	# CmdGraph

	fun test_cmd_parser_uml is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("uml: test_prog::Career")
		assert cmd isa CmdUML
		assert parser.error == null
		assert cmd.uml != null
	end

	fun test_cmd_parser_inh_graph is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("graph: test_prog::Career")
		assert cmd isa CmdInheritanceGraph
		assert parser.error == null
		assert cmd.graph != null
	end

	fun test_cmd_parser_inh_graph_opts is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("graph: test_prog::Career | cdepth: 2, pdepth: 5")
		assert cmd isa CmdInheritanceGraph
		assert parser.error == null
		assert cmd.graph != null
		assert cmd.cdepth == 2
		assert cmd.pdepth == 5
	end

	# CmdUsage

	fun test_cmd_parser_new is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("new: test_prog::Career")
		assert cmd isa CmdNew
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_call is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("call: strength_bonus")
		assert cmd isa CmdCall
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_return is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("return: test_prog::Career")
		assert cmd isa CmdReturn
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_param is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("param: test_prog::Career")
		assert cmd isa CmdParam
		assert parser.error == null
		assert cmd.results != null
	end

	# CmdCatalog

	fun test_parser_catalog_search is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("search: Caracter")
		assert cmd isa CmdSearch
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_packages is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("catalog:")
		assert cmd isa CmdCatalogPackages
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_stats is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("stats:")
		assert cmd isa CmdCatalogStats
		assert parser.error == null
		assert cmd.stats != null
	end

	fun test_cmd_parser_catalog_tags is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("tags:")
		assert cmd isa CmdCatalogTags
		assert parser.error == null
		assert cmd.packages_count_by_tags != null
	end

	fun test_cmd_parser_catalog_tag is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("tag: test")
		assert cmd isa CmdCatalogTag
		assert parser.error == null
		assert cmd.tag == "test"
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_person is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("person: Alexandre Terrasa")
		assert cmd isa CmdCatalogPerson
		assert parser.error == null
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
	end

	fun test_cmd_parser_catalog_contributing is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("contrib: Alexandre Terrasa")
		assert cmd isa CmdCatalogContributing
		assert parser.error == null
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_maintaining is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("maintain: Alexandre Terrasa")
		assert cmd isa CmdCatalogMaintaining
		assert parser.error == null
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
		assert cmd.results != null
	end

	# CmdInit

	fun test_cmd_parser_ini_desc is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ini-desc: test_prog")
		assert cmd isa CmdIniDescription
		assert parser.error == null
		assert cmd.desc.as(not null) == "Dummy program used for testing Nit tools"
	end

	fun test_cmd_parser_ini_git is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ini-git: test_prog")
		assert cmd isa CmdIniGitUrl
		assert parser.error == null
		assert cmd.url == "https://github.com/nitlang/nit.git"
	end

	fun test_cmd_parser_ini_clone is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("git-clone: test_prog")
		assert cmd isa CmdIniCloneCommand
		assert parser.error == null
		assert cmd.url == "https://github.com/nitlang/nit.git"
		assert cmd.command == "git clone https://github.com/nitlang/nit.git"
	end

	fun test_cmd_parser_ini_issues is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ini-issues: test_prog")
		assert cmd isa CmdIniIssuesUrl
		assert parser.error == null
		assert cmd.url == "https://github.com/nitlang/nit/issues"
	end

	fun test_cmd_parser_ini_maintainer is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ini-maintainer: test_prog")
		assert cmd isa CmdIniMaintainer
		assert parser.error == null
		assert cmd.maintainer == "John Doe <jdoe@example.com> (http://www.example.com/~jdoe), Spider-Man"
	end

	fun test_cmd_parser_ini_contributors is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ini-contributors: test_prog")
		assert cmd isa CmdIniContributors
		assert parser.error == null
		assert cmd.contributors == [
			"Riri <riri@example.com>",
			"Fifi (http://www.example.com/~fifi)",
			"Loulou"]
	end

	fun test_cmd_parser_ini_license is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("ini-license: test_prog")
		assert cmd isa CmdIniLicense
		assert parser.error == null
		assert cmd.license == "Apache-2.0"
	end

	fun test_cmd_parser_ini_license_file is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("license-file: test_prog")
		assert cmd isa CmdLicenseFile
		assert parser.error == null
		var file = cmd.file
		assert file != null
		assert file.basename == "LICENSE.md"
	end

	fun test_cmd_parser_ini_license_content is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("license-content: test_prog")
		assert cmd isa CmdLicenseFileContent
		assert parser.error == null
		var content = cmd.content
		assert content != null
		assert not content.is_empty
	end

	fun test_cmd_parser_ini_contrib_file is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("contrib-file: test_prog")
		assert cmd isa CmdContribFile
		assert parser.error == null
		var file = cmd.file
		assert file != null
		assert file.basename == "CONTRIBUTING.md"
	end

	fun test_cmd_parser_ini_contrib_content is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("contrib-content: test_prog")
		assert cmd isa CmdContribFileContent
		assert parser.error == null
		var content = cmd.content
		assert content != null
		assert not content.is_empty
	end

	# CmdMain

	fun test_cmd_parser_mains is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("mains: test_prog")
		assert cmd isa CmdMains
		assert parser.error == null

		var results = cmd.results
		assert results != null
		assert results.length == 1
		assert results.first.full_name == "test_prog::test_prog"
	end

	fun test_cmd_parser_main_compile is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("main-compile: test_prog::test_prog")
		assert cmd isa CmdMainCompile
		assert parser.error == null

		var command = cmd.command
		assert command != null
		assert command.has_prefix("nitc ")
		assert command.has_suffix("test_prog.nit")
	end

	fun test_cmd_parser_testing is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("testing: test_prog")
		assert cmd isa CmdTesting
		assert parser.error == null

		var command = cmd.command
		assert command != null
		assert command.has_prefix("nitunit ")
		assert command.has_suffix("/tests")
	end

	fun test_cmd_man_synopsis is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("main-run: test_prog")
		assert cmd isa CmdManSynopsis
		assert parser.error == null

		assert cmd.synopsis == "test_prog [*options*] ARGS..."
	end

	fun test_cmd_man_opions is test do
		var parser = new CommandParser(test_model, test_main, test_builder, test_catalog)
		var cmd = parser.parse("main-opts: test_prog")
		assert cmd isa CmdManOptions
		assert parser.error == null

		var options = cmd.options
		assert options != null
		assert options["--opt1"] == "Option 1."
		assert options["--opt2"] == "Option 2."
	end
end
