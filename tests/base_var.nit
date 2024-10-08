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

fun foo: Int do return 1
fun bar do end

var a1: Int
var b1: Float
a1 = 5
b1 = 5.5
#alt1#a1 = b1
#alt2#b1 = a1
a1.output
b1.output

var a2: Int = 1
var b2: Float = 1.0
a2 = 5
b2 = 5.5
#alt3#a2 = b2
#alt4#b2 = a2
a2.output
b2.output

var a3 = 1
var b3 = 1.0
a3 = 5
b3 = 5.5
#alt5#a3 = b3
#alt6#b3 = a3
a3.output
b3.output

var a4: Int = foo
a4.output
var a5 = foo
a5.output
#alt7#var a6: Int = bar
#alt8#var a7 = bar
