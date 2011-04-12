# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

# Test enqueue method on Queue[Int]
fun test_enqueue(queue: Queue[Int])
do
	for i in [0..10[ do
		queue.enqueue(i)
	end
	printn "Test enqueue method: "
	print queue.length == 10
end

# Test dequeue method on Queue[Int]
fun test_dequeue(queue: Queue[Int])
do
	for i in [0..10[ do
		if queue.dequeue != i then print "Error in dequeue method"
	end
	printn "Test dequeue method: "
	print queue.length == 0
end

# Test peek method on Queue[Int]
fun test_peek(queue: Queue[Int])
do
	queue.enqueue(-1)
	queue.enqueue(10)
	printn "Test peek method: "
	print queue.peek == -1
end
