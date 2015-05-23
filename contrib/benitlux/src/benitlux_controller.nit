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
private import json::serialization

import benitlux_model
import benitlux_db
import benitlux_view

abstract class BenitluxAction
	super Action

	# Path to the database
	var db_path = "benitlux_sherbrooke.db"

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

				var db = new DB.open(db_path)
				db.subscribe email
				db.close
			else if unsub then
				template.message_level = "warning"
				template.message_content = "You've been unsubscribed."

				var db = new DB.open(db_path)
				db.unsubscribe email
				db.close
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
		response.body = template.write_to_string
		return response
	end
end

# RESTful interface to compare beer offer between given dates
#
# Expects request in the format of `since/2014-07-24`, will replay with a
# `BeerEvents` serialized to Json with the necessary meta-data to be deserialized.
class BenitluxRESTAction
	super BenitluxAction

	redef fun answer(request, turi)
	do
		var words = turi.split("/")
		if not words.is_empty and words.first.is_empty then words.shift

		if words.length >= 2 and words[0] == "since" then
			var since = words[1]

			var db = new DB.open(db_path)
			var events = db.beer_events_since(since.to_sql_string)
			db.close

			if events == null then
				var response = new HttpResponse(400)
				response.body = "Bad request"
				return response
			end

			var stream = new StringWriter
			var serializer = new JsonSerializer(stream)
			serializer.serialize events
			var serialized = stream.to_s

			var response = new HttpResponse(200)
			response.body = serialized
			return response
		end

		var response = new HttpResponse(400)
		response.body = "Bad request"
		return response
	end
end
