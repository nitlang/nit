# This file is part of NIT ( http://www.nitlanguage.org ).
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

module test_term is test

import term
import commands::test_commands_catalog

# Nitunit test suite specific to commands
class TestTerm
	super TestCommandsCatalog
	test

	# CmdEntity

	fun test_mentity_full_name is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("test_prog::Character", true)
	end

	fun test_mentity_name is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("Character", true)
	end

	fun test_mentity_empty is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("", true)
	end

	fun test_mentity_not_found is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("Caracter", true)
	end

	fun test_mentity_conflict is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("+", true)
	end

	# CmdDoc

	fun test_comment is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("doc: Character", true)
	end

	fun test_comment_short is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("doc: Character | only-synopsis", true)
	end

	fun test_comment_no_fallback is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("doc: Character | no-fallback", true)
	end

	# CmdInheritance

	fun test_ancestors is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("ancestors: Warrior | parents: true", true)
	end

	fun test_ancestors_without_parents is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("ancestors: Warrior | parents: false", true)
	end

	fun test_parents is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("parents: Warrior", true)
	end

	fun test_children is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("children: Career", true)
	end

	fun test_descendants is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("descendants: Career", true)
	end

	fun test_descendants_without_children is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("descendants: Career | children: false", true)
	end

	# CmdLin

	fun test_lin is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("lin: init | limit: 2", true)
	end

	fun test_lin_no_lin is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("lin: test_prog", true)
	end

	# CmdSearch

	fun test_search is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("search: Caracter | limit: 2", true)
	end

	fun test_search_no_query is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("search: | limit: 1", true)
	end

	# CmdDefs

	fun test_features is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("defs: Character | limit: 3", true)
	end

	# CmdCode

	fun test_code is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("code: Character", true)
	end

	# CmdUsage

	fun test_init is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("new: Elf | limit: 2", true)
	end

	fun test_call is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("call: endurance_bonus", true)
	end

	fun test_return is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("return: Int | limit: 3", true)
	end

	fun test_param is test do
		var parser = new CommandParser(test_view, test_builder)
		parser.execute("param: Career | limit: 3", true)
	end

	# CmdCatalog

	fun test_term_catalog is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		parser.execute("catalog:", true)
	end

	fun test_term_catalog_search is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		parser.execute("search: Caracter | limit: 3", true)
	end

	fun test_term_catalog_stats is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		parser.execute("stats:", true)
	end

	fun test_term_catalog_tags is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		parser.execute("tags:", true)
	end

	fun test_term_catalog_tag is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		parser.execute("tag: game", true)
	end

	fun test_term_catalog_maintain is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		parser.execute("maintain: Alexandre Terrasa", true)
	end

	fun test_term_catalog_contrib is test do
		var parser = new CommandParser(test_view, test_builder, test_catalog)
		parser.execute("contrib: Alexandre Terrasa", true)
	end
end

redef class nitc::Location
	# Avoid location diffs
	redef fun to_s do return "test_location"
end
