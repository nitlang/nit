# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# GTK calculator
module calculator_gtk

import calculator_logic

import gtk

class CalculatorGui
	super GtkCallable

	var win : GtkWindow is noinit
	var container : GtkGrid is noinit

	var lbl_disp : GtkLabel is noinit
	var but_eq : GtkButton is noinit
	var but_dot : GtkButton is noinit

	var context = new CalculatorContext

	redef fun signal( sender, user_data )
	do
		var after_point = context.after_point
		if after_point == null then
		    after_point = 0
		else
		    after_point = (after_point.abs)
		end

		if user_data isa Char then # is an operation
			var c = user_data
			if c == '.' then
				but_dot.sensitive= false
				context.switch_to_decimals
				lbl_disp.text = "{context.current.to_i}."
			else
				but_dot.sensitive= true
				context.push_op( c )

				var s = context.result.to_precision_native(6)
				var index : nullable Int = null
				for i in s.length.times do
				    var chiffre = s.chars[i]
				    if chiffre == '0' and index == null then
					index = i
				    else if chiffre != '0' then
					index = null
				    end
				end
				if index != null then
					s = s.substring(0, index)
					if s.chars[s.length-1] == ',' then s = s.substring(0, s.length-1)
				end
				lbl_disp.text = s
			end
		else if user_data isa Int then # is a number
			var n = user_data
			context.push_digit( n )
			lbl_disp.text = context.current.to_precision_native(after_point)
		end
	end

	init
	do
		init_gtk

		win = new GtkWindow( 0 )

		container = new GtkGrid(5,5,true)
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
			container.attach( but, 3, r, 1, 1 )
			r+=1
		end

		# =
		but_eq = new GtkButton.with_label( "=" )
		but_eq.request_size( 64, 64 )
		but_eq.signal_connect( "clicked", self, '=' )
		container.attach( but_eq, 4, 3, 1, 2 )

		# .
		but_dot = new GtkButton.with_label( "." )
		but_dot.request_size( 64, 64 )
		but_dot.signal_connect( "clicked", self, '.' )
		container.attach( but_dot, 1, 4, 1, 1 )

		#C
		var but_c =  new GtkButton.with_label( "C" )
		but_c.request_size( 64, 64 )
		but_c.signal_connect("clicked", self, 'C')
		container.attach( but_c, 2, 4, 1, 1 )

		win.show_all
	end
end

# graphical application
if "NIT_TESTING".environ == "true" then exit 0

var app = new CalculatorGui
run_gtk
