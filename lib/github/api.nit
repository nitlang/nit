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

# Client to Github API
#
# To access the API you need an instance of a `GithubAPI` client.
#
# ~~~
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
# ~~~
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

	# Execute a GET request on Github API.
	#
	# This method returns raw json data.
	# See other `load_*` methods to use more expressive types.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var obj = api.get("repos/nitlang/nit")
	#     assert obj isa JsonObject
	#     assert obj["name"] == "nit"
	#
	# Returns `null` in case of `error`.
	#
	#     obj = api.get("foo/bar/baz")
	#     assert obj == null
	#     assert api.was_error
	#     var err = api.last_error
	#     assert err isa GithubError
	#     assert err.name == "GithubAPIError"
	#     assert err.message == "Not Found"
	fun get(path: String): nullable Jsonable do
		path = sanitize_uri(path)
		var res = ghcurl.get_and_parse("{api_url}/{path}")
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
	protected fun load_from_github(key: String): JsonObject do
		message(1, "Get {key} (github)")
		var res = get(key)
		if was_error then return new JsonObject
		return res.as(JsonObject)
	end

	# Get the Github user with `login`
	#
	# Loads the `User` from the API or returns `null` if the user cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var user = api.load_user("Morriar")
	#     assert user.login == "Morriar"
	fun load_user(login: String): nullable User do
		var user = new User(self, login)
		return user.load_from_github
	end

	# Get the Github repo with `full_name`.
	#
	# Loads the `Repo` from the API or returns `null` if the repo cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo.name == "nit"
	#     assert repo.owner.login == "nitlang"
	#     assert repo.default_branch.name == "master"
	fun load_repo(full_name: String): nullable Repo do
		var repo = new Repo(self, full_name)
		return repo.load_from_github
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
		var branch = new Branch(self, repo, name)
		return branch.load_from_github
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
		var commit = new Commit(self, repo, sha)
		return commit.load_from_github
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
		var issue = new Issue(self, repo, number)
		return issue.load_from_github
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
		var pull = new PullRequest(self, repo, number)
		return pull.load_from_github
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
		var labl = new Label(self, repo, name)
		return labl.load_from_github
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
		var milestone = new Milestone(self, repo, id)
		return milestone.load_from_github
	end

	# Get the Github issue event with `id`.
	#
	# Returns `null` if the event cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("nitlang/nit")
	#     assert repo isa Repo
	#     var event = api.load_issue_event(repo, 199674194)
	#     assert event.actor.login == "privat"
	#     assert event.event == "labeled"
	#     assert event.labl.name == "need_review"
	#     assert event.issue.number == 945
	fun load_issue_event(repo: Repo, id: Int): nullable IssueEvent do
		var event = new IssueEvent(self, repo, id)
		return event.load_from_github
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
	#     assert comment.body == "For testing purposes..."
	#     assert comment.commit.sha == "7eacb86d1e24b7e72bc9ac869bf7182c0300ceca"
	fun load_commit_comment(repo: Repo, id: Int): nullable CommitComment do
		var comment = new CommitComment(self, repo, id)
		return comment.load_from_github
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
	#     assert comment.issue.number == 10
	fun load_issue_comment(repo: Repo, id: Int): nullable IssueComment do
		var comment = new IssueComment(self, repo, id)
		return comment.load_from_github
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
	#     assert comment.pull.number == 945
	fun load_review_comment(repo: Repo, id: Int): nullable ReviewComment do
		var comment = new ReviewComment(self, repo, id)
		return comment.load_from_github
	end
end

# Something returned by the Github API.
#
# Mainly a Nit wrapper around a JSON objet.
abstract class GithubEntity

	# Github API instance.
	var api: GithubAPI

	# FIXME constructor should be private

	# Key used to access this entity from Github api base.
	fun key: String is abstract

	# JSON representation of `self`.
	#
	# This is the same json structure than used by Github API.
	var json: JsonObject is noinit, protected writable

	# Load `json` from Github API.
	private fun load_from_github: nullable SELF do
		json = api.load_from_github(key)
		if api.was_error then return null
		return self
	end

	redef fun to_s do return json.to_json

	# Github page url.
	fun html_url: String do return json["html_url"].as(String)

	# Set page url.
	fun html_url=(url: String) do json["html_url"] = url
end

