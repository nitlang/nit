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

# Implementation of INf7235 lab 1
module inversions

import concurrent_collections
intrude import pthreads

# reification of messages
abstract class Message

	# double dispatch
	fun invoke(actor: ActorInversions) is abstract
end

# Message for the `nb_inversions` method
class NBInversionsMessage
	super Message

	# starting index
	var i: Int

	# ending index
	var j: Int

	# Return Value
	var ret = new Future[Int]

	redef fun invoke(actor) do ret.set_value(actor.nb_inversions_seq_ij(i,j))
end

# Message for the `nb_inversions_rec_ij` method
class NBInversionsRecMessage
	super Message
	
	# starting index
	var i: Int
	
	# ending index
	var j: Int
	
	# Threshold
	var seuil: Int
	
	# Return value
	var ret = new Future[Int]

	redef fun invoke(actor) do ret.set_value(actor.nb_inversions_rec_ij(i,j,seuil))
end

# MailBox for an actor
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
	# Value returned by
	var value: nullable E = null

	private var mutex = new Mutex
	private var cond: nullable NativePthreadCond = null

	private var is_done = false

	# rbheibvhe
	fun set_value(value: E) do
		mutex.lock
		is_done = true
		self.value = value
		var cond = self.cond
		if cond != null then cond.signal
		mutex.unlock
	end

	# Return immediatly if the task terminated, or block waiting for `self` to terminate
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

# Proxy
class ProxyInversions

	init do inversions.start
	
	# actor
	var inversions: ActorInversions

	# Return a future for the number of inversions between i and j indexes
	fun nb_inversions_seq_ij(i,j: Int): Future[Int] do
		var message = new NBInversionsMessage(i, j)
		inversions.mailbox.push(message)
		inversions.cond.signal
		return message.ret
	end

	# Returns a future for the number of inversion calculated recursively
	fun nb_inversions_rec_ij(i, j, seuil: Int): Future[Int] do
		var message = new NBInversionsRecMessage(i,j,seuil)
		inversions.mailbox.push(message)
		inversions.cond.signal
		return message.ret
	end
end

# actor / Implementation class
class ActorInversions
	super Thread

	# Messages for this actor
	var mailbox = new Mailbox[Message]
	private var mutex = new Mutex
	private var cond = new NativePthreadCond

	# Array to count inversions
	var array: Array[Int]

	redef fun main do loop mailbox.shift.invoke(self)

	# actual implementation
	fun nb_inversions_seq_ij(i,j: Int): Int do
		var v = 0
		for k in [i..j-1] do if array[k+1] < array[k] then v += 1
		return v
	end

	# Intern recursive version
	private fun nb_inversions_rec_ij(i, j, seuil: Int): Int do
		if j - i + 1 <= seuil then return nb_inversions_seq_ij(i,j)
		var m = (i + j) / 2
		var actor = new ProxyInversions(new ActorInversions(array))
		var nb1 = actor.nb_inversions_rec_ij(i,m,seuil)
		var nb2 = nb_inversions_rec_ij(m+1, j, seuil)

		return nb1.join + nb2 + nb_inversions_seq_ij(m, m+1)
	end
end

var array = new Array[Int].with_items(10,8,12,13,12,15,16,17,18,19,21,20,22,2,24,25,27,26,28,29,40)
var actor = new ProxyInversions(new ActorInversions(array))
var value = actor.nb_inversions_rec_ij(0, array.length - 1, 1)
print value.join
