# This file is part of NIT ( http://www.nitlanguage.org ).
#
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

# Core of the `nitcorn` project, provides `HttpFactory` and `Action`
module reactor

import more_collections

import vararg_routes
import http_request
import http_request_buffer
import http_response

# A server handling a single connection
class HttpServer
	super HTTPConnection

	# The associated `HttpFactory`
	var factory: HttpFactory

	private var parser = new HttpRequestParser is lazy

	# Human readable address of the remote client
	var remote_address: String

	redef fun read_http_request(str)
	do
		var request_object = parser.parse_http_request(str.to_s)
		if request_object != null then delegate_answer request_object
	end

	# Answer to a request
	fun delegate_answer(request: HttpRequest)
	do
		# Find target virtual host
		var virtual_host = null
		if request.header.keys.has("Host") then
			var host = request.header["Host"]
			if host.index_of(':') == -1 then host += ":80"
			for vh in factory.config.virtual_hosts do
				for i in vh.interfaces do if i.to_s == host then
					virtual_host = vh
					break label
				end
			end label
		end

		# Use default virtual host if none already responded
		if virtual_host == null then virtual_host = factory.config.default_virtual_host

		# Get a response from the virtual host
		var response
		if virtual_host != null then
			var route = virtual_host.routes[request.uri]
			if route != null then
				# include uri parameters in request
				request.uri_params = route.parse_params(request.uri)

				var handler = route.handler
				var root = route.resolve_path(request)
				var turi
				if root != null then
					turi = ("/" + request.uri.substring_from(root.length)).simplify_path
				else turi = request.uri

				# Delegate the responsibility to respond to the `Action`
				handler.prepare_respond_and_close(request, turi, self)
				return
			else response = new HttpResponse(404)
		else response = new HttpResponse(404)

		respond response
		close
	end

	# Send back `response` to the client
	fun respond(response: HttpResponse)
	do
		response.render.write_to(self)
		for path in response.files do write_file path
	end
end

redef abstract class Action
	# Prepare a `HttpResponse` destined to the client in response to the `request`
	#
	# `request` is fully formed request object with a reference to the session
	# if one already exists.
	#
	# `truncated_uri` is the ending of the full request URI, truncated from the route
	# leading to this `Action`.
	fun answer(request: HttpRequest, truncated_uri: String): HttpResponse is abstract

	# Full  to a `request` with sending the response and closing of the `http_server`
	#
	# Must users only need to implement `answer`, this method is for advanced use only.
	# It can be used to delay an answer until an event is raised or work is done on a different thread.
	#
	# By default this method calls `answer`, relays the response to `http_server.respond` and closes `http_server`.
	protected fun prepare_respond_and_close(request: HttpRequest, truncated_uri: String, http_server: HttpServer)
	do
		var response = answer(request, truncated_uri)
		http_server.respond response
		http_server.close
	end
end

# Factory to create `HttpServer` instances, and hold the libevent base handler
class HttpFactory
	super ConnectionFactory

	# Configuration of this server
	#
	# It should be populated after this object has instanciated
	var config = new ServerConfig.with_factory(self)

	# Instantiate a server and libvent
	#
	# You can use this to create the first `HttpFactory`, which is the most common.
	init and_libevent do init(new NativeEventBase)

	redef fun spawn_connection(buf_ev, address) do return new HttpServer(buf_ev, self, address)

	# Execute the main listening loop to accept connections
	#
	# After the loop ends, the underlying resources are freed.
	#
	# When the environment variable `NIT_TESTING` is set to `true`,
	# the loop is not executed but the resources are still freed.
	fun run
	do
		if "NIT_TESTING".environ != "true" then
			event_base.dispatch
		end

		event_base.free
	end
end

redef class ServerConfig
	# Handle to retreive the `HttpFactory` on config change
	private var factory: HttpFactory is noinit

	private init with_factory(factory: HttpFactory) do self.factory = factory
end

redef class Sys
	# Active listeners
	private var listeners = new HashMap2[String, Int, ConnectionListener]

	# Hosts needong each listener
	private var listeners_count = new HashMap2[String, Int, Int]

	# Activate a listener on `interfac` if there's not already one
	private fun listen_on(interfac: Interface, factory: HttpFactory)
	do
		if interfac.registered then return

		var name = interfac.name
		var port = interfac.port

		var listener = listeners[name, port]
		if listener == null then
			listener = factory.bind_tcp(name, port)
			if listener != null then
				sys.listeners[name, port] = listener
				listeners_count[name, port] = 1
			end
		else
			var value = listeners_count[name, port].as(not null)
			listeners_count[name, port] = value + 1
		end

		interfac.registered = true
	end

	# TODO close listener
end

redef class Interface
	# Has `self` been registered by `listen_on`?
	private var registered = false
end

redef class Interfaces
	redef fun add(e)
	do
		super
		var config = virtual_host.server_config
		if config != null then register_and_listen(e, config)
	end

	# Indirection to `listen_on` and check if this targets all addresses
	private fun register_and_listen(e: Interface, config: ServerConfig)
	do
		listen_on(e, config.factory)
		if e.name == "0.0.0.0" or e.name == "::0" then config.default_virtual_host = virtual_host
	end

	# TODO remove
end

redef class VirtualHosts
	redef fun add(e)
	do
		super
		for i in e.interfaces do e.interfaces.register_and_listen(i, config)
	end

	# TODO remove
end
