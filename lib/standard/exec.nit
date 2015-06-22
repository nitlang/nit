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

in "C" `{
	#include <stdlib.h>
	#include <string.h>
	#include <errno.h>
	#include <stdio.h>
	#include <unistd.h>
	#include <sys/wait.h>
	#include <signal.h>
`}

in "C Header" `{
	#include <sys/types.h>

	// FIXME this should be in the "C" block when bug on module blocks is fixed
	// or, even better, replace the C structure by a Nit object.
	typedef struct se_exec_data se_exec_data_t;
	struct se_exec_data {
		pid_t id;
		int running;
		int status;
		int in_fd;
		int out_fd;
		int err_fd;
	};
`}

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
	private fun basic_exec_execute(prog, args: NativeString, argc: Int, pipeflag: Int): NativeProcess `{
		se_exec_data_t* result = NULL;
		int id;
		int in_fd[2];
		int out_fd[2];
		int err_fd[2];
		if (pipeflag & 1) {
			int res = pipe(in_fd);
			if ( res == -1 ) {
				return NULL;
			}
		}
		if (pipeflag & 2) {
			int res = pipe(out_fd);
			if ( res == -1 ) {
				return NULL;
			}
		}
		if (pipeflag & 4) {
			int res = pipe(err_fd);
			if ( res == -1 ) {
				return NULL;
			}
		}

		id = fork();
		if (id == 0)
			{ /* child */
			char **arg = malloc(sizeof(char*) * (argc+1));
			char *c = args;
			int i;

			/* Prepare args */
			for(i=0; i<argc; i++)
			{
				arg[i] = c;
				c += strlen(c) + 1;
			}
			arg[argc] = NULL;

			/* Connect pipe */
			if (pipeflag & 1)
			{
				close(0);
				dup2(in_fd[0], 0);
				close(in_fd[0]);
				close(in_fd[1]);
			}
			if (pipeflag & 2)
			{
				close(1);
				dup2(out_fd[1], 1);
				close(out_fd[0]);
				close(out_fd[1]);
			}
			if (pipeflag & 4)
			{
				close(2);
				dup2(err_fd[1], 2);
				close(err_fd[0]);
				close(err_fd[1]);
			}

			/* calls */
			execvp(prog, arg);
			_exit(127);
		}
		else if (id > 0)
			{ /* father */
			result = (se_exec_data_t*)malloc(sizeof(se_exec_data_t));
			result->id = id;
			result->running = 1;
			if (pipeflag & 1)
			{
				result->in_fd = in_fd[1];
				close(in_fd[0]);
			} else
				result->in_fd = -1;

			if (pipeflag & 2)
			{
				result->out_fd = out_fd[0];
				close(out_fd[1]);
			} else
				result->out_fd = -1;

			if (pipeflag & 4)
			{
				result->err_fd = err_fd[0];
				close(err_fd[1]);
			} else
				result->err_fd = -1;
		}

		return result;
	`}
end

# `Process` on which the `stdout` is readable like a `Reader`
class ProcessReader
	super Process
	super Reader

	# File Descriptor used for the input.
	var stream_in: FileReader is noinit

	redef fun close do stream_in.close

	redef fun read_char do return stream_in.read_char

	redef fun read_byte do return stream_in.read_byte

	redef fun eof do return stream_in.eof

	redef fun pipeflags do return 2

	redef fun execute
	do
		super
		stream_in = new FileReader.from_fd(data.out_fd)
	end
end

# `Process` on which `stdin` is writable like a `Writer`
class ProcessWriter
	super Process
	super Writer

	# File Descriptor used for the output.
	var stream_out: Writer is noinit

	redef fun close do stream_out.close

	redef fun is_writable do return stream_out.is_writable

	redef fun write(s) do stream_out.write(s)

	redef fun pipeflags do return 1

	redef fun execute
	do
		super
		var out = new FileWriter.from_fd(data.in_fd)
		out.set_buffering_mode(0, sys.buffer_mode_none)
		stream_out = out
	end
end

# `Process` on which stdout can be read and stdin can be written to like a `Duplex`
class ProcessDuplex
	super ProcessReader
	super ProcessWriter
	super Duplex

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
	fun system: Int `{
		int status = system(self);
		if (WIFSIGNALED(status) && WTERMSIG(status) == SIGINT) {
			// system exited on SIGINT: in my opinion the user wants the main to be discontinued
			kill(getpid(), SIGINT);
		}
		return status;
	`}
end

private extern class NativeProcess `{ se_exec_data_t* `}

	fun id: Int `{ return self->id; `}
	fun status: Int `{ return self->status; `}
	fun in_fd: Int `{ return self->in_fd; `}
	fun out_fd: Int `{ return self->out_fd; `}
	fun err_fd: Int `{ return self->err_fd; `}

	fun is_finished: Bool `{
		int result = (int)0;
		int status;
		if (self->running) {
			int id = waitpid(self->id, &status, WNOHANG);
			if (id != 0) {
				/* child is finished */
				result = (int)(id == self->id);
				self->status = WEXITSTATUS(status);
				self->running = 0;
			}
		}
		else{
			result = (int)1;
		}
		return result;
	`}

	fun wait `{
		int status;
		if (self->running) {
			waitpid(self->id, &status, 0);
			self->status = WEXITSTATUS(status);
			self->running = 0;
		}
	`}
end

