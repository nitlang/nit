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

# Network debugger for a nit program, based on the original debugger
# Replaces access to stdin/stdout to send data on the network to the client concerned
module network_debugger

import socket
intrude import debugger

redef class ToolContext

	var opt_debug_port: OptionInt = new OptionInt("Sets the debug port (Defaults to 22125) - Must be contained between 0 and 65535", 22125, "--port")

	redef init
	do
		super
		self.option_context.add_option(self.opt_debug_port)
	end

end

redef class ModelBuilder
	fun run_debugger_network_mode(mainmodule: MModule, arguments: Array[String], port: Int)
	do
		var time0 = get_time
		self.toolcontext.info("*** START INTERPRETING ***", 1)

		var interpreter = new NetworkDebugger(self, mainmodule, arguments, port)

		init_naive_interpreter(interpreter, mainmodule)

		var time1 = get_time
		self.toolcontext.info("*** END INTERPRETING: {time1-time0} ***", 2)

		interpreter.disconnect_routine

		interpreter.ns.close
		interpreter.socket.close
	end
end

# Extends the debugger by adding new network capabilities for remote debugging
class NetworkDebugger
	super Debugger

	# Represents the connexion with a particular client (Actually the only one accepted at the moment)
	private var ns: Socket

	# Socket for the server, supposed to listen for incoming request from a client
	private var socket: Socket

	# Initializes the debugger, waits for a client to connect
	# Then starts debugging as usual
	init(modelbuilder: ModelBuilder, mainmodule: MModule, arguments: Array[String], port: Int)
	do
		print "Listening on port {port}"

		socket = new Socket.stream_with_port(port)

		socket.bind
		socket.listen(1)

		ns = socket.accept
		
		socket.close

		print "Client connected"

		stdin.connection = ns

		if stdout isa Stdout then
			(stdout.as(Stdout)).connection = ns
		else
			ns.close
			abort
		end

		super
	end

	# Provokes the disconnection of the client
	# Used when debugging is over
	fun disconnect_routine
	do
		print "DBG DONE WORK ON SELF"

		var cliOverResp = ""

		while cliOverResp != "CLIENT DBG DONE ACK" do
			cliOverResp = gets
		end
	end

	# Checks on every call if the client has sent a command before continuing debugging
	redef fun stmt(n)
	do
		if stdin.poll_in then
			var command = gets
			if command == "stop" then
				n.debug("Stopped by client")
				while process_debug_command(gets) do end
			else
				process_debug_command(command)
			end
		end

		super(n)
	end

end

redef class ANode

	# Breaks automatically when encountering an error
	# Permits the injunction of commands before crashing
	# Disconnects from the client before crashing
	redef private fun fatal(v: NaiveInterpreter, message: String)
	do
		if v isa Debugger then
			print "An error was encountered, the program will stop now."
			self.debug(message)
			while v.process_debug_command(gets) do end
		end

		if v isa NetworkDebugger then
			v.disconnect_routine
			stdin.connection.close
		end

		super
	end
end

# Replaces Stdin to read on the network
redef class Stdin

	# Represents the connection with a client
	var connection: nullable Socket = null

	# Used to store data that has been read from the connection
	var buf: Buffer = new Buffer
	var buf_pos: Int = 0

	# Checks if data is available for reading
	redef fun poll_in
	do
		return connection.ready_to_read(0)
	end

	# Reads the whole content of the buffer
	# Blocking if the buffer is empty
	redef fun read_all
	do
		var loc_buf = new Buffer
		if connection.ready_to_read(0) then buf.append(connection.read)
		for i in [buf_pos .. buf.length-1] do loc_buf.add(buf[i])
		buf.clear
		buf_pos = 0
		return loc_buf.to_s
	end

	# Reads a single char on the incoming buffer
	# If the buffer is empty, the call is blocking
	redef fun read_char
	do
		if connection.ready_to_read(0) then buf.append(connection.read)
		if buf_pos >= buf.length then
			buf.clear
			buf_pos = 0
			#Blocking call
			buf.append(connection.read)
		end
		buf_pos += 1
		return buf[buf_pos-1].ascii
	end

	# Reads a line on the network if available
	# Stops at the first encounter of a \n character
	# If the buffer is empty, the read_line call is blocking
	redef fun read_line
	do
		var line_buf = new Buffer
		if connection.ready_to_read(0) then buf.append(connection.read)
		var has_found_eol: Bool = false
		loop
			if buf_pos >= buf.length then
				buf.clear
				buf_pos = 0
				# Blocking call
				buf.append(connection.read)
			end
			buf_pos += 1
			if buf[buf_pos-1] == '\n' then break
			line_buf.add(buf[buf_pos-1])
		end
		return line_buf.to_s
	end
end

# Replaces Stdout to write on the network
redef class Stdout

	# Connection with the client object
	var connection: nullable Socket = null

	# Writes a string on the network if available, else
	# it is written in the standard output (Terminal)
	redef fun write(s)
	do
		if connection != null then
			connection.write(s)
		else
			super
		end
	end

end
