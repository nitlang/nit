# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011 Alexis Laferrière <alexis.laf@xymus.net>
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

class B
	var _i : Int = 0

	init do end

	init from( i : Int )
	do
		_i = i
	end

	fun i : Int do return _i end
end

class A
	fun ex_sees_b_attr( b : B ) : Int is extern import B::i

	fun ex_sees_b_init( i : Int ) : B is extern import B, B::from
end

var a = new A
var b100 = new B.from( 100 )

print "100=={a.ex_sees_b_attr( b100 )}"
print "33=={a.ex_sees_b_init( 33 ).i}"
