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
	var _a_: Int = 0

	fun a: Int
	do
		return _a_ * 10
	end

	fun a=(a: Int)
	do
		_a_ = a / 10
	end



	init
	do
	end
end


var a = new A
printn(a.a, a._a_)
a.a = 10
printn(a.a, a._a_)
a._a_ = 10
printn(a.a, a._a_)
