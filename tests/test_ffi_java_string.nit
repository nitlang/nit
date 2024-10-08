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

module test_ffi_java_string

import java

class A
	fun bar(nstr: JavaString): JavaString
	do
		print nstr.to_s
		return "Also created in Nit".to_java_string
	end

	fun foo(input: JavaString): JavaString import bar in "Java" `{
		// Print string from Nit
		System.out.println(input);

		// Callback Nit with string
		String str = A_bar(self, "Created in Java");
		System.out.println(str);

		// Send back a string
		return "Also created in Java";
	`}
end

var a = new A
var java_string = a.foo("Created in Nit".to_java_string).to_s
print java_string.to_s
