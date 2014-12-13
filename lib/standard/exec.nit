# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
# Copyright 2008 Floréal Morandat <morandat@lirmm.fr>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Invocation and management of operating system sub-processes.
# Standard input and output can be handled through streams.
module exec

import file

# Simple sub-process
class Process
	# The pid of the process
	fun id: Int do return data.id

	# Is the process finished?
	fun is_finished: Bool do return data.is_finished

	# Wait the termination of the process
	fun wait
	do
		data.wait
		assert is_finished
	end

	# The status once finished
	fun status: Int
	do
		assert is_finished
		return data.status
	end

	# The executable run
	# Is a filepath, or a executable found in PATH
	var command: String

	# The arguments of the command
	# Starts with the first real arguments---ie. does not include the progname (`argv[0]`, in C)
	var arguments: nullable Array[String]

	# Launch a command with some arguments
	init(command: String, arguments: String...) is old_style_init do
		self.command = command
		self.arguments = arguments
		execute
	end

	# Launch a simple command with arguments passed as an array
	init from_a(command: String, arguments: nullable Array[String])
	do
		self.command = command
		self.arguments = arguments
		execute
	end

	# flags used internally to know whith pipe to open
	private fun pipeflags: Int do return 0

	# Internal code to handle execution
	protected fun execute
	do
		# The pass the arguments as a big C string where elements are separated with '\0'
		var args = new FlatBuffer
		var l = 1 # Number of elements in args
		args.append(command)
		if arguments != null then
			for a in arguments do
				args.add('\0')
				#a.output_class_name
				args.append(a)
			end
			l += arguments.length
		end
		data = basic_exec_execute(command.to_cstring, args.to_s.to_cstring, l, pipeflags)
	end

	private var data: NativeProcess
	private fun basic_exec_execute(p: NativeString, av: NativeString, ac: Int, pf: Int): NativeProcess is extern "exec_Process_Process_basic_exec_execute_4"
end

# stdout of the process is readable
class IProcess
	super Process
	super IStream

	# File Descriptor used for the input.
	var stream_in: IFStream is noinit

	redef fun close do stream_in.close

	redef fun read_char do return stream_in.read_char

	redef fun eof do return stream_in.eof

	redef fun pipeflags do return 2

	redef fun execute
	do
		super
		stream_in = new IFStream.from_fd(data.out_fd)
	end
end

# stdin of the process is writable
class OProcess
	super Process
	super OStream

	# File Descriptor used for the output.
	var stream_out: OStream is noinit

	redef fun close do stream_out.close

	redef fun is_writable do return stream_out.is_writable

	redef fun write(s) do stream_out.write(s)

	redef fun pipeflags do return 1

	redef fun execute
	do
		super
		stream_out = new OFStream.from_fd(data.in_fd)
	end
end

# stdin and stdout are both accessible
class IOProcess
	super IProcess
	super OProcess
	super IOStream

	redef fun close
	do
		stream_in.close
		stream_out.close
	end

	redef fun pipeflags do return 3

	redef fun execute
	do
		super
	end
end

redef class Sys
	# Execute a shell command and return its error code
	fun system(command: String): Int
	do
		return command.to_cstring.system
	end
end

redef class NativeString
	# Execute self as a shell command.
	#
	# See the posix function system(3).
	fun system: Int is extern "string_NativeString_NativeString_system_0"
end

private extern class NativeProcess
	fun id: Int is extern "exec_NativeProcess_NativeProcess_id_0"
	fun is_finished: Bool is extern "exec_NativeProcess_NativeProcess_is_finished_0"
	fun status: Int is extern "exec_NativeProcess_NativeProcess_status_0"
	fun wait is extern "exec_NativeProcess_NativeProcess_wait_0"

	fun in_fd: Int is extern "exec_NativeProcess_NativeProcess_in_fd_0"
	fun out_fd: Int is extern "exec_NativeProcess_NativeProcess_out_fd_0"
	fun err_fd: Int is extern "exec_NativeProcess_NativeProcess_err_fd_0"
end

