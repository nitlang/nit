# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Actions for the Web interface of Benitlux
module benitlux_controller

import nitcorn
import nitcorn::restful
private import json

import benitlux_model
import benitlux_db
import benitlux_view
import benitlux_social

# Server action for REST or Web, for a given location
abstract class BenitluxAction
	super Action

	# Database used for both the mailing list and the social network
	var db: BenitluxDB

	# Path to the storage of the last email sent
	var sample_email_path = "benitlux_sherbrooke.email"
end

# Web interface to subscribe to the mailing list
class BenitluxSubscriptionAction
	super BenitluxAction

	redef fun answer(request, turi)
	do
		var template = new BenitluxDocument

		var sub = request.post_args.keys.has("sub")
		var unsub = request.all_args.keys.has("unsub")

		var email = null
		if request.all_args.keys.has("email") then email = request.all_args["email"].trim

		if email != null then
			if email.is_empty or not email.chars.has('@') or not email.chars.has('.') then
				template.message_level = "danger"
				template.message_content = "Invalid email."
			else if sub and request.post_args.keys.has("email") then
				template.message_level = "success"
				template.message_content = "Subscription successful!"

				db.subscribe email
			else if unsub then
				template.message_level = "warning"
				template.message_content = "You've been unsubscribed."

				db.unsubscribe email
			end
		end

		if sample_email_path.file_exists then
			var f = new FileReader.open(sample_email_path)
			var lines = new Array[String]
			for line in f.read_all.split_with("\n") do if not line.is_empty then lines.add line
			f.close
			template.sample_email_lines = lines
		end

		var response = new HttpResponse(200)
		response.body = template
		return response
	end
end

# RESTful interface for the client app
class BenitluxRESTAction
	super BenitluxAction
	super RestfulAction

	# Sign up a new user
	#
	# signup?name=a&pass=b&email=c -> LoginResult | BenitluxError
	fun signup(name, pass, email: String): HttpResponse
	is restful do
		# Validate input
		if not name.name_is_ok then
			var error = new BenitluxError("Invalid username")
			return new HttpResponse.ok(error)
		end

		if not pass.pass_is_ok then
			var error = new BenitluxError("Invalid password")
			return new HttpResponse.ok(error)
		end

		# Query DB
		var error_message = db.signup(name, pass, email)

		var object: nullable Serializable
		if error_message == null then
			object = db.login(name, pass)
		else
			object = new BenitluxError(error_message)
		end

		if object == null then
			# There was an error in the call to login
			return new HttpResponse.server_error
		end

		# It went ok, may or may not be signed up
		return new HttpResponse.ok(object)
	end

	# Attempt to login
	#
	# login?name=a&pass=b -> LoginResult | BenitluxError
	fun login(name, pass: String): HttpResponse
	is restful do
		var log: nullable Serializable = db.login(name, pass)
		if log == null then log = new BenitluxError("Login Failed", "Invalid username and password combination.")

		return new HttpResponse.ok(log)
	end

	# Is `token` valid?
	#
	# check_token?token=a -> true | BenitluxError
	fun check_token(token: String): HttpResponse
	is restful do
		var user_id = db.token_to_id(token)
		if user_id == null then return new HttpResponse.invalid_token
		return new HttpResponse.ok(true)
	end

	# Search a user
	#
	# search?token=b&query=a&offset=0 -> Array[UserAndFollowing] | BenitluxError
	fun search(token: nullable String, query: String): HttpResponse
	is restful do
		var user_id = db.token_to_id(token)
		var users = db.search_users(query, user_id)
		if users == null then return new HttpResponse.server_error

		return new HttpResponse.ok(users)
	end

	# List available beers
	#
	# list?token=a[&offset=0&count=1] -> Array[BeerAndRatings] | BenitluxError
	fun list(token: nullable String): HttpResponse
	is restful do
		var user_id = db.token_to_id(token)
		var list = db.list_beers_and_rating(user_id)
		if list == null then return new HttpResponse.server_error

		return new HttpResponse.ok(list)
	end

	# Post a review of `beer`
	#
	# review?token=a&beer=b&rating=0 -> true | BenitluxError
	fun review(token: String, rating, beer: Int): HttpResponse
	is restful do
		var user_id = db.token_to_id(token)
		if user_id == null then return new HttpResponse.invalid_token

		db.post_review(user_id, beer, rating, "")

		return new HttpResponse.ok(true)
	end

	# Set whether user of `token` follows `user_to`, by default set as follow
	#
	# follow?token=a&user_to=0 -> true | BenitluxError
	fun follow(token: String, user_to: Int, follow: nullable Bool): HttpResponse
	is restful do
		var user = db.token_to_id(token)
		if user == null then return new HttpResponse.invalid_token

		if follow or else true then
			db.add_followed(user, user_to)
		else db.remove_followed(user, user_to)

		return new HttpResponse.ok(true)
	end

	# List followers of the user of `token`
	#
	# followers?token=a -> Array[UserAndFollowing] | BenitluxError | BenitluxError
	fun followers(token: String): HttpResponse
	is restful do
		var user = db.token_to_id(token)
		if user == null then return new HttpResponse.invalid_token

		var users = db.followers(user)
		if users == null then return new HttpResponse.server_error

		return new HttpResponse.ok(users)
	end

	# List users followed by the user of `token`
	#
	# followed?token=a -> Array[UserAndFollowing] | BenitluxError
	fun followed(token: String): HttpResponse
	is restful do
		var user = db.token_to_id(token)
		if user == null then return new HttpResponse.invalid_token

		var users = db.followed(user)
		if users == null then return new HttpResponse.server_error

		return new HttpResponse.ok(users)
	end

	# List friends of the user of `token`
	#
	# friends?token=a -> Array[UserAndFollowing] | BenitluxError
	fun friends(token: String, n: nullable Int): HttpResponse
	is restful do
		var user = db.token_to_id(token)
		var users = db.friends(user, n)
		if users == null then return new HttpResponse.server_error

		return new HttpResponse.ok(users)
	end

	# Check user in or out
	#
	# checkin?token=a -> true | BenitluxError
	fun checkin(token: String, is_in: nullable Bool): HttpResponse
	is restful do
		var id = db.token_to_id(token)
		if id == null then return new HttpResponse.invalid_token

		# Register in DB
		db.checkin(id, is_in or else true)

		# Update followed_followers
		var common_followers = db.followed_followers(id)

		# Sent push notifications to connected reciprocal friends
		if common_followers != null then
			for friend in common_followers do
				var conn = push_connections.get_or_null(friend.id)
				if conn != null then
					push_connections.keys.remove friend.id
					if not conn.closed then
						var report = db.checkedin_followed_followers(friend.id)
						var response = if report == null then
								new HttpResponse.server_error
							else new HttpResponse.ok(report)
						conn.respond response
						conn.close
					end
				end
			end
		end

		return new HttpResponse.ok(true)
	end

	# List users currently checked in among friends of the user of `token`
	#
	# checkedin?token=a -> Array[UserAndFollowing]
	fun checkedin(token: String): HttpResponse
	is restful do
		var user_id = db.token_to_id(token)
		if user_id == null then return new HttpResponse.invalid_token

		var report = db.checkedin_followed_followers(user_id)
		if report == null then return new HttpResponse.server_error
		return new HttpResponse.ok(report)
	end

	# List beer changes since `date` with information in relation to the user of `token`
	#
	# since?token=a&date=date -> BeerEvents
	fun since(token, date: nullable String): HttpResponse
	is restful do
		# Query DB
		var user_id = db.token_to_id(token)
		var list = db.list_beers_and_rating(user_id, date)
		if list == null then return new HttpResponse.server_error

		return new HttpResponse.ok(list)
	end

	# Fallback answer on errors
	redef fun answer(request, turi) do return new HttpResponse.bad_request