# A Github user
#
# Provides access to [Github user data](https://developer.github.com/v3/users/).
# Should be accessed from `GithubAPI::load_user`.
class User
	super GithubEntity

	redef var key is lazy do return "users/{login}"

	# Github login.
	var login: String

	# Init `self` from a `json` object.
	init from_json(api: GithubAPI, json: JsonObject) do
		init(api, json["login"].as(String))
		self.json = json
	end

	# Avatar image url for this user.
	fun avatar_url: String do return json["avatar_url"].as(String)

	# Set avatar url.
	fun avatar_url=(url: String) do json["avatar_url"] = url
end

# A Github repository.
#
# Provides access to [Github repo data](https://developer.github.com/v3/repos/).
# Should be accessed from `GithubAPI::load_repo`.
class Repo
	super GithubEntity

	redef var key is lazy do return "repos/{full_name}"

	# Repo full name on Github.
	var full_name: String

	# Init `self` from a `json` object.
	init from_json(api: GithubAPI, json: JsonObject) do
		init(api, json["full_name"].as(String))
		self.json = json
	end

	# Repo short name on Github.
	fun name: String do return json["name"].as(String)

	# Set repo full name
	fun name=(name: String) do json["name"] = name

	# Get the repo owner.
	fun owner: User do return new User.from_json(api, json["owner"].as(JsonObject))

	# Set repo owner
	fun owner=(owner: User) do json["owner"] = owner.json

	# List of branches associated with their names.
	fun branches: Map[String, Branch] do
		api.message(1, "Get branches for {full_name}")
		var array = api.get("repos/{full_name}/branches")
		var res = new HashMap[String, Branch]
		if not array isa JsonArray then return res
		for obj in array do
			if not obj isa JsonObject then continue
			var name = obj["name"].as(String)
			res[name] = new Branch.from_json(api, self, obj)
		end
		return res
	end

	# List of issues associated with their ids.
	fun issues: Map[Int, Issue] do
		api.message(1, "Get issues for {full_name}")
		var res = new HashMap[Int, Issue]
		var issue = last_issue
		if issue == null then return res
		res[issue.number] = issue
		while issue.number > 1 do
			issue = api.load_issue(self, issue.number - 1)
			assert issue isa Issue
			res[issue.number] = issue
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
	fun search_issues(query: String): nullable Array[Issue] do
		query = "search/issues?q={query} repo:{full_name}"
		var response = api.get(query)
		if api.was_error then return null
		var arr = response.as(JsonObject)["items"].as(JsonArray)
		var res = new Array[Issue]
		for obj in arr do
			res.add new Issue.from_json(api, self, obj.as(JsonObject))
		end
		return res
	end

	# Get the last published issue.
	fun last_issue: nullable Issue do
		var array = api.get("repos/{full_name}/issues")
		if not array isa JsonArray then return null
		if array.is_empty then return null
		var obj = array.first
		if not obj isa JsonObject then return null
		return new Issue.from_json(api, self, obj)
	end

	# List of labels associated with their names.
	fun labels: Map[String, Label] do
		api.message(1, "Get labels for {full_name}")
		var array = api.get("repos/{full_name}/labels")
		var res = new HashMap[String, Label]
		if not array isa JsonArray then return res
		for obj in array do
			if not obj isa JsonObject then continue
			var name = obj["name"].as(String)
			res[name] = new Label.from_json(api, self, obj)
		end
		return res
	end

	# List of milestones associated with their ids.
	fun milestones: Map[Int, Milestone] do
		api.message(1, "Get milestones for {full_name}")
		var array = api.get("repos/{full_name}/milestones")
		var res = new HashMap[Int, Milestone]
		if array isa JsonArray then
			for obj in array do
				if not obj isa JsonObject then continue
				var number = obj["number"].as(Int)
				res[number] = new Milestone.from_json(api, self, obj)
			end
		end
		return res
	end

	# List of pull-requests associated with their ids.
	#
	# Implementation notes: because PR numbers are not consecutive,
	# PR are loaded from pages.
	# See: https://developer.github.com/v3/pulls/#list-pull-requests
	fun pulls: Map[Int, PullRequest] do
		api.message(1, "Get pulls for {full_name}")
		var res = new HashMap[Int, PullRequest]
		var page = 1
		var array = api.get("{key}/pulls?page={page}").as(JsonArray)
		while not array.is_empty do
			for obj in array do
				if not obj isa JsonObject then continue
				var number = obj["number"].as(Int)
				res[number] = new PullRequest.from_json(api, self, obj)
			end
			page += 1
			array = api.get("{key}/pulls?page={page}").as(JsonArray)
		end
		return res
	end

	# List of contributor related statistics.
	fun contrib_stats: Array[ContributorStats] do
		api.message(1, "Get contributor stats for {full_name}")
		var res = new Array[ContributorStats]
		var array = api.get("{key}/stats/contributors")
		if array isa JsonArray then
			for obj in array do
				res.add new ContributorStats.from_json(api, obj.as(JsonObject))
			end
		end
		return res
	end

	# Repo default branch.
	fun default_branch: Branch do
		var name = json["default_branch"].as(String)
		var branch = api.load_branch(self, name)
		assert branch isa Branch
		return branch
	end

	# Set the default branch
	fun default_branch=(branch: Branch) do json["default_branch"] = branch.json
