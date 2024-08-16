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

# This test shows the verification of contracts in a parallel execution.

import pthreads

fun foo is
	threaded
	expect(contract_foo)
do
	print "Foo"
	bar("Foo thread")
end

fun bar(thread_name: String)
is
	threaded
	expect(contract_bar(thread_name))
do
	print "Bar called from {thread_name}"
end

fun contract_foo: Bool
do
	print("Foo contract")
	return true
end

fun contract_bar(thread_name: String): Bool
do
	sys.nanosleep(3,0)
	print("Bar contract called from {thread_name}")
	return true
end


foo
sys.nanosleep(1,0)
bar("Main thread")
sys.nanosleep(5,0)
