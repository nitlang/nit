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

# Tnitter support for push notifications
module push

import nitcorn
import json

import model
import database

# Tnitter push notification interface
class TnitterPush
	super Action

	# Intercept the full answer to set aside the connection and complete it later
	redef fun prepare_respond_and_close(request, turi, connection)
	do
		push_connections.add connection
	end
end

redef class Sys
	# Connections left open for a push notification
	private var push_connections = new Array[HttpServer]
end

redef class DB
	# Reopen to trigger sending push notifications
	redef fun post(user, text)
	do
		super

		# Everyone gets the same response
		var posts = list_posts(0, 16)
		var response = new HttpResponse(400)
		response.body = posts.serialize_to_json

		for conn in push_connections do
			# Complete the answer to `conn`
			conn.respond response
			conn.close
		end

		# Clients need to open new connections
		push_connections.clear
	end
end
