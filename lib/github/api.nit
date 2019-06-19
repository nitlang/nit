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

# Nit object oriented interface to [Github api](https://developer.github.com/v3/).
#
# This modules reifies Github API elements as Nit classes.
#
# For most use-cases you need to use the `GithubAPI` client.
module api

import github_curl
intrude import json::serialization_read

# Client to Github API
#
# To access the API you need an instance of a `GithubAPI` client.
#
# ~~~nitish
# # Get Github authentification token.
# var token = get_github_oauth
# assert not token.is_empty
#
# # Init the client.
# var api = new GithubAPI(token)
# ~~~
#
# The API client allows you to get Github API entities.
#
# ~~~nitish
# var repo = api.load_repo("nitlang/nit")
# assert repo != null
# assert repo.name == "nit"
#
# var user = api.load_user("Morriar")
# assert user != null
# assert user.login == "Morriar"
# ~~~
class GithubAPI

	# Github API OAuth token
	#
	# To access your private ressources, you must
	# [authenticate](https://developer.github.com/guides/basics-of-authentication/).
	#
	# For client applications, Github recommands to use the
	# [OAuth tokens](https://developer.github.com/v3/oauth/) authentification method.
	#
	#
	#
	# Be aware that there is [rate limits](https://developer.github.com/v3/rate_limit/)
	# associated to the key.
	var auth: String

	# Github API base url.
	#
	# Default is `https://api.github.com` and should not be changed.
	var api_url = "https://api.github.com"

	# User agent used for HTTP requests.
	#
	# Default is `nit_github_api`.
	#
	# See <https://developer.github.com/v3/#user-agent-required>
	var user_agent = "nit_github_api"

	# Curl instance.
	#
	# Internal Curl instance used to perform API calls.
	private var ghcurl: GithubCurl is noinit

	# Verbosity level.
	#
	# * `0`: only errors (default)
	# * `1`: verbose
	var verbose_lvl = 0 is public writable

	init do
		ghcurl = new GithubCurl(auth, user_agent)
	end

	# Deserialize an object
	fun deserialize(string: String): nullable Object do
		var deserializer = new GithubDeserializer(string)
		var res = deserializer.deserialize
		# print deserializer.errors.join("\n") # DEBUG
		return res
	end

	# Execute a GET request on Github API.
	#
	# This method returns raw json data.
	# See other `load_*` methods to use more expressive types.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var obj = api.get("/repos/nitlang/nit")
	#     assert obj isa JsonObject
	#     assert obj["name"] == "nit"
	#
	# Returns `null` in case of `error`.
	#
	#     obj = api.get("/foo/bar/baz")
	#     assert obj == null
	#     assert api.was_error
	#     var err = api.last_error
	#     assert err isa GithubError
	#     assert err.name == "GithubAPIError"
	#     assert err.message == "Not Found"
	fun get(path: String): nullable Serializable do
		path = sanitize_uri(path)
		var res = ghcurl.get_and_parse("{api_url}{path}")
		if res isa Error then
			last_error = res
			was_error = true
			return null
		end
		was_error = false
		return res
	end

	# Display a message depending on `verbose_lvl`.
	fun message(lvl: Int, message: String) do
		if lvl <= verbose_lvl then print message
	end

	# Escape `uri` in an acceptable format for Github.
	private fun sanitize_uri(uri: String): String do
		# TODO better URI escape.
		return uri.replace(" ", "%20")
	end

	# Last error occured during Github API communications.
	var last_error: nullable Error = null is public writable

	# Does the last request provoqued an error?
	var was_error = false is protected writable

	# Load the json object from Github.
	# See `GithubEntity::load_from_github`.
	protected fun load_from_github(key: String): nullable GithubEntity do
		message(1, "Get {key} (github)")
		var res = get(key)
		if was_error then return null
		return deserialize(res.as(JsonObject).to_json).as(nullable GithubEntity)
	end

	# Get the Github logged user from `auth` token.
	#
	# Loads the `User` from the API or returns `null` if the user cannot be found.
	#
	# ~~~nitish
	# var api = new GithubAPI(get_github_oauth)
	# var user = api.load_auth_user
	# assert user.login == "Morriar"
	# ~~~
	fun load_auth_user: nullable User do
		var user = load_from_github("/user")
		if was_error then return null
		return user.as(nullable User)
	end

	# Get the Github user with `login`
	#
	# Loads the `User` from the API or returns `null` if the user cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var user = api.load_user("Morriar")
	#     print user or else "null"
	#     assert user.login == "Morriar"
	fun load_user(login: String): nullable User do
		return load_from_github("/users/{login}").as(nullable User)
	end

	# Get the Github repo with `full_name`.
	#
	# Loads the `Repo` from the API or returns `null` if the repo cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo.name == "nit"
	#     assert repo.owner.login == "nitlang"
	#     assert repo.default_branch == "master"
	fun load_repo(full_name: String): nullable Repo do
		return load_from_github("/repos/{full_name}").as(nullable Repo)
	end

	# List of branches associated with their names.
	fun load_repo_branches(repo: Repo): Array[Branch] do
		message(1, "Get branches for {repo.full_name}")
		var array = get("/repos/{repo.full_name}/branches")
		var res = new Array[Branch]
		if not array isa JsonArray then return res
		var deser = deserialize(array.to_json)
		if not deser isa Array[Object] then return res # empty array
		for branch in deser do
			if not branch isa Branch then continue
			res.add branch
		end
		return res
	end

	# List of issues associated with their ids.
	fun load_repo_issues(repo: Repo): Array[Issue] do
		message(1, "Get issues for {repo.full_name}")
		var res = new Array[Issue]
		var issue = load_repo_last_issue(repo)
		if issue == null then return res
		res.add issue
		while issue != null and issue.number > 1 do
			issue = load_issue(repo, issue.number - 1)
			if issue == null then continue
			res.add issue
		end
		return res
	end

	# Search issues in this repo form an advanced query.
	#
	# Example:
	#
	# ~~~nitish
	# var issues = repo.search_issues("is:open label:need_review")
	# ~~~
	#
	# See <https://developer.github.com/v3/search/#search-issues>.
	fun search_repo_issues(repo: Repo, query: String): Array[Issue] do
		query = "/search/issues?q={query} repo:{repo.full_name}"
		var res = new Array[Issue]
		var response = get(query)
		if was_error then return res
		var arr = response.as(JsonObject)["items"].as(JsonArray)
		return deserialize(arr.to_json).as(Array[Issue])
	end

	# Get the last published issue.
	fun load_repo_last_issue(repo: Repo): nullable Issue do
		var array = get("/repos/{repo.full_name}/issues")
		if not array isa JsonArray then return null
		if array.is_empty then return null
		var obj = array.first
		if not obj isa JsonObject then return null
		return deserialize(obj.to_json).as(nullable Issue)
	end

	# List of labels associated with their names.
	fun load_repo_labels(repo: Repo): Array[Label] do
		message(1, "Get labels for {repo.full_name}")
		var array = get("repos/{repo.full_name}/labels")
		if not array isa JsonArray then return new Array[Label]
		return deserialize(array.to_json).as(Array[Label])
	end

	# List of milestones associated with their ids.
	fun load_repo_milestones(repo: Repo): Array[Milestone] do
		message(1, "Get milestones for {repo.full_name}")
		var array = get("/repos/{repo.full_name}/milestones")
		if not array isa JsonArray then return new Array[Milestone]
		return deserialize(array.to_json).as(Array[Milestone])
	end

	# List of pull-requests associated with their ids.
	#
	# Implementation notes: because PR numbers are not consecutive,
	# PR are loaded from pages.
	# See: https://developer.github.com/v3/pulls/#list-pull-requests
	fun load_repo_pulls(repo: Repo): Array[PullRequest] do
		message(1, "Get pulls for {repo.full_name}")
		var key = "/repos/{repo.full_name}"
		var res = new Array[PullRequest]
		var page = 1
		loop
			var array = get("{key}/pulls?page={page}").as(JsonArray)
			if array.is_empty then break
			for obj in array do
				if not obj isa JsonObject then continue
				var pr = deserialize(array.to_json).as(nullable PullRequest)
				if pr == null then continue
				res.add pr
			end
			page += 1
		end
		return res
	end

	# List of contributor related statistics.
	fun load_repo_contrib_stats(repo: Repo): Array[ContributorStats] do
		message(1, "Get contributor stats for {repo.full_name}")
		var res = new Array[ContributorStats]
		var array = get("/repos/{repo.full_name}/stats/contributors")
		if not array isa JsonArray then return res
		return deserialize(array.to_json).as(Array[ContributorStats])
	end

	# Get the Github branch with `name`.
	#
	# Returns `null` if the branch cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var branch = api.load_branch(repo, "master")
	#     assert branch.name == "master"
	#     assert branch.commit isa Commit
	fun load_branch(repo: Repo, name: String): nullable Branch do
		return load_from_github("/repos/{repo.full_name}/branches/{name}").as(nullable Branch)
	end

	# List all commits in `self`.
	#
	# This can be long depending on the branch size.
	# Commit are returned in an unspecified order.
	fun load_branch_commits(branch: Branch): Array[Commit] do
		var res = new Array[Commit]
		var done = new HashSet[String]
		var todos = new Array[Commit]
		todos.add branch.commit
		loop
			if todos.is_empty then break
			var commit = todos.pop
			if done.has(commit.sha) then continue
			done.add commit.sha
			res.add commit
			var parents = commit.parents
			if parents == null then continue
			for parent in parents do
				todos.add parent
			end
		end
		return res
	end

	# Get the Github commit with `sha`.
	#
	# Returns `null` if the commit cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var commit = api.load_commit(repo, "64ce1f")
	#     assert commit isa Commit
	fun load_commit(repo: Repo, sha: String): nullable Commit do
		return load_from_github("/repos/{repo.full_name}/commits/{sha}").as(nullable Commit)
	end

	# Get the Github issue #`number`.
	#
	# Returns `null` if the issue cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var issue = api.load_issue(repo, 1)
	#     assert issue.title == "Doc"
	fun load_issue(repo: Repo, number: Int): nullable Issue do
		return load_from_github("/repos/{repo.full_name}/issues/{number}").as(nullable Issue)
	end

	# List of event on this issue.
	fun load_issue_comments(repo: Repo, issue: Issue): Array[IssueComment] do
		var res = new Array[IssueComment]
		var count = issue.comments or else 0
		var page = 1
		loop
			var array = get("/repos/{repo.full_name}/issues/{issue.number}/comments?page={page}")
			if not array isa JsonArray then break
			if array.is_empty then break
			for obj in array do
				if not obj isa JsonObject then continue
				var id = obj["id"].as(Int)
				var comment = load_issue_comment(repo, id)
				if comment == null then continue
				res.add(comment)
			end
			if res.length >= count then break
			page += 1
		end
		return res
	end

	# List of events on this issue.
	fun load_issue_events(repo: Repo, issue: Issue): Array[IssueEvent] do
		var res = new Array[IssueEvent]
		var key = "/repos/{repo.full_name}/issues/{issue.number}"
		var page = 1
		loop
			var array = get("{key}/events?page={page}")
			if not array isa JsonArray or array.is_empty then break
			for obj in array do
				if not obj isa JsonObject then continue
				var event = deserialize(obj.to_json).as(nullable IssueEvent)
				if event == null then continue
				res.add event
			end
			page += 1
		end
		return res
	end

	# Get the Github pull request #`number`.
	#
	# Returns `null` if the pull request cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var pull = api.load_pull(repo, 1)
	#     assert pull.title == "Doc"
	#     assert pull.user.login == "Morriar"
	fun load_pull(repo: Repo, number: Int): nullable PullRequest do
		return load_from_github("/repos/{repo.full_name}/pulls/{number}").as(nullable PullRequest)
	end

	# Get the Github label with `name`.
	#
	# Returns `null` if the label cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var labl = api.load_label(repo, "ok_will_merge")
	#     assert labl != null
	fun load_label(repo: Repo, name: String): nullable Label do
		return load_from_github("/repos/{repo.full_name}/labels/{name}").as(nullable Label)
	end

	# Get the Github milestone with `id`.
	#
	# Returns `null` if the milestone cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var stone = api.load_milestone(repo, 4)
	#     assert stone.title == "v1.0prealpha"
	fun load_milestone(repo: Repo, id: Int): nullable Milestone do
		return load_from_github("/repos/{repo.full_name}/milestones/{id}").as(nullable Milestone)
	end

	# Get the Github issue event with `id`.
	#
	# Returns `null` if the event cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo isa Repo
	#     var event = api.load_issue_event(repo, 199674194)
	#     assert event isa IssueEvent
	#     assert event.actor.login == "privat"
	#     assert event.event == "labeled"
	#     assert event.labl isa Label
	#     assert event.labl.name == "need_review"
	fun load_issue_event(repo: Repo, id: Int): nullable IssueEvent do
		return load_from_github("/repos/{repo.full_name}/issues/events/{id}").as(nullable IssueEvent)
	end

	# Get the Github commit comment with `id`.
	#
	# Returns `null` if the comment cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var comment = api.load_commit_comment(repo, 8982707)
	#     assert comment.user.login == "Morriar"
	#     assert comment.body == "For testing purposes...\n"
	#     assert comment.commit_id == "7eacb86d1e24b7e72bc9ac869bf7182c0300ceca"
	fun load_commit_comment(repo: Repo, id: Int): nullable CommitComment do
		return load_from_github("/repos/{repo.full_name}/comments/{id}").as(nullable CommitComment)
	end

	# Get the Github issue comment with `id`.
	#
	# Returns `null` if the comment cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var comment = api.load_issue_comment(repo, 6020149)
	#     assert comment.user.login == "privat"
	#     assert comment.created_at.to_s == "2012-05-30T20:16:54Z"
	#     assert comment.issue_number == 10
	fun load_issue_comment(repo: Repo, id: Int): nullable IssueComment do
		return load_from_github("/repos/{repo.full_name}/issues/comments/{id}").as(nullable IssueComment)
	end

	# Get the Github diff comment with `id`.
	#
	# Returns `null` if the comment cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo != null
	#     var comment = api.load_review_comment(repo, 21010363)
	#     assert comment.path == "src/modelize/modelize_property.nit"
	#     assert comment.original_position == 26
	#     assert comment.pull_number == 945
	fun load_review_comment(repo: Repo, id: Int): nullable ReviewComment do
		return load_from_github("/repos/{repo.full_name}/pulls/comments/{id}").as(nullable ReviewComment)
	end
