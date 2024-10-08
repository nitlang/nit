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

var foo1@foo
var foo2@foo(foo)
var foo3@foo(1)
var foo4@foo(1+1)
var foo5@foo(assert true)
var foo6@foo(Foo)
var foo7@foo(@foo)
var foo8@foo(@(foo,foo))
var foo9@foo(foo, Foo, @foo, @(foo,foo))
var foo10@(foo, foo)
var foo11@(foo(foo, Foo, @foo, @(foo,foo)), foo(foo, Foo, @foo(foo), @(foo(foo),foo(foo))))
