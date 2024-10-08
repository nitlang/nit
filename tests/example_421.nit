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

# 421 sequence

printn("Please enter a number greater than 1 >")
var steps = 0
var x = stdin.read_line.to_i # $ denotes global variables
while x > 1 do
	if x % 2 == 0 then
		x = x / 2
	else
		x = 3 * x + 1
	end
	steps = steps + 1
end

printn(steps, " steps required to return to 1\n")
