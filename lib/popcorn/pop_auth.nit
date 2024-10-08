# This file is part of NIT ( https://nitlanguage.org ).
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

# Authentification handlers.
#
# For now, only Github OAuth is provided.
#
# See https://developer.github.com/v3/oauth/.
#
# This module provide 4 base classes that can be used together to implement a
# Github OAuth handshake.
#
# Here an example of application using the Github Auth as login mechanism.
#
# There is 4 available routes:
# * `/login`: redirects the user to the Github OAuth login page (see `GithubLogin`)
# * `/profile`: shows the currently logged in user (see `Profile Handler`)
# * `/logout`: logs out the user by destroying the entry from the session (see `GithubLogout`)
# * `/oauth`: callback url for Github service after player login (see `GithubOAuthCallBack`)
#
# Routes redirection are handled at the OAuth service registration. Please see
# https://developer.github.com/v3/oauth/#redirect-urls for more niformation on how
# to configure your service to provide smouth redirections beween your routes.
#
# ~~~
# import popcorn
# import popcorn::pop_auth
#
# class ProfileHandler
#	super Handler
#
#	redef fun get(req, res) do
#		var session = req.session
#		if session == null then
#			res.send "No session :("
#			return
#		end
#		var user = session.user
#		if user == null then
#			res.send "Not logged in"
#			return
#		end
#		res.send "<h1>Hello {user.login}</h1>"
#	end
# end
#
# var client_id = "github client id"
# var client_secret = "github client secret"
#
# var app = new App
# app.use("/*", new SessionInit)
# app.use("/login", new GithubLogin(client_id))
# app.use("/oauth", new GithubOAuthCallBack(client_id, client_secret))
# app.use("/logout", new GithubLogout)
# app.use("/profile", new ProfileHandler)
# app.listen("localhost", 3000)
# ~~~
#
# Optionaly, you can use the `GithubUser` handler to provide access to the
# Github user stored in session:
#
# ~~~
# app.use("/api/user", new GithubUser)
# ~~~
module pop_auth

import pop_json
import pop_sessions
import github

# Github OAuth login handler.
#
# See https://developer.github.com/v3/oauth/.
class GithubLogin
	super Handler

	# Client ID delivered by GitHub for your application.
	#
	# See https://github.com/settings/applications/new.
	var client_id: String is writable

	# The URL in your application where users will be sent after authorization.
	#
	# If `null`, the URL used in application registration will be used.
	#
	# See https://developer.github.com/v3/oauth/#redirect-urls.
	var redirect_uri: nullable String = null is writable

	# A space delimited list of scopes.
	#
	# See https://developer.github.com/v3/oauth/#scopes.
	var scope: nullable String = null is writable

	# An optional and unguessable random string.
	#
	# It is used to protect against cross-site request forgery attacks.
	var state: nullable String = null is writable

	# Allow signup at login.
	#
	# Whether or not unauthenticated users will be offered an option to sign up
	# for GitHub during the OAuth flow. The default is true.
	#
	# Use false in the case that a policy prohibits signups.
	var allow_signup = true is writable

	# Github OAuth login URL.
	var auth_url = "https://github.com/login/oauth/authorize" is writable

	# Build Github URL to OAuth service.
	fun build_auth_redirect: String do
		var url = "{auth_url}?client_id={client_id}&allow_signup={allow_signup}"
		var redirect_uri = self.redirect_uri
		if redirect_uri != null then url = "{url}&redirect_uri={redirect_uri}"
		var scope = self.scope
		if scope != null then url = "{url}&scope={scope}"
		var state = self.state
		if state != null then url = "{url}&state={state}"
		return url
	end

	redef fun get(req, res) do res.redirect build_auth_redirect
end