end

# Something returned by the Github API.
#
# Mainly a Nit wrapper around a JSON objet.
abstract class GithubEntity
	serialize

	# Github page url.
	var html_url: nullable String is writable
end

# A Github user
#
# Provides access to [Github user data](https://developer.github.com/v3/users/).
# Should be accessed from `GithubAPI::load_user`.
class User
	super GitUser
	serialize

	# Github login.
	var login: String is writable

	# Avatar image url for this user.
	var avatar_url: nullable String is writable

	# User public name if any.
	var name: nullable String is writable

	# User public email if any.
	var email: nullable String is writable

	# User public blog if any.
	var blog: nullable String is writable
end

# A Github repository.
#
# Provides access to [Github repo data](https://developer.github.com/v3/repos/).
# Should be accessed from `GithubAPI::load_repo`.
class Repo
	super GithubEntity
	serialize

	# Repo full name on Github.
	var full_name: String is writable

	# Repo short name on Github.
	var name: String is writable

	# Get the repo owner.
	var owner: User is writable

	# Repo default branch name.
	var default_branch: String is writable
end

# A Github branch.
#
# Should be accessed from `GithubAPI::load_branch`.
#
# See <https://developer.github.com/v3/repos/#list-branches>.
class Branch
	super GithubEntity
	serialize

	# Branch name.
	var name: String is writable

	# Get the last commit of `self`.
	var commit: Commit is writable