end

# A `RepoEntity` is something contained in a `Repo`.
abstract class RepoEntity
	super GithubEntity

	# Repo that contains `self`.
	var repo: Repo

	# Init `self` from a `json` object.
	init from_json(api: GithubAPI, repo: Repo, json: JsonObject) do
		self.api = api
		self.repo = repo
		self.json = json
	end
end

# A Github branch.
#
# Should be accessed from `GithubAPI::load_branch`.
#
# See <https://developer.github.com/v3/repos/#list-branches>.
class Branch
	super RepoEntity

	redef var key is lazy do return "{repo.key}/branches/{name}"

	# Branch name.
	var name: String

	redef init from_json(api, repo, json) do
		self.name = json["name"].as(String)
		super
	end

	# Get the last commit of `self`.
	fun commit: Commit do return new Commit.from_json(api, repo, json["commit"].as(JsonObject))

	# Set the last commit
	fun commit=(commit: Commit) do json["commit"] = commit.json

	# List all commits in `self`.
	#
	# This can be long depending on the branch size.
	# Commit are returned in an unspecified order.
	fun commits: Array[Commit] do
		var res = new Array[Commit]
		var done = new HashSet[String]
		var todos = new Array[Commit]
		todos.add commit
		while not todos.is_empty do
			var commit = todos.pop
			if done.has(commit.sha) then continue
			done.add commit.sha
			res.add commit
			for parent in commit.parents do
				todos.add parent
			end
		end
		return res
	end
end

# A Github commit.
#
# Should be accessed from `GithubAPI::load_commit`.
#
# See <https://developer.github.com/v3/repos/commits/>.
class Commit
	super RepoEntity

	redef var key is lazy do return "{repo.key}/commits/{sha}"

	# Commit SHA.
	var sha: String

	redef init from_json(api, repo, json) do
		self.sha = json["sha"].as(String)
		super
	end

	# Parent commits of `self`.
	fun parents: Array[Commit] do
		var res = new Array[Commit]
		var parents = json.get_or_null("parents")
		if not parents isa JsonArray then return res
		for obj in parents do
			if not obj isa JsonObject then continue
			res.add(api.load_commit(repo, obj["sha"].as(String)).as(not null))
		end
		return res
	end

	# Set parent commits.
	fun parents=(parents: Array[Commit]) do
		var res = new JsonArray
		for parent in parents do res.add parent.json
		json["parents"] = res
	end

	# Author of the commit.
	fun author: nullable User do
		var user = json.get_or_null("author")
		if user isa JsonObject then return new User.from_json(api, user)
		return null
	end

	# Set commit author.
	fun author=(user: nullable User) do
		if user == null then
			json["author"] = null
		else
			json["author"] = user.json
		end
	end

	# Committer of the commit.
	fun committer: nullable User do
		var user = json.get_or_null("author")
		if user isa JsonObject then return new User.from_json(api, user)
		return null
	end

	# Set commit committer.
	fun committer=(user: nullable User) do
		if user == null then
			json["committer"] = null
		else
			json["committer"] = user.json
		end
	end

	# Authoring date as ISODate.
	fun author_date: ISODate do
		var commit = json["commit"].as(JsonObject)
		var author = commit["author"].as(JsonObject)
		return new ISODate.from_string(author["date"].as(String))
	end

	# Commit date as ISODate.
	fun commit_date: ISODate do
		var commit = json["commit"].as(JsonObject)
		var author = commit["committer"].as(JsonObject)
		return new ISODate.from_string(author["date"].as(String))
	end

	# List files staged in this commit.
	fun files: Array[GithubFile] do
		var res = new Array[GithubFile]
		var files = json.get_or_null("files")
		if not files isa JsonArray then return res
		for obj in files do
			res.add(new GithubFile(obj.as(JsonObject)))
		end
		return res
	end

	# Set commit files.
	fun files=(files: Array[GithubFile]) do
		var res = new JsonArray
		for file in files do res.add file.json
		json["files"] = res
	end

	# Commit message.
	fun message: String do return json["commit"].as(JsonObject)["message"].as(String)
