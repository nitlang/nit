# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2006-2008 Jean Privat <jean@pryen.org>
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

import test_super

redef class A
	redef fun foo
	do
		10.output
	end
end

redef class B
	redef fun foo
	do
		11.output
		test_super::super
		12.output
		A::super
		13.output
		test_super::B::super
	end
end

var b = new B
b.foo
