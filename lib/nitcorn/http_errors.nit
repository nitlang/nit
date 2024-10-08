# This file is part of NIT ( https://nitlanguage.org ).
#
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

# Offers `ErrorTemplate` to display error pages
module http_errors

import template

import http_response

# A basic error page for the HTTP error `code`
class ErrorTemplate
	super Template

	# HTTP error code
	var code: Int is writable

	# Header on this page
	var header: nullable Writable = null is writable

	# Body to show with this page
	var body: nullable Writable = null is writable

	redef fun rendering
	do
		var code_message = http_status_codes[code]
		var message
		if code_message != null then
			message = "Error {code}: {code_message}"
		else message = "Error {code}"

		add """
<!DOCTYPE html>
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<link rel="stylesheet" href="//maxcdn.bootstrapcdn.com/bootstrap/3.2.0/css/bootstrap.min.css">
	<title>"""
	add message
	add """
	</title>
</head>
<body>"""

		var header = header
		if header != null then add header

		add """
	<div class="container">
		<h1>"""
		add message
		add "</h1>"

		var body = body
		if body != null then add body

		add """
	</div>
</body>
</html>"""
	end

	redef fun to_s do return write_to_string
end
