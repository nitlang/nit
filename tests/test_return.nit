# This file is part of NIT ( https://nitlanguage.org ).
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

fun a
do
	return
end

fun b: Int
do
	return 1
end

fun c: Int
do
	do
		return 1
	end
end

fun d: Int
do
	if true then
	else
		return 0
	end
	return 1
end

fun e: Int
do
	while true do
		return 1
	end
	return 0
end

fun f: Int
do
	if true then
		return 1
	else
		return 2
	end
end

a
print(b)
print(c)
print(d)
print(e)
print(f)
