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

# Server that implements an OAuth2-like authentication bound to a `shibuqam` valid server.
#
# The protocol is based on [OAuth2](https://tools.ietf.org/html/rfc6749),
# especially the [Authorization Code Grant](https://tools.ietf.org/html/rfc6749#section-4.1).
#
# # Use as a web service
#
# * User: the human user and its user-agent (browser) that use the client website.
# * Client: the 3rd party web site that need authentication. It owns `https://client.example.com`
# * Server: the public OAuth server. It owns `https://server.example.com`
#
# From the user & client point of view, the process is the following:
#
# 1. The client redirects the user to the server.
# 2. The user authenticates on the server.
# 3. The server redirects the user to the client with a token.
# 4. The client sends the token to the server.
# 5. The server responds with the user information.
#
# ## 1. User Request
#
# Two GET fields
#
# * `redirect_uri`: A full URI that will be used to redirect the user once the authentication is done.
# * `state`: A temporary string used to check that the callback is legitimate.
#
# On request, the service authenticate the user then redirect to the callback with the user informations.
#
# Example:
#
# ~~~raw
# GET https://server.example.com/login?redirect_uri=https://client.example.com/callback&state=secret
# ~~~
#
# ## 3. Response
#
# After the authentication, the response is a 303 redirection to `redirect_uri`
# with the following GET arguments:
#
# * `code:` a temporary token to send-back to the server
# * `state`: the same state to check that the response is not forged.
#
# Example:
#
# ~~~raw
# HTTP/1.1 303 See Other
# Location: https://client.example.com/callback?code=something&state=secret
# ~~~
#
# ## 3b. Errors
#
# If the request is badly formed or if the `redirect_uri` is not authorized,
# then there is no redirection and a text error message is send to the user.
#
# If there is a problem during the authentication, then there is a redirection
# but the GET fields are only `state` and `error=access_denied`.
#
# ## 4. Client request
#
# A single POST field
#
# * `code`: The one you get as the user response.
#
# Example:
#
# ~~~raw
# POST https://server.example.com/info
# code=something
# ~~~
#
# ## 5. Response
#
# The response is a JSON object that is the plain serialization of a `User` instance.
#
# ~~~json
# HTTP/1.1 200 OK
# Content-Type: application/json;charset=UTF-8
#
# {
#	"id": "jdoe",
#	"given_name": "John",
#	"display_name": "John Doe",
#	"email": "doe.john@example.com",
#	"avatar": "https://www.gravatar.com/avatar/4fe50a575e1c28773800a0aa03c62dbe?d=retro"
# }
# ~~~
#
# # To configure and execute
#
# ## Run the server
#
#    shibuqamoauth authorized_list [host] [port]
#
# `authorized_list` is a textfile that registers the list of accepted `redirect_uri`.
#
# Example:
#
# ~~~raw
# https://example.com/foo
# https://other.example.com/
# ~~~
#
# To be authorized, a `redirect_uri` must have one of the line of `authorized_list` as a prefix.
# For instance, the previous `authorized_list` accepts `https://example.com/foo` and `https://example.com/foo/bar`
# but not `https://example.com/bar` nor `https://sub.example.com/foo`.
#
#
# ## Install as a server
#
# A correct `shibuqam` reverse proxy must be configured (see `shibuqam` for details).
# In a full scenario, the server is replaced by:
#
# * Proxy: the public reverse proxy that can do the genuine Shibboleth authentication.
#   It owns `https://server.example.com`
# * Service: the private shibuqamoauth service. It owns a NATed `https://shibuqamoauth.example.com/`
#
# On the first access to the server (user request):
#
# 1. Proxy gets the request
# 2. Proxy does the Shibboleth authentication.
# 3. Proxy enhances the request header.
# 4. Proxy forwards the request to service.
# 5. Service checks that `redir` is authorized.
# 6. Service digs in the enhanced request header to generate a token and associate it to the user.
# 7. Redirect the user to client with the callback and the token.
#
# On the second access to the server (client request):
#
# 1. Proxy gets the request
# 2. Proxy forwards the request to service without authentification (it is not a user).
# 3. Service checks that the token existe and is not expired.
# 4. Service serialize and send the user as in the
#
# The Proxy should only do the authentication on the user request.
# The simplest way is to configure two routes that reverse proxy on the same server.
#
# # Why not using real OAuth2?
#
# OAuth2 is centered about *access_tokens* that allow clients to performs
# a (possibly scoped) set of actions/queries on the behalf of an authenticated user.
#
# In our scenario, there is no action/queries to do once an user is authenticated.
# So we do not delivers *access_tokens* since there is nothing to access once the user is known.
#
# We need only the third-party authentication part of the protocol.
#
# Since we do not have the same goals than the RFC, we also have a simplified protocol.
# Noways, OAuth is mainly a framework and the implementations are very diverse and unfortunately no
# not interoperable anyway.
#
# Here is the specific changes we have:
#
# * no `response_type`: there is a single kind of grant and the two steps are identified by the http method (GET or POST) and the configured routes on the server.
# * no `client_id`: because we do not want to code a db of clients. The `redirect_uri` can be seen as a simple client_id. We have also no way to present the client to the user since we do not control the authorization page of shibboleth since is done by the reverse proxy.
# * no `scope` and no `authorisation_code` since since there is nothing to access. We just get minimal information after the successful shibboleth login. Thus we have nothing more to authorise once the user is authenticated.
# * no `client_secret`: the user information are already public. There is no need to make the code more complex to protect public information.
module shibuqamoauth is example

