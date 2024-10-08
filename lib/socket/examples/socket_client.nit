# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2013 Matthieu Lucas <lucasmatthieu@gmail.com>
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

# Client sample using the Socket module which connect to the server sample.
module socket_client

import socket

if args.length < 2 then
	print "Usage : socket_client <host> <port>"
	exit 1
end

var address = args[0]
var port = args[1].to_i

# Open a conection with the server
var s = new TCPStream.connect(address, port)
printn "Connecting to {s.host}:{s.port} at {s.address}... "
print if s.connected then "Connected" else "Connection failed"

if s.connected then
	# Communicate
	s.write "Hello server!\n"
	print s.read_line
	s.write "Bye server!\n"
	print s.read_line

	s.close
end
