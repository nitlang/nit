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

# Template rendering for popcorn
#
# ## Basic templates
#
# Use TemplateString to render really basic templates that just need macro
# replacements.
#
# Example:
# ~~~nit
# class TemplateStringHandler
#	super Handler
#
#	redef fun get(req, res) do
#		# Values to add in the template
#		var values = new HashMap[String, String]
#		values["USER"] = "Morriar"
#		values["MYSITE"] = "My super website"
#
#		# Render it with a shortcut
#		res.template_string("""
#			<h1>Hello %USER%!</h1>
#			<p>Welcome to %MYSITE%.</p>
#		""", values)
#	end
# end
# ~~~
#
# For larger templates, you can also use external files (makes your Nit code cleaner):
# ~~~nit
# class TemplateFileHandler
#	super Handler
#
#	redef fun get(req, res) do
#		# Values to add in the template
#		var values = new HashMap[String, String]
#		values["USER"] = "Morriar"
#		values["MYSITE"] = "My super website"
#
#		# Render it from an external file
#		res.template_file("example_template.tpl", values)
#	end
# end
# ~~~
#
# ## Using pug templates
#
# Pug is a templating format provided by the external command `pug`.
# For complex templates that need conditional or loop statements, pug can be a solution.
#
# See the pug syntax here: https://pugjs.org/api/getting-started.html
#
# ~~~nit
# class PugFileHandler
#	super Handler
#
#	redef fun get(req, res) do
#		# Values to add in the template
#		var json = new JsonObject
#		json["user"] = "Morriar"
#		json["mysite"] = "My super website"
#
#		# Render it from an external file
#		res.pug_file("example_template.pug", json)
#	end
# end
# ~~~
module pop_templates

import popcorn::pop_handlers
import popcorn::pop_json
import template::macro

redef class HttpResponse

	# Render the TemplateString `tpl` with `values` and write it as html.
	fun template(tpl: nullable TemplateString, values: nullable Map[String, nullable Writable], status: nullable Int) do
		if tpl != null and values != null then
			for k, v in values do
				if not tpl.has_macro(k) or v == null then continue
				tpl.replace(k, v)
			end
		end
		html(tpl, status)
	end

	# Render `file` as a TemplateString with `values` and write it as html.
	fun template_string(tpl_string: nullable String, values: nullable Map[String, nullable Writable], status: nullable Int) do
		var tpl = new TemplateString(tpl_string or else "")
		template(tpl, values, status)
	end

	# Render `file` as a TemplateString with `values` and write it as html.
	fun template_file(file: String, values: nullable Map[String, nullable Writable], status: nullable Int) do
		var tpl = new TemplateString.from_file(file)
		template(tpl, values, status)
	end

	# Render `pug_string` with the command cli `pug` and use data from `json`
	#
	# See https://pugjs.org/api/getting-started.html for more details on pug.
	fun pug(pug_string: nullable String, json: nullable Serializable, status: nullable Int) do
		var process
		if json == null then
			process = new ProcessDuplex("pug", "-D")
		else
			process = new ProcessDuplex("pug", "-D", "-O", json.to_json)
		end
		var out = process.write_and_read(pug_string or else "")
		process.close
		html(out, status)
	end

	# Render `file` with the command cli `pug` and use data from `json`
	#
	# See https://pugjs.org/api/getting-started.html for more details on pug.
	fun pug_file(file: String, json: nullable Serializable, status: nullable Int) do
		pug(file.to_path.read_all, json, status)
	end
end
