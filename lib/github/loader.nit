# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

module loader

import config
import github::wallet
import github::events
import popcorn::pop_repos
import popcorn::pop_logging

# Loader configuration file
class LoaderConfig
	super IniConfig

	redef var default_config_file = "loader.ini"

	# Default database host string for MongoDb
	var default_db_host = "mongodb://mongo:27017/"

	# Default database hostname
	var default_db_name = "github_loader"

	# MongoDb host name
	var opt_db_host = new OptionString("MongoDb host", "--db-host")

	# MongoDb database name
	var opt_db_name = new OptionString("MongoDb database name", "--db-name")

	# --verbose
	var opt_verbose = new OptionCount("Verbosity level", "-v", "--verbose")

	# --no-colors
	var opt_no_colors = new OptionBool("Do not use colors in output", "--no-colors")

	# --tokens
	var opt_tokens = new OptionArray("Token list", "--tokens")

	# --show-wallet
	var opt_show_wallet = new OptionBool("Show wallet status", "--show-wallet")

	# --show-jobs
	var opt_show_jobs = new OptionBool("Show jobs status", "--show-jobs")

	# --no-branches
	var opt_no_branches = new OptionBool("Do not load branches", "--no-branches")

	# --no-commits
	var opt_no_commits = new OptionBool("Do not load commits from default branch", "--no-commits")

	# --no-issues
	var opt_no_issues = new OptionBool("Do not load issues", "--no-issues")

	# --no-comments
	var opt_no_comments = new OptionBool("Do not load issue comments", "--no-comments")

	# --no-events
	var opt_no_events = new OptionBool("Do not load issues events", "--no-events")

	# --from
	var opt_start = new OptionInt("Start loading issues from a number", 0, "--from")

	# --clear
	var opt_clear = new OptionBool("Clear job for given repo name", "--clear")

	init do
		super
		tool_description = "Usage: loader <repo_name>\nLoad a GitHub repo into a MongoDb."
		add_option(opt_db_host, opt_db_name)
		add_option(opt_tokens, opt_show_wallet)
		add_option(opt_verbose, opt_no_colors)
		add_option(opt_show_jobs, opt_no_commits, opt_no_issues, opt_no_comments, opt_no_events)
		add_option(opt_start, opt_clear)
	end

	# MongoDB server used for data persistence
	fun db_host: String do
		return opt_db_host.value or else ini["db.host"] or else default_db_host
	end

	# MongoDB DB used for data persistence
	fun db_name: String do
		return opt_db_name.value or else ini["db.name"] or else default_db_name
	end

	# Mongo db client
	var client = new MongoClient(db_host) is lazy

	# Mongo db instance
	var db: MongoDb = client.database(db_name) is lazy

	# Github tokens used to access data.
	var tokens: Array[String] is lazy do
		var opt_tokens = self.opt_tokens.value
		if opt_tokens.not_empty then return opt_tokens

		var res = new Array[String]
		var ini_tokens = ini.section("tokens")
		if ini_tokens == null then return res

		for token in ini_tokens.values do
			if token == null then continue
			res.add token
		end
		return res
	end

	# Github tokens wallet
	var wallet: GithubWallet is lazy do
		var wallet = new GithubWallet.from_tokens(tokens)
		wallet.no_colors = no_colors
		return wallet
	end

	# Use colors in console display
	fun no_colors: Bool do
		if opt_no_colors.value then return true
		return ini["loader.no_colors"] == "true"
	end

	# Verbosity level (the higher the more verbose)
	fun verbose_level: Int do
		var opt = opt_start.value
		if opt > 0 then return opt
		var v = ini["loader.verbose"]
		if v != null then return v.to_i
		return 4
	end

	# Logger used to print things
	var logger: ConsoleLog is lazy do
		var logger = new ConsoleLog
		logger.level = verbose_level
		return logger
	end

	# Should we avoid loading branches?
	fun no_branches: Bool do
		if opt_no_branches.value then return true
		return ini["loader.no_branches"] == "true"
	end

	# Should we avoid loading commits?
	fun no_commits: Bool do
		if opt_no_commits.value then return true
		return ini["loader.no_commits"] == "true"
	end

	# Should we avoid loading issues?
	fun no_issues: Bool do
		if opt_no_issues.value then return true
		return ini["loader.no_issues"] == "true"
	end

	# Should we avoid loading issue comments?
	fun no_comments: Bool do
		if opt_no_comments.value then return true
		return ini["loader.no_comments"] == "true"
	end

	# Should we avoid loading events?
	fun no_events: Bool do
		if opt_no_events.value then return true
		return ini["loader.no_events"] == "true"
	end

	# At which issue number should we start?
	fun start_from_issue: Int do
		var opt = opt_start.value
		if opt > 0 then return opt
		var v = ini["loader.start"]
		if v != null then return v.to_i
		return 1
	end
