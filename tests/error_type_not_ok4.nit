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

#alt1#class Fail[E]
#alt1#end

class E
	type T: Fail
end

class F
	type T: Array[Fail]
end

class G
	readable writable var _a: Fail
	fun ma(a: Fail) do return
	fun mb(a: Array[Fail]) do return
	fun mc: Fail do return 0
	fun md: Array[Fail] do return 0
end

