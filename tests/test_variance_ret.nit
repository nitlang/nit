# This file is part of NIT ( http://www.nitlanguage.org ).
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
    meth foo: A
    do 
	    return new A
    end
    
    meth bar: B 
    do 
	    return new B 
    end
    
    meth baz: Int 
    do 
	    return 5 
    end
    
    redef meth output 
    do 
	    'A'.output 
    end

    init do end
end

class B
special A
    redef meth foo: B 
    do 
	    return new B 
    end
    redef meth bar: Int 
    do 
	    return 6 
    end
    redef meth baz: Int 
    do 
	    return 7 
    end
    redef meth output 
    do 
	    'B'.output 
    end

    init do end
end

redef class Int
special B
    redef meth foo: Int 
    do 
	    return 8 
    end
    redef meth bar: Int 
    do
	    return 9
    end
    redef meth output is intern
end

var a = new A
var b = new B
var ab: A = b
var i = 5
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
