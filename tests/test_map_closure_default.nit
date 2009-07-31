# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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

redef class Map[K, V]
	fun get(k: K): V
		!def: V do abort
	do
		if has_key(k) then return self[k]
		var d = def
		self[k] = d
		return d
	end
end

var h = new HashMap[String, String]
h["bleu"] = "blue"

print "B:"

print h.has_key("bleu")
var v = h.get("bleu") !def do
	print "Error"
	abort
end
print v

print "R:"

print h.has_key("rouge")
v = h.get("rouge") !def do continue "red"
print v
print h.has_key("rouge")
v = h.get("rouge")
print v

print "N:"

print h.has_key("noir")
v = h.get("noir") !def do break "black"
print v
print h.has_key("noir")

#alt1#v = h.get("noir")