# Get the authentification code and translate it to an access token.
class GithubOAuthCallBack
	super Handler

	# The client ID delivered by GitHub for your application.
	#
	# See https://github.com/settings/applications/new.
	var client_id: String is writable

	# The client secret you received from Github when your registered your application.
	var client_secret: String is writable

	# The URL in your application where users will be sent after authorization.
	#
	# If `null`, the URL used in application registration will be used.
	#
	# See https://developer.github.com/v3/oauth/#redirect-urls.
	var redirect_uri: nullable String is writable

	# An optional and unguessable random string.
	#
	# It is used to protect against cross-site request forgery attacks.
	var state: nullable String is writable

	# Github OAuth token URL.
	var token_url = "https://github.com/login/oauth/access_token" is writable

	# Header map sent with the OAuth token request.
	var headers: HeaderMap do
		var map = new HeaderMap
		map["Accept"] = "application/json"
		return map
	end

	# Build the OAuth post data.
	fun build_auth_body(code: String): HeaderMap do
		var map = new HeaderMap
		map["client_id"] = client_id
		map["client_secret"] = client_secret
		map["code"] = code
		var redirect_uri = self.redirect_uri
		if redirect_uri != null then map["redirect_uri"] = redirect_uri
		var state = self.state
		if state != null then map["state"] = state
		return map
	end

	redef fun get(req, res) do
		# Get OAuth code
		var code = req.string_arg("code")
		if code == null then
			res.error 401
			return
		end

		# Exchange it for an access token
		var access_token = request_access_token(code)
		if access_token == null then
			res.error 401
			return
		end

		# Load github user
		var gh_api = new GithubAPI(access_token)
		var user = gh_api.get_auth_user
		if user == null then
			res.error 401
			return
		end
		# Set session and redirect to user page
		var session = req.session
		if session == null then
			res.error 500
			return
		end
		session.user = user
		res.redirect redirect_uri or else "/"
	end

	# Request an access token from an access `code`.
	private fun request_access_token(code: String): nullable String do
		var request = new CurlHTTPRequest(token_url)
		request.headers = headers
		request.data = build_auth_body(code)
		var response = request.execute
		return parse_token_response(response)
	end

	# Parse the Github access_token response and extract the access_token.
	private fun parse_token_response(response: CurlResponse): nullable String do
		if response isa CurlResponseFailed then
			print "Request to Github OAuth failed"
			print "Requested URI: {token_url}"
			print "Error code: {response.error_code}"
			print "Error msg: {response.error_msg}"
			return null
		else if response isa CurlResponseSuccess then
			var obj = response.body_str.parse_json
			if not obj isa JsonObject then
				print "Error: Cannot parse json response"
				print response.body_str
				return null
			end
			var access_token = obj.get_or_null("access_token")
			if not access_token isa String then
				print "Error: No `access_token` key in response"
				print obj.to_json
				return null
			end
			return access_token
		end
		return null
	end
end

# Destroy user session and redirect to homepage.
class GithubLogout
	super Handler

	# The URL in your application where users will be sent after logout.
	#
	# If `null`, the root uri `/` will be used.
	var redirect_uri: nullable String is writable

	redef fun get(req, res) do
		var session = req.session
		if session != null then
			session.user = null
		end
		res.redirect redirect_uri or else "/"
	end
end

# AuthHandler allows access to session user
#
# Inherit this handler to access to session user from your custom handler.
#
# For example, you need a profile handler that checks if the user is logged
# before returning it in json format.
# ~~~
# import popcorn::pop_auth
#
# class ProfileHandler
#	super AuthHandler
#
#	redef fun get(req, res) do
#		var user = check_session_user(req, res)
#		if user == null then return
#		res.json user
#	end
# end
# ~~~
#
# By using `check_session_user`, we delegate to the `AuthHandler` the responsability
# to set the HTTP 403 error.
# We then check is the user is not null before pursuing.
abstract class AuthHandler
	super Handler

	# Returns `user` from `req.session` or null if no user is authenticated.
	fun session_user(req: HttpRequest): nullable User do
		var session = req.session
		if session == null then return null
		var user = session.user
		return user
	end

	# Check the session for user and return it.
	#
	# If no `user` can be found in session, set res as a HTTP 403 error and return `null`.
	fun check_session_user(req: HttpRequest, res: HttpResponse): nullable User do
		var user = session_user(req)
		if user == null then
			res.error 403
		end
		return user
	end
end

# Get the currently logged in user from session.
class GithubUser
	super AuthHandler

	redef fun get(req, res) do
		var user = check_session_user(req, res)
		if user == null then return
		res.json user
	end
end

redef class Session

	# Github user if logged in.
	var user: nullable User = null is writable
end
