# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014-2015 Alexandre Terrasa <alexandre@moz-code.org>
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

# Generate Github events from repo data.
#
# Mainly used for testing and history importation.
module events_generator

import github::events

# Github events generator
#
# Generates events from repo data.
class EventsGenerator

	# API client used to get github data.
	var api: GithubAPI

	# Gen a fake id for events
	fun gen_event_id: String do return get_time.to_s

	# Issues

	# Generate a new IssuesEvent from an issue.
	fun issues_event(repo: Repo, action: String, issue: Issue): IssuesEvent do
		return new IssuesEvent(gen_event_id, action, repo, issue)
	end

	# Generate a new IssuesEvent with an `opened` action.
	fun issue_open(repo: Repo, issue: Issue): IssuesEvent do
		return issues_event(repo, "opened", issue)
	end

	# Generate a new IssuesEvent with an `closed` action.
	fun issue_close(repo: Repo, issue: Issue): IssuesEvent do
		return issues_event(repo, "closed", issue)
	end

	# Generate a new IssuesEvent with an `reopened` action.
	fun issue_reopen(repo: Repo, issue: Issue): IssuesEvent do
		return issues_event(repo, "reopened", issue)
	end

	# Generate a new IssuesEvent from a IssueEvent.
	fun issue_raw_event(repo: Repo, issue: Issue, event: IssueEvent): IssuesEvent do
		return new IssuesEvent(event.id.to_s, event.event, repo, issue, event.labl, event.assignee)
	end

	# Generate a new IssueCommentEvent from a IssueComment.
	fun issue_comment_event(repo: Repo, issue: Issue, comment: IssueComment): IssueCommentEvent do
		return new IssueCommentEvent(gen_event_id, "created", repo, issue, comment)
	end

	# Pull requests

	# Generate a new PullRequestEvent from a `pull` request.
	fun pull_event(repo: Repo, action: String, pull: PullRequest): PullRequestEvent do
		return new PullRequestEvent(gen_event_id, action, repo, pull.number, pull)
	end

	# Generate a new PullRequestEvent with an `opened` action.
	fun pull_open(repo: Repo, pull: PullRequest): PullRequestEvent do
		return pull_event(repo, "opened", pull)
	end

	# Generate a new PullRequestEvent with an `closed` action.
	fun pull_close(repo: Repo, pull: PullRequest): PullRequestEvent do
		return pull_event(repo, "closed", pull)
	end

	# Generate a new PullRequestEvent with an `reopened` action.
	fun pull_reopen(repo: Repo, pull: PullRequest): PullRequestEvent do
		return pull_event(repo, "reopened", pull)
	end

	# Generate a new PullRequestEvent from a IssueEvent.
	fun pull_raw_event(repo: Repo, pull: PullRequest, event: IssueEvent): PullRequestEvent do
		return new PullRequestEvent(event.id.to_s, event.event, repo, pull.number, pull)
	end
end
