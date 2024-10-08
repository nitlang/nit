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

import base_arg_default

class B
	super A
	redef fun foo(x,y,z,t,u,v) do super
end

#alt2#redef class A
#alt2#	redef fun foo(x,y,z,t,u,v) do super
#alt2#end

var a = new A #alt1# var a = new B
a.foo(a=1,b=2,3,4,e=5,f=6)
a.foo(f=6,3,e=5,b=2,4,a=1)
#alt3#a.foo(3,e=5,b=2,4)

var b = new B #alt1# var b = new A
b.foo(x=1,y=2,3,4,u=5,v=6)
b.foo(v=6,3,u=5,y=2,4,x=1)
#alt3#b.foo(3,u=5,y=2,4)
