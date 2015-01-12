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

# Nit object oriented interface to Github api.
#
# This modules reifies Github API elements as Nit classes.
#
# For most use-cases you need to use the `GithubAPI` client.
module api

import github_curl

# Interface to Github REST API.
#
# Used by all `GithubEntity` to perform requests.
#
# Usage:
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
# The API client allows to get Github API entities:
#
# ~~~
# var repo = api.load_repo("privat/nit")
# assert repo isa Repo
# assert repo.name == "nit"
#
# var user = api.load_user("Morriar")
# assert user isa User
# assert user.login == "Morriar"
# ~~~
class GithubAPI

	# Github API OAuth token.
	#
	# This token is used to authenticate the application on Github API.
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
	#     var obj = api.get("repos/privat/nit")
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
	private fun load_from_github(key: String): JsonObject do
		message(1, "Get {key} (github)")
		var res = get(key)
		if was_error then return new JsonObject
		return res.as(JsonObject)
	end

	# Get the Github user with `login`.
	#
	# Returns `null` if the user cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var user = api.load_user("Morriar")
	#     assert user.login == "Morriar"
	fun load_user(login: String): nullable User do
		var user = new User(self, login)
		user.load_from_github
		if was_error then return null
		return user
	end

	# Get the Github repo with `full_name`.
	#
	# Returns `null` if the repo cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("privat/nit")
	#     assert repo.name == "nit"
	#     assert repo.owner.login == "privat"
	#     assert repo.default_branch.name == "master"
	fun load_repo(full_name: String): nullable Repo do
		var repo = new Repo(self, full_name)
		repo.load_from_github
		if was_error then return null
		return repo
	end

	# Get the Github branch with `name`.
	#
	# Returns `null` if the branch cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("privat/nit")
	#     assert repo isa Repo
	#     var branch = api.load_branch(repo, "master")
	#     assert branch.name == "master"
	#     assert branch.commit isa Commit
	fun load_branch(repo: Repo, name: String): nullable Branch do
		var branch = new Branch(self, repo, name)
		branch.load_from_github
		if was_error then return null
		return branch
	end

	# Get the Github commit with `sha`.
	#
	# Returns `null` if the commit cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("privat/nit")
	#     assert repo isa Repo
	#     var commit = api.load_commit(repo, "64ce1f")
	#     assert commit isa Commit
	fun load_commit(repo: Repo, sha: String): nullable Commit do
		var commit = new Commit(self, repo, sha)
		commit.load_from_github
		if was_error then return null
		return commit
	end

	# Get the Github issue #`number`.
	#
	# Returns `null` if the issue cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("privat/nit")
	#     assert repo != null
	#     var issue = api.load_issue(repo, 1)
	#     assert issue.title == "Doc"
	fun load_issue(repo: Repo, number: Int): nullable Issue do
		var issue = new Issue(self, repo, number)
		issue.load_from_github
		if was_error then return null
		return issue
	end

	# Get the Github label with `name`.
	#
	# Returns `null` if the label cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("privat/nit")
	#     assert repo isa Repo
	#     var labl = api.load_label(repo, "ok_will_merge")
	#     assert labl != null
	fun load_label(repo: Repo, name: String): nullable Label do
		var labl = new Label(self, repo, name)
		labl.load_from_github
		if was_error then return null
		return labl
	end

	# Get the Github milestone with `id`.
	#
	# Returns `null` if the milestone cannot be found.
	#
	#     var api = new GithubAPI(get_github_oauth)
	#     var repo = api.load_repo("privat/nit")
	#     assert repo isa Repo
	#     var stone = api.load_milestone(repo, 4)
	#     assert stone.title == "v1.0prealpha"
	fun load_milestone(repo: Repo, id: Int): nullable Milestone do
		var milestone = new Milestone(self, repo, id)
		milestone.load_from_github
		if was_error then return null
		return milestone
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
	private fun load_from_github do
		json = api.load_from_github(key)
	end

	redef fun to_s do return json.to_json
end

# A Github user.
#
# Should be accessed from `GithubAPI::load_user`.
#
# See <https://developer.github.com/v3/users/>.
class User
	super GithubEntity

	redef var key is lazy do return "users/{login}"

	# Github login.
	var login: String

	# Init `self` from a `json` object.
	init from_json(api: GithubAPI, json: JsonObject) do
		init(api, json["login"].to_s)
		self.json = json
	end

	# Github User page url.
	fun html_url: String do return json["html_url"].to_s

	# Avatar image url for this user.
	fun avatar_url: String do return json["avatar_url"].to_s
end

