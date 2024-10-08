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

module test_commands_catalog is test

import test_commands
import doc::commands::commands_catalog

class TestCommandsCatalog
	super TestCommands
	test

	# Catalog used for tests
	var test_catalog: Catalog is lazy do
		var catalog = new Catalog(test_builder)

		# Compute the poset
		for p in test_model.mpackages do
			var g = p.root
			assert g != null
			test_builder.scan_group(g)
		end
		# Build the catalog
		for mpackage in test_model.mpackages do
			catalog.package_page(mpackage)
			catalog.git_info(mpackage)
			catalog.mpackage_stats(mpackage)
		end
		return catalog
	end

	fun test_cmd_catalog is test do
		var cmd = new CmdCatalogPackages(test_model, test_catalog)
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).first.full_name == "test_prog"
	end

	fun test_cmd_catalog_search is test do
		var cmd = new CmdCatalogSearch(test_model, test_catalog, query = "testprog")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).first.full_name == "test_prog"
		assert cmd.results.as(not null).first isa MPackage
	end

	fun test_cmd_catalog_search_without_filter is test do
		var cmd = new CmdCatalogSearch(test_model, test_catalog, query = "MyGame")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).first.full_name == "test_prog::MyGame"
		assert cmd.results.as(not null).first isa MClass
	end

	fun test_cmd_catalog_search_with_filter is test do
		var filter = new ModelFilter(accept_example = false)
		var cmd = new CmdCatalogSearch(test_model, test_catalog, filter, query = "MGame")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.results.as(not null).first.full_name == "test_prog::Game" # not MyGame
		assert cmd.results.as(not null).first isa MClass
	end

	fun test_cmd_catalog_stats is test do
		var cmd = new CmdCatalogStats(test_model, test_catalog)
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.stats != null
	end

	fun test_cmd_catalog_tags is test do
		var cmd = new CmdCatalogTags(test_model, test_catalog)
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.packages_count_by_tags.as(not null).length == 2
	end

	fun test_cmd_catalog_tag is test do
		var cmd = new CmdCatalogTag(test_model, test_catalog, tag = "test")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.tag == "test"
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_catalog_person is test do
		var cmd = new CmdCatalogPerson(test_model, test_catalog,
			person_name = "Alexandre Terrasa")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
	end

	fun test_cmd_catalog_contributing is test do
		var cmd = new CmdCatalogContributing(test_model, test_catalog,
			person_name = "Alexandre Terrasa")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_catalog_maintaining is test do
		var cmd = new CmdCatalogMaintaining(test_model, test_catalog,
			person_name = "Alexandre Terrasa")
		var res = cmd.init_command
		assert res isa CmdSuccess
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
		assert cmd.results.as(not null).length == 2
	end
end