end

# A Github issue.
#
# Should be accessed from `GithubAPI::load_issue`.
#
# See <https://developer.github.com/v3/issues/>.
class Issue
	super RepoEntity

	redef var key is lazy do return "{repo.key}/issues/{number}"

	# Issue Github ID.
	var number: Int

	redef init from_json(api, repo, json) do
		self.number = json["number"].as(Int)
		super
	end

	# Issue title.
	fun title: String do return json["title"].as(String)

	# Set issue title
	fun title=(title: String) do json["title"] = title

	# User that created this issue.
	fun user: User do return new User.from_json(api, json["user"].as(JsonObject))

	# Set issue creator.
	fun user=(user: User) do json["user"] = user.json

	# List of labels on this issue associated to their names.
	fun labels: Map[String, Label] do
		var res = new HashMap[String, Label]
		var lbls = json.get_or_null("labels")
		if not lbls isa JsonArray then return res
		for obj in lbls do
			if not obj isa JsonObject then continue
			var name = obj["name"].as(String)
			res[name] = new Label.from_json(api, repo, obj)
		end
		return res
	end

	# State of the issue on Github.
	fun state: String do return json["state"].as(String)

	# Set the state of this issue.
	fun state=(state: String) do json["state"] = state

	# Is the issue locked?
	fun locked: Bool do return json["locked"].as(Bool)

	# Set issue locked state.
	fun locked=(locked: Bool) do json["locked"] = locked

	# Assigned `User` (if any).
	fun assignee: nullable User do
		var assignee = json.get_or_null("assignee")
		if assignee isa JsonObject then return new User.from_json(api, assignee)
		return null
	end

	# Set issue assignee.
	fun assignee=(user: nullable User) do
		if user == null then
			json["assignee"] = null
		else
			json["assignee"] = user.json
		end
	end

	# `Milestone` (if any).
	fun milestone: nullable Milestone do
		var milestone = json.get_or_null("milestone")
		if milestone isa JsonObject then return new Milestone.from_json(api, repo, milestone)
		return null
	end

	# Set issue milestone.
	fun milestone=(milestone: nullable Milestone) do
		if milestone == null then
			json["milestone"] = null
		else
			json["milestone"] = milestone.json
		end
	end

	# List of comments made on this issue.
	fun comments: Array[IssueComment] do
		var res = new Array[IssueComment]
		var count = comments_count
		var page = 1
		var array = api.get("{key}/comments?page={page}")
		if not array isa JsonArray then
			return res
		end
		while not array.is_empty and res.length < count do
			for obj in array do
				if not obj isa JsonObject then continue
				var id = obj["id"].as(Int)
				res.add(api.load_issue_comment(repo, id).as(not null))
			end
			page += 1
			array = api.get("{key}/comments?page={page}").as(JsonArray)
		end
		return res
	end

	# Number of comments on this issue.
	fun comments_count: Int do return json["comments"].as(Int)

	# Creation time in ISODate format.
	fun created_at: ISODate do return new ISODate.from_string(json["created_at"].as(String))

	# Set issue creation time.
	fun created_at=(created_at: nullable ISODate) do
		if created_at == null then
			json["created_at"] = null
		else
			json["created_at"] = created_at.to_s
		end
	end

	# Last update time in ISODate format (if any).
	fun updated_at: nullable ISODate do
		var res = json.get_or_null("updated_at")
		if res isa String then return new ISODate.from_string(res)
		return null
	end

	# Set issue last update time.
	fun updated_at=(updated_at: nullable ISODate) do
		if updated_at == null then
			json["updated_at"] = null
		else
			json["updated_at"] = updated_at.to_s
		end
	end

	# Close time in ISODate format (if any).
	fun closed_at: nullable ISODate do
		var res = json.get_or_null("closed_at")
		if res isa String then return new ISODate.from_string(res)
		return null
	end

	# Set issue close time.
	fun closed_at=(closed_at: nullable ISODate) do
		if closed_at == null then
			json["closed_at"] = null
		else
			json["closed_at"] = closed_at.to_s
		end
	end

	# TODO link to pull request

	# Full description of the issue.
	fun body: String do return json["body"].as(String)

	# Set description body
	fun body=(body: String) do json["body"] = body

	# List of events on this issue.
	fun events: Array[IssueEvent] do
		var res = new Array[IssueEvent]
		var page = 1
		var array = api.get("{key}/events?page={page}")
		if not array isa JsonArray then return res
		while not array.is_empty do
			for obj in array do
				if not obj isa JsonObject then continue
				res.add new IssueEvent.from_json(api, repo, obj)
			end
			page += 1
			array = api.get("{key}/events?page={page}").as(JsonArray)
		end
		return res
	end

	# User that closed this issue (if any).
	fun closed_by: nullable User do
		var closer = json.get_or_null("closed_by")
		if closer isa JsonObject then return new User.from_json(api, closer)
		return null
	end

	# Set user that closed the issue.
	fun closed_by=(user: nullable User) do
		if user == null then
			json["closed_by"] = null
		else
			json["closed_by"] = user.json
		end
	end

	# Is this issue linked to a pull request?
	fun is_pull_request: Bool do return json.has_key("pull_request")
