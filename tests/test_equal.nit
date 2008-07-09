# This file is part of NIT ( http://www.nitlanguage.org ).
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


var i: Int
var j: Int
var a: Object
var b: Object
if 1 == 1 then printn("ok") else printn("fail")
if not 1 == 2 then printn("ok") else printn("fail")
if 1 is 1 then printn("ok") else printn("fail")
if not 1 is 2 then printn("ok") else printn("fail")
i = 1
if i == 1 then printn("ok") else printn("fail")
if not i == 2 then printn("ok") else printn("fail")
if i is 1 then printn("ok") else printn("fail")
if not i is 2 then printn("ok") else printn("fail")
j = 1
if i == j then printn("ok") else printn("fail")
if i is j then printn("ok") else printn("fail")
a = 1
if a == i then printn("ok") else printn("fail")
if a is i then printn("ok") else printn("fail")
a = i
if a == i then printn("ok") else printn("fail")
if a is i then printn("ok") else printn("fail")
b = a
if a == b then printn("ok") else printn("fail")
if a is b then printn("ok") else printn("fail")
b = i
if a == b then printn("ok") else printn("fail")
if a is b then printn("ok") else printn("fail")
b = 1
if a == b then printn("ok") else printn("fail")
if a is b then printn("ok") else printn("fail")
