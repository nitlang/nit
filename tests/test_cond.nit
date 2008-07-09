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

var a = true
var b = false

if true then
	printn(1)
else if false then
	printn(0)
else if true then
	printn(0)
else
	printn(0)
end

if false then
	printn(0)
else if false then
	printn(0)
else if true then
	printn(1)
else
	printn(0)
end 

if false then
	printn(0)
else if false then
	printn(0)
else
	printn(1)
end

if a then
	printn(1)
else
	printn(0)
end

if b then
	printn(0)
else
	printn(1)
end
