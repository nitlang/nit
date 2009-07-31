# This file is part of NIT ( http://www.nitlanguage.org ).
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

fun repeat(x: Int)
	!each(i: Int)
do
	var c = 0
	while c < x do
		each(c)
		c += 1
	end
end

fun work
do
	repeat(4) !each i do
		i.output
		repeat(4) !each j do
			if i == 1 and j == 1 then continue
			if i == 2 and j == 2 then break
			if i == 3 and j == 3 then return
			' '.output
			j.output
		end
		if i == 0 then continue
		'\n'.output
	end
end

work

