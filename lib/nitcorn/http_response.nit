# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Frederic Sevillano
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

# Provides the `HttpResponse` class and `http_status_codes`
module http_response

import serialization
private import template

# A response to send over HTTP
class HttpResponse
	serialize

	# HTTP protocol version
	var http_version = "HTTP/1.0" is writable

	# Status code of this response (200, 404, etc.)
	var status_code: Int is writable

	# Return the message associated to `status_code`
	fun status_message: nullable String do return http_status_codes[status_code]

	# Headers of this response as a `Map`
	var header = new HashMap[String, String]

	# Body of this response
	var body: Writable = "" is writable

	# Files appended after `body`
	var files = new Array[String]

	# Finalize this response before sending it over HTTP
	fun finalize
	do
		# Set the content length if not already set
		if not header.keys.has("Content-Length") then
			# Size of the body
			var len
			var body = self.body
			if body isa Text then
				len = body.byte_length
			else if body isa Bytes then
				len = body.length
			else
				# We need the length, but there is no length in a writable.
				# So just render it as a bytes then measure :/
				body = body.write_to_bytes
				len = body.length
				# Keep the body as bytes since we have it
				self.body = body
			end

			# Size of included files
			for path in files do
				# TODO handle these error cases elsewhere, an error here will result in an invalid response
				if not path.file_exists then
					print_error "File does not exists at '{path}'"
					continue
				end

				var stat = path.file_stat
				if stat == null then
					print_error "Failed to stat file at '{path}'"
					continue
				end

				len += stat.size
			end

			# Set header
			header["Content-Length"] = len.to_s
		end

		# Set server ID
		if not header.keys.has("Server") then header["Server"] = "nitcorn"
	end

	# Get this reponse as a string according to HTTP protocol
	fun render: Writable
	do
		finalize

		var buf = new Template
		buf.add("{http_version} {status_code} {status_message or else ""}\r\n")
		for key, value in header do
			buf.add("{key}: {value}\r\n")
		end
		buf.add("\r\n")
		buf.add body
		return buf
	end
end

# Helper class to associate HTTP status code to their message
#
# You probably want the default instance available as the top-level method
# `http_status_codes`.
class HttpStatusCodes

	# All know code and their message
	var codes = new HashMap[Int, String]

	# Init the status `codes` list.
	protected init is old_style_init do insert_status_codes

	# Get the message associated to the status `code`, return `null` in unknown
	fun [](code: Int): nullable String
	do
		if codes.keys.has(code) then
			return codes[code]
		else return null
	end

	private fun insert_status_codes
	do
		codes[100] = "Continue"
		codes[101] = "Switching Protocols"
		codes[200] = "OK"
		codes[201] = "Created"
		codes[202] = "Accepted"
		codes[203] = "Non-Authoritative Information"
		codes[204] = "No Content"
		codes[205] = "Reset Content"
		codes[206] = "Partial Content"
		codes[300] = "Multiple Choices"
		codes[301] = "Moved Permanently"
		codes[302] = "Found"
		codes[303] = "See Other"
		codes[304] = "Not Modified"
		codes[305] = "Use Proxy"
		codes[307] = "Temporary Redirect"
		codes[400] = "Bad Request"
		codes[401] = "Unauthorized"
		codes[402] = "Payment Requred"
		codes[403] = "Forbidden"
		codes[404] = "Not Found"
		codes[405] = "Method Not Allowed"
		codes[406] = "Not Acceptable"
		codes[407] = "Proxy Authentication Required"
		codes[408] = "Request Timeout"
		codes[409] = "Conflict"
		codes[410] = "Gone"
		codes[411] = "Length Required"
		codes[412] = "Precondition Failed"
		codes[413] = "Request Entity Too Large"
		codes[414] = "Request-URI Too Long"
		codes[415] = "Unsupported Media Type"
		codes[416] = "Requested Range Not Satisfiable"
		codes[417] = "Expectation Failed"
		codes[500] = "Internal Server Error"
		codes[501] = "Not Implemented"
		codes[502] = "Bad Gateway"
		codes[503] = "Service Unavailable"
		codes[504] = "Gateway Timeout"
		codes[505] = "HTTP Version Not Supported"
	end
end

# Get the default instance of `HttpStatusCodes`
fun http_status_codes: HttpStatusCodes do return once new HttpStatusCodes
