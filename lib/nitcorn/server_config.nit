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

# Classes and services to configure the server
#
# The classes of interest are `VirtualHost`, `Interface`, `Route` and `Action`
module server_config

# Server instance configuration
class ServerConfig
	# `VirtualHost`s served by this server
	var virtual_hosts = new VirtualHosts(self)

	# Default `VirtualHost` to respond to requests not handled by any of the `virtual_hosts`
	var default_virtual_host: nullable VirtualHost = null is writable
end

# A `VirtualHost` configuration
class VirtualHost
	# Back reference to the associated server configuration
	var server_config: nullable ServerConfig = null

	# Interfaces on which `self` is active
	var interfaces = new Interfaces(self)

	# Routes and thus `Action`s active on `self`
	var routes = new Routes(self)

	# Create a virtual host from interfaces as strings
	init(interfaces: String ...) is old_style_init do
		for i in interfaces do self.interfaces.add_from_string i
	end
end

# An interface composed of a `name`:`port`
class Interface
	# Name of this interface (such as "localhost", "example.org", etc.)
	var name: String

	# The port to open
	var port: Int

	redef fun to_s do return "{name}:{port}"
end

# A route to an `Action` according to a `path`
class Route
	# Path to this action present in the URI
	var path: nullable String

	init
	do
		var path = path
		if path != null then self.path = "/" / path
	end

	# `Action` to activate when this route is traveled
	var handler: Action
end

# Action executed to answer a request
abstract class Action
end

### Intelligent lists ###

# A list of interfaces with dynamic port listeners
class Interfaces
	super Array[Interface]

	# Back reference to the associtated `VirtualHost`
	var virtual_host: VirtualHost

	# Add an `Interface` described by `text` formatted as `interface.name.com:port`
	fun add_from_string(text: String)
	do
		assert text.chars.count(':') <= 1

		var words = text.split(':')
		var name = words[0]
		var port
		if words.length > 1 then
			port = words[1].to_i
		else port = 80

		add new Interface(name, port)
	end
end

# A list of virtual hosts with dynamic port listeners
class VirtualHosts
	super Array[VirtualHost]

	# Back reference to the server config
	var config: ServerConfig

	redef fun add(e)
	do
		super

		e.server_config = config
	end
end

# A list of routes with the search method `[]`
class Routes
	# Back reference to the config of the virtual host
	var config: VirtualHost

	# Internal routes array.
	protected var routes = new Array[Route]

	# Add `e` to `self`
	fun add(e: Route) do routes.add e

	# Remove `e` from `self`
	fun remove(e: Route) do routes.remove e

	# Get the first `Route` than has `key` as prefix to its path
	fun [](key: String): nullable Route
	do
		for route in routes do
			var path = route.path
			if path == null or key.has_prefix(path) then return route
		end
		return null
	end
end
