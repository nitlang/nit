# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Frederic Sevillano
# Copyright 2013 Jean-Philippe Caissy <jpcaissy@piji.ca>
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>
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

# Provides the `HttpRequest` class and services to create it
module http_request

import core
import serialization

# A request received over HTTP, is build by `HttpRequestParser`
class HttpRequest
	serialize

	private init is old_style_init do end

	# HTTP protocol version
	var http_version: String

	# Method of this request (GET or POST)
	var method: String

	# The full URL requested by the client (including the `query_string`)
	var url: String

	# The resource requested by the client (only the page, not the `query_string`)
	var uri: String

	# The string following `?` in the requested URL
	var query_string = ""

	# The header of this request
	var header = new HashMap[String, String]

	# The raw body of the request.
	var body = ""

	# The content of the cookie of this request
	var cookie = new HashMap[String, String]

	# The arguments passed with the GET method,
	var get_args = new HashMap[String, String]

	# The arguments passed with the POST method
	var post_args = new HashMap[String, String]

	# The arguments passed with the POST or GET method (with a priority on POST)
	var all_args = new HashMap[String, String]

	# Returns argument `arg_name` in the request as a String
	# or null if it was not found.
	# Also cleans the String by trimming it.
	# If the Strings happens to be empty after trimming,
	# the method will return `null`
	#
	# NOTE: Prioritizes POST before GET
	fun string_arg(arg_name: String): nullable String do
		if not all_args.has_key(arg_name) then return null
		var s = all_args[arg_name].trim
		if s.is_empty then return null
		return s
	end

	# Returns argument `arg_name` as an Int or `null` if not found or not an integer.
	#
	# NOTE: Prioritizes POST before GET
	fun int_arg(arg_name: String): nullable Int do
		if not all_args.has_key(arg_name) then return null
		var i = all_args[arg_name]
		if not i.is_int then return null
		return i.to_i
	end

	# Returns argument `arg_name` as a Bool or `null` if not found or not a boolean.
	#
	# NOTE: Prioritizes POST before GET
	fun bool_arg(arg_name: String): nullable Bool do
		if not all_args.has_key(arg_name) then return null
		var i = all_args[arg_name]
		if i == "true" then return true
		if i == "false" then return false
		return null
	end
end

# Utility class to parse a request string and build a `HttpRequest`
#
# The main method is `parse_http_request`.
class HttpRequestParser
	# The current `HttpRequest` under construction
	private var http_request: HttpRequest is noinit

	# Untreated body
	private var body = ""

	# Lines of the header
	private var header_fields = new Array[String]

	# Words of the first line
	private var first_line = new Array[String]

	# Parse the `first_line`, `header_fields` and `body` of `full_request`.
	fun parse_http_request(full_request: String): nullable HttpRequest
	do
		clear_data

		var http_request = new HttpRequest
		self.http_request = http_request

		segment_http_request(full_request)

		# Parse first line, looks like "GET dir/index.html?user=xymus HTTP/1.0"
		if first_line.length < 3 then
			print "HTTP error: request first line apprears invalid: {first_line}"
			return null
		end
		http_request.method = first_line[0]
		http_request.url = first_line[1]
		http_request.http_version = first_line[2]

		# GET args
		if http_request.url.has('?') then
			http_request.uri = first_line[1].substring(0, first_line[1].index_of('?'))
			http_request.query_string = first_line[1].substring_from(first_line[1].index_of('?')+1)

			var parse_url = parse_url
			http_request.get_args = parse_url
			http_request.all_args.add_all parse_url
		else
			http_request.uri = first_line[1]
		end

		# POST args
		if http_request.method == "POST" or http_request.method == "PUT" then
			http_request.body = body
			var lines = body.split_with('&')
			for line in lines do if not line.trim.is_empty then
				var parts = line.split_once_on('=')
				if parts.length > 1 then
					var decoded = parts[1].replace('+', " ").from_percent_encoding
					http_request.post_args[parts[0]] = decoded
					http_request.all_args[parts[0]] = decoded
				end
			end
		end

		# Headers
		for i in header_fields do
			var temp_field = i.split_with(": ")

			if temp_field.length == 2 then
				http_request.header[temp_field[0]] = temp_field[1]
			end
		end

		# Cookies
		if http_request.header.keys.has("Cookie") then
			var cookie = http_request.header["Cookie"]
			for couple in cookie.split_with(';') do
				var words = couple.trim.split_with('=')
				if words.length != 2 then continue
				http_request.cookie[words[0]] = words[1]
			end
		end

		return http_request
	end

	private fun clear_data
	do
		first_line.clear
		header_fields.clear
	end

	private fun segment_http_request(http_request: String): Bool
	do
		var header_end = http_request.search("\r\n\r\n")

		if header_end == null then
			header_fields = http_request.split_with("\r\n")
		else
			header_fields = http_request.substring(0, header_end.from).split_with("\r\n")
			body = http_request.substring(header_end.after, http_request.length-1)
		end

		# If a line of the http_request is long it may change line, it has " " at the
		# end to indicate this. This section turns them into 1 line.
		if header_fields.length > 1 and header_fields[0].has_suffix(" ") then
			var temp_req = header_fields[0].substring(0, header_fields[0].length-1) + header_fields[1]

			first_line  = temp_req.split_with(' ')
			header_fields.shift
			header_fields.shift

			if first_line.length != 3 then return false
		else
			first_line = header_fields[0].split_with(' ')
			header_fields.shift

			if first_line.length != 3 then return false
		end

		# Cut off the header in lines
		var pos = 0
		while pos < header_fields.length do
			if pos < header_fields.length-1 and header_fields[pos].has_suffix(" ") then
				header_fields[pos] = header_fields[pos].substring(0, header_fields[pos].length-1) + header_fields[pos+1]
				header_fields.remove_at(pos+1)
				pos = pos-1
			end
			pos = pos+1
		end

		return true
	end

	# Extract args from the URL
	private fun parse_url: HashMap[String, String]
	do
		var query_strings = new HashMap[String, String]

		if http_request.url.has('?') then
			var get_args = http_request.query_string.split_with("&")
			for param in get_args do
				var key_value = param.split_with("=")
				if key_value.length < 2 then continue

				var key = key_value[0].from_percent_encoding
				var value = key_value[1].from_percent_encoding
				query_strings[key] = value
			end
		end

		return query_strings
	end
end
