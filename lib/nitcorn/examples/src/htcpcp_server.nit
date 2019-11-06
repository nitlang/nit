# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Guilherme Mansur<guilhermerpmansur@gmail.com>
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
#
# Hyper Text Coffee Pot Control Protocol

# A server that implements HTCPCP. At the moment there are no additions.
module htcpcp_server is example

import nitcorn

# Nitcorn Action used to answer requests.
class HTCPCPAction
	super Action

	# Brewing status.
	var brewing = false

	# Teapot status.
	var is_teapot = false

	redef fun answer(http_request, turi) do
		var message: String
		var method = http_request.method
		var response: HttpResponse

		if is_teapot then
			response = new HttpResponse(418)
			response.body = "I'm a teapot!\n"
			response.header["Content-Type"] = "text"
			return response
		end

		if method == "POST" or method == "BREW" then
			if brewing then
				message = "Pot Busy"
				response = new HttpResponse(400)
			else
				message = "Brewing a new pot of coffee\n"
				brewing = true
				response = new HttpResponse(200)
			end
		else if method == "WHEN" then
			if brewing then
				message = "Stopped adding milk, your coffee is ready!\n"
				brewing = false
				response = new HttpResponse(200)
			else
				message = "There is no coffee brewing!\n"
				response = new HttpResponse(405)
			end
		else if method == "PROPFIND" or method == "GET" then
			if brewing then
				message = "The pot is busy\n"
			else
				message = "The pot is ready to brew more coffee\n"
			end
			response = new HttpResponse(200)
		else
			message = "Unknown method: {method}"
			brewing = false
			response = new HttpResponse(405)
		end

		response.header["Content-Type"] = "text"
		response.body = message

		return response
	end
end

# Nitcorn server.
class HTCPCServer

	# Port to listen to.
	var port: Int

	# Start listening.
	fun run do
		var vh = new VirtualHost("localhost:{port}")
		vh.routes.add new Route("/", new HTCPCPAction)
		var factory = new HttpFactory.and_libevent
		factory.config.virtual_hosts.add vh
		print "Nit4Coffee is now running at port: {port}"
		factory.run
	end
end

var server = new HTCPCServer(1227)

server.run
