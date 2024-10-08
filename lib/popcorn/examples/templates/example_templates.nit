# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2017 Alexandre Terrasa <alexandre@moz-code.org>
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

module example_templates is example

import popcorn
import popcorn::pop_templates

class MyTemplateHandler
	super Handler

	# Template to render
	var template = new TemplateString("""
		<h1>Hello %USER%!</h1>
		<p>Welcome to %MYSITE%.</p>
	""")

	redef fun get(req, res) do
		# Values to add in the template
		var values = new HashMap[String, String]
		values["USER"] = "Morriar"
		values["MYSITE"] = "My super website"

		# Render it
		res.template(template, values)
	end
end

class MyTemplateStringHandler
	super Handler

	redef fun get(req, res) do
		# Values to add in the template
		var values = new HashMap[String, String]
		values["USER"] = "Morriar"
		values["MYSITE"] = "My super website"

		# Render it with a shortcut
		res.template_string("""
			<h1>Hello %USER%!</h1>
			<p>Welcome to %MYSITE%.</p>
		""", values)
	end
end

class MyTemplateFileHandler
	super Handler

	# Use template from external file
	var tpl_file = "example_template.tpl"

	redef fun get(req, res) do
		# Values to add in the template
		var values = new HashMap[String, String]
		values["USER"] = "Morriar"
		values["MYSITE"] = "My super website"

		# Render it from an external file
		res.template_file(tpl_file, values)
	end
end

class MyTemplatePugHandler
	super Handler

	redef fun get(req, res) do
		# Values to add in the template
		var json = new JsonObject
		json["user"] = "Morriar"
		json["mysite"] = "My super website"

		res.pug("""
h1 Hello #{user}
p Welcome to #{mysite}
		""", json)
	end
end

class MyTemplatePugFileHandler
	super Handler

	# Use template from external file
	var pug_file = "example_template.pug"

	redef fun get(req, res) do
		# Values to add in the template
		var json = new JsonObject
		json["user"] = "Morriar"
		json["mysite"] = "My super website"

		# Render it from an external file
		res.pug_file(pug_file, json)
	end
end

var app = new App
app.use("/", new MyTemplateHandler)
app.use("/string", new MyTemplateStringHandler)
app.use("/file", new MyTemplateFileHandler)
app.use("/pug", new MyTemplatePugHandler)
app.use("/pug_file", new MyTemplatePugFileHandler)
app.listen("localhost", 3000)