end

redef class GithubWallet
	redef fun api do
		var api = super
		api.enable_cache = true
		return api
	end
end

class Loader

	var config = new LoaderConfig

	# Jobs repository
	var jobs: LoaderJobRepo is lazy do
		return new LoaderJobRepo(config.db.collection("loader_status"))
	end

	var repos: RepoRepo is lazy do
		return new RepoRepo(config.db.collection("repos"))
	end

	var branches: BranchRepo is lazy do
		return new BranchRepo(config.db.collection("branches"))
	end

	var commits: CommitRepo is lazy do
		return new CommitRepo(config.db.collection("commits"))
	end

	var issues: IssueRepo is lazy do
		return new IssueRepo(config.db.collection("issues"))
	end

	var pulls: PullRequestRepo is lazy do
		return new PullRequestRepo(config.db.collection("pull_requests"))
	end

	var issue_comments: IssueCommentRepo is lazy do
		return new IssueCommentRepo(config.db.collection("issue_comments"))
	end

	var issue_events: IssueEventRepo is lazy do
		return new IssueEventRepo(config.db.collection("issue_events"))
	end

	fun start(repo_full_name: String) do
		var job = jobs.find_by_id(repo_full_name)
		if job == null then
			log.info "Creating new job for `{repo_full_name}`"
			job = add_job(repo_full_name)
		else
			log.info "Resuming pending job for `{repo_full_name}`"
		end
		print "Load history for {job}..."
		load_branches(job)
		load_issues(job)
		finish_job(job)
	end

	fun remove(repo_full_name: String) do
		var job = jobs.find_by_id(repo_full_name)
		if job == null then
			log.info "No job found for `{repo_full_name}`"
		else
			jobs.remove_by_id(repo_full_name)
			log.info "Deleted job for `{repo_full_name}`"
		end
	end

	# Show wallet status
	fun show_wallet do config.wallet.show_status

	# Show jobs status
	fun show_jobs do
		var jobs = jobs.find_all
		print "{jobs.length} jobs pending..."
		for job in jobs do
			print " * {job}"
		end
		print "\nUse `loader <job> to start a new or resume a pending one"
	end

	# Add a new job
	fun add_job(repo_full_name: String): LoaderJob do
		var repo = config.wallet.api.load_repo(repo_full_name)
		assert repo != null else
			error "Repository `{repo_full_name}` not found"
		end
		repos.save repo
		var job = new LoaderJob(repo, config.start_from_issue)
		jobs.save job
		return job
	end

	# Finish a job
	fun finish_job(job: LoaderJob) do
		print "Finished job {job}"
		jobs.remove_by_id(job.id)
	end

	fun load_branches(job: LoaderJob) do
		if config.no_branches then return

		var api = config.wallet.api
		var repo = job.repo
		for branch in api.load_repo_branches(repo) do
			branch.repo = repo
			branches.save branch
			load_commits(job, branch)
		end
	end

	fun load_commits(job: LoaderJob, branch: Branch) do
		if config.no_commits then return
		load_commit(job, branch.commit.sha)
	end

	fun load_commit(job: LoaderJob, commit_sha: String) do
		if commits.find_by_id(commit_sha) != null then return
		var api = config.wallet.api
		var commit = api.load_commit(job.repo, commit_sha)
		# print commit or else "NULL"
		if commit == null then return
		var message = commit.message or else "no message"
		log.info "Load commit {commit_sha}: {message.split("\n").first}"
		commit.repo = job.repo
		commits.save commit
		var parents = commit.parents
		if parents == null then return
		for parent in parents do
			load_commit(job, parent.sha)
		end
	end

	# Load game for `repo_name`.
	fun load_issues(job: LoaderJob) do
		if config.no_issues then return

		var i = job.last_issue
		var last_issue = load_last_issue(job)
		if last_issue != null then
			while i <= last_issue.number do
				load_issue(job, i)
				job.last_issue = i
				jobs.save job
				i += 1
			end
		end
	end

	# Load the `repo` last issue or abort.
	private fun load_last_issue(job: LoaderJob): nullable Issue do
		var api = config.wallet.api
		return api.load_repo_last_issue(job.repo)
	end

	# Load an issue or abort.
	private fun load_issue(job: LoaderJob, issue_number: Int) do
		if issues.find_by_id("{job.repo.mongo_id}/{issue_number}") != null then return

		var api = config.wallet.api
		var issue = api.load_issue(job.repo, issue_number)
		assert issue != null else
			check_error(api, "Issue #{issue_number} not found")
		end
		if issue.is_pull_request then
			load_pull(job, issue)
		else
			log.info "Load issue #{issue.number}: {issue.title.split("\n").first}"
			issue.repo = job.repo
			issues.save issue
			load_issue_events(job, issue)
		end
		load_issue_comments(job, issue)
	end

	# Load issue comments.
	private fun load_issue_comments(job: LoaderJob, issue: Issue) do
		if config.no_comments then return
		var api = config.wallet.api
		for comment in api.load_issue_comments(job.repo, issue) do
			comment.repo = job.repo
			issue_comments.save comment
		end
	end

	# Load issue events.
	private fun load_issue_events(job: LoaderJob, issue: Issue) do
		if config.no_events then return

		var api = config.wallet.api
		for event in api.load_issue_events(job.repo, issue) do
			event.repo = job.repo
			issue_events.save event
		end
	end

	# Load a pull request or abort.
	private fun load_pull(job: LoaderJob, issue: Issue): PullRequest do
		var api = config.wallet.api
		var pr = api.load_pull(job.repo, issue.number)
		assert pr != null else
			check_error(api, "Pull request #{issue.number} not found")
		end
		log.info "Load pull request #{issue.number}: {pr.title.split("\n").first}"
		pr.repo = job.repo
		pulls.save pr
		load_pull_events(job, pr)
		return pr
	end

	# Load pull events.
	private fun load_pull_events(job: LoaderJob, pull: PullRequest) do
		if config.no_events then return

		var api = config.wallet.api
		for event in api.load_issue_events(job.repo, pull) do
			event.repo = job.repo
			issue_events.save event
		end
	end

	# Check if the API is in error state then abort
	fun check_error(api: GithubAPI, message: nullable String) do
		var err = api.last_error
		if err != null then
			error message or else err.message
		end
	end

	# Logger shortcut
	fun log: ConsoleLog do return config.logger

	# Display a error and exit
	fun error(msg: String) do
		log.error "Error: {msg}"
		exit 1
	end