end

# ---
# Push notification

# Benitlux push notification interface
class BenitluxPushAction
	super BenitluxAction

	# Intercept the full answer to set aside the connection and complete it later
	redef fun prepare_respond_and_close(request, turi, connection)
	do
		var token = request.string_arg("token")

		var user = db.token_to_id(token)
		if user == null then
			# Report errors right away
			var response =  new HttpResponse.invalid_token
			connection.respond response
			connection.close
			return
		end

		# Set aside the connection
		push_connections[user] = connection
	end
end

redef class Sys
	# Connections left open for a push notification, organized per user id
	private var push_connections = new Map[Int, HttpServer]
end

# ---
# Administration

# Path to the secret used to authenticate admin requests
fun secret_path: String do return "benitlux.secret"

# Services reserved to administrators
class BenitluxAdminAction
	super BenitluxAction
	super RestfulAction

	private fun server_secret: String do return secret_path.to_path.read_all

	# Trigger sending daily menu to connected clients
	#
	# This should usually be called by an external cron program.
	# send_daily_updates?secret=shared_secret -> true | BenitluxError
	fun send_daily_updates(secret: nullable String): HttpResponse
	is restful do
		# Check secrets
		var server_secret = server_secret
		if server_secret.is_empty then
			print_error "The admin interface needs a secret at '{secret_path}'"
			return new HttpResponse.server_error
		end

		if server_secret != secret then
			return new HttpResponse.invalid_token
		end

		# Load beer menu
		var list = db.list_beers_and_rating
		if list == null then return new HttpResponse.server_error

		var msg = new DailyNotification(list)

		# Broadcast updates
		for conn in push_connections.values.to_a do
			if not conn.closed then
				conn.respond new HttpResponse.ok(msg)
				conn.close
			end
		end
		push_connections.clear

		return new HttpResponse.ok(true)
	end

	redef fun answer(request, turi) do return new HttpResponse.bad_request
end

# ---
# Misc services

redef class Text
	# Rewrite the date represented by `self` in the format expected by SQLite
	private fun std_date: String
	do
		var parts = self.split("-")
		if parts.length != 3 then return "1970-01-01"

		var y = parts[0].to_s
		var m = parts[1].to_s
		var d = parts[2].to_s

		m = "0"*(2 - m.length) + m
		d = "0"*(2 - d.length) + d

		return "{y}-{m}-{d}"
	end
end

redef class HttpResponse

	# Respond with `data` in Json and a code 200
	init ok(data: Serializable)
	do
		init 200
		body = data.serialize_to_json
	end

	# Respond with a `BenitluxError` in JSON and a code 403
	init invalid_token
	do
		init 403
		var error = new BenitluxTokenError("Forbidden", "Invalid or outdated token.")
		body = error.serialize_to_json
	end

	# Respond with a `BenitluxError` in JSON and a code 400
	init bad_request
	do
		init 400
		var error = new BenitluxError("Bad Request", "Application error, or it needs to be updated.")
		body = error.serialize_to_json
	end

	# Respond with a `BenitluxError` in JSON and a code 500
	init server_error
	do
		init 500
		var error = new BenitluxError("Internal Server Error", "Server error, try again later.")
		body = error.serialize_to_json
	end
end