end

# A Github commit.
#
# Should be accessed from `GithubAPI::load_commit`.
#
# See <https://developer.github.com/v3/repos/commits/>.
class Commit
	super GithubEntity
	serialize

	# Commit SHA.
	var sha: String is writable

	# Parent commits of `self`.
	var parents: nullable Array[Commit] = null is writable

	# Author of the commit.
	var author: nullable GitUser is writable

	# Committer of the commit.
	var committer: nullable GitUser is writable

	# Authoring date as String.
	var author_date: nullable String is writable

	# Authoring date as ISODate.
	fun iso_author_date: nullable ISODate do
		var author_date = self.author_date
		if author_date == null then return null
		return new ISODate.from_string(author_date)
	end

	# Commit date as String.
	var commit_date: nullable String is writable

	# Commit date as ISODate.
	fun iso_commit_date: nullable ISODate do
		var commit_date = self.commit_date
		if commit_date == null then return null
		return new ISODate.from_string(commit_date)
	end

	# List files staged in this commit.
	var files: nullable Array[GithubFile] = null is optional, writable

	# Commit message.
	var message: nullable String is writable

	# Git commit representation linked to this commit.
	var commit: nullable GitCommit
end

# A Git Commit representation
class GitCommit
	super GithubEntity
	serialize

	# Commit SHA.
	var sha: nullable String is writable

	# Parent commits of `self`.
	var parents: nullable Array[GitCommit] = null is writable

	# Author of the commit.
	var author: nullable GitUser is writable

	# Committer of the commit.
	var committer: nullable GitUser is writable

	# Commit message.
	var message: nullable String is writable
