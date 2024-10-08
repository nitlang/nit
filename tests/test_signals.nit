# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
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

module test_signals

import signals

class MyReceiver
	super SignalHandler

	redef fun receive_signal( signal ) do print "received safely {signal}"
	redef fun receive_signal_unsafe( signal ) do print "received unsafely {signal}"
end

class MyAlarmReceiver
	super SignalHandler

	init do handle_signal( sigalarm, true )

	redef fun receive_signal( signal )
	do
		if signal == sigalarm then print "alarm!"
	end
end

var r = new MyReceiver
r.handle_signal(sigint, true) # will call back when "check_signals" is called
r.handle_signal(sigsegv, false) # the only way to receive a sigsegv

var ar = new MyAlarmReceiver
set_alarm( 1 ) # calls C "alarm()"

loop
	var hit = check_signals # callbacks are amde here
	if hit then break
end
