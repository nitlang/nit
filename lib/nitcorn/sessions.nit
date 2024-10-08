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

# Automated session management
#
# When parsing a request, this module associate a pre-existing session
# to the request if there is one. It will also send the required cookie
# with the response if a session has been associated to the response object.
module sessions

import md5

import server_config
import http_request
import http_response
import token

# A server side session
class Session

	# Hashed id used both client and server side to identify this `Session`
	var id_hash: String is noinit

	init
	do
		loop
			var token = generate_token
			if sys.sessions.keys.has(token) then continue

			sys.sessions[token] = self
			self.id_hash = token
			break
		end
	end
end

redef class Sys
	# Active sessions
	var sessions = new HashMap[String, Session]
end

redef class HttpResponse
	# A `Session` to associate with a response
	var session: nullable Session = null is writable

	redef fun finalize
	do
		super

		var session = self.session
		if session != null then
			header["Set-Cookie"] = "nitcorn_session={session.id_hash}; HttpOnly"
		else
			# Make sure there are no cookie left client side
			header["Set-Cookie"] = "nitcorn_session=; HttpOnly; expires=Thu, 01 Jan 1970 00:00:00 GMT"
		end
	end
end

redef class HttpRequest
	# The `Session` associated to this request
	var session: nullable Session = null is writable
end

redef class HttpRequestParser
	redef fun parse_http_request(text)
	do
		var request = super
		if request != null then
			if request.cookie.keys.has("nitcorn_session") then
				var id_hash = request.cookie["nitcorn_session"]

				if sys.sessions.keys.has(id_hash) then
					# Restore the session
					request.session = sys.sessions[id_hash]
				end
			end
		end
		return request
	end
end
