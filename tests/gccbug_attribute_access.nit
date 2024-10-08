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

# By flop

# If your platfor is subject to a gcc bug, some solutions :
# * try global compilation (-g)
# * try to change the optimization flags
# * try to update your gcc version
class Foo
	var count: Int = 0
	fun run: Int
	do
		# Under some case gcc produce bad code here and make the if
		# evaluate the old _count value
		_count = _count + 1
		if _count >= 5 then
			_count = 0
		end
		return _count
	end

	init
	do
	end
end

var f = new Foo
var i = 1
while i <= 12 do
	print("{i}: {f.run}")
	i = i + 1
end

