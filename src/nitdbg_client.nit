# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Lucas Bajolet <lucas.bajolet@gmail.com>
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

# Client for the nit debugger nitdbg-server
#
# Can send commands to the debugger
module nitdbg_client

import socket
import toolcontext

redef class ToolContext

	var opt_host_address: OptionString = new OptionString("Sets the host to debug from, use IPV4 only (Defaults to 127.0.0.1)", "--host")
	var opt_debug_port: OptionInt = new OptionInt("Sets the debug port (Defaults to 22125) - Must be contained between 0 and 65535", 22125, "--port")

	redef init
	do
		super
		self.option_context.add_option(self.opt_host_address)
		self.option_context.add_option(self.opt_debug_port)
	end

end

redef class String

	# Checks if the actual string is a valid IPv4 address
	# That is, if the pattern is int.int.int.int where each int must be between 0 and 255
	fun is_valid_ipv4_address: Bool
	do
		var components = self.split_with(".")
		if components.length != 4 then return false
		for i in components do
			if not i.is_numeric or not (i.to_i <= 255 and i.to_i >= 0) then return false
		end
		return true
	end

end

# Create a tool context to handle options and paths
var toolcontext = new ToolContext
toolcontext.tooldescription = "Usage: nitdbg_client [OPTION]...\nConnects to a nitdbg_server and controls it."
toolcontext.accept_no_arguments = true
toolcontext.process_options(args)

# If the port value is not an Int between 0 and 65535 (Mandatory according to the norm)
# Print the usage
if toolcontext.opt_debug_port.value < 0 or toolcontext.opt_debug_port.value > 65535 then
	toolcontext.option_context.usage
	return
end

var debug: TCPStream

# An IPV4 address does always complies to this form : x.x.x.x
# Where x is an integer whose value is >=0 and <= 255
if toolcontext.opt_host_address.value != null then
	if toolcontext.opt_host_address.value.is_valid_ipv4_address then
		debug = new TCPStream.connect(toolcontext.opt_host_address.value.as(not null), toolcontext.opt_debug_port.value)
	else
		toolcontext.option_context.usage
		return
	end
else
	debug = new TCPStream.connect("127.0.0.1", toolcontext.opt_debug_port.value)
end

print "[HOST ADDRESS] : {debug.address}"
print "[HOST] : {debug.host}"
print "[PORT] : {debug.port}"
print "Connecting ... {debug.connected}"

while debug.connected do
	if stdin.poll_in then debug.write_ln(gets)
	while debug.ready_to_read(50) do printn debug.read(200)
end

