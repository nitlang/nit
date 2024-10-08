# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

class O
end

class A
	super O
	init do end
end

class U
end

class B
	super A
	super U
	init do end
end

var a: Object = new A
var b: Object = new B

(a isa Object).output
(a isa O).output
(a isa A).output
(not a isa U).output
(not a isa B).output
(not a isa Int).output
(not a isa Comparable).output

'\n'.output

(b isa Object).output
(b isa O).output
(b isa A).output
(b isa U).output
(b isa B).output
(not b isa Int).output
(not b isa Comparable).output
