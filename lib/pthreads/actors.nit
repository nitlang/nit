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

# Module only for the annotation for now
module actors is
	new_annotation actor
end

import concurrent_collections
intrude import pthreads

# An actor that processes messages through it's mailbox
abstract class Actor
	super Thread
	
	# Type of the working class managed by `self`
	type V: Object

	# Mailbox to receive messages
	var mailbox = new Mailbox[Message]

	# Condition for waiting
	var cond = new PthreadCond

	# The instance used to make the call via the messages
	# i.e. the real working class
	var instance: V

	redef fun main do loop mailbox.shift.invoke(instance)
end

# A Message received by a Mailbox
# In fact, this is the reification of a call
# Each Message class represent a call to make `instance` via `invoke`
abstract class Message

	# Type of the class on which `self` make the call
	type E: Object

	# Redef this method so it calls the right one on `instance` (double dispatch)
	fun invoke(instance: E) is abstract
end

# MailBox for an actor
# ConcurrentList improved to have a wait on the `shift`
class Mailbox[E]
	super ConcurrentList[E]

	private var cond = new NativePthreadCond

	redef fun push(e) do 
		mutex.lock
		real_collection.push(e)
		self.cond.signal
		mutex.unlock
	end

	redef fun shift do
		mutex.lock
		if self.is_empty then self.cond.wait(mutex.native.as(not null))
		var r = real_collection.shift
		mutex.unlock
		return r
	end
end

# A Promise
class Future[E]
	# Value promised by `self`
	var value: nullable E = null

	private var mutex = new Mutex
	private var cond: nullable NativePthreadCond = null

	private var is_done = false

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
			var cond = new NativePthreadCond
			self.cond = cond
			cond.wait(mutex.native.as(not null))
		end
		mutex.unlock
		return value
	end
end
