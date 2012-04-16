# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
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

# This module illustrates some uses of the native interface, specifically
# how to use extern methods. Which means to implement a Nit method in C.
#
# Steps to use extern methods:
# 1. Write the Nit module (like this file), define extern methods
#    with "is extern" and identify possible callbacks with "import".
# 2. Run ithe "nits" program on the Nit module, it will generate
#    two files, extern_methods.stub.[ch] files.
# 3. Modify those files to implement Nit methods in C.
# 4. Rename the stub files to extern_methods.nit.c and extern_methods.nit.h.
module extern_methods

redef enum Int
	# Returns self'th fibonnaci number
	# implemented here in C for optimization purposes
	fun fib : Int is extern

	# System call to sleep for "self" seconds
	fun sleep is extern

	# Return atan2l( self, x ) from libmath
	fun atan_with( x : Int ) : Float is extern

	# This method callback to Nit methods from C code
	# It will use from C code:
	# * the local fib method
	# * the + operator, a method of Int
	# * to_s, a method of all objects
	# * String::to_cstring, a method of String to return an equivalent char*
	fun foo is extern import fib, +, to_s, String::to_cstring

	# Equivalent to foo but written in pure Nit
	fun bar do print "from Nit: self + fib(self) = {self+self.fib}"
end

print 12.fib

print "sleeping 1 second..."
1.sleep

print 100.atan_with( 200 )
8.foo
8.bar