end

# A Github pull request.
#
# Should be accessed from `GithubAPI::load_pull`.
#
# PullRequest are basically Issues with more data.
# See <https://developer.github.com/v3/pulls/>.
class PullRequest
	super Issue

	redef var key is lazy do return "{repo.key}/pulls/{number}"

	# Merge time in ISODate format (if any).
	fun merged_at: nullable ISODate do
		var res = json.get_or_null("merged_at")
		if res isa String then return new ISODate.from_string(res)
		return null
	end

	# Set pull request merge time.
	fun merged_at=(merged_at: nullable ISODate) do
		if merged_at == null then
			json["merged_at"] = null
		else
			json["merged_at"] = merged_at.to_s
		end
	end

	# Merge commit SHA.
	fun merge_commit_sha: String do return json["merge_commit_sha"].as(String)

	# Set merge_commit_sha
	fun merge_commit_sha=(sha: String) do json["merge_commit_sha"] = sha

	# Count of comments made on the pull request diff.
	fun review_comments: Int do return json["review_comments"].as(Int)

	# Set review_comments
	fun review_comments=(count: Int) do json["review_comments"] = count

	# Pull request head (can be a commit SHA or a branch name).
	fun head: PullRef do
		var json = json["head"].as(JsonObject)
		return new PullRef(api, json)
	end

	# Set head
	fun head=(head: PullRef) do json["head"] = head.json

	# Pull request base (can be a commit SHA or a branch name).
	fun base: PullRef do
		var json = json["base"].as(JsonObject)
		return new PullRef(api, json)
	end

	# Set base
	fun base=(base: PullRef) do json["base"] = base.json

	# Is this pull request merged?
	fun merged: Bool do return json["merged"].as(Bool)

	# Set merged
	fun merged=(merged: Bool) do json["merged"] = merged

	# Is this pull request mergeable?
	fun mergeable: Bool do return json["mergeable"].as(Bool)

	# Set mergeable
	fun mergeable=(mergeable: Bool) do json["mergeable"] = mergeable

	# Mergeable state of this pull request.
	#
	# See <https://developer.github.com/v3/pulls/#list-pull-requests>.
	fun mergeable_state: Int do return json["mergeable_state"].as(Int)

	# Set mergeable_state
	fun mergeable_state=(mergeable_state: Int) do json["mergeable_state"] = mergeable_state

	# User that merged this pull request (if any).
	fun merged_by: nullable User do
		var merger = json.get_or_null("merged_by")
		if merger isa JsonObject then return new User.from_json(api, merger)
		return null
	end

	# Set merged_by.
	fun merged_by=(merged_by: nullable User) do
		if merged_by == null then
			json["merged_by"] = null
		else
			json["merged_by"] = merged_by.json
		end
	end

	# Count of commits in this pull request.
	fun commits: Int do return json["commits"].as(Int)

	# Set commits
	fun commits=(commits: Int) do json["commits"] = commits

	# Added line count.
	fun additions: Int do return json["additions"].as(Int)

	# Set additions
	fun additions=(additions: Int) do json["additions"] = additions

	# Deleted line count.
	fun deletions: Int do return json["deletions"].as(Int)

	# Set deletions
	fun deletions=(deletions: Int) do json["deletions"] = deletions

	# Changed files count.
	fun changed_files: Int do return json["changed_files"].as(Int)

	# Set changed_files
	fun changed_files=(changed_files: Int) do json["changed_files"] = changed_files
end

