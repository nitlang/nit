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

	# Generate a new IssuesEvent with an `opened` action.
	fun issue_open(issue: Issue): IssuesEvent do
		var e = new IssuesEvent(api)
		e.action = "opened"
		e.repo = issue.repo
		e.issue = issue
		e.sender = issue.user
		return e
	end

	# Generate a new IssuesEvent from a IssueEvent.
	fun issue_raw_event(issue: Issue, event: IssueEvent): IssuesEvent do
		var e = new IssuesEvent(api)
		e.action = event.event
		e.repo = issue.repo
		e.issue = issue
		e.lbl = event.labl
		e.assignee = event.assignee
		e.sender = event.actor
		return e
	end

	# Pull requests

	# Generate a new IssueCommentEvent from a IssueComment.
	fun issue_comment_event(issue: Issue, comment: IssueComment): IssueCommentEvent do
		var e = new IssueCommentEvent(api)
		e.action = "created"
		e.repo = issue.repo
		e.issue = issue
		e.comment = comment
		e.sender = comment.user
		return e
	end
end
