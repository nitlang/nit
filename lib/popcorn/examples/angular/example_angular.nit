# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014-2015 Alexandre Terrasa <alexandre@moz-code.org>
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

# This is an example of how to use angular.js with popcorn
module example_angular is example

import popcorn
import popcorn::pop_json

class CounterAPI
	super Handler

	var counter = 0

	fun json_counter: JsonObject do
		var json = new JsonObject
		json["label"] = "Visitors"
		json["value"] = counter
		return json
	end

	redef fun get(req, res) do
		res.json(json_counter)
	end

	redef fun post(req, res) do
		counter += 1
		res.json(json_counter)
	end
end

var app = new App
app.use("/counter", new CounterAPI)
app.use("/*", new StaticHandler("www/", "index.html"))
app.listen("localhost", 3000)