end

# Git user authoring data
class GitUser
	super GithubEntity
	serialize

	# Authoring date.
	var date: nullable String = null is writable

	# Authoring date as ISODate.
	fun iso_date: nullable ISODate do
		var date = self.date
		if date == null then return null
		return new ISODate.from_string(date)
	end
end

# A Github issue.
#
# Should be accessed from `GithubAPI::load_issue`.
#
# See <https://developer.github.com/v3/issues/>.
class Issue
	super GithubEntity
	serialize

	# Issue Github ID.
	var number: Int is writable

	# Issue id.
	var id: nullable Int is writable

	# Issue title.
	var title: String is writable

	# User that created this issue.
	var user: nullable User is writable

	# List of labels on this issue associated to their names.
	var labels: nullable Array[Label] is writable

	# State of the issue on Github.
	var state: String is writable

	# Is the issue locked?
	var locked: nullable Bool is writable

	# Assigned `User` (if any).
	var assignee: nullable User is writable

	# `Milestone` (if any).
	var milestone: nullable Milestone is writable

	# Number of comments on this issue.
	var comments: nullable Int is writable

	# Creation time as String.
	var created_at: String is writable

	# Creation time as ISODate.
	fun iso_created_at: ISODate do
		return new ISODate.from_string(created_at)
	end

	# Last update time as String (if any).
	var updated_at: nullable String is writable

	# Last update date as ISODate.
	fun iso_updated_at: nullable ISODate do
		var updated_at = self.updated_at
		if updated_at == null then return null
		return new ISODate.from_string(updated_at)
	end

	# Close time as String (if any).
	var closed_at: nullable String is writable

	# Close time as ISODate.
	fun iso_closed_at: nullable ISODate do
		var closed_at = self.closed_at
		if closed_at == null then return null
		return new ISODate.from_string(closed_at)
	end

	# Full description of the issue.
	var body: nullable String is writable

	# User that closed this issue (if any).
	var closed_by: nullable User is writable

	# Is this issue linked to a pull request?
	var is_pull_request: Bool = false is writable
