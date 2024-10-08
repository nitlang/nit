# This file is part of NIT ( https://nitlanguage.org ).
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

# This module show an example of universal accessors
# Remark: implicit accessors are not used here

# The Time class represents a quantity of time
class Time
	# Internally, the quantity of time is stored in minutes
	var min: Int = 0

	# The quantity ot time (in hours)
	fun hour: Int
	do
		# Need to transform minutes in hours
		return min / 60
	end

	# Set the quantity of time (in hour)
	fun hour=(i: Int)
	do
		# Need to transform hours in minutes
		min = i * 60
	end

	# The quantity of tyme in human readable form (h:m)
	redef fun to_s: String
	do
		var s = "{hour}:{min%60}"
		return s
	end


	# A null quantity of time
	init
	do 
	end
end # class Time


# Main part

var t = new Time
# Everything is 0
printn("time: ", t, " - min: ", t.min, " - hour: ", t.hour, "\n")

# Syntaxic sugar is good
t.min = 1600
printn("time: ", t, " - min: ", t.min, " - hour: ", t.hour, "\n")

t.hour = 50
printn("time: ", t, " - min: ", t.min, " - hour: ", t.hour, "\n")
