# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>
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

# Application server abstraction on top of nitcorn.
module popcorn

import nitcorn
import pop_tasks
import pop_sessions
import pop_logging
intrude import pop_handlers

# App acts like a wrapper around a nitcorn `Action`.
redef class App
	super Action

	# Do not show anything on console
	var quiet = false is writable

	# Start listening on `host:port`.
	fun listen(host: String, port: Int) do
		var iface = "{host}:{port}"
		var vh = new VirtualHost(iface)

		vh.routes.add new Route("/", self)

		var fac = new HttpFactory.and_libevent
		fac.config.virtual_hosts.add vh

		if not quiet then
			print "Launching server on http://{iface}/"
		end
		fac.run
	end

	# Handle request from nitcorn
	redef fun answer(req, uri) do
		uri = uri.simplify_path
		var res = new HttpResponse(404)
		for route, handler in pre_handlers do
			handler.handle(route, uri, req, res)
		end
		for route, handler in handlers do
			handler.handle(route, uri, req, res)
			if res.sent then break
		end
		if not res.sent then
			res.send(error_tpl(res.status_code, res.status_message), 404)
		end
		for route, handler in post_handlers do
			handler.handle(route, uri, req, res)
		end
		res.session = req.session
		return res
	end

	#
	fun error_tpl(status: Int, message: nullable String): Template do
		return new ErrorTpl(status, message)
	end
end

#
class ErrorTpl
	super Template

	#
	var status: Int

	#
	var message: nullable String

	redef fun rendering do add """
		<!DOCTYPE html>
		<html>
		<head>
			<meta charset="utf-8">
			<title>{{{message or else status}}}</title>
		</head>
		<body>
		<h1>{{{status}}} {{{message or else ""}}}</h1>
		</body>
		</html>"""

end
