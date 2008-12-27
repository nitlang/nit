# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

class Node
	redef meth to_s: String
	do
		return _name
	end
	attr _name: String = null
end

class WakeUpNode
special Node
	meth wake_up is abstract
	# Wake up the node
	meth wake_up_in(d: Int)
	# Ask to be weaked up in `d' time units
	do
		_scheduler.add_event(self, d)
	end
	attr _scheduler: Scheduler = null
end

class NodeSource
special Node
	attr _nexts: ArraySet[NodeSink] = null
	meth attach(n: NodeSink)
	# Add the sink `n' the the connected nodes
	# Do nothing if `n' is already connected
	do
		assert n != null
		# Create the collection if needed
		if _nexts == null then
			_nexts = new ArraySet[NodeSink]
		end
		_nexts.add(n)
	end
	
	meth detach(n: NodeSink)
	# Remove the sink `n' from the connected nodes
	# Do nothing if `n' is not connected
	do
		assert n != null
		_nexts.remove(n)
	end

	protected meth send
	# Notify the sinks by calling the recieve(1) method of each sink
	do
		if _nexts == null then
			return
		end
		for n in _nexts do
			n.recieve(self)
		end
	end
end

class NodeSink
special Node
	meth recieve(n: NodeSource) is abstract
	# the `n' has emeted a signal
end

#

class Scheduler
	attr _time_list: Array[Couple[Int, WakeUpNode]]
	attr _time: Int # What time is it ?
	meth add_event(n: WakeUpNode, d: Int)
	# The node `n' whant to be weaked up in `d' time units
	do
		var entry = new Couple[Int, WakeUpNode](d+_time, n)
		_time_list.add(entry)
	end

	meth next_event: WakeUpNode
	# Get the
	do
		if _time_list.is_empty then
			return null
		end

		# Get the next entry
		var entry = _time_list.first
		for e in _time_list do
			if e.first < entry.first then
				entry = e
			end
		end
		_time_list.remove(entry)

		_time = entry.first
		return entry.second
	end

	meth run_for(time_limit: Int)
	do
		while true do
			var node = next_event 
			if _time > time_limit then
				print("Time limit.")
				return
			end
			if node == null then
				print("No more event.")
				return
			end
			node.wake_up
		end
	end

	init
	do
		_time_list = new Array[Couple[Int, WakeUpNode]]
	end
end

#

class BeepSource
special NodeSource
special WakeUpNode
	redef meth wake_up
	do
		send
		wake_up_in(_delay)
	end
	attr _delay: Int
	meth start
	do
		wake_up_in(_delay)
	end

	init(name: String, s: Scheduler, delay: Int)
	do
		_name = name
		_scheduler = s
		_delay = delay
	end
end

class CountSink
special NodeSink
	readable attr _count: Int = 0
	redef meth recieve(n: NodeSource)
	do
		_count = _count + 1
	end
end

class SimpleCountSink
special CountSink

	init(name: String)
	do
		_name = name
	end
end

class NodeAlternate
special NodeSink
special NodeSource
	attr _last: NodeSource
	redef meth recieve(n: NodeSource)
	do
		if n != _last then
			_last = n
			send
		end
	end

	init(name: String)
	do
		_name = name
	end
end

class NodeEat
special CountSink
special NodeSource
	attr _limit: Int
	redef meth recieve(n: NodeSource)
	do
		var c = _count + 1
		if c >= _limit then
			_count = 0
			send
		else
			_count = c
		end
	end

	init(name: String, limit: Int)
	do
		_name = name
		_limit = limit
	end
end

class NodeDelay
special NodeSource
special NodeSink
special WakeUpNode
	attr _delay: Int
	redef meth recieve(n: NodeSource)
	do
		wake_up_in(_delay)
	end
	redef meth wake_up
	do
		send
	end

	init(name: String, scheduler: Scheduler, delay: Int)
	do
		_name = name
		_scheduler = scheduler
		_delay = delay
	end
end

#

var s = new Scheduler

var b1 = new BeepSource("Beep 1", s, 10)
var b2 = new BeepSource("Beep 2", s, 7)
var a1 = new NodeAlternate("Alternate 1")
var a2 = new NodeAlternate("Alternate 2")
var a3 = new NodeAlternate("Alternate 3")
var d1 = new NodeDelay("Delay 1", s, 2)
var e1 = new NodeEat("Eat 1", 5)
var c1 = new SimpleCountSink("Count 1")
b1.attach(a1)
b1.attach(a3)

b2.attach(a1)
b2.attach(a2)

b2.attach(a3)

a1.attach(e1)
a1.attach(a2)

a2.attach(a2)
a2.attach(a3)

a3.attach(e1)
a3.attach(d1)

d1.attach(e1)

e1.attach(c1)
e1.attach(a1)

b1.start
b2.start

var nb = 100000
if not args.is_empty then
	nb = args.first.to_i
end

s.run_for(nb)
print(c1.count)

