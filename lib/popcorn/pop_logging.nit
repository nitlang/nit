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

module pop_logging

import pop_handlers
import console
import realtime

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

	# Logger level
	#
	# * `0`: silent
	# * `1`: errors
	# * `2`: warnings
	# * `3`: info
	# * `4`: debug
	#
	# Request status are always logged, whatever the logger level is.
	var level = 4 is writable

	# Do we want colors in the console output?
	var no_colors = false

	redef fun all(req, res) do
		var clock = req.clock
		if clock != null then
			log "{req.method} {req.url} {status(res)} ({clock.total}s)"
		else
			log "{req.method} {req.url} {status(res)}"
		end
	end

	# Colorize the request status.
	private fun status(res: HttpResponse): String do
		if no_colors then return res.status_code.to_s
		return res.color_status
	end

	# Display a `message` with `level`.
	#
	# Message will only be displayed if `level <= self.level`.
	# Colors will be used depending on `colors`.
	#
	# Use `0` for no coloration.
	private fun display(level: Int, message: String) do
		if level > self.level then return
		if no_colors then
			print message
			return
		end
		if level == 0 then print message
		if level == 1 then print message.red
		if level == 2 then print message.yellow
		if level == 3 then print message.blue
		if level == 4 then print message.gray
	end

	# Display a message wathever the `level`
	fun log(message: String) do display(0, message)

	# Display a red error `message`.
	fun error(message: String) do display(1, "[ERROR] {message}")

	# Display a yellow warning `message`.
	fun warning(message: String) do display(2, "[WARN] {message}")

	# Display a blue info `message`.
	fun info(message: String) do display(3, "[INFO] {message}")

	# Display a gray debug `message`.
	fun debug(message: String) do display(4, "[DEBUG] {message}")
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
