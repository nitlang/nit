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
	fun load_repo(full_name: String): nullable Repo do
		var repo = new Repo(self, full_name)
		repo.load_from_github
		if was_error then return null
		return repo
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
end
