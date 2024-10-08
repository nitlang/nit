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

# A very simple example of the actor model
module simple is example

import actors


# A class anotated with `actor`
# It automatically gets the `async` property to make asynchronous calls on it
class A
	actor

	# Prints "foo"
	fun foo do print "foo"

	# Returns i^2
	fun bar(i : Int): Int do return i * i
end

# Create a new instance of A
var a = new A

# Make an asynchronous call
a.async.foo

# Make a synchronous call
a.foo

# Make an asynchronous call
# Which return a `Future[Int]` instead of `Int`
var r = a.async.bar(5)

# Retrieve the value of the future
print r.join

# Make a Synchronous call
print a.bar(5)
