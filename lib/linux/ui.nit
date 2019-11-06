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

# Request width of the GTK window for an app.nit application
#
# This is the minimum width of the window, it may grow bigger to fit content.
fun gtk_window_width_request: Int do return 480

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

		bar.add back_button.native

		return bar
	end

	# Root `GtkStack` used to simulate the many app.nit windows
	var native_stack: GtkStack is lazy do
		var stack = new GtkStack
		stack.homogeneous = false
		return stack
	end

	# Button on the header bar to go back
	var back_button = new BackButton is lazy

	# On GNU/Linux, we go through all the callbacks once,
	# there is no complex life-cycle.
	redef fun run
	do
		app.on_create
		app.on_restore_state
		app.on_resume

		gtk_main

		app.on_pause
		app.on_stop
		app.on_save_state
	end

	# Spacing between GTK controls, default at 2
	var control_spacing = 2 is writable

	redef fun window=(window)
	do
		var root_view = window.view
		assert root_view != null
		native_stack.add root_view.native
		native_stack.visible_child = root_view.native

		# FIXME These settings forces the GTK window to resize to its minimum
		# size when changing app.nit windows. It is not pretty, but it could be
		# improved with GTK 3.18 and interpolate_size.
		native_window.resizable = false

		native_window.show_all

		super

		if window.enable_back_button then
			back_button.native.show
		else back_button.native.hide
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
			view.native.valign = new GtkAlign.start
			view.native.set_size_request(gtk_window_width_request, 0)
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
		# FIXME abstract the use either homogeneous or weight to balance views size in a layout
		native.homogeneous = true
		native.set_child_packing(item.native, true, true, 0, new GtkPackType.start)
	end
end

redef class VerticalLayout
	redef var native = new GtkBox(new GtkOrientation.vertical, app.control_spacing)

	redef fun add(item)
	do
		super

		native.set_child_packing(item.native, true, true, 0, new GtkPackType.start)
	end
end

# On GNU/Linux, this is implemented by a `GtkListBox` inside a `GtkScrolledWindow`
redef class ListLayout

	redef type NATIVE: GtkScrolledWindow

	redef var native = new GtkScrolledWindow

	# Container inside `native`
	var native_list_box = new GtkListBox

	# `GtkListBoxRow` used to contains children `View`s
	var native_rows = new Map[View, GtkListBoxRow]

	init do
		native_list_box.selection_mode = new GtkSelectionMode.none
		native.add native_list_box

		# Set the size of the GtkScrolledWindow:
		# use content width and set static height
		native.set_policy(new GtkPolicyType.never, new GtkPolicyType.automatic)
		native.set_size_request(gtk_window_width_request, 640)
	end

	redef fun add(item)
	do
		super
		if item isa View then
			var native_row = new GtkListBoxRow
			#native_row.activable = false # TODO with GTK 3.14
			#native_row.selectable = false
			native_row.add item.native

			native_rows[item] = native_row
			native_list_box.add native_row
			native_row.show
		end
	end

	redef fun remove(item)
	do
		super
		if item isa View then
			var native_row = native_rows.get_or_null(item)
			if native_row == null then
				print_error "Error: {self} does not contains {item}"
				return
			end

			native_list_box.remove native_row
			native_rows.keys.remove item
			native_row.destroy
		end
	end
end

redef class Button
	redef type NATIVE: GtkButton
	redef var native = new GtkButton

	redef fun text do return native.text
	redef fun text=(value) do native.text = (value or else "").to_s

	redef fun signal(sender, data) do notify_observers new ButtonPressEvent(self)

	init do native.signal_connect("clicked", self, null)
end

# Button to go back between windows
class BackButton
	super Button

	# TODO i18n
	redef fun text=(value) do super(value or else "Back")

	redef fun signal(sender, data)
	do
		super

		app.window.on_back_button
	end
end

redef class Label
	redef type NATIVE: GtkLabel
	redef var native = new GtkLabel("")

	redef fun text do return native.text

	redef fun text=(value)
	do
		var cfmt = pango_markup_format.to_cstring
		var cvalue = (value or else "").to_cstring
		native.set_markup(cfmt, cvalue)
	end

	# Pango format string applied to the `text` attribute
	var pango_markup_format = "\%s" is lazy

	redef fun size=(size)
	do
		if size == null or size == 1.0 then
			pango_markup_format = "\%s"
		else if size < 1.0 then
			pango_markup_format = "<span size=\"small\">\%s</span>"
		else#if size > 1.0 then
			pango_markup_format = "<span size=\"large\">\%s</span>"
		end

		# Force reloading `text`
		text = text
	end

	redef fun align=(align)
	do
		align = align or else 0.0

		# Set whole label alignement
		native.set_alignment(align, 0.5)

		# Set multiline justification
		native.justify = if align == 0.5 then
			new GtkJustification.center
		else if align < 0.5 then
			new GtkJustification.left
		else#if align > 0.5 then
			new GtkJustification.right
	end
end

redef class CheckBox
	redef type NATIVE: GtkCheckButton
	redef var native = new GtkCheckButton

	redef fun signal(sender, data) do notify_observers new ToggleEvent(self)
	init do native.signal_connect("toggled", self, null)

	redef fun text do return native.text
	redef fun text=(value) do native.text = (value or else "").to_s

	redef fun is_checked do return native.active
	redef fun is_checked=(value) do native.active = value
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

redef class Text
	redef fun open_in_browser do system("xdg-open '{self.escape_to_sh}' &")
end
