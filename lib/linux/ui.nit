# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Implementation of the app.nit UI module for GNU/Linux
module ui

import app::ui
import gtk::v3_10

import data_store

redef class App
	redef fun setup do gtk_init

	# Single GTK window of this application
	var native_window: GtkWindow is lazy do
		var win = new GtkWindow(new GtkWindowType.toplevel)
		win.connect_destroy_signal_to_quit
		win.titlebar = native_header_bar
		win.add native_stack
		return win
	end

	# GTK 3 header bar
	var native_header_bar: GtkHeaderBar is lazy do
		var bar = new GtkHeaderBar
		bar.title = "app.nit" # TODO offer a portable API to name windows
		bar.show_close_button = true

		# TODO add back button

		return bar
	end

	# Root `GtkStack` used to simulate the many app.nit windows
	var native_stack: GtkStack is lazy do
		var stack = new GtkStack
		stack.homogeneous = false
		return stack
	end

	# On GNU/Linux, we go through all the callbacks once,
	# there is no complex life-cycle.
	redef fun run
	do
		app.on_create
		app.on_restore_state
		app.on_start
		app.on_resume

		native_window.show_all
		gtk_main

		app.on_pause
		app.on_stop
		app.on_save_state
		app.on_destroy
	end

	# Spacing between GTK controls, default at 2
	var control_spacing = 2 is writable

	redef fun window=(window)
	do
		var root_view = window.view
		assert root_view != null
		native_stack.add root_view.native
		native_stack.visible_child = root_view.native
		super
	end
end

redef class Control
	super GtkCallable
	super Finalizable

	# The GTK element used to implement `self`
	fun native: NATIVE is abstract

	# Type of `native`
	type NATIVE: GtkWidget

	redef fun finalize
	do
		var native = native
		if not native.address_is_null then native.destroy
	end
end

redef class CompositeControl
end

# On GNU/Linux, a window is implemented by placing the `view` in a `GtkStack` in the single GTK window
redef class Window

	# Root view of this window
	var view: nullable View = null

	redef fun add(view)
	do
		if view isa View then
			self.view = view
		end

		super
	end
end

redef class View
	init do native.show

	redef fun enabled do return native.sensitive
	redef fun enabled=(enabled) do native.sensitive = enabled or else true
end

redef class Layout
	redef type NATIVE: GtkBox

	redef fun add(item)
	do
		super
		if item isa View then native.add item.native
	end

	redef fun remove(item)
	do
		super
		if item isa View then native.remove item.native
	end
end

redef class HorizontalLayout
	redef var native = new GtkBox(new GtkOrientation.horizontal, app.control_spacing)

	redef fun add(item)
	do
		super
		native.homogeneous = true
		native.set_child_packing(item.native, true, true, 0, new GtkPackType.start)
	end
end

redef class VerticalLayout
	redef var native = new GtkBox(new GtkOrientation.vertical, app.control_spacing)

	redef fun add(item)
	do
		super

		# FIXME abstract the use either homogeneous or weight to balance views size in a layout
		native.homogeneous = true
		native.set_child_packing(item.native, true, true, 0, new GtkPackType.start)
	end
end

redef class ListLayout
	redef type NATIVE: GtkListBox
	redef var native = new GtkListBox

	init do native.selection_mode = new GtkSelectionMode.none
end

redef class Button
	redef type NATIVE: GtkButton
	redef var native = new GtkButton

	redef fun text do return native.text
	redef fun text=(value) do native.text = (value or else "").to_s

	redef fun signal(sender, data) do notify_observers new ButtonPressEvent(self)

	init do native.signal_connect("clicked", self, null)
end

redef class Label
	redef type NATIVE: GtkLabel
	redef var native = new GtkLabel("")

	redef fun text do return native.text
	redef fun text=(value) do native.text = (value or else "").to_s
end

redef class TextInput
	redef type NATIVE: GtkEntry
	redef var native = new GtkEntry

	redef fun text do return native.text
	redef fun text=(value) do
		if value == null then value = ""
		native.text = value.to_s
	end

	redef fun is_password=(value)
	do
		native.visibility = value != true
		super
	end
end
