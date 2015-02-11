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

# Curl extention to access the Github API
# See https://developer.github.com/v3/ for details
module github_curl

import curl
import json::static

# Specific Curl that know hot to talk to the github API
class GithubCurl
	super Curl

	# Headers to use on all requests
	var header: HeaderMap is noinit

	# OAuth token
	var auth: String

	# User agent (is used by github to contact devs in case of problems)
	# Eg. "Awesome-Octocat-App"
	var user_agent: String

	init do
		header = new HeaderMap
		header["Authorization"] = "token {auth}"
	end

	# Get the requested URI, and check the HTTP response. Then convert to JSON
	# and check for Github errors.
	fun get_and_check(uri: String): nullable Jsonable
	do
		var request = new CurlHTTPRequest(uri, self)
		request.user_agent = user_agent
		request.headers = header
		var response = request.execute

		if response isa CurlResponseSuccess then
			var obj = response.body_str.parse_json
			if obj isa JsonObject then
				if obj.keys.has("message") then
					print "Message from Github API: {obj["message"] or else ""}"
					print "Requested URI: {uri}"
					abort
				end
			end
			return obj

		else if response isa CurlResponseFailed then
			print "Request to Github API failed"
			print "Requested URI: {uri}"
			print "Error code: {response.error_code}"
			print "Error msg: {response.error_msg}"
			abort
		else abort
	end

	# Get the requested URI, and check the HTTP response.
	# Then convert to JSON and check for Github errors.
	# Unlike `get_and_check`, error do not trigger an abort but
	# are reported as `GithubError`.
	fun get_and_parse(uri: String): nullable Jsonable
	do
		var request = new CurlHTTPRequest(uri, self)
		request.user_agent = user_agent
		request.headers = header
		var response = request.execute
		if response isa CurlResponseSuccess then
			var obj = response.body_str.parse_json
			if obj isa JsonObject then
				if obj.keys.has("message") then
					var title = "GithubAPIError"
					var msg = obj["message"].to_s or else ""
					var err = new GithubError(msg, title)
					err.json["requested_uri"] = uri
					err.json["status_code"] = response.status_code
					return err
				end
			end
			return obj

		else if response isa CurlResponseFailed then
			var title = "CurlResponseFailed"
			var msg = "Request to Github API failed"
			var err = new GithubError(msg, title)
			err.json["requested_uri"] = uri
			err.json["error_code"] = response.error_code
			err.json["response"] = response.error_msg
			return err
		else abort
	end

end

# An error thrown by the Github API.
#
# Depending on the kind of error, additionnal informations can be stored in
# the error object.
# Check the `json` value to find them.
class GithubError
	super Error
	super Jsonable

	# The name of the error.
	var name: String

	# The json content of the error.
	var json = new JsonObject

	redef init do
		super
		json["error"] = name.to_json
		json["message"] = message.to_json
	end

	redef fun to_json do
		return json.to_json
	end

	redef fun to_s do return "[{name}] {super}"
end

# Return the value of `git config --get github.oauthtoken`
# return "" if no such a key
fun get_github_oauth: String
do
	var p = new ProcessReader("git", "config", "--get", "github.oauthtoken")
	var token = p.read_line
	p.wait
	p.close
	return token.trim
end
