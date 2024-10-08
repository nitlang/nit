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

module example_post_handler is example

import popcorn
import template

class PostHandler
	super Handler

	redef fun post(req, res) do
		var tpl = new Template
		tpl.addn "URI: {req.uri}"
		tpl.addn "Body: {req.body}"
		for name, arg in req.post_args do
			tpl.addn "{name}: {arg}"
		end
        res.send tpl
	end
end

var app = new App
app.use("/", new PostHandler)
app.listen("localhost", 3000)
