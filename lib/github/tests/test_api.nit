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

module test_api is test

intrude import api

# GithubAPI testing
#
# To avoid test flakyness we test the GithubAPI against a mock of the real one.
# For each api request we return a cache file of the real API response body.
#
# Cache files can be automatically created and updated by setting
# `update_responses_cache` to `true` then running `nitunit`.
class MockGithubAPI
	super GithubAPI

	# Mock so it returns the response from a file
	#
	# See `update_responses_cache`.
	redef fun send(method, path, headers, body) do
		print path # for debugging

		assert has_response(path)

		if update_responses_cache then
			var file = response_file(path)
			save_actual_response(path, file)
		end

		var response = response_string(path)
		if response_is_error(path) then
			last_error = new GithubAPIError(
				response.parse_json.as(JsonObject)["message"].as(String),
				response_code(path).to_i,
				path
			)
			was_error = true
			return null
		end
		return response
	end

	var test_responses: Map[String, String] do
		var map = new HashMap[String, String]
		map["/user"] = "user_Morriar"
		map["/users/Morriar"] = "user_Morriar"
		map["/repos/nitlang/nit"] = "repo_nit"
		map["/repos/nitlang/nit/labels/ok_will_merge"] = "repo_labels_ok_will_merge"
		map["/repos/nitlang/nit/milestones/4"] = "repo_milestones_4"
		map["/repos/nitlang/nit/branches"] = "repo_branches_nit"
		map["/repos/nitlang/nit/branches/master"] = "repo_branches_master"
		map["/repos/nitlang/nit/issues/1000"] = "repo_issues_1000"
		map["/repos/nitlang/nit/issues/comments/6020149"] = "repo_issues_comments_6020149"
		map["/repos/nitlang/nit/issues/events/199674194"] = "repo_issues_events_199674194"
		map["/repos/nitlang/nit/pulls/1000"] = "repo_pulls_1000"
		map["/repos/nitlang/nit/commits/64ce1f"] = "repo_commits_64ce1f"
		map["/repos/nitlang/nit/comments/8982707"] = "repo_comments_8982707"
		map["/repos/nitlang/nit/pulls/comments/21010363"] = "repo_pulls_comment_21010363"
		# errors
		map["/users/not_found/not_found"] = "errors_404"
		return map
	end

	# Does `self` have a mock response for Github `path`?
	fun has_response(path: String): Bool do
		return test_responses.has_key(path)
	end

	# Root responses cache directory
	var responses_dir: String is lazy do
		var path = "NIT_TESTING_PATH".environ.dirname / "mock"
		path.mkdir
		return path
	end

	# Returns the response file path for a Github `path`
	fun response_file(path: String): String do
		assert has_response(path)
		return "{responses_dir / test_responses[path]}.res"
	end

	# Returns the response body string for a Github `path`
	fun response_string(path: String): String do
		var file = response_file(path)
		assert file.file_exists
		return file.to_path.read_all
	end

	# Is this response a simulated error?
	fun response_is_error(path: String): Bool do
		assert has_response(path)
		return test_responses[path].has_prefix("errors_")
	end

	# Status code of a simulated error
	#
	# See `response_is_error`.
	fun response_code(path: String): String do
		assert response_is_error(path)
		return test_responses[path].split("_").last
	end

	# Response caching

	# Activate caching
	#
	# Change this value to `true` then run nitunit to cache the responses
	# from the Github API.
	#
	# Default is `false`.
	var update_responses_cache = false

	# Save the actual Github API response body for `uri` to a `file`
	private fun save_actual_response(uri, file: String) do
		assert update_responses_cache

		var request = new CurlHTTPRequest("{api_url}{sanitize_uri(uri)}")
		request.user_agent = actual_api.user_agent
		request.headers = actual_api.new_headers
		var response = request.execute

		if response isa CurlResponseSuccess then
			response.body_str.write_to_file(file)
		else if response isa CurlResponseFailed then
			response.error_msg.write_to_file(file)
		else abort

		print "Response to `{uri}` saved at `{file}`"
	end

	# Actual GithubCurl instance used for caching
	private var actual_api = new GithubAPI(get_github_oauth, "nitunit")
end

