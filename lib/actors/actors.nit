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

# Abstraction of the actors concepts
module actors is
	new_annotation actor
end

import pthreads::concurrent_collections
intrude import pthreads
intrude import pthreads::extra

# Abstraction of an actor
# It has a mailbox, can receive and process messages asynchronously
abstract class Actor
	super Thread

	# Type of the proxied class (or working class)
	type V: Object

	# The instance used to do the real work
	# i.e. the real working object
	var instance: V

	# Mailbox used to receive and process messages
	var mailbox = new BlockingQueue[Message].with_actor(self)

	# Is `self` working ?
	# i.e. does it have messages to process or is it processing one now ?
	var working = false

	redef fun main do
		loop
			var m = mailbox.shift
			if m isa ShutDownMessage then
				sys.active_actors.remove(self)
				return null
			end
			m.invoke(instance)
			if mailbox.is_empty then
				working = false
				sys.active_actors.remove(self)
			end
		end
	end

	# Ends `self`, cancel ongoing work abrutly
	# Pretty dangerous to use
	fun kill do
		var n = self.native
		if n != null then n.cancel
	end
end

# A Message received by a Mailbox
# In fact, this is the reification of a call
# Each Message class represent a call to make on `instance` via `invoke`
abstract class Message

	# Type of the class on which `self` make the call
	type E: Object

	# Redef this method so it calls the right one on `instance` (double dispatch)
	fun invoke(instance: E) is abstract
end

# Abstraction of proxies for threaded actors
class Proxy

	# Type of the actor `self` is proxiing
	type E: Actor

	# The proxied actor
	var actor: E is noinit

	# Kill `actor` without mercy
	fun kill do actor.kill

	# Tell `actor` to terminate properly
	# Queueing a ShutDownMessage to the end of its mailbox
	fun terminate do
		var msg = new ShutDownMessage
		actor.mailbox.push(msg)
	end

	# Tell `actor` to terminate now
	# Queueing a ShutDownMessage before every other ones
	fun terminate_now do
		var msg = new ShutDownMessage
		actor.mailbox.unshift(msg)
	end

	# Wait for `actor` to terminate
	fun wait_termination do actor.join
end

# A Message to Rule them all... properly shutdown an Actor
# It's behaviour is implemented in the actor itself
class ShutDownMessage
	super Message
end

# The promise of a value which will be set asynchronously
class Future[E]
	# Value promised by `self`
	var value: nullable E = null

	# Mutex for synchronisation
	protected var mutex = new Mutex

	# Condition variable for synchronisation
	protected var cond: nullable PthreadCond = null

	# Can be used to check if the value is available without waiting
	protected var is_done = false

	# Set the value and signal so that, someone waiting for `value` can retrieve it
	fun set_value(value: E) do
		mutex.lock
		is_done = true
		self.value = value
		var cond = self.cond
		if cond != null then cond.signal
		mutex.unlock
	end

	# Return immediatly if `value` is set, or block waiting for `value` to be set
	fun join: E do
		mutex.lock
		if not is_done then
			var cond = self.cond
			if cond == null then
				cond = new PthreadCond
				self.cond = cond
			end
			cond.wait(mutex)
		end
		mutex.unlock
		return value
	end
end

# A Blocking queue implemented from a `ConcurrentList`
# `shift` is blocking if there isn't any element in `self`
# `push` or `unshift` releases every blocking threads
# Corresponds to the mailbox of an actor
class BlockingQueue[E]
	super ConcurrentList[E]

	# The associated actor
	var actor: Actor is noautoinit

	# Used to block or signal on waiting threads
	private var cond = new PthreadCond

	# init self with an associated actor
	init with_actor(actor: Actor) do  self.actor = actor

	# Adding the signal to release eventual waiting thread(s)
	redef fun push(e) do
		mutex.lock
		if real_collection.is_empty and not actor.working then
			actor.working = true
			sys.active_actors.push(actor)
		end
		real_collection.push(e)
		self.cond.signal
		mutex.unlock
	end

	redef fun unshift(e) do
		mutex.lock
		real_collection.unshift(e)
		self.cond.signal
		mutex.unlock
	end

	# If empty, blocks until an item is inserted with `push` or `unshift`
	redef fun shift do
		mutex.lock
		while real_collection.is_empty do self.cond.wait(mutex)
		var r = real_collection.shift
		mutex.unlock
		return r
	end
end

# A collection which `is_empty` method blocks until it's empty
class ReverseBlockingQueue[E]
	super ConcurrentList[E]

	# Used to block or signal on waiting threads
	private var cond = new PthreadCond

	# Adding the signal to release eventual waiting thread(s)
	redef fun push(e) do
		mutex.lock
		real_collection.push(e)
		mutex.unlock
	end

	# When the Queue is empty, signal any
	# possible waiting thread
	redef fun remove(e) do
		mutex.lock
		real_collection.remove(e)
		if real_collection.is_empty then cond.signal
		mutex.unlock
	end

	# Wait until the Queue is empty
	redef fun is_empty do
		mutex.lock
		while not real_collection.is_empty do self.cond.wait(mutex)
		mutex.unlock
		return true
	end
end

redef class Sys

	# List of running actors
	var active_actors = new ReverseBlockingQueue[Actor] is lazy

	redef fun run do
		super
		# The program won't end until every actor is done
		active_actors.is_empty
	end
end
