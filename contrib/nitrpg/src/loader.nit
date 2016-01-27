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

# This tool is runned to listen to `Github::Event` and update the game.
module loader

import reactors
import achievements
import events_generator
import github::cache
import opts

# Load a game from history.
#
# Explore the current state of a repo and recreate game events as they should have played
# when no listener was here to save them.
#
# The history created is in facts a simplified version of the reality bacause some
# informations like comment update cannot be retrieved via the API.
class GameLoader

	# GitHub API instance used to perform resquests.
	var api: GithubAPI

	# Game to load (based on repo_name).
	var game: Game

	# Display the current status in console.
	fun show_status do
		var status = game.loader_status
		if status == null then
			print "No work pending."
			print "\nrun loader <repo_name> to start a new download."
			return
		end
		print "Last status:\n"
		print " * issue {status.last_issue}"
	end

	# Clear game loader status.
	fun clear_status do game.clear_loader_status

	# Should we avoid loading pull requests?
	#
	# Default is `false`.
	var no_pulls = false

	# Should we avoid loading issue comments?
	#
	# Default is `false`.
	var no_comments = false

	# Should we avoid loading events?
	#
	# Default is `false`.
	var no_events = false

	# Generator used to translate json returned by API in event triggered by hook.
	var generator = new EventsGenerator(api) is lateinit

	# At which issue number should we start?
	#
	# Set 0 for start from last saved status.
	var start_from_issue = 0

	# Load game for `repo_name`.
	fun load_issues do
		# load repo
		game.message(0, "Load history for game {game.name}")
		var repo = game.repo

		var status = game.loader_status
		if start_from_issue > 0 then
			status = new LoaderStatus(game, start_from_issue)
		else if status == null then
			status = new LoaderStatus(game, 1)
		end

		var i = status.last_issue
		var last_issue = load_last_issue(repo)
		while i <= last_issue.number do
			status.last_issue = i
			status.save

			load_issue(repo, i)
			i += 1
		end
	end

	# Load an issue or abort.
	private fun load_issue(repo: Repo, issue_number: Int) do
		var issue = api.load_issue(repo, issue_number)
		assert issue != null else
			check_error
			game.message(0, "Error: issue #{issue_number} not found")
		end
		game.message(1, "Load issue #{issue.number}: {issue.title}")
		game.apply_github_event generator.issue_open(issue)
		load_issue_pull(issue)
		load_issue_events(issue)
		load_issue_comments(issue)
	end

	# Load the issue related pull request (if any)
	private fun load_issue_pull(issue: Issue) do
		if no_pulls then return
		if issue.is_pull_request then
			var number = issue.number
			var pr = load_pull(issue.repo, number)
			game.message(2, "Load pull request #{number}: {pr.title}")
		end
	end

	# Load issue comments.
	private fun load_issue_comments(issue: Issue) do
		if no_comments then return
		for comment in issue.comments do
			game.apply_github_event generator.issue_comment_event(issue, comment)
		end
	end

	# Load issue events.
	private fun load_issue_events(issue: Issue) do
		if no_events then return
		for event in issue.events do
			game.apply_github_event generator.issue_raw_event(issue, event)
		end
	end

	# Load the `repo` last issue or abort.
	private fun load_last_issue(repo: Repo): Issue do
		var last_issue = repo.last_issue
		assert last_issue != null else
			check_error
			game.message(0, "Error: last issue for repo {repo.name} not found")
		end
		return last_issue
	end

	# Load a pull request or abort.
	private fun load_pull(repo: Repo, pr_number: Int): PullRequest do
		var pr = api.load_pull(repo, pr_number)
		assert pr != null else
			check_error
			game.message(0, "Error: pull request #{pr_number} not found")
		end
		return pr
	end

	# Check if the API is in error state then abort
	fun check_error do
		var err = api.last_error
		if err != null then
			game.message(0, err.message)
			exit 1
		end
	end
end

redef class Game

	# Load loader status object.
	private fun loader_status: nullable LoaderStatus do
		var req = new JsonObject
		req["game"] = game.key
		var res = db.collection("loader").find(req)
		if res != null then return new LoaderStatus.from_json(self, res)
		return null
	end

	# Clear current loader status.
	fun clear_loader_status do
		var req	= loader_status
		if req == null then return
		db.collection("loader").remove(req.to_json)
	end
end

# Last action performed by the loader.
#
# As a GameEntity, it can be saved the in the Game DB
class LoaderStatus
	super GameEntity

	redef var game

	redef var collection_name = "loader"

	redef var key = game.key is lazy

	# Last loaded issue.
	var last_issue: Int is writable

	# Init `self` from a `json` object.
	#
	# Used to load players from saved data.
	init from_json(game: Game, json: JsonObject) do
		last_issue = json["last_issue"].as(Int)
		init(game, last_issue)
	end

	redef fun to_json do
		var json = super
		json["game"] = game.key
		json["last_issue"] = last_issue
		return json
	end
end

# Display the help message for this tool.
fun show_help(opts: OptionContext) do
	print "Usage:"
	print "loader <repo_name>\n"
	opts.usage
	exit 1
end

var opt_help = new OptionBool("Show this help message", "-h", "--help")
var opt_verbose = new OptionCount("Verbosity level", "-v", "--verbose")
var opt_api_key = new OptionString("Github API key to use", "-k", "--key")
var opt_status = new OptionBool("Show saved work status", "-s", "--status")
var opt_clear_status = new OptionBool("Clear saved work status", "--clear-status")
var opt_no_pulls = new OptionBool("Do not load pull requests", "--no-pulls")
var opt_no_comments = new OptionBool("Do not load issue comments", "--no-comments")
var opt_no_events = new OptionBool("Do not load issues and pull requests events", "--no-events")
var opt_start = new OptionInt("Start loading issues from a number", 0, "--from")
var opt_db_name = new OptionString("MongoDB db name to use", "--db")
var opt_db_url = new OptionString("MongoDB db URL to use", "--db-url")

var opts = new OptionContext
opts.add_option(opt_help, opt_verbose, opt_api_key, opt_status, opt_clear_status)
opts.add_option(opt_no_pulls, opt_no_comments, opt_no_events, opt_start)
opts.add_option(opt_db_name, opt_db_url)
opts.parse(args)
var argv = opts.rest

if opt_help.value then show_help(opts)

if argv.length != 1 then
	print "Error: missing argument\n"
	show_help(opts)
end

# Load DB
var db_name = opt_db_name.value or else "nitrpg"
var mongo_url = opt_db_url.value or else "mongodb://localhost:27017"
var client = new MongoClient(mongo_url)
var db = client.database(db_name)

# Load API
var api_key = opt_api_key.value or else get_github_oauth
var api = new GithubAPI(api_key)
api.enable_cache = true

# Load game
var repo_name = argv.first
var repo = api.load_repo(repo_name)
assert repo != null else
	print "Error: repo {repo_name} not found"
	exit 1
end
var game = new Game(db, api, repo)

var loader = new GameLoader(api, game)
game.verbose_lvl = opt_verbose.value + 1
loader.no_pulls = opt_no_pulls.value
loader.no_comments = opt_no_comments.value
loader.no_events = opt_no_events.value
loader.start_from_issue = opt_start.value

if opt_clear_status.value then
	loader.clear_status
	exit 0
end

if opt_status.value then
	loader.show_status
	exit 0
end

loader.load_issues

# TODO load prs
	# load merged commits
	# load comments
	# load review comments
