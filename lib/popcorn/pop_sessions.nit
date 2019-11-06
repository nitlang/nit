# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Session handlers
#
# Here a simple example on how to use sessions with popcorn:
# ~~~
# import popcorn
#
# redef class Session
#	var is_logged = false
# end
#
# class AppLogin
#	super Handler
#
#	redef fun get(req, res) do
#		res.html """
#		<p>Is logged: {{{req.session.as(not null).is_logged}}}</p>
#		<form action="/" method="POST">
#			<input type="submit" value="Login" />
#		</form>"""
#	end
#
#	redef fun post(req, res) do
#		req.session.as(not null).is_logged = true
#		res.redirect("/")
#	end
# end
#
# var app = new App
# app.use_before("/*", new SessionInit)
# app.use("/", new AppLogin)
# app.listen("localhost", 3000)
# ~~~
#
# Notice the use of the `SessionInit` on the `/*` route. You must use the
# `SessionInit` first to initialize the request session.
# Without that, your request session will be set to `null`.
module pop_sessions

import pop_handlers

# Initialize session in request if non existent.
#
# Should be called before any use of the session.
# ~~~
# import popcorn
#
# var app = new App
# app.use_before("/*", new SessionInit)
# # ... other middlewares
# app.listen("localhost", 3000)
# ~~~
class SessionInit
	super Handler

	redef fun all(req, res) do if req.session == null then req.session = new Session
end
