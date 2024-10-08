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

# Server sample using the Socket module which allow client to connect
module socket_server

import socket

if args.is_empty then
	print "Usage : socket_server <port>"
	return
end

var socket = new TCPServer(args[0].to_i)
socket.listen 1
print "[PORT] : {socket.port.to_s}"

var clients = new Array[TCPStream]
var max = socket
loop
	var fs = new SocketObserver.with_sets(true, true, true)
	fs.read_set.add socket

	for c in clients do fs.read_set.add c

	printn "."
	if fs.select(max, 4, 0) == 0 then
		print "Error occured in select {sys.errno.strerror}"
		break
	end

	if fs.read_set.has(socket) then
		var ns = socket.accept
		print "Accepting {ns.address} ... "
		print "[Message from {ns.address}] : {ns.read_line}"
		ns.write "Hello client.\n"
		print "[Message from {ns.address}] : {ns.read_line}"
		ns.write "Bye client.\n"
		print "Closing {ns.address} ..."
		ns.close
	end
end