class TestGithubAPI
	test

	fun api: MockGithubAPI do return new MockGithubAPI("test", "test")

	fun test_deserialize is test do
		var response = api.response_string("/users/Morriar")
		var obj = api.deserialize(response)
		assert obj isa User
		assert obj.login == "Morriar"
	end

	fun test_sanitize_url is test do
		# TODO better tests
		assert api.sanitize_uri("/repos/Nit with spaces/") == "/repos/Nit%20with%20spaces/"
	end

	fun test_get is test do
		var api = self.api
		var obj = api.get("/users/Morriar")
		assert not api.was_error
		assert api.last_error == null
		assert obj != null
		assert obj.parse_json.as(JsonObject)["login"] == "Morriar"
	end

	fun test_get_404 is test do
		var api = self.api
		var res = api.get("/users/not_found/not_found")
		assert res == null
		assert api.was_error
		var err = api.last_error
		assert err isa GithubAPIError
		assert err.status_code == 404
		assert err.message == "Not Found"
	end

	fun test_load_from_github is test do
		var api = self.api
		var obj = api.load_from_github("/users/Morriar")
		assert not api.was_error
		assert api.last_error == null
		assert obj isa User
		assert obj.login == "Morriar"
	end

	fun test_load_from_github_404 is test do
		var api = self.api
		var res = api.load_from_github("/users/not_found/not_found")
		assert res == null
		assert api.was_error
		var err = api.last_error
		assert err isa GithubAPIError
		assert err.status_code == 404
		assert err.message == "Not Found"
	end

	# TODO test more error cases

	fun test_get_auth_user is test do
		var user = api.load_auth_user
		assert user isa User
		assert user.login == "Morriar"
		assert user.avatar_url == "https://avatars2.githubusercontent.com/u/583144?v=4"
		assert user.name == "Alexandre Terrasa"
		assert user.email == "alexandre@moz-code.org"
		assert user.blog == "moz-code.org"
	end

	fun test_get_user is test do
		var user = api.load_user("Morriar")
		assert user isa User
		assert user.login == "Morriar"
		assert user.avatar_url == "https://avatars2.githubusercontent.com/u/583144?v=4"
		assert user.name == "Alexandre Terrasa"
		assert user.email == "alexandre@moz-code.org"
		assert user.blog == "moz-code.org"
	end

	fun test_get_repo is test do
		var repo = api.load_repo("nitlang/nit")
		assert repo isa Repo
		assert repo.full_name == "nitlang/nit"
		assert repo.name == "nit"
		assert repo.owner.login == "nitlang"
		assert repo.default_branch == "master"
	end

	private var repo: Repo is lazy do return api.load_repo("nitlang/nit").as(not null)

	fun test_get_branches is test do
		var branches = api.load_repo_branches(repo)
		assert branches.length == 2
		assert branches.first.name == "master"
		assert branches.last.name == "next"
	end

	# TODO issues
	# TODO repo_last_issue
	# TODO labels
	# TODO milestones
	# TODO pulls
	# TODO contrib_stats

	fun test_get_branch is test do
		var branch = api.load_branch(repo, "master")
		assert branch isa Branch
		assert branch.name == "master"
	end

	# TODO branch commits

	fun test_get_commit is test do
		var commit = api.load_commit(repo, "64ce1f")
		assert commit isa Commit
		assert commit.sha == "64ce1f587209024f5de46d06c70526a569ff537f"
		# TODO other fields
	end

	fun test_get_issue is test do
		var issue = api.load_issue(repo, 1000)
		assert issue isa Issue
		assert issue.number == 1000
		assert issue.title == "Raise nitc from the dead"
		assert issue.user.as(User).login == "privat"
		assert issue.comments == 7
		assert issue.created_at == "2014-12-11T02:55:09Z"
		assert issue.closed_at == "2014-12-13T15:38:09Z"
		assert issue.closed_by.as(User).login == "privat"
		assert issue.body == "Raise dead on `nitc`.\nIt's super effective...\n"
		assert issue.is_pull_request
	end

	# TODO issue comments
	# TODO issue events

	fun test_get_pull is test do
		var pull = api.load_pull(repo, 1000)
		assert pull isa Issue
		assert pull.number == 1000
		assert pull.title == "Raise nitc from the dead"
		assert pull.user.as(User).login == "privat"
		assert pull.comments == 7
		assert pull.created_at == "2014-12-11T02:55:09Z"
		assert pull.closed_at == "2014-12-13T15:38:09Z"
		assert pull.merged_by.as(User).login == "privat"
		assert pull.body == "Raise dead on `nitc`.\nIt's super effective...\n"
	end

	fun test_get_label is test do
		var labl = api.load_label(repo, "ok_will_merge")
		assert labl isa Label
		assert labl.name == "ok_will_merge"
	end

	fun test_get_milestone is test do
		var milestone = api.load_milestone(repo, 4)
		assert milestone isa Milestone
		assert milestone.title == "v1.0prealpha"
		# TODO other fields
	end

	fun test_get_issue_event is test do
		var event = api.load_issue_event(repo, 199674194)
		assert event isa IssueEvent
		assert event.actor.login == "privat"
		assert event.event == "labeled"
		assert event.labl.as(Label).name == "need_review"
	end

	fun test_get_issue_comment is test do
		var comment = api.load_issue_comment(repo, 6020149)
		assert comment isa IssueComment
		assert comment.user.login == "privat"
		assert comment.created_at.to_s == "2012-05-30T20:16:54Z"
		assert comment.issue_number == 10
	end

	fun test_get_comment is test do
		var comment = api.load_commit_comment(repo, 8982707)
		assert comment isa CommitComment
		assert comment.user.login == "Morriar"
		assert comment.body == "For testing purposes...\n"
		assert comment.commit_id == "7eacb86d1e24b7e72bc9ac869bf7182c0300ceca"
	end

	fun test_get_review_comments is test do
		var comment = api.load_review_comment(repo, 21010363)
		assert comment isa ReviewComment
		assert comment.path == "src/modelize/modelize_property.nit"
		assert comment.original_position == 26
		assert comment.pull_number == 945
	end
end
