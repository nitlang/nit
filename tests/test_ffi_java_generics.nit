# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module test_ffi_java_generics

import java

in "Java" `{
	import java.util.*;
	import java.util.concurrent.LinkedBlockingQueue;
`}

extern class JavaQueueOfString in "Java" `{ java.util.Queue<String> `}
	new in "Java" `{
		return new LinkedBlockingQueue<String>();
	`}

	fun offer(o: JavaString) in "Java" `{ self.offer(o); `}

	fun remove: JavaString in "Java" `{ return self.remove(); `}

	redef fun output in "Java" `{
		for (String s: self) {
			System.out.println(s);
		}
	`}
end

var ll = new JavaQueueOfString
ll.offer "a".to_java_string
ll.offer "b".to_java_string
ll.offer "c".to_java_string
ll.offer "d".to_java_string
ll.offer "e".to_java_string
ll.offer "f".to_java_string
ll.output
print "remove: " + ll.remove.to_s
print "remove: " + ll.remove.to_s
print "remove: " + ll.remove.to_s
print "remove: " + ll.remove.to_s
ll.output
