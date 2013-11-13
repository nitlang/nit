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

	fun sigalarm: Int do return 14
	fun sighup: Int do return 1
	fun sigint: Int do return 2
	fun sigkill: Int do return 9
	fun sigpipe: Int do return 13
	fun sigterm: Int do return 15
	fun sigabrt: Int do return 6
	fun sigfpe: Int do return 8
	fun sigquit: Int do return 3
	fun sigsegv: Int do return 11
end

redef interface Object

	# Check signals for safe operation
	# will callback receiver of raised signals
	# can callback any instance of SignalHandler, not just this one
	protected fun check_signals: Bool is extern import SignalHandler::receive_signal `{
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
