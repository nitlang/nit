# This file is part of NIT ( http://www.nitlanguage.org ).
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

# A server side session
class Session

	# Hashed id used both client and server side to identify this `Session`
	var id_hash: String

	init
	do
		self.id_hash = sys.next_session_hash
		sys.sessions[self.id_hash] = self
	end
end

redef class Sys
	# Active sessions
	var sessions = new HashMap[String, Session]

	# Get the next session hash available, and increment the session id cache
	fun next_session_hash: String
	do
		var id = next_session_id_cache
		# On firt evocation, seed the pseudo random number generator
		if id == null then
			srand
			id = 1000000.rand
		end

		next_session_id_cache = id + 1

		return id.to_id_hash
	end

	private var next_session_id_cache: nullable Int = null

	# Salt used to hash the session id
	protected var session_salt = "Default unitcorn session salt"
end

redef class Int
	# Salt and hash and id to use as `Session.id_hash`
	private fun to_id_hash: String do return (self.to_s+sys.session_salt).md5
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
	var session: nullable Session = null
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
