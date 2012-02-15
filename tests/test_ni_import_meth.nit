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

class A
	fun nity do print "nity"
	fun nity1 ( x : Int ) do print "nity1 {x}"
	fun nity2 ( x : Int, y : Int ) do print "nity2 {x} {y}"

	fun ex_sees_nity is extern import nity

	fun ex_sees_nities is extern import nity1, nity2
end

var a = new A
a.ex_sees_nity
a.ex_sees_nities
