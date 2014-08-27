# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Common interface for `nitunit` test-suites.
module test_suite is
	# Annotation used by test-suite modules.
	new_annotation test_suite
end

# A test-suite that can be executed by `nitunit`.
#
# All test-suite classes must implement `TestSuite`.
class TestSuite
	# Internal empty init.
	private init nitunit do end

	# Method called before each test-case.
	#
	# Redefine this method to factorize code that have to be
	# executed before every test.
	fun before_test do end

	# Method called after each test-case.
	#
	# Redefine this method to factorize code that have to be
	# executed after every test.
	fun after_test do end
end

# Method called before each test-suite.
#
# Redefine this method to factorize code that have to be
# executed before every test suite.
fun before_module do end

# Method called after each test-suite.
#
# Redefine this method to factorize code that have to be
# executed after every test suite.
fun after_module do end
