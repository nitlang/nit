# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

var x = 0
while x == 0 do x = 2
while x == 0 do
	x = 2
end
#alt1#while x == 0 do x = 2 end
while x == 0 do end
while x == 0 do
end
if x == 0 then x = 1 else x = 1
if x == 0 then x = 1 else
	x = 1
end
if x == 0 then x = 1
if x == 0 then x = 1 else
end
if x == 0 then
end
if x == 0 then
	x = 1
else
	x = 1
end
if x == 0 then
else
	x = 1
end
if x == 0 then
else x = 1

if x == 0 then
	if x == 0 then x = 0
else x = 0

if x == 0 then if x == 0 then x = 0
if x == 0 then if x == 0 then x = 0 else x = 0 
if x == 0 then if x == 0 then x = 0 else x = 0 else x = 0
#alt2#if x == 0 then if x == 0 then x = 0 else x = 0 else x = 0 else x = 0
if x == 0 then if x == 0 then x = 0 else if x == 0 then x = 0 else x = 0

if x == 0 then x = 1
#alt3#else x = 2
