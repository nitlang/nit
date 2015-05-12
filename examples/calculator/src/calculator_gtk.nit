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

# GTK calculator UI
class CalculatorGui
	super GtkCallable

	private var win: GtkWindow is noinit
	private var container: GtkGrid is noinit

	private var lbl_disp: GtkLabel is noinit
	private var but_eq: GtkButton is noinit
	private var but_dot: GtkButton is noinit

	private var context = new CalculatorContext

	redef fun signal(sender, op)
	do
		if op isa Char then # is an operation
			if op == '.' then
				but_dot.sensitive = false
				context.switch_to_decimals
			else
				but_dot.sensitive = true
				context.push_op op
			end
		else if op isa Int then # is a number
			context.push_digit op
		end

		lbl_disp.text = context.display_text
	end

	init
	do
		init_gtk

		win = new GtkWindow(new GtkWindowType.toplevel)
		win.connect_destroy_signal_to_quit

		container = new GtkGrid
		win.add container

		lbl_disp = new GtkLabel("_")
		container.attach(lbl_disp, 0, 0, 5, 1)

		# Digits
		for n in [0..9] do
			var but = new GtkButton.with_label(n.to_s)
			but.request_size(64, 64)
			but.signal_connect("clicked", self, n)
			if n == 0 then
				container.attach(but, 0, 4, 1, 1)
			else container.attach(but, (n-1)%3, 3-(n-1)/3, 1, 1)
		end

		# Operators
		var r = 1
		for op in ['+', '-', '*', '/'] do
			var but = new GtkButton.with_label(op.to_s)
			but.request_size(64, 64)
			but.signal_connect("clicked", self, op)
			container.attach(but, 3, r, 1, 1)
			r+=1
		end

		# =
		but_eq = new GtkButton.with_label("=")
		but_eq.request_size(64, 64)
		but_eq.signal_connect("clicked", self, '=')
		container.attach(but_eq, 4, 3, 1, 2)

		# .
		but_dot = new GtkButton.with_label(".")
		but_dot.request_size(64, 64)
		but_dot.signal_connect("clicked", self, '.')
		container.attach(but_dot, 1, 4, 1, 1)

		# C
		var but_c =  new GtkButton.with_label("C")
		but_c.request_size(64, 64)
		but_c.signal_connect("clicked", self, 'C')
		container.attach(but_c, 2, 4, 1, 1)

		win.show_all
	end
end

# Do not show GUI in when testing
if "NIT_TESTING".environ == "true" then exit 0

var app = new CalculatorGui
run_gtk
