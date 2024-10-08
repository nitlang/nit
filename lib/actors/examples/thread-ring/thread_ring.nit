# This file is part of NIT (https://nitlanguage.org).
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

# Example implemented from "The computer Language Benchmarks Game" - Thread-Ring
# http://benchmarksgame.alioth.debian.org/
#
# Complete description of the thread-ring :
# http://benchmarksgame.alioth.debian.org/u64q/threadring-description.html#threadring
module thread_ring is example

import actors

# One Actor, who will receive the token
class ThreadRing
	actor

	# Identification of `self`
	var id: Int

	# The next Actor to which `self` send the token
	var next: ThreadRing is noinit

	# Receive a token, then send it to `next` unless its value is `0`
	fun send_token(message: Int) do
		if message == 0 then print id
		if message >= 1 then next.async.send_token(message - 1)
	end
end

redef class Sys
	# numbers of actors to create the ring
	var nb_actors = 503
end

var first = new ThreadRing(1)
var current = new ThreadRing(2)
first.next = current
for i in [3..nb_actors] do
	var t = new ThreadRing(i)
	current.next = t
	current = t
end
current.next = first
var n = if args.is_empty then 1000 else args[0].to_i
first.send_token(n)
