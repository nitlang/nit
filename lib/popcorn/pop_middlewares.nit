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

module pop_middlewares

import pop_handlers
import console
import realtime

# Initialize session in request if non existent.
#
# Should be called before any use of the session.
class SessionInit
	super Handler

	redef fun all(req, res) do if req.session == null then req.session = new Session
end

# Initialize a clock for the resquest.
#
# Can be used to compute the time passed to respond that request.
class RequestClock
	super Handler

	redef fun all(req, res) do req.clock = new Clock
end

# Display log info about request processing.
class ConsoleLog
	super Handler

	# Do we want colors in the console output?
	var colors = true

	redef fun all(req, res) do
		var clock = req.clock
		if clock != null then
			print "{req.method} {req.uri} {status(res)} ({clock.total}s)"
		else
			print "{req.method} {req.uri} {status(res)}"
		end
	end

	# Colorize the request status.
	private fun status(res: HttpResponse): String do
		if colors then return res.color_status
		return res.status_code.to_s
	end
end

redef class HttpRequest
	# Time that request was received by the Popcorn app.
	var clock: nullable Clock = null
end

redef class HttpResponse
	# Return `self` status colored for console.
	fun color_status: String do
		if status_code >= 100 and status_code < 200 then return status_code.to_s.gray
		if status_code >= 200 and status_code < 300 then return status_code.to_s.green
		if status_code >= 300 and status_code < 400 then return status_code.to_s.blue
		if status_code >= 400 and status_code < 500 then return status_code.to_s.yellow
		if status_code >= 500 and status_code < 600 then return status_code.to_s.red
		return status_code.to_s
	end
end
