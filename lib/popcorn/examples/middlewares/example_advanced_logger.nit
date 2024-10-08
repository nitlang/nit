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

module example_advanced_logger is example

import popcorn
import realtime

redef class HttpRequest
	# Time that request was received by the Popcorn app.
	var timer: nullable Clock = null
end

class RequestTimeHandler
	super Handler

	redef fun all(req, res) do req.timer = new Clock
end

class AdvancedLoggerHandler
	super Handler

	redef fun all(req, res) do
		var timer = req.timer
		if timer != null then
			print "{req.method} {req.uri} {res.color_status} ({timer.total}s)"
		else
			print "{req.method} {req.uri} {res.color_status}"
		end
	end
end

class AnotherHandler
	super Handler

	redef fun get(req, res) do res.send "Hello World!"
end

var app = new App
app.use_before("/*", new RequestTimeHandler)
app.use("/", new AnotherHandler)
app.use_after("/*", new AdvancedLoggerHandler)
app.listen("localhost", 3000)
