# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Classes and services to use libGTK widgets
module gtk

in "C Header" `{
	#include <gtk/gtk.h>
`}

`{
		/* callback user data */
		typedef struct {
			GtkCallable to_call;
			nullable_Object user_data;
		} NitGtkSignal;

		void nit_gtk_callback_func( GtkWidget *widget,
							gpointer   callback_data ) {
			NitGtkSignal *data;
			data = (NitGtkSignal*)callback_data;
			GtkCallable_signal( data->to_call, widget, data->user_data );
		}
`}

redef interface Object
	protected fun init_gtk `{ gtk_init( 0, NULL ); `}
	protected fun run_gtk `{ gtk_main(); `}
	protected fun quit_gtk `{ gtk_main_quit(); `}
end

interface GtkCallable
	# return true to stop event processing, false to let it propagate
	fun signal( sender : GtkWidget, user_data : nullable Object ) is abstract
end

extern GdkEvent `{GdkEvent *`}
end


#Base class for all widgets
#@https://developer.gnome.org/gtk3/stable/GtkWidget.html
extern GtkWidget `{GtkWidget *`}
	fun show_all is extern `{ gtk_widget_show_all( recv ); `}

	fun signal_connect( signal_name : String, to_call : GtkCallable, user_data : nullable Object ) is extern import String::to_cstring, GtkCallable::signal, Object as not nullable `{
		NitGtkSignal *data = malloc( sizeof(NitGtkSignal) );

		GtkCallable_incr_ref( to_call );
		Object_incr_ref( user_data );

		data->to_call = to_call;
		data->user_data = user_data;

		/*Use G_CALLBACK() to cast the callback function to a GCallback*/
		g_signal_connect( recv,
							String_to_cstring( signal_name ),
							G_CALLBACK(nit_gtk_callback_func),
							data );
	`}

	redef fun == ( o ) do return o isa GtkWidget and equal_to_gtk_widget( o )

	private fun equal_to_gtk_widget( o : GtkWidget ) : Bool `{
		return recv == o;
	`}

	fun request_size( width, height : Int ) `{
		gtk_widget_set_size_request( recv, width, height );
	`}
end

#Base class for widgets which contain other widgets
#@https://developer.gnome.org/gtk3/stable/GtkContainer.html
extern GtkContainer `{GtkContainer *`}
	super GtkWidget

	fun add( widget : GtkWidget ) is extern `{
		gtk_container_add( recv, widget );
	`}
end

#A container with just one child
#@https://developer.gnome.org/gtk3/stable/GtkBin.html
extern GtkBin `{GtkBin *`}
	super GtkContainer
	
	fun child : GtkWidget is extern `{
		return gtk_bin_get_child( recv );
	`}	
end

#Pack widgets in a rows and columns
#@https://developer.gnome.org/gtk3/3.3/GtkGrid.html
extern GtkGrid `{GtkGrid *`}
	super GtkContainer

	# Create a grid with a fixed number of rows and columns
	new ( rows : Int, columns : Int, homogeneous : Bool ) `{
		return (GtkGrid*)gtk_grid_new(); // rows, columns, homogeneous );
	`}

	# Set a widget child inside the grid at a given position
	fun attach( child : GtkWidget, left, top, width, height : Int ) `{
		gtk_grid_attach( recv, child, left, top, width, height );
	`}
end