end

# A Github pull request.
#
# Should be accessed from `GithubAPI::load_pull`.
#
# PullRequest are basically Issues with more data.
# See <https://developer.github.com/v3/pulls/>.
class PullRequest
	super Issue
	serialize

	# Merge time as String (if any).
	var merged_at: nullable String is writable

	# Merge time as ISODate.
	fun iso_merged_at: nullable ISODate do
		var merged_at = self.merged_at
		if merged_at == null then return null
		return new ISODate.from_string(merged_at)
	end

	# Merge commit SHA.
	var merge_commit_sha: nullable String is writable

	# Count of comments made on the pull request diff.
	var review_comments: Int is writable

	# Pull request head (can be a commit SHA or a branch name).
	var head: PullRef is writable

	# Pull request base (can be a commit SHA or a branch name).
	var base: PullRef is writable

	# Is this pull request merged?
	var merged: Bool is writable

	# Is this pull request mergeable?
	var mergeable: nullable Bool is writable

	# Mergeable state of this pull request.
	#
	# See <https://developer.github.com/v3/pulls/#list-pull-requests>.
	var mergeable_state: String is writable

	# User that merged this pull request (if any).
	var merged_by: nullable User is writable

	# Count of commits in this pull request.
	var commits: Int is writable

	# Added line count.
	var additions: Int is writable

	# Deleted line count.
	var deletions: Int is writable

	# Changed files count.
	var changed_files: Int is writable

	# URL to patch file
	var patch_url: nullable String is writable
end

