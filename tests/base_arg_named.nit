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

var a = new A
a.foo(a=1,b=2,c=3,d=4,e=5,f=6)
a.foo(a=1,b=2,3,4,e=5,f=6)
a.foo(f=6,3,e=5,b=2,4,a=1)
a.foo(f=6,d=4,e=5,b=2,c=3,a=1)
#alt1#a.foo(3,e=5,b=2,4)

a.bar

a.bar(a=1)
a.bar(2,a=1)
a.bar(2,a=1,3)
a.bar(b=2)
a.bar(1,b=2)
a.bar(1,b=2,3)
a.bar(c=3)
a.bar(1,c=3)
a.bar(1,c=3,2)

a.bar(a=1,b=2)
a.bar(a=1,3,b=2)
a.bar(a=1,c=3)
a.bar(a=1,2,c=3)
a.bar(b=2,c=3)
a.bar(b=2,1,c=3)

a.bar(b=2,a=1,c=3)

#alt1#a.bar(2,a=1,3, 4)
#alt1#a.bar(fail=1)
#alt1#a.bar(a=1,a=1)
