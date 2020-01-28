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

module test_commands_http is test

import doc::commands::test_commands_catalog
import doc::commands::commands_http

class TestCommandsHttp
	super TestCommandsCatalog
	test

	# Http parser to create Http requests
	var http_parser = new HttpRequestParser

	# Create a new and initialized http request from the `url` string
	fun new_request(url: String, route_pattern: nullable String): HttpRequest do
		if route_pattern == null then route_pattern = "/:id"
		var route = new Route(route_pattern, new TestDummyAction)
		var req = http_parser.parse_http_request("GET {url} HTTP/1.0")
		assert req != null
		req.uri_params = route.parse_params(req.uri)
		return req
	end

	# CmdEntity

	fun test_cmd_http_entity is test do
		var req = new_request("/test_prog::Character")
		var cmd = new CmdEntity(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.mentity.as(not null).full_name == "test_prog::Character"
	end

	fun test_cmd_http_entity_not_found is test do
		var req = new_request("/Characterz")
		var cmd = new CmdEntity(test_model)
		var res = cmd.http_init(req)
		assert res isa ErrorMEntityNotFound
		assert res.suggestions.first.full_name == "test_prog::Character"
	end

	fun test_cmd_http_entity_conflict is test do
		var req = new_request("/+")
		var cmd = new CmdEntity(test_model)
		var res = cmd.http_init(req)
		assert res isa ErrorMEntityConflict
		assert res.conflicts.length == 2
	end

	# CmdComment

	fun test_cmd_http_comment is test do
		var req = new_request("/test_prog::Character")
		var cmd = new CmdComment(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.mdoc != null
	end

	fun test_cmd_http_comment_no_mdoc is test do
		var req = new_request("/test_prog::Character?fallback=false")
		var cmd = new CmdComment(test_model)
		var res = cmd.http_init(req)
		assert res isa WarningNoMDoc
	end

	# CmdEntityLink

	fun test_cmd_http_link is test do
		var req = new_request("/test_prog::Character")
		var cmd = new CmdEntityLink(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.text == "Character"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_http_link_with_text is test do
		var req = new_request("/test_prog::Character?text=foo")
		var cmd = new CmdEntityLink(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.text == "foo"
		assert cmd.title == "Characters can be played by both the human or the machine."
	end

	fun test_cmd_http_link_with_title is test do
		var req = new_request("/test_prog::Character?title=bar")
		var cmd = new CmdEntityLink(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.text == "Character"
		assert cmd.title == "bar"
	end

	fun test_cmd_http_link_with_text_and_title is test do
		var req = new_request("/test_prog::Character?text=foo&title=bar")
		var cmd = new CmdEntityLink(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.text == "foo"
		assert cmd.title == "bar"
	end

	# CmdInheritance

	fun test_cmd_http_parents is test do
		var req = new_request("/test_prog::Warrior")
		var cmd = new CmdParents(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_http_ancestors is test do
		var req = new_request("/test_prog::Warrior")
		var cmd = new CmdAncestors(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 2
	end

	fun test_cmd_http_ancestorsi_without_parents is test do
		var req = new_request("/test_prog::Warrior?parents=false")
		var cmd = new CmdAncestors(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_http_children is test do
		var req = new_request("/test_prog::Career")
		var cmd = new CmdChildren(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 3
	end

	fun test_cmd_http_descendants is test do
		var req = new_request("/test_prog::Career?children=false")
		var cmd = new CmdDescendants(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 0
	end

	fun test_cmd_http_ancestors_with_filter_match is test do
		var req = new_request("/test_prog::Warrior?match=Object")
		var cmd = new CmdAncestors(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 1
	end

	# CmdSearch

	fun test_cmd_http_search is test do
		var req = new_request("/?q=Carer&l=1")
		var cmd = new CmdSearch(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).first.full_name == "test_prog::Career"
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_http_search_no_query is test do
		var req = new_request("/")
		var cmd = new CmdSearch(test_model)
		var res = cmd.http_init(req)
		assert res isa ErrorNoQuery
	end

	# CmdFeatures

	fun test_cmd_http_features is test do
		var req = new_request("/test_prog::Character?l=10")
		var cmd = new CmdFeatures(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 10
	end

	fun test_cmd_http_features_no_features is test do
		var req = new_request("/test_prog$Career$strength_bonus?l=10")
		var cmd = new CmdFeatures(test_model)
		var res = cmd.http_init(req)
		assert res isa WarningNoFeatures
	end

	fun test_cmd_http_features_with_filter_inherited is test do
		var req = new_request("/test_prog::TestGame?inherited=TestGame")
		var cmd = new CmdFeatures(test_model)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 4
	end

	# CmdLinearization

	fun test_cmd_http_lin is test do
		var req = new_request("/init?l=10")
		var cmd = new CmdLinearization(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 9
	end

	fun test_cmd_http_lin_no_lin is test do
		var req = new_request("/test_prog?l=10")
		var cmd = new CmdLinearization(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa WarningNoLinearization
	end

	# CmdCode

	fun test_cmd_http_code is test do
		var req = new_request("/test_prog::Career")
		var cmd = new CmdEntityCode(test_model, test_builder)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.node isa AStdClassdef
		assert cmd.format == "raw"
	end

	fun test_cmd_http_code_format is test do
		var req = new_request("/test_prog::Career?format=html")
		var cmd = new CmdEntityCode(test_model, test_builder)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.node isa AStdClassdef
		assert cmd.format == "html"
	end

	fun test_cmd_http_code_no_code is test do
		var req = new_request("/test_prog")
		var cmd = new CmdEntityCode(test_model, test_builder)
		var res = cmd.http_init(req)
		assert res isa WarningNoCode
	end

	# CmdModel

	fun test_cmd_http_results is test do
		var req = new_request("/?kind=modules&l=2")
		var cmd = new CmdModelEntities(test_model, kind = "modules")
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 2
	end

	fun test_cmd_http_results_random is test do
		var req = new_request("/?kind=packages&l=1")
		var cmd = new CmdRandomEntities(test_model, kind = "packages")
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).length == 1
	end

	# CmdGraph

	fun test_cmd_http_uml is test do
		var req = new_request("/test_prog::Character?format=svg")
		var cmd = new CmdUML(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.uml != null
		assert cmd.format == "svg"
	end

	fun test_cmd_http_uml_not_found is test do
		var req = new_request("/strength_bonus")
		var cmd = new CmdUML(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa WarningNoUML
		assert cmd.format == "dot"
		assert cmd.uml == null
	end

	fun test_cmd_http_inh_graph is test do
		var req = new_request("/test_prog::Character?pdepth=1&cdepth=1")
		var cmd = new CmdInheritanceGraph(test_model, test_main)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.graph != null
		assert cmd.pdepth == 1
		assert cmd.cdepth == 1
	end

	# CmdCatalog

	fun test_cmd_http_catalog_search is test do
		var req = new_request("/?q=testprog&l=1")
		var cmd = new CmdCatalogSearch(test_model, test_catalog)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.results.as(not null).first.full_name == "test_prog"
		assert cmd.results.as(not null).first isa MPackage
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_http_catalog_tag is test do
		var req = new_request("/test", "/:tid")
		var cmd = new CmdCatalogTag(test_model, test_catalog)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.tag == "test"
		assert cmd.results.as(not null).length == 1
	end

	fun test_cmd_http_catalog_person is test do
		var req = new_request("/Alexandre%20Terrasa", "/:pid")
		var cmd = new CmdCatalogPerson(test_model, test_catalog)
		var res = cmd.http_init(req)
		assert res isa CmdSuccess
		assert cmd.person.as(not null).name == "Alexandre Terrasa"
	end
end

# Dummy action that does nothing
#
# Used to build the test route / http request.
private class TestDummyAction
	super Action
end

redef class CmdUML
	# FIXME linerarization
	redef fun http_init(req) do return super
end
