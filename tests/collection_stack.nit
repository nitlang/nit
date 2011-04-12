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

# Test push method on Stack[Int]
fun test_push(stack: Stack[Int])
do
	for i in [0..10[ do
		stack.push(i)
	end
	printn "Test push method: "
	print stack.length == 10
end

# Test pop method on Stack[Int]
fun test_pop(stack: Stack[Int])
do
	var i = 10
	while i > 0 do
		i -= 1
		if stack.pop != i then print "Error in pop method"
	end
	printn "Test pop method: "
	print stack.length == 0
end

# Test peek method on Queue[Int]
fun test_peek(stack: Stack[Int])
do
	stack.push(-1)
	stack.push(10)
	printn "Test peek method: "
	print stack.peek == 10
end
