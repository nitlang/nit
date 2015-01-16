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

# Events are emitted by Github Hooks.
#
# See <https://developer.github.com/v3/activity/events/types/>
module events

import api

# Github event stub.
class GithubEvent

	# Github API client.
	var api: GithubAPI

	# Json representation of `self`.
	var json: JsonObject is noinit

	init do
		json = new JsonObject
	end

	# Init `self` from a `json` object.
	init from_json(api: GithubAPI, json: JsonObject) do
		self.api = api
		self.json = json
	end

	# Action performed by the event.
	fun action: String do return json["action"].to_s

	# Repo where this event occured.
	fun repo: Repo do
		return new Repo.from_json(api, json["repository"].as(JsonObject))
	end
end

# Triggered when a commit comment is created.
class CommitCommentEvent
	super GithubEvent

	# The `Comment` itself.
	fun comment: CommitComment do
		return new CommitComment.from_json(api, repo, json["comment"].as(JsonObject))
	end
end

# Triggered when a repository, branch, or tag is created.
class CreateEvent
	super GithubEvent

	# Oject type that was created.
	#
	# Can be one of `repository`, `branch`, or `tag`.
	fun ref_type: String do return json["ref_type"].to_s

	# Git ref (or null if only a repository was created).
	fun ref: String do return json["ref"].to_s

	# Name of the repo's default branch (usually master).
	fun master_branch: String do return json["master_branch"].to_s

	# Repo's current description.
	fun description: String do return json["description"].to_s
end

# Triggered when a branch or a tag is deleted.
class DeleteEvent
	super GithubEvent

	# Object type that was deleted.
	#
	# Can be one of `repository`, `branch`, or `tag`.
	fun ref_type: String do return json["ref_type"].to_s

	# Git ref (or null if only a repository was deleted).
	fun ref: String do return json["ref"].to_s
end

# Triggered when a new snapshot is deployed.
#
# Deployement are mainly used with integration testing servers.
class DeploymentEvent
	super GithubEvent

	# Commit SHA for which this deployment was created.
	fun sha: String do return json["sha"].to_s

	# Name of repository for this deployment, formatted as :owner/:repo.
	fun name: String do return json["name"].to_s

	# Optional extra information for this deployment.
	fun payload: nullable String do
		if not json.has_key("payload") then return null
		return json["payload"].to_s
	end

	# Optional environment to deploy to.
	# Default: "production"
	fun environment: nullable String do
		if not json.has_key("environment") then return null
		return json["environment"].to_s
	end

	# Optional human-readable description added to the deployment.
	fun description: nullable String do
		if not json.has_key("description") then return null
		return json["description"].to_s
	end
end

# Triggered when a deployement's status changes.
class DeploymentStatusEvent
	super GithubEvent

	# New deployment state.
	#
	# Can be `pending`, `success`, `failure`, or `error`.
	fun state: String do return json["state"].to_s

	# Optional link added to the status.
	fun target_url: nullable String do
		if not json.has_key("target_url") then return null
		return json["target_url"].to_s
	end

	# Deployment hash that this status is associated with.
	fun deployment: String do return json["deployment"].to_s

	# Optional human-readable description added to the status.
	fun description: nullable String do
		if not json.has_key("description") then return null
		return json["description"].to_s
	end
end

# Triggered when a user forks a repository.
class ForkEvent
	super GithubEvent

	# Created repository.
	fun forkee: Repo do return new Repo.from_json(api, json["forkee"].as(JsonObject))
end

# Triggered when an issue comment is created.
class IssueCommentEvent
	super GithubEvent

	# `Issue` the comment belongs to.
	fun issue: Issue do
		return new Issue.from_json(api, repo, json["issue"].as(JsonObject))
	end

	# The `Comment` itself.
	fun comment: IssueComment do
		return new IssueComment.from_json(api, repo, json["comment"].as(JsonObject))
	end
end

# Triggered when an event occurs on an issue.
#
# Triggered when an issue is assigned, unassigned, labeled, unlabeled,
# opened, closed or reopened.
class IssuesEvent
	super GithubEvent

	# The `Issue` itself.
	fun issue: Issue do return new Issue.from_json(api, repo, json["issue"].as(JsonObject))

	# Optional `Label` that was added or removed from the issue.
	fun lbl: nullable Label do
		if not json.has_key("label") then return null
		return new Label.from_json(api, repo, json["label"].as(JsonObject))
	end

	# Optional `User` that was assigned or unassigned from the issue.
	fun assignee: nullable User do
		if not json.has_key("assignee") then return null
		return new User.from_json(api, json["assignee"].as(JsonObject))
	end
end

# Triggered when a user is added as a collaborator to a repository.
class MemberEvent
	super GithubEvent

	# `User` that was added.
	fun member: User do return new User.from_json(api, json["member"].as(JsonObject))
end

# Triggered when an event occurs on a pull request.
#
# Triggered when a pull request is assigned, unassigned,
# labeled, unlabeled, opened, closed, reopened, or synchronized.
class PullRequestEvent
	super GithubEvent

	# The pull request number.
	fun number: Int do return json["number"].as(Int)

	# The `PullRequest` itself.
	fun pull: PullRequest do
		return new PullRequest.from_json(api, repo, json["pull_request"].as(JsonObject))
	end
end

# Triggered when a comment is created on a pull request diff.
class PullRequestReviewCommentEvent
	super GithubEvent

	# The `Comment` itself.
	fun comment: ReviewComment do
		return new ReviewComment.from_json(api, repo, json["comment"].as(JsonObject))
	end

	# `PullRequest` the `comment` belongs to.
	fun pull: PullRequest do
		return new PullRequest.from_json(api, repo, json["pull_request"].as(JsonObject))
	end
end

# Triggered when a repository branch is pushed to.
class PushEvent
	super GithubEvent

	# SHA of the HEAD commit on the repository.
	fun head: String do return json["head"].to_s

	# Full Git ref that was pushed.
	#
	# Example: “refs/heads/master”
	fun ref: String do return json["ref"].to_s

	# Number of commits in the push.
	fun size: Int do return json["size"].as(Int)

	# Array of pushed commits.
	fun commits: Array[Commit] do
		var res = new Array[Commit]
		var arr = json["commits"].as(JsonArray)
		for obj in arr do
			if not obj isa JsonObject then continue
			res.add api.load_commit(repo, obj["sha"].to_s).as(not null)
		end
		return res
	end
end

# Triggered when the status of a Git commit changes.
class StatusEvent
	super GithubEvent

	# The `Commit` itself.
	fun commit: Commit do
		return api.load_commit(repo, json["sha"].to_s).as(not null)
	end

	# New state.
	#
	# Can be `pending`, `success`, `failure`, or `error`.
	fun state: String do return json["state"].to_s

	# Optional human-readable description added to the status.
	fun description: nullable String do
		if not json.has_key("description") then return null
		return json["description"].to_s
	end

	# Optional link added to the status.
	fun target_url: nullable String do
		if not json.has_key("target_url") then return null
		return json["target_url"].to_s
	end

	# Array of branches containing the status' SHA.
	#
	# Each branch contains the given SHA,
	# but the SHA may or may not be the head of the branch.
	#
	# The array includes a maximum of 10 branches.
	fun branches: Array[Branch] do
		var res = new Array[Branch]
		var arr = json["branches"].as(JsonArray)
		for obj in arr do
			if not obj isa JsonObject then continue
			res.add api.load_branch(repo, obj["name"].to_s).as(not null)
		end
		return res
	end
end
