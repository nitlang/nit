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

import end

interface Object
	fun ==(o: nullable Object): Bool do return self.is_same_instance(o)
	fun !=(o: nullable Object): Bool do return not (self == o)
	fun is_same_instance(other: nullable Object): Bool is intern
end
class Bool
	fun output is intern
end

class A
end

var a = new A
var b: nullable A = new A

(a == a).output
(not a == b).output
(not a == null).output
(not b == a).output
(b == b).output
(not b == null).output

(not a != a).output
(a != b).output
(a != null).output
(b != a).output
(not b != b).output
(b != null).output
