# This file is part of NIT ( https://nitlanguage.org ).
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

# Web server to server generated files and modify the wiki from a web form
module wiki_edit

import nitcorn
import markdown
import md5
import config

intrude import wiki_html

# Page for editing markdown source
class WikiEditForm
	super WikiArticle

	# Part of the title before the name of the page
	var title_prefix: String

	# Markdown content, for previews
	redef var md

	# Custom HTML code, for forms and links
	var html: String

	init do content = (md or else "").md_to_html.to_s + html

	redef fun dir_href do return "edit" / href

	redef fun tpl_article
	do
		var s = super
		s.title = title_prefix + title
		return s
	end

	# Fill and return a new `HttpResponse` with this page content
	fun to_http_response: HttpResponse
	do
		var resp = new HttpResponse(200)
		resp.body = tpl_page
		return resp
	end
end

# Action to serve edit forms, show previews and apply changes
class EditAction
	super Action

	# Full public URL for the root of this wiki
	var root_url: String

	# Path to the wiki config
	var config_file_path: String

	# Configuration of the Wiki, loaded once
	var wiki_config = new WikiConfig(config_file_path) is lazy

	# Path to the root of the wiki
	private var wiki_root: String = config_file_path.dirname is lazy

	# Path to the source files
	private var source_dir: String = (wiki_root / wiki_config.source_dir).simplify_path + "/" is lazy

	# List of acceptable password to apply modifications
	#
	# If `null`, no password checks are applied and all modifications are accepted.
	var passwords: nullable Collection[String]

	# Reload the wiki instance with the latest changes
	fun wiki: Nitiwiki
	do
		var wiki = new Nitiwiki(wiki_config)
		wiki.parse
		return wiki
	end

	redef fun answer(http_request, turi)
	do
		var action = http_request.string_arg("action")
		var markdown = http_request.post_args.get_or_default("content", "")

		var file_path = turi.strip_leading_slash
		file_path = wiki_root / file_path

		var abs_file_path = file_path.to_absolute_path
		var abs_source_dir = source_dir.to_absolute_path

		if not abs_file_path.has_prefix(abs_source_dir) then
			# Attempting to access a file outside the source directory
			var entity = new WikiEditForm(wiki, turi.strip_leading_slash,
				"Access denied: ", "", "<p>Target outside of the source directory</p>")
			return entity.to_http_response
		end

		if action == "Submit" then
			var passwords = passwords
			var password = http_request.post_args.get_or_null("password")
			if passwords != null and (password == null or not passwords.has(password.md5)) then
				# Deny modification
				var entity = new WikiEditForm(wiki, turi.strip_leading_slash,
					"Changes rejected: ", "", "<p>Password invalid</p>")
				return entity.to_http_response
			end

			# Save markdown source
			markdown = markdown.replace('\r', "")
			markdown.write_to_file file_path

			# Update HTML files
			var wiki = wiki
			wiki.render

			var link
			if turi.has_prefix("/pages/") then
				link = root_url / turi.substring_from(7)
			else link = root_url / turi
			link = link.strip_extension(".md") + ".html"

			# Show confirmation
			var body = """
<p>Your edits were recorded and the file is updated: <a href="{{{link}}}">{{{link}}}</a></p>
"""
			var entity = new WikiEditForm(wiki, turi.strip_leading_slash, "Changes saved: ", "", body)
			return entity.to_http_response
		else
			# Show edit form, and preview when requested

			# When not in a preview, use the local content of the file
			if action != "Preview" then markdown = file_path.to_path.read_all

			var form = """
<form method="POST" action="/edit{{{turi}}}">
	You may edit the file. When you are done, click on "Submit".<br/>
	<textarea name="content" rows="30" cols="80">{{{markdown.html_escape}}}</textarea><br/>
"""
			if passwords != null then form += """
	Password: <input type="password" name="password"><br/>
"""
			form += """
	<input type="submit" name="action" value="Preview">
	<input type="submit" name="action" value="Submit">
</form>
"""

			# Show processed markdown only on preview
			if action != "Preview" then markdown = ""

			var entity = new WikiEditForm(wiki, turi.strip_leading_slash, "Edit source: ", markdown, form)
			return entity.to_http_response
		end
	end
end

redef class String
	private fun strip_leading_slash: String
	do
		if has_prefix("/") then return substring_from(1)
		return self
	end

	private fun to_absolute_path: String
	do
		return (getcwd / self).simplify_path
	end
end

var opt_config = new OptionString("Path to config.ini file", "-c", "--config")
var opt_host = new OptionString("Host to bind the server to", "--host")
var opt_port = new OptionInt("Port to bind the server to", 8000, "--port")
var opt_pass = new OptionString("Password file path", "--pass")

var config = new Config
config.add_option(opt_config, opt_host, opt_port, opt_pass)

var usage = new Buffer
usage.append "Usage: wiki_edit [OPTION]...\n"
usage.append "Web server to server generated files and modify the wiki from a web form."
config.tool_description = usage.write_to_string

config.parse_options(args)

if config.opt_help.value then
	config.usage
	exit 0
end

var config_file_path = opt_config.value or else "config.ini"
var iface = "{opt_host.value or else "localhost"}:{opt_port.value}"
var password_file_path = opt_pass.value or else "passwords"

# Load passwords for file
var passwords = if password_file_path.file_exists then
		password_file_path.to_path.read_lines
	else null

var vh = new VirtualHost(iface)

# Serve Markdown editing form
var action = new EditAction("http://" + iface, config_file_path, passwords)
vh.routes.add new Route("/edit", action)

# Serve the static (and generated) content
var path_to_public_files = config_file_path.dirname / action.wiki_config.out_dir
vh.routes.add new Route(null, new FileServer(path_to_public_files))

var factory = new HttpFactory.and_libevent
factory.config.virtual_hosts.add vh
factory.run
