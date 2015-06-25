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

	# Issues

	# Generate a new IssuesEvent from an issue.
	fun issues_event(action: String, issue: Issue): IssuesEvent do
		var e = new IssuesEvent(api)
		e.action = action
		e.repo = issue.repo
		e.issue = issue
		return e
	end

	# Generate a new IssuesEvent with an `opened` action.
	fun issue_open(issue: Issue): IssuesEvent do return issues_event("opened", issue)

	# Generate a new IssuesEvent with an `closed` action.
	fun issue_close(issue: Issue): IssuesEvent do return issues_event("closed", issue)

	# Generate a new IssuesEvent with an `reopened` action.
	fun issue_reopen(issue: Issue): IssuesEvent do return issues_event("reopened", issue)

	# Generate a new IssuesEvent from a IssueEvent.
	fun issue_raw_event(issue: Issue, event: IssueEvent): IssuesEvent do
		var e = issues_event(event.event, issue)
		e.lbl = event.labl
		e.assignee = event.assignee
		return e
	end

	# Pull requests

	# Generate a new PullRequestEvent from a `pull` request.
	fun pull_event(action: String, pull: PullRequest): PullRequestEvent do
		var e = new PullRequestEvent(api)
		e.action = action
		e.repo = pull.repo
		e.pull = pull
		return e
	end

	# Generate a new PullRequestEvent with an `opened` action.
	fun pull_open(pull: PullRequest): PullRequestEvent do return pull_event("opened", pull)

	# Generate a new PullRequestEvent with an `closed` action.
	fun pull_close(pull: PullRequest): PullRequestEvent do return pull_event("closed", pull)

	# Generate a new PullRequestEvent with an `reopened` action.
	fun pull_reopen(pull: PullRequest): PullRequestEvent do return pull_event("reopened", pull)

	# Generate a new PullRequestEvent from a IssueEvent.
	fun pull_raw_event(pull: PullRequest, event: IssueEvent): PullRequestEvent do
		return pull_event(event.event, pull)
	end

	# Generate a new IssueCommentEvent from a IssueComment.
	fun issue_comment_event(issue: Issue, comment: IssueComment): IssueCommentEvent do
		var e = new IssueCommentEvent(api)
		e.action = "created"
		e.repo = issue.repo
		e.issue = issue
		e.comment = comment
		return e
	end
end
