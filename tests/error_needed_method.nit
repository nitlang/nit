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

import end
interface Object
	fun output is abstract
end

interface Discrete
end

enum Int
	super Discrete
end

interface Collection[E]
end

class String
end

enum CString
end

class Array[E]
	super Collection[E]
end

class Range[E]
	super Collection[E]
end

#alt1#var a = [1, 2]
#alt2#for i in new Collection[Int] do i.output
#alt3#var s = "str"
#alt4#var s2 = "str{5}str"
#alt5# #var r = [1..10] # DISABLE
#alt6#var r = [1..10[
#alt7#fun foo(x: Int...) do end
#alt7#foo(1, 2, 3)

do
end
