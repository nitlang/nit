# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Example of a class using serialization
module serialized_class

import serialize

# Example of a custom class using the serialize module
class MyClass
	super Serializable

	var a: Int
	var b: Bool
	var c: String

	init default
	do
		a = 1234
		b = false
		c = "something"
	end

	init load_from(s: StringDeserializationStream)
	do
		a = s.read_int
		b = s.read_bool
		c = s.read_string
	end

	redef fun dump_to(buffer)
	do
		a.dump_to(buffer)
		b.dump_to(buffer)
		c.dump_to(buffer)
	end

	redef fun to_s
	do
		return "{a}:{b}:{c}"
	end
end

# create original class in the classic way
var mc_ori = new MyClass.default
print mc_ori

# serialize to string buffer
var b = new Buffer
mc_ori.dump_to(b)

# deserialize
var s = new StringDeserializationStream(b.to_s)
var mc = new MyClass.load_from(s)
print mc