#Toplevel which can contain other widgets
#@https://developer.gnome.org/gtk3/stable/GtkWindow.html
extern GtkWindow `{GtkWindow *`}
	super GtkBin

	new ( flag : Int ) is extern `{
		GtkWindow *win;

		win = GTK_WINDOW(gtk_window_new( flag ));
		g_signal_connect(win, "destroy", G_CALLBACK(gtk_main_quit), NULL);
		return win;
	`}

	fun title=( title : String ) is extern import String::to_cstring `{
		gtk_window_set_title( recv, String_to_cstring( title ) );
	`}

	#The "destroy" signal is emitted when a widget is destroyed, either by explicitly calling gtk_widget_destroy() or when the widget is unparented. Top-level GtkWindows are also destroyed when the Close window control button is clicked.
	fun on_close( to_call : GtkCallable, user_data : nullable Object )
	do
		signal_connect( "destroy", to_call, user_data )
	end

	fun resizable : Bool is extern `{
		return gtk_window_get_resizable( recv );
	`}

	fun resizable=( is_resizable : Bool) is extern `{
		return gtk_window_set_resizable( recv, is_resizable );
	`}

	#Activates the current focused widget within the window.
	#returns TRUE if a widget got activated.
	fun activate_focus : Bool is extern `{
		return gtk_window_activate_focus( recv );
	`}

	#Sets a window modal or non-modal. Modal windows prevent interaction with other windows in the same application.
	fun modal=( is_modal : Bool ) is extern `{
		gtk_window_set_modal( recv, is_modal );
	`}

	#Windows can't actually be 0x0 in size, they must be at least 1x1
	#but passing 0 for width and height is OK, resulting in a 1x1 default size.
	#params width in pixels, or -1 to unset the default width
	#params height in pixels, or -1 to unset the default height
	fun default_size( width : Int, height : Int ) is extern `{
		gtk_window_set_default_size( recv, width, height );	
	`} 

	#Activates the default widget for the window
	#unless the current focused widget has been configured to receive the default action (see gtk_widget_set_receives_default()), in which case the focused widget is activated.
	fun activate_default : Bool is extern `{
		return gtk_window_activate_default( recv );		
	`}

	fun active : Bool is extern `{
		return gtk_window_is_active( recv );
	`}

	#Returns whether the input focus is within this GtkWindow. For real toplevel windows, this is identical to gtk_window_is_active(), but for embedded windows, like GtkPlug, the results will differ.
	fun has_toplevel_focus : Bool is extern `{
		return gtk_window_has_toplevel_focus( recv );
	`}

	fun get_focus : GtkWidget is extern `{
		return gtk_window_get_focus( recv );	
	`}

	fun set_focus( widget : GtkWidget ) is extern `{
		return gtk_window_set_focus( recv, widget );	
	`}

	fun get_default_widget : GtkWidget is extern `{
		return gtk_window_get_default_widget( recv );	
	`}

	fun set_default_widget( widget : GtkWidget ) is extern `{
		return gtk_window_set_default( recv, widget );	
	`}

	fun maximize is extern `{
		return gtk_window_maximize( recv );	
	`}

	fun unmaximize is extern `{
		return gtk_window_unmaximize( recv );	
	`}

	fun fullscreen is extern `{
		return gtk_window_fullscreen( recv );	
	`}

	fun unfullscreen is extern `{
		return gtk_window_unfullscreen( recv );	
	`}

	fun keep_above=( setting : Bool ) is extern `{
		gtk_window_set_keep_above( recv, setting );
	`}

	fun keep_below=( setting : Bool ) is extern `{
		gtk_window_set_keep_below( recv, setting );
	`}
end

extern GtkColorSelectionDialog
	super GtkWidget
	new ( title : String, parent : GtkWindow ) is extern  import String::to_cstring `{
		 return gtk_color_chooser_dialog_new( String_to_cstring( title ), parent );
	`}
end

#A widget that displays a small to medium amount of text
#@https://developer.gnome.org/gtk3/3.2/GtkLabel.html
extern GtkLabel `{GtkLabel*`}
	super GtkWidget

	# Create a GtkLabel with text
	new ( text : String ) is extern import String::to_cstring `{
		return (GtkLabel*)gtk_label_new( String_to_cstring( text ) );
	`}

	# Set the text of the label
	fun text=( text : String ) import String::to_cstring `{
		gtk_label_set_text( recv, String_to_cstring( text ) );
	`}

	# Returns the text of the label
	fun text : String import String::from_cstring `{
		return new_String_from_cstring( (char*)gtk_label_get_text( recv ) );
	`}

	# Sets the angle of rotation for the label. 
	# An angle of 90 reads from from bottom to top, an angle of 270, from top to bottom.
	fun angle=( degre : Float ) `{
		gtk_label_set_angle( recv, degre );
	`}

	# Returns the angle of rotation for the label.  
	fun angle : Float `{
		return gtk_label_get_angle( recv );
	`}
end

#A widget that emits a signal when clicked on
#@https://developer.gnome.org/gtk3/stable/GtkButton.html
extern GtkButton
	super GtkWidget

	new is extern `{
		return gtk_button_new(  );
	`}

	#Create a GtkButton with text
	new with_label( text : String ) is extern import String::to_cstring `{
		return gtk_button_new_with_label( String_to_cstring( text ) );
	`}

	new from_stock( stock_id : String ) is extern import String::to_cstring `{
		return gtk_button_new_from_stock( String_to_cstring( stock_id ) );
	`}
end