# A pull request reference (used for head and base).
class PullRef

	# Api instance that maintains self.
	var api: GithubAPI

	# JSON representation.
	var json: JsonObject

	# Label pointed by `self`.
	fun labl: String do return json["label"].as(String)

	# Set labl
	fun labl=(labl: String) do json["label"] = labl

	# Reference pointed by `self`.
	fun ref: String do return json["ref"].as(String)

	# Set ref
	fun ref=(ref: String) do json["ref"] = ref

	# Commit SHA pointed by `self`.
	fun sha: String do return json["sha"].as(String)

	# Set sha
	fun sha=(sha: String) do json["sha"] = sha

	# User pointed by `self`.
	fun user: User do
		return new User.from_json(api, json["user"].as(JsonObject))
	end

	# Set user
	fun user=(user: User) do json["user"] = user.json

	# Repo pointed by `self`.
	fun repo: Repo do
		return new Repo.from_json(api, json["repo"].as(JsonObject))
	end

	# Set repo
	fun repo=(repo: Repo) do json["repo"] = repo.json
end

# A Github label.
#
# Should be accessed from `GithubAPI::load_label`.
#
# See <https://developer.github.com/v3/issues/labels/>.
class Label
	super RepoEntity

	redef var key is lazy do return "{repo.key}/labels/{name}"

	# Label name.
	var name: String

	redef init from_json(api, repo, json) do
		self.name = json["name"].as(String)
		super
	end

	# Label color code.
	fun color: String do return json["color"].as(String)

	# Set color
	fun color=(color: String) do json["color"] = color
end

# A Github milestone.
#
# Should be accessed from `GithubAPI::load_milestone`.
#
# See <https://developer.github.com/v3/issues/milestones/>.
class Milestone
	super RepoEntity

	redef var key is lazy do return "{repo.key}/milestones/{number}"

	# The milestone id on Github.
	var number: Int

	redef init from_json(api, repo, json) do
		super
		self.number = json["number"].as(Int)
	end

	# Milestone title.
	fun title: String do return json["title"].as(String)

	# Set title
	fun title=(title: String) do json["title"] = title

	# Milestone long description.
	fun description: String do return json["description"].as(String)

	# Set description
	fun description=(description: String) do json["description"] = description

	# Count of opened issues linked to this milestone.
	fun open_issues: Int do return json["open_issues"].as(Int)

	# Set open_issues
	fun open_issues=(open_issues: Int) do json["open_issues"] = open_issues

	# Count of closed issues linked to this milestone.
	fun closed_issues: Int do return json["closed_issues"].as(Int)

	# Set closed_issues
	fun closed_issues=(closed_issues: Int) do json["closed_issues"] = closed_issues

	# Milestone state.
	fun state: String do return json["state"].as(String)

	# Set state
	fun state=(state: String) do json["state"] = state

	# Creation time in ISODate format.
	fun created_at: ISODate do
		return new ISODate.from_string(json["created_at"].as(String))
	end

	# Set created_at
	fun created_at=(created_at: ISODate) do json["created_at"] = created_at.to_s

	# User that created this milestone.
	fun creator: User do
		return new User.from_json(api, json["creator"].as(JsonObject))
	end

	# Set creator
	fun creator=(creator: User) do json["creator"] = creator.json

	# Due time in ISODate format (if any).
	fun due_on: nullable ISODate do
		var res = json.get_or_null("updated_at")
		if res isa String then return new ISODate.from_string(res)
		return null
	end

	# Set due_on.
	fun due_on=(due_on: nullable ISODate) do
		if due_on == null then
			json["due_on"] = null
		else
			json["due_on"] = due_on.to_s
		end
	end

	# Update time in ISODate format (if any).
	fun updated_at: nullable ISODate do
		var res = json.get_or_null("updated_at")
		if res isa String then return new ISODate.from_string(res)
		return null
	end

	# Set updated_at.
	fun updated_at=(updated_at: nullable ISODate) do
		if updated_at == null then
			json["updated_at"] = null
		else
			json["updated_at"] = updated_at.to_s
		end
	end

	# Close time in ISODate format (if any).
	fun closed_at: nullable ISODate do
		var res = json.get_or_null("closed_at")
		if res isa String then return new ISODate.from_string(res)
		return null
	end

	# Set closed_at.
	fun closed_at=(closed_at: nullable ISODate) do
		if closed_at == null then
			json["closed_at"] = null
		else
			json["closed_at"] = closed_at.to_s
		end
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
	super RepoEntity

	# Identifier of this comment.
	var id: Int

	redef init from_json(api, repo, json) do
		self.id = json["id"].as(Int)
		super
	end

	# User that made this comment.
	fun user: User do
		return new User.from_json(api, json["user"].as(JsonObject))
	end

	# Set user
	fun user=(user: User) do json["user"] = user.json

	# Creation time in ISODate format.
	fun created_at: ISODate do
		return new ISODate.from_string(json["created_at"].as(String))
	end

	# Set created_at
	fun created_at=(created_at: ISODate) do json["created_at"] = created_at.to_s

	# Last update time in ISODate format (if any).
	fun updated_at: nullable ISODate do
		var res = json.get_or_null("updated_at")
		if res isa String then return new ISODate.from_string(res)
		return null
	end

	# Set updated_at.
	fun updated_at=(updated_at: nullable ISODate) do
		if updated_at == null then
			json["updated_at"] = null
		else
			json["updated_at"] = updated_at.to_s
		end
	end

	# Comment body text.
	fun body: String do return json["body"].as(String)

	# Set body
	fun body=(body: String) do json["body"] = body

	# Does the comment contain an acknowledgement (+1)
	fun is_ack: Bool
	do
		return body.has("\\+1\\b".to_re) or body.has(":+1:") or body.has(":shipit:")
	end
