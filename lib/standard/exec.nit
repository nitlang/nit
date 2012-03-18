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

# This module handle simple system calls
# Standard input and output can be handleb trougth streams.
package exec 

import stream

# Simple sub-processus
class Process
	# The pid of the processus
	fun id: Int do return _data.id

	# Is the processus finished?
	fun is_finished: Bool do return _data.is_finished

	# wait the terminaison of the process
	fun wait
	do
		_data.wait
		assert is_finished
	end
	
	# The status once finished
	fun status: Int
	do
		assert is_finished
		return _data.status
	end

	# launch a command with some arguments
	init(command: String, arguments: String...)
	do
		execute(command, arguments, 0)
	end

	# launch a simple command without arguments
	init init_(command: String)
	do
		execute(command, null, 0)
	end

	# Internal code to handle execusion
	protected init execute(command: String, arguments: nullable Array[String], pipeflags: Int)
	do
		var args = new Buffer
		var l = 1 # Number of elements in args
		args.append(command)
		if arguments != null then
			for a in arguments do
				args.add('\0')
				args.append(a)
			end
			l += arguments.length
		end
		_data = basic_exec_execute(command.to_cstring, args.to_s.to_cstring, l, pipeflags)
	end
	
	var _data: NativeProcess
	private fun basic_exec_execute(p: NativeString, av: NativeString, ac: Int, pf: Int): NativeProcess is extern "exec_Process_Process_basic_exec_execute_4"
end

# stdout of the processus is readable
class IProcess
	super Process
	super IStream
	var _in: FDIStream
	
	redef fun close do _in.close
	
	redef fun read_char do return _in.read_char

	redef fun eof do return _in.eof

	init(command: String, arguments: String...)
	do
		execute(command, arguments, 2)
		_in = new FDIStream(_data.out_fd)
	end
	
	init init_(command: String)
	do
		execute(command, null, 2)
		_in = new FDIStream(_data.out_fd)
	end
end

# stdin of the processus is writable
class OProcess
	super Process
	super OStream
	var _out: OStream

	redef fun close do _out.close

	redef fun is_writable do return _out.is_writable

	redef fun write(s) do _out.write(s)
	
	init(command: String, arguments: String...)
	do
		execute(command, arguments, 1)
		_out = new FDOStream(_data.in_fd)
	end
	
	init init_(command: String)
	do
		execute(command, null, 1)
		_out = new FDOStream(_data.in_fd)
	end
end

# stdin and stdout are both accessible
class IOProcess
	super IProcess
	super OProcess
	super IOStream

	redef fun close
	do
		_in.close
		_out.close
	end

	init(command: String, arguments: String...)
	do
		execute(command, arguments, 3)
		_in = new FDIStream(_data.out_fd)
		_out = new FDOStream(_data.in_fd)
	end
	
	init init_(command: String)
	do
		execute(command, null, 3)
		_in = new FDIStream(_data.out_fd)
		_out = new FDOStream(_data.in_fd)
	end
end

redef class Sys
	# Execute a shell command and return it's error code
	fun system(command: String): Int
	do
		return command.to_cstring.system	
	end
end

redef class NativeString
	fun system: Int is extern "string_NativeString_NativeString_system_0"
end

private extern NativeProcess
	fun id: Int is extern "exec_NativeProcess_NativeProcess_id_0"
	fun is_finished: Bool is extern "exec_NativeProcess_NativeProcess_is_finished_0"
	fun status: Int is extern "exec_NativeProcess_NativeProcess_status_0"
	fun wait is extern "exec_NativeProcess_NativeProcess_wait_0"

	fun in_fd: Int is extern "exec_NativeProcess_NativeProcess_in_fd_0"
	fun out_fd: Int is extern "exec_NativeProcess_NativeProcess_out_fd_0"
	fun err_fd: Int is extern "exec_NativeProcess_NativeProcess_err_fd_0"
end

