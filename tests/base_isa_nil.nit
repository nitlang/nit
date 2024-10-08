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

import kernel

class A

	init do end
end

class B

	init do end
end


var a: Object = new A
var b: Object = new B
(a isa A).output
(a isa Object).output
(not a isa B).output
(a isa nullable A).output
(a isa nullable Object).output
(not a isa nullable B).output
var c: nullable Object = null
(c isa A).output
(c isa Object).output
(c isa B).output
(c isa nullable A).output
(c isa nullable Object).output
(c isa nullable B).output
