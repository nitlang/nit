# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Lucas Bajolet <r4pass@hotmail.com>
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

# Sample module for a minimal chat server using Websockets on port 8088
module websocket_server is example

import websocket

var sock = new WebsocketServer.with_infos(8088, 1)

var msg: String

if sock.listener.closed then
	print sys.errno.strerror
end

var cli: WebsocketConnection

while not sock.closed do
	cli = sock.accept
	while cli.connected do
		if sys.stdin.poll_in then
			msg = gets
			printn "Sending message : {msg}"
			if msg == "disconnect" then cli.close
			cli.write(msg)
		end
		if cli.can_read(10) then
			msg = ""
			while cli.can_read(0) do msg += cli.read(100)
			if msg != "" then print msg
		end
	end
end
