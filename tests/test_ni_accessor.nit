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
	readable var _r : String = "r"
	writable var _w : String = "w"
	readable writable var _rw : String = "rw"

	fun print_all is extern import String::to_cstring, r, rw
	fun modify is extern import String::from_cstring, w=, rw=
end

class B
	fun print_and_modify( a : A ) is extern import A::rw, A::rw=, String::to_cstring, String::from_cstring
end

var a = new A
a.print_all
a.modify
a.print_all

var b = new B
b.print_and_modify( a )
