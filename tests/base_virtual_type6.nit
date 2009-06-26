# This file is part of NIT ( http://www.nitlanguage.org ).
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

class G[E]
	type F: E
	type F2: F

	readable writable var _e: E
	readable writable var _f: F
	readable writable var _f2: F2

	init(e: E, f: F, f2: F2)
	do
		_e = e
		_f = f
		_f2 = f2
	end
end

var gi = new G[Int](0, 0, 0)

gi.e = 1 + gi.e
gi.e = 1 + gi.f
gi.e = 1 + gi.f2
gi.f = 1 + gi.e
gi.f = 1 + gi.f
gi.f = 1 + gi.f2
gi.f2 = 1 + gi.e
gi.f2 = 1 + gi.f
gi.f2 = 1 + gi.f2
