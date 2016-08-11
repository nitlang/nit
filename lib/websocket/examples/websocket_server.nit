# This file is part of NIT ( http://www.nitlanguage.org ).
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
module websocket_server

import websocket

var sock = new TCPServer(8088)
sock.blocking = true
sock.listen(5)

var msg: String

if sock.closed then
	print sys.errno.strerror
end

while not sock.closed do
	0.1.sleep
	var cli = sock.accept
	print "Has connection ? {cli != null}"
	if cli == null then continue
	var wscli = new WebsocketConnection(cli)
	while not wscli.eof do
		0.0166.sleep
		if sys.stdin.ready then
			msg = gets
			if msg == "disconnect" then wscli.close
			wscli.write(msg)
		end
		if wscli.ready(0) then
			msg = ""
			while wscli.ready(0) do msg += wscli.read(100)
			if msg != "" then print msg
		end
	end
end
