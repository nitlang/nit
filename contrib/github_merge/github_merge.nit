# This file is part of NIT ( https://nitlanguage.org ).
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

# Query the Github PR API to perform a merge
module github_merge

import github::api
import template
import config

redef class GithubAPI

	# Get a given pull request and its state
	private fun get_pull_with_state(repo: String, number: Int): nullable PullState do
		var pull = get_pull(repo, number)
		if not pull isa PullRequest then return null

		var statuses = get_commit_status(repo, pull.head.sha)
		if not statuses isa CommitStatus then return null

		return new PullState(pull, statuses)
	end

	# Get reviewers of a PR
	private fun get_pull_reviewers(repo: String, pull: PullRequest): Array[String] do
		var user = pull.user.as(not null).login

		var comments = new Array[Comment]
		comments.add_all(get_issue_comments(repo, pull.number))
		comments.add_all(get_pull_comments(repo, pull.number))

		var logins = new Array[String]
		for comment in comments do
			var login = comment.user.login
			if login != user and not logins.has(login) then logins.add(login)
		end
		var res = new Array[String]
		for login in logins do
			var rev = get_user(login)
			if rev == null or rev.name == null or rev.email == null then
				print "No public name/email for user {login}"
				continue
			end
			res.add "{rev.name or else "N/A"} <{rev.email or else "N/A"}>"
		end
		return res
	end
end

private class PullState
	var pull: PullRequest
	var status: CommitStatus

	fun pretty: String do
		var s = new Buffer
		s.append "{pull.title}: by {pull.user.as(not null).login} (# {pull.number})\n"
		s.append "\tmergeable: {pull.mergeable or else "unknown"}\n"
		s.append "\tstatus: {status.state or else "not tested"}\n"
		for sub in status.statuses do
			s.append "\tstatus {sub.context or else "N/A"}: {sub.state or else "N/A"}\n"
		end
		return s.write_to_string
	end

	fun state_for(context: String): nullable String do
		for sub in status.statuses do
			if sub.context == context then return sub.state
		end
		return null
	end
end

if "NIT_TESTING".environ == "true" then exit 0

var opt_repo = new OptionString("Repository (e.g. nitlang/nit)", "-r", "--repo")
var opt_auth = new OptionString("OAuth token", "--auth")
var opt_query = new OptionString("Query to get issues (e.g. label:ok_will_merge)", "-q", "--query")
var opt_keepgoing = new OptionBool("Skip merge conflicts", "-k", "--keep-going")
var opt_all = new OptionBool("Merge all", "-a", "--all")
var opt_status = new OptionArray("A status context that must be \"success\" (e.g. default)", "--status")

var usage = new Buffer
usage.append "Usage: github_merge [OPTION]... <PR number...>\n"
usage.append "Query the Github PR API to perform a merge."

var config = new Config
config.tool_description = usage.write_to_string
config.add_option(opt_repo, opt_auth, opt_query, opt_status, opt_all, opt_keepgoing)

config.parse_options(sys.args)

if config.opt_help.value then
	config.usage
	exit 0
end

var args = config.args

var auth = opt_auth.value or else ""
if auth == "" then auth = get_github_oauth
if auth == "" then
	print "Warning: no github oauth token, you can configure one with"
	print "    git config --add github.oauthtoken MYOAUTHTOKEN"
end

var repo = opt_repo.value or else "nitlang/nit"

var query = opt_query.value or else "labels=ok_will_merge"

var api = new GithubAPI(auth, "Merge-o-matic (nitlang/nit)")

if args.is_empty then
	# Without args, list `ok_will_merge`
	var issues = api.search_repo_issues(repo, query)
	if issues == null or issues.items.is_empty then
		print "No issues for query `{query}`."
		exit 1
	end
	var list = new Array[String]
	for issue in issues.as(not null).items do
		if not issue isa Issue then continue
		if not issue.is_pull_request then continue

		var state = api.get_pull_with_state(repo, issue.number)
		if not state isa PullState then continue

		print state.pretty
		for ctx in opt_status.value do
			if state.state_for(ctx) != "success" then
				print "No \"success\" for {ctx}. Skip."
				# continue label
			end
		end

		list.add issue.number.to_s
	end label

	if not opt_all.value then return
	args = list
end

for arg in args do
	# With a arg, merge the PR
	var number = arg.to_i
	var pull = api.get_pull(repo, number)
	if pull == null then
		print "Not a PR: {number}"
		return
	end

	var revs = api.get_pull_reviewers(repo, pull)

	var mergemsg = new Template
	mergemsg.add "Merge: {pull.title}\n\n"
	mergemsg.add "{pull.body or else "N/A"}\n\n"
	mergemsg.add "Pull-Request: #{pull.number}\n"
	for rev in revs do
		mergemsg.add "Reviewed-by: {rev}\n"
	end
	mergemsg.write_to_file("mergemsg")

	var sha = pull.head.sha
	if system("git show -s --pretty=format:%h {sha}") != 0 then
		print "Commit {sha} not in local repository; did you fetch github?"
		return
	end
	if system("git merge-base --is-ancestor {sha} HEAD") == 0 then
		print "Is already merged."
		continue
	end
	if system("git merge --no-ff --no-commit {sha}") != 0 then
		if opt_keepgoing.value then
			 system("git reset --merge")
			 continue
		end
		system("cp mergemsg `git rev-parse --git-dir`/MERGE_MSG")
		print "Problem during merge... Let's do the commit manually."
		return
	end
	system("git commit -F mergemsg")
	print "The merge is made"
	mergemsg.write_to(stdout)
end
