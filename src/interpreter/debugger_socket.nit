# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Johan Kayser <kayser.johan@gmail.com>
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

# Debugging of a nit program using sockets.
module debugger_socket

intrude import debugger
import websocket

redef class ToolContext
	# --socket
	var opt_socket_mode = new OptionBool("Launches the target program with raw output on the network via sockets", "--socket")

	# --websocket
	var opt_websocket_mode = new OptionBool("Launches the target program with output on the network via websockets", "--websocket")

	# --port
	var opt_debug_port: OptionInt = new OptionInt("Sets the debug port (Defaults to 22125) - Must be contained between 0 and 65535", 22125, "--port")

	redef init
	do
		super
		self.option_context.add_option(self.opt_socket_mode)
		self.option_context.add_option(self.opt_websocket_mode)
		self.option_context.add_option(self.opt_debug_port)
	end
end

redef class ModelBuilder
	# Execute the program from the entry point (Sys::main) of the `mainmodule`
	# `arguments` are the command-line arguments in order
	# REQUIRE that:
	#   1. the AST is fully loaded.
	#   2. the model is fully built.
	#   3. the instructions are fully analysed.
	redef fun run_debugger(mainmodule: MModule, arguments: Array[String])
	do
		var time0 = get_time
		self.toolcontext.info("*** START INTERPRETING ***", 1)

		var interpreter = new Debugger(self, mainmodule, arguments)

		set_stdstreams

		interpreter.start(mainmodule)

		close_stdstreams

		var time1 = get_time
		self.toolcontext.info("*** END INTERPRETING: {time1-time0} ***", 2)
	end

	redef fun run_debugger_autorun(mainmodule: MModule, arguments: Array[String])
	do
		var time0 = get_time
		self.toolcontext.info("*** START INTERPRETING ***", 1)

		var interpreter = new Debugger(self, mainmodule, arguments)
		interpreter.autocontinue = true

		set_stdstreams

		interpreter.start(mainmodule)

		close_stdstreams

		var time1 = get_time
		self.toolcontext.info("*** END INTERPRETING: {time1-time0} ***", 2)
	end

	redef fun run_naive_interpreter(mmod, args)
	do
		set_stdstreams
		super
	end

	fun set_stdstreams
	do
		if self.toolcontext.opt_socket_mode.value then
			var sock = new TCPServer(toolcontext.opt_debug_port.value)
			sock.listen 1
			var ns = sock.accept
			assert ns != null
			sock.close
			sys.set_io(ns,ns,ns)
		else if self.toolcontext.opt_websocket_mode.value then
			var websock = new WebSocketListener(toolcontext.opt_debug_port.value, 1)
			var cli = websock.accept
			websock.close
			sys.set_io(cli,cli,cli)
		end
	end

	fun close_stdstreams
	do
		if sys.stdin isa TCPStream then
			sys.stdin.close
			sys.stdout.close
			sys.stderr.close
		end
	end
end

redef class Sys
	private fun set_io(istream: PollableReader, ostream: Writer, errstream: Writer)
	do
		self.stdin = istream
		self.stdout = ostream
		self.stderr = errstream
	end
end
