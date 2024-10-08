# This file is part of NIT ( https://nitlanguage.org ).
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

#alt1#class Fail[E]
#alt1#end

fun trash(g: Char) do end

var ok: Int = 1
var a: Fail = 5
trash(a)
var na: nullable Fail = null
trash(na)

trash(ok isa Fail)
trash(new Fail)
trash(new Fail.fail(5))
trash(ok.as(Fail))

