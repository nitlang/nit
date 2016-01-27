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
module listener

import reactors
import achievements
import github::hooks
import opts

# `HookListener` that redirects events to a `Game` instance.
class RpgHookListener
   super HookListener

   # MongoDB used to access data.
   var db: MongoDb

	# Dispatch event to registered `reactors`.
	redef fun apply_event(event) do
		var game = new Game(db, api, event.repo)
		# TODO handle verbosity with opts
		game.verbose_lvl = 1
		game.apply_github_event event
	end
end

# Display the help message for this tool.
fun show_help(opts: OptionContext) do
	print "Usage:"
	print "listener <host> <port>\n"
	opts.usage
	exit 1
end

var opt_help = new OptionBool("Show this help message", "-h", "--help")
var opt_api_key = new OptionString("Github API key to use", "-k", "--key")
var opt_db_name = new OptionString("MongoDB db name to use", "--db")
var opt_db_url = new OptionString("MongoDB db URL to use", "--db-url")

var opts = new OptionContext
opts.add_option(opt_help, opt_api_key, opt_db_name, opt_db_url)
opts.parse(args)
var argv = opts.rest

if opt_help.value then show_help(opts)

if argv.length != 2 then
	print "Error: missing argument\n"
	show_help(opts)
end

var host = args[0]
var port = args[1].to_i

# Load DB
var db_name = opt_db_name.value or else "nitrpg"
var mongo_url = opt_db_url.value or else "mongodb://localhost:27017"
var client = new MongoClient(mongo_url)
var db = client.database(db_name)

# Load API
var api_key = opt_api_key.value or else get_github_oauth
var api = new GithubAPI(api_key)

var listener = new RpgHookListener(api, host, port, db)
print "Listening events on {host}:{port}"
listener.listen
