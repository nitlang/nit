# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module test_nitunit10 is test

import test_nitunit9

class TestNitunit10
	super TestNitunit9
	test

	fun before_class2 is before_all do
		assert true
	end

	fun before2 is before do
		assert true
	end

	fun test_bar is test do
		assert true
	end

	fun after2 is after do
		assert true
	end

	fun after_class2 is after_all do
		assert true
	end
end
