# This file is part of NIT ( https://nitlanguage.org ).
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

import kernel

class A
	var i: Int
	init (i: Int) do _i = i
	redef fun output do _i.output
end






var a: A = new A(1)
var na: nullable A = new A(2)
var o: Object = new A(3)
var no: nullable Object = new A(4)

var a1: A = a
#alt1#var a2: A = na
#alt2#var a3: A = o
#alt3#var a4: A = no
var na1: nullable A = na
var na2: nullable A = a
#alt4#var na3: nullable A = o
#alt5#var na4: nullable A = no
var o1: Object = a
#alt6#var o2: Object = na
var o3: Object = o
#alt7#var o4: Object = no
var no1: nullable Object = a
var no2: nullable Object = na
var no3: nullable Object = o
var no4: nullable Object = no
#alt8# var na5: nullable A = new nullable A(4)

#alt9#var a6: A = null
var na6: nullable A = null
#alt10#var o6: Object = null
var no6: nullable Object = null

