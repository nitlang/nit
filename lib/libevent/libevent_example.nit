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

# Minimal usage example of libevent
module libevent_example is example

import libevent

# Factory creating instances of `EchoConnection` to handle new connections
class MyFactory
	super ConnectionFactory

	redef fun spawn_connection(buf, address)
	do
		return new EchoConnection(buf)
	end
end

# Connection echoing data received from clients back at them
class EchoConnection
	super Connection

	redef fun read_callback(content)
	do
		print "Received: {content}"
		write content
	end
end

# Skip the actual execution when testing
if "NIT_TESTING".environ == "true" then exit 0

# Setup libevent system
var event_base = new NativeEventBase
var factory = new MyFactory(event_base)

# Open a TCP socket for listening
factory.bind_tcp("localhost", 8888)

# Open a UNIX domain socket for listening
factory.bind_unix("/tmp/my.sck")

# Launch event loop
event_base.dispatch

event_base.free