end

# A comment made on a commit.
class CommitComment
	super Comment

	redef var key is lazy do return "{repo.key}/comments/{id}"

	# Commented commit.
	fun commit: Commit do
		return api.load_commit(repo, json["commit_id"].as(String)).as(not null)
	end

	# Set commit
	fun commit=(commit: Commit) do json["commit_id"] = commit.json

	# Position of the comment on the line.
	fun position: nullable String do
		var res = json.get_or_null("position")
		if res isa String then return res
		return null
	end

	# Set position.
	fun position=(position: nullable String) do json["position"] = position

	# Line of the comment.
	fun line: nullable String do
		var res = json.get_or_null("line")
		if res isa String then return res
		return null
	end

	# Set line.
	fun line=(line: nullable String) do json["line"] = line

	# Path of the commented file.
	fun path: String do return json["path"].as(String)

	# Set path.
	fun path=(path: String) do json["path"] = path
end

# Comments made on Github issue and pull request pages.
#
# Should be accessed from `GithubAPI::load_issue_comment`.
#
# See <https://developer.github.com/v3/issues/comments/>.
class IssueComment
	super Comment

	redef var key is lazy do return "{repo.key}/issues/comments/{id}"

	# Issue that contains `self`.
	fun issue: Issue do
		var number = issue_url.split("/").last.to_i
		return api.load_issue(repo, number).as(not null)
	end

	# Link to the issue document on API.
	fun issue_url: String do return json["issue_url"].as(String)

	# Set issue_url.
	fun issue_url=(issue_url: String) do json["issue_url"] = issue_url
end

# Comments made on Github pull request diffs.
#
# Should be accessed from `GithubAPI::load_diff_comment`.
#
# See <https://developer.github.com/v3/pulls/comments/>.
class ReviewComment
	super Comment

	redef var key is lazy do return "{repo.key}/pulls/comments/{id}"

	# Pull request that contains `self`.
	fun pull: PullRequest do
		var number = pull_request_url.split("/").last.to_i
		return api.load_pull(repo, number).as(not null)
	end

	# Link to the pull request on API.
	fun pull_request_url: String do return json["pull_request_url"].as(String)

	# Set pull_request_url.
	fun pull_request_url=(pull_request_url: String) do json["pull_request_url"] = pull_request_url

	# Diff hunk.
	fun diff_hunk: String do return json["diff_hunk"].as(String)

	# Set diff_hunk.
	fun diff_hunk=(diff_hunk: String) do json["diff_hunk"] = diff_hunk

	# Path of commented file.
	fun path: String do return json["path"].as(String)

	# Set path.
	fun path=(path: String) do json["path"] = path

	# Position of the comment on the file.
	fun position: Int do return json["position"].as(Int)

	# Set position.
	fun position=(position: Int) do json["position"] = position

	# Original position in the diff.
	fun original_position: Int do return json["original_position"].as(Int)

	# Set original_position.
	fun original_position=(original_position: Int) do json["original_position"] = original_position

	# Commit referenced by this comment.
	fun commit_id: String do return json["commit_id"].as(String)

	# Set commit_id.
	fun commit_id=(commit_id: String) do json["commit_id"] = commit_id

	# Original commit id.
	fun original_commit_id: String do return json["original_commit_id"].as(String)

	# Set original_commit_id.
	fun original_commit_id=(commit_id: String) do json["original_commit_id"] = commit_id
end

