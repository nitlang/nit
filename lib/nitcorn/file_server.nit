# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Jean-Philippe Caissy <jpcaissy@piji.ca>
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Provides the `FileServer` action, which is a standard and minimal file server
module file_server

import reactor
import sessions
import media_types
import http_errors

redef class String
	# Returns a `String` copy of `self` without any of the prefixed '/'s
	#
	# Examples:
	#
	#     assert "/home/".strip_start_slashes == "home/"
	#     assert "////home/".strip_start_slashes == "home/"
	#     assert "../home/".strip_start_slashes == "../home/"
	fun strip_start_slashes: String
	do
		for i in chars.length.times do if chars[i] != '/' then return substring_from(i)
		return ""
	end
end

# A simple file server
class FileServer
	super Action

	# Root folder of `self` file system
	var root: String

	init
	do
		var root = self.root

		# Simplify the root path as each file requested will also be simplified
		root = root.simplify_path

		# Make sure the root ends with '/', this makes a difference in the security
		# check on each file access.
		root = root + "/"

		self.root = root
	end

	# Error page template for a given `code`
	fun error_page(code: Int): Writable do return new ErrorTemplate(code)

	# Header of each directory page
	var header: nullable Writable = null is writable

	# Custom JavaScript code added within a `<script>` block to each page
	var javascript_header: nullable Writable = null is writable

	# Caching attributes of served files, used as the `cache-control` field in response headers
	var cache_control = "public, max-age=360" is writable

	# Show directory listing?
	var show_directory_listing = true is writable

	# Default file returned when no static file matches the requested URI.
	#
	# If no `default_file` is provided, the FileServer responds 404 error to
	# unmatched queries.
	var default_file: nullable String = null is writable

	redef fun answer(request, turi)
	do
		var response

		var local_file = root.join_path(turi.strip_start_slashes)
		local_file = local_file.simplify_path

		# Is it reachable?
		#
		# This make sure that the requested file is within the root folder.
		if (local_file + "/").has_prefix(root) then
			# Does it exists?
			var file_stat = local_file.file_stat
			if file_stat != null then
				if file_stat.is_dir then
					# If we target a directory without an ending `/`,
					# redirect to the directory ending with `/`.
					var uri = request.uri
					if not uri.is_empty and uri.chars.last != '/' then
						return answer_redirection(request.uri + "/")
					end

					# Show index file instead of the directory listing
					# only if `index.html` or `index.htm` is available
					var index_file = local_file.join_path("index.html")
					if index_file.file_exists then
						local_file = index_file
					else
						index_file = local_file.join_path("index.htm")
						if index_file.file_exists then local_file = index_file
					end
				end

				file_stat = local_file.file_stat
				if show_directory_listing and file_stat != null and file_stat.is_dir then
					response = answer_directory_listing(request, turi, local_file)
				else if file_stat != null and not file_stat.is_dir then # It's a single file
					response = answer_file(local_file)
				else response = answer_default
			else response = answer_default
		else response = new HttpResponse(403)

		if response.status_code != 200 then
			var tmpl = error_page(response.status_code)
			if header != null and tmpl isa ErrorTemplate then tmpl.header = header
			response.body = tmpl
		end

		return response
	end

	# Answer the `default_file` if any.
	fun answer_default: HttpResponse do
		var default_file = self.default_file
		if default_file == null then
			return new HttpResponse(404)
		end

		var local_file = (root / default_file).simplify_path
		return answer_file(local_file)
	end

	# Answer a 303 redirection to `location`.
	fun answer_redirection(location: String): HttpResponse do
		var response = new HttpResponse(303)
		response.header["Location"] = location
		return response
	end

	# Build a reponse containing a single `local_file`.
	#
	# Returns a 404 error if local_file does not exists.
	fun answer_file(local_file: String): HttpResponse do
		if not local_file.file_exists then return new HttpResponse(404)

		var response = new HttpResponse(200)
		response.files.add local_file

		# Set Content-Type depending on the file extension
		var ext = local_file.file_extension
		if ext != null then
			var media_type = media_types[ext]
			if media_type != null then
				response.header["Content-Type"] = media_type
			else response.header["Content-Type"] = "application/octet-stream"
		end

		# Cache control
		response.header["cache-control"] = cache_control
		return response
	end

	# Answer with a directory listing for files within `local_files`.
	fun answer_directory_listing(request: HttpRequest, turi, local_file: String): HttpResponse do
		# Show the directory listing
		var title = turi
		var files = local_file.files

		alpha_comparator.sort files

		var links = new Array[String]
		if turi.length > 1 then
			var path = (request.uri + "/..").simplify_path
			links.add "<a href=\"{path}/\">..</a>"
		end
		for file in files do
			var local_path = local_file.join_path(file).simplify_path
			var web_path = file.simplify_path
			var file_stat = local_path.file_stat
			if file_stat != null and file_stat.is_dir then web_path = web_path + "/"
			links.add "<a href=\"{web_path}\">{file}</a>"
		end

		var header = self.header
		var header_code
		if header != null then
			header_code = header.write_to_string
		else header_code = ""

		var response = new HttpResponse(200)
		response.body = """
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<script>
		{{{javascript_header or else ""}}}
	</script>
	<title>{{{title}}}</title>
</head>
<body>
	{{{header_code}}}
	<div class="container">
		<h1>{{{title}}}</h1>
		<ul>
			<li>{{{links.join("</li>\n\t\t\t<li>")}}}</li>
		</ul>
	</div>
</body>
</html>"""

		response.header["Content-Type"] = media_types["html"].as(not null)
		return response
	end
end
