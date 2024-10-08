#! /usr/bin/env nitc

# This file is part of NIT ( https://nitlanguage.org ).
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

# Test case for syntax highlighters.
#
# Also test spell-checking and comment recognition.
#
# TODO: Fix the annotations so the module actually compiles.
#
# SEE: [Nit](http://nitlanguage.org)
# XXX: Dummy task
module test_syntax is
	new_annotation new_annotation

	conditional

	deprecated
	fixed
	lazy
	noinit
	readonly
	writable
	optional
	autoinit
	noautoinit
	lateinit
	nosuper
	old_style_init
	abstract
	intern
	extern
	no_warning("fictive-module")
	generated

	pkgconfig("a libray from outer space")
	cflags ""
	ldflags "-framework Foundation"
	light_ffi

	platform "space-time"
end

import core::kernel
intrude import core::abstract_collection

in "C" `{
	#include <stdio.h>
`}

in "ObjC Header" `{
	#import <Foundation/Foundation.h>
`}

abstract class Blurry[ELEM_ENT: nullable Object]
	super core::kernel::Object

	type KIND: Char

	init do
		foo = 21
	end

	new do return new Concrete[Bool]

	# Stromgol says "Dou, dou, dou…"
	var stromgol: String = "Dou, dou, dou…"

	fun isset_stromgol: Bool do return isset _stromgol

	var foo: Int is writable, noinit

	fun noop do end

	protected fun shield(x, y: Int) do return 42 * x - y

	private fun secret
	do
	end

	public fun redundant(hello: Float) do
		if hello.to_i.to_c == 'z' then
			do
				var z = "hello = {hello}"
				abort
			catch
				output_value hello
			end
		else if true and not false or hello <= hello implies true then
			assert (123.digit_count(10) <=> 3) == 0
			var decimal = -2442.42e24
			var hexadecimal = 0xCAFE_BABE
			var octal = 0o007
			var binary = 0B1010
			var byte = (0XBEEFu8).as(not null)
			var long_string = """
			\{
				print "Hello {{{"#" + (octal * hexadecimal).to_s}}}"
			\}}}
			"""
			var long_string2 = '''
			"""print "Hello {{{"#" + (octal * hexadecimal).to_s}}}"
			'''
		else
			while false do end
			for i in [0..1[ do
				hello += 0
				continue
			end
			loop
				break
			end label sticker
			with y = self.stromgol do
			end
		end
	end

	fun is_ghost: Bool is abstract
end

class Concrete
	super Blurry

	auto_inspect

	fun answer do return once 42

	redef fun is_ghost do return false

	var camelCase: nullable Char = null
end

extern class CString `{ char * `}

	fun c_foo is extern import CString.to_s, Object.output `{
		if (0) {
			Object_output(CString_to_s(self));
		}
	`}

	fun cpp_foo import Object.output in "C++" `{
		if (true) {
			char *s = dynamic_cast<char *>(self);
		}
	`}

	fun java_foo in "Java" `{
		if (!System.out instanceof java.io.PrintStream) {
			throw new ClassCastException();
		}
	`}

	fun ojbc_foo in "ObjC" `{
		@autoreleasepool {
			NSLog(@"Hello World!");
		}
	`}
end

interface Protocol end
enum Integral end
universal Galaxy end

subset Limited
	isa do return false
end

fun output_value(value: Object) do value.output

var x = 42
assert x isa Int
__debug__ type Int: x
