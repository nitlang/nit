# This file is part of NIT ( http://www.nitlanguage.org ).
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

module pop_templates

import popcorn::pop_handlers
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
