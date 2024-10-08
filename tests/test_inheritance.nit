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

class A
	fun f do print(1) end
	fun g do print(1) end
	fun h do print(1) end
	fun i do print(1) end

	init do end
end

class B
	super A
	redef fun g do print(2) end
	redef fun i do print(2) end

	init do end
end

class C
	super A
	redef fun h do print(3) end
	redef fun i do print(3) end

	init do end
end

class D
	super B
	super C
	redef fun i do print(4) end

	init do end
end

var a = new A
var b = new B
var c = new C
var d = new D
a.f
a.g
a.h
a.i
b.f
b.g
b.h
b.i
c.f
c.g
c.h
c.i
d.f
d.g
d.h
d.i
