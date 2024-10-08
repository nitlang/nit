# This file is part of NIT ( https://nitlanguage.org ).
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
	redef fun to_s: String
	do
		return _name
	end
	var name: String = "noname"
end

class WakeUpNode
	super Node
	fun wake_up is abstract
	# Wake up the node
	fun wake_up_in(d: Int)
	# Ask to be weaked up in `d' time units
	do
		_scheduler.add_event(self, d)
	end
	var scheduler: Scheduler is noinit
end

class NodeSource
	super Node
	var nexts: nullable ArraySet[NodeSink] = null
	fun attach(n: NodeSink)
	# Add the sink `n' the the connected nodes
	# Do nothing if `n' is already connected
	do
		# Create the collection if needed
		if _nexts == null then
			_nexts = new ArraySet[NodeSink]
		end
		_nexts.add(n)
	end
	
	fun detach(n: NodeSink)
	# Remove the sink `n' from the connected nodes
	# Do nothing if `n' is not connected
	do
		_nexts.remove(n)
	end

	protected fun send
	# Notify the sinks by calling the recieve(1) method of each sink
	do
		if _nexts == null then
			return
		end
		for n in _nexts.as(not null) do
			n.recieve(self)
		end
	end
end

class NodeSink
	super Node
	fun recieve(n: NodeSource) is abstract
	# the `n' has emeted a signal
end

#

class Scheduler
	var time_list: Array[Couple[Int, WakeUpNode]] = new Array[Couple[Int, WakeUpNode]]
	var time: Int = 0 # What time is it ?
	fun add_event(n: WakeUpNode, d: Int)
	# The node `n' whant to be weaked up in `d' time units
	do
		var entry = new Couple[Int, WakeUpNode](d+_time, n)
		_time_list.add(entry)
	end

	fun next_event: nullable WakeUpNode
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

	fun run_for(time_limit: Int)
	do
		loop
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
	end
end

#

class BeepSource
	super NodeSource
	super WakeUpNode
	redef fun wake_up
	do
		send
		wake_up_in(_delay)
	end
	var delay: Int
	fun start
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
	super NodeSink
	var count: Int = 0
	redef fun recieve(n: NodeSource)
	do
		count = count + 1
	end
end

class SimpleCountSink
	super CountSink

	init(name: String)
	do
		_name = name
	end
end

class NodeAlternate
	super NodeSink
	super NodeSource
	var last: nullable NodeSource
	redef fun recieve(n: NodeSource)
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
	super CountSink
	super NodeSource
	var limit: Int
	redef fun recieve(n: NodeSource)
	do
		var c = count + 1
		if c >= _limit then
			count = 0
			send
		else
			count = c
		end
	end

	init(name: String, limit: Int)
	do
		_name = name
		_limit = limit
	end
end

class NodeDelay
	super NodeSource
	super NodeSink
	super WakeUpNode
	var delay: Int
	redef fun recieve(n: NodeSource)
	do
		wake_up_in(_delay)
	end
	redef fun wake_up
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

var nb = 10
if not args.is_empty then
	nb = args.first.to_i
end

s.run_for(1 << nb)
print(c1.count)

