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

module test_ffi_java_types

import java

in "Java" `{
	import java.util.*;
`}

extern class JavaArrayList in "Java" `{ java.util.ArrayList `}
	new in "Java" `{
		return new ArrayList();
	`}

	fun add(o: JavaString) in "Java" `{ self.add(o); `}

	redef fun output in "Java" `{
		for (Object i: self) {
			System.out.println((String)i);
		}
	`}

	fun sort in "Java" `{
		Collections.sort(self);
	`}
end

var ll = new JavaArrayList
ll.add "1".to_java_string
ll.add "2".to_java_string
ll.add "1".to_java_string
ll.add "3".to_java_string
ll.add "20".to_java_string
ll.add "10".to_java_string
ll.output
ll.sort
ll.output
