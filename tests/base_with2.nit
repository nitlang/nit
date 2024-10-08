# This file is part of NIT ( https://nitlanguage.org ).
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

import core::kernel

class Foo
	var zz = 0
	fun work(i: Int) do
		var a = new Foo
		i.output
	end
	fun start do work 1
	fun finish do work 4
end

do
	with f = new Foo do
		f.work 2
		if true then break label
		f.work 30
	end
	50.output
end label
6.output
