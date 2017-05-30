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

# Easy client/server logic for games and simple distributed applications
#
# Both `gamnit::client` and `gamnit::server` can be used separately or
# together by importing `gamnit::network`.
# Use both modules to create an program that discover local servers
# or create one if none is found:
#
# ~~~
# redef fun handshake_app_name do return "network_test"
#
# # Discover local servers
# var servers = discover_local_servers
# if servers.not_empty then
#     # Try to connect to the first local server
#     var server_info = servers.first
#     var server = new RemoteServer(server_info)
#
#     if not server.connect then
#         print_error "Failed to connect to {server_info.address}:{server_info.port}"
#     else if not server.handshake then
#         print_error "Failed handshake with {server_info.address}:{server_info.port}"
#     else
#         # Connected!
#         print "Connected to {server_info.address}:{server_info.port}"
#
#         # Write something and close connection
#         server.writer.serialize "hello server"
#         server.socket.as(not null).close
#     end
# else
#     # Create a local server
#     var connect_port = 33729
#     print "Launching server: connect on {connect_port}, discovery on {discovery_port}"
#     var server = new Server(connect_port)
#
#     # Don't loop if testing
#     if "NIT_TESTING".environ == "true" then exit 0
#
#     loop
#         # Respond to discovery requests
#         server.answer_discovery_requests
#
#         # Accept new clients
#         var new_clients = server.accept_clients
#         for client in new_clients do
#             # Read something and close connection
#             assert client.reader.deserialize == "hello server"
#             client.socket.close
#         end
#     end
# end
# ~~~
module network

import server
import client
