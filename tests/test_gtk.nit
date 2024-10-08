# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

class MyApp
	super GtkCallable

	var win : GtkWindow is noinit

	var container : GtkContainer is noinit

	var lbl : GtkLabel is noinit
	var but_ok : GtkButton is noinit
	var but_cancel : GtkButton is noinit

	redef fun signal( sender, user_data )
	do
		if user_data != null then print "Userdata: {user_data}"

		if sender == but_ok then
			print "ok!"
			gtk_main_quit
		else if sender == but_cancel then
			print "cancel!"
			gtk_main_quit
		else
			print sender
		end
	end

	init
	do
		gtk_init

		win = new GtkWindow(new GtkWindowType.toplevel)
		win.connect_destroy_signal_to_quit

		container = new GtkGrid
		win.add( container )

		lbl = new GtkLabel( "Hello world" )
		container.add( lbl )

		but_ok = new GtkButton.from_stock( "OK" )
		but_ok.signal_connect( "clicked", self, "ok" )
		container.add( but_ok )

		but_cancel = new GtkButton.from_stock( "Cancel" )
		but_cancel.signal_connect( "clicked", self, null )
		container.add( but_cancel )

		win.show_all
	end
end

if "NIT_TESTING".environ != "true" then
	var app = new MyApp
	gtk_main
end
