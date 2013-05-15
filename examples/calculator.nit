# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Alexis Laferrière <alexis.laf@xymus.net>
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

import gtk

class CalculatorContext
	var result : nullable Float = null

	var last_op : nullable Char = null

	var current : nullable Float = null
	var after_point : nullable Int = null

	fun push_op( op : Char )
	do
		apply_last_op_if_any
		last_op = op # store for next push_op

		# prepare next current
		after_point = null
		current = null
	end

	fun push_digit( digit : Int )
	do
		var current = current
		if current == null then current = 0.0

		var after_point = after_point
		if after_point == null then
			current = current * 10.0 + digit.to_f
		else
			current = current + digit.to_f * 10.0.pow(after_point.to_f)
			after_point -= 1
		end

		self.current = current
	end

	fun switch_to_decimals
	do
		if after_point != null then return

		after_point = -1
	end

	fun apply_last_op_if_any
	do
		var op = last_op

		var result = result
		if result == null then result = 0.0

		var current = current
		if current == null then current = 0.0

		if op == null then
			result = current
		else if op == '+' then
			result = result + current
		else if op == '-' then
			result = result - current
		else if op == '/' then
			result = result / current
		else if op == '*' then
			result = result * current
		end
		self.result = result
		self.current = null
	end
end

class CalculatorGui
	super GtkCallable

	var win : GtkWindow
	var container : GtkGrid

	var lbl_disp : GtkLabel
	var but_eq : GtkButton

	var context = new CalculatorContext

	redef fun signal( sender, user_data )
	do
		if user_data isa Char then # is an operation
			var c = user_data
			if c == '.' then
				context.switch_to_decimals
			else
				context.push_op( c )
				lbl_disp.text = context.result.to_s
			end
		else if user_data isa Int then # is a number
			var n = user_data
			context.push_digit( n )
			lbl_disp.text = context.current.to_s
		end
	end

	init
	do
		init_gtk

		win = new GtkWindow( 0 )

		container = new GtkGrid(2,1,true)
		win.add( container )

		lbl_disp = new GtkLabel( "_" )
		container.attach( lbl_disp, 0, 0, 5, 1 )

		# digits
		for n in [0..9] do
			var but = new GtkButton.with_label( n.to_s )
			but.request_size( 64, 64 )
			but.signal_connect( "clicked", self, n )
			if n == 0 then
				container.attach( but, 0, 4, 1, 1 )
			else container.attach( but, (n-1)%3, 3-(n-1)/3, 1, 1 )
		end

		# operators
		var r = 1
		for op in ['+', '-', '*', '/' ] do
			var but = new GtkButton.with_label( op.to_s )
			but.request_size( 64, 64 )
			but.signal_connect( "clicked", self, op )
			container.attach( but, 4, r, 1, 1 )
			r+=1
		end

		# =
		but_eq = new GtkButton.with_label( "=" )
		but_eq.request_size( 64, 64 )
		but_eq.signal_connect( "clicked", self, '=' )
		container.attach( but_eq, 5, 3, 1, 2 )

		# .
		var but_dot = new GtkButton.with_label( "." )
		but_dot.request_size( 64, 64 )
		but_dot.signal_connect( "clicked", self, '.' )
		container.attach( but_dot, 1, 4, 1, 1 )

		win.show_all
	end
end

# context tests
var context = new CalculatorContext
context.push_digit( 1 )
context.push_digit( 2 )
context.push_op( '+' )
context.push_digit( 3 )
context.push_op( '*' )
context.push_digit( 2 )
context.push_op( '=' )
var r = context.result.to_precision( 2 )
assert r == "30.00" else print r

context = new CalculatorContext
context.push_digit( 1 )
context.push_digit( 4 )
context.switch_to_decimals
context.push_digit( 1 )
context.push_op( '*' )
context.push_digit( 3 )
context.push_op( '=' )
r = context.result.to_precision( 2 )
assert r == "42.30" else print r

context.push_op( '+' )
context.push_digit( 1 )
context.push_digit( 1 )
context.push_op( '=' )
r = context.result.to_precision( 2 )
assert r == "53.30" else print r

context = new CalculatorContext
context.push_digit( 4 )
context.push_digit( 2 )
context.switch_to_decimals
context.push_digit( 3 )
context.push_op( '/' )
context.push_digit( 3 )
context.push_op( '=' )
r = context.result.to_precision( 2 )
assert r == "14.10" else print r

# graphical application

if "NIT_TESTING".environ != "true" then
	var app = new CalculatorGui
	run_gtk
end