# An event that occurs on a Github `Issue`.
#
# Should be accessed from `GithubAPI::load_issue_event`.
#
# See <https://developer.github.com/v3/issues/events/>.
class IssueEvent
	super RepoEntity

	redef var key is lazy do return "{repo.key}/issues/events/{id}"

	# Event id on Github.
	var id: Int

	redef init from_json(api, repo, json) do
		self.id = json["id"].as(Int)
		super
	end

	# Issue that contains `self`.
	fun issue: Issue do
		return new Issue.from_json(api, repo, json["issue"].as(JsonObject))
	end

	# Set issue.
	fun issue=(issue: Issue) do json["issue"] = issue.json

	# User that initiated the event.
	fun actor: User do
		return new User.from_json(api, json["actor"].as(JsonObject))
	end

	# Set actor.
	fun actor=(actor: User) do json["actor"] = actor.json

	# Creation time in ISODate format.
	fun created_at: ISODate do
		return new ISODate.from_string(json["created_at"].as(String))
	end

	# Set created_at.
	fun created_at=(created_at: ISODate) do json["created_at"] = created_at.to_s

	# Event descriptor.
	fun event: String do return json["event"].as(String)

	# Set event.
	fun event=(event: String) do json["event"] = event

	# Commit linked to this event (if any).
	fun commit_id: nullable String do
		var res = json.get_or_null("commit_id")
		if res isa String then return res
		return null
	end

	# Set commit_id.
	fun commit_id=(commit_id: nullable String) do json["commit_id"] = commit_id

	# Label linked to this event (if any).
	fun labl: nullable Label do
		var res = json.get_or_null("label")
		if res isa JsonObject then return new Label.from_json(api, repo, res)
		return null
	end

	# Set labl.
	fun labl=(labl: nullable Label) do
		if labl == null then
			json["labl"] = null
		else
			json["labl"] = labl.json
		end
	end

	# User linked to this event (if any).
	fun assignee: nullable User do
		var res = json.get_or_null("assignee")
		if res isa JsonObject then return new User.from_json(api, res)
		return null
	end

	# Set assignee.
	fun assignee=(assignee: nullable User) do
		if assignee == null then
			json["assignee"] = null
		else
			json["assignee"] = assignee.json
		end
	end

	# Milestone linked to this event (if any).
	fun milestone: nullable Milestone do
		var res = json.get_or_null("milestone")
		if res isa JsonObject then return new Milestone.from_json(api, repo, res)
		return null
	end

	# Set milestone.
	fun milestone=(milestone: nullable User) do
		if milestone == null then
			json["milestone"] = null
		else
			json["milestone"] = milestone.json
		end
	end

	# Rename linked to this event (if any).
	fun rename: nullable RenameAction do
		var res = json.get_or_null("rename")
		if res isa JsonObject then return new RenameAction(res)
		return null
	end

	# Set rename.
	fun rename=(rename: nullable User) do
		if rename == null then
			json["rename"] = null
		else
			json["rename"] = rename.json
		end
	end
end

# A rename action maintains the name before and after a renaming action.
class RenameAction

	# JSON content.
	var json: JsonObject

	# Name before renaming.
	fun from: String do return json["from"].as(String)

	# Set from.
	fun from=(from: String) do json["from"] = from

	# Name after renaming.
	fun to: String do return json["to"].as(String)

	# Set to.
	fun to=(to: String) do json["to"] = to
end

# Contributors list with additions, deletions, and commit counts.
#
# Should be accessed from `Repo::contrib_stats`.
#
# See <https://developer.github.com/v3/repos/statistics/>.
class ContributorStats
	super Comparable

	redef type OTHER: ContributorStats

	# Github API client.
	var api: GithubAPI

	# Json content.
	var json: JsonObject

	# Init `self` from a `json` object.
	init from_json(api: GithubAPI, json: JsonObject) do
		self.api = api
		self.json = json
	end

	# User these statistics are about.
	fun author: User do
		return new User.from_json(api, json["author"].as(JsonObject))
	end

	# Set author.
	fun author=(author: User) do json["author"] = author.json

	# Total number of commit.
	fun total: Int do return json["total"].as(Int)

	# Set total.
	fun total=(total: Int) do json["total"] = total

	# Are of weeks of activity with detailed statistics.
	fun weeks: JsonArray do return json["weeks"].as(JsonArray)

	# Set weeks.
	fun weeks=(weeks: JsonArray) do json["weeks"] = weeks

	# ContributorStats can be compared on the total amount of commits.
	redef fun <(o) do return total < o.total
end

# A Github file representation.
#
# Mostly a wrapper around a json object.
class GithubFile

	# Json content.
	var json: JsonObject

	# File name.
	fun filename: String do return json["filename"].as(String)

	# Set filename.
	fun filename=(filename: String) do json["filename"] = filename
end