# A pull request reference (used for head and base).
class PullRef
	serialize

	# Label pointed by `self`.
	var labl: String is writable, serialize_as("label")

	# Reference pointed by `self`.
	var ref: String is writable

	# Commit SHA pointed by `self`.
	var sha: String is writable

	# User pointed by `self`.
	var user: User is writable

	# Repo pointed by `self` (if any).
	#
	# A `null` value means the `repo` was deleted.
	var repo: nullable Repo is writable
end

# A Github label.
#
# Should be accessed from `GithubAPI::load_label`.
#
# See <https://developer.github.com/v3/issues/labels/>.
class Label
	super GithubEntity
	serialize

	# Label name.
	var name: String is writable

	# Label color code.
	var color: String is writable
end

# A Github milestone.
#
# Should be accessed from `GithubAPI::load_milestone`.
#
# See <https://developer.github.com/v3/issues/milestones/>.
class Milestone
	super GithubEntity
	serialize

	# The milestone id on Github.
	var number: nullable Int = null is writable

	# Milestone title.
	var title: String is writable

	# Milestone long description.
	var description: nullable String is writable

	# Count of opened issues linked to this milestone.
	var open_issues: nullable Int = null is writable

	# Count of closed issues linked to this milestone.
	var closed_issues: nullable Int = null is writable

	# Milestone state.
	var state: nullable String is writable

	# Creation time as String.
	var created_at: nullable String is writable

	# Creation time as ISODate.
	fun iso_created_at: nullable ISODate do
		var created_at = self.created_at
		if created_at == null then return null
		return new ISODate.from_string(created_at)
	end

	# User that created this milestone.
	var creator: nullable User is writable

	# Due time as String (if any).
	var due_on: nullable String is writable

	# Due time in ISODate format (if any).
	fun iso_due_on: nullable ISODate do
		var due_on = self.due_on
		if due_on == null then return null
		return new ISODate.from_string(due_on)
	end

	# Last update time as String (if any).
	var updated_at: nullable String is writable

	# Last update date as ISODate.
	fun iso_updated_at: nullable ISODate do
		var updated_at = self.updated_at
		if updated_at == null then return null
		return new ISODate.from_string(updated_at)
	end

	# Close time as String (if any).
	var closed_at: nullable String is writable

	# Close time as ISODate.
	fun iso_closed_at: nullable ISODate do
		var closed_at = self.closed_at
		if closed_at == null then return null
		return new ISODate.from_string(closed_at)
	end
end

# A Github comment
#
# There is two kinds of comments:
#
# * `CommitComment` are made on a commit page.
# * `IssueComment` are made on an issue or pull request page.
# * `ReviewComment` are made on the diff associated to a pull request.
abstract class Comment
	super GithubEntity
	serialize

	# Identifier of this comment.
	var id: Int is writable

	# User that made this comment.
	var user: User is writable

	# Creation time as String.
	var created_at: String is writable

	# Creation time as ISODate.
	fun iso_created_at: nullable ISODate do
		return new ISODate.from_string(created_at)
	end

	# Last update time as String (if any).
	var updated_at: nullable String is writable

	# Last update date as ISODate.
	fun iso_updated_at: nullable ISODate do
		var updated_at = self.updated_at
		if updated_at == null then return null
		return new ISODate.from_string(updated_at)
	end

	# Comment body text.
	var body: String is writable

	# Does the comment contain an acknowledgement (+1)
	fun is_ack: Bool do
		return body.has("\\+1\\b".to_re) or body.has(":+1:") or body.has(":shipit:")
	end
end

# A comment made on a commit.
class CommitComment
	super Comment
	serialize

	# Commented commit.
	var commit_id: String is writable

	# Position of the comment on the line.
	var position: nullable Int is writable

	# Line of the comment.
	var line: nullable Int is writable

	# Path of the commented file.
	var path: nullable String is writable
end

# Comments made on Github issue and pull request pages.
#
# Should be accessed from `GithubAPI::load_issue_comment`.
#
# See <https://developer.github.com/v3/issues/comments/>.
class IssueComment
	super Comment
	serialize

	# Issue that contains `self`.
	fun issue_number: Int do return issue_url.split("/").last.to_i

	# Link to the issue document on API.
	var issue_url: String is writable
end

