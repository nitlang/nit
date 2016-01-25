# This file is part of NIT (http://www.nitlanguage.org).
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

# Testing an actor implementation in Nit
# This time, the proxy transorms calls into messages for the actor class
module manual_actors

import concurrent_collections
intrude import pthreads

# A person that can walk or sleep
abstract class AbstractPerson

	# Create a new ActorPerson
	new (name: String) do return new ProxyPerson(new ActorPerson(name))

	# walking around
	fun walk(meters: Int) is abstract

	# sleeping
	fun sleep(time: Float) is abstract
end

# Actor version of a Person
class ActorPerson
	super AbstractPerson
	super Thread

	# Messages for this actor
	var messages = new ConcurrentList[List[Object]].wrap(new List[List[Object]])
	private var mutex = new Mutex
	private var cond = new NativePthreadCond

	# Name of `self`
	var name: String

	# Distance traveled today
	var walked = 0

	# Day since `self` was created
	var day = 0

	redef fun main do
		loop
			var m: nullable List[Object] = null
			mutex.lock
			if messages.is_empty then cond.wait(mutex.native.as(not null))
			if not messages.is_empty then
				m = messages.shift
			end
			mutex.unlock
			if m != null then
				var to_call = m.shift
				if to_call == "walk" then
					walk(m.shift.as(Int))
				else if to_call == "sleep" then
					sleep(m.shift.as(Float))
				end
			end
		end
	end

	# Walking around because why not
	redef fun walk(meters) do
		walked += meters
		print "{name} just walked {meters} meters, and walked {walked} meters today"
	end

	# Sleep until next day, reset the `walked` counter
	redef fun sleep(time) do
		print "{name} is going to sleep"
		time.sleep
		walked = 0
		day += 1
		print "{name} waking up for day n°{day}"
	end

end

# Proxy for an actor version of a Person
class ProxyPerson
	super AbstractPerson

	# Person proxied by `self`
	var person: ActorPerson

	init do person.start

	redef fun walk(meters) do
		var message = new List[Object]
		message.push("walk")
		message.push(meters)
		person.messages.push(message)
		person.cond.signal
	end
	redef fun sleep(time) do
		var message = new List[Object]
		message.push("sleep")
		message.push(time)
		person.messages.push(message)
		person.cond.signal
	end
end

var i = new AbstractPerson("Jean Bon")
var j = new AbstractPerson("Lucas ka")
for k in [0..10] do
	i.walk(k)
	j.walk(k)
	if 10.rand > 5 then
		i.sleep(1.0)
	else
		j.sleep(1.0)
	end
end
10.0.sleep