# A Github repository.
#
# Should be accessed from `GithubAPI::load_repo`.
#
# See <https://developer.github.com/v3/repos/>.
class Repo
	super GithubEntity

	redef var key is lazy do return "repos/{full_name}"

	# Repo full name on Github.
	var full_name: String

	# Init `self` from a `json` object.
	init from_json(api: GithubAPI, json: JsonObject) do
		init(api, json["full_name"].to_s)
		self.json = json
	end

	# Repo short name on Github.
	fun name: String do return json["name"].to_s

	# Github User page url.
	fun html_url: String do return json["html_url"].to_s

	# Get the repo owner.
	fun owner: User do
		return new User.from_json(api, json["owner"].as(JsonObject))
	end

	# List of branches associated with their names.
	fun branches: Map[String, Branch] do
		api.message(1, "Get branches for {full_name}")
		var array = api.get("repos/{full_name}/branches")
		var res = new HashMap[String, Branch]
		if not array isa JsonArray then return res
		for obj in array do
			if not obj isa JsonObject then continue
			var name = obj["name"].to_s
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
			var name = obj["name"].to_s
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

	# Repo default branch.
	fun default_branch: Branch do
		var name = json["default_branch"].to_s
		var branch = api.load_branch(self, name)
		assert branch isa Branch
		return branch
	end
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
		self.name = json["name"].to_s
		super
	end

	# Get the last commit of `self`.
	fun commit: Commit do
		return new Commit.from_json(api, repo, json["commit"].as(JsonObject))
	end

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
# See <https://developer.github.com/v3/commits/>.
class Commit
	super RepoEntity

	redef var key is lazy do return "{repo.key}/commits/{sha}"

	# Commit SHA.
	var sha: String

	redef init from_json(api, repo, json) do
		self.sha = json["sha"].to_s
		super
	end

	# Parent commits of `self`.
	fun parents: Array[Commit] do
		var res = new Array[Commit]
		var parents = json["parents"]
		if not parents isa JsonArray then return res
		for obj in parents do
			if not obj isa JsonObject then continue
			res.add(api.load_commit(repo, obj["sha"].to_s).as(not null))
		end
		return res
	end

	# Author of the commit.
	fun author: nullable User do
		if not json.has_key("author") then return null
		var user = json["author"]
		if not user isa JsonObject then return null
		return new User.from_json(api, user)
	end

	# Committer of the commit.
	fun committer: nullable User do
		if not json.has_key("committer") then return null
		var user = json["author"]
		if not user isa JsonObject then return null
		return new User.from_json(api, user)
	end

	# Authoring date as ISODate.
	fun author_date: ISODate do
		var commit = json["commit"].as(JsonObject)
		var author = commit["author"].as(JsonObject)
		return new ISODate.from_string(author["date"].to_s)
	end

	# Commit date as ISODate.
	fun commit_date: ISODate do
		var commit = json["commit"].as(JsonObject)
		var author = commit["committer"].as(JsonObject)
		return new ISODate.from_string(author["date"].to_s)
	end

	# Commit message.
	fun message: String do return json["commit"].as(JsonObject)["message"].to_s
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
	fun title: String do return json["title"].to_s

	# User that created this issue.
	fun user: User do
		return new User.from_json(api, json["user"].as(JsonObject))
	end

	# List of labels on this issue associated to their names.
	fun labels: Map[String, Label] do
		var res = new HashMap[String, Label]
		for obj in json["labels"].as(JsonArray) do
			if not obj isa JsonObject then continue
			var name = obj["name"].to_s
			res[name] = new Label.from_json(api, repo, obj)
		end
		return res
	end

	# State of the issue on Github.
	fun state: String do return json["state"].to_s

	# Is the issue locked?
	fun locked: Bool do return json["locked"].as(Bool)

	# Assigned `User` (if any).
	fun assignee: nullable User do
		var assignee = json["assignee"]
		if not assignee isa JsonObject then return null
		return new User.from_json(api, assignee)
	end

	# `Milestone` (if any).
	fun milestone: nullable Milestone do
		var milestone = json["milestone"]
		if not milestone isa JsonObject then return null
		return new Milestone.from_json(api, repo, milestone)
	end

	# Number of comments on this issue.
	fun comments_count: Int do return json["comments"].to_s.to_i

	# Creation time in ISODate format.
	fun created_at: ISODate do
		return new ISODate.from_string(json["created_at"].to_s)
	end

	# Last update time in ISODate format (if any).
	fun updated_at: nullable ISODate do
		var res = json["updated_at"]
		if res == null then return null
		return new ISODate.from_string(res.to_s)
	end

	# Close time in ISODate format (if any).
	fun closed_at: nullable ISODate do
		var res = json["closed_at"]
		if res == null then return null
		return new ISODate.from_string(res.to_s)
	end

	# Full description of the issue.
	fun body: String  do return json["body"].to_s

	# User that closed this issue (if any).
	fun closed_by: nullable User do
		var closer = json["closed_by"]
		if not closer isa JsonObject then return null
		return new User.from_json(api, closer)
	end
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
		self.name = json["name"].to_s
		super
	end

	# Label color code.
	fun color: String do return json["color"].to_s
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
	fun title: String do return json["title"].to_s

	# Milestone long description.
	fun description: String do return json["description"].to_s

	# Count of opened issues linked to this milestone.
	fun open_issues: Int do return json["open_issues"].to_s.to_i

	# Count of closed issues linked to this milestone.
	fun closed_issues: Int do return json["closed_issues"].to_s.to_i

	# Milestone state.
	fun state: String do return json["state"].to_s

	# Creation time in ISODate format.
	fun created_at: ISODate do
		return new ISODate.from_string(json["created_at"].to_s)
	end

	# User that created this milestone.
	fun creator: User do
		return new User.from_json(api, json["creator"].as(JsonObject))
	end

	# Due time in ISODate format (if any).
	fun due_on: nullable ISODate do
		var res = json["updated_at"]
		if res == null then return null
		return new ISODate.from_string(res.to_s)
	end

	# Update time in ISODate format (if any).
	fun updated_at: nullable ISODate do
		var res = json["updated_at"]
		if res == null then return null
		return new ISODate.from_string(res.to_s)
	end

	# Close time in ISODate format (if any).
	fun closed_at: nullable ISODate do
		var res = json["closed_at"]
		if res == null then return null
		return new ISODate.from_string(res.to_s)
	end
end
