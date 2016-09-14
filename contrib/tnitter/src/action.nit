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

# View and controller of Tnitter
module action

import nitcorn
import json

import model
import database

# Path to the Sqlite3 database
fun tnitter_db_path: String do return "tnitter.db"

redef class Session
	# User logged in
	var user: nullable String = null
end

# Main Tnitter Action
class TnitterWeb
	super Action

	# Header on pages served by this `Action`
	#
	# Keywords to `Text::replace`:
	# * `%app_path%` is the main URL to reach this `Action`
	# * `%nav_right%` is the pulled right part of the header, used for login form
	var header = """
<nav class="navbar navbar-default" role="navigation">
  <div class="container-fluid">
    <div class="navbar-header">
      <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1">
        <span class="sr-only">Toggle navigation</span>
		<span class="icon-bar"></span>
		<span class="icon-bar"></span>
		<span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="%app_path%">Tnitter</a>
    </div>

    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      <ul class="nav navbar-nav">
        <li><a href="https://github.com/nitlang/nit/">Nit repository</a></li>
      </ul>

      <ul class="nav navbar-nav pull-right">
%header_right%
      </ul>
    </div>
  </div>
</nav>"""

	# Template of the pages served by this `Action`
	#
	# Keywords to `Text::replace`:
	# * The `%header%`, first thing in the `<body>`
	# * The main page `%content%` within a `<div class="container">`
	var template = """
<!DOCTYPE html>
<html>
<head>
	<title>Tnitter</title>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no">

	<link rel="stylesheet" href="//netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css">
	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.0/jquery.min.js"></script>
	<script src="//netdna.bootstrapcdn.com/bootstrap/3.0.0/js/bootstrap.min.js"></script>
	<script>
		{{{javascript_header or else ""}}}
	</script>
</head>
<body>

%header%

<div class="container">
	%content%
</div>
</body>
</html>"""

	# Custom JavaScript code added within a `<script>` block to each page
	var javascript_header: nullable Writable = null is writable

	redef fun answer(request, turi)
	do
		# Get existing session
		var session = request.session

		# Error to display on page as a dismissable panel
		var error = null

		var db = new DB.open(tnitter_db_path)

		# Login/logout
		if turi == "/login" and request.post_args.keys.has("user") and
		   request.post_args.keys.has("pass") then

			var user = request.post_args["user"].trim
			var pass = request.post_args["pass"]

			var original_user = db.check_login(user, pass)
			if original_user != null then
				# Log in successful
				if session == null then session = new Session
				session.user = original_user
			else
				# Check for basic requirements
				if user.is_empty then
					error = "Username must have at least 1 character"
				else if user.chars.has(' ') or user.chars.has('\n') then
					error = "Username cannot contain white spaces"
				else if db.sign_up(user, pass) then
					# Sign up successful
					if session == null then session = new Session
					session.user = user
				else
					# Invalid user/pass
					error = "Invalid combination of username and password"
					session = null
				end
			end
		else if turi == "/logout" then
			# Logging out
			session = null
		else if turi == "/post" and request.post_args.keys.has("text") and session != null then
			var user = session.user
			var text = request.post_args["text"].trim
			if user != null and not text.is_empty then
				# Post a Tnit!
				db.post(user, text)
				db.close

				# Redirect the user to avoid double posting
				var response = new HttpResponse(303)
				response.header["Location"] = request.uri
				response.session = session
				return response
			end
		end

		var login_or_out
		var content
		if session == null or session.user == null then
			# Log in form in the navbar
			login_or_out = """
<li>
<form class="navbar-form" role="form" action="login" method="POST">
  <div class="form-group">
    <input type="text" placeholder="Username" class="form-control" name="user">
  </div>
  <div class="form-group">
    <input type="password" placeholder="Password" class="form-control" name="pass">
  </div>
  <button type="submit" class="btn btn-default">Log in (or sign up)</button>
</form>
</li>
			"""

			# Cannot post when not logged in
			content = ""
		else
			# Log out form in the navbar
			login_or_out = """
<li><p class="navbar-text">Signed in as @{{{session.user.html_escape}}}</p></li>
<li>
<form class="navbar-form" role="form" action="logout" method="POST">
  <button type="submit" class="btn btn-default">Log out</button>
</form>
</li>
			"""

			# Post form
			content = """
<form class="form" role="form" action="post" method="POST">
  <div class="form-group">
	<div class="input-group">
	   <div class="input-group-addon">Share your thoughts</div>
	   <input class="form-control" type="text" placeholder="..." name="text">
	   <span class="input-group-btn">
		  <button class="btn btn-default" type="submit">Tnit!</button>
	   </span>
	</div><!-- /input-group -->
  </div>
</form>
			"""
		end

		# Show error if any
		var error_html
		if error != null then
			error_html = """
<div class="alert alert-danger alert-dismissible" role="alert">
  <button type="button" class="close" data-dismiss="alert"><span aria-hidden="true">&times;</span><span class="sr-only">Close</span></button>
  {{{error}}}
</div>
		"""
		else error_html = ""

		# Load the last 16 Tnits
		var posts = db.list_posts(0, 16)
		db.close

		var html_posts = new Array[String]
		for post in posts do
			html_posts.add "<tr><td>@{post.user.html_escape}</td><td>{post.text.html_escape}</td></tr>"
		end

		content += """
<div class="panel panel-default">
  <div class="panel-heading">Latest Tnits</div>
    <table class="table table-striped">
      {{{html_posts.join("\n")}}}
    </table>
  </div>
</div>
		"""

		# Get page from template, we replace the header first so we can replace
		# everything on the same body afterwards
		var body = template.
			replace("%header%", header).
			replace("%app_path%", request.uri.strip_extension(turi) + "/").
			replace("%header_right%", login_or_out).
			replace("%content%", error_html + content)

		# Build response
		var response = new HttpResponse(200)
		response.body = body
		response.session = session
		return response
	end
end

# Tnitter RESTful interface
class TnitterREST
	super Action

	redef fun answer(request, turi)
	do
		if turi == "/list" then
			# list?from=1&count=2 -> Error | Array[Post]

			var from = request.int_arg("from") or else 0
			var count = request.int_arg("count") or else 8

			var db = new DB.open(tnitter_db_path)
			var posts = db.list_posts(from, count)
			db.close

			var response = new HttpResponse(200)
			response.body = posts.serialize_to_json
			return response
		end

		# Format not recognized
		var error = new Error("Bad Request")
		var response = new HttpResponse(400)
		response.body = error.serialize_to_json
		return response
	end
end
