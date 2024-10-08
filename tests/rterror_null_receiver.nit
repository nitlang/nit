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

import kernel
class A
	var foo: Int = 1
	var bar: Int = 2
end

var a: nullable A = null
(a == null).output
(a != null).output
#alt1#a.foo.output
#alt2#a.foo = 1
#alt3#a.foo += 1
#alt4#a._bar.output
#alt5#a._bar = 10
#alt6#a._bar += 10
