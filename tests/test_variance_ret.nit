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
    fun foo: A
    do 
	    return new A
    end
    
    fun bar: B 
    do 
	    return new B 
    end
    
    fun baz: C
    do 
	    return new C(5)
    end
    
    redef fun output 
    do 
	    'A'.output 
    end

    init do end
end

class B
	super A
    redef fun foo: B 
    do 
	    return new B 
    end
    redef fun bar: C
    do 
	    return new C(6)
    end
    redef fun baz: C 
    do 
	    return new C(7)
    end
    redef fun output 
    do 
	    'B'.output 
    end

    init do end
end
class C
	super B
    redef fun foo: C
    do 
	    return new C(8) 
    end
    redef fun bar: C 
    do
	    return new C(9)
    end
    redef fun output do i.output
    var i: Int
    init (i: Int) do self.i = i
end
var a = new A
var b = new B
var ab: A = b
var i = new C(5)
var ai: A = i
var bi: B = i

a.foo.output
a.bar.output
a.baz.output

ab.foo.output
ab.bar.output
ab.baz.output

ai.foo.output
ai.bar.output
ai.baz.output

b.foo.output
b.bar.output
b.baz.output

bi.foo.output
bi.bar.output
bi.baz.output

i.foo.output
i.bar.output
i.baz.output
