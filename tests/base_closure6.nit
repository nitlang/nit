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

class A
	meth foo: U
		with bar
	do
		return new U
	end
end

class T
end

class U
special T
end

class V
special T
end

class W
special U
special V
end

var a = new A

var t: T = new T
var u: U = new U
var v: V = new V
var w: W = new W

var y: Object
#alt1#var y: U
y = a.foo with do 0.output
y = a.foo with do break t
y = a.foo with do break u
y = a.foo with do break v
y = a.foo with do break w
y = a.foo with do
	break t
	break u
	break v
	break w
end
y = a.foo with do
	break u
	break v
	break w
end
