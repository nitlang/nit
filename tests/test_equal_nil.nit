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


class A
	init do end
end

var a: nullable A = new A
var b: nullable A = null
if a == null then printn(0) else printn(1)
if a is null then printn(0) else printn(1)
#if b == null then printn(1) else printn(0)
if b is null then printn(1) else printn(0)
if a == a then printn(1) else printn(0)
if a is a then printn(1) else printn(0)
#if b == b then printn(1) else printn(0)
if b is b then printn(1) else printn(0)
if a == b then printn(0) else printn(1)
if a is b then printn(0) else printn(1)
#if b == a then printn(0) else printn(1)
if b is a then printn(0) else printn(1)

