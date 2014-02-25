# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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

# Module to manage standard C signals
module signals

`{
	#undef _POSIX_SOURCE
	#define _POSIX_SOURCE 1
	#include <signal.h>
	#include <stdio.h>

	/*
		Structure to manage each possible signals
		are used in an array of 32 maximum signals.
		This array is global to the software.
	*/
	struct nit_signals_ent {
		char raised; /* !=0 if has been raised */
		SignalHandler handler; /* instance to receive call */
		char safely; /* if !=0 then manage signal safely, otherwise react when raised */
	} nit_signals_list[32] = {0x0};

	/* Receiver to all signals
		If unsafe, it calls directly the Nit receiver,
		otherwise it marks the signal as raised and returns.
	*/
	void receiver(int sig)
	{
		if (sig < 32 && sig >=0)
		{
			if (nit_signals_list[sig].safely) {
				nit_signals_list[sig].raised += 1;
			} else {
				SignalHandler_receive_signal(nit_signals_list[sig].handler, sig);
			}
		}
	}
`}

# Receives the callback from system when a given signal arise
interface SignalHandler
	# Called on any signal received
	fun receive_signal(signal: Int) `{
	`}

	# Called on any unsafe signal received
	fun receive_signal_unsafe(signal: Int) `{
	`}

	# Set the receiver as the handler of the signal
	# If safely, receiver will be called when check_signals in invoked
	#    otherwise the receiver is invoked when the signal is raised, it may
	#    crash the Nit system but is unavoidable for unstoppable signals
	fun handle_signal(signal: Int, safely: Bool) import
		receive_signal `{
		SignalHandler last_handler;
		if (signal < 32 && signal >=0) {
			struct sigaction act;
			sigemptyset(&act.sa_mask);
			act.sa_flags = 0;
			act.sa_handler = receiver;

			sigaction(signal, &act, NULL);

			last_handler = nit_signals_list[signal].handler;
			if (last_handler != NULL)
				SignalHandler_decr_ref(last_handler);

			nit_signals_list[signal].handler = recv;
			SignalHandler_incr_ref(recv);

			nit_signals_list[signal].safely = safely;
		}
	`}

	# Set to ignore the signal
	fun ignore_signal(signal: Int) `{
		SignalHandler last_handler;
		if (signal < 32 && signal >=0) {
			struct sigaction act;
			sigemptyset(&act.sa_mask);
			act.sa_flags = 0;
			act.sa_handler = SIG_IGN;
			sigaction(signal, &act, NULL);

			last_handler = nit_signals_list[signal].handler;
			if (last_handler != NULL)
				SignalHandler_decr_ref(last_handler);
		}
	`}

	# Set default action for the signal
	fun default_signal(signal: Int) `{
		SignalHandler last_handler;
		if (signal < 32 && signal >=0) {
			struct sigaction act;
			sigemptyset(&act.sa_mask);
			act.sa_flags = 0;
			act.sa_handler = SIG_DFL;
			sigaction(signal, &act, NULL);

			last_handler = nit_signals_list[signal].handler;
			if (last_handler != NULL)
				SignalHandler_decr_ref(last_handler);
		}
	`}

	# Hang up detected on controlling terminal or death of controlling process
	fun sighup: Int do return 1
	
	# Issued if the user sends an interrupt signal
	fun sigint: Int do return 2
	
	# Issued if the user sends a quit signal
	fun sigquit: Int do return 3
	
	# Issued if the user attempts to execute an illegal, malformed, unknown, or privileged instruction
	fun sigill: Int do return 4
	
	# Issued when an exception occurs: a condition that a debugger has requested to be informed of
	fun sigtrap: Int do return 5
	
	# This signal is sent to a process to tell it to abort, i. e. to terminate
	fun sigabrt: Int do return 6
	
	#This signal is sent to a process when it causes a bus error
	fun sigbus: Int do return 7
	
	# Issued if an illegal mathematical operation is attempted
	fun sigfpe: Int do return 8
	
	# If a process gets this signal it must quit immediately and will not perform any clean-up operations
	fun sigkill: Int do return 9
	
	# Sent to a process to indicate user-defined conditions
	fun sigusr1: Int do return 10
	
	# Sent to a process when it makes an invalid virtual memory reference, or segmentation fault
	fun sigsegv: Int do return 11
	
	# Sent to a process to indicate user-defined conditions
	fun sigusr2: Int do return 12
	
	# Sent to a process when it attempts to write to a pipe without a process connected to the other end
	fun sigpipe: Int do return 13
	
	# Alarm Clock signal
	fun sigalarm: Int do return 14
	
	# Software termination signal
	fun sigterm: Int do return 15
	
	# Sent to a process when a child process terminates or is interrupted
	fun sigchild: Int do return 17
	
	# Tell the operating system to continue (restart) a process previously paused by the SIGSTOP or SIGTSTP signal
	fun sigcont: Int do return 18
	
	# Tell the operating system to stop a process
	fun sigstop: Int do return 19
	
	# Sent to a process by its terminal to request it to stop temporarily
	fun sigtstp: Int do return 20
	
	# Sent to a process when a socket has urgent or out-of-band data available to read
	fun sigurg: Int do return 23
	
	# Sent to a process when it has used the CPU for a duration that exceeds a user-settable value
	fun sigxcpu: Int do return 24
	
	# Sent to a process when it grows a file larger than the maximum allowed size
	fun sigxfsz: Int do return 25
	
	# Virtual timer expired
	fun sigvtalrm: Int do return 26
	
	# Profiling timer expired
	fun sigprof: Int do return 27
	
	# Sent to a process when its controlling terminal changes its window size 
	fun sigwinch: Int do return 28
	
	# Sent to a process when the system experiences a power failure
	fun sigpwr: Int do return 30
	
	# Sent to a process when it passes a bad argument to a system call
	fun sigsys: Int do return 31
	
	
end

redef interface Object

	# Check signals for safe operation
	# will callback receiver of raised signals
	# can callback any instance of SignalHandler, not just this one
	protected fun check_signals: Bool is extern import SignalHandler.receive_signal `{
		int sig;
		int raised_something = 0;

		for (sig = 0; sig < 32; sig ++)
			if (nit_signals_list[sig].raised) {
				nit_signals_list[sig].raised = 0;
				raised_something = 1;
				SignalHandler_receive_signal(nit_signals_list[sig].handler, sig);
			}

		return raised_something;
	`}

	# Set alarm signal
	# can callback any instance of SignalHandler, not just this one
	protected fun set_alarm(sec: Int) `{ alarm(sec); `}
end