import popcorn
import popcorn::pop_json
import shibuqam
import json

class AuthHandler
	super Handler

	# List of prefixes of authorized redirections.
	var authorized: Array[String]

	# Check is `redir` is an authorized redirection (client)
	fun is_authorized(redir: String): Bool
	do
		for r in authorized do if redir.has_prefix(r) then return true
		return false
	end


	# Associate each `code` issued to the user, to the info intended to the client.
	var infos = new HashMap[String, Info]

	# Remove expired keys
	fun expiration
	do
		var now = get_time
		for k, i in infos do
			if i.expiration < now then
				infos.keys.remove(k)
				print "{i.user.id} -> expired"
			end
		end
	end

	# Generate a new usable token
	#
	# Not thread safe!
	fun new_token: String
	do
		var token
		loop
			token = generate_token
			if not infos.has_key(token) then break
		end
		return token
	end

	redef fun get(http_request, response)
	do
		# GET means a Authorization Request from the user-agent

		# Get the `redirect_uri` parameter, we use it to identify the client
		var redir = http_request.string_arg("redir")
		if redir == null then redir = http_request.string_arg("redirect_uri")
		if redir == null then
			response.send("No redirect_uri.", 400)
			return
		end

		# Check if the client is authorized
		if not is_authorized(redir) then
			response.send("Site not authorized.", 403)
			return
		end

		# Get the state, we use it to avoid CSRF attacks
		var state = http_request.string_arg("state")
		var res = redir + "?"

		# If we are here, the reverse proxy did the authentication
		# Is there an user?
		var user = http_request.user
		if user == null then
			print "no user -> {redir}"
			res += "error=access_denied"
		else
			# The user is authenticated.
			print "{user.id} -> {redir}"

			# We prepare a token (code) that the client will use to get the information.
			expiration
			var token = new_token

			res += "code={token.to_percent_encoding}"

			var ttl = 10*60*60 # 10 minutes
			var info = new Info(get_time + ttl, user)
			infos[token] = info
		end
		if state != null then res += "&state={state.to_percent_encoding}"
		response.redirect res
	end

	redef fun post(http_request, response)
	do
		# POST means an Access Token Request from the client.
		# Unfortunately, we have no access to grant, only informations.
		print http_request.post_args.join(" ; ", ": ")

		expiration

		var code = http_request.string_arg("code")
		if code == null then
			print "POST: no code"
			return
		end
		var info = infos.get_or_null(code)
		if info == null then
			print "POST: bad code {code}"
			return
		end

		print "{info.user.id} -> retrieved"

		# Drop the code as it is a single use
		infos.keys.remove(code)

		# Send the requested information.
		response.json(info.user)
	end
end

redef class User
	super Serializable
end

# Information about an authenticated used stored on the server to be given to the client.
class Info
	# Time to live
	var expiration: Int

	# The identified user
	var user: User
end

var host = "localhost"
var port = 3000

if args.is_empty then
	print "usage: shibuqamoauth authorized_list [host] [port]"
	return
end

var list = args[0]
if args.length > 1 then host = args[1]
if args.length > 2 then port = args[2].to_i

var authorized = list.to_path.read_lines
if authorized.is_empty then
	print_error "{list}: not found or empty"
	exit 1
end

var app = new App
app.use("/*", new AuthHandler(authorized))
app.listen(host, port)
