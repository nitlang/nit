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

interface A
	var i: Int is abstract
	fun j: Int is abstract
	fun j=(o: Int) is abstract
end

class B
	super A
	var k: Int is abstract
	fun l: Int is abstract
	fun l=(o: Int) is abstract
end

class C
	super B
	redef fun i do
		'i'.output
		return 1
	end
	redef fun i=(o) do
		'i'.output
		'='.output
		o.output
	end
	redef fun j do
		'j'.output
		return 2
	end
	redef fun j=(o) do
		'j'.output
		'='.output
		o.output
	end
	redef fun k do
		'k'.output
		return 3
	end
	redef fun k=(o)
	do
		'k'.output
		'='.output
		o.output
	end
	redef fun l do
		'l'.output
		return 4
	end
	redef fun l=(o) do
		'l'.output
		'='.output
		o.output
	end
end

var c = new C
c.i.output
c.j.output
c.k.output
c.l.output
