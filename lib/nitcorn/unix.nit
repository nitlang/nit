# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2018 Matthieu Le Guellaut <leguellaut.matthieu@gmail.com>
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
module unix

intrude import nitcorn::reactor
import nitcorn::file_server
import nitcorn::sessions
import nitcorn::signal_handler
import core::file
import libevent
intrude import core::array

redef class Interface
	# Path of UNIX socket file
	var unix_path= "" is lazy, optional, writable
end

redef class Interfaces
	redef fun add(e)
	do
		super
		var config = virtual_host.server_config
		if config != null then sys.listen_on(e, config.factory)
	end
end

redef class VirtualHosts
	redef fun add(e)
	do
		var l = _length
		if _capacity <= l then
			enlarge(l + 1)
		end
		_length = l + 1
		_items.as(not null)[l] = e
		for i in e.interfaces do sys.listen_on(i, config.factory)
	end
end

redef class VirtualHost

	# Defines unix socket's file location
	fun unix(path:String)
	do
		for i in interfaces do	i.unix_path=path
	end
end


redef class Sys
	private var unix_listeners = new HashMap2[String,String, ConnectionListener]
	private var unix_listeners_count = new HashMap2[String, String, Int]

	# Activate unix and TCP listeners
	redef fun listen_on(interfac: Interface, factory: HttpFactory)
	do
		if interfac.registered then return

		var name = interfac.name
		var file = interfac.unix_path
		var port = interfac.port

		if file!="" then
			unix_listen(name, file, factory)
		else
			tcp_listen(name, port, factory)
		end
		interfac.registered = true
	end

	# Activate TCP listeners
	private fun tcp_listen(name: String, port: Int, factory: HttpFactory)
	do
		var listener = listeners[name, port]
		if listener == null then
			listener = factory.bind_to(name, port)
			if listener != null then
				sys.listeners[name, port] = listener
				listeners_count[name, port] = 1
			end
		else
			var value = listeners_count[name, port].as(not null)
			listeners_count[name, port] = value + 1
		end
	end

	# Activate UNIX listeners
	private fun unix_listen(name: String, file: String, factory: HttpFactory)
	do
		var listener = unix_listeners[name,file]
		if listener == null then
			listener = factory.bind_to_unix(name,file)
			if listener != null then
				sys.unix_listeners[name,file] = listener
				sys.unix_listeners_count[name,file] = 1
			end
		else
			var value = unix_listeners_count[name,file].as(not null)
			unix_listeners_count[name,file] = value + 1
		end
	end
end