# Comments made on Github pull request diffs.
#
# Should be accessed from `GithubAPI::load_diff_comment`.
#
# See <https://developer.github.com/v3/pulls/comments/>.
class ReviewComment
	super Comment
	serialize

	# Pull request that contains `self`.
	fun pull_number: Int do return pull_request_url.split("/").last.to_i

	# Link to the pull request on API.
	var pull_request_url: String is writable

	# Diff hunk.
	var diff_hunk: String is writable

	# Path of commented file.
	var path: String is writable

	# Position of the comment on the file.
	var position: nullable Int is writable

	# Original position in the diff.
	var original_position: Int is writable

	# Commit referenced by this comment.
	var commit_id: String is writable

	# Original commit id.
	var original_commit_id: String is writable
end

# An event that occurs on a Github `Issue`.
#
# Should be accessed from `GithubAPI::load_issue_event`.
#
# See <https://developer.github.com/v3/issues/events/>.
class IssueEvent
	super GithubEntity
	serialize

	# Event id on Github.
	var id: Int is writable

	# User that initiated the event.
	var actor: User is writable

	# Creation time as String.
	var created_at: String is writable

	# Creation time as ISODate.
	fun iso_created_at: nullable ISODate do
		return new ISODate.from_string(created_at)
	end

	# Event descriptor.
	var event: String is writable

	# Commit linked to this event (if any).
	var commit_id: nullable String is writable

	# Label linked to this event (if any).
	var labl: nullable Label is writable, serialize_as("label")

	# User linked to this event (if any).
	var assignee: nullable User is writable

	# Milestone linked to this event (if any).
	var milestone: nullable Milestone is writable

	# Rename linked to this event (if any).
	var rename: nullable RenameAction is writable
end

# A rename action maintains the name before and after a renaming action.
class RenameAction
	serialize

	# Name before renaming.
	var from: String is writable

	# Name after renaming.
	var to: String is writable
end

#
# Should be accessed from `Repo::contrib_stats`.
#
# See <https://developer.github.com/v3/repos/statistics/>.
class ContributorStats
	super Comparable
	serialize

	redef type OTHER: ContributorStats

	# Github API client.
	var api: GithubAPI is writable

	# User these statistics are about.
	var author: User is writable

	# Total number of commit.
	var total: Int is writable

	# Are of weeks of activity with detailed statistics.
	var weeks: JsonArray is writable

	# ContributorStats can be compared on the total amount of commits.
	redef fun <(o) do return total < o.total
end

# A Github file representation.
#
# Mostly a wrapper around a json object.
class GithubFile
	serialize

	# File name.
	var filename: String is writable
end

# Make ISO Datew serilizable
redef class ISODate
	serialize
end

# JsonDeserializer specific for Github objects.
class GithubDeserializer
	super JsonDeserializer

	redef fun class_name_heuristic(json_object) do
		if json_object.has_key("login") then
			return "User"
		else if json_object.has_key("full_name") then
			return "Repo"
		else if json_object.has_key("name") and json_object.has_key("commit") then
			return "Branch"
		else if json_object.has_key("sha") and json_object.has_key("ref") then
			return "PullRef"
		else if (json_object.has_key("sha") and json_object.has_key("commit")) or (json_object.has_key("id") and json_object.has_key("tree_id")) then
			return "Commit"
		else if json_object.has_key("sha") and json_object.has_key("tree") then
			return "GitCommit"
		else if json_object.has_key("name") and json_object.has_key("date") then
			return "GitUser"
		else if json_object.has_key("number") and json_object.has_key("patch_url") then
			return "PullRequest"
		else if json_object.has_key("open_issues") and json_object.has_key("closed_issues") then
			return "Milestone"
		else if json_object.has_key("number") and json_object.has_key("title") then
			return "Issue"
		else if json_object.has_key("color") then
			return "Label"
		else if json_object.has_key("event") then
			return "IssueEvent"
		else if json_object.has_key("original_commit_id") then
			return "ReviewComment"
		else if json_object.has_key("commit_id") then
			return "CommitComment"
		else if json_object.has_key("issue_url") then
			return "IssueComment"
		end
		return null
	end

	redef fun deserialize_class(name) do
		if name == "Issue" then
			var issue = super.as(Issue)
			if path.last.has_key("pull_request") then
				issue.is_pull_request = true
			end
			return issue
		else if name == "Commit" then
			var commit = super.as(Commit)
			var git_commit = commit.commit
			if git_commit != null then commit.message = git_commit.message
			return commit
		end
		return super
	end
end
