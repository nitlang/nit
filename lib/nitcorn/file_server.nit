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

	# Root of `self` file system
	var root: String

	# Error page template for a given `code`
	fun error_page(code: Int): Streamable do return new ErrorTemplate(code)

	# Header of each directory page
	var header: nullable Streamable = null is writable

	redef fun answer(request, turi)
	do
		var response

		var local_file = root.join_path(turi.strip_start_slashes)
		local_file = local_file.simplify_path

		# HACK
		if turi == "/" then local_file = root

		# Is it reachable?
		if local_file.has_prefix(root) then
			# Does it exists?
			if local_file.file_exists then
				response = new HttpResponse(200)

				if local_file.file_stat.is_dir then
					# Show index.html instead of the directory listing
					var index_file = local_file.join_path("index.html")
					if index_file.file_exists then
						local_file = index_file
					else
						index_file = local_file.join_path("index.htm")
						if index_file.file_exists then local_file = index_file
					end
				end

				if local_file.file_stat.is_dir then
					# Show the directory listing
					var title = turi
					var files = local_file.files

					var links = new Array[String]
					if local_file.length > 1 then
						# The extra / is a hack
						var path = "/" + (turi + "/..").simplify_path
						links.add "<a href=\"{path}\">..</a>"
					end
					for file in files do
						var path = (turi + "/" + file).simplify_path
						links.add "<a href=\"{path}\">{file}</a>"
					end

					var header = self.header
					var header_code
					if header != null then
						header_code = header.write_to_string
					else header_code = ""

					response.body = """
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
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
				else
					# It's a single file
					var file = new IFStream.open(local_file)
					response.body = file.read_all

					var ext = local_file.file_extension
					if ext != null then
						var media_type = media_types[ext]
						if media_type != null then response.header["Content-Type"] = media_type
					end

					file.close
				end

			else response = new HttpResponse(404)
		else response = new HttpResponse(403)

		if response.status_code != 200 then
			var tmpl = error_page(response.status_code)
			if header != null and tmpl isa ErrorTemplate then tmpl.header = header
			response.body = tmpl.to_s
		end

		return response
	end
end
