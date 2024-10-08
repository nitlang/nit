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

module libevent_test

import libevent
import pthreads

redef class Sys

	var testing_id: Int is lazy do
		var id = "NIT_TESTING_ID".environ
		return if id.is_empty then 0 else id.to_i
	end

	# Config for test sockets
	var tcp_addr = "localhost"
	var tcp_port: Int = 20000 + testing_id
	var unix_socket_path = "/tmp/libevent_test{testing_id}.sck"
end

class TestConnectionFactory
	super ConnectionFactory

	redef fun spawn_connection(buf, address)
	do
		print "[Server] New client: {address}"

		var conn = new TestConnection(buf)
		print "[Server] Write: Hi"
		conn.write "Hi\n"
		return conn
	end
end

class TestConnection
	super Connection

	redef fun read_callback(content)
	do
		0.2.sleep # Forcing the server output after the client output
		printn "[Server] Read: {content}"
	end
end

class ServerThread
	super Thread

	redef fun main
	do
		var event_base = new NativeEventBase
		var factory = new TestConnectionFactory(event_base)

		# Bind TCP socket
		factory.bind_tcp(tcp_addr, tcp_port)

		# Bind UNIX domain socket
		factory.bind_unix unix_socket_path

		event_base.dispatch
		event_base.free

		return null
	end
end

redef fun system(cmd)
do
	if testing_id == 0 then print "[Client] {cmd}"
	return super(cmd)
end

# First, launch a server in the background
var server = new ServerThread
server.start
0.1.sleep

# Test what should succeed
system "echo 'Hello TCP' | nc -N {tcp_addr} {tcp_port}"
system "echo 'Hello UNIX' | nc -NU {unix_socket_path}"

1.0.sleep
exit 0
