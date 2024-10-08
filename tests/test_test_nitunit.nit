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

# NitUnit file for test_nitunit module.
module test_test_nitunit is test

intrude import test_nitunit

class TestX
	test

	var subject: X is noinit

	fun before_test is before do
		subject = new X
	end

	fun test_foo is test do
		subject.foo
	end

	# will fail
	fun test_foo1 is test do
		subject.foo1(10, 20)
		assert false
	end

	fun test_foo2 is test do
		assert subject.foo2
	end
end