end

# Loader status by repo
class LoaderJob
	super RepoObject
	serialize

	# Repo this status is about
	var repo: Repo

	# Primary key: the repo id
	redef var id is lazy, serialize_as("_id") do return repo.full_name

	# Last issue loaded
	var last_issue: Int
end

# Loader status repository
class LoaderJobRepo
	super MongoRepository[LoaderJob]
end

class RepoEntity
	serialize

	var repo: nullable Repo = null is writable
end

redef class Repo
	serialize

	var mongo_id: String is lazy, serialize_as("_id") do return full_name
end

class RepoRepo
	super MongoRepository[Repo]
end

redef class Branch
	super RepoEntity
	serialize

	var mongo_id: String is lazy, serialize_as("_id") do
		var repo = self.repo
		if repo == null then return name
		return "{repo.mongo_id}/{name}"
	end
end

class BranchRepo
	super MongoRepository[Branch]

	fun find_by_repo(repo: Repo): Array[Branch] do
		return find_all((new MongoMatch).eq("repo.full_name", repo.full_name))
	end
end

redef class Commit
	super RepoEntity
	serialize

	var mongo_id: String is lazy, serialize_as("_id") do return sha
end

class CommitRepo
	super MongoRepository[Commit]

	fun find_by_repo(repo: Repo): Array[Commit] do
		return find_all((new MongoMatch).eq("repo.full_name", repo.full_name))
	end
