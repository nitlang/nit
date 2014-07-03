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
module github_api

import curl
import json::static

# Specific Curl that know hot to talk to the github API
class GithubCurl
	super Curl

	# Headers to use on all requests
	var header: HeaderMap

	# OAuth token
	var auth: String

	# User agent (is used by github to contact devs in case of problems)
	# Eg. "Awesome-Octocat-App"
	var user_agent: String

	init(auth: String, user_agent: String)
	do
		super
		self.auth = auth
		self.user_agent = user_agent

		header = new HeaderMap
		header["Authorization"] = "token {auth}"
	end

	# Get the requested URI, and check the HTTP response. Then convert to JSON
	# and check for Github errors.
	fun get_and_check(uri: String): nullable Object
	do
		var request = new CurlHTTPRequest(uri, self)
		request.user_agent = user_agent
		request.headers = header
		var response = request.execute

		if response isa CurlResponseSuccess then
			var obj = response.body_str.json_to_nit_object
			if obj isa HashMap[String, nullable Object] then
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
end

# Return the value of `git config --get github.oauthtoken`
# return "" if no such a key
fun get_github_oauth: String
do
	var p = new IProcess("git", "config", "--get", "github.oauthtoken")
	var token = p.read_line
	p.wait
	p.close
	return token.trim
end

