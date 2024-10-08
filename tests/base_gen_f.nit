# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

class G[E: G[E]]
	fun ide(e: E): E
	do
		return e
	end
	fun foo is abstract
end

class G1
	super G[G1]
	redef fun foo
	do
		1.output
	end

	init init_g1 do end
end

class G2
	super G[G2]
	redef fun foo
	do
		2.output
	end

	init init_g2 do end
end

