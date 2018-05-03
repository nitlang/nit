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
	#include <signal.h>
	#include <sys/types.h>

#ifdef _WIN32
	#include <windows.h>
	#include <fcntl.h>
#else
	#include <sys/wait.h>
#endif

	typedef struct se_exec_data se_exec_data_t;
	struct se_exec_data {
#ifdef _WIN32
		HANDLE h_process;
		HANDLE h_thread;
#endif
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
	#
	# Require: `is_finished`
	fun status: Int
	do
		assert is_finished
		return data.status
	end

	# The target executable
	# Either a file path or the name of an executable available in PATH.
	var command: Text

	# The arguments of the command
	# Starts with the first real arguments---ie. does not include the progname (`argv[0]`, in C)
	var arguments: nullable Array[Text]

	# Launch a command with some arguments
	init(command: Text, arguments: Text...) is old_style_init do
		self.command = command
		self.arguments = arguments
		execute
	end

	# Launch a simple command with arguments passed as an array
	init from_a(command: Text, arguments: nullable Array[Text])
	do
		self.command = command
		self.arguments = arguments
		execute
	end

	# Flags used internally to know which pipe to open
	private fun pipeflags: Int do return 0

	# Internal code to handle execution
	protected fun execute
	do
		var arguments = self.arguments

		var args = new FlatBuffer
		var argc = 1

		if not is_windows then
			# Pass the arguments as a big C string where elements are separated with '\0'
			args.append command
			if arguments != null then
				for a in arguments do
					args.add '\0'
					args.append a
				end
				argc += arguments.length
			end
		else
			# Combine the program and args in a single string
			assert not command.chars.has('"')
			args = new FlatBuffer

			args.add '"'
			args.append command
			args.add '"'

			if arguments != null then
				for a in arguments do
					args.append " \""
					args.append a.replace('"', "\\\"")
					args.add '"'
				end
			end
		end

		data = basic_exec_execute(command.to_cstring, args.to_s.to_cstring, argc, pipeflags)
		assert not data.address_is_null else print_error "Internal error executing: {command}"
	end

	private var data: NativeProcess

	private fun basic_exec_execute(prog, args: CString, argc: Int, pipeflag: Int): NativeProcess `{
#ifdef _WIN32
		SECURITY_ATTRIBUTES sec_attr;
		sec_attr.nLength = sizeof(SECURITY_ATTRIBUTES);
		sec_attr.bInheritHandle = TRUE;
		sec_attr.lpSecurityDescriptor = NULL;

		STARTUPINFO start_info;
		ZeroMemory(&start_info, sizeof(STARTUPINFO));
		start_info.cb = sizeof(STARTUPINFO);
		start_info.dwFlags = STARTF_USESTDHANDLES;

		HANDLE in_fd[2];
		HANDLE out_fd[2];
		HANDLE err_fd[2];

		se_exec_data_t *result = (se_exec_data_t*)malloc(sizeof(se_exec_data_t));

		// Redirect stdin?
		if (pipeflag & 1) {
			if (!CreatePipe(&in_fd[0], &in_fd[1], &sec_attr, 0)) {
				return NULL;
			}
			start_info.hStdInput = in_fd[0];
			result->in_fd = _open_osfhandle((intptr_t)in_fd[1], _O_WRONLY);
			if ( !SetHandleInformation(in_fd[1], HANDLE_FLAG_INHERIT, 0) )
				return NULL;
		} else {
			start_info.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
			result->in_fd = -1;
		}

		// Redirect stdout?
		if (pipeflag & 2) {
			if (!CreatePipe(&out_fd[0], &out_fd[1], &sec_attr, 0)) {
				return NULL;
			}
			start_info.hStdOutput = out_fd[1];
			result->out_fd = _open_osfhandle((intptr_t)out_fd[0], _O_RDONLY);
			if ( !SetHandleInformation(out_fd[0], HANDLE_FLAG_INHERIT, 0) )
				return NULL;
		} else {
			start_info.hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
			result->out_fd = -1;
		}

		// Redirect stderr?
		if (pipeflag & 4) {
			if (!CreatePipe(&err_fd[0], &err_fd[1], &sec_attr, 0)) {
				return NULL;
			}
			start_info.hStdError = err_fd[1];
			result->err_fd = _open_osfhandle((intptr_t)err_fd[0], _O_RDONLY);
			if ( !SetHandleInformation(err_fd[0], HANDLE_FLAG_INHERIT, 0) )
				return NULL;
		} else {
			start_info.hStdError = GetStdHandle(STD_ERROR_HANDLE);
			result->err_fd = -1;
		}

		PROCESS_INFORMATION proc_info;
		ZeroMemory(&proc_info, sizeof(PROCESS_INFORMATION));

		BOOL created = CreateProcess(NULL,
			args,       // command line
			NULL,       // process security attributes
			NULL,       // primary thread security attributes
			TRUE,       // inherit handles
			0,          // creation flags
			NULL,       // use parent's environment
			NULL,       // use parent's current directory
			&start_info,
			&proc_info);

		if (pipeflag & 1) CloseHandle(in_fd[0]);
		if (pipeflag & 2) CloseHandle(out_fd[1]);
		if (pipeflag & 3) CloseHandle(err_fd[1]);

		// Error?
		if (!created) {
			result->running = 0;
			result->status = 127;

			// Close subprocess pipes
			if (pipeflag & 1) CloseHandle(in_fd[1]);
			if (pipeflag & 2) CloseHandle(out_fd[0]);
			if (pipeflag & 3) CloseHandle(err_fd[0]);
		} else {
			result->h_process = proc_info.hProcess;
			result->h_thread = proc_info.hThread;
			result->id = GetProcessId(proc_info.hProcess);
			result->running = 1;
		}

		return result;
#else
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
		} else {
			perror("Process:");
			return NULL;
		}

		return result;
#endif
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

	redef fun raw_read_byte do return stream_in.read_byte

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

	redef fun execute do super

	# Write `input` to process and return its output
	#
	# Writing and reading are processed line by line,
	# reading only when something is available.
	#
	# ~~~
	# var proc = new ProcessDuplex("tr", "[:lower:]", "[:upper:]")
	# assert proc.write_and_read("""
	#     Alice
	#     Bob
	# """) == """
	#     ALICE
	#     BOB
	# """
	# ~~~
	fun write_and_read(input: Text): String
	do
		var read = new Buffer

		# Main loop, read and write line by line
		var prev = 0
		for delimiter in input.search_all('\n') do
			write input.substring(prev, delimiter.after-prev)
			prev = delimiter.after

			while stream_in.poll_in do
				read.append stream_in.read_line
			end
		end

		# Write the last line
		write input.substring_from(prev)
		stream_out.close

		# Read the rest, may be everything for some programs
		read.append stream_in.read_all
		stream_in.close

		# Clean up
		wait
		return read.to_s
	end
end

redef class Sys
	# Execute a shell command and return its error code
	fun system(command: Text): Int
	do
		return command.to_cstring.system
	end

	# The pid of the program
	fun pid: Int `{ return getpid(); `}
end

redef class CString
	# Execute self as a shell command.
	#
	# See the posix function system(3).
	fun system: Int `{
		int status = system(self);
#ifndef _WIN32
		if (WIFSIGNALED(status) && WTERMSIG(status) == SIGINT) {
			// system exited on SIGINT: in my opinion the user wants the main to be discontinued
			kill(getpid(), SIGINT);
		}
#endif
		return status;
	`}
end

private extern class NativeProcess `{ se_exec_data_t* `}

	fun id: Int `{ return (long)self->id; `}
	fun status: Int `{ return self->status; `}
	fun in_fd: Int `{ return self->in_fd; `}
	fun out_fd: Int `{ return self->out_fd; `}
	fun err_fd: Int `{ return self->err_fd; `}

	fun is_finished: Bool `{
		int result = (int)0;
		if (self->running) {
#ifdef _WIN32
			if (WaitForSingleObject(self->h_process, 0) == 0) {
				/* child is finished */
				result = 1;

				long unsigned int status;
				GetExitCodeProcess(self->h_process, &status);
				self->running = 0;
				self->status = (int)status;

				CloseHandle(self->h_process);
				CloseHandle(self->h_thread);
			}
#else
			int status;
			int id = waitpid(self->id, &status, WNOHANG);
			if (id != 0) {
				/* child is finished */
				result = (int)(id == self->id);
				self->status = WEXITSTATUS(status);
				self->running = 0;
			}
#endif
		}
		else{
			result = (int)1;
		}
		return result;
	`}

	fun wait `{
#ifdef _WIN32
		long unsigned int status;
		if (self->running) {
			WaitForSingleObject(self->h_process, INFINITE);
			GetExitCodeProcess(self->h_process, &status);

			CloseHandle(self->h_process);
			CloseHandle(self->h_thread);

			self->status = (int)status;
			self->running = 0;
		}
#else
		int status;
		if (self->running) {
			waitpid(self->id, &status, 0);
			self->status = WEXITSTATUS(status);
			self->running = 0;
		}
#endif
	`}
end
