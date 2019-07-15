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
intrude import json

# Github event stub.
class GithubEvent
	serialize

	# Event ID from Github.
	var id: nullable String is writable

	# Action performed by the event.
	var action: nullable String is writable

	# Repo where this event occured.
	var repo: Repo is writable
end

# Triggered when a commit comment is created.
class CommitCommentEvent
	super GithubEvent
	serialize

	# The `Comment` itself.
	var comment: CommitComment is writable
end

# Triggered when a repository, branch, or tag is created.
class CreateEvent
	super GithubEvent
	serialize

	# Oject type that was created.
	#
	# Can be one of `repository`, `branch`, or `tag`.
	var ref_type: String is writable

	# Git ref (or null if only a repository was created).
	var ref: String is writable

	# Name of the repo's default branch (usually master).
	var master_branch: String is writable

	# Repo's current description.
	var description: nullable String is writable
end

# Triggered when a branch or a tag is deleted.
class DeleteEvent
	super GithubEvent
	serialize

	# Object type that was deleted.
	#
	# Can be one of `repository`, `branch`, or `tag`.
	var ref_type: String is writable

	# Git ref (or null if only a repository was deleted).
	var ref: String is writable
end

# Triggered when a new snapshot is deployed.
#
# Deployement are mainly used with integration testing servers.
class DeploymentEvent
	super GithubEvent
	serialize

	# Commit SHA for which this deployment was created.
	var sha: String is writable

	# Name of repository for this deployment, formatted as :owner/:repo.
	var name: String is writable

	# Optional extra information for this deployment.
	var payload: nullable String is writable

	# Optional environment to deploy to.
	# Default: "production"
	var environment: nullable String is writable

	# Optional human-readable description added to the deployment.
	var description: nullable String is writable
end

# Triggered when a deployement's status changes.
class DeploymentStatusEvent
	super GithubEvent
	serialize

	# New deployment state.
	#
	# Can be `pending`, `success`, `failure`, or `error`.
	var state: String is writable

	# Optional link added to the status.
	var target_url: nullable String is writable

	# Deployment hash that this status is associated with.
	var deployment: String is writable

	# Optional human-readable description added to the status.
	var description: nullable String is writable
end

# Triggered when a user forks a repository.
class ForkEvent
	super GithubEvent
	serialize

	# Created repository.
	var forkee: Repo is writable
end

# Triggered when an issue comment is created.
class IssueCommentEvent
	super GithubEvent
	serialize

	# `Issue` the comment belongs to.
	var issue: Issue is writable

	# The `Comment` itself.
	var comment: IssueComment is writable
end

# Triggered when an event occurs on an issue.
#
# Triggered when an issue is assigned, unassigned, labeled, unlabeled,
# opened, closed or reopened.
class IssuesEvent
	super GithubEvent
	serialize

	# The `Issue` itself.
	var issue: Issue is writable

	# Optional `Label` that was added or removed from the issue.
	var lbl: nullable Label is writable, serialize_as("label")

	# Optional `User` that was assigned or unassigned from the issue.
	var assignee: nullable User is writable
end

# Triggered when a user is added as a collaborator to a repository.
class MemberEvent
	super GithubEvent
	serialize

	# `User` that was added.
	var member: User is writable
end

# Triggered when an event occurs on a pull request.
#
# Triggered when a pull request is assigned, unassigned,
# labeled, unlabeled, opened, closed, reopened, or synchronized.
class PullRequestEvent
	super GithubEvent
	serialize

	# The pull request number.
	var number: Int is writable

	# The `PullRequest` itself.
	var pull: PullRequest is writable
end

# Triggered when a comment is created on a pull request diff.
class PullRequestPullCommentEvent
	super GithubEvent
	serialize

	# The `Comment` itself.
	var comment: PullComment is writable

	# `PullRequest` the `comment` belongs to.
	var pull: PullRequest is writable
end

# Triggered when a repository branch is pushed to.
class PushEvent
	super GithubEvent
	serialize

	# SHA of the HEAD commit on the repository.
	var head_commit: Commit is writable

	# Full Git ref that was pushed.
	#
	# Example: “refs/heads/master”
	var ref: String is writable

	# Number of commits in the push.
	var size: nullable Int is writable

	# Array of pushed commits.
	var commits = new Array[Commit] is writable, optional
end

# Triggered when the status of a Git commit changes.
class StatusEvent
	super GithubEvent
	serialize

	# The `Commit` itself.
	var sha: String is writable

	# New state.
	#
	# Can be `pending`, `success`, `failure`, or `error`.
	var state: String is writable

	# Optional human-readable description added to the status.
	var description: nullable String is writable

	# Optional link added to the status.
	var target_url: nullable String is writable

	# Array of branches containing the status' SHA.
	#
	# Each branch contains the given SHA,
	# but the SHA may or may not be the head of the branch.
	#
	# The array includes a maximum of 10 branches.
	var branches = new Array[Branch] is writable, optional
end

redef class GithubDeserializer

	redef fun class_name_heuristic(json_object) do
		if json_object.has_key("action") and json_object.has_key("commit") and json_object.has_key("comment") then
			return "CommitCommentEvent"
		else if json_object.has_key("ref") and json_object.has_key("master_branch") then
			return "CreateEvent"
		else if json_object.has_key("ref") and json_object.has_key("ref_type") then
			return "DeleteEvent"
		else if json_object.has_key("action") and json_object.has_key("sha") then
			return "DeploymentEvent"
		else if json_object.has_key("action") and json_object.has_key("state") then
			return "DeploymentStatusEvent"
		else if json_object.has_key("action") and json_object.has_key("forkee") then
			return "ForkEvent"
		else if json_object.has_key("action") and json_object.has_key("issue") and json_object.has_key("comment") then
			return "IssueCommentEvent"
		else if json_object.has_key("action") and json_object.has_key("issue") then
			return "IssuesEvent"
		else if json_object.has_key("action") and json_object.has_key("member") then
			return "MemberEvent"
		else if json_object.has_key("action") and json_object.has_key("number") then
			return "PullRequestEvent"
		else if json_object.has_key("action") and json_object.has_key("pull") and json_object.has_key("comment") then
			return "PullRequestPullCommentEvent"
		else if json_object.has_key("head_commit") and json_object.has_key("commits") then
			return "PushEvent"
		else if json_object.has_key("action") and json_object.has_key("branches") then
			return "StatusEvent"
		else if json_object.has_key("action") and json_object.has_key("issue") then
			return "GithubEvent"
		end
		return super
	end
end
