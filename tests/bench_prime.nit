# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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


redef class Int
	fun is_premier: Bool
	do
		var i = 2
		while i < self do
			if self % i == 0 then
				return true
			end
			i = i + 1
		end
		return false
	end
end

if 4012009.is_premier then
	printn("premier\n")
else
	printn("pas premier\n")
end
