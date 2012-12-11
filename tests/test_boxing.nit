# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006 Floréal Morandat <morandat@lirmm.fr>
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

# By Flop

class Gene[T]
	readable var _a_ : T
	fun a: T
	do
		return _a_
	end

	init(a:T) do _a_ = a

end
class GeneBool
	super Gene[Bool]
	fun a=(b: Bool)
	do
		_a_ = b
	end

	init(a) do super(a)
end

var x = new Gene[Bool](false)
var g = new GeneBool(false)
g.a = true
print(g.a)
