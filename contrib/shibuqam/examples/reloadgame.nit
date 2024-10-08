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

# Example that uses `shibuqam` to authenticate users and count the number of time they reload.
module reloadgame is example

import popcorn
import counter
import shibuqam

redef class User
	# How many reload?
	var seen = 0
end

# Ugly global class to track the knowledge.
class DB
	# All known users
	var users = new HashMap[String, User]
end
# Ugly global instance to track the knowledge.
fun db: DB do return once new DB

redef class HttpRequest
	# Like `user` but reuse an user if already seen
	var reuser: nullable User is lazy do
		var user = self.user
		if user == null then return null

		var saved = db.users.get_or_null(user.id)
		if saved != null then return saved

		db.users[user.id] = user
		return user
	end
end

# The only handler of the example.
class ReloadGame
	super Handler

	redef fun get(http_request, response)
	do
		var body = """
			<!DOCTYPE html>
			<head>
			<meta charset="utf-8">
			<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
			<title>Nitcorn on Shibboleth/UQAM</title>
			</head>
			<body>
			<div class="container">
			<h1>Nitcorn on Shibboleth/UQAM</h1>
		"""

		var user = http_request.user

		if user != null then
			user.seen += 1

			body += """
			<p>Welcome {{{user.given_name}}}</p>
			<ul>
			<li>Full Name: {{{user.display_name}}}</li>
			<li>E-Mail: {{{user.email}}}</li>
			<li>Id: {{{user.id}}}</li>
			<li>Score: {{{user.seen}}}</li>
			</ul>
			"""

			#for k, v in http_request.header do body += "<li>{k}: {v}</li>"
		else
			# The login page, at the location the reverse proxy is expected to be configured
			# to force an authentication.
			var login = "/securep/login"
			body += """
			<p>Welcome annonymous, please <a href="{{{login}}}">log in</a>.</p>
			"""
		end

		var score = new Counter[User]
		for u in db.users.values do
			score[u] = u.seen
		end

		body += "<h2>Scoreboard</h2><ul>"
		for u in score.sort.reversed do
			body += "<li><img src='{u.avatar}'> {u.display_name}: {u.seen}</li>"
		end


		body += """</ul>
			</div>
			</body>
			</html>
		"""

		response.html body
	end
end

var app = new App
app.use("/*", new ReloadGame)
app.listen("localhost", 3000)