end

redef class Issue
	super RepoEntity
	serialize

	var mongo_id: String is lazy, serialize_as("_id") do
		var repo = self.repo
		if repo == null then return number.to_s
		return "{repo.mongo_id}/{number}"
	end
end

class IssueRepo
	super MongoRepository[Issue]

	fun find_by_repo(repo: Repo): Array[Issue] do
		return find_all((new MongoMatch).eq("repo.full_name", repo.full_name))
	end
end

class PullRequestRepo
	super MongoRepository[PullRequest]

	fun find_by_repo(repo: Repo): Array[Issue] do
		return find_all((new MongoMatch).eq("repo.full_name", repo.full_name))
	end
end

redef class IssueComment
	super RepoEntity
	serialize

	var mongo_id: String is lazy, serialize_as("_id") do return id.to_s
end

class IssueCommentRepo
	super MongoRepository[IssueComment]

	fun find_by_repo(repo: Repo): Array[IssueComment] do
		return find_all((new MongoMatch).eq("repo.full_name", repo.full_name))
	end
end

redef class IssueEvent
	super RepoEntity
	serialize

	var mongo_id: String is lazy, serialize_as("_id") do return id.to_s
end

class IssueEventRepo
	super MongoRepository[IssueEvent]

	fun find_by_repo(repo: Repo): Array[IssueEvent] do
		return find_all((new MongoMatch).eq("repo.full_name", repo.full_name))
	end
end

# Init options
var loader = new Loader
loader.config.parse_options(args)

# TODO TMP
loader.jobs.clear
loader.repos.clear
loader.branches.clear
loader.commits.clear
loader.issues.clear
loader.pulls.clear
loader.issue_comments.clear
loader.issue_events.clear

if loader.config.help then
	loader.config.usage
	exit 0
end

if loader.config.opt_show_wallet.value then
	loader.show_wallet
end

var args = loader.config.args
if loader.config.opt_show_jobs.value or args.is_empty then
	loader.show_jobs
end

if args.is_empty then return

if loader.config.opt_clear.value then
	loader.remove args.first
else
	loader.start args.first

	var repo = loader.config.wallet.api.load_repo(args.first)
	if repo == null then return
	print "Loaded"
	print "* {if loader.repos.find_by_id(args.first) != null then 1 else 0} repos"
	print "* {loader.branches.find_by_repo(repo).length} branches"
	print "* {loader.commits.find_by_repo(repo).length} commits"
	print "* {loader.issues.find_by_repo(repo).length} issues"
	print "* {loader.pulls.find_by_repo(repo).length} pulls"
	print "* {loader.issue_comments.find_by_repo(repo).length} comments"
	print "* {loader.issue_events.find_by_repo(repo).length} events"
end
