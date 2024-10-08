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

for i in [0..10[ do
	if i == 3 then
		continue
	else if i == 7 then
		break
	end
	print(i)
end

do
	var i = 0
	while i < 10 do
		if i == 3 then
			i = i + 2
			continue
		else if i == 7 then
			break
		end
		print(i)
		i = i + 1
	end
end

for i in [0..10[ do
	for j in [0..10[ do
		if j < i then
			continue
		else if j > i then
			break
		else
			print("{i}-{j}")
		end
	end
end
