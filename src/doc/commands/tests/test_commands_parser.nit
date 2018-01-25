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

module test_commands_parser is test

import test_commands
import doc::commands::tests::test_commands_catalog
import doc::commands::commands_parser

class TestCommandsParser
	super TestCommandsCatalog
	test

	# CmdEntity

	fun test_cmd_parser_comment is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("doc: test_prog::Character")
		assert cmd isa CmdComment
		assert parser.error == null
		assert cmd.mdoc != null
	end

	# CmdInheritance

	fun test_cmd_parser_parents is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("parents: test_prog::Warrior")
		assert cmd isa CmdParents
		assert parser.error == null
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_parser_ancestors is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("ancestors: test_prog::Warrior")
		assert cmd isa CmdAncestors
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	fun test_cmd_parser_ancestors_without_parents is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("ancestors: test_prog::Warrior | parents: false")
		assert cmd isa CmdAncestors
		assert parser.error == null
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_parser_children is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("children: test_prog::Career")
		assert cmd isa CmdChildren
		assert parser.error == null
		assert cmd.results.as(not null).length == 3
	end

	fun test_cmd_parser_descendants is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("descendants: Object")
		assert cmd isa CmdDescendants
		assert parser.error == null
		assert cmd.results.as(not null).length == 20
	end

	fun test_cmd_parser_descendants_without_children is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("descendants: Object | children: false")
		assert cmd isa CmdDescendants
		assert parser.error == null
		assert cmd.results.as(not null).length == 8
	end

	# CmdSearch

	fun test_cmd_parser_search is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("search: Caracter")
		assert cmd isa CmdSearch
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_search_limit is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("search: Caracter | limit: 2")
		assert cmd isa CmdSearch
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	# CmdFeatures

	fun test_cmd_parser_features is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("defs: test_prog::Character")
		assert cmd isa CmdFeatures
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_features_limit is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("defs: test_prog::Character | limit: 2")
		assert cmd isa CmdFeatures
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	# CmdLinearization

	fun test_cmd_parser_lin is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("lin: test_prog::Character")
		assert cmd isa CmdLinearization
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_lin_limit is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("lin: test_prog::Character | limit: 2")
		assert cmd isa CmdLinearization
		assert parser.error == null
		assert cmd.results.as(not null).length == 2
	end

	# CmdCode

	fun test_cmd_parser_code is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("code: test_prog::Character")
		assert cmd isa CmdCode
		assert parser.error == null
		assert cmd.node != null
	end

	# CmdModel

	fun test_cmd_parser_mentities is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("list: modules")
		assert cmd isa CmdModelEntities
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_results_mentities is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("random: modules")
		assert cmd isa CmdRandomEntities
		assert parser.error == null
		assert cmd.results != null
	end

	# CmdGraph

	fun test_cmd_parser_uml is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("uml: test_prog::Career")
		assert cmd isa CmdUML
		assert parser.error == null
		assert cmd.uml != null
	end

	fun test_cmd_parser_inh_graph is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("graph: test_prog::Career")
		assert cmd isa CmdInheritanceGraph
		assert parser.error == null
		assert cmd.graph != null
	end

	fun test_cmd_parser_inh_graph_opts is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("graph: test_prog::Career | cdepth: 2, pdepth: 5")
		assert cmd isa CmdInheritanceGraph
		assert parser.error == null
		assert cmd.graph != null
		assert cmd.cdepth == 2
		assert cmd.pdepth == 5
	end

	# CmdUsage

	fun test_cmd_parser_new is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("new: test_prog::Career")
		assert cmd isa CmdNew
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_call is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("call: strength_bonus")
		assert cmd isa CmdCall
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_return is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("return: test_prog::Career")
		assert cmd isa CmdReturn
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_param is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("param: test_prog::Career")
		assert cmd isa CmdParam
		assert parser.error == null
		assert cmd.results != null
	end

	# CmdCatalog

	fun test_parser_catalog_search is test do
		var parser = new CommandParser(test_view, test_builder)
		var cmd = parser.parse("search: Caracter")
		assert cmd isa CmdSearch
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_packages is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		var cmd = parser.parse("catalog:")
		assert cmd isa CmdCatalogPackages
		assert parser.error == null
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_stats is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		var cmd = parser.parse("stats:")
		assert cmd isa CmdCatalogStats
		assert parser.error == null
		assert cmd.stats != null
	end

	fun test_cmd_parser_catalog_tags is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		var cmd = parser.parse("tags:")
		assert cmd isa CmdCatalogTags
		assert parser.error == null
		assert cmd.packages_count_by_tags != null
	end

	fun test_cmd_parser_catalog_tag is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		var cmd = parser.parse("tag: test")
		assert cmd isa CmdCatalogTag
		assert parser.error == null
		assert cmd.tag == "test"
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_person is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		var cmd = parser.parse("person: Alexandre Terrasa")
		assert cmd isa CmdCatalogPerson
		assert parser.error == null
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
	end

	fun test_cmd_parser_catalog_contributing is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		var cmd = parser.parse("contrib: Alexandre Terrasa")
		assert cmd isa CmdCatalogContributing
		assert parser.error == null
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
		assert cmd.results != null
	end

	fun test_cmd_parser_catalog_maintaining is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		var cmd = parser.parse("maintain: Alexandre Terrasa")
		assert cmd isa CmdCatalogMaintaining
		assert parser.error == null
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
		assert cmd.results != null
	end
end
