# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Sample program using extern methods implemented in C and other FFI services
module extern_methods

redef enum Int
	# Get the `self`th Fibonacci number
	#
	# The FFI can be used to optimize performance critical methods.
	# Although this implementation is recursive, so there is not much gain.
	# Notice the `import fib` telling the compiler that there is a callback to `foo` from the C code.
	# From C, `foo` is called through the function `Int_fib` with the receiver as argument.
	fun fib: Int import fib `{
		if (self < 2)
			return self;
		else
			return Int_fib(self-1) + Int_fib(self-2);
	`}

	# System call to sleep for `self` seconds
	#
	# You can use the FFI to access any system functions, sometimes it's extremely simple.
	fun sleep_seconds `{
		sleep(self);
	`}

	# Print the result of adding `self` to `self.fib` with callbacks from C
	#
	# This method illustrates many forms of callbacks from C,
	# but it would have been better implemented in Nit (as done by `bar`).
	#
	# It is recommended to avoid callbacks when possible, use each language according to their strengths.
	# Nit is better than C to call methods and manipulate objects.
	# C has easy access to system functions, native libraries and it does low-level stuff.
	#
	# The implementation calls:
	# * the local `fib` method,
	# * the `+` operator, a method of `Int`,
	# * `to_s`, a method of all objects,
	# * `String.to_cstring`, a method of `String` to get as a `char*`.
	fun foo import fib, +, to_s, String.to_cstring `{
		long self_fib = Int_fib(self);
		long self_plus_fib = Int__plus(self, self_fib);

		String nit_string = Int_to_s(self_plus_fib);
		char *c_string = String_to_cstring(nit_string);

		printf("from C: self + fib(self) = %s\n", c_string);
	`}

	# Equivalent to `foo` but written in pure Nit
	fun bar do print "from Nit: self + fib(self) = {self+self.fib}"
end

redef class Float
	# Arctangent of `self` and `other` using `atan2` from `math.h`
	#
	# Universal types (Int, Float, Bool, etc.) are converted to their closest equivalent in C
	# (long, double, int, etc.).
	fun atan_with(other: Float): Float `{
		return atan2(self, other);
	`}
end

print 12.fib

print "sleeping 1 second..."
1.sleep

print 100.0.atan_with(200.0)
8.foo
8.bar
