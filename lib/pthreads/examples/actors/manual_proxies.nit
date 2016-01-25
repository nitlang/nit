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
# This module only shows the object model associated
# An abstract class, a proxy, and an implementation class
# which will be the active part in next developpments
module manual_proxies

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

	# Name of `self`
	var name: String

	# Distance traveled today
	var walked = 0

	# Day since `self` was created
	var day = 0

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

	redef fun walk(meters) do person.walk(meters)
	redef fun sleep(time) do person.sleep(time)

end

var b = new AbstractPerson("Jean Bon")
b.walk(10)
b.walk(5)
b.sleep(2.0)
b.walk(25)
