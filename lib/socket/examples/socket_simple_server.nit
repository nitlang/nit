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

# Simple server example using a non-blocking `TCPServer`
module socket_simple_server

import socket

if args.is_empty then
	print "Usage : socket_simple_server <port>"
	exit 1
end

var port = args[0].to_i

# Open the listening socket
var socket = new TCPServer(port)
socket.listen 4
socket.blocking = false

print "Listening on port {socket.port}"

# Loop until a single client connects
var client: nullable TCPStream = null
while client == null do
	printn "."
	sys.nanosleep(0, 200000)

	client = socket.accept
end
print " Connected"

# Communicate
print client.read_line
client.write "Hello client!\n"
print client.read_line
client.write "Bye client!\n"

client.close
