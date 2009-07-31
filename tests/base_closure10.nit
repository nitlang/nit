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

fun foo !k
do
	' '.output
	'<'.output
	1.output
	k
	' '.output
	'>'.output
	1.output
end

fun test
do
	'<'.output
	0.output
	var i = 0
	while i < 3 do
		foo !k do
			' '.output
			' '.output
			'<'.output
			2.output
			if i == 1 then
				break
			end
			' '.output
			' '.output
			'>'.output
			2.output
		end
		i += 1
	end
	'>'.output
	0.output
end

test
