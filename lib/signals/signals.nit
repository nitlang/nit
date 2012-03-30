# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Receives the callback from system when a given signal arise
interface SignalHandler
	# Called on any signal received
	fun receive_signal( signal : Int ) is abstract

	# Called on any unsafe signal received
	fun receive_signal_unsafe( signal : Int ) is abstract

	# Set the receiver as the handler of the signal
	# If safely, receiver will be called when check_signals in invoked
	#    otherwise the receiver is invoked when the signal is raised, it may
	#    crash the Nit system but is unavoidable for unstoppable signals
	fun handle_signal( signal : Int, safely : Bool ) is extern import
		receive_signal

	# Set to ignore the signal
	fun ignore_signal( signal : Int ) is extern

	# Set default action for the signal
	fun default_signal( signal : Int ) is extern

	fun sigalarm : Int do return 14
	fun sighup : Int do return 1
	fun sigint : Int do return 2
	fun sigkill : Int do return 9
	fun sigpipe : Int do return 13
	fun sigterm : Int do return 15
	fun sigabrt : Int do return 6
	fun sigfpe : Int do return 8
	fun sigquit : Int do return 3
	fun sigsegv : Int do return 11
end

redef interface Object

	# Check signals for safe operation
	# will callback receiver of raised signals
	# can callback any instance of SignalHandler, not just this one
	protected fun check_signals : Bool is extern import SignalHandler::receive_signal

	# Set alarm signal
	# can callback any instance of SignalHandler, not just this one
	protected fun set_alarm( sec : Int ) is extern
end
