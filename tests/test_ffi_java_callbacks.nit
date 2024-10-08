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

module test_ffi_java_callbacks

import java

class A
	fun bar do print "From Nit"

	fun i: Int do return 777

	fun foo import bar, i in "Java" `{
		A_bar(self);
		long i = A_i(self);
		System.out.println(i);
	`}

	fun getter(v: Float): Int in "Java" `{
		v = Math.round(v);
		return (int)v;
	`}
end

var a = new A
a.foo
print(a.getter(11.1))
print(a.getter(12345.689))
