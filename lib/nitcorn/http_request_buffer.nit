# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Http request parsing for buffered inputs.
module http_request_buffer

intrude import libevent

# Connection rebuilding HTTP requests
#
# Subclass should refine `read_full_request` and avoid `read_callback`.
class HTTPConnection
	super Connection

	private var in_request = false
	private var in_header = false
	private var in_body = false
	private var current_header = new Array[Writable]
	private var current_body = new Array[Writable]
	private var content_length = 0
	private var current_length = 0

	# FIXME will not work if the header/body delimiter falls between two watermarks windows.
	redef fun read_callback(str)
	do
		# is this the start of a request?
		if not in_request then parse_start

		var body: String
		# parsing header
		if in_header then
			body = parse_header(str)
		else
			body = str
		end

		# parsing body
		if in_body then parse_body(body)
	end

	# Callback when a full HTTP request is received
	fun read_http_request(str: String) do end

	# Prepare for a new request
	private fun parse_start do
		in_request = true
		# reset values
		current_header.clear
		current_body.clear
		current_length = 0
		content_length = 0
		# next step is to find the header part
		in_header = true
		in_body = false
	end

	# We are receiving the header of a request
	#
	# Return parsed body found in header window
	private fun parse_header(str: String): String do
		# split in CRLF
		var parts = str.split("\r\n\r\n")
		# first part go in the header
		current_header.add parts.shift

		# if there is more part we are done with headers
		if not parts.is_empty then
			# get content-length
			parse_content_length current_header.join
			# next step if to parse body
			in_header = false
			in_body = true
			# return rest of the body
			return parts.join("\r\n")
		end
		return ""
	end

	# Extract and set `content_length` from header.
	private fun parse_content_length(head: String) do
		var hlines = head.split("\r\n")
		for hline in hlines do
			var hparts = hline.split(": ")
			if hparts.first == "Content-Length" then
				content_length = hparts[1].to_i
			end
		end
	end

	# We are receiving body parts.
	private fun parse_body(str: String) do
		current_length += str.byte_length
		current_body.add str
		if current_length >= content_length then
			parse_end
		end
	end

	# We have reached the end of the body
	private fun parse_end do
		var res = new FlatBuffer.with_capacity(content_length)
		for ch in current_header do res.append ch.write_to_string
		res.append "\r\n\r\n"
		for cb in current_body do res.append cb.write_to_string
		read_http_request res.to_s
		in_request = false
	end
end
